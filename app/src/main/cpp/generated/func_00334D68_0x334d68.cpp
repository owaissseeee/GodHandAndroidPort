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

// Function: func_00334D68
// Address: 0x334d68 - 0x334e80
void func_00334D68_0x334d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334D68_0x334d68");
#endif

    switch (ctx->pc) {
        case 0x334d8cu: goto label_334d8c;
        case 0x334da0u: goto label_334da0;
        case 0x334da8u: goto label_334da8;
        case 0x334dc8u: goto label_334dc8;
        case 0x334dd0u: goto label_334dd0;
        case 0x334e14u: goto label_334e14;
        case 0x334e20u: goto label_334e20;
        case 0x334e28u: goto label_334e28;
        case 0x334e40u: goto label_334e40;
        default: break;
    }

    ctx->pc = 0x334d68u;

    // 0x334d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334d70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334d78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334d80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334d84: 0xc0cd328  jal         func_334CA0
    ctx->pc = 0x334D84u;
    SET_GPR_U32(ctx, 31, 0x334D8Cu);
    ctx->pc = 0x334D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D84u;
    // 0x334d88: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334CA0u, 0x334D84u, 0x334D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D8Cu;
label_334d8c:
    // 0x334d8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334D8Cu;
    {
        const bool branch_taken_0x334d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D8Cu;
        // 0x334d90: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d8c) {
            ctx->pc = 0x334DA0u;
            goto label_334da0;
        }
    }
    ctx->pc = 0x334D94u;
    // 0x334d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d98: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x334D98u;
    SET_GPR_U32(ctx, 31, 0x334DA0u);
    ctx->pc = 0x334D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D98u;
    // 0x334d9c: 0x24a5a4a0  addiu       $a1, $a1, -0x5B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x334D98u, 0x334DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA0u;
label_334da0:
    // 0x334da0: 0xc0cd344  jal         func_334D10
    ctx->pc = 0x334DA0u;
    SET_GPR_U32(ctx, 31, 0x334DA8u);
    ctx->pc = 0x334DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DA0u;
    // 0x334da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334D10u, 0x334DA0u, 0x334DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA8u;
label_334da8:
    // 0x334da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334dac: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x334DACu;
    {
        const bool branch_taken_0x334dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x334dac) {
            ctx->pc = 0x334DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334DACu;
            // 0x334db0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334E18u;
            goto label_334e18;
        }
    }
    ctx->pc = 0x334DB4u;
    // 0x334db4: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x334db4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x334db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334dbc: 0x2610a398  addiu       $s0, $s0, -0x5C68
    ctx->pc = 0x334dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943640));
    // 0x334dc0: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x334DC0u;
    SET_GPR_U32(ctx, 31, 0x334DC8u);
    ctx->pc = 0x334DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DC0u;
    // 0x334dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x334DC0u, 0x334DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DC8u;
label_334dc8:
    // 0x334dc8: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x334DC8u;
    SET_GPR_U32(ctx, 31, 0x334DD0u);
    ctx->pc = 0x334DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DC8u;
    // 0x334dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x334DC8u, 0x334DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DD0u;
label_334dd0:
    // 0x334dd0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x334dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x334dd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x334dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x334dd8: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x334dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x334ddc: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x334DDCu;
    {
        const bool branch_taken_0x334ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x334DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DDCu;
        // 0x334de0: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ddc) {
            ctx->pc = 0x334E14u;
            goto label_334e14;
        }
    }
    ctx->pc = 0x334DE4u;
    // 0x334de4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x334DE4u;
    {
        const bool branch_taken_0x334de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DE4u;
        // 0x334de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334de4) {
            ctx->pc = 0x334E18u;
            goto label_334e18;
        }
    }
    ctx->pc = 0x334DECu;
    // 0x334dec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x334DECu;
    {
        const bool branch_taken_0x334dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334dec) {
            ctx->pc = 0x334E18u;
            goto label_334e18;
        }
    }
    ctx->pc = 0x334DF4u;
    // 0x334df4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x334df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334df8: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334DF8u;
    {
        const bool branch_taken_0x334df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x334df8) {
            ctx->pc = 0x334E18u;
            goto label_334e18;
        }
    }
    ctx->pc = 0x334E00u;
    // 0x334e00: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x334E00u;
    {
        const bool branch_taken_0x334e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E00u;
        // 0x334e04: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e00) {
            ctx->pc = 0x334E14u;
            goto label_334e14;
        }
    }
    ctx->pc = 0x334E08u;
    // 0x334e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e0c: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x334E0Cu;
    SET_GPR_U32(ctx, 31, 0x334E14u);
    ctx->pc = 0x334E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E0Cu;
    // 0x334e10: 0x24a54a00  addiu       $a1, $a1, 0x4A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x334E0Cu, 0x334E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E14u;
label_334e14:
    // 0x334e14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_334e18:
    // 0x334e18: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x334E18u;
    SET_GPR_U32(ctx, 31, 0x334E20u);
    ctx->pc = 0x334E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E18u;
    // 0x334e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x334E18u, 0x334E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E20u;
label_334e20:
    // 0x334e20: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x334E20u;
    SET_GPR_U32(ctx, 31, 0x334E28u);
    ctx->pc = 0x334E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E20u;
    // 0x334e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x334E20u, 0x334E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E28u;
label_334e28:
    // 0x334e28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x334e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e2c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x334E2Cu;
    {
        const bool branch_taken_0x334e2c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x334E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E2Cu;
        // 0x334e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e2c) {
            ctx->pc = 0x334E64u;
            goto label_334e64;
        }
    }
    ctx->pc = 0x334E34u;
    // 0x334e34: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x334e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x334e38: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x334e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x334e3c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x334e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_334e40:
    // 0x334e40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x334e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x334e44: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x334e44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x334e48: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334E48u;
    {
        const bool branch_taken_0x334e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x334E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E48u;
        // 0x334e4c: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e48) {
            ctx->pc = 0x334E54u;
            goto label_334e54;
        }
    }
    ctx->pc = 0x334E50u;
    // 0x334e50: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x334e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_334e54:
    // 0x334e54: 0x0  nop
    ctx->pc = 0x334e54u;
    // NOP
    // 0x334e58: 0x0  nop
    ctx->pc = 0x334e58u;
    // NOP
    // 0x334e5c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x334E5Cu;
    {
        const bool branch_taken_0x334e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E5Cu;
        // 0x334e60: 0x2252021  addu        $a0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e5c) {
            ctx->pc = 0x334E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334e40;
        }
    }
    ctx->pc = 0x334E64u;
label_334e64:
    // 0x334e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334e70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334e74: 0x3e00008  jr          $ra
    ctx->pc = 0x334E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E74u;
        // 0x334e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334E7Cu;
    // 0x334e7c: 0x0  nop
    ctx->pc = 0x334e7cu;
    // NOP
    ctx->pc = 0x334e80u;
}
