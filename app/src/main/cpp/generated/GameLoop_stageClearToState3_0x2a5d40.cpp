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

// Function: GameLoop_stageClearToState3
// Address: 0x2a5d40 - 0x2a5d80
void GameLoop_stageClearToState3_0x2a5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GameLoop_stageClearToState3_0x2a5d40");
#endif

    switch (ctx->pc) {
        case 0x2a5d5cu: goto label_2a5d5c;
        case 0x2a5d68u: goto label_2a5d68;
        default: break;
    }

    ctx->pc = 0x2a5d40u;

    // 0x2a5d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5d44: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5d48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5d54: 0xc0afe32  jal         func_2BF8C8
    ctx->pc = 0x2A5D54u;
    SET_GPR_U32(ctx, 31, 0x2A5D5Cu);
    ctx->pc = 0x2A5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D54u;
    // 0x2a5d58: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF8C8u, 0x2A5D54u, 0x2A5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D5Cu;
label_2a5d5c:
    // 0x2a5d5c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2a5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2a5d60: 0xc0b2af8  jal         func_2CABE0
    ctx->pc = 0x2A5D60u;
    SET_GPR_U32(ctx, 31, 0x2A5D68u);
    ctx->pc = 0x2A5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D60u;
    // 0x2a5d64: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABE0u, 0x2A5D60u, 0x2A5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D68u;
label_2a5d68:
    // 0x2a5d68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5d70: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2a5d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a5d74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D78u;
        // 0x2a5d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5D80u;
}
