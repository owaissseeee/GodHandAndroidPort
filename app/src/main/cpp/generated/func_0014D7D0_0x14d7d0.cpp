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

// Function: func_0014D7D0
// Address: 0x14d7d0 - 0x14d828
void func_0014D7D0_0x14d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014D7D0_0x14d7d0");
#endif

    switch (ctx->pc) {
        case 0x14d7e8u: goto label_14d7e8;
        default: break;
    }

    ctx->pc = 0x14d7d0u;

    // 0x14d7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d7d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14d7dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d7e0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14D7E0u;
    SET_GPR_U32(ctx, 31, 0x14D7E8u);
    ctx->pc = 0x14D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7E0u;
    // 0x14d7e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14D7E0u, 0x14D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7E8u;
label_14d7e8:
    // 0x14d7e8: 0x8c430388  lw          $v1, 0x388($v0)
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x14d7ec: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14d7f0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x14d7f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14d7f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14d7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14d7f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14d7fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D7FCu;
    {
        const bool branch_taken_0x14d7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7FCu;
        // 0x14d800: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7fc) {
            ctx->pc = 0x14D808u;
            goto label_14d808;
        }
    }
    ctx->pc = 0x14D804u;
    // 0x14d804: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_14d808:
    // 0x14d808: 0xa20202be  sb          $v0, 0x2BE($s0)
    ctx->pc = 0x14d808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 702), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d80c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d814: 0x3e00008  jr          $ra
    ctx->pc = 0x14D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D814u;
        // 0x14d818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D81Cu;
    // 0x14d81c: 0x0  nop
    ctx->pc = 0x14d81cu;
    // NOP
    // 0x14d820: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d824: 0x0  nop
    ctx->pc = 0x14d824u;
    // NOP
    ctx->pc = 0x14d828u;
}
