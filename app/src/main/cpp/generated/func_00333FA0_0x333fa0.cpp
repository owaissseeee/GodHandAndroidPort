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

// Function: func_00333FA0
// Address: 0x333fa0 - 0x333fd8
void func_00333FA0_0x333fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333FA0_0x333fa0");
#endif

    switch (ctx->pc) {
        case 0x333fbcu: goto label_333fbc;
        case 0x333fc4u: goto label_333fc4;
        default: break;
    }

    ctx->pc = 0x333fa0u;

    // 0x333fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333fa4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x333fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x333fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333fac: 0x24429f68  addiu       $v0, $v0, -0x6098
    ctx->pc = 0x333facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942568));
    // 0x333fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x333fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fb4: 0xc0cd492  jal         func_335248
    ctx->pc = 0x333FB4u;
    SET_GPR_U32(ctx, 31, 0x333FBCu);
    ctx->pc = 0x333FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FB4u;
    // 0x333fb8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335248u, 0x333FB4u, 0x333FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FBCu;
label_333fbc:
    // 0x333fbc: 0xc0cd4b4  jal         func_3352D0
    ctx->pc = 0x333FBCu;
    SET_GPR_U32(ctx, 31, 0x333FC4u);
    ctx->pc = 0x333FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FBCu;
    // 0x333fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3352D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3352D0u, 0x333FBCu, 0x333FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FC4u;
label_333fc4:
    // 0x333fc4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x333fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x333fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333fcc: 0x24429f78  addiu       $v0, $v0, -0x6088
    ctx->pc = 0x333fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942584));
    // 0x333fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x333FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FD0u;
        // 0x333fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333FD8u;
}
