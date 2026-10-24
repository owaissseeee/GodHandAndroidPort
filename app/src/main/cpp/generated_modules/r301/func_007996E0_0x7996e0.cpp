#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_007996E0
// Address: 0x7996e0 - 0x7997a0
void func_007996E0_0x7996e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007996E0_0x7996e0");
#endif

    switch (ctx->pc) {
        case 0x799710u: goto label_799710;
        case 0x799760u: goto label_799760;
        default: break;
    }

    ctx->pc = 0x7996e0u;

    // 0x7996e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7996e4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7996e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7996ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7996ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7996f0: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x7996f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7996fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799700: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x799700u;
    {
        const bool branch_taken_0x799700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799700u;
        // 0x799704: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799700) {
            ctx->pc = 0x799780u;
            goto label_799780;
        }
    }
    ctx->pc = 0x799708u;
    // 0x799708: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79970c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_799710:
    // 0x799710: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x799710u;
    {
        const bool branch_taken_0x799710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799710) {
            ctx->pc = 0x799714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799710u;
            // 0x799714: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x799718u;
    // 0x799718: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79971c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799720: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799720u;
    {
        const bool branch_taken_0x799720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799720u;
        // 0x799724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799720) {
            ctx->pc = 0x799730u;
            goto label_799730;
        }
    }
    ctx->pc = 0x799728u;
    // 0x799728: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79972c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799730:
    // 0x799730: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799734: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799734u;
    {
        const bool branch_taken_0x799734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799734) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x79973Cu;
    // 0x79973c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79973c) {
            ctx->pc = 0x79974Cu;
            goto label_79974c;
        }
    }
    ctx->pc = 0x799744u;
    // 0x799744: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79974c:
    // 0x79974c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799750: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x799750u;
    {
        const bool branch_taken_0x799750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799750) {
            ctx->pc = 0x799754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799750u;
            // 0x799754: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x799758u;
    // 0x799758: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799758u;
    SET_GPR_U32(ctx, 31, 0x799760u);
    ctx->pc = 0x79975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799758u;
    // 0x79975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799758u, 0x799760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x799760u;
    {
        const bool branch_taken_0x799760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x799764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799760u;
        // 0x799764: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799760) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x799768u;
    // 0x799768: 0x92020614  lbu         $v0, 0x614($s0)
    ctx->pc = 0x799768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x79976c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799770: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x799770u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_799774:
    // 0x799774: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_799778:
    // 0x799778: 0x5620ffe5  bnel        $s1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x799778u;
    {
        const bool branch_taken_0x799778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799778) {
            ctx->pc = 0x79977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799778u;
            // 0x79977c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799710;
        }
    }
    ctx->pc = 0x799780u;
label_799780:
    // 0x799780: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799784: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799788: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79978c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79978cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799790: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799798: 0x3e00008  jr          $ra
    ctx->pc = 0x799798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997A0u;
}
} // namespace gh_r301
