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

// Function: KillEffectWithFlag
// Address: 0x3063b8 - 0x306470
void KillEffectWithFlag_0x3063b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KillEffectWithFlag_0x3063b8");
#endif

    switch (ctx->pc) {
        case 0x306420u: goto label_306420;
        case 0x306438u: goto label_306438;
        case 0x30644cu: goto label_30644c;
        case 0x306458u: goto label_306458;
        default: break;
    }

    ctx->pc = 0x3063b8u;

    // 0x3063b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3063b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3063bc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3063bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3063c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3063c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3063c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3063c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3063c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3063c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3063ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3063d0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3063D0u;
    {
        const bool branch_taken_0x3063d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3063D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063D0u;
        // 0x3063d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063d0) {
            ctx->pc = 0x3063E4u;
            goto label_3063e4;
        }
    }
    ctx->pc = 0x3063D8u;
    // 0x3063d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3063d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3063dc: 0x5222001f  beql        $s1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3063DCu;
    {
        const bool branch_taken_0x3063dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3063dc) {
            ctx->pc = 0x3063E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3063DCu;
            // 0x3063e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30645Cu;
            goto label_30645c;
        }
    }
    ctx->pc = 0x3063E4u;
label_3063e4:
    // 0x3063e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3063e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3063e8: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3063E8u;
    {
        const bool branch_taken_0x3063e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3063ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063E8u;
        // 0x3063ec: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063e8) {
            ctx->pc = 0x306428u;
            goto label_306428;
        }
    }
    ctx->pc = 0x3063F0u;
    // 0x3063f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3063F0u;
    {
        const bool branch_taken_0x3063f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3063f0) {
            ctx->pc = 0x3063F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3063F0u;
            // 0x3063f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306408u;
            goto label_306408;
        }
    }
    ctx->pc = 0x3063F8u;
    // 0x3063f8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3063F8u;
    {
        const bool branch_taken_0x3063f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063F8u;
        // 0x3063fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063f8) {
            ctx->pc = 0x306418u;
            goto label_306418;
        }
    }
    ctx->pc = 0x306400u;
    // 0x306400: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x306400u;
    {
        const bool branch_taken_0x306400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306400u;
        // 0x306404: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306400) {
            ctx->pc = 0x30645Cu;
            goto label_30645c;
        }
    }
    ctx->pc = 0x306408u;
label_306408:
    // 0x306408: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306408u;
    {
        const bool branch_taken_0x306408 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x30640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306408u;
        // 0x30640c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306408) {
            ctx->pc = 0x306440u;
            goto label_306440;
        }
    }
    ctx->pc = 0x306410u;
    // 0x306410: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x306410u;
    {
        const bool branch_taken_0x306410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306410u;
        // 0x306414: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306410) {
            ctx->pc = 0x30645Cu;
            goto label_30645c;
        }
    }
    ctx->pc = 0x306418u;
label_306418:
    // 0x306418: 0xc0c027e  jal         func_3009F8
    ctx->pc = 0x306418u;
    SET_GPR_U32(ctx, 31, 0x306420u);
    ctx->pc = 0x30641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306418u;
    // 0x30641c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3009F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3009F8u, 0x306418u, 0x306420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306420u;
label_306420:
    // 0x306420: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x306420u;
    {
        const bool branch_taken_0x306420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306420u;
        // 0x306424: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306420) {
            ctx->pc = 0x30645Cu;
            goto label_30645c;
        }
    }
    ctx->pc = 0x306428u;
label_306428:
    // 0x306428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30642c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30642cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306430: 0xc0bee98  jal         func_2FBA60
    ctx->pc = 0x306430u;
    SET_GPR_U32(ctx, 31, 0x306438u);
    ctx->pc = 0x306434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306430u;
    // 0x306434: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBA60u, 0x306430u, 0x306438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306438u;
label_306438:
    // 0x306438: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x306438u;
    {
        const bool branch_taken_0x306438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306438u;
        // 0x30643c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306438) {
            ctx->pc = 0x30645Cu;
            goto label_30645c;
        }
    }
    ctx->pc = 0x306440u;
label_306440:
    // 0x306440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x306440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306444: 0xc0bee98  jal         func_2FBA60
    ctx->pc = 0x306444u;
    SET_GPR_U32(ctx, 31, 0x30644Cu);
    ctx->pc = 0x306448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306444u;
    // 0x306448: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBA60u, 0x306444u, 0x30644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30644Cu;
label_30644c:
    // 0x30644c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306450: 0xc0c027e  jal         func_3009F8
    ctx->pc = 0x306450u;
    SET_GPR_U32(ctx, 31, 0x306458u);
    ctx->pc = 0x306454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306450u;
    // 0x306454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3009F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3009F8u, 0x306450u, 0x306458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306458u;
label_306458:
    // 0x306458: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x306458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30645c:
    // 0x30645c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30645cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306464: 0x3e00008  jr          $ra
    ctx->pc = 0x306464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306464u;
        // 0x306468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30646Cu;
    // 0x30646c: 0x0  nop
    ctx->pc = 0x30646cu;
    // NOP
    ctx->pc = 0x306470u;
}
