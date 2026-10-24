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

// Function: func_0033E5C0
// Address: 0x33e5c0 - 0x33e618
void func_0033E5C0_0x33e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E5C0_0x33e5c0");
#endif

    ctx->pc = 0x33e5c0u;

    // 0x33e5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e5c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e5cc: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x33e5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x33e5d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E5D0u;
    {
        const bool branch_taken_0x33e5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5D0u;
        // 0x33e5d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5d0) {
            ctx->pc = 0x33E5E8u;
            goto label_33e5e8;
        }
    }
    ctx->pc = 0x33E5D8u;
    // 0x33e5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e5dc: 0x80cf8ee  j           func_33E3B8
    ctx->pc = 0x33E5DCu;
    ctx->pc = 0x33E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E5DCu;
    // 0x33e5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E3B8u, 0x33E5DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33E5E4u;
    // 0x33e5e4: 0x0  nop
    ctx->pc = 0x33e5e4u;
    // NOP
label_33e5e8:
    // 0x33e5e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E5E8u;
    {
        const bool branch_taken_0x33e5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5E8u;
        // 0x33e5ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5e8) {
            ctx->pc = 0x33E5F8u;
            goto label_33e5f8;
        }
    }
    ctx->pc = 0x33E5F0u;
    // 0x33e5f0: 0x80cf888  j           func_33E220
    ctx->pc = 0x33E5F0u;
    ctx->pc = 0x33E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E5F0u;
    // 0x33e5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E220u, 0x33E5F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33E5F8u;
label_33e5f8:
    // 0x33e5f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E5F8u;
    {
        const bool branch_taken_0x33e5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e5f8) {
            ctx->pc = 0x33E610u;
            goto label_33e610;
        }
    }
    ctx->pc = 0x33E600u;
    // 0x33e600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e604: 0x80cf82a  j           func_33E0A8
    ctx->pc = 0x33E604u;
    ctx->pc = 0x33E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E604u;
    // 0x33e608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E0A8u, 0x33E604u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33E60Cu;
    // 0x33e60c: 0x0  nop
    ctx->pc = 0x33e60cu;
    // NOP
label_33e610:
    // 0x33e610: 0x3e00008  jr          $ra
    ctx->pc = 0x33E610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E610u;
        // 0x33e614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E618u;
}
