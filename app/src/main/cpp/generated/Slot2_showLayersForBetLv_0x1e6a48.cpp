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

// Function: Slot2_showLayersForBetLv
// Address: 0x1e6a48 - 0x1e6b70
void Slot2_showLayersForBetLv_0x1e6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_showLayersForBetLv_0x1e6a48");
#endif

    switch (ctx->pc) {
        case 0x1e6aa0u: goto label_1e6aa0;
        case 0x1e6aacu: goto label_1e6aac;
        case 0x1e6ac4u: goto label_1e6ac4;
        case 0x1e6ad0u: goto label_1e6ad0;
        case 0x1e6ae8u: goto label_1e6ae8;
        case 0x1e6af4u: goto label_1e6af4;
        case 0x1e6b04u: goto label_1e6b04;
        case 0x1e6b10u: goto label_1e6b10;
        case 0x1e6b1cu: goto label_1e6b1c;
        case 0x1e6b2cu: goto label_1e6b2c;
        case 0x1e6b38u: goto label_1e6b38;
        case 0x1e6b44u: goto label_1e6b44;
        case 0x1e6b50u: goto label_1e6b50;
        case 0x1e6b5cu: goto label_1e6b5c;
        default: break;
    }

    ctx->pc = 0x1e6a48u;

    // 0x1e6a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a5c: 0x960303d2  lhu         $v1, 0x3D2($s0)
    ctx->pc = 0x1e6a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 978)));
    // 0x1e6a60: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E6A60u;
    {
        const bool branch_taken_0x1e6a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A60u;
        // 0x1e6a64: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a60) {
            ctx->pc = 0x1E6AB8u;
            goto label_1e6ab8;
        }
    }
    ctx->pc = 0x1E6A68u;
    // 0x1e6a68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6A68u;
    {
        const bool branch_taken_0x1e6a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a68) {
            ctx->pc = 0x1E6A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6A68u;
            // 0x1e6a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6A80u;
            goto label_1e6a80;
        }
    }
    ctx->pc = 0x1E6A70u;
    // 0x1e6a70: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6A70u;
    {
        const bool branch_taken_0x1e6a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a70) {
            ctx->pc = 0x1E6A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6A70u;
            // 0x1e6a74: 0x8e0403b4  lw          $a0, 0x3B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6A98u;
            goto label_1e6a98;
        }
    }
    ctx->pc = 0x1E6A78u;
    // 0x1e6a78: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E6A78u;
    {
        const bool branch_taken_0x1e6a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A78u;
        // 0x1e6a7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a78) {
            ctx->pc = 0x1E6B60u;
            goto label_1e6b60;
        }
    }
    ctx->pc = 0x1E6A80u;
label_1e6a80:
    // 0x1e6a80: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E6A80u;
    {
        const bool branch_taken_0x1e6a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A80u;
        // 0x1e6a84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a80) {
            ctx->pc = 0x1E6ADCu;
            goto label_1e6adc;
        }
    }
    ctx->pc = 0x1E6A88u;
    // 0x1e6a88: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E6A88u;
    {
        const bool branch_taken_0x1e6a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6a88) {
            ctx->pc = 0x1E6A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6A88u;
            // 0x1e6a8c: 0x8e0403b4  lw          $a0, 0x3B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6B24u;
            goto label_1e6b24;
        }
    }
    ctx->pc = 0x1E6A90u;
    // 0x1e6a90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E6A90u;
    {
        const bool branch_taken_0x1e6a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A90u;
        // 0x1e6a94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a90) {
            ctx->pc = 0x1E6B60u;
            goto label_1e6b60;
        }
    }
    ctx->pc = 0x1E6A98u;
label_1e6a98:
    // 0x1e6a98: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6A98u;
    SET_GPR_U32(ctx, 31, 0x1E6AA0u);
    ctx->pc = 0x1E6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A98u;
    // 0x1e6a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6A98u, 0x1E6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AA0u;
label_1e6aa0:
    // 0x1e6aa0: 0x8e0403b8  lw          $a0, 0x3B8($s0)
    ctx->pc = 0x1e6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
    // 0x1e6aa4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6AA4u;
    SET_GPR_U32(ctx, 31, 0x1E6AACu);
    ctx->pc = 0x1E6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AA4u;
    // 0x1e6aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6AA4u, 0x1E6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AACu;
label_1e6aac:
    // 0x1e6aac: 0x8e0403c0  lw          $a0, 0x3C0($s0)
    ctx->pc = 0x1e6aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x1e6ab0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6AB0u;
    {
        const bool branch_taken_0x1e6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AB0u;
        // 0x1e6ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ab0) {
            ctx->pc = 0x1E6AFCu;
            goto label_1e6afc;
        }
    }
    ctx->pc = 0x1E6AB8u;
label_1e6ab8:
    // 0x1e6ab8: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x1e6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x1e6abc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6ABCu;
    SET_GPR_U32(ctx, 31, 0x1E6AC4u);
    ctx->pc = 0x1E6AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6ABCu;
    // 0x1e6ac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6ABCu, 0x1E6AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AC4u;
