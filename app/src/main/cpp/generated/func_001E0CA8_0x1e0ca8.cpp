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

// Function: func_001E0CA8
// Address: 0x1e0ca8 - 0x1e1cd0
void func_001E0CA8_0x1e0ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E0CA8_0x1e0ca8");
#endif

    switch (ctx->pc) {
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d34u: goto label_1e0d34;
        case 0x1e0d48u: goto label_1e0d48;
        case 0x1e0db8u: goto label_1e0db8;
        case 0x1e0ea0u: goto label_1e0ea0;
        case 0x1e124cu: goto label_1e124c;
        case 0x1e1270u: goto label_1e1270;
        case 0x1e12d4u: goto label_1e12d4;
        case 0x1e1710u: goto label_1e1710;
        case 0x1e1734u: goto label_1e1734;
        case 0x1e1798u: goto label_1e1798;
        case 0x1e1870u: goto label_1e1870;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c4cu: goto label_1e1c4c;
        case 0x1e1ca0u: goto label_1e1ca0;
        default: break;
    }

    ctx->pc = 0x1e0ca8u;

    // 0x1e0ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0cb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cbc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0cc0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E0CC0u;
    {
        const bool branch_taken_0x1e0cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cc0) {
            ctx->pc = 0x1E0D54u;
            goto label_1e0d54;
        }
    }
    ctx->pc = 0x1E0CC8u;
    // 0x1e0cc8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0CC8u;
    {
        const bool branch_taken_0x1e0cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0cc8) {
            ctx->pc = 0x1E0CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0CC8u;
            // 0x1e0ccc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0CE0u;
            goto label_1e0ce0;
        }
    }
    ctx->pc = 0x1E0CD0u;
    // 0x1e0cd0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0CD0u;
    {
        const bool branch_taken_0x1e0cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0cd0) {
            ctx->pc = 0x1E0CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0CD0u;
            // 0x1e0cd4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0CF0u;
            goto label_1e0cf0;
        }
    }
    ctx->pc = 0x1E0CD8u;
    // 0x1e0cd8: 0x100003f9  b           . + 4 + (0x3F9 << 2)
    ctx->pc = 0x1E0CD8u;
    {
        const bool branch_taken_0x1e0cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD8u;
        // 0x1e0cdc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd8) {
            ctx->pc = 0x1E1CC0u;
            goto label_1e1cc0;
        }
    }
    ctx->pc = 0x1E0CE0u;
label_1e0ce0:
    // 0x1e0ce0: 0x106203f3  beq         $v1, $v0, . + 4 + (0x3F3 << 2)
    ctx->pc = 0x1E0CE0u;
    {
        const bool branch_taken_0x1e0ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE0u;
        // 0x1e0ce4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce0) {
            ctx->pc = 0x1E1CB0u;
            goto label_1e1cb0;
        }
    }
    ctx->pc = 0x1E0CE8u;
    // 0x1e0ce8: 0x100003f5  b           . + 4 + (0x3F5 << 2)
    ctx->pc = 0x1E0CE8u;
    {
        const bool branch_taken_0x1e0ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE8u;
        // 0x1e0cec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce8) {
            ctx->pc = 0x1E1CC0u;
            goto label_1e1cc0;
        }
    }
    ctx->pc = 0x1E0CF0u;
label_1e0cf0:
    // 0x1e0cf0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1e0cf4: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1e0cf8: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1e0cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1e0cfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e0cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e0d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d04: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e0d08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0d0c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1e0d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1e0d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d14: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1e0d18: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E0D18u;
    SET_GPR_U32(ctx, 31, 0x1E0D20u);
    ctx->pc = 0x1E0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0D18u;
    // 0x1e0d1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E0D18u, 0x1E0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D20u;
label_1e0d20:
    // 0x1e0d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0d28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0d2c: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E0D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D34u);
    ctx->pc = 0x1E0D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0D2Cu;
    // 0x1e0d30: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E0D2Cu, 0x1E0D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D34u;
label_1e0d34:
    // 0x1e0d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e0d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0d3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0d40: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E0D40u;
    SET_GPR_U32(ctx, 31, 0x1E0D48u);
    ctx->pc = 0x1E0D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0D40u;
    // 0x1e0d44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E0D40u, 0x1E0D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D48u;
label_1e0d48:
    // 0x1e0d48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0d50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e0d54:
    // 0x1e0d54: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e0d58: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e0d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0d5c: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x1e0d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x1e0d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d64: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1e0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e0d68: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e0d68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e0d6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e0d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e0d70: 0x10600142  beqz        $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x1E0D70u;
    {
        const bool branch_taken_0x1e0d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D70u;
        // 0x1e0d74: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d70) {
            ctx->pc = 0x1E127Cu;
            goto label_1e127c;
        }
    }
    ctx->pc = 0x1E0D78u;
    // 0x1e0d78: 0x9e020118  lwu         $v0, 0x118($s0)
    ctx->pc = 0x1e0d78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1e0d7c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e0d7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e0d80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0d84: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x1E0D84u;
    {
        const bool branch_taken_0x1e0d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D84u;
        // 0x1e0d88: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d84) {
            ctx->pc = 0x1E127Cu;
            goto label_1e127c;
        }
    }
    ctx->pc = 0x1E0D8Cu;
    // 0x1e0d8c: 0x9e030054  lwu         $v1, 0x54($s0)
    ctx->pc = 0x1e0d8cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0d90: 0x311bb  dsra        $v0, $v1, 6
    ctx->pc = 0x1e0d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
    // 0x1e0d94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0d98: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E0D98u;
    {
        const bool branch_taken_0x1e0d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D98u;
        // 0x1e0d9c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d98) {
            ctx->pc = 0x1E0E04u;
            goto label_1e0e04;
        }
    }
    ctx->pc = 0x1E0DA0u;
    // 0x1e0da0: 0x311fb  dsra        $v0, $v1, 7
    ctx->pc = 0x1e0da0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
    // 0x1e0da4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0da8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E0DA8u;
    {
        const bool branch_taken_0x1e0da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA8u;
        // 0x1e0dac: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0da8) {
            ctx->pc = 0x1E0E08u;
            goto label_1e0e08;
        }
    }
    ctx->pc = 0x1E0DB0u;
    // 0x1e0db0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E0DB0u;
    SET_GPR_U32(ctx, 31, 0x1E0DB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E0DB0u, 0x1E0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DB8u;
label_1e0db8:
    // 0x1e0db8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e0dbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0dc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0dc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e0dc4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0DC4u;
    {
        const bool branch_taken_0x1e0dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0dc4) {
            ctx->pc = 0x1E0DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0DC4u;
            // 0x1e0dc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DCCu;
            goto label_1e0dcc;
        }
    }
    ctx->pc = 0x1E0DCCu;
label_1e0dcc:
    // 0x1e0dcc: 0x2810  mfhi        $a1
    ctx->pc = 0x1e0dccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e0dd0: 0x50a4003a  beql        $a1, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E0DD0u;
    {
        const bool branch_taken_0x1e0dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e0dd0) {
            ctx->pc = 0x1E0DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0DD0u;
            // 0x1e0dd4: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0EBCu;
            goto label_1e0ebc;
        }
    }
    ctx->pc = 0x1E0DD8u;
    // 0x1e0dd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DD8u;
    {
        const bool branch_taken_0x1e0dd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DD8u;
        // 0x1e0ddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dd8) {
            ctx->pc = 0x1E0DE8u;
            goto label_1e0de8;
        }
    }
    ctx->pc = 0x1E0DE0u;
    // 0x1e0de0: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0DE0u;
    {
        const bool branch_taken_0x1e0de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0de0) {
            ctx->pc = 0x1E0DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0DE0u;
            // 0x1e0de4: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DF4u;
            goto label_1e0df4;
        }
    }
    ctx->pc = 0x1E0DE8u;
