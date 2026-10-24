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

// Function: __ls__7ostreamd
// Address: 0x388d18 - 0x388e30
void ps2___ls__7ostreamd_0x388d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamd_0x388d18");
#endif

    switch (ctx->pc) {
        case 0x388d58u: goto label_388d58;
        case 0x388de8u: goto label_388de8;
        case 0x388e18u: goto label_388e18;
        default: break;
    }

    ctx->pc = 0x388d18u;

    // 0x388d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388d1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x388d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x388d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388d30: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x388d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388D34u;
    {
        const bool branch_taken_0x388d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D34u;
        // 0x388d38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d34) {
            ctx->pc = 0x388D44u;
            goto label_388d44;
        }
    }
    ctx->pc = 0x388D3Cu;
    // 0x388d3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x388D3Cu;
    {
        const bool branch_taken_0x388d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D3Cu;
        // 0x388d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d3c) {
            ctx->pc = 0x388D5Cu;
            goto label_388d5c;
        }
    }
    ctx->pc = 0x388D44u;
label_388d44:
    // 0x388d44: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x388d48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388D48u;
    {
        const bool branch_taken_0x388d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D48u;
        // 0x388d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d48) {
            ctx->pc = 0x388D5Cu;
            goto label_388d5c;
        }
    }
    ctx->pc = 0x388D50u;
    // 0x388d50: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388D50u;
    SET_GPR_U32(ctx, 31, 0x388D58u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388D50u, 0x388D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D58u;
label_388d58:
    // 0x388d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388d5c:
    // 0x388d5c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x388D5Cu;
    {
        const bool branch_taken_0x388d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D5Cu;
        // 0x388d60: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d5c) {
            ctx->pc = 0x388E18u;
            goto label_388e18;
        }
    }
    ctx->pc = 0x388D64u;
    // 0x388d64: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x388d64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388d68: 0xdd830010  ld          $v1, 0x10($t4)
    ctx->pc = 0x388d68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x388d6c: 0x30641800  andi        $a0, $v1, 0x1800
    ctx->pc = 0x388d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6144);
    // 0x388d70: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388D70u;
    {
        const bool branch_taken_0x388d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x388D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D70u;
        // 0x388d74: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d70) {
            ctx->pc = 0x388D80u;
            goto label_388d80;
        }
    }
    ctx->pc = 0x388D78u;
    // 0x388d78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x388D78u;
    {
        const bool branch_taken_0x388d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D78u;
        // 0x388d7c: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d78) {
            ctx->pc = 0x388DA4u;
            goto label_388da4;
        }
    }
    ctx->pc = 0x388D80u;
label_388d80:
    // 0x388d80: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x388d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x388d84: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388D84u;
    {
        const bool branch_taken_0x388d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x388D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D84u;
        // 0x388d88: 0x30630200  andi        $v1, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d84) {
            ctx->pc = 0x388D98u;
            goto label_388d98;
        }
    }
    ctx->pc = 0x388D8Cu;
    // 0x388d8c: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x388d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x388d90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388D90u;
    {
        const bool branch_taken_0x388d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D90u;
        // 0x388d94: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d90) {
            ctx->pc = 0x388DA0u;
            goto label_388da0;
        }
    }
    ctx->pc = 0x388D98u;
label_388d98:
    // 0x388d98: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x388d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x388d9c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x388d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_388da0:
    // 0x388da0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x388da0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_388da4:
    // 0x388da4: 0x8d08001c  lw          $t0, 0x1C($t0)
    ctx->pc = 0x388da4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x388da8: 0x1d000004  bgtz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388DA8u;
    {
        const bool branch_taken_0x388da8 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x388DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DA8u;
        // 0x388dac: 0xdd890010  ld          $t1, 0x10($t4) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388da8) {
            ctx->pc = 0x388DBCu;
            goto label_388dbc;
        }
    }
    ctx->pc = 0x388DB0u;
    // 0x388db0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x388db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x388db4: 0x31221000  andi        $v0, $t1, 0x1000
    ctx->pc = 0x388db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4096);
    // 0x388db8: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x388db8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_388dbc:
    // 0x388dbc: 0x31220400  andi        $v0, $t1, 0x400
    ctx->pc = 0x388dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1024);
    // 0x388dc0: 0x8d870008  lw          $a3, 0x8($t4)
    ctx->pc = 0x388dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x388dc4: 0x240a002b  addiu       $t2, $zero, 0x2B
    ctx->pc = 0x388dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x388dc8: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x388dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x388dcc: 0x858b0018  lh          $t3, 0x18($t4)
    ctx->pc = 0x388dccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x388dd0: 0x2500a  movz        $t2, $zero, $v0
    ctx->pc = 0x388dd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x388dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x388dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388dd8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x388dd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x388ddc: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x388ddcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x388de0: 0xc0e393c  jal         func_38E4F0
    ctx->pc = 0x388DE0u;
    SET_GPR_U32(ctx, 31, 0x388DE8u);
    ctx->pc = 0x388DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388DE0u;
    // 0x388de4: 0xad800008  sw          $zero, 0x8($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E4F0u, 0x388DE0u, 0x388DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388DE8u;
label_388de8:
    // 0x388de8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x388DE8u;
    {
        const bool branch_taken_0x388de8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x388DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DE8u;
        // 0x388dec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388de8) {
            ctx->pc = 0x388E00u;
            goto label_388e00;
        }
    }
    ctx->pc = 0x388DF0u;
    // 0x388df0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x388df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x388df4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x388df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x388df8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x388df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x388dfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_388e00:
    // 0x388e00: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388e00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x388e04: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x388e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x388e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388E08u;
    {
        const bool branch_taken_0x388e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E08u;
        // 0x388e0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e08) {
            ctx->pc = 0x388E1Cu;
            goto label_388e1c;
        }
    }
    ctx->pc = 0x388E10u;
    // 0x388e10: 0xc0e2552  jal         func_389548
    ctx->pc = 0x388E10u;
    SET_GPR_U32(ctx, 31, 0x388E18u);
    ctx->pc = 0x388E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E10u;
    // 0x388e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x388E10u, 0x388E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E18u;
label_388e18:
    // 0x388e18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388e1c:
    // 0x388e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388e20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388e28: 0x3e00008  jr          $ra
    ctx->pc = 0x388E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E28u;
        // 0x388e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388E30u;
}
