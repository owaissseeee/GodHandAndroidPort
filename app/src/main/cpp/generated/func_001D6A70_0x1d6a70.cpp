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

// Function: func_001D6A70
// Address: 0x1d6a70 - 0x1d6bc0
void func_001D6A70_0x1d6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6A70_0x1d6a70");
#endif

    switch (ctx->pc) {
        case 0x1d6ac0u: goto label_1d6ac0;
        case 0x1d6ad0u: goto label_1d6ad0;
        case 0x1d6b44u: goto label_1d6b44;
        case 0x1d6b54u: goto label_1d6b54;
        case 0x1d6ba0u: goto label_1d6ba0;
        case 0x1d6bb0u: goto label_1d6bb0;
        default: break;
    }

    ctx->pc = 0x1d6a70u;

    // 0x1d6a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6a74: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1d6a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d6a78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6a84: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D6A84u;
    {
        const bool branch_taken_0x1d6a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a84) {
            ctx->pc = 0x1D6AD8u;
            goto label_1d6ad8;
        }
    }
    ctx->pc = 0x1D6A8Cu;
    // 0x1d6a8c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d6a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6a90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6A90u;
    {
        const bool branch_taken_0x1d6a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a90) {
            ctx->pc = 0x1D6A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6A90u;
            // 0x1d6a94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6AA8u;
            goto label_1d6aa8;
        }
    }
    ctx->pc = 0x1D6A98u;
    // 0x1d6a98: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6A98u;
    {
        const bool branch_taken_0x1d6a98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a98) {
            ctx->pc = 0x1D6AB8u;
            goto label_1d6ab8;
        }
    }
    ctx->pc = 0x1D6AA0u;
    // 0x1d6aa0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1D6AA0u;
    {
        const bool branch_taken_0x1d6aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA0u;
        // 0x1d6aa4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa0) {
            ctx->pc = 0x1D6BB4u;
            goto label_1d6bb4;
        }
    }
    ctx->pc = 0x1D6AA8u;
label_1d6aa8:
    // 0x1d6aa8: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D6AA8u;
    {
        const bool branch_taken_0x1d6aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA8u;
        // 0x1d6aac: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa8) {
            ctx->pc = 0x1D6B5Cu;
            goto label_1d6b5c;
        }
    }
    ctx->pc = 0x1D6AB0u;
    // 0x1d6ab0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1D6AB0u;
    {
        const bool branch_taken_0x1d6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AB0u;
        // 0x1d6ab4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ab0) {
            ctx->pc = 0x1D6BB4u;
            goto label_1d6bb4;
        }
    }
    ctx->pc = 0x1D6AB8u;
label_1d6ab8:
    // 0x1d6ab8: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D6AB8u;
    SET_GPR_U32(ctx, 31, 0x1D6AC0u);
    ctx->pc = 0x1D6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AB8u;
    // 0x1d6abc: 0x26040ee8  addiu       $a0, $s0, 0xEE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D6AB8u, 0x1D6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AC0u;
label_1d6ac0:
    // 0x1d6ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ac4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1d6ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d6ac8: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6AC8u;
    SET_GPR_U32(ctx, 31, 0x1D6AD0u);
    ctx->pc = 0x1D6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AC8u;
    // 0x1d6acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6AC8u, 0x1D6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AD0u;
label_1d6ad0:
    // 0x1d6ad0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D6AD0u;
    {
        const bool branch_taken_0x1d6ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AD0u;
        // 0x1d6ad4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ad0) {
            ctx->pc = 0x1D6BB4u;
            goto label_1d6bb4;
        }
    }
    ctx->pc = 0x1D6AD8u;
label_1d6ad8:
    // 0x1d6ad8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d6adc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d6ae0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d6ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d6ae4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6ae8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d6ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d6aec: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d6af0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1d6af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d6af4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d6af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6af8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6afc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d6afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d6b00: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d6b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6b04: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1d6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d6b08: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1d6b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d6b0c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d6b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d6b10: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d6b10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d6b14: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d6b18: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d6b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d6b1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d6b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d6b20: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1d6b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d6b24: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d6b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6b28: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6b2c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d6b30: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d6b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6b34: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d6b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6b38: 0x26040ee8  addiu       $a0, $s0, 0xEE8
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3816));
    // 0x1d6b3c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1D6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B44u);
    ctx->pc = 0x1D6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B3Cu;
    // 0x1d6b40: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1D6B3Cu, 0x1D6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B44u;
label_1d6b44:
    // 0x1d6b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b48: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d6b4c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B54u);
    ctx->pc = 0x1D6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B4Cu;
    // 0x1d6b50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6B4Cu, 0x1D6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B54u;
label_1d6b54:
    // 0x1d6b54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D6B54u;
    {
        const bool branch_taken_0x1d6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B54u;
        // 0x1d6b58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b54) {
            ctx->pc = 0x1D6BB4u;
            goto label_1d6bb4;
        }
    }
    ctx->pc = 0x1D6B5Cu;
label_1d6b5c:
    // 0x1d6b5c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d6b60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d6b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d6b64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6b68: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1d6b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1d6b6c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d6b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d6b70: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d6b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d6b74: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x1d6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d6b78: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d6b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6b7c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1d6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1d6b80: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d6b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d6b84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d6b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d6b88: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1d6b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1d6b8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d6b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6b90: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d6b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6b94: 0x26040ee8  addiu       $a0, $s0, 0xEE8
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3816));
    // 0x1d6b98: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1D6B98u;
    SET_GPR_U32(ctx, 31, 0x1D6BA0u);
    ctx->pc = 0x1D6B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B98u;
    // 0x1d6b9c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1D6B98u, 0x1D6BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BA0u;
label_1d6ba0:
    // 0x1d6ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ba4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1d6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d6ba8: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6BA8u;
    SET_GPR_U32(ctx, 31, 0x1D6BB0u);
    ctx->pc = 0x1D6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BA8u;
    // 0x1d6bac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6BA8u, 0x1D6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BB0u;
label_1d6bb0:
    // 0x1d6bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6bb4:
    // 0x1d6bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BB8u;
        // 0x1d6bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BC0u;
}
