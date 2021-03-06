#ifndef COMMON_LOGGING_H
#define COMMON_LOGGING_H

#undef ERROR

enum class LogType
{
	INFO = 0,
	WARNING,
	ERROR
};

void UTIL_ShowMessageBox( const char* const pszMessage, const char* const pszCaption = "Message", const LogType logType = LogType::INFO );

void Msg( const char* const pszFormat, ... );

void Warning( const char* const pszFormat, ... );

#endif //COMMON_LOGGING_H
