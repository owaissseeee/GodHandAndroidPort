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

// Function: cCoreSave_setCounter88
// Address: 0x1fbda0 - 0x1fbdd0
void cCoreSave_setCounter88_0x1fbda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setCounter88_0x1fbda0");
#endif

    ctx->pc = 0x1fbda0u;

    // 0x1fbda0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1fbda0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fbda4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1fbda4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fbda8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1fbda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1fbdac: 0x2c4203e8  sltiu       $v0, $v0, 0x3E8
    ctx->pc = 0x1fbdacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1fbdb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBDB0u;
    {
        const bool branch_taken_0x1fbdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbdb0) {
            ctx->pc = 0x1FBDC0u;
            goto label_1fbdc0;
        }
    }
    ctx->pc = 0x1FBDB8u;
    // 0x1fbdb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbdbc: 0xa4450088  sh          $a1, 0x88($v0)
    ctx->pc = 0x1fbdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 136), (uint16_t)GPR_U32(ctx, 5));
label_1fbdc0:
    // 0x1fbdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBDC8u;
    // 0x1fbdc8: 0x84620088  lh          $v0, 0x88($v1)
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1fbdcc: 0x0  nop
    ctx->pc = 0x1fbdccu;
    // NOP
    ctx->pc = 0x1fbdd0u;
}
