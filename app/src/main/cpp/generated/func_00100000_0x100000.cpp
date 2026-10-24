#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00100000
// Address: 0x100000 - 0x100008
void func_00100000_0x100000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100000_0x100000");
#endif

    ctx->pc = 0x100000u;

    // 0x100000: 0x0  nop
    ctx->pc = 0x100000u;
    // NOP
    // 0x100004: 0x0  nop
    ctx->pc = 0x100004u;
    // NOP
    ctx->pc = 0x100008u;
}