label_1e0de8:
    // 0x1e0de8: 0x8e020490  lw          $v0, 0x490($s0)
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e0dec: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x1E0DECu;
    {
        const bool branch_taken_0x1e0dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DECu;
        // 0x1e0df0: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dec) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0DF4u;
label_1e0df4:
    // 0x1e0df4: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1e0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1e0df8: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1e0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x1e0dfc: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x1E0DFCu;
    {
        const bool branch_taken_0x1e0dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DFCu;
        // 0x1e0e00: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dfc) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0E04u;
label_1e0e04:
    // 0x1e0e04: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e0e08:
    // 0x1e0e08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e0e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e0e0c: 0x311bb  dsra        $v0, $v1, 6
    ctx->pc = 0x1e0e0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
    // 0x1e0e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0e14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0E14u;
    {
        const bool branch_taken_0x1e0e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E14u;
        // 0x1e0e18: 0x311fb  dsra        $v0, $v1, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e14) {
            ctx->pc = 0x1E0E64u;
            goto label_1e0e64;
        }
    }
    ctx->pc = 0x1E0E1Cu;
    // 0x1e0e1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0e20: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E0E20u;
    {
        const bool branch_taken_0x1e0e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E20u;
        // 0x1e0e24: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e20) {
            ctx->pc = 0x1E0E68u;
            goto label_1e0e68;
        }
    }
    ctx->pc = 0x1E0E28u;
    // 0x1e0e28: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1e0e2c: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e0e30: 0x504300f8  beql        $v0, $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1E0E30u;
    {
        const bool branch_taken_0x1e0e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e0e30) {
            ctx->pc = 0x1E0E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E30u;
            // 0x1e0e34: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0E38u;
    // 0x1e0e38: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e0e3c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0E3Cu;
    {
        const bool branch_taken_0x1e0e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0e3c) {
            ctx->pc = 0x1E0E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E3Cu;
            // 0x1e0e40: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0E54u;
            goto label_1e0e54;
        }
    }
    ctx->pc = 0x1E0E44u;
    // 0x1e0e44: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x1e0e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x1e0e48: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x1e0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
    // 0x1e0e4c: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1E0E4Cu;
    {
        const bool branch_taken_0x1e0e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E4Cu;
        // 0x1e0e50: 0xae030120  sw          $v1, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e4c) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0E54u;
label_1e0e54:
    // 0x1e0e54: 0x504300ef  beql        $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x1E0E54u;
    {
        const bool branch_taken_0x1e0e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e0e54) {
            ctx->pc = 0x1E0E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E54u;
            // 0x1e0e58: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0E5Cu;
    // 0x1e0e5c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1E0E5Cu;
    {
        const bool branch_taken_0x1e0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E5Cu;
        // 0x1e0e60: 0x9e020118  lwu         $v0, 0x118($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e5c) {
            ctx->pc = 0x1E1218u;
            goto label_1e1218;
        }
    }
    ctx->pc = 0x1E0E64u;
label_1e0e64:
    // 0x1e0e64: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e0e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e0e68:
    // 0x1e0e68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e0e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e0e6c: 0x311bb  dsra        $v0, $v1, 6
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
    // 0x1e0e70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0e74: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E0E74u;
    {
        const bool branch_taken_0x1e0e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e74) {
            ctx->pc = 0x1E0E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E74u;
            // 0x1e0e78: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0EC8u;
            goto label_1e0ec8;
        }
    }
    ctx->pc = 0x1E0E7Cu;
    // 0x1e0e7c: 0x311fb  dsra        $v0, $v1, 7
    ctx->pc = 0x1e0e7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
    // 0x1e0e80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0e84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E0E84u;
    {
        const bool branch_taken_0x1e0e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E84u;
        // 0x1e0e88: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e84) {
            ctx->pc = 0x1E0EC8u;
            goto label_1e0ec8;
        }
    }
    ctx->pc = 0x1E0E8Cu;
    // 0x1e0e8c: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e0e90: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e0e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e0e94: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0E94u;
    {
        const bool branch_taken_0x1e0e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0e94) {
            ctx->pc = 0x1E0E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0E94u;
            // 0x1e0e98: 0x8e020360  lw          $v0, 0x360($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0EA8u;
            goto label_1e0ea8;
        }
    }
    ctx->pc = 0x1E0E9Cu;
    // 0x1e0e9c: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x1e0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_1e0ea0:
    // 0x1e0ea0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x1E0EA0u;
    {
        const bool branch_taken_0x1e0ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EA0u;
        // 0x1e0ea4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ea0) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0EA8u;
label_1e0ea8:
    // 0x1e0ea8: 0x504300da  beql        $v0, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x1E0EA8u;
    {
        const bool branch_taken_0x1e0ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e0ea8) {
            ctx->pc = 0x1E0EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0EA8u;
            // 0x1e0eac: 0xae030120  sw          $v1, 0x120($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0EB0u;
    // 0x1e0eb0: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e0eb4: 0x544300d8  bnel        $v0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x1E0EB4u;
    {
        const bool branch_taken_0x1e0eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0eb4) {
            ctx->pc = 0x1E0EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0EB4u;
            // 0x1e0eb8: 0x9e020118  lwu         $v0, 0x118($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1218u;
            goto label_1e1218;
        }
    }
    ctx->pc = 0x1E0EBCu;
label_1e0ebc:
    // 0x1e0ebc: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1e0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1e0ec0: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1E0EC0u;
    {
        const bool branch_taken_0x1e0ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EC0u;
        // 0x1e0ec4: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ec0) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0EC8u;
label_1e0ec8:
    // 0x1e0ec8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e0ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e0ecc: 0x311bb  dsra        $v0, $v1, 6
    ctx->pc = 0x1e0eccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
    // 0x1e0ed0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0ed4: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1E0ED4u;
    {
        const bool branch_taken_0x1e0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ED4u;
        // 0x1e0ed8: 0x311fb  dsra        $v0, $v1, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ed4) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0EDCu;
    // 0x1e0edc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0ee0: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1E0EE0u;
    {
        const bool branch_taken_0x1e0ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EE0u;
        // 0x1e0ee4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ee0) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E0EE8u;
    // 0x1e0ee8: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e0eec: 0x54620067  bnel        $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1E0EECu;
    {
        const bool branch_taken_0x1e0eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0eec) {
            ctx->pc = 0x1E0EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0EECu;
            // 0x1e0ef0: 0x8e040254  lw          $a0, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E108Cu;
            goto label_1e108c;
        }
    }
    ctx->pc = 0x1E0EF4u;
    // 0x1e0ef4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1e0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1e0ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0efc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0f00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0F00u;
    {
        const bool branch_taken_0x1e0f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F00u;
        // 0x1e0f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f00) {
            ctx->pc = 0x1E0F38u;
            goto label_1e0f38;
        }
    }
    ctx->pc = 0x1E0F08u;
    // 0x1e0f08: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e0f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e0f0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0F0Cu;
    {
        const bool branch_taken_0x1e0f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F0Cu;
        // 0x1e0f10: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f0c) {
            ctx->pc = 0x1E0F3Cu;
            goto label_1e0f3c;
        }
    }
    ctx->pc = 0x1E0F14u;
    // 0x1e0f14: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e0f18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f1c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0f20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0F20u;
    {
        const bool branch_taken_0x1e0f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F20u;
        // 0x1e0f24: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f20) {
            ctx->pc = 0x1E0F38u;
            goto label_1e0f38;
        }
    }
    ctx->pc = 0x1E0F28u;
    // 0x1e0f28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0F28u;
    {
        const bool branch_taken_0x1e0f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F28u;
        // 0x1e0f2c: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f28) {
            ctx->pc = 0x1E0F38u;
            goto label_1e0f38;
        }
    }
    ctx->pc = 0x1E0F30u;
    // 0x1e0f30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0f34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f38:
    // 0x1e0f38: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1e0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1e0f3c:
    // 0x1e0f3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0F3Cu;
    {
        const bool branch_taken_0x1e0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f3c) {
            ctx->pc = 0x1E0F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0F3Cu;
            // 0x1e0f40: 0xae040128  sw          $a0, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F44u;
            goto label_1e0f44;
        }
    }
    ctx->pc = 0x1E0F44u;
label_1e0f44:
    // 0x1e0f44: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e0f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f4c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0f50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0F50u;
    {
        const bool branch_taken_0x1e0f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F50u;
        // 0x1e0f54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f50) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F58u;
    // 0x1e0f58: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e0f5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0F5Cu;
    {
        const bool branch_taken_0x1e0f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F5Cu;
        // 0x1e0f60: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f5c) {
            ctx->pc = 0x1E0F8Cu;
            goto label_1e0f8c;
        }
    }
    ctx->pc = 0x1E0F64u;
    // 0x1e0f64: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e0f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f6c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0F70u;
    {
        const bool branch_taken_0x1e0f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F70u;
        // 0x1e0f74: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f70) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F78u;
    // 0x1e0f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0F78u;
    {
        const bool branch_taken_0x1e0f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F78u;
        // 0x1e0f7c: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f78) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F80u;
    // 0x1e0f80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f88:
    // 0x1e0f88: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1e0f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1e0f8c:
    // 0x1e0f8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0F8Cu;
    {
        const bool branch_taken_0x1e0f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F8Cu;
        // 0x1e0f90: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f8c) {
            ctx->pc = 0x1E0F9Cu;
            goto label_1e0f9c;
        }
    }
    ctx->pc = 0x1E0F94u;
    // 0x1e0f94: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x1e0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x1e0f98: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1e0f9c:
    // 0x1e0f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fa0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0fa4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0FA4u;
    {
        const bool branch_taken_0x1e0fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FA4u;
        // 0x1e0fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fa4) {
            ctx->pc = 0x1E0FDCu;
            goto label_1e0fdc;
        }
    }
    ctx->pc = 0x1E0FACu;
    // 0x1e0fac: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e0facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e0fb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0FB0u;
    {
        const bool branch_taken_0x1e0fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FB0u;
        // 0x1e0fb4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fb0) {
            ctx->pc = 0x1E0FE0u;
            goto label_1e0fe0;
        }
    }
    ctx->pc = 0x1E0FB8u;
    // 0x1e0fb8: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1e0fbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fc0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0fc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0FC4u;
    {
        const bool branch_taken_0x1e0fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FC4u;
        // 0x1e0fc8: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fc4) {
            ctx->pc = 0x1E0FDCu;
            goto label_1e0fdc;
        }
    }
    ctx->pc = 0x1E0FCCu;
    // 0x1e0fcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0FCCu;
    {
        const bool branch_taken_0x1e0fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FCCu;
        // 0x1e0fd0: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fcc) {
            ctx->pc = 0x1E0FDCu;
            goto label_1e0fdc;
        }
    }
    ctx->pc = 0x1E0FD4u;
    // 0x1e0fd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e0fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0fdc:
    // 0x1e0fdc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1e0fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1e0fe0:
    // 0x1e0fe0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0FE0u;
    {
        const bool branch_taken_0x1e0fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fe0) {
            ctx->pc = 0x1E0FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0FE0u;
            // 0x1e0fe4: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0FF4u;
            goto label_1e0ff4;
        }
    }
    ctx->pc = 0x1E0FE8u;
    // 0x1e0fe8: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e0fec: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1e0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x1e0ff0: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_1e0ff4:
    // 0x1e0ff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ff8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e0ffc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0FFCu;
    {
        const bool branch_taken_0x1e0ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FFCu;
        // 0x1e1000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ffc) {
            ctx->pc = 0x1E1034u;
            goto label_1e1034;
        }
    }
    ctx->pc = 0x1E1004u;
    // 0x1e1004: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1008u;
    {
        const bool branch_taken_0x1e1008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1008u;
        // 0x1e100c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1008) {
            ctx->pc = 0x1E1038u;
            goto label_1e1038;
        }
    }
    ctx->pc = 0x1E1010u;
    // 0x1e1010: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e1010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e1014: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1018: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e101c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E101Cu;
    {
        const bool branch_taken_0x1e101c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E101Cu;
        // 0x1e1020: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e101c) {
            ctx->pc = 0x1E1034u;
            goto label_1e1034;
        }
    }
    ctx->pc = 0x1E1024u;
    // 0x1e1024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1024u;
    {
        const bool branch_taken_0x1e1024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1024u;
        // 0x1e1028: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1024) {
            ctx->pc = 0x1E1034u;
            goto label_1e1034;
        }
    }
    ctx->pc = 0x1E102Cu;
    // 0x1e102c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e102cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1034:
    // 0x1e1034: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1e1034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1e1038:
    // 0x1e1038: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1038u;
    {
        const bool branch_taken_0x1e1038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1038) {
            ctx->pc = 0x1E103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1038u;
            // 0x1e103c: 0xae040140  sw          $a0, 0x140($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1040u;
            goto label_1e1040;
        }
    }
    ctx->pc = 0x1E1040u;
label_1e1040:
    // 0x1e1040: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1048: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e104c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E104Cu;
    {
        const bool branch_taken_0x1e104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E104Cu;
        // 0x1e1050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e104c) {
            ctx->pc = 0x1E1084u;
            goto label_1e1084;
        }
    }
    ctx->pc = 0x1E1054u;
    // 0x1e1054: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1058: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1E1058u;
    {
        const bool branch_taken_0x1e1058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1058u;
        // 0x1e105c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1058) {
            ctx->pc = 0x1E120Cu;
            goto label_1e120c;
        }
    }
    ctx->pc = 0x1E1060u;
    // 0x1e1060: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e1064: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1068: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e106c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E106Cu;
    {
        const bool branch_taken_0x1e106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E106Cu;
        // 0x1e1070: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e106c) {
            ctx->pc = 0x1E1084u;
            goto label_1e1084;
        }
    }
    ctx->pc = 0x1E1074u;
    // 0x1e1074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1074u;
    {
        const bool branch_taken_0x1e1074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1074u;
        // 0x1e1078: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1074) {
            ctx->pc = 0x1E1084u;
            goto label_1e1084;
        }
    }
    ctx->pc = 0x1E107Cu;
    // 0x1e107c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e107cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1084:
    // 0x1e1084: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1E1084u;
    {
        const bool branch_taken_0x1e1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1084u;
        // 0x1e1088: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1084) {
            ctx->pc = 0x1E120Cu;
            goto label_1e120c;
        }
    }
    ctx->pc = 0x1E108Cu;
