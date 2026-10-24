#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: getEmNum__Fv
// Address: 0x79aec8 - 0x79af90
void getEmNum__Fv_0x79aec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x79aec8");
#endif

    switch (ctx->pc) {
        case 0x79aef8u: goto label_79aef8;
        case 0x79af48u: goto label_79af48;
        default: break;
    }

    ctx->pc = 0x79aec8u;

    // 0x79aec8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79aecc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aed0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79aed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79aed8: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79aedc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79aedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aee0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79aee4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79aee8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79AEE8u;
    {
        const bool branch_taken_0x79aee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEE8u;
        // 0x79aeec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aee8) {
            ctx->pc = 0x79AF70u;
            goto label_79af70;
        }
    }
    ctx->pc = 0x79AEF0u;
    // 0x79aef0: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x79aef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x79aef4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79aef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79aef8:
    // 0x79aef8: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x79AEF8u;
    {
        const bool branch_taken_0x79aef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aef8) {
            ctx->pc = 0x79AEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEF8u;
            // 0x79aefc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF68u;
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF00u;
    // 0x79af00: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79af00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79af04: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79af04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79af08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AF08u;
    {
        const bool branch_taken_0x79af08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF08u;
        // 0x79af0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af08) {
            ctx->pc = 0x79AF18u;
            goto label_79af18;
        }
    }
    ctx->pc = 0x79AF10u;
    // 0x79af10: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79af10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79af14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79af18:
    // 0x79af18: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79af18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79af1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AF1Cu;
    {
        const bool branch_taken_0x79af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF1Cu;
        // 0x79af20: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af1c) {
            ctx->pc = 0x79AF64u;
            goto label_79af64;
        }
    }
    ctx->pc = 0x79AF24u;
    // 0x79af24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AF24u;
    {
        const bool branch_taken_0x79af24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF24u;
        // 0x79af28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af24) {
            ctx->pc = 0x79AF34u;
            goto label_79af34;
        }
    }
    ctx->pc = 0x79AF2Cu;
    // 0x79af2c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79af2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79af30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79af30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79af34:
    // 0x79af34: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79af34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79af38: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79AF38u;
    {
        const bool branch_taken_0x79af38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af38) {
            ctx->pc = 0x79AF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF38u;
            // 0x79af3c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF68u;
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF40u;
    // 0x79af40: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79AF40u;
    SET_GPR_U32(ctx, 31, 0x79AF48u);
    ctx->pc = 0x79AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF40u;
    // 0x79af44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79AF40u, 0x79AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF48u;
label_79af48:
    // 0x79af48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AF48u;
    {
        const bool branch_taken_0x79af48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af48) {
            ctx->pc = 0x79AF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF48u;
            // 0x79af4c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF68u;
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF50u;
    // 0x79af50: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79af50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79af54: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AF54u;
    {
        const bool branch_taken_0x79af54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF54u;
        // 0x79af58: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af54) {
            ctx->pc = 0x79AF64u;
            goto label_79af64;
        }
    }
    ctx->pc = 0x79AF5Cu;
    // 0x79af5c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79af60: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x79af60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_79af64:
    // 0x79af64: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79af64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79af68:
    // 0x79af68: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79AF68u;
    {
        const bool branch_taken_0x79af68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af68) {
            ctx->pc = 0x79AF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF68u;
            // 0x79af6c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aef8;
        }
    }
    ctx->pc = 0x79AF70u;
label_79af70:
    // 0x79af70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79af70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79af74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79af78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79af78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79af7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79af7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79af80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79af80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79af84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79af84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79af88: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF88u;
        // 0x79af8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AF90u;
}
} // namespace gh_r607
