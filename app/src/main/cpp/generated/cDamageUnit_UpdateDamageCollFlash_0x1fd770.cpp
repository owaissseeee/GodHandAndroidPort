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

// Function: cDamageUnit_UpdateDamageCollFlash
// Address: 0x1fd770 - 0x1fd7b0
void cDamageUnit_UpdateDamageCollFlash_0x1fd770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_UpdateDamageCollFlash_0x1fd770");
#endif

    switch (ctx->pc) {
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd790u: goto label_1fd790;
        default: break;
    }

    ctx->pc = 0x1fd770u;

    // 0x1fd770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd778: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd77c: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x1fd77cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd780: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD780u;
    {
        const bool branch_taken_0x1fd780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd780) {
            ctx->pc = 0x1FD784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD780u;
            // 0x1fd784: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7A4u;
            goto label_1fd7a4;
        }
    }
    ctx->pc = 0x1FD788u;
label_1fd788:
    // 0x1fd788: 0xc07f330  jal         func_1FCCC0
    ctx->pc = 0x1FD788u;
    SET_GPR_U32(ctx, 31, 0x1FD790u);
    ctx->pc = 0x1FD78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD788u;
    // 0x1fd78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCCC0u, 0x1FD788u, 0x1FD790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD790u;
label_1fd790:
    // 0x1fd790: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x1fd790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fd794: 0x0  nop
    ctx->pc = 0x1fd794u;
    // NOP
    // 0x1fd798: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD798u;
    {
        const bool branch_taken_0x1fd798 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd798) {
            ctx->pc = 0x1FD788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd788;
        }
    }
    ctx->pc = 0x1FD7A0u;
    // 0x1fd7a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd7a4:
    // 0x1fd7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7A8u;
        // 0x1fd7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD7B0u;
}
