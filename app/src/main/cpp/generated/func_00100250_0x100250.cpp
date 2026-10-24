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

// Function: func_00100250
// Address: 0x100250 - 0x100280
void func_00100250_0x100250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100250_0x100250");
#endif

    switch (ctx->pc) {
        case 0x100258u: goto label_100258;
        default: break;
    }

    ctx->pc = 0x100250u;

    // 0x100250: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x100254: 0xc  syscall     0
    ctx->pc = 0x100254u;
    ctx->pc = 0x100258u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_100258:
    // 0x100258: 0x0  nop
    ctx->pc = 0x100258u;
    // NOP
    // 0x10025c: 0x0  nop
    ctx->pc = 0x10025cu;
    // NOP
    // 0x100260: 0x0  nop
    ctx->pc = 0x100260u;
    // NOP
    // 0x100264: 0x0  nop
    ctx->pc = 0x100264u;
    // NOP
    // 0x100268: 0x0  nop
    ctx->pc = 0x100268u;
    // NOP
    // 0x10026c: 0x0  nop
    ctx->pc = 0x10026cu;
    // NOP
    // 0x100270: 0x0  nop
    ctx->pc = 0x100270u;
    // NOP
    // 0x100274: 0x0  nop
    ctx->pc = 0x100274u;
    // NOP
    // 0x100278: 0x0  nop
    ctx->pc = 0x100278u;
    // NOP
    // 0x10027c: 0x0  nop
    ctx->pc = 0x10027cu;
    // NOP
    ctx->pc = 0x100280u;
}
