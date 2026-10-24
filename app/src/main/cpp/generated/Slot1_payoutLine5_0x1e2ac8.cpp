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

// Function: Slot1_payoutLine5
// Address: 0x1e2ac8 - 0x1e2cc0
void Slot1_payoutLine5_0x1e2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_payoutLine5_0x1e2ac8");
#endif

    switch (ctx->pc) {
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2bb0u: goto label_1e2bb0;
        case 0x1e2bd0u: goto label_1e2bd0;
        case 0x1e2bfcu: goto label_1e2bfc;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c8cu: goto label_1e2c8c;
        default: break;
    }

    ctx->pc = 0x1e2ac8u;

    // 0x1e2ac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e2acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2ad0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e2ad4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e2ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e2ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2ae4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2ae8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2AE8u;
    {
        const bool branch_taken_0x1e2ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AE8u;
        // 0x1e2aec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ae8) {
            ctx->pc = 0x1E2B58u;
            goto label_1e2b58;
        }
    }
    ctx->pc = 0x1E2AF0u;
    // 0x1e2af0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2AF0u;
    {
        const bool branch_taken_0x1e2af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2af0) {
            ctx->pc = 0x1E2AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2AF0u;
            // 0x1e2af4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B08u;
            goto label_1e2b08;
        }
    }
    ctx->pc = 0x1E2AF8u;
    // 0x1e2af8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2AF8u;
    {
        const bool branch_taken_0x1e2af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AF8u;
        // 0x1e2afc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2af8) {
            ctx->pc = 0x1E2B20u;
            goto label_1e2b20;
        }
    }
    ctx->pc = 0x1E2B00u;
    // 0x1e2b00: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E2B00u;
    {
        const bool branch_taken_0x1e2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B00u;
        // 0x1e2b04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b00) {
            ctx->pc = 0x1E2CA8u;
            goto label_1e2ca8;
        }
    }
    ctx->pc = 0x1E2B08u;
label_1e2b08:
    // 0x1e2b08: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E2B08u;
    {
        const bool branch_taken_0x1e2b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B08u;
        // 0x1e2b0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b08) {
            ctx->pc = 0x1E2BE4u;
            goto label_1e2be4;
        }
    }
    ctx->pc = 0x1E2B10u;
    // 0x1e2b10: 0x50620062  beql        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E2B10u;
    {
        const bool branch_taken_0x1e2b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2b10) {
            ctx->pc = 0x1E2B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B10u;
            // 0x1e2b14: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2C9Cu;
            goto label_1e2c9c;
        }
    }
    ctx->pc = 0x1E2B18u;
    // 0x1e2b18: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1E2B18u;
    {
        const bool branch_taken_0x1e2b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B18u;
        // 0x1e2b1c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b18) {
            ctx->pc = 0x1E2CA8u;
            goto label_1e2ca8;
        }
    }
    ctx->pc = 0x1E2B20u;
label_1e2b20:
    // 0x1e2b20: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2b20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2b24: 0xae020490  sw          $v0, 0x490($s0)
    ctx->pc = 0x1e2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 2));
    // 0x1e2b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2b30: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2B30u;
    SET_GPR_U32(ctx, 31, 0x1E2B38u);
    ctx->pc = 0x1E2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2B30u;
    // 0x1e2b34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2B30u, 0x1E2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B38u;
label_1e2b38:
    // 0x1e2b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2b40: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2B40u;
    SET_GPR_U32(ctx, 31, 0x1E2B48u);
    ctx->pc = 0x1E2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2B40u;
    // 0x1e2b44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2B40u, 0x1E2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B48u;
label_1e2b48:
    // 0x1e2b48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2b4c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e2b50: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E2B50u;
    {
        const bool branch_taken_0x1e2b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B50u;
        // 0x1e2b54: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b50) {
            ctx->pc = 0x1E2C74u;
            goto label_1e2c74;
        }
    }
    ctx->pc = 0x1E2B58u;
label_1e2b58:
    // 0x1e2b58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e2b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2B5Cu;
    {
        const bool branch_taken_0x1e2b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B5Cu;
        // 0x1e2b60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b5c) {
            ctx->pc = 0x1E2B70u;
            goto label_1e2b70;
        }
    }
    ctx->pc = 0x1E2B64u;
    // 0x1e2b64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e2b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2B68u;
    {
        const bool branch_taken_0x1e2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B68u;
        // 0x1e2b6c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b68) {
            ctx->pc = 0x1E2B74u;
            goto label_1e2b74;
        }
    }
    ctx->pc = 0x1E2B70u;
label_1e2b70:
    // 0x1e2b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2b74:
    // 0x1e2b74: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e2b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2b78: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E2B78u;
    {
        const bool branch_taken_0x1e2b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b78) {
            ctx->pc = 0x1E2CA4u;
            goto label_1e2ca4;
        }
    }
    ctx->pc = 0x1E2B80u;
    // 0x1e2b80: 0x8e0303dc  lw          $v1, 0x3DC($s0)
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 988)));
    // 0x1e2b84: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e2b88: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e2b8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e2b8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e2b90: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2B90u;
    {
        const bool branch_taken_0x1e2b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b90) {
            ctx->pc = 0x1E2B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B90u;
            // 0x1e2b94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B98u;
            goto label_1e2b98;
        }
    }
    ctx->pc = 0x1E2B98u;
