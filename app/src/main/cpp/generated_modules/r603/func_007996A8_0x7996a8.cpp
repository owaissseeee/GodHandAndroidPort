#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: func_007996A8
// Address: 0x7996a8 - 0x799778
void func_007996A8_0x7996a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007996A8_0x7996a8");
#endif

    switch (ctx->pc) {
        case 0x7996d0u: goto label_7996d0;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996f0u: goto label_7996f0;
        case 0x799704u: goto label_799704;
        case 0x799718u: goto label_799718;
        case 0x79972cu: goto label_79972c;
        case 0x799738u: goto label_799738;
        case 0x799750u: goto label_799750;
        case 0x79975cu: goto label_79975c;
        default: break;
    }

    ctx->pc = 0x7996a8u;

    // 0x7996a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7996ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7996acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7996b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7996b4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x7996b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7996bc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x7996c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7996c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7996c4: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x7996c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7996C8u;
    {
        const bool branch_taken_0x7996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c8) {
            ctx->pc = 0x7996DCu;
            goto label_7996dc;
        }
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x7996e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e8: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x799720u;
            goto label_799720;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996fc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7996FCu;
    SET_GPR_U32(ctx, 31, 0x799704u);
    ctx->pc = 0x799700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996FCu;
    // 0x799700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7996FCu, 0x799704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799704u;
label_799704:
    // 0x799704: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799704u;
    {
        const bool branch_taken_0x799704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799704) {
            ctx->pc = 0x799720u;
            goto label_799720;
        }
    }
    ctx->pc = 0x79970Cu;
    // 0x79970c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799710: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799710u;
    SET_GPR_U32(ctx, 31, 0x799718u);
    ctx->pc = 0x799714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799710u;
    // 0x799714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799710u, 0x799718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799718) {
            ctx->pc = 0x7996D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996d0;
        }
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799724: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799724u;
    SET_GPR_U32(ctx, 31, 0x79972Cu);
    ctx->pc = 0x799728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799724u;
    // 0x799728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799724u, 0x79972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79972Cu;
label_79972c:
    // 0x79972c: 0x26646af0  addiu       $a0, $s3, 0x6AF0
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27376));
    // 0x799730: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799730u;
    SET_GPR_U32(ctx, 31, 0x799738u);
    ctx->pc = 0x799734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799730u;
    // 0x799734: 0x2405006f  addiu       $a1, $zero, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799730u, 0x799738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799738u;
label_799738:
    // 0x799738: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79973c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799748: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x799748u;
    SET_GPR_U32(ctx, 31, 0x799750u);
    ctx->pc = 0x79974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799748u;
    // 0x79974c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x799748u, 0x799750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799754: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799754u;
    SET_GPR_U32(ctx, 31, 0x79975Cu);
    ctx->pc = 0x799758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799754u;
    // 0x799758: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799754u, 0x79975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79975Cu;
label_79975c:
    // 0x79975c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79975cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799760: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799768: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
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
        // 0x799774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
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
} // namespace gh_r603
