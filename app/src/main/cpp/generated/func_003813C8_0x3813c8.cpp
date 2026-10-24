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

// Function: func_003813C8
// Address: 0x3813c8 - 0x381478
void func_003813C8_0x3813c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003813C8_0x3813c8");
#endif

    switch (ctx->pc) {
        case 0x381428u: goto label_381428;
        case 0x381464u: goto label_381464;
        default: break;
    }

    ctx->pc = 0x3813c8u;

    // 0x3813c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3813c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3813cc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x3813ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3813d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3813d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3813d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3813d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3813d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3813d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3813dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3813dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3813e0: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x3813e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3813e4: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x3813e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3813e8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3813e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3813ec: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x3813ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3813f0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x3813f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x3813f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3813F4u;
    {
        const bool branch_taken_0x3813f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3813F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813F4u;
        // 0x3813f8: 0x24500058  addiu       $s0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813f4) {
            ctx->pc = 0x381428u;
            goto label_381428;
        }
    }
    ctx->pc = 0x3813FCu;
    // 0x3813fc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3813fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x381400: 0x2862fff2  slti        $v0, $v1, -0xE
    ctx->pc = 0x381400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x381404: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x381404u;
    {
        const bool branch_taken_0x381404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381404u;
        // 0x381408: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381404) {
            ctx->pc = 0x381410u;
            goto label_381410;
        }
    }
    ctx->pc = 0x38140Cu;
    // 0x38140c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_381410:
    // 0x381410: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x381410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x381414: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x381414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x381418: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381418u;
    {
        const bool branch_taken_0x381418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381418) {
            ctx->pc = 0x38141Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381418u;
            // 0x38141c: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38142Cu;
            goto label_38142c;
        }
    }
    ctx->pc = 0x381420u;
    // 0x381420: 0xc0caa30  jal         func_32A8C0
    ctx->pc = 0x381420u;
    SET_GPR_U32(ctx, 31, 0x381428u);
    ctx->pc = 0x381424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381420u;
    // 0x381424: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8C0u, 0x381420u, 0x381428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381428u;
label_381428:
    // 0x381428: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x381428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_38142c:
    // 0x38142c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x38142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x381430: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x381430u;
    {
        const bool branch_taken_0x381430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381430) {
            ctx->pc = 0x381434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381430u;
            // 0x381434: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381468u;
            goto label_381468;
        }
    }
    ctx->pc = 0x381438u;
    // 0x381438: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x381438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x38143c: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x38143cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x381440: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x381440u;
    {
        const bool branch_taken_0x381440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381440u;
        // 0x381444: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381440) {
            ctx->pc = 0x38144Cu;
            goto label_38144c;
        }
    }
    ctx->pc = 0x381448u;
    // 0x381448: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x381448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_38144c:
    // 0x38144c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x38144cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x381450: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x381450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x381454: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381454u;
    {
        const bool branch_taken_0x381454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381454) {
            ctx->pc = 0x381458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381454u;
            // 0x381458: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381468u;
            goto label_381468;
        }
    }
    ctx->pc = 0x38145Cu;
    // 0x38145c: 0xc0caa30  jal         func_32A8C0
    ctx->pc = 0x38145Cu;
    SET_GPR_U32(ctx, 31, 0x381464u);
    ctx->pc = 0x381460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38145Cu;
    // 0x381460: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A8C0u, 0x38145Cu, 0x381464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381464u;
label_381464:
    // 0x381464: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_381468:
    // 0x381468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38146c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381470: 0x3e00008  jr          $ra
    ctx->pc = 0x381470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381470u;
        // 0x381474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381478u;
}
