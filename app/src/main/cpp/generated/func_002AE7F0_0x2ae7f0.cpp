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

// Function: func_002AE7F0
// Address: 0x2ae7f0 - 0x2ae838
void func_002AE7F0_0x2ae7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AE7F0_0x2ae7f0");
#endif

    switch (ctx->pc) {
        case 0x2ae828u: goto label_2ae828;
        default: break;
    }

    ctx->pc = 0x2ae7f0u;

    // 0x2ae7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae7f4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2ae7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2ae7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae7fc: 0x24637a84  addiu       $v1, $v1, 0x7A84
    ctx->pc = 0x2ae7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
    // 0x2ae800: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ae800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae804: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2ae804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2ae808: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ae808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x2ae80c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2ae80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2ae810: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2ae810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2ae814: 0x24842c00  addiu       $a0, $a0, 0x2C00
    ctx->pc = 0x2ae814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
    // 0x2ae818: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ae818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ae81c: 0x24a5e838  addiu       $a1, $a1, -0x17C8
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961208));
    // 0x2ae820: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2AE820u;
    SET_GPR_U32(ctx, 31, 0x2AE828u);
    ctx->pc = 0x2AE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE820u;
    // 0x2ae824: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2AE820u, 0x2AE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE828u;
label_2ae828:
    // 0x2ae828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae82c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE82Cu;
        // 0x2ae830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE834u;
    // 0x2ae834: 0x0  nop
    ctx->pc = 0x2ae834u;
    // NOP
    ctx->pc = 0x2ae838u;
}
