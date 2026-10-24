#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: getEmNum__Fv
// Address: 0x7996e8 - 0x7997b0
void getEmNum__Fv_0x7996e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x7996e8");
#endif

    switch (ctx->pc) {
        case 0x799718u: goto label_799718;
        case 0x799768u: goto label_799768;
        default: break;
    }

    ctx->pc = 0x7996e8u;

    // 0x7996e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7996ec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7996f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7996f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7996f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7996f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7996f8: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x7996fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799700: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799704: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799708: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x799708u;
    {
        const bool branch_taken_0x799708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799708) {
            ctx->pc = 0x799790u;
            goto label_799790;
        }
    }
    ctx->pc = 0x799710u;
    // 0x799710: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x799714: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_799718:
    // 0x799718: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799718) {
            ctx->pc = 0x79971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799718u;
            // 0x79971c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x799720u;
    // 0x799720: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x799724: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799728u;
    {
        const bool branch_taken_0x799728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799728u;
        // 0x79972c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799728) {
            ctx->pc = 0x799738u;
            goto label_799738;
        }
    }
    ctx->pc = 0x799730u;
    // 0x799730: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799738:
    // 0x799738: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79973c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79973c) {
            ctx->pc = 0x799784u;
            goto label_799784;
        }
    }
    ctx->pc = 0x799744u;
    // 0x799744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799744u;
    {
        const bool branch_taken_0x799744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799744) {
            ctx->pc = 0x799754u;
            goto label_799754;
        }
    }
    ctx->pc = 0x79974Cu;
    // 0x79974c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799754:
    // 0x799754: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799758: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x799758u;
    {
        const bool branch_taken_0x799758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799758) {
            ctx->pc = 0x79975Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799758u;
            // 0x79975c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x799760u;
    // 0x799760: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799760u;
    SET_GPR_U32(ctx, 31, 0x799768u);
    ctx->pc = 0x799764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799760u;
    // 0x799764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799760u, 0x799768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799768u;
label_799768:
    // 0x799768: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799768u;
    {
        const bool branch_taken_0x799768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799768) {
            ctx->pc = 0x79976Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799768u;
            // 0x79976c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x799770u;
    // 0x799770: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x799774: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x799774u;
    {
        const bool branch_taken_0x799774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799774) {
            ctx->pc = 0x799784u;
            goto label_799784;
        }
    }
    ctx->pc = 0x79977Cu;
    // 0x79977c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799780: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x799780u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_799784:
    // 0x799784: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_799788:
    // 0x799788: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x799788u;
    {
        const bool branch_taken_0x799788 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799788) {
            ctx->pc = 0x79978Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799788u;
            // 0x79978c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799718;
        }
    }
    ctx->pc = 0x799790u;
label_799790:
    // 0x799790: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799794: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799798: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79979c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79979cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7997a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7997a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7997a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7997a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7997A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A8u;
        // 0x7997ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997B0u;
}
} // namespace gh_r602
