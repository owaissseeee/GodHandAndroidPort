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

// Function: func_002DC5E0
// Address: 0x2dc5e0 - 0x2dc670
void func_002DC5E0_0x2dc5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC5E0_0x2dc5e0");
#endif

    switch (ctx->pc) {
        case 0x2dc5f4u: goto label_2dc5f4;
        case 0x2dc60cu: goto label_2dc60c;
        case 0x2dc630u: goto label_2dc630;
        case 0x2dc660u: goto label_2dc660;
        default: break;
    }

    ctx->pc = 0x2dc5e0u;

    // 0x2dc5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc5e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc5ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC5ECu;
    SET_GPR_U32(ctx, 31, 0x2DC5F4u);
    ctx->pc = 0x2DC5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5ECu;
    // 0x2dc5f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC5ECu, 0x2DC5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5F4u;
label_2dc5f4:
    // 0x2dc5f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5f8: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dc5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dc5fc: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC5FCu;
    {
        const bool branch_taken_0x2dc5fc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc5fc) {
            ctx->pc = 0x2DC600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC5FCu;
            // 0x2dc600: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC664u;
            goto label_2dc664;
        }
    }
    ctx->pc = 0x2DC604u;
    // 0x2dc604: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC604u;
    SET_GPR_U32(ctx, 31, 0x2DC60Cu);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC604u, 0x2DC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC60Cu;
label_2dc60c:
    // 0x2dc60c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC60Cu;
    {
        const bool branch_taken_0x2dc60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc60c) {
            ctx->pc = 0x2DC610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC60Cu;
            // 0x2dc610: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC664u;
            goto label_2dc664;
        }
    }
    ctx->pc = 0x2DC614u;
    // 0x2dc614: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc618: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc61c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc620: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC620u;
    {
        const bool branch_taken_0x2dc620 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc620) {
            ctx->pc = 0x2DC624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC620u;
            // 0x2dc624: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC664u;
            goto label_2dc664;
        }
    }
    ctx->pc = 0x2DC628u;
    // 0x2dc628: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC628u;
    SET_GPR_U32(ctx, 31, 0x2DC630u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC628u, 0x2DC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC630u;
label_2dc630:
    // 0x2dc630: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC630u;
    {
        const bool branch_taken_0x2dc630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc630) {
            ctx->pc = 0x2DC634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC630u;
            // 0x2dc634: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC664u;
            goto label_2dc664;
        }
    }
    ctx->pc = 0x2DC638u;
    // 0x2dc638: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dc638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dc63c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc63cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc640: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc644: 0x2508c670  addiu       $t0, $t0, -0x3990
    ctx->pc = 0x2dc644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952560));
    // 0x2dc648: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dc648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc64c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dc64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dc650: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2dc650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc658: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC658u;
    SET_GPR_U32(ctx, 31, 0x2DC660u);
    ctx->pc = 0x2DC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC658u;
    // 0x2dc65c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC658u, 0x2DC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC660u;
label_2dc660:
    // 0x2dc660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc664:
    // 0x2dc664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc668: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC668u;
        // 0x2dc66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC670u;
}
