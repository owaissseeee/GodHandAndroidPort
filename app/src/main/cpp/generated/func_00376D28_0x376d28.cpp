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

// Function: func_00376D28
// Address: 0x376d28 - 0x376e00
void func_00376D28_0x376d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376D28_0x376d28");
#endif

    switch (ctx->pc) {
        case 0x376d50u: goto label_376d50;
        default: break;
    }

    ctx->pc = 0x376d28u;

    // 0x376d28: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376d2c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x376d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x376d30: 0x2446cf20  addiu       $a2, $v0, -0x30E0
    ctx->pc = 0x376d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x376d34: 0x28a70003  slti        $a3, $a1, 0x3
    ctx->pc = 0x376d34u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x376d38: 0x24cb0f00  addiu       $t3, $a2, 0xF00
    ctx->pc = 0x376d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 3840));
    // 0x376d3c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x376d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376d40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x376d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d44: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x376d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376d48: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x376d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x376d4c: 0x0  nop
    ctx->pc = 0x376d4cu;
    // NOP
label_376d50:
    // 0x376d50: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x376D50u;
    {
        const bool branch_taken_0x376d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376d50) {
            ctx->pc = 0x376D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376D50u;
            // 0x376d54: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DE8u;
            goto label_376de8;
        }
    }
    ctx->pc = 0x376D58u;
    // 0x376d58: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x376d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x376d5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x376d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x376d60: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x376D60u;
    {
        const bool branch_taken_0x376d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376d60) {
            ctx->pc = 0x376D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376D60u;
            // 0x376d64: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DE8u;
            goto label_376de8;
        }
    }
    ctx->pc = 0x376D68u;
    // 0x376d68: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x376d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x376d6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x376d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x376d70: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x376D70u;
    {
        const bool branch_taken_0x376d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x376d70) {
            ctx->pc = 0x376D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376D70u;
            // 0x376d74: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DE8u;
            goto label_376de8;
        }
    }
    ctx->pc = 0x376D78u;
    // 0x376d78: 0x50aa0012  beql        $a1, $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x376D78u;
    {
        const bool branch_taken_0x376d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x376d78) {
            ctx->pc = 0x376D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376D78u;
            // 0x376d7c: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DC4u;
            goto label_376dc4;
        }
    }
    ctx->pc = 0x376D80u;
    // 0x376d80: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x376D80u;
    {
        const bool branch_taken_0x376d80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x376d80) {
            ctx->pc = 0x376D98u;
            goto label_376d98;
        }
    }
    ctx->pc = 0x376D88u;
    // 0x376d88: 0x50a90007  beql        $a1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x376D88u;
    {
        const bool branch_taken_0x376d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x376d88) {
            ctx->pc = 0x376D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376D88u;
            // 0x376d8c: 0x94820024  lhu         $v0, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DA8u;
            goto label_376da8;
        }
    }
    ctx->pc = 0x376D90u;
    // 0x376d90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x376D90u;
    {
        const bool branch_taken_0x376d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D90u;
        // 0x376d94: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d90) {
            ctx->pc = 0x376DE8u;
            goto label_376de8;
        }
    }
    ctx->pc = 0x376D98u;
label_376d98:
    // 0x376d98: 0x50a8000e  beql        $a1, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x376D98u;
    {
        const bool branch_taken_0x376d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x376d98) {
            ctx->pc = 0x376D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376D98u;
            // 0x376d9c: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376DD4u;
            goto label_376dd4;
        }
    }
    ctx->pc = 0x376DA0u;
    // 0x376da0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x376DA0u;
    {
        const bool branch_taken_0x376da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DA0u;
        // 0x376da4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376da0) {
            ctx->pc = 0x376DE8u;
            goto label_376de8;
        }
    }
    ctx->pc = 0x376DA8u;
label_376da8:
    // 0x376da8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x376da8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x376dac: 0xa4c20026  sh          $v0, 0x26($a2)
    ctx->pc = 0x376dacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x376db0: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x376db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x376db4: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x376db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x376db8: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x376db8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x376dbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x376DBCu;
    {
        const bool branch_taken_0x376dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DBCu;
        // 0x376dc0: 0xa4c20028  sh          $v0, 0x28($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376dbc) {
            ctx->pc = 0x376DE4u;
            goto label_376de4;
        }
    }
    ctx->pc = 0x376DC4u;
label_376dc4:
    // 0x376dc4: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x376dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x376dc8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x376dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x376dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376DCCu;
    {
        const bool branch_taken_0x376dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DCCu;
        // 0x376dd0: 0xa4c3002c  sh          $v1, 0x2C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376dcc) {
            ctx->pc = 0x376DE0u;
            goto label_376de0;
        }
    }
    ctx->pc = 0x376DD4u;
label_376dd4:
    // 0x376dd4: 0x9483002a  lhu         $v1, 0x2A($a0)
    ctx->pc = 0x376dd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x376dd8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x376dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x376ddc: 0xa4c3002e  sh          $v1, 0x2E($a2)
    ctx->pc = 0x376ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 46), (uint16_t)GPR_U32(ctx, 3));
label_376de0:
    // 0x376de0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x376de0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
label_376de4:
    // 0x376de4: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x376de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_376de8:
    // 0x376de8: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x376de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x376dec: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x376DECu;
    {
        const bool branch_taken_0x376dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376dec) {
            ctx->pc = 0x376DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376DECu;
            // 0x376df0: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376d50;
        }
    }
    ctx->pc = 0x376DF4u;
    // 0x376df4: 0x3e00008  jr          $ra
    ctx->pc = 0x376DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376DFCu;
    // 0x376dfc: 0x0  nop
    ctx->pc = 0x376dfcu;
    // NOP
    ctx->pc = 0x376e00u;
}
