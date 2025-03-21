#pragma once
#include <iostream>
class Logger{
public:
	//const int LogLevel_Error = 0;
	//const int LogLevel_Warning = 1;
	//const int LogLevel_Info = 2;

	// 使用enum可以避免使用用户随意输入，将可能的值限定在enum中
	enum LogLevel {
		LogLevel_Error = 0,
		LogLevel_Warning = 1,
		LogLevel_Info = 2
	}; 

	// 构造函数默认设置为Info级别，使用构造函数可以避免在每个函数中都调用SetLevel函数
// Java支持默认参数，C++不支持默认参数，所以只能使用构造函数
	Logger() {
		m_LogLevel = LogLevel_Info;
	}

	Logger(LogLevel SetDefaultLevel) {
		m_LogLevel = SetDefaultLevel;
	}
	
private:

	LogLevel m_LogLevel;

public:
	// 设置日志级别,有构造构造函数设置后不再需要调用此函数
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

// 继承Log类，加入Printl函数，打印日志级别
class PrintLogLevel : public Logger {
public:
	const char* LogLevelString = "Unknown";

	void Print() {
		const char* LogLevelString = getLoglevelString();
		std::cout << LogLevelString << std::endl;
	}
};