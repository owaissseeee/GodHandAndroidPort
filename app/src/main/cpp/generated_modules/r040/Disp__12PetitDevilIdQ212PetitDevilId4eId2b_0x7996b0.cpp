#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: Disp__12PetitDevilIdQ212PetitDevilId4eId2b
// Address: 0x7996b0 - 0x799778
void Disp__12PetitDevilIdQ212PetitDevilId4eId2b_0x7996b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disp__12PetitDevilIdQ212PetitDevilId4eId2b_0x7996b0");
#endif

    switch (ctx->pc) {
        case 0x7996e0u: goto label_7996e0;
        case 0x7996ecu: goto label_7996ec;
        case 0x799714u: goto label_799714;
        case 0x799730u: goto label_799730;
        case 0x79973cu: goto label_79973c;
        case 0x799764u: goto label_799764;
        default: break;
    }

    ctx->pc = 0x7996b0u;

    // 0x7996b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7996b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x7996b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7996bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7996c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7996c4: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x7996C4u;
    {
        const bool branch_taken_0x7996c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c4) {
            ctx->pc = 0x79971Cu;
            goto label_79971c;
        }
    }
    ctx->pc = 0x7996CCu;
    // 0x7996cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7996d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7996D0u;
    {
        const bool branch_taken_0x7996d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D0u;
        // 0x7996d4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d0) {
            ctx->pc = 0x799700u;
            goto label_799700;
        }
    }
    ctx->pc = 0x7996D8u;
    // 0x7996d8: 0x24f00700  addiu       $s0, $a3, 0x700
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x7996dc: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7996e0:
    // 0x7996e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x7996E4u;
    SET_GPR_U32(ctx, 31, 0x7996ECu);
    ctx->pc = 0x7996E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E4u;
    // 0x7996e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x7996E4u, 0x7996ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996ECu;
label_7996ec:
    // 0x7996ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x7996f0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x7996E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996e0;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x7996F8u;
    {
        const bool branch_taken_0x7996f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f8) {
            ctx->pc = 0x799768u;
            goto label_799768;
        }
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799704: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x799704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799708: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x79970c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79970Cu;
    SET_GPR_U32(ctx, 31, 0x799714u);
    ctx->pc = 0x799710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79970Cu;
    // 0x799710: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79970Cu, 0x799714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799714u;
label_799714:
    // 0x799714: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x799714u;
    {
        const bool branch_taken_0x799714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799714u;
        // 0x799718: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799714) {
            ctx->pc = 0x799768u;
            goto label_799768;
        }
    }
    ctx->pc = 0x79971Cu;
label_79971c:
    // 0x79971c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799720: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799720u;
    {
        const bool branch_taken_0x799720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799720u;
        // 0x799724: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799720) {
            ctx->pc = 0x799750u;
            goto label_799750;
        }
    }
    ctx->pc = 0x799728u;
    // 0x799728: 0x24f00700  addiu       $s0, $a3, 0x700
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x79972c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799730:
    // 0x799730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799734: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x799734u;
    SET_GPR_U32(ctx, 31, 0x79973Cu);
    ctx->pc = 0x799738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799734u;
    // 0x799738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x799734u, 0x79973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x799740: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x799744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799740u;
        // 0x799744: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799740) {
            ctx->pc = 0x799730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799730;
        }
    }
    ctx->pc = 0x799748u;
    // 0x799748: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799748u;
    {
        const bool branch_taken_0x799748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799748u;
        // 0x79974c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799748) {
            ctx->pc = 0x799768u;
            goto label_799768;
        }
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799754: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x799754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799758: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x79975c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79975Cu;
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->pc = 0x799760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79975Cu, 0x799764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799768:
    // 0x799768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79976c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799770: 0x3e00008  jr          $ra
    ctx->pc = 0x799770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799778u;
}
} // namespace gh_r040