label_1e108c:
    // 0x1e108c: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E108Cu;
    {
        const bool branch_taken_0x1e108c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e108c) {
            ctx->pc = 0x1E1090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E108Cu;
            // 0x1e1090: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E10A8u;
            goto label_1e10a8;
        }
    }
    ctx->pc = 0x1E1094u;
    // 0x1e1094: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e1098: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1098u;
    {
        const bool branch_taken_0x1e1098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e1098) {
            ctx->pc = 0x1E109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1098u;
            // 0x1e109c: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E10A8u;
            goto label_1e10a8;
        }
    }
    ctx->pc = 0x1E10A0u;
    // 0x1e10a0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1E10A0u;
    {
        const bool branch_taken_0x1e10a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10A0u;
        // 0x1e10a4: 0xae04011c  sw          $a0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10a0) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E10A8u;
label_1e10a8:
    // 0x1e10a8: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E10A8u;
    {
        const bool branch_taken_0x1e10a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e10a8) {
            ctx->pc = 0x1E10ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E10A8u;
            // 0x1e10ac: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1128u;
            goto label_1e1128;
        }
    }
    ctx->pc = 0x1E10B0u;
    // 0x1e10b0: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e10b4: 0x50430057  beql        $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1E10B4u;
    {
        const bool branch_taken_0x1e10b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e10b4) {
            ctx->pc = 0x1E10B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E10B4u;
            // 0x1e10b8: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E10BCu;
    // 0x1e10bc: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1e10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1e10c0: 0x50430054  beql        $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1E10C0u;
    {
        const bool branch_taken_0x1e10c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e10c0) {
            ctx->pc = 0x1E10C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E10C0u;
            // 0x1e10c4: 0xae030120  sw          $v1, 0x120($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E10C8u;
    // 0x1e10c8: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e10cc: 0x1043ff74  beq         $v0, $v1, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1E10CCu;
    {
        const bool branch_taken_0x1e10cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10CCu;
        // 0x1e10d0: 0x38820006  xori        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10cc) {
            ctx->pc = 0x1E0EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ea0;
        }
    }
    ctx->pc = 0x1E10D4u;
    // 0x1e10d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E10D4u;
    {
        const bool branch_taken_0x1e10d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10D4u;
        // 0x1e10d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10d4) {
            ctx->pc = 0x1E10E8u;
            goto label_1e10e8;
        }
    }
    ctx->pc = 0x1E10DCu;
    // 0x1e10dc: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e10dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e10e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e10e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e10e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e10e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e10e8:
    // 0x1e10e8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e10e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e10ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E10ECu;
    {
        const bool branch_taken_0x1e10ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e10ec) {
            ctx->pc = 0x1E10F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E10ECu;
            // 0x1e10f0: 0xae040128  sw          $a0, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E10F4u;
            goto label_1e10f4;
        }
    }
    ctx->pc = 0x1E10F4u;
label_1e10f4:
    // 0x1e10f4: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1e10f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e10f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10fc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e10fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1100u;
    {
        const bool branch_taken_0x1e1100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1100u;
        // 0x1e1104: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1100) {
            ctx->pc = 0x1E1114u;
            goto label_1e1114;
        }
    }
    ctx->pc = 0x1E1108u;
    // 0x1e1108: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e110c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e110cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1110: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1114:
    // 0x1e1114: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1118: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E1118u;
    {
        const bool branch_taken_0x1e1118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1118) {
            ctx->pc = 0x1E111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1118u;
            // 0x1e111c: 0xae040140  sw          $a0, 0x140($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E1120u;
    // 0x1e1120: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E1120u;
    {
        const bool branch_taken_0x1e1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1120u;
        // 0x1e1124: 0x9e020118  lwu         $v0, 0x118($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1120) {
            ctx->pc = 0x1E1218u;
            goto label_1e1218;
        }
    }
    ctx->pc = 0x1E1128u;
label_1e1128:
    // 0x1e1128: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1128u;
    {
        const bool branch_taken_0x1e1128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1128u;
        // 0x1e112c: 0x38820006  xori        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1128) {
            ctx->pc = 0x1E1144u;
            goto label_1e1144;
        }
    }
    ctx->pc = 0x1E1130u;
    // 0x1e1130: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e1134: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1134u;
    {
        const bool branch_taken_0x1e1134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1134u;
        // 0x1e1138: 0x38820006  xori        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1134) {
            ctx->pc = 0x1E1144u;
            goto label_1e1144;
        }
    }
    ctx->pc = 0x1E113Cu;
    // 0x1e113c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E113Cu;
    {
        const bool branch_taken_0x1e113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E113Cu;
        // 0x1e1140: 0xae030124  sw          $v1, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e113c) {
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E1144u;
label_1e1144:
    // 0x1e1144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1144u;
    {
        const bool branch_taken_0x1e1144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1144u;
        // 0x1e1148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1144) {
            ctx->pc = 0x1E1158u;
            goto label_1e1158;
        }
    }
    ctx->pc = 0x1E114Cu;
    // 0x1e114c: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1150: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1158:
    // 0x1e1158: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e115c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E115Cu;
    {
        const bool branch_taken_0x1e115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e115c) {
            ctx->pc = 0x1E1160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E115Cu;
            // 0x1e1160: 0xae040128  sw          $a0, 0x128($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1164u;
            goto label_1e1164;
        }
    }
    ctx->pc = 0x1E1164u;
label_1e1164:
    // 0x1e1164: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e116c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e116cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1170u;
    {
        const bool branch_taken_0x1e1170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1170u;
        // 0x1e1174: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1170) {
            ctx->pc = 0x1E1184u;
            goto label_1e1184;
        }
    }
    ctx->pc = 0x1E1178u;
    // 0x1e1178: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e117c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e117cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1180: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1184:
    // 0x1e1184: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1188: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1188u;
    {
        const bool branch_taken_0x1e1188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1188) {
            ctx->pc = 0x1E118Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1188u;
            // 0x1e118c: 0xae04012c  sw          $a0, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1190u;
            goto label_1e1190;
        }
    }
    ctx->pc = 0x1E1190u;
label_1e1190:
    // 0x1e1190: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1198: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e119c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E119Cu;
    {
        const bool branch_taken_0x1e119c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E119Cu;
        // 0x1e11a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e119c) {
            ctx->pc = 0x1E11B0u;
            goto label_1e11b0;
        }
    }
    ctx->pc = 0x1E11A4u;
    // 0x1e11a4: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e11a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e11a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e11a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e11ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e11acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e11b0:
    // 0x1e11b0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e11b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e11b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E11B4u;
    {
        const bool branch_taken_0x1e11b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e11b4) {
            ctx->pc = 0x1E11B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E11B4u;
            // 0x1e11b8: 0xae040134  sw          $a0, 0x134($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E11BCu;
            goto label_1e11bc;
        }
    }
    ctx->pc = 0x1E11BCu;
label_1e11bc:
    // 0x1e11bc: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e11c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e11c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11c4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e11c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e11c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E11C8u;
    {
        const bool branch_taken_0x1e11c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C8u;
        // 0x1e11cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11c8) {
            ctx->pc = 0x1E11DCu;
            goto label_1e11dc;
        }
    }
    ctx->pc = 0x1E11D0u;
    // 0x1e11d0: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e11d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e11d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e11d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e11d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e11d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e11dc:
    // 0x1e11dc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e11dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e11e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E11E0u;
    {
        const bool branch_taken_0x1e11e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e11e0) {
            ctx->pc = 0x1E11E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E11E0u;
            // 0x1e11e4: 0xae040140  sw          $a0, 0x140($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E11E8u;
            goto label_1e11e8;
        }
    }
    ctx->pc = 0x1E11E8u;
label_1e11e8:
    // 0x1e11e8: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1e11ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e11ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11f0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e11f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e11f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E11F4u;
    {
        const bool branch_taken_0x1e11f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F4u;
        // 0x1e11f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11f4) {
            ctx->pc = 0x1E1208u;
            goto label_1e1208;
        }
    }
    ctx->pc = 0x1E11FCu;
    // 0x1e11fc: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e11fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1200: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1204: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1208:
    // 0x1e1208: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e120c:
    // 0x1e120c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E120Cu;
    {
        const bool branch_taken_0x1e120c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e120c) {
            ctx->pc = 0x1E1210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E120Cu;
            // 0x1e1210: 0xae040144  sw          $a0, 0x144($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1214u;
            goto label_1e1214;
        }
    }
    ctx->pc = 0x1E1214u;
label_1e1214:
    // 0x1e1214: 0x9e020118  lwu         $v0, 0x118($s0)
    ctx->pc = 0x1e1214u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1e1218:
    // 0x1e1218: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e1218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e121c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1220u;
    {
        const bool branch_taken_0x1e1220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1220u;
        // 0x1e1224: 0x26030058  addiu       $v1, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1220) {
            ctx->pc = 0x1E1238u;
            goto label_1e1238;
        }
    }
    ctx->pc = 0x1E1228u;
    // 0x1e1228: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e1228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e122c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e122cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e1230: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e1230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e1234: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e1234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e1238:
    // 0x1e1238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e123c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1240: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1244: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E1244u;
    SET_GPR_U32(ctx, 31, 0x1E124Cu);
    ctx->pc = 0x1E1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1244u;
    // 0x1e1248: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E1244u, 0x1E124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E124Cu;
label_1e124c:
    // 0x1e124c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e124cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e1250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1254: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e1254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e1258: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1e125c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e125cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1260: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e1260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1264: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e1264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1268: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E1268u;
    SET_GPR_U32(ctx, 31, 0x1E1270u);
    ctx->pc = 0x1E126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1268u;
    // 0x1e126c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E1268u, 0x1E1270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1270u;
label_1e1270:
    // 0x1e1270: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e1274: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x1E1274u;
    {
        const bool branch_taken_0x1e1274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1274u;
        // 0x1e1278: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1274) {
            ctx->pc = 0x1E1C54u;
            goto label_1e1c54;
        }
    }
    ctx->pc = 0x1E127Cu;
label_1e127c:
    // 0x1e127c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e127cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1280: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x1e1280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x1e1284: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e1284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e1288: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e1288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e128c: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x1E128Cu;
    {
        const bool branch_taken_0x1e128c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E128Cu;
        // 0x1e1290: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e128c) {
            ctx->pc = 0x1E1740u;
            goto label_1e1740;
        }
    }
    ctx->pc = 0x1E1294u;
    // 0x1e1294: 0x9e020220  lwu         $v0, 0x220($s0)
    ctx->pc = 0x1e1294u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1e1298: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e1298u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e129c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e12a0: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x1E12A0u;
    {
        const bool branch_taken_0x1e12a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12A0u;
        // 0x1e12a4: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12a0) {
            ctx->pc = 0x1E1740u;
            goto label_1e1740;
        }
    }
    ctx->pc = 0x1E12A8u;
    // 0x1e12a8: 0x9e030054  lwu         $v1, 0x54($s0)
    ctx->pc = 0x1e12a8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e12ac: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e12acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e12b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e12b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e12b4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E12B4u;
    {
        const bool branch_taken_0x1e12b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12B4u;
        // 0x1e12b8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12b4) {
            ctx->pc = 0x1E132Cu;
            goto label_1e132c;
        }
    }
    ctx->pc = 0x1E12BCu;
    // 0x1e12bc: 0x311fb  dsra        $v0, $v1, 7
    ctx->pc = 0x1e12bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
    // 0x1e12c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e12c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e12c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E12C4u;
    {
        const bool branch_taken_0x1e12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C4u;
        // 0x1e12c8: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12c4) {
            ctx->pc = 0x1E1330u;
            goto label_1e1330;
        }
    }
    ctx->pc = 0x1E12CCu;
    // 0x1e12cc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E12CCu;
    SET_GPR_U32(ctx, 31, 0x1E12D4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E12CCu, 0x1E12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12D4u;
label_1e12d4:
    // 0x1e12d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e12d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e12dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e12dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e12e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E12E0u;
    {
        const bool branch_taken_0x1e12e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12e0) {
            ctx->pc = 0x1E12E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12E0u;
            // 0x1e12e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E12E8u;
            goto label_1e12e8;
        }
    }
    ctx->pc = 0x1E12E8u;
