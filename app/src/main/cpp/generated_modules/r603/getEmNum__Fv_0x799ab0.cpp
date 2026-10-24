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
// Function: getEmNum__Fv
// Address: 0x799ab0 - 0x799b78
void getEmNum__Fv_0x799ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x799ab0");
#endif

    switch (ctx->pc) {
        case 0x799ae0u: goto label_799ae0;
        case 0x799b30u: goto label_799b30;
        default: break;
    }

    ctx->pc = 0x799ab0u;

    // 0x799ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799ab4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799ab8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799ac0: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799ac4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799acc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799ad0: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x799AD0u;
    {
        const bool branch_taken_0x799ad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD0u;
        // 0x799ad4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad0) {
            ctx->pc = 0x799B58u;
            goto label_799b58;
        }
    }
    ctx->pc = 0x799AD8u;
    // 0x799ad8: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x799adc: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_799ae0:
    // 0x799ae0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x799AE0u;
    {
        const bool branch_taken_0x799ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ae0) {
            ctx->pc = 0x799AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AE0u;
            // 0x799ae4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B50u;
            goto label_799b50;
        }
    }
    ctx->pc = 0x799AE8u;
    // 0x799ae8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799ae8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x799aec: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799af0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799AF0u;
    {
        const bool branch_taken_0x799af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af0) {
            ctx->pc = 0x799B00u;
            goto label_799b00;
        }
    }
    ctx->pc = 0x799AF8u;
    // 0x799af8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799afc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b00:
    // 0x799b00: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799b04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x799B04u;
    {
        const bool branch_taken_0x799b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B04u;
        // 0x799b08: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b04) {
            ctx->pc = 0x799B4Cu;
            goto label_799b4c;
        }
    }
    ctx->pc = 0x799B0Cu;
    // 0x799b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B0Cu;
    {
        const bool branch_taken_0x799b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B0Cu;
        // 0x799b10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b0c) {
            ctx->pc = 0x799B1Cu;
            goto label_799b1c;
        }
    }
    ctx->pc = 0x799B14u;
    // 0x799b14: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b1c:
    // 0x799b1c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x799b20: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x799B20u;
    {
        const bool branch_taken_0x799b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b20) {
            ctx->pc = 0x799B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B20u;
            // 0x799b24: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B50u;
            goto label_799b50;
        }
    }
    ctx->pc = 0x799B28u;
    // 0x799b28: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799B28u;
    SET_GPR_U32(ctx, 31, 0x799B30u);
    ctx->pc = 0x799B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B28u;
    // 0x799b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799B28u, 0x799B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799B30u;
    {
        const bool branch_taken_0x799b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b30) {
            ctx->pc = 0x799B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B30u;
            // 0x799b34: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B50u;
            goto label_799b50;
        }
    }
    ctx->pc = 0x799B38u;
    // 0x799b38: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x799b3c: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799B4Cu;
            goto label_799b4c;
        }
    }
    ctx->pc = 0x799B44u;
    // 0x799b44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799b48: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x799b48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_799b4c:
    // 0x799b4c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_799b50:
    // 0x799b50: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x799B50u;
    {
        const bool branch_taken_0x799b50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b50) {
            ctx->pc = 0x799B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B50u;
            // 0x799b54: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ae0;
        }
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x799b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799b68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799b70: 0x3e00008  jr          $ra
    ctx->pc = 0x799B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B70u;
        // 0x799b74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B78u;
}
} // namespace gh_r603
