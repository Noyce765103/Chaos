#ifndef __CHAOS_UTIL_H__
#define __CHAOS_UTIL_H__
#include <iostream>
#include <unistd.h>
#include <sys/syscall.h>
namespace chaos
{
    pid_t GetThreadId();
    uint32_t GetFiberId();
} // namespace chaos



#endif