label_1e12e8:
    // 0x1e12e8: 0x2810  mfhi        $a1
    ctx->pc = 0x1e12e8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e12ec: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E12ECu;
    {
        const bool branch_taken_0x1e12ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e12ec) {
            ctx->pc = 0x1E12F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12ECu;
            // 0x1e12f0: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1310u;
            goto label_1e1310;
        }
    }
    ctx->pc = 0x1E12F4u;
    // 0x1e12f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E12F4u;
    {
        const bool branch_taken_0x1e12f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12F4u;
        // 0x1e12f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12f4) {
            ctx->pc = 0x1E1304u;
            goto label_1e1304;
        }
    }
    ctx->pc = 0x1E12FCu;
    // 0x1e12fc: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E12FCu;
    {
        const bool branch_taken_0x1e12fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e12fc) {
            ctx->pc = 0x1E1300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E12FCu;
            // 0x1e1300: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E131Cu;
            goto label_1e131c;
        }
    }
    ctx->pc = 0x1E1304u;
label_1e1304:
    // 0x1e1304: 0x8e020490  lw          $v0, 0x490($s0)
    ctx->pc = 0x1e1304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e1308: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1E1308u;
    {
        const bool branch_taken_0x1e1308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1308u;
        // 0x1e130c: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1308) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E1310u;
label_1e1310:
    // 0x1e1310: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x1e1310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x1e1314: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1E1314u;
    {
        const bool branch_taken_0x1e1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1314u;
        // 0x1e1318: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1314) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E131Cu;
label_1e131c:
    // 0x1e131c: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x1e131cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x1e1320: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x1e1320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x1e1324: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x1E1324u;
    {
        const bool branch_taken_0x1e1324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1324u;
        // 0x1e1328: 0xae020228  sw          $v0, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1324) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E132Cu;
label_1e132c:
    // 0x1e132c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e1330:
    // 0x1e1330: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e1330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e1334: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e1334u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e1338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e133c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E133Cu;
    {
        const bool branch_taken_0x1e133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E133Cu;
        // 0x1e1340: 0x311fb  dsra        $v0, $v1, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e133c) {
            ctx->pc = 0x1E1374u;
            goto label_1e1374;
        }
    }
    ctx->pc = 0x1E1344u;
    // 0x1e1344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1348: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1348u;
    {
        const bool branch_taken_0x1e1348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1348u;
        // 0x1e134c: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1348) {
            ctx->pc = 0x1E1378u;
            goto label_1e1378;
        }
    }
    ctx->pc = 0x1E1350u;
    // 0x1e1350: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e1354: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e1358: 0x50430015  beql        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1358u;
    {
        const bool branch_taken_0x1e1358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1358) {
            ctx->pc = 0x1E135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1358u;
            // 0x1e135c: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E13B0u;
            goto label_1e13b0;
        }
    }
    ctx->pc = 0x1E1360u;
    // 0x1e1360: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1e1364: 0x504300dc  beql        $v0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x1E1364u;
    {
        const bool branch_taken_0x1e1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1364) {
            ctx->pc = 0x1E1368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1364u;
            // 0x1e1368: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E136Cu;
    // 0x1e136c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E136Cu;
    {
        const bool branch_taken_0x1e136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E136Cu;
        // 0x1e1370: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e136c) {
            ctx->pc = 0x1E13C4u;
            goto label_1e13c4;
        }
    }
    ctx->pc = 0x1E1374u;
label_1e1374:
    // 0x1e1374: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e1374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e1378:
    // 0x1e1378: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e137c: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e137cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e1380: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1384: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E1384u;
    {
        const bool branch_taken_0x1e1384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1384) {
            ctx->pc = 0x1E1388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1384u;
            // 0x1e1388: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E13D8u;
            goto label_1e13d8;
        }
    }
    ctx->pc = 0x1E138Cu;
    // 0x1e138c: 0x311fb  dsra        $v0, $v1, 7
    ctx->pc = 0x1e138cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
    // 0x1e1390: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1394: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E1394u;
    {
        const bool branch_taken_0x1e1394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1394u;
        // 0x1e1398: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1394) {
            ctx->pc = 0x1E13D8u;
            goto label_1e13d8;
        }
    }
    ctx->pc = 0x1E139Cu;
    // 0x1e139c: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e13a0: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e13a4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E13A4u;
    {
        const bool branch_taken_0x1e13a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e13a4) {
            ctx->pc = 0x1E13A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E13A4u;
            // 0x1e13a8: 0x8e020360  lw          $v0, 0x360($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E13B8u;
            goto label_1e13b8;
        }
    }
    ctx->pc = 0x1E13ACu;
    // 0x1e13ac: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x1e13acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
label_1e13b0:
    // 0x1e13b0: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1E13B0u;
    {
        const bool branch_taken_0x1e13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13B0u;
        // 0x1e13b4: 0xae030224  sw          $v1, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13b0) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E13B8u;
label_1e13b8:
    // 0x1e13b8: 0x504300c7  beql        $v0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1E13B8u;
    {
        const bool branch_taken_0x1e13b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e13b8) {
            ctx->pc = 0x1E13BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E13B8u;
            // 0x1e13bc: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E13C0u;
    // 0x1e13c0: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
label_1e13c4:
    // 0x1e13c4: 0x544300c5  bnel        $v0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1E13C4u;
    {
        const bool branch_taken_0x1e13c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e13c4) {
            ctx->pc = 0x1E13C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E13C4u;
            // 0x1e13c8: 0x9e020220  lwu         $v0, 0x220($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16DCu;
            goto label_1e16dc;
        }
    }
    ctx->pc = 0x1E13CCu;
    // 0x1e13cc: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x1e13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x1e13d0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1E13D0u;
    {
        const bool branch_taken_0x1e13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13D0u;
        // 0x1e13d4: 0xae020228  sw          $v0, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13d0) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E13D8u;
label_1e13d8:
    // 0x1e13d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e13d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e13dc: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e13dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e13e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e13e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e13e4: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1E13E4u;
    {
        const bool branch_taken_0x1e13e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13E4u;
        // 0x1e13e8: 0x311fb  dsra        $v0, $v1, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13e4) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E13ECu;
    // 0x1e13ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e13ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e13f0: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1E13F0u;
    {
        const bool branch_taken_0x1e13f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13F0u;
        // 0x1e13f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13f0) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E13F8u;
    // 0x1e13f8: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e13fc: 0x54620066  bnel        $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1E13FCu;
    {
        const bool branch_taken_0x1e13fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e13fc) {
            ctx->pc = 0x1E1400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E13FCu;
            // 0x1e1400: 0x8e05014c  lw          $a1, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1598u;
            goto label_1e1598;
        }
    }
    ctx->pc = 0x1E1404u;
    // 0x1e1404: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e1408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e140c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1410: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1410u;
    {
        const bool branch_taken_0x1e1410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1410u;
        // 0x1e1414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1410) {
            ctx->pc = 0x1E1448u;
            goto label_1e1448;
        }
    }
    ctx->pc = 0x1E1418u;
    // 0x1e1418: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e1418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e141c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E141Cu;
    {
        const bool branch_taken_0x1e141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E141Cu;
        // 0x1e1420: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e141c) {
            ctx->pc = 0x1E144Cu;
            goto label_1e144c;
        }
    }
    ctx->pc = 0x1E1424u;
    // 0x1e1424: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e1428: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e142c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1430u;
    {
        const bool branch_taken_0x1e1430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1430u;
        // 0x1e1434: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1430) {
            ctx->pc = 0x1E1448u;
            goto label_1e1448;
        }
    }
    ctx->pc = 0x1E1438u;
    // 0x1e1438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1438u;
    {
        const bool branch_taken_0x1e1438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1438u;
        // 0x1e143c: 0xa31026  xor         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1438) {
            ctx->pc = 0x1E1448u;
            goto label_1e1448;
        }
    }
    ctx->pc = 0x1E1440u;
    // 0x1e1440: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1448:
    // 0x1e1448: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1e1448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e144c:
    // 0x1e144c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E144Cu;
    {
        const bool branch_taken_0x1e144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E144Cu;
        // 0x1e1450: 0x8e02014c  lw          $v0, 0x14C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e144c) {
            ctx->pc = 0x1E145Cu;
            goto label_1e145c;
        }
    }
    ctx->pc = 0x1E1454u;
    // 0x1e1454: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x1e1454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x1e1458: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_1e145c:
    // 0x1e145c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e145cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1460: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1464: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1464u;
    {
        const bool branch_taken_0x1e1464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1464u;
        // 0x1e1468: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1464) {
            ctx->pc = 0x1E149Cu;
            goto label_1e149c;
        }
    }
    ctx->pc = 0x1E146Cu;
    // 0x1e146c: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e1470: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1470u;
    {
        const bool branch_taken_0x1e1470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1470u;
        // 0x1e1474: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1470) {
            ctx->pc = 0x1E14A0u;
            goto label_1e14a0;
        }
    }
    ctx->pc = 0x1E1478u;
    // 0x1e1478: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e1478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e147c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e147cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1480: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1484u;
    {
        const bool branch_taken_0x1e1484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1484u;
        // 0x1e1488: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1484) {
            ctx->pc = 0x1E149Cu;
            goto label_1e149c;
        }
    }
    ctx->pc = 0x1E148Cu;
    // 0x1e148c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E148Cu;
    {
        const bool branch_taken_0x1e148c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E148Cu;
        // 0x1e1490: 0xa31026  xor         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e148c) {
            ctx->pc = 0x1E149Cu;
            goto label_1e149c;
        }
    }
    ctx->pc = 0x1E1494u;
    // 0x1e1494: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e149c:
    // 0x1e149c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1e149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e14a0:
    // 0x1e14a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E14A0u;
    {
        const bool branch_taken_0x1e14a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14a0) {
            ctx->pc = 0x1E14A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E14A0u;
            // 0x1e14a4: 0xae05023c  sw          $a1, 0x23C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E14A8u;
            goto label_1e14a8;
        }
    }
    ctx->pc = 0x1E14A8u;
