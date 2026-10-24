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

// Function: func_00322C68
// Address: 0x322c68 - 0x322f18
void func_00322C68_0x322c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322C68_0x322c68");
#endif

    switch (ctx->pc) {
        case 0x322cd8u: goto label_322cd8;
        case 0x322cfcu: goto label_322cfc;
        case 0x322d48u: goto label_322d48;
        case 0x322d60u: goto label_322d60;
        case 0x322da4u: goto label_322da4;
        case 0x322dc8u: goto label_322dc8;
        case 0x322df0u: goto label_322df0;
        case 0x322e24u: goto label_322e24;
        case 0x322e3cu: goto label_322e3c;
        case 0x322e60u: goto label_322e60;
        case 0x322eb4u: goto label_322eb4;
        case 0x322ec8u: goto label_322ec8;
        default: break;
    }

    ctx->pc = 0x322c68u;

    // 0x322c68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x322c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x322c6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x322c70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x322c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x322c74: 0x2454b840  addiu       $s4, $v0, -0x47C0
    ctx->pc = 0x322c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x322c78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x322c78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB840u));
    // 0x322c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322c80: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x322c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x322c84: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x322c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c88: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x322c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x322c8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x322c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c90: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x322c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x322c94: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x322c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x322c98: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x322c98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c9c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x322c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x322ca0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x322ca0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ca4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x322ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x322ca8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x322ca8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322cac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x322cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x322cb0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x322cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x322cb4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x322cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x322cb8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x322cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x322cbc: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x322cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x322cc0: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x322cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x322cc4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x322CC4u;
    {
        const bool branch_taken_0x322cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x322CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CC4u;
        // 0x322cc8: 0x8fb30078  lw          $s3, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cc4) {
            ctx->pc = 0x322CE0u;
            goto label_322ce0;
        }
    }
    ctx->pc = 0x322CCCu;
    // 0x322ccc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x322cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x322cd0: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x322CD0u;
    SET_GPR_U32(ctx, 31, 0x322CD8u);
    ctx->pc = 0x322CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322CD0u;
    // 0x322cd4: 0x248413f8  addiu       $a0, $a0, 0x13F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x322CD0u, 0x322CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CD8u;
label_322cd8:
    // 0x322cd8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x322CD8u;
    {
        const bool branch_taken_0x322cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CD8u;
        // 0x322cdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cd8) {
            ctx->pc = 0x322EE4u;
            goto label_322ee4;
        }
    }
    ctx->pc = 0x322CE0u;
label_322ce0:
    // 0x322ce0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x322ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x322ce4: 0x2516b838  addiu       $s6, $t0, -0x47C8
    ctx->pc = 0x322ce4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948920));
    // 0x322ce8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x322ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB838u));
    // 0x322cec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322CECu;
    {
        const bool branch_taken_0x322cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CECu;
        // 0x322cf0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cec) {
            ctx->pc = 0x322D04u;
            goto label_322d04;
        }
    }
    ctx->pc = 0x322CF4u;
    // 0x322cf4: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x322CF4u;
    SET_GPR_U32(ctx, 31, 0x322CFCu);
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x322CF4u, 0x322CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CFCu;
label_322cfc:
    // 0x322cfc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x322cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x322d00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_322d04:
    // 0x322d04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x322d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x322d08: 0x2451b83c  addiu       $s1, $v0, -0x47C4
    ctx->pc = 0x322d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948924));
    // 0x322d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322d10: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x322d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x322d14: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x322d14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x322d18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x322d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322d1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322D1Cu;
    {
        const bool branch_taken_0x322d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D1Cu;
        // 0x322d20: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d1c) {
            ctx->pc = 0x322D30u;
            goto label_322d30;
        }
    }
    ctx->pc = 0x322D24u;
    // 0x322d24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x322D24u;
    {
        const bool branch_taken_0x322d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D24u;
        // 0x322d28: 0x24841438  addiu       $a0, $a0, 0x1438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d24) {
            ctx->pc = 0x322D40u;
            goto label_322d40;
        }
    }
    ctx->pc = 0x322D2Cu;
    // 0x322d2c: 0x0  nop
    ctx->pc = 0x322d2cu;
    // NOP
label_322d30:
    // 0x322d30: 0x1e600009  bgtz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x322D30u;
    {
        const bool branch_taken_0x322d30 = (GPR_S64(ctx, 19) > 0);
        ctx->pc = 0x322D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D30u;
        // 0x322d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d30) {
            ctx->pc = 0x322D58u;
            goto label_322d58;
        }
    }
    ctx->pc = 0x322D38u;
    // 0x322d38: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x322d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x322d3c: 0x24841468  addiu       $a0, $a0, 0x1468
    ctx->pc = 0x322d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5224));
