/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/Logger.hpp
*/

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <ctime>
#include <map>
#include <string>
#include <vector>

#include "Utils.hpp"

#define LOGGER(name) Logger::Instance::get(name)
#define LOGGERG Logger::Instance::getGlobalInstance()

#define LOG_DEBUG(name, message) Logger::Instance::get(name)->debug(message);
#define LOG_INFO(name, message) Logger::Instance::get(name)->info(message);
#define LOG_WARNING(name, message) Logger::Instance::get(name)->warning(message);
#define LOG_ERROR(name, message) Logger::Instance::get(name)->error(message);
#define LOG_FATAL(name, message) Logger::Instance::get(name)->fatal(message);

#define LOGG_DEBUG(name, message) Logger::Instance::get(name)->debug(FILE_NAME, LINE_NUMBER, message);
#define LOGG_INFO(name, message) Logger::Instance::get(name)->info(FILE_NAME, LINE_NUMBER, message);
#define LOGG_WARNING(name, message) Logger::Instance::get(name)->warning(FILE_NAME, LINE_NUMBER, message);
#define LOGG_ERROR(name, message) Logger::Instance::get(name)->error(FILE_NAME, LINE_NUMBER, message);
#define LOGG_FATAL(name, message) Logger::Instance::get(name)->fatal(FILE_NAME, LINE_NUMBER, message);

namespace Logger {

 enum LogLevel {
  Debug = 1,
  Info = 2,
  Warning = 3,
  Error = 4,
  Fatal = 5
 };

 enum LogMode {
  Output = 1,
  File = 2,
  OutputAndFile = 3
 };

 class Log {
  public:
   Log(LogLevel level, const std::string &loggerName, const std::string &message, const std::string &timestamp);
   ~Log(void);

   LogLevel getLevel(void) const;
   std::string &getLoggerName(void) const;
   std::string &getMessage(void) const;
   std::string &getTimestamp(void) const;

   std::string toString(void);

  private:
   LogLevel _level;
   std::string _loggerName;
   std::string _message;
   std::string _timestamp;
 };

 class Time {
  public:
   Time(const std::string &format = "y-M-d h:m:s");
   ~Time(void);

   std::string getFormat(void) const;
   Time setFormat(const std::string &format);

   Time now(void);
   std::string toString(void);

  private:
   static const std::string days[7][2];
   static const std::string months[12][2];

   std::string _format;
   time_t _time;
 };

 class Instance {
  public:
   Instance(const std::string &name);
   ~Instance(void);

   static Instance *get(const std::string &name);
   static Instance *getGlobalInstance(void);
   static std::string levelToString(LogLevel level);
   static LogLevel levelFromString(const std::string &str);

   LogMode getLogMode(void) const;
   void setLogMode(LogMode mode);
   std::string getTimeFormat(void) const;
   void setTimeFormat(const std::string &format);

   void debug(const std::string &message);
   void debug(const std::string &file, const int &line, const std::string &message);
       void error(const std::string &message);
   void error(const std::string &file, const int &line, const std::string &message);
   void fatal(const std::string &message);
   void fatal(const std::string &file, const int &line, const std::string &message);
   void info(const std::string &message);
   void info(const std::string &file, const int &line, const std::string &message);
   void log(LogLevel level, const std::string &message);
   void log(LogLevel level, const std::string &file, const int &line, const std::string &message);
   void warning(const std::string &message);
   void warning(const std::string &file, const int &line, const std::string &message);

  private:
   void appendFile(const std::string &fileName, Log &log);

   static Instance *_globalInstance;
   static std::map<std::string, Instance*> _instances;

   LogMode _logMode;
   std::string _name;
   Time _time;
 };

}

#endif /* LOGGER_HPP */
