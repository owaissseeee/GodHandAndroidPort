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

// Function: func_00392CD0
// Address: 0x392cd0 - 0x392e48
void func_00392CD0_0x392cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00392CD0_0x392cd0");
#endif

    switch (ctx->pc) {
        case 0x392d04u: goto label_392d04;
        case 0x392d34u: goto label_392d34;
        case 0x392db0u: goto label_392db0;
        case 0x392dd4u: goto label_392dd4;
        case 0x392e1cu: goto label_392e1c;
        default: break;
    }

    ctx->pc = 0x392cd0u;

    // 0x392cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x392cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x392cd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x392cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x392cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x392cdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x392cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392ce0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x392ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x392ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392ce8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x392ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x392cec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x392cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x392cf0: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x392cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x392cf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x392CF4u;
    {
        const bool branch_taken_0x392cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CF4u;
        // 0x392cf8: 0x34a20020  ori         $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392cf4) {
            ctx->pc = 0x392D14u;
            goto label_392d14;
        }
    }
    ctx->pc = 0x392CFCu;
    // 0x392cfc: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x392CFCu;
    SET_GPR_U32(ctx, 31, 0x392D04u);
    ctx->pc = 0x392D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392CFCu;
    // 0x392d00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x392CFCu, 0x392D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D04u;
label_392d04:
    // 0x392d04: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x392d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x392d08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x392d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x392d0c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x392D0Cu;
    {
        const bool branch_taken_0x392d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D0Cu;
        // 0x392d10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d0c) {
            ctx->pc = 0x392E2Cu;
            goto label_392e2c;
        }
    }
    ctx->pc = 0x392D14u;
label_392d14:
    // 0x392d14: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x392d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x392d18: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x392D18u;
    {
        const bool branch_taken_0x392d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D18u;
        // 0x392d1c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d18) {
            ctx->pc = 0x392D98u;
            goto label_392d98;
        }
    }
    ctx->pc = 0x392D20u;
    // 0x392d20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x392d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x392d24: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x392D24u;
    {
        const bool branch_taken_0x392d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392d24) {
            ctx->pc = 0x392D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392D24u;
            // 0x392d28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392D4Cu;
            goto label_392d4c;
        }
    }
    ctx->pc = 0x392D2Cu;
    // 0x392d2c: 0xc0e31fc  jal         func_38C7F0
    ctx->pc = 0x392D2Cu;
    SET_GPR_U32(ctx, 31, 0x392D34u);
    ctx->pc = 0x392D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392D2Cu;
    // 0x392d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C7F0u, 0x392D2Cu, 0x392D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D34u;
label_392d34:
    // 0x392d34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x392d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x392d38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x392d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x392d3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x392d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x392d40: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x392d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x392d44: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x392d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x392d48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x392d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392d4c:
    // 0x392d4c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x392d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x392d50: 0x54860006  bnel        $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x392D50u;
    {
        const bool branch_taken_0x392d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x392d50) {
            ctx->pc = 0x392D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392D50u;
            // 0x392d54: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392D6Cu;
            goto label_392d6c;
        }
    }
    ctx->pc = 0x392D58u;
    // 0x392d58: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x392d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x392d5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x392d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x392d60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x392d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392d64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x392d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x392d68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x392d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392d6c:
    // 0x392d6c: 0x30a30202  andi        $v1, $a1, 0x202
    ctx->pc = 0x392d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)514);
    // 0x392d70: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x392d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x392d74: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x392d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x392d78: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x392d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x392d7c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x392d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x392d80: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x392D80u;
    {
        const bool branch_taken_0x392d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D80u;
        // 0x392d84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d80) {
            ctx->pc = 0x392D8Cu;
            goto label_392d8c;
        }
    }
    ctx->pc = 0x392D88u;
    // 0x392d88: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x392d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_392d8c:
    // 0x392d8c: 0x34a20800  ori         $v0, $a1, 0x800
    ctx->pc = 0x392d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x392d90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x392d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x392d94: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x392d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392d98:
    // 0x392d98: 0x16320007  bne         $s1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x392D98u;
    {
        const bool branch_taken_0x392d98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x392D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D98u;
        // 0x392d9c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d98) {
            ctx->pc = 0x392DB8u;
            goto label_392db8;
        }
    }
    ctx->pc = 0x392DA0u;
    // 0x392da0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x392da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x392da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392da8: 0xc0e4aa0  jal         func_392A80
    ctx->pc = 0x392DA8u;
    SET_GPR_U32(ctx, 31, 0x392DB0u);
    ctx->pc = 0x392DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392DA8u;
    // 0x392dac: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x392DA8u, 0x392DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392DB0u;
