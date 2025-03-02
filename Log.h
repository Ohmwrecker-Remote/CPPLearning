#pragma once
#include <iostream>
class Log
{
public:
	const int LogLevel_Error = 0;
	const int LogLevel_Warning = 1;
	const int LogLevel_Info = 2;
private:
	int m_LogLevel = LogLevel_Info;
public:
	void SetLevel(int level){
		m_LogLevel = level;
	}

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
};

