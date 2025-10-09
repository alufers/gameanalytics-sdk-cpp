#ifndef _GADEVICEOSX_H
#define _GADEVICEOSX_H

#include "GACommon.h"
#include <string>

#if IS_MAC

std::string getOSXVersion();
std::string getConnectionType();
int getNumCpuCores();
int64_t getTotalDeviceMemory();
std::string getGPUName();

#endif

#endif /* end of include guard: _GADEVICEOSX_H */