label_392db0:
    // 0x392db0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x392DB0u;
    {
        const bool branch_taken_0x392db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DB0u;
        // 0x392db4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392db0) {
            ctx->pc = 0x392E30u;
            goto label_392e30;
        }
    }
    ctx->pc = 0x392DB8u;
label_392db8:
    // 0x392db8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x392db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x392dbc: 0x54c20009  bnel        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x392DBCu;
    {
        const bool branch_taken_0x392dbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x392dbc) {
            ctx->pc = 0x392DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392DBCu;
            // 0x392dc0: 0xa0d10000  sb          $s1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392DE4u;
            goto label_392de4;
        }
    }
    ctx->pc = 0x392DC4u;
    // 0x392dc4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x392dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x392dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392dcc: 0xc0e4aa0  jal         func_392A80
    ctx->pc = 0x392DCCu;
    SET_GPR_U32(ctx, 31, 0x392DD4u);
    ctx->pc = 0x392DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392DCCu;
    // 0x392dd0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x392DCCu, 0x392DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392DD4u;
label_392dd4:
    // 0x392dd4: 0x10520015  beq         $v0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x392DD4u;
    {
        const bool branch_taken_0x392dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x392DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DD4u;
        // 0x392dd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dd4) {
            ctx->pc = 0x392E2Cu;
            goto label_392e2c;
        }
    }
    ctx->pc = 0x392DDCu;
    // 0x392ddc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x392ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x392de0: 0xa0d10000  sb          $s1, 0x0($a2)
    ctx->pc = 0x392de0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
label_392de4:
    // 0x392de4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x392de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x392de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x392de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x392dec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x392decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x392df0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x392DF0u;
    {
        const bool branch_taken_0x392df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DF0u;
        // 0x392df4: 0xae060014  sw          $a2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392df0) {
            ctx->pc = 0x392E0Cu;
            goto label_392e0c;
        }
    }
    ctx->pc = 0x392DF8u;
    // 0x392df8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x392df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x392dfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x392DFCu;
    {
        const bool branch_taken_0x392dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DFCu;
        // 0x392e00: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dfc) {
            ctx->pc = 0x392E28u;
            goto label_392e28;
        }
    }
    ctx->pc = 0x392E04u;
    // 0x392e04: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x392E04u;
    {
        const bool branch_taken_0x392e04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x392E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E04u;
        // 0x392e08: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e04) {
            ctx->pc = 0x392E2Cu;
            goto label_392e2c;
        }
    }
    ctx->pc = 0x392E0Cu;
label_392e0c:
    // 0x392e0c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x392e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x392e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392e14: 0xc0e4aa0  jal         func_392A80
    ctx->pc = 0x392E14u;
    SET_GPR_U32(ctx, 31, 0x392E1Cu);
    ctx->pc = 0x392E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E14u;
    // 0x392e18: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x392E14u, 0x392E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E1Cu;
label_392e1c:
    // 0x392e1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x392e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x392e20: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x392E20u;
    {
        const bool branch_taken_0x392e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x392E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E20u;
        // 0x392e24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e20) {
            ctx->pc = 0x392E2Cu;
            goto label_392e2c;
        }
    }
    ctx->pc = 0x392E28u;
label_392e28:
    // 0x392e28: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x392e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_392e2c:
    // 0x392e2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x392e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_392e30:
    // 0x392e30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x392e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x392e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x392e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x392E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E3Cu;
        // 0x392e40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392E44u;
    // 0x392e44: 0x0  nop
    ctx->pc = 0x392e44u;
    // NOP
    ctx->pc = 0x392e48u;
}
