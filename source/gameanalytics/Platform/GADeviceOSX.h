#ifndef _GADEVICEOSX_H
#define _GADEVICEOSX_H

#include "GACommon.h"

#if IS_MAC

const char* getOSXVersion();
const char* getConnectionType();
int getNumCpuCores();
int64_t getTotalDeviceMemory();
const char* getGPUName();

#endif

#endif /* end of include guard: _GADEVICEOSX_H */