label_1e14a8:
    // 0x1e14a8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1e14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1e14ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e14acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14b0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e14b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e14b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E14B4u;
    {
        const bool branch_taken_0x1e14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14B4u;
        // 0x1e14b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14b4) {
            ctx->pc = 0x1E14ECu;
            goto label_1e14ec;
        }
    }
    ctx->pc = 0x1E14BCu;
    // 0x1e14bc: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e14bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e14c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E14C0u;
    {
        const bool branch_taken_0x1e14c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C0u;
        // 0x1e14c4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14c0) {
            ctx->pc = 0x1E14F0u;
            goto label_1e14f0;
        }
    }
    ctx->pc = 0x1E14C8u;
    // 0x1e14c8: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1e14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1e14cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e14ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14d0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e14d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e14d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E14D4u;
    {
        const bool branch_taken_0x1e14d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14D4u;
        // 0x1e14d8: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14d4) {
            ctx->pc = 0x1E14ECu;
            goto label_1e14ec;
        }
    }
    ctx->pc = 0x1E14DCu;
    // 0x1e14dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E14DCu;
    {
        const bool branch_taken_0x1e14dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14DCu;
        // 0x1e14e0: 0xa31026  xor         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14dc) {
            ctx->pc = 0x1E14ECu;
            goto label_1e14ec;
        }
    }
    ctx->pc = 0x1E14E4u;
    // 0x1e14e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e14e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e14e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e14e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e14ec:
    // 0x1e14ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1e14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e14f0:
    // 0x1e14f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E14F0u;
    {
        const bool branch_taken_0x1e14f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14f0) {
            ctx->pc = 0x1E14F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E14F0u;
            // 0x1e14f4: 0xae050240  sw          $a1, 0x240($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E14F8u;
            goto label_1e14f8;
        }
    }
    ctx->pc = 0x1E14F8u;
label_1e14f8:
    // 0x1e14f8: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1e14fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e14fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1500: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1504u;
    {
        const bool branch_taken_0x1e1504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1504u;
        // 0x1e1508: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1504) {
            ctx->pc = 0x1E153Cu;
            goto label_1e153c;
        }
    }
    ctx->pc = 0x1E150Cu;
    // 0x1e150c: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e1510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1510u;
    {
        const bool branch_taken_0x1e1510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1510u;
        // 0x1e1514: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1510) {
            ctx->pc = 0x1E1540u;
            goto label_1e1540;
        }
    }
    ctx->pc = 0x1E1518u;
    // 0x1e1518: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e151c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e151cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1520: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1524u;
    {
        const bool branch_taken_0x1e1524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1524u;
        // 0x1e1528: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1524) {
            ctx->pc = 0x1E153Cu;
            goto label_1e153c;
        }
    }
    ctx->pc = 0x1E152Cu;
    // 0x1e152c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E152Cu;
    {
        const bool branch_taken_0x1e152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E152Cu;
        // 0x1e1530: 0xa31026  xor         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e152c) {
            ctx->pc = 0x1E153Cu;
            goto label_1e153c;
        }
    }
    ctx->pc = 0x1E1534u;
    // 0x1e1534: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e153c:
    // 0x1e153c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1e153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1e1540:
    // 0x1e1540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1540u;
    {
        const bool branch_taken_0x1e1540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1540u;
        // 0x1e1544: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1540) {
            ctx->pc = 0x1E1550u;
            goto label_1e1550;
        }
    }
    ctx->pc = 0x1E1548u;
    // 0x1e1548: 0xae020244  sw          $v0, 0x244($s0)
    ctx->pc = 0x1e1548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
    // 0x1e154c: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1e1550:
    // 0x1e1550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1554: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1558: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1558u;
    {
        const bool branch_taken_0x1e1558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1558u;
        // 0x1e155c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1558) {
            ctx->pc = 0x1E1590u;
            goto label_1e1590;
        }
    }
    ctx->pc = 0x1E1560u;
    // 0x1e1560: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e1564: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1E1564u;
    {
        const bool branch_taken_0x1e1564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1564u;
        // 0x1e1568: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1564) {
            ctx->pc = 0x1E16D0u;
            goto label_1e16d0;
        }
    }
    ctx->pc = 0x1E156Cu;
    // 0x1e156c: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e1570: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1574: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1578u;
    {
        const bool branch_taken_0x1e1578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1578u;
        // 0x1e157c: 0x38620007  xori        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1578) {
            ctx->pc = 0x1E1590u;
            goto label_1e1590;
        }
    }
    ctx->pc = 0x1E1580u;
    // 0x1e1580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1580u;
    {
        const bool branch_taken_0x1e1580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1580u;
        // 0x1e1584: 0xa31026  xor         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1580) {
            ctx->pc = 0x1E1590u;
            goto label_1e1590;
        }
    }
    ctx->pc = 0x1E1588u;
    // 0x1e1588: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e158c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1590:
    // 0x1e1590: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1E1590u;
    {
        const bool branch_taken_0x1e1590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1590u;
        // 0x1e1594: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1590) {
            ctx->pc = 0x1E16D0u;
            goto label_1e16d0;
        }
    }
    ctx->pc = 0x1E1598u;
label_1e1598:
    // 0x1e1598: 0x54a3000a  bnel        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1598u;
    {
        const bool branch_taken_0x1e1598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1598) {
            ctx->pc = 0x1E159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1598u;
            // 0x1e159c: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E15C4u;
            goto label_1e15c4;
        }
    }
    ctx->pc = 0x1E15A0u;
    // 0x1e15a0: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e15a4: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E15A4u;
    {
        const bool branch_taken_0x1e15a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e15a4) {
            ctx->pc = 0x1E15A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15A4u;
            // 0x1e15a8: 0x8e020364  lw          $v0, 0x364($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E15B4u;
            goto label_1e15b4;
        }
    }
    ctx->pc = 0x1E15ACu;
    // 0x1e15ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1E15ACu;
    {
        const bool branch_taken_0x1e15ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15ACu;
        // 0x1e15b0: 0xae030224  sw          $v1, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15ac) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E15B4u;
label_1e15b4:
    // 0x1e15b4: 0x54430049  bnel        $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E15B4u;
    {
        const bool branch_taken_0x1e15b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e15b4) {
            ctx->pc = 0x1E15B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15B4u;
            // 0x1e15b8: 0x9e020220  lwu         $v0, 0x220($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16DCu;
            goto label_1e16dc;
        }
    }
    ctx->pc = 0x1E15BCu;
    // 0x1e15bc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1E15BCu;
    {
        const bool branch_taken_0x1e15bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15BCu;
        // 0x1e15c0: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15bc) {
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E15C4u;
label_1e15c4:
    // 0x1e15c4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E15C4u;
    {
        const bool branch_taken_0x1e15c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e15c4) {
            ctx->pc = 0x1E15C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15C4u;
            // 0x1e15c8: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E15DCu;
            goto label_1e15dc;
        }
    }
    ctx->pc = 0x1E15CCu;
    // 0x1e15cc: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1e15d0: 0x50430041  beql        $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1E15D0u;
    {
        const bool branch_taken_0x1e15d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e15d0) {
            ctx->pc = 0x1E15D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15D0u;
            // 0x1e15d4: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E15D8u;
    // 0x1e15d8: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1e15dc:
    // 0x1e15dc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E15DCu;
    {
        const bool branch_taken_0x1e15dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15DCu;
        // 0x1e15e0: 0x38a20006  xori        $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15dc) {
            ctx->pc = 0x1E1604u;
            goto label_1e1604;
        }
    }
    ctx->pc = 0x1E15E4u;
    // 0x1e15e4: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1e15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1e15e8: 0x5043003b  beql        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1E15E8u;
    {
        const bool branch_taken_0x1e15e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e15e8) {
            ctx->pc = 0x1E15ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15E8u;
            // 0x1e15ec: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E15F0u;
    // 0x1e15f0: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1e15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1e15f4: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E15F4u;
    {
        const bool branch_taken_0x1e15f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e15f4) {
            ctx->pc = 0x1E15F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E15F4u;
            // 0x1e15f8: 0xae03022c  sw          $v1, 0x22C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E15FCu;
    // 0x1e15fc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E15FCu;
    {
        const bool branch_taken_0x1e15fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15FCu;
        // 0x1e1600: 0x9e020220  lwu         $v0, 0x220($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15fc) {
            ctx->pc = 0x1E16DCu;
            goto label_1e16dc;
        }
    }
    ctx->pc = 0x1E1604u;
label_1e1604:
    // 0x1e1604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1604u;
    {
        const bool branch_taken_0x1e1604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1604u;
        // 0x1e1608: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1604) {
            ctx->pc = 0x1E1618u;
            goto label_1e1618;
        }
    }
    ctx->pc = 0x1E160Cu;
    // 0x1e160c: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e1610: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1614: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1618:
    // 0x1e1618: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e161c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E161Cu;
    {
        const bool branch_taken_0x1e161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E161Cu;
        // 0x1e1620: 0x8e02014c  lw          $v0, 0x14C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e161c) {
            ctx->pc = 0x1E162Cu;
            goto label_1e162c;
        }
    }
    ctx->pc = 0x1E1624u;
    // 0x1e1624: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x1e1624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x1e1628: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_1e162c:
    // 0x1e162c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1630: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1634u;
    {
        const bool branch_taken_0x1e1634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1634u;
        // 0x1e1638: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1634) {
            ctx->pc = 0x1E1648u;
            goto label_1e1648;
        }
    }
    ctx->pc = 0x1E163Cu;
    // 0x1e163c: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e1640: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1644: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1648:
    // 0x1e1648: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e164c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E164Cu;
    {
        const bool branch_taken_0x1e164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e164c) {
            ctx->pc = 0x1E1650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E164Cu;
            // 0x1e1650: 0xae05023c  sw          $a1, 0x23C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1654u;
            goto label_1e1654;
        }
    }
    ctx->pc = 0x1E1654u;
label_1e1654:
    // 0x1e1654: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1e1658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e165c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1660u;
    {
        const bool branch_taken_0x1e1660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1660u;
        // 0x1e1664: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1660) {
            ctx->pc = 0x1E1674u;
            goto label_1e1674;
        }
    }
    ctx->pc = 0x1E1668u;
    // 0x1e1668: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e1668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e166c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e166cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1674:
    // 0x1e1674: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1678: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1678u;
    {
        const bool branch_taken_0x1e1678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1678) {
            ctx->pc = 0x1E167Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1678u;
            // 0x1e167c: 0xae050240  sw          $a1, 0x240($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1680u;
            goto label_1e1680;
        }
    }
    ctx->pc = 0x1E1680u;
label_1e1680:
    // 0x1e1680: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1e1684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1688: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e168c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E168Cu;
    {
        const bool branch_taken_0x1e168c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E168Cu;
        // 0x1e1690: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e168c) {
            ctx->pc = 0x1E16A0u;
            goto label_1e16a0;
        }
    }
    ctx->pc = 0x1E1694u;
    // 0x1e1694: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e1694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e1698: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e169c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e169cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e16a0:
    // 0x1e16a0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e16a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e16a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E16A4u;
    {
        const bool branch_taken_0x1e16a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e16a4) {
            ctx->pc = 0x1E16A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E16A4u;
            // 0x1e16a8: 0xae050244  sw          $a1, 0x244($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16ACu;
            goto label_1e16ac;
        }
    }
    ctx->pc = 0x1E16ACu;
