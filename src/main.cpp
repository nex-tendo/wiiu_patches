#include <wups.h>
#include <whb/log.h>
#include <whb/log_udp.h>

#include "utils.hpp"
#include "patchs/act.hpp"

WUPS_PLUGIN_NAME("Nextendo Network Patcher");
WUPS_PLUGIN_DESCRIPTION("Nextendo Network Patcher");
WUPS_PLUGIN_VERSION("v1.0");
WUPS_PLUGIN_AUTHOR("cedkeChat01");
WUPS_PLUGIN_LICENSE("MIT");

INITIALIZE_PLUGIN() {
    WHBLogUdpInit();

    PatchAct();
}

DEINITIALIZE_PLUGIN() {
    WHBLogUdpDeinit();
}

ON_APPLICATION_START() {
    WHBLogUdpInit();
    WHBLogPrintf("Patcher starting..");
}


ON_APPLICATION_ENDS() {
    WHBLogPrintf("Patcher ending..");
}