label_1e6ac4:
    // 0x1e6ac4: 0x8e0403b8  lw          $a0, 0x3B8($s0)
    ctx->pc = 0x1e6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
    // 0x1e6ac8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6AC8u;
    SET_GPR_U32(ctx, 31, 0x1E6AD0u);
    ctx->pc = 0x1E6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AC8u;
    // 0x1e6acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6AC8u, 0x1E6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AD0u;
label_1e6ad0:
    // 0x1e6ad0: 0x8e0403c0  lw          $a0, 0x3C0($s0)
    ctx->pc = 0x1e6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x1e6ad4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6AD4u;
    {
        const bool branch_taken_0x1e6ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AD4u;
        // 0x1e6ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ad4) {
            ctx->pc = 0x1E6AFCu;
            goto label_1e6afc;
        }
    }
    ctx->pc = 0x1E6ADCu;
label_1e6adc:
    // 0x1e6adc: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x1e6adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x1e6ae0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6AE0u;
    SET_GPR_U32(ctx, 31, 0x1E6AE8u);
    ctx->pc = 0x1E6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AE0u;
    // 0x1e6ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6AE0u, 0x1E6AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AE8u;
label_1e6ae8:
    // 0x1e6ae8: 0x8e0403b8  lw          $a0, 0x3B8($s0)
    ctx->pc = 0x1e6ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
    // 0x1e6aec: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6AECu;
    SET_GPR_U32(ctx, 31, 0x1E6AF4u);
    ctx->pc = 0x1E6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6AECu;
    // 0x1e6af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6AECu, 0x1E6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AF4u;
label_1e6af4:
    // 0x1e6af4: 0x8e0403c0  lw          $a0, 0x3C0($s0)
    ctx->pc = 0x1e6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x1e6af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6afc:
    // 0x1e6afc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6AFCu;
    SET_GPR_U32(ctx, 31, 0x1E6B04u);
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6AFCu, 0x1E6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B04u;
label_1e6b04:
    // 0x1e6b04: 0x8e0403bc  lw          $a0, 0x3BC($s0)
    ctx->pc = 0x1e6b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
    // 0x1e6b08: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B08u;
    SET_GPR_U32(ctx, 31, 0x1E6B10u);
    ctx->pc = 0x1E6B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B08u;
    // 0x1e6b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B08u, 0x1E6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B10u;
label_1e6b10:
    // 0x1e6b10: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x1e6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x1e6b14: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B14u;
    SET_GPR_U32(ctx, 31, 0x1E6B1Cu);
    ctx->pc = 0x1E6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B14u;
    // 0x1e6b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B14u, 0x1E6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B1Cu;
label_1e6b1c:
    // 0x1e6b1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6B1Cu;
    {
        const bool branch_taken_0x1e6b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B1Cu;
        // 0x1e6b20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b1c) {
            ctx->pc = 0x1E6B60u;
            goto label_1e6b60;
        }
    }
    ctx->pc = 0x1E6B24u;
label_1e6b24:
    // 0x1e6b24: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B24u;
    SET_GPR_U32(ctx, 31, 0x1E6B2Cu);
    ctx->pc = 0x1E6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B24u;
    // 0x1e6b28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B24u, 0x1E6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B2Cu;
label_1e6b2c:
    // 0x1e6b2c: 0x8e0403b8  lw          $a0, 0x3B8($s0)
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
    // 0x1e6b30: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B30u;
    SET_GPR_U32(ctx, 31, 0x1E6B38u);
    ctx->pc = 0x1E6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B30u;
    // 0x1e6b34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B30u, 0x1E6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B38u;
label_1e6b38:
    // 0x1e6b38: 0x8e0403c0  lw          $a0, 0x3C0($s0)
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x1e6b3c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B44u);
    ctx->pc = 0x1E6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B3Cu;
    // 0x1e6b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B3Cu, 0x1E6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B44u;
label_1e6b44:
    // 0x1e6b44: 0x8e0403bc  lw          $a0, 0x3BC($s0)
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 956)));
    // 0x1e6b48: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B48u;
    SET_GPR_U32(ctx, 31, 0x1E6B50u);
    ctx->pc = 0x1E6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B48u;
    // 0x1e6b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B48u, 0x1E6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B50u;
label_1e6b50:
    // 0x1e6b50: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x1e6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x1e6b54: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6B54u;
    SET_GPR_U32(ctx, 31, 0x1E6B5Cu);
    ctx->pc = 0x1E6B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B54u;
    // 0x1e6b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6B54u, 0x1E6B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B5Cu;
label_1e6b5c:
    // 0x1e6b5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6b60:
    // 0x1e6b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B64u;
        // 0x1e6b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6B6Cu;
    // 0x1e6b6c: 0x0  nop
    ctx->pc = 0x1e6b6cu;
    // NOP
    ctx->pc = 0x1e6b70u;
}
