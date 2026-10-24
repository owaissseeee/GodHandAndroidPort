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

// Function: GuardedCall_00329FD0_329F98
// Address: 0x329f98 - 0x329fd0
void GuardedCall_00329FD0_329F98_0x329f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GuardedCall_00329FD0_329F98_0x329f98");
#endif

    switch (ctx->pc) {
        case 0x329facu: goto label_329fac;
        case 0x329fb4u: goto label_329fb4;
        case 0x329fbcu: goto label_329fbc;
        default: break;
    }

    ctx->pc = 0x329f98u;

    // 0x329f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329fa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x329fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x329fa4: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x329FA4u;
    SET_GPR_U32(ctx, 31, 0x329FACu);
    ctx->pc = 0x329FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FA4u;
    // 0x329fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x329FA4u, 0x329FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FACu;
label_329fac:
    // 0x329fac: 0xc0ca7f4  jal         func_329FD0
    ctx->pc = 0x329FACu;
    SET_GPR_U32(ctx, 31, 0x329FB4u);
    ctx->pc = 0x329FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FACu;
    // 0x329fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329FD0u, 0x329FACu, 0x329FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FB4u;
label_329fb4:
    // 0x329fb4: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x329FB4u;
    SET_GPR_U32(ctx, 31, 0x329FBCu);
    ctx->pc = 0x329FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FB4u;
    // 0x329fb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x329FB4u, 0x329FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FBCu;
label_329fbc:
    // 0x329fbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x329fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329fc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x329fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x329FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FC8u;
        // 0x329fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329FD0u;
}