label_1e2b98:
    // 0x1e2b98: 0x1812  mflo        $v1
    ctx->pc = 0x1e2b98u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e2b9c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1e2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1e2ba0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e2ba4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ba8: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E2BA8u;
    SET_GPR_U32(ctx, 31, 0x1E2BB0u);
    ctx->pc = 0x1E2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BA8u;
    // 0x1e2bac: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E2BA8u, 0x1E2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BB0u;
label_1e2bb0:
    // 0x1e2bb0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e2bb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e2bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2bb8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e2bbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e2bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2bc0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e2bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bc8: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E2BC8u;
    SET_GPR_U32(ctx, 31, 0x1E2BD0u);
    ctx->pc = 0x1E2BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BC8u;
    // 0x1e2bcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E2BC8u, 0x1E2BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BD0u;
label_1e2bd0:
    // 0x1e2bd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2bd4: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x1e2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    // 0x1e2bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2bdc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E2BDCu;
    {
        const bool branch_taken_0x1e2bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BDCu;
        // 0x1e2be0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bdc) {
            ctx->pc = 0x1E2CA4u;
            goto label_1e2ca4;
        }
    }
    ctx->pc = 0x1E2BE4u;
label_1e2be4:
    // 0x1e2be4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2be8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2BE8u;
    {
        const bool branch_taken_0x1e2be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BE8u;
        // 0x1e2bec: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2be8) {
            ctx->pc = 0x1E2C20u;
            goto label_1e2c20;
        }
    }
    ctx->pc = 0x1E2BF0u;
    // 0x1e2bf0: 0x26329b70  addiu       $s2, $s1, -0x6490
    ctx->pc = 0x1e2bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2bf4: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E2BF4u;
    SET_GPR_U32(ctx, 31, 0x1E2BFCu);
    ctx->pc = 0x1E2BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BF4u;
    // 0x1e2bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E2BF4u, 0x1E2BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BFCu;
label_1e2bfc:
    // 0x1e2bfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2BFCu;
    {
        const bool branch_taken_0x1e2bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2bfc) {
            ctx->pc = 0x1E2C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2BFCu;
            // 0x1e2c00: 0x8e0504c8  lw          $a1, 0x4C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2C24u;
            goto label_1e2c24;
        }
    }
    ctx->pc = 0x1E2C04u;
    // 0x1e2c04: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e2c08: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e2c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e2c0c: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e2c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e2c10: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e2c10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e2c14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2c18: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2C18u;
    {
        const bool branch_taken_0x1e2c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c18) {
            ctx->pc = 0x1E2C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2C18u;
            // 0x1e2c1c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2C80u;
            goto label_1e2c80;
        }
    }
    ctx->pc = 0x1E2C20u;
label_1e2c20:
    // 0x1e2c20: 0x8e0504c8  lw          $a1, 0x4C8($s0)
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
label_1e2c24:
    // 0x1e2c24: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e2c28: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E2C28u;
    SET_GPR_U32(ctx, 31, 0x1E2C30u);
    ctx->pc = 0x1E2C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C28u;
    // 0x1e2c2c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E2C28u, 0x1E2C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C30u;
label_1e2c30:
    // 0x1e2c30: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e2c34: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x1e2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2c38: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1e2c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2c3c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e2c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e2c40: 0x2812  mflo        $a1
    ctx->pc = 0x1e2c40u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e2c44: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2C44u;
    SET_GPR_U32(ctx, 31, 0x1E2C4Cu);
    ctx->pc = 0x1E2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C44u;
    // 0x1e2c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2C44u, 0x1E2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C4Cu;
label_1e2c4c:
    // 0x1e2c4c: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2c4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c58: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2C58u;
    SET_GPR_U32(ctx, 31, 0x1E2C60u);
    ctx->pc = 0x1E2C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C58u;
    // 0x1e2c5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2C58u, 0x1E2C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C60u;
label_1e2c60:
    // 0x1e2c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c68: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2C68u;
    SET_GPR_U32(ctx, 31, 0x1E2C70u);
    ctx->pc = 0x1E2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C68u;
    // 0x1e2c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2C68u, 0x1E2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C70u;
label_1e2c70:
    // 0x1e2c70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e2c74:
    // 0x1e2c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2c78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2C78u;
    {
        const bool branch_taken_0x1e2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C78u;
        // 0x1e2c7c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c78) {
            ctx->pc = 0x1E2CA4u;
            goto label_1e2ca4;
        }
    }
    ctx->pc = 0x1E2C80u;
label_1e2c80:
    // 0x1e2c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c84: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2C84u;
    SET_GPR_U32(ctx, 31, 0x1E2C8Cu);
    ctx->pc = 0x1E2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C84u;
    // 0x1e2c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2C84u, 0x1E2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C8Cu;
label_1e2c8c:
    // 0x1e2c8c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2c90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2C94u;
    {
        const bool branch_taken_0x1e2c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C94u;
        // 0x1e2c98: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c94) {
            ctx->pc = 0x1E2CA4u;
            goto label_1e2ca4;
        }
    }
    ctx->pc = 0x1E2C9Cu;
label_1e2c9c:
    // 0x1e2c9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e2ca0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e2ca4:
    // 0x1e2ca4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e2ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2ca8:
    // 0x1e2ca8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e2ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2cac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CB4u;
        // 0x1e2cb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2CBCu;
    // 0x1e2cbc: 0x0  nop
    ctx->pc = 0x1e2cbcu;
    // NOP
    ctx->pc = 0x1e2cc0u;
}
