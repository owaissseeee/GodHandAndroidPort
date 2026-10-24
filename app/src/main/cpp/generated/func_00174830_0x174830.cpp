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

// Function: func_00174830
// Address: 0x174830 - 0x174890
void func_00174830_0x174830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174830_0x174830");
#endif

    switch (ctx->pc) {
        case 0x17486cu: goto label_17486c;
        case 0x17487cu: goto label_17487c;
        default: break;
    }

    ctx->pc = 0x174830u;

    // 0x174830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174834: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x174834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x174838: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x174838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17483c: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x17483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x174840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17484c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x174850: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x174850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x174854: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x174854u;
    {
        const bool branch_taken_0x174854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174854u;
        // 0x174858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174854) {
            ctx->pc = 0x174870u;
            goto label_174870;
        }
    }
    ctx->pc = 0x17485Cu;
    // 0x17485c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x174860: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x174860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174864: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x174864u;
    SET_GPR_U32(ctx, 31, 0x17486Cu);
    ctx->pc = 0x174868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174864u;
    // 0x174868: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x174864u, 0x17486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17486Cu;
label_17486c:
    // 0x17486c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x17486cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_174870:
    // 0x174870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174874: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x174874u;
    SET_GPR_U32(ctx, 31, 0x17487Cu);
    ctx->pc = 0x174878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174874u;
    // 0x174878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x174874u, 0x17487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17487Cu;
label_17487c:
    // 0x17487c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17487cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174888: 0x3e00008  jr          $ra
    ctx->pc = 0x174888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174888u;
        // 0x17488c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174890u;
}
