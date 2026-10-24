#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r803_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r803
{
// Function: getEmNum__5cR803
// Address: 0x7996d8 - 0x799780
void getEmNum__5cR803_0x7996d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__5cR803_0x7996d8");
#endif

    switch (ctx->pc) {
        case 0x799700u: goto label_799700;
        case 0x799750u: goto label_799750;
        default: break;
    }

    ctx->pc = 0x7996d8u;

    // 0x7996d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7996dc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7996e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7996e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7996e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7996e8: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x7996ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x799768u;
            goto label_799768;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7996fc: 0x0  nop
    ctx->pc = 0x7996fcu;
    // NOP
label_799700:
    // 0x799700: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799700u;
    {
        const bool branch_taken_0x799700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799700) {
            ctx->pc = 0x799704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799700u;
            // 0x799704: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799708u;
    // 0x799708: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79970c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799710u;
    {
        const bool branch_taken_0x799710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799710) {
            ctx->pc = 0x799720u;
            goto label_799720;
        }
    }
    ctx->pc = 0x799718u;
    // 0x799718: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79971c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799720:
    // 0x799720: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799724: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799724u;
    {
        const bool branch_taken_0x799724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799724u;
        // 0x799728: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799724) {
            ctx->pc = 0x79975Cu;
            goto label_79975c;
        }
    }
    ctx->pc = 0x79972Cu;
    // 0x79972c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79972Cu;
    {
        const bool branch_taken_0x79972c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79972c) {
            ctx->pc = 0x79973Cu;
            goto label_79973c;
        }
    }
    ctx->pc = 0x799734u;
    // 0x799734: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79973c:
    // 0x79973c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799740: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799740) {
            ctx->pc = 0x799744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799740u;
            // 0x799744: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799748u;
    // 0x799748: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799748u;
    SET_GPR_U32(ctx, 31, 0x799750u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799748u, 0x799750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799754: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799758: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x799758u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79975c:
    // 0x79975c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_799760:
    // 0x799760: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x799760u;
    {
        const bool branch_taken_0x799760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799760) {
            ctx->pc = 0x799764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799760u;
            // 0x799764: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799700;
        }
    }
    ctx->pc = 0x799768u;
label_799768:
    // 0x799768: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x799768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79976c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79976cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799778: 0x3e00008  jr          $ra
    ctx->pc = 0x799778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799780u;
}
} // namespace gh_r803
