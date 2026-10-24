#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_007993F0
// Address: 0x7993f0 - 0x7994b0
void func_007993F0_0x7993f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007993F0_0x7993f0");
#endif

    switch (ctx->pc) {
        case 0x799420u: goto label_799420;
        case 0x799470u: goto label_799470;
        default: break;
    }

    ctx->pc = 0x7993f0u;

    // 0x7993f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7993f4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7993f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7993f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7993fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7993fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799400: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799408: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79940c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799410: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x799410u;
    {
        const bool branch_taken_0x799410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799410) {
            ctx->pc = 0x799490u;
            goto label_799490;
        }
    }
    ctx->pc = 0x799418u;
    // 0x799418: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79941c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_799420:
    // 0x799420: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x799420u;
    {
        const bool branch_taken_0x799420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799420) {
            ctx->pc = 0x799424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799420u;
            // 0x799424: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799488u;
            goto label_799488;
        }
    }
    ctx->pc = 0x799428u;
    // 0x799428: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79942c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799430: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799430u;
    {
        const bool branch_taken_0x799430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799430) {
            ctx->pc = 0x799440u;
            goto label_799440;
        }
    }
    ctx->pc = 0x799438u;
    // 0x799438: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79943c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799440:
    // 0x799440: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799444: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799444u;
    {
        const bool branch_taken_0x799444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799444u;
        // 0x799448: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799444) {
            ctx->pc = 0x799484u;
            goto label_799484;
        }
    }
    ctx->pc = 0x79944Cu;
    // 0x79944c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x79945Cu;
            goto label_79945c;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79945c:
    // 0x79945c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799460: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x799460u;
    {
        const bool branch_taken_0x799460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799460) {
            ctx->pc = 0x799464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799460u;
            // 0x799464: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799488u;
            goto label_799488;
        }
    }
    ctx->pc = 0x799468u;
    // 0x799468: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x799484u;
            goto label_799484;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x92020614  lbu         $v0, 0x614($s0)
    ctx->pc = 0x799478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x79947c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799480: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x799480u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_799484:
    // 0x799484: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_799488:
    // 0x799488: 0x5620ffe5  bnel        $s1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x799488u;
    {
        const bool branch_taken_0x799488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799488) {
            ctx->pc = 0x79948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799488u;
            // 0x79948c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799420;
        }
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799494: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799498: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79949c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79949cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7994a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7994a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7994a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994B0u;
}
} // namespace gh_r304
