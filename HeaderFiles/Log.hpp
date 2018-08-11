#pragma once

class Log {
public:
    int LogLevelError = 0;
    int LogLevelWarning = 1;
    int LogLevelInfo = 2;

private:
    int m_LogLevel = 2;

public:
    void SetLogLevel(int level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};
