#include "ClientProvider.h"

EVRInitError ClientTrackedDeviceProvider::Init(EClientDriverMode eDriverMode, IDriverLog * pDriverLog, vr::IClientDriverHost * pDriverHost, const char * pchUserDriverConfigDir, const char * pchDriverInstallDir)
{
  if (!logger) { logger = std::make_unique<Log>(pDriverLog); }

  logDebug("ClientTrackedDeviceProvider::Init()");

  host = pDriverHost;

  if (eDriverMode == ClientDriverMode_Watchdog)
  {
    return VRInitError_Init_LowPowerWatchdogNotSupported;
  }

  return VRInitError_None;
}

void ClientTrackedDeviceProvider::Cleanup()
{
  logDebug("ClientTrackedDeviceProvider::Cleanup()");
}

bool ClientTrackedDeviceProvider::BIsHmdPresent(const char * pchUserConfigDir)
{
  logDebug("ClientTrackedDeviceProvider::BIsHmdPresent()");

  return true;
}

EVRInitError ClientTrackedDeviceProvider::SetDisplayId(const char * pchDisplayId)
{
  logDebug("ClientTrackedDeviceProvider::SetDisplayId(%s)", pchDisplayId);

  return VRInitError_None;
}

HiddenAreaMesh_t ClientTrackedDeviceProvider::GetHiddenAreaMesh(EVREye eEye, EHiddenAreaMeshType type)
{
  logDebug("ClientTrackedDeviceProvider::GetHiddenAreaMesh()");

  vr::HiddenAreaMesh_t mesh = {};

  return mesh;
}

uint32_t ClientTrackedDeviceProvider::GetMCImage(uint32_t * pImgWidth, uint32_t * pImgHeight, uint32_t * pChannels, void * pDataBuffer, uint32_t unBufferLen)
{
  logDebug("ClientTrackedDeviceProvider::GetMCImage()");

  return 0;
}