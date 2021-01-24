#include <iostream>
#include "../chaos/log.h"
int main(int argc, char** argv){
    chaos::Logger::ptr logger(new chaos::Logger);
    logger->addAppender(chaos::LogAppender::ptr(new chaos::StdoutLogAppender));
    chaos::LogEvent::ptr event(new chaos::LogEvent(__FILE__, __LINE__, 0, 1, 2, time(0)));
    logger->log(chaos::LogLevel::DEBUG, event);
    return 0;
}