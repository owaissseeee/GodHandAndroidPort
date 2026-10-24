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

// Function: OwnerObj_destroyOwnedPair
// Address: 0x1a2630 - 0x1a26c0
void OwnerObj_destroyOwnedPair_0x1a2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OwnerObj_destroyOwnedPair_0x1a2630");
#endif

    switch (ctx->pc) {
        case 0x1a2670u: goto label_1a2670;
        case 0x1a2684u: goto label_1a2684;
        case 0x1a26a0u: goto label_1a26a0;
        default: break;
    }

    ctx->pc = 0x1a2630u;

    // 0x1a2630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a2634: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a2634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a2638: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a263c: 0x24426f88  addiu       $v0, $v0, 0x6F88
    ctx->pc = 0x1a263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28552));
    // 0x1a2640: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a2644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a2644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2648: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a264c: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x1a264cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x1a2650: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a2650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a2654: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a2654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2658: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a265c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a265cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2664: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x1a2664u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x1a2668: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x1a2668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x1a266c: 0x0  nop
    ctx->pc = 0x1a266cu;
    // NOP
label_1a2670:
    // 0x1a2670: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2674: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2674u;
    {
        const bool branch_taken_0x1a2674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2674) {
            ctx->pc = 0x1A2678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2674u;
            // 0x1a2678: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A268Cu;
            goto label_1a268c;
        }
    }
    ctx->pc = 0x1A267Cu;
    // 0x1a267c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A267Cu;
    SET_GPR_U32(ctx, 31, 0x1A2684u);
    ctx->pc = 0x1A2680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A267Cu;
    // 0x1a2680: 0x26844380  addiu       $a0, $s4, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A267Cu, 0x1A2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2684u;
label_1a2684:
    // 0x1a2684: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a2684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a2688: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a2688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a268c:
    // 0x1a268c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A268Cu;
    {
        const bool branch_taken_0x1a268c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1A2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A268Cu;
        // 0x1a2690: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a268c) {
            ctx->pc = 0x1A2670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2670;
        }
    }
    ctx->pc = 0x1A2694u;
    // 0x1a2694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2698: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A2698u;
    SET_GPR_U32(ctx, 31, 0x1A26A0u);
    ctx->pc = 0x1A269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2698u;
    // 0x1a269c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A2698u, 0x1A26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26A0u;
label_1a26a0:
    // 0x1a26a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a26a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a26a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a26a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a26a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a26a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a26ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a26acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a26b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a26b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a26b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a26b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a26b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A26B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26B8u;
        // 0x1a26bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A26B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A26C0u;
}
