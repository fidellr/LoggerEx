#pragma once

class Log {
public:
    enum Level {
        LogLevelError = 0,LogLevelWarning, LogLevelInfo
    };

private:
    int m_LogLevel = 2;

public:
    void SetLogLevel(int level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};