label_1e16ac:
    // 0x1e16ac: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1e16b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e16b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16b4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e16b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e16b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E16B8u;
    {
        const bool branch_taken_0x1e16b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16B8u;
        // 0x1e16bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e16b8) {
            ctx->pc = 0x1E16CCu;
            goto label_1e16cc;
        }
    }
    ctx->pc = 0x1E16C0u;
    // 0x1e16c0: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x1e16c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1e16c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e16c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e16c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e16c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e16cc:
    // 0x1e16cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e16d0:
    // 0x1e16d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E16D0u;
    {
        const bool branch_taken_0x1e16d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e16d0) {
            ctx->pc = 0x1E16D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E16D0u;
            // 0x1e16d4: 0xae050248  sw          $a1, 0x248($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E16D8u;
            goto label_1e16d8;
        }
    }
    ctx->pc = 0x1E16D8u;
label_1e16d8:
    // 0x1e16d8: 0x9e020220  lwu         $v0, 0x220($s0)
    ctx->pc = 0x1e16d8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_1e16dc:
    // 0x1e16dc: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e16dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e16e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e16e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E16E4u;
    {
        const bool branch_taken_0x1e16e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16E4u;
        // 0x1e16e8: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e16e4) {
            ctx->pc = 0x1E16FCu;
            goto label_1e16fc;
        }
    }
    ctx->pc = 0x1E16ECu;
    // 0x1e16ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e16f0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e16f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e16f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e16f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e16fc:
    // 0x1e16fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e16fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1704: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1708: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E1708u;
    SET_GPR_U32(ctx, 31, 0x1E1710u);
    ctx->pc = 0x1E170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1708u;
    // 0x1e170c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E1708u, 0x1E1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1710u;
label_1e1710:
    // 0x1e1710: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e1710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e1714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1718: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e1718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e171c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1e171cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1e1720: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e1720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1724: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e1724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e1728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e172c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E172Cu;
    SET_GPR_U32(ctx, 31, 0x1E1734u);
    ctx->pc = 0x1E1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E172Cu;
    // 0x1e1730: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E172Cu, 0x1E1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1734u;
label_1e1734:
    // 0x1e1734: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1e1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e1738: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x1E1738u;
    {
        const bool branch_taken_0x1e1738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1738u;
        // 0x1e173c: 0x34630040  ori         $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1738) {
            ctx->pc = 0x1E1C54u;
            goto label_1e1c54;
        }
    }
    ctx->pc = 0x1E1740u;
label_1e1740:
    // 0x1e1740: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e1740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1744: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e1744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e1748: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e1748u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e174c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e1750: 0x50600142  beql        $v1, $zero, . + 4 + (0x142 << 2)
    ctx->pc = 0x1E1750u;
    {
        const bool branch_taken_0x1e1750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1750) {
            ctx->pc = 0x1E1754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1750u;
            // 0x1e1754: 0x9e020118  lwu         $v0, 0x118($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1C5Cu;
            goto label_1e1c5c;
        }
    }
    ctx->pc = 0x1E1758u;
    // 0x1e1758: 0x9e020328  lwu         $v0, 0x328($s0)
    ctx->pc = 0x1e1758u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e175c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e175cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e1760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1764: 0x5040013d  beql        $v0, $zero, . + 4 + (0x13D << 2)
    ctx->pc = 0x1E1764u;
    {
        const bool branch_taken_0x1e1764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1764) {
            ctx->pc = 0x1E1768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1764u;
            // 0x1e1768: 0x9e020118  lwu         $v0, 0x118($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1C5Cu;
            goto label_1e1c5c;
        }
    }
    ctx->pc = 0x1E176Cu;
    // 0x1e176c: 0x9e030054  lwu         $v1, 0x54($s0)
    ctx->pc = 0x1e176cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e1770: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e1770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e1774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1778: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E1778u;
    {
        const bool branch_taken_0x1e1778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1778u;
        // 0x1e177c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1778) {
            ctx->pc = 0x1E17E4u;
            goto label_1e17e4;
        }
    }
    ctx->pc = 0x1E1780u;
    // 0x1e1780: 0x311bb  dsra        $v0, $v1, 6
    ctx->pc = 0x1e1780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
    // 0x1e1784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1788: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E1788u;
    {
        const bool branch_taken_0x1e1788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1788u;
        // 0x1e178c: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1788) {
            ctx->pc = 0x1E17E8u;
            goto label_1e17e8;
        }
    }
    ctx->pc = 0x1E1790u;
    // 0x1e1790: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E1790u;
    SET_GPR_U32(ctx, 31, 0x1E1798u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E1790u, 0x1E1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1798u;
label_1e1798:
    // 0x1e1798: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e1798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e179c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e17a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e17a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e17a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E17A4u;
    {
        const bool branch_taken_0x1e17a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e17a4) {
            ctx->pc = 0x1E17A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E17A4u;
            // 0x1e17a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E17ACu;
            goto label_1e17ac;
        }
    }
    ctx->pc = 0x1E17ACu;
label_1e17ac:
    // 0x1e17ac: 0x2810  mfhi        $a1
    ctx->pc = 0x1e17acu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e17b0: 0x50a40039  beql        $a1, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E17B0u;
    {
        const bool branch_taken_0x1e17b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e17b0) {
            ctx->pc = 0x1E17B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E17B0u;
            // 0x1e17b4: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1898u;
            goto label_1e1898;
        }
    }
    ctx->pc = 0x1E17B8u;
    // 0x1e17b8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E17B8u;
    {
        const bool branch_taken_0x1e17b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17B8u;
        // 0x1e17bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17b8) {
            ctx->pc = 0x1E17C8u;
            goto label_1e17c8;
        }
    }
    ctx->pc = 0x1E17C0u;
    // 0x1e17c0: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E17C0u;
    {
        const bool branch_taken_0x1e17c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e17c0) {
            ctx->pc = 0x1E17C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E17C0u;
            // 0x1e17c4: 0x8e020490  lw          $v0, 0x490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E17D4u;
            goto label_1e17d4;
        }
    }
    ctx->pc = 0x1E17C8u;
label_1e17c8:
    // 0x1e17c8: 0x8e020490  lw          $v0, 0x490($s0)
    ctx->pc = 0x1e17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e17cc: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1E17CCu;
    {
        const bool branch_taken_0x1e17cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17CCu;
        // 0x1e17d0: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17cc) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E17D4u;
label_1e17d4:
    // 0x1e17d4: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x1e17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x1e17d8: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x1e17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x1e17dc: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x1E17DCu;
    {
        const bool branch_taken_0x1e17dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17DCu;
        // 0x1e17e0: 0xae020330  sw          $v0, 0x330($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17dc) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E17E4u;
label_1e17e4:
    // 0x1e17e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e17e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e17e8:
    // 0x1e17e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e17e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e17ec: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e17ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e17f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e17f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e17f4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E17F4u;
    {
        const bool branch_taken_0x1e17f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e17f4) {
            ctx->pc = 0x1E17F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E17F4u;
            // 0x1e17f8: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E183Cu;
            goto label_1e183c;
        }
    }
    ctx->pc = 0x1E17FCu;
    // 0x1e17fc: 0x311bb  dsra        $v0, $v1, 6
    ctx->pc = 0x1e17fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
    // 0x1e1800: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1804: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1804u;
    {
        const bool branch_taken_0x1e1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1804u;
        // 0x1e1808: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1804) {
            ctx->pc = 0x1E183Cu;
            goto label_1e183c;
        }
    }
    ctx->pc = 0x1E180Cu;
    // 0x1e180c: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1e180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1e1810: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e1814: 0x504300f6  beql        $v0, $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1E1814u;
    {
        const bool branch_taken_0x1e1814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1814) {
            ctx->pc = 0x1E1818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1814u;
            // 0x1e1818: 0xae03032c  sw          $v1, 0x32C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E181Cu;
    // 0x1e181c: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1820: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E1820u;
    {
        const bool branch_taken_0x1e1820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1820) {
            ctx->pc = 0x1E1824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1820u;
            // 0x1e1824: 0xae030334  sw          $v1, 0x334($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1884u;
            goto label_1e1884;
        }
    }
    ctx->pc = 0x1E1828u;
    // 0x1e1828: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1e182c: 0x544300f1  bnel        $v0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1E182Cu;
    {
        const bool branch_taken_0x1e182c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e182c) {
            ctx->pc = 0x1E1830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E182Cu;
            // 0x1e1830: 0x9e020328  lwu         $v0, 0x328($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BF4u;
            goto label_1e1bf4;
        }
    }
    ctx->pc = 0x1E1834u;
    // 0x1e1834: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x1E1834u;
    {
        const bool branch_taken_0x1e1834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1834u;
        // 0x1e1838: 0xae020334  sw          $v0, 0x334($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1834) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E183Cu;
label_1e183c:
    // 0x1e183c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e1840: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e1840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e1844: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1848: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1848u;
    {
        const bool branch_taken_0x1e1848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1848u;
        // 0x1e184c: 0x311bb  dsra        $v0, $v1, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1848) {
            ctx->pc = 0x1E18A4u;
            goto label_1e18a4;
        }
    }
    ctx->pc = 0x1E1850u;
    // 0x1e1850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1854: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E1854u;
    {
        const bool branch_taken_0x1e1854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1854u;
        // 0x1e1858: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1854) {
            ctx->pc = 0x1E18A8u;
            goto label_1e18a8;
        }
    }
    ctx->pc = 0x1E185Cu;
    // 0x1e185c: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e1860: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e1864: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1864u;
    {
        const bool branch_taken_0x1e1864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1864) {
            ctx->pc = 0x1E1868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1864u;
            // 0x1e1868: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1878u;
            goto label_1e1878;
        }
    }
    ctx->pc = 0x1E186Cu;
    // 0x1e186c: 0xae030334  sw          $v1, 0x334($s0)
    ctx->pc = 0x1e186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
label_1e1870:
    // 0x1e1870: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1E1870u;
    {
        const bool branch_taken_0x1e1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1870u;
        // 0x1e1874: 0xae03032c  sw          $v1, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1870) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1878u;
label_1e1878:
    // 0x1e1878: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1878u;
    {
        const bool branch_taken_0x1e1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1878) {
            ctx->pc = 0x1E187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1878u;
            // 0x1e187c: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1890u;
            goto label_1e1890;
        }
    }
    ctx->pc = 0x1E1880u;
    // 0x1e1880: 0xae030334  sw          $v1, 0x334($s0)
    ctx->pc = 0x1e1880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
label_1e1884:
    // 0x1e1884: 0xae03032c  sw          $v1, 0x32C($s0)
    ctx->pc = 0x1e1884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 3));
    // 0x1e1888: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1E1888u;
    {
        const bool branch_taken_0x1e1888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1888u;
        // 0x1e188c: 0xae030330  sw          $v1, 0x330($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1888) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1890u;
label_1e1890:
    // 0x1e1890: 0x544300d8  bnel        $v0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x1E1890u;
    {
        const bool branch_taken_0x1e1890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1890) {
            ctx->pc = 0x1E1894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1890u;
            // 0x1e1894: 0x9e020328  lwu         $v0, 0x328($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BF4u;
            goto label_1e1bf4;
        }
    }
    ctx->pc = 0x1E1898u;
