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

// Function: abort
// Address: 0x3a7b48 - 0x3a7b58
void abort_0x3a7b48(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("abort_0x3a7b48");
#endif


    // 0x3a7b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7b50: 0xc040092  jal         func_100248
    SET_GPR_U32(ctx, 31, 0x3A7B58u);
    ctx->pc = 0x3A7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B50u;
    // 0x3a7b54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00100248_0x100248, 0x100248u, 0x3a7b58u)) {
        return;
    }
    ctx->pc = 0x3A7B58u;
}