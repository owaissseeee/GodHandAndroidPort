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

// Function: HideModelMgr_ResetHiddenModels
// Address: 0x308a38 - 0x308bc0
void HideModelMgr_ResetHiddenModels_0x308a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HideModelMgr_ResetHiddenModels_0x308a38");
#endif

    switch (ctx->pc) {
        case 0x308a70u: goto label_308a70;
        case 0x308a78u: goto label_308a78;
        case 0x308a90u: goto label_308a90;
        case 0x308ae8u: goto label_308ae8;
        default: break;
    }

    ctx->pc = 0x308a38u;

    // 0x308a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308a3c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x308a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x308a40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x308a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x308a44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x308a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x308a48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x308a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x308a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308a54: 0x8c834c38  lw          $v1, 0x4C38($a0)
    ctx->pc = 0x308a54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C38u));
    // 0x308a58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308a5c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x308a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308a60: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x308a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308a64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x308A64u;
    {
        const bool branch_taken_0x308a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A64u;
        // 0x308a68: 0x3c120075  lui         $s2, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a64) {
            ctx->pc = 0x308AC0u;
            goto label_308ac0;
        }
    }
    ctx->pc = 0x308A6Cu;
    // 0x308a6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308a70:
    // 0x308a70: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x308A70u;
    SET_GPR_U32(ctx, 31, 0x308A78u);
    ctx->pc = 0x308A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A70u;
    // 0x308a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x308A70u, 0x308A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A78u;
label_308a78:
    // 0x308a78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x308a78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a7c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x308A7Cu;
    {
        const bool branch_taken_0x308a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A7Cu;
        // 0x308a80: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a7c) {
            ctx->pc = 0x308AA8u;
            goto label_308aa8;
        }
    }
    ctx->pc = 0x308A84u;
    // 0x308a84: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x308a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x308a88: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x308a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x308a8c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x308a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_308a90:
    // 0x308a90: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x308a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x308a94: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x308a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x308a98: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x308a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
    // 0x308a9c: 0x0  nop
    ctx->pc = 0x308a9cu;
    // NOP
    // 0x308aa0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x308AA0u;
    {
        const bool branch_taken_0x308aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308aa0) {
            ctx->pc = 0x308AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308AA0u;
            // 0x308aa4: 0x8c620380  lw          $v0, 0x380($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308a90;
        }
    }
    ctx->pc = 0x308AA8u;
label_308aa8:
    // 0x308aa8: 0x8e234c38  lw          $v1, 0x4C38($s1)
    ctx->pc = 0x308aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19512)));
    // 0x308aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ab0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308ab4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x308ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308ab8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x308AB8u;
    {
        const bool branch_taken_0x308ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308ab8) {
            ctx->pc = 0x308ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308AB8u;
            // 0x308abc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308a70;
        }
    }
    ctx->pc = 0x308AC0u;
label_308ac0:
    // 0x308ac0: 0x8e434c58  lw          $v1, 0x4C58($s2)
    ctx->pc = 0x308ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19544)));
    // 0x308ac4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308ac8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x308ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308acc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x308accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308ad0: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x308AD0u;
    {
        const bool branch_taken_0x308ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ad0) {
            ctx->pc = 0x308AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308AD0u;
            // 0x308ad4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308BACu;
            goto label_308bac;
        }
    }
    ctx->pc = 0x308AD8u;
    // 0x308ad8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x308ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308adc: 0x2408fffd  addiu       $t0, $zero, -0x3
    ctx->pc = 0x308adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x308ae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308ae4: 0x0  nop
    ctx->pc = 0x308ae4u;
    // NOP
label_308ae8:
    // 0x308ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x308ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308aec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x308aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308af0: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x308af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x308af4: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x308af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x308af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308AF8u;
    {
        const bool branch_taken_0x308af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AF8u;
        // 0x308afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308af8) {
            ctx->pc = 0x308B08u;
            goto label_308b08;
        }
    }
    ctx->pc = 0x308B00u;
    // 0x308b00: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x308b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x308b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308b08:
    // 0x308b08: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308b0c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x308B0Cu;
    {
        const bool branch_taken_0x308b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308b0c) {
            ctx->pc = 0x308B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B0Cu;
            // 0x308b10: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B78u;
            goto label_308b78;
        }
    }
    ctx->pc = 0x308B14u;
    // 0x308b14: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x308b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x308b18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308B18u;
    {
        const bool branch_taken_0x308b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B18u;
        // 0x308b1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b18) {
            ctx->pc = 0x308B28u;
            goto label_308b28;
        }
    }
    ctx->pc = 0x308B20u;
    // 0x308b20: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308b28:
    // 0x308b28: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308b2c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x308B2Cu;
    {
        const bool branch_taken_0x308b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308b2c) {
            ctx->pc = 0x308B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B2Cu;
            // 0x308b30: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B78u;
            goto label_308b78;
        }
    }
    ctx->pc = 0x308B34u;
    // 0x308b34: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308b38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308B38u;
    {
        const bool branch_taken_0x308b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B38u;
        // 0x308b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b38) {
            ctx->pc = 0x308B48u;
            goto label_308b48;
        }
    }
    ctx->pc = 0x308B40u;
    // 0x308b40: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308b48:
    // 0x308b48: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308b4c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x308B4Cu;
    {
        const bool branch_taken_0x308b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308b4c) {
            ctx->pc = 0x308B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B4Cu;
            // 0x308b50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B78u;
            goto label_308b78;
        }
    }
    ctx->pc = 0x308B54u;
    // 0x308b54: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308b58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308B58u;
    {
        const bool branch_taken_0x308b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B58u;
        // 0x308b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b58) {
            ctx->pc = 0x308B68u;
            goto label_308b68;
        }
    }
    ctx->pc = 0x308B60u;
    // 0x308b60: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x308b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x308b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308b68:
    // 0x308b68: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x308b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308B6Cu;
    {
        const bool branch_taken_0x308b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B6Cu;
        // 0x308b70: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b6c) {
            ctx->pc = 0x308B7Cu;
            goto label_308b7c;
        }
    }
    ctx->pc = 0x308B74u;
    // 0x308b74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308b78:
    // 0x308b78: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x308b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_308b7c:
    // 0x308b7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308B7Cu;
    {
        const bool branch_taken_0x308b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B7Cu;
        // 0x308b80: 0x8d234c58  lw          $v1, 0x4C58($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b7c) {
            ctx->pc = 0x308B94u;
            goto label_308b94;
        }
    }
    ctx->pc = 0x308B84u;
    // 0x308b84: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x308b88: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x308b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x308b8c: 0xacc205a0  sw          $v0, 0x5A0($a2)
    ctx->pc = 0x308b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1440), GPR_U32(ctx, 2));
    // 0x308b90: 0x8d234c58  lw          $v1, 0x4C58($t1)
    ctx->pc = 0x308b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19544)));
label_308b94:
    // 0x308b94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x308b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x308b98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308b9c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x308b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308ba0: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x308BA0u;
    {
        const bool branch_taken_0x308ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308ba0) {
            ctx->pc = 0x308BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308BA0u;
            // 0x308ba4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308ae8;
        }
    }
    ctx->pc = 0x308BA8u;
    // 0x308ba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x308ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308bac:
    // 0x308bac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308bb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x308bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x308BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BB8u;
        // 0x308bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308BC0u;
}