label_1e1898:
    // 0x1e1898: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x1e1898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x1e189c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1E189Cu;
    {
        const bool branch_taken_0x1e189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E189Cu;
        // 0x1e18a0: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e189c) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E18A4u;
label_1e18a4:
    // 0x1e18a4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e18a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1e18a8:
    // 0x1e18a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e18a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e18ac: 0x3117b  dsra        $v0, $v1, 5
    ctx->pc = 0x1e18acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 5);
    // 0x1e18b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e18b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e18b4: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1E18B4u;
    {
        const bool branch_taken_0x1e18b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18B4u;
        // 0x1e18b8: 0x311bb  dsra        $v0, $v1, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18b4) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E18BCu;
    // 0x1e18bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e18bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e18c0: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1E18C0u;
    {
        const bool branch_taken_0x1e18c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18C0u;
        // 0x1e18c4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18c0) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E18C8u;
    // 0x1e18c8: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x1e18cc: 0x54620065  bnel        $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1E18CCu;
    {
        const bool branch_taken_0x1e18cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e18cc) {
            ctx->pc = 0x1E18D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E18CCu;
            // 0x1e18d0: 0x8e040254  lw          $a0, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A64u;
            goto label_1e1a64;
        }
    }
    ctx->pc = 0x1E18D4u;
    // 0x1e18d4: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1e18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1e18d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e18d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18dc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e18dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e18e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E18E0u;
    {
        const bool branch_taken_0x1e18e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18E0u;
        // 0x1e18e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18e0) {
            ctx->pc = 0x1E1918u;
            goto label_1e1918;
        }
    }
    ctx->pc = 0x1E18E8u;
    // 0x1e18e8: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e18ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E18ECu;
    {
        const bool branch_taken_0x1e18ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18ECu;
        // 0x1e18f0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18ec) {
            ctx->pc = 0x1E191Cu;
            goto label_1e191c;
        }
    }
    ctx->pc = 0x1E18F4u;
    // 0x1e18f4: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e18f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e18f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18fc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1900: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1900u;
    {
        const bool branch_taken_0x1e1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1900u;
        // 0x1e1904: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1900) {
            ctx->pc = 0x1E1918u;
            goto label_1e1918;
        }
    }
    ctx->pc = 0x1E1908u;
    // 0x1e1908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1908u;
    {
        const bool branch_taken_0x1e1908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1908u;
        // 0x1e190c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1908) {
            ctx->pc = 0x1E1918u;
            goto label_1e1918;
        }
    }
    ctx->pc = 0x1E1910u;
    // 0x1e1910: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1914: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1918:
    // 0x1e1918: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e191c:
    // 0x1e191c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E191Cu;
    {
        const bool branch_taken_0x1e191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e191c) {
            ctx->pc = 0x1E1920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E191Cu;
            // 0x1e1920: 0xae040338  sw          $a0, 0x338($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1924u;
            goto label_1e1924;
        }
    }
    ctx->pc = 0x1E1924u;
label_1e1924:
    // 0x1e1924: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e192c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1930: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1930u;
    {
        const bool branch_taken_0x1e1930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1930u;
        // 0x1e1934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1930) {
            ctx->pc = 0x1E1968u;
            goto label_1e1968;
        }
    }
    ctx->pc = 0x1E1938u;
    // 0x1e1938: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e193c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E193Cu;
    {
        const bool branch_taken_0x1e193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E193Cu;
        // 0x1e1940: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e193c) {
            ctx->pc = 0x1E196Cu;
            goto label_1e196c;
        }
    }
    ctx->pc = 0x1E1944u;
    // 0x1e1944: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1e1948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e194c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1950u;
        // 0x1e1954: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1968u;
            goto label_1e1968;
        }
    }
    ctx->pc = 0x1E1958u;
    // 0x1e1958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1958u;
    {
        const bool branch_taken_0x1e1958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1958u;
        // 0x1e195c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1958) {
            ctx->pc = 0x1E1968u;
            goto label_1e1968;
        }
    }
    ctx->pc = 0x1E1960u;
    // 0x1e1960: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1964: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1968:
    // 0x1e1968: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e196c:
    // 0x1e196c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E196Cu;
    {
        const bool branch_taken_0x1e196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E196Cu;
        // 0x1e1970: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e196c) {
            ctx->pc = 0x1E197Cu;
            goto label_1e197c;
        }
    }
    ctx->pc = 0x1E1974u;
    // 0x1e1974: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x1e1974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x1e1978: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_1e197c:
    // 0x1e197c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1980: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1984: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1984u;
    {
        const bool branch_taken_0x1e1984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1984u;
        // 0x1e1988: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1984) {
            ctx->pc = 0x1E19BCu;
            goto label_1e19bc;
        }
    }
    ctx->pc = 0x1E198Cu;
    // 0x1e198c: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1990: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1990u;
    {
        const bool branch_taken_0x1e1990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1990u;
        // 0x1e1994: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1990) {
            ctx->pc = 0x1E19C0u;
            goto label_1e19c0;
        }
    }
    ctx->pc = 0x1E1998u;
    // 0x1e1998: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1e1998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1e199c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e199cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19a0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e19a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e19a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E19A4u;
    {
        const bool branch_taken_0x1e19a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19A4u;
        // 0x1e19a8: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19a4) {
            ctx->pc = 0x1E19BCu;
            goto label_1e19bc;
        }
    }
    ctx->pc = 0x1E19ACu;
    // 0x1e19ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E19ACu;
    {
        const bool branch_taken_0x1e19ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19ACu;
        // 0x1e19b0: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19ac) {
            ctx->pc = 0x1E19BCu;
            goto label_1e19bc;
        }
    }
    ctx->pc = 0x1E19B4u;
    // 0x1e19b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e19b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e19b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e19bc:
    // 0x1e19bc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e19bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e19c0:
    // 0x1e19c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E19C0u;
    {
        const bool branch_taken_0x1e19c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c0) {
            ctx->pc = 0x1E19C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E19C0u;
            // 0x1e19c4: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E19D4u;
            goto label_1e19d4;
        }
    }
    ctx->pc = 0x1E19C8u;
    // 0x1e19c8: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e19cc: 0xae020344  sw          $v0, 0x344($s0)
    ctx->pc = 0x1e19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
    // 0x1e19d0: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_1e19d4:
    // 0x1e19d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e19d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19d8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e19d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e19dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E19DCu;
    {
        const bool branch_taken_0x1e19dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19DCu;
        // 0x1e19e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19dc) {
            ctx->pc = 0x1E1A14u;
            goto label_1e1a14;
        }
    }
    ctx->pc = 0x1E19E4u;
    // 0x1e19e4: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e19e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e19e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E19E8u;
    {
        const bool branch_taken_0x1e19e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19E8u;
        // 0x1e19ec: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19e8) {
            ctx->pc = 0x1E1A18u;
            goto label_1e1a18;
        }
    }
    ctx->pc = 0x1E19F0u;
    // 0x1e19f0: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1e19f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e19f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19f8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e19f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e19fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E19FCu;
    {
        const bool branch_taken_0x1e19fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19FCu;
        // 0x1e1a00: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19fc) {
            ctx->pc = 0x1E1A14u;
            goto label_1e1a14;
        }
    }
    ctx->pc = 0x1E1A04u;
    // 0x1e1a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A04u;
    {
        const bool branch_taken_0x1e1a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A04u;
        // 0x1e1a08: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a04) {
            ctx->pc = 0x1E1A14u;
            goto label_1e1a14;
        }
    }
    ctx->pc = 0x1E1A0Cu;
    // 0x1e1a0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e1a10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1a10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a14:
    // 0x1e1a14: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e1a18:
    // 0x1e1a18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1A18u;
    {
        const bool branch_taken_0x1e1a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a18) {
            ctx->pc = 0x1E1A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A18u;
            // 0x1e1a1c: 0xae040350  sw          $a0, 0x350($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A20u;
            goto label_1e1a20;
        }
    }
    ctx->pc = 0x1E1A20u;
label_1e1a20:
    // 0x1e1a20: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a28: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1a2c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1E1A2Cu;
    {
        const bool branch_taken_0x1e1a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A2Cu;
        // 0x1e1a30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a2c) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1A34u;
    // 0x1e1a34: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1a38: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1E1A38u;
    {
        const bool branch_taken_0x1e1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A38u;
        // 0x1e1a3c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a38) {
            ctx->pc = 0x1E1BE8u;
            goto label_1e1be8;
        }
    }
    ctx->pc = 0x1E1A40u;
    // 0x1e1a40: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e1a44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a48: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1a4c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1E1A4Cu;
    {
        const bool branch_taken_0x1e1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A4Cu;
        // 0x1e1a50: 0x38a20007  xori        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a4c) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1A54u;
    // 0x1e1a54: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1E1A54u;
    {
        const bool branch_taken_0x1e1a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A54u;
        // 0x1e1a58: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a54) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1A5Cu;
    // 0x1e1a5c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1E1A5Cu;
    {
        const bool branch_taken_0x1e1a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A5Cu;
        // 0x1e1a60: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a5c) {
            ctx->pc = 0x1E1BE0u;
            goto label_1e1be0;
        }
    }
    ctx->pc = 0x1E1A64u;
label_1e1a64:
    // 0x1e1a64: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1A64u;
    {
        const bool branch_taken_0x1e1a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a64) {
            ctx->pc = 0x1E1A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A64u;
            // 0x1e1a68: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A80u;
            goto label_1e1a80;
        }
    }
    ctx->pc = 0x1E1A6Cu;
    // 0x1e1a6c: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e1a70: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A70u;
    {
        const bool branch_taken_0x1e1a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e1a70) {
            ctx->pc = 0x1E1A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A70u;
            // 0x1e1a74: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A80u;
            goto label_1e1a80;
        }
    }
    ctx->pc = 0x1E1A78u;
    // 0x1e1a78: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1E1A78u;
    {
        const bool branch_taken_0x1e1a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A78u;
        // 0x1e1a7c: 0xae04032c  sw          $a0, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a78) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1A80u;
label_1e1a80:
    // 0x1e1a80: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E1A80u;
    {
        const bool branch_taken_0x1e1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a80) {
            ctx->pc = 0x1E1A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A80u;
            // 0x1e1a84: 0x8e05025c  lw          $a1, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B08u;
            goto label_1e1b08;
        }
    }
    ctx->pc = 0x1E1A88u;
    // 0x1e1a88: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1e1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1e1a8c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A8Cu;
    {
        const bool branch_taken_0x1e1a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a8c) {
            ctx->pc = 0x1E1A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A8Cu;
            // 0x1e1a90: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1A9Cu;
            goto label_1e1a9c;
        }
    }
    ctx->pc = 0x1E1A94u;
    // 0x1e1a94: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1E1A94u;
    {
        const bool branch_taken_0x1e1a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A94u;
        // 0x1e1a98: 0xae030334  sw          $v1, 0x334($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a94) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1A9Cu;
label_1e1a9c:
    // 0x1e1a9c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A9Cu;
    {
        const bool branch_taken_0x1e1a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a9c) {
            ctx->pc = 0x1E1AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1A9Cu;
            // 0x1e1aa0: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1AACu;
            goto label_1e1aac;
        }
    }
    ctx->pc = 0x1E1AA4u;
    // 0x1e1aa4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1E1AA4u;
    {
        const bool branch_taken_0x1e1aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA4u;
        // 0x1e1aa8: 0xae030330  sw          $v1, 0x330($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1aa4) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1AACu;
label_1e1aac:
    // 0x1e1aac: 0x1043ff70  beq         $v0, $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x1E1AACu;
    {
        const bool branch_taken_0x1e1aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AACu;
        // 0x1e1ab0: 0x38820006  xori        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1aac) {
            ctx->pc = 0x1E1870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1870;
        }
    }
    ctx->pc = 0x1E1AB4u;
    // 0x1e1ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1AB4u;
    {
        const bool branch_taken_0x1e1ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB4u;
        // 0x1e1ab8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ab4) {
            ctx->pc = 0x1E1AC8u;
            goto label_1e1ac8;
        }
    }
    ctx->pc = 0x1E1ABCu;
    // 0x1e1abc: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1ac0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1ac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ac8:
    // 0x1e1ac8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1acc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1ACCu;
    {
        const bool branch_taken_0x1e1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1acc) {
            ctx->pc = 0x1E1AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1ACCu;
            // 0x1e1ad0: 0xae040338  sw          $a0, 0x338($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1AD4u;
            goto label_1e1ad4;
        }
    }
    ctx->pc = 0x1E1AD4u;
