#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: getEmNum__Fv
// Address: 0x79acc8 - 0x79ad90
void getEmNum__Fv_0x79acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x79acc8");
#endif

    switch (ctx->pc) {
        case 0x79acf8u: goto label_79acf8;
        case 0x79ad48u: goto label_79ad48;
        default: break;
    }

    ctx->pc = 0x79acc8u;

    // 0x79acc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79accc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79acd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79acd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79acd8: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79acd8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79acdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79acdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ace0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79ace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79ace4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79ace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79ace8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79ACE8u;
    {
        const bool branch_taken_0x79ace8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE8u;
        // 0x79acec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ace8) {
            ctx->pc = 0x79AD70u;
            goto label_79ad70;
        }
    }
    ctx->pc = 0x79ACF0u;
    // 0x79acf0: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x79acf4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79acf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79acf8:
    // 0x79acf8: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x79ACF8u;
    {
        const bool branch_taken_0x79acf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79acf8) {
            ctx->pc = 0x79ACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACF8u;
            // 0x79acfc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD68u;
            goto label_79ad68;
        }
    }
    ctx->pc = 0x79AD00u;
    // 0x79ad00: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79ad00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79ad04: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79ad04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79ad08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD08u;
    {
        const bool branch_taken_0x79ad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD08u;
        // 0x79ad0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad08) {
            ctx->pc = 0x79AD18u;
            goto label_79ad18;
        }
    }
    ctx->pc = 0x79AD10u;
    // 0x79ad10: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79ad10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79ad14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79ad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ad18:
    // 0x79ad18: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79ad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79ad1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AD1Cu;
    {
        const bool branch_taken_0x79ad1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD1Cu;
        // 0x79ad20: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad1c) {
            ctx->pc = 0x79AD64u;
            goto label_79ad64;
        }
    }
    ctx->pc = 0x79AD24u;
    // 0x79ad24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD24u;
    {
        const bool branch_taken_0x79ad24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad24) {
            ctx->pc = 0x79AD34u;
            goto label_79ad34;
        }
    }
    ctx->pc = 0x79AD2Cu;
    // 0x79ad2c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79ad2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79ad30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ad34:
    // 0x79ad34: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79ad38: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79AD38u;
    {
        const bool branch_taken_0x79ad38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad38) {
            ctx->pc = 0x79AD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD38u;
            // 0x79ad3c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD68u;
            goto label_79ad68;
        }
    }
    ctx->pc = 0x79AD40u;
    // 0x79ad40: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79AD40u;
    SET_GPR_U32(ctx, 31, 0x79AD48u);
    ctx->pc = 0x79AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD40u;
    // 0x79ad44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79AD40u, 0x79AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD48u;
label_79ad48:
    // 0x79ad48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AD48u;
    {
        const bool branch_taken_0x79ad48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad48) {
            ctx->pc = 0x79AD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD48u;
            // 0x79ad4c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD68u;
            goto label_79ad68;
        }
    }
    ctx->pc = 0x79AD50u;
    // 0x79ad50: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79ad50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79ad54: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD54u;
    {
        const bool branch_taken_0x79ad54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD54u;
        // 0x79ad58: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad54) {
            ctx->pc = 0x79AD64u;
            goto label_79ad64;
        }
    }
    ctx->pc = 0x79AD5Cu;
    // 0x79ad5c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79ad60: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x79ad60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_79ad64:
    // 0x79ad64: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79ad64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79ad68:
    // 0x79ad68: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79AD68u;
    {
        const bool branch_taken_0x79ad68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad68) {
            ctx->pc = 0x79AD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD68u;
            // 0x79ad6c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79AD70u;
label_79ad70:
    // 0x79ad70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79ad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79ad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ad78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79ad78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ad7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79ad7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ad80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79ad80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ad84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD88u;
        // 0x79ad8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD90u;
}
} // namespace gh_r604