label_322d40:
    // 0x322d40: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x322D40u;
    SET_GPR_U32(ctx, 31, 0x322D48u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x322D40u, 0x322D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D48u;
label_322d48:
    // 0x322d48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x322d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x322d4c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x322d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x322d50: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x322D50u;
    {
        const bool branch_taken_0x322d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D50u;
        // 0x322d54: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d50) {
            ctx->pc = 0x322EE4u;
            goto label_322ee4;
        }
    }
    ctx->pc = 0x322D58u;
label_322d58:
    // 0x322d58: 0xc0c8a5e  jal         func_322978
    ctx->pc = 0x322D58u;
    SET_GPR_U32(ctx, 31, 0x322D60u);
    ctx->pc = 0x322D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322D58u;
    // 0x322d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322978u, 0x322D58u, 0x322D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D60u;
label_322d60:
    // 0x322d60: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x322D60u;
    {
        const bool branch_taken_0x322d60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x322D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D60u;
        // 0x322d64: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d60) {
            ctx->pc = 0x322DFCu;
            goto label_322dfc;
        }
    }
    ctx->pc = 0x322D68u;
    // 0x322d68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322d6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322D6Cu;
    {
        const bool branch_taken_0x322d6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x322D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D6Cu;
        // 0x322d70: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d6c) {
            ctx->pc = 0x322D80u;
            goto label_322d80;
        }
    }
    ctx->pc = 0x322D74u;
    // 0x322d74: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x322D74u;
    {
        const bool branch_taken_0x322d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D74u;
        // 0x322d78: 0x24841490  addiu       $a0, $a0, 0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d74) {
            ctx->pc = 0x322E34u;
            goto label_322e34;
        }
    }
    ctx->pc = 0x322D7Cu;
    // 0x322d7c: 0x0  nop
    ctx->pc = 0x322d7cu;
    // NOP
label_322d80:
    // 0x322d80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322d84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x322d88: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x322d88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x322d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322d90: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x322d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x322d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322d98: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x322d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x322d9c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x322D9Cu;
    SET_GPR_U32(ctx, 31, 0x322DA4u);
    ctx->pc = 0x322DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322D9Cu;
    // 0x322da0: 0xac40b834  sw          $zero, -0x47CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948916), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x322D9Cu, 0x322DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322DA4u;
label_322da4:
    // 0x322da4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x322da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x322da8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x322da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x322dac: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x322dacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x322db0: 0xac30b308  sw          $s0, -0x4CF8($at)
    ctx->pc = 0x322db0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947592), GPR_U32(ctx, 16));
    // 0x322db4: 0x16a00016  bnez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x322DB4u;
    {
        const bool branch_taken_0x322db4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x322DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DB4u;
        // 0x322db8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322db4) {
            ctx->pc = 0x322E10u;
            goto label_322e10;
        }
    }
    ctx->pc = 0x322DBCu;
    // 0x322dbc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x322dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322dc0: 0xc0c8e58  jal         func_323960
    ctx->pc = 0x322DC0u;
    SET_GPR_U32(ctx, 31, 0x322DC8u);
    ctx->pc = 0x322DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322DC0u;
    // 0x322dc4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323960u, 0x322DC0u, 0x322DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322DC8u;
label_322dc8:
    // 0x322dc8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x322DC8u;
    {
        const bool branch_taken_0x322dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DC8u;
        // 0x322dcc: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dc8) {
            ctx->pc = 0x322E2Cu;
            goto label_322e2c;
        }
    }
    ctx->pc = 0x322DD0u;
    // 0x322dd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x322dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322dd4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x322dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322dd8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x322dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x322ddc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x322ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322de0: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x322de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x322de4: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x322de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x322de8: 0xc0c9190  jal         func_324640
    ctx->pc = 0x322DE8u;
    SET_GPR_U32(ctx, 31, 0x322DF0u);
    ctx->pc = 0x322DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322DE8u;
    // 0x322dec: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324640u, 0x322DE8u, 0x322DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322DF0u;
label_322df0:
    // 0x322df0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322DF0u;
    {
        const bool branch_taken_0x322df0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x322df0) {
            ctx->pc = 0x322DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322DF0u;
            // 0x322df4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322E08u;
            goto label_322e08;
        }
    }
    ctx->pc = 0x322DF8u;
    // 0x322df8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x322df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322dfc:
    // 0x322dfc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x322DFCu;
    {
        const bool branch_taken_0x322dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DFCu;
        // 0x322e00: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dfc) {
            ctx->pc = 0x322EE4u;
            goto label_322ee4;
        }
    }
    ctx->pc = 0x322E04u;
    // 0x322e04: 0x0  nop
    ctx->pc = 0x322e04u;
    // NOP
label_322e08:
    // 0x322e08: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x322E08u;
    {
        const bool branch_taken_0x322e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E08u;
        // 0x322e0c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e08) {
            ctx->pc = 0x322E68u;
            goto label_322e68;
        }
    }
    ctx->pc = 0x322E10u;