label_1e1ad4:
    // 0x1e1ad4: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1e1ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1adc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1ae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1AE0u;
    {
        const bool branch_taken_0x1e1ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE0u;
        // 0x1e1ae4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae0) {
            ctx->pc = 0x1E1AF4u;
            goto label_1e1af4;
        }
    }
    ctx->pc = 0x1E1AE8u;
    // 0x1e1ae8: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1aec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1af0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1af0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1af4:
    // 0x1e1af4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1af8: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E1AF8u;
    {
        const bool branch_taken_0x1e1af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1af8) {
            ctx->pc = 0x1E1AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1AF8u;
            // 0x1e1afc: 0xae040350  sw          $a0, 0x350($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1B00u;
    // 0x1e1b00: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1E1B00u;
    {
        const bool branch_taken_0x1e1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B00u;
        // 0x1e1b04: 0x9e020328  lwu         $v0, 0x328($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b00) {
            ctx->pc = 0x1E1BF4u;
            goto label_1e1bf4;
        }
    }
    ctx->pc = 0x1E1B08u;
label_1e1b08:
    // 0x1e1b08: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1B08u;
    {
        const bool branch_taken_0x1e1b08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B08u;
        // 0x1e1b0c: 0x38820006  xori        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b08) {
            ctx->pc = 0x1E1B20u;
            goto label_1e1b20;
        }
    }
    ctx->pc = 0x1E1B10u;
    // 0x1e1b10: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1e1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1e1b14: 0x50450036  beql        $v0, $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E1B14u;
    {
        const bool branch_taken_0x1e1b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e1b14) {
            ctx->pc = 0x1E1B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1B14u;
            // 0x1e1b18: 0xae020334  sw          $v0, 0x334($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1B1Cu;
    // 0x1e1b1c: 0x38820006  xori        $v0, $a0, 0x6
    ctx->pc = 0x1e1b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_1e1b20:
    // 0x1e1b20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1B20u;
    {
        const bool branch_taken_0x1e1b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B20u;
        // 0x1e1b24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b20) {
            ctx->pc = 0x1E1B34u;
            goto label_1e1b34;
        }
    }
    ctx->pc = 0x1E1B28u;
    // 0x1e1b28: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1b2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1b30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b34:
    // 0x1e1b34: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1b38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1B38u;
    {
        const bool branch_taken_0x1e1b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b38) {
            ctx->pc = 0x1E1B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1B38u;
            // 0x1e1b3c: 0xae040338  sw          $a0, 0x338($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B40u;
            goto label_1e1b40;
        }
    }
    ctx->pc = 0x1E1B40u;
label_1e1b40:
    // 0x1e1b40: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b48: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1b4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1B4Cu;
    {
        const bool branch_taken_0x1e1b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B4Cu;
        // 0x1e1b50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b4c) {
            ctx->pc = 0x1E1B60u;
            goto label_1e1b60;
        }
    }
    ctx->pc = 0x1E1B54u;
    // 0x1e1b54: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1b58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1b5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b60:
    // 0x1e1b60: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1b64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1B64u;
    {
        const bool branch_taken_0x1e1b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b64) {
            ctx->pc = 0x1E1B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1B64u;
            // 0x1e1b68: 0xae04033c  sw          $a0, 0x33C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B6Cu;
            goto label_1e1b6c;
        }
    }
    ctx->pc = 0x1E1B6Cu;
label_1e1b6c:
    // 0x1e1b6c: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b74: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1b78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1B78u;
    {
        const bool branch_taken_0x1e1b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B78u;
        // 0x1e1b7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b78) {
            ctx->pc = 0x1E1B8Cu;
            goto label_1e1b8c;
        }
    }
    ctx->pc = 0x1E1B80u;
    // 0x1e1b80: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1b84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1b88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1b88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b8c:
    // 0x1e1b8c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1b90: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1B90u;
    {
        const bool branch_taken_0x1e1b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b90) {
            ctx->pc = 0x1E1B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1B90u;
            // 0x1e1b94: 0xae040344  sw          $a0, 0x344($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1B98u;
            goto label_1e1b98;
        }
    }
    ctx->pc = 0x1E1B98u;
label_1e1b98:
    // 0x1e1b98: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x1e1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e1b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ba0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1BA4u;
    {
        const bool branch_taken_0x1e1ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BA4u;
        // 0x1e1ba8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ba4) {
            ctx->pc = 0x1E1BB8u;
            goto label_1e1bb8;
        }
    }
    ctx->pc = 0x1E1BACu;
    // 0x1e1bac: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1bb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1bb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1bb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bb8:
    // 0x1e1bb8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1bbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1BBCu;
    {
        const bool branch_taken_0x1e1bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1bbc) {
            ctx->pc = 0x1E1BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1BBCu;
            // 0x1e1bc0: 0xae040350  sw          $a0, 0x350($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BC4u;
            goto label_1e1bc4;
        }
    }
    ctx->pc = 0x1E1BC4u;
label_1e1bc4:
    // 0x1e1bc4: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1e1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1e1bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bcc: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1e1bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1BD0u;
    {
        const bool branch_taken_0x1e1bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BD0u;
        // 0x1e1bd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bd0) {
            ctx->pc = 0x1E1BE4u;
            goto label_1e1be4;
        }
    }
    ctx->pc = 0x1E1BD8u;
    // 0x1e1bd8: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x1e1bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x1e1bdc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1be0:
    // 0x1e1be0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1be4:
    // 0x1e1be4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e1be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e1be8:
    // 0x1e1be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1BE8u;
    {
        const bool branch_taken_0x1e1be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1be8) {
            ctx->pc = 0x1E1BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1BE8u;
            // 0x1e1bec: 0xae040354  sw          $a0, 0x354($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1BF0u;
label_1e1bf0:
    // 0x1e1bf0: 0x9e020328  lwu         $v0, 0x328($s0)
    ctx->pc = 0x1e1bf0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_1e1bf4:
    // 0x1e1bf4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e1bf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e1bf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1bfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1BFCu;
    {
        const bool branch_taken_0x1e1bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BFCu;
        // 0x1e1c00: 0x26030268  addiu       $v1, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bfc) {
            ctx->pc = 0x1E1C14u;
            goto label_1e1c14;
        }
    }
    ctx->pc = 0x1E1C04u;
    // 0x1e1c04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1c08: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e1c0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e1c10: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e1c14:
    // 0x1e1c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1c1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1c20: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1E1C20u;
    SET_GPR_U32(ctx, 31, 0x1E1C28u);
    ctx->pc = 0x1E1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C20u;
    // 0x1e1c24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1E1C20u, 0x1E1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C28u;
label_1e1c28:
    // 0x1e1c28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e1c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c30: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e1c34: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1e1c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1e1c38: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e1c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1c3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e1c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1c40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e1c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c44: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E1C44u;
    SET_GPR_U32(ctx, 31, 0x1E1C4Cu);
    ctx->pc = 0x1E1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C44u;
    // 0x1e1c48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E1C44u, 0x1E1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C4Cu;
label_1e1c4c:
    // 0x1e1c4c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1e1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e1c50: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1e1c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_1e1c54:
    // 0x1e1c54: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1e1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1e1c58: 0x9e020118  lwu         $v0, 0x118($s0)
    ctx->pc = 0x1e1c58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1e1c5c:
    // 0x1e1c5c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1e1c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1e1c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1c64: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1C64u;
    {
        const bool branch_taken_0x1e1c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c64) {
            ctx->pc = 0x1E1C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C64u;
            // 0x1e1c68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CC0u;
            goto label_1e1cc0;
        }
    }
    ctx->pc = 0x1E1C6Cu;
    // 0x1e1c6c: 0x9e020220  lwu         $v0, 0x220($s0)
    ctx->pc = 0x1e1c6cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1e1c70: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1e1c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1e1c74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1c78: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1C78u;
    {
        const bool branch_taken_0x1e1c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c78) {
            ctx->pc = 0x1E1C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C78u;
            // 0x1e1c7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CC0u;
            goto label_1e1cc0;
        }
    }
    ctx->pc = 0x1E1C80u;
    // 0x1e1c80: 0x9e020328  lwu         $v0, 0x328($s0)
    ctx->pc = 0x1e1c80u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1e1c84: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1e1c84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1e1c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1c8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1C8Cu;
    {
        const bool branch_taken_0x1e1c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C8Cu;
        // 0x1e1c90: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c8c) {
            ctx->pc = 0x1E1CBCu;
            goto label_1e1cbc;
        }
    }
    ctx->pc = 0x1E1C94u;
    // 0x1e1c94: 0x8e0504c4  lw          $a1, 0x4C4($s0)
    ctx->pc = 0x1e1c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1220)));
    // 0x1e1c98: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E1C98u;
    SET_GPR_U32(ctx, 31, 0x1E1CA0u);
    ctx->pc = 0x1E1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C98u;
    // 0x1e1c9c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E1C98u, 0x1E1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CA0u;
label_1e1ca0:
    // 0x1e1ca0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e1ca4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e1ca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1CA8u;
    {
        const bool branch_taken_0x1e1ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CA8u;
        // 0x1e1cac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ca8) {
            ctx->pc = 0x1E1CBCu;
            goto label_1e1cbc;
        }
    }
    ctx->pc = 0x1E1CB0u;
label_1e1cb0:
    // 0x1e1cb0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e1cb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e1cb8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e1cbc:
    // 0x1e1cbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1cc0:
    // 0x1e1cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CC4u;
        // 0x1e1cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1CCCu;
    // 0x1e1ccc: 0x0  nop
    ctx->pc = 0x1e1cccu;
    // NOP
    ctx->pc = 0x1e1cd0u;
}
