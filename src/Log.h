#pragma once
#include <iostream>
class Logger{
public:
	//const int LogLevel_Error = 0;
	//const int LogLevel_Warning = 1;
	//const int LogLevel_Info = 2;

	// ʹ��enum���Ա���ʹ���û��������룬�����ܵ�ֵ�޶���enum��
	enum LogLevel {
		LogLevel_Error = 0,
		LogLevel_Warning = 1,
		LogLevel_Info = 2
	}; 

	// ���캯��Ĭ������ΪInfo����ʹ�ù��캯�����Ա�����ÿ�������ж�����SetLevel����
// Java֧��Ĭ�ϲ�����C++��֧��Ĭ�ϲ���������ֻ��ʹ�ù��캯��
	Logger() {
		m_LogLevel = LogLevel_Info;
	}

	Logger(LogLevel SetDefaultLevel) {
		m_LogLevel = SetDefaultLevel;
	}
	
private:

	LogLevel m_LogLevel;

public:
	// ������־����,�й��칹�캯�����ú�����Ҫ���ô˺���
	//void SetLevel(LogLevel level){
	//	m_LogLevel = level;
	//}

	void Error(const char* message) {
		if (m_LogLevel >= LogLevel_Error) {
			std::cout << "[Error]: " << message << std::endl;
		}
	}
	void Warn(const char* message) {
		if (m_LogLevel >= LogLevel_Warning) {
			std::cout << "[Warning]: " << message << std::endl;
		}
	}

	void Info(const char* message) {
		if (m_LogLevel >= LogLevel_Info) {
			std::cout << "[Info]: " << message << std::endl;
		}
	}

	const char* getLoglevelString() {
		if (m_LogLevel == LogLevel_Error) {
			return "Error";
		}
		else if (m_LogLevel == LogLevel_Warning) {
			return "Warning";
		}
		else if (m_LogLevel == LogLevel_Info) {
			return "Info";
		}
		else {
			return "Unknown";
		}
	}
};

// �̳�Log�࣬����Printl��������ӡ��־����
class PrintLogLevel : public Logger {
public:
	const char* LogLevelString = "Unknown";

	void Print() {
		const char* LogLevelString = getLoglevelString();
		std::cout << LogLevelString << std::endl;
	}
};