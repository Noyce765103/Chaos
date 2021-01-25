#include <iostream>
#include "../chaos/log.h"
#include "../chaos/util.h"
int main(int argc, char** argv){
    chaos::Logger::ptr logger(new chaos::Logger);
    logger->addAppender(chaos::LogAppender::ptr(new chaos::StdoutLogAppender));
    //chaos::LogEvent::ptr event(new chaos::LogEvent(logger, logger->getLevel(), __FILE__, __LINE__, 0, chaos::GetThreadId(), chaos::GetFiberId(), time(0)));
    //logger->log(chaos::LogLevel::DEBUG, event);

  
    CHAOS_LOG_INFO(logger) << "test macro";
    CHAOS_LOG_ERROR(logger) << "test macro error";
    return 0;
}