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

// Function: cOm5a_setOpenType
// Address: 0x1ada88 - 0x1adae8
void cOm5a_setOpenType_0x1ada88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5a_setOpenType_0x1ada88");
#endif

    switch (ctx->pc) {
        case 0x1adac0u: goto label_1adac0;
        case 0x1adaccu: goto label_1adacc;
        default: break;
    }

    ctx->pc = 0x1ada88u;

    // 0x1ada88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ada8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ada8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ada90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ada90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ada94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ada94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ada98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ada9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ada9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa0: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1adaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1adaa4: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADAA4u;
    {
        const bool branch_taken_0x1adaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1ADAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAA4u;
        // 0x1adaa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adaa4) {
            ctx->pc = 0x1ADAD4u;
            goto label_1adad4;
        }
    }
    ctx->pc = 0x1ADAACu;
    // 0x1adaac: 0x9203060d  lbu         $v1, 0x60D($s0)
    ctx->pc = 0x1adaacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1549)));
    // 0x1adab0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADAB0u;
    {
        const bool branch_taken_0x1adab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1adab0) {
            ctx->pc = 0x1ADAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADAB0u;
            // 0x1adab4: 0xae110600  sw          $s1, 0x600($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADAD4u;
            goto label_1adad4;
        }
    }
    ctx->pc = 0x1ADAB8u;
    // 0x1adab8: 0xc06b672  jal         func_1AD9C8
    ctx->pc = 0x1ADAB8u;
    SET_GPR_U32(ctx, 31, 0x1ADAC0u);
    ctx->pc = 0x1AD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD9C8u, 0x1ADAB8u, 0x1ADAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAC0u;
label_1adac0:
    // 0x1adac0: 0xae110600  sw          $s1, 0x600($s0)
    ctx->pc = 0x1adac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 17));
    // 0x1adac4: 0xc06b646  jal         func_1AD918
    ctx->pc = 0x1ADAC4u;
    SET_GPR_U32(ctx, 31, 0x1ADACCu);
    ctx->pc = 0x1ADAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAC4u;
    // 0x1adac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD918u, 0x1ADAC4u, 0x1ADACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADACCu;
label_1adacc:
    // 0x1adacc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADACCu;
    {
        const bool branch_taken_0x1adacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADACCu;
        // 0x1adad0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adacc) {
            ctx->pc = 0x1ADAD8u;
            goto label_1adad8;
        }
    }
    ctx->pc = 0x1ADAD4u;
label_1adad4:
    // 0x1adad4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1adad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1adad8:
    // 0x1adad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAE0u;
        // 0x1adae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADAE8u;
}