label_322e10:
    // 0x322e10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x322e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322e14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x322e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e18: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x322e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x322e1c: 0xc0c8de0  jal         func_323780
    ctx->pc = 0x322E1Cu;
    SET_GPR_U32(ctx, 31, 0x322E24u);
    ctx->pc = 0x322E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E1Cu;
    // 0x322e20: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323780u, 0x322E1Cu, 0x322E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E24u;
label_322e24:
    // 0x322e24: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x322E24u;
    {
        const bool branch_taken_0x322e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E24u;
        // 0x322e28: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e24) {
            ctx->pc = 0x322E50u;
            goto label_322e50;
        }
    }
    ctx->pc = 0x322E2Cu;
label_322e2c:
    // 0x322e2c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x322e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x322e30: 0x248414c0  addiu       $a0, $a0, 0x14C0
    ctx->pc = 0x322e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
label_322e34:
    // 0x322e34: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x322E34u;
    SET_GPR_U32(ctx, 31, 0x322E3Cu);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x322E34u, 0x322E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E3Cu;
label_322e3c:
    // 0x322e3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x322e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x322e40: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x322e40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x322e44: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x322E44u;
    {
        const bool branch_taken_0x322e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E44u;
        // 0x322e48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e44) {
            ctx->pc = 0x322EE4u;
            goto label_322ee4;
        }
    }
    ctx->pc = 0x322E4Cu;
    // 0x322e4c: 0x0  nop
    ctx->pc = 0x322e4cu;
    // NOP
label_322e50:
    // 0x322e50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x322e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e54: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x322e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x322e58: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x322E58u;
    SET_GPR_U32(ctx, 31, 0x322E60u);
    ctx->pc = 0x322E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E58u;
    // 0x322e5c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x322E58u, 0x322E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E60u;
label_322e60:
    // 0x322e60: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x322e60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322e64: 0xae080114  sw          $t0, 0x114($s0)
    ctx->pc = 0x322e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 8));
label_322e68:
    // 0x322e68: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x322e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322e6c: 0x266307ff  addiu       $v1, $s3, 0x7FF
    ctx->pc = 0x322e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
    // 0x322e70: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x322e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x322e74: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x322e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x322e78: 0x2a620000  slti        $v0, $s3, 0x0
    ctx->pc = 0x322e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x322e7c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x322e7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x322e80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x322e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x322e84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x322e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322e88: 0x2452b838  addiu       $s2, $v0, -0x47C8
    ctx->pc = 0x322e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x322e8c: 0x133ac3  sra         $a3, $s3, 11
    ctx->pc = 0x322e8cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 11));
    // 0x322e90: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x322e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x322e94: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x322e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x322e98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x322e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x322e9c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x322e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ea0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x322ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x322ea4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x322ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322ea8: 0xac67529c  sw          $a3, 0x529C($v1)
    ctx->pc = 0x322ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3C529Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C529Cu, _value); } while (0);
    // 0x322eac: 0xc0c8fb6  jal         func_323ED8
    ctx->pc = 0x322EACu;
    SET_GPR_U32(ctx, 31, 0x322EB4u);
    ctx->pc = 0x322EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322EACu;
    // 0x322eb0: 0xac465298  sw          $a2, 0x5298($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 21144), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323ED8u, 0x322EACu, 0x322EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EB4u;
label_322eb4:
    // 0x322eb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322eb8: 0x6230009  bgezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x322EB8u;
    {
        const bool branch_taken_0x322eb8 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x322eb8) {
            ctx->pc = 0x322EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322EB8u;
            // 0x322ebc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322EE0u;
            goto label_322ee0;
        }
    }
    ctx->pc = 0x322EC0u;
    // 0x322ec0: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x322EC0u;
    SET_GPR_U32(ctx, 31, 0x322EC8u);
    ctx->pc = 0x322EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322EC0u;
    // 0x322ec4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x322EC0u, 0x322EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EC8u;
label_322ec8:
    // 0x322ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x322ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x322ecc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x322eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x322ed0: 0xac62b840  sw          $v0, -0x47C0($v1)
    ctx->pc = 0x322ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB840u, _value); } while (0);
    // 0x322ed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x322ED4u;
    {
        const bool branch_taken_0x322ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322ED4u;
        // 0x322ed8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ed4) {
            ctx->pc = 0x322EE4u;
            goto label_322ee4;
        }
    }
    ctx->pc = 0x322EDCu;
    // 0x322edc: 0x0  nop
    ctx->pc = 0x322edcu;
    // NOP
label_322ee0:
    // 0x322ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ee4:
    // 0x322ee4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x322ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322ee8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x322ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x322eec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x322eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322ef0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x322ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x322ef4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x322ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322ef8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x322ef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x322efc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x322efcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322f00: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x322f00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x322f04: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x322f04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322f08: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x322f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x322f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x322F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F0Cu;
        // 0x322f10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F14u;
    // 0x322f14: 0x0  nop
    ctx->pc = 0x322f14u;
    // NOP
    ctx->pc = 0x322f18u;
}
