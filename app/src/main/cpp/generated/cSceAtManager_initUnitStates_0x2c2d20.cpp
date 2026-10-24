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

// Function: cSceAtManager_initUnitStates
// Address: 0x2c2d20 - 0x2c2eb8
void cSceAtManager_initUnitStates_0x2c2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_initUnitStates_0x2c2d20");
#endif

    switch (ctx->pc) {
        case 0x2c2d38u: goto label_2c2d38;
        case 0x2c2d40u: goto label_2c2d40;
        case 0x2c2db4u: goto label_2c2db4;
        case 0x2c2dbcu: goto label_2c2dbc;
        case 0x2c2e38u: goto label_2c2e38;
        case 0x2c2e88u: goto label_2c2e88;
        case 0x2c2e94u: goto label_2c2e94;
        default: break;
    }

    ctx->pc = 0x2c2d20u;

    // 0x2c2d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c2d24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c2d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c2d28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c2d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c2d2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2d30: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C2D30u;
    SET_GPR_U32(ctx, 31, 0x2C2D38u);
    ctx->pc = 0x2C2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D30u;
    // 0x2c2d34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C2D30u, 0x2C2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D38u;
label_2c2d38:
    // 0x2c2d38: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2C2D38u;
    {
        const bool branch_taken_0x2c2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D38u;
        // 0x2c2d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d38) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2D40u;
label_2c2d40:
    // 0x2c2d40: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2c2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c2d44: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x2c2d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2c2d48: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C2D48u;
    {
        const bool branch_taken_0x2c2d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D48u;
        // 0x2c2d4c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d48) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2D50u;
    // 0x2c2d50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c2d54: 0x2442c240  addiu       $v0, $v0, -0x3DC0
    ctx->pc = 0x2c2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
    // 0x2c2d58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2d5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2d60: 0x800008  jr          $a0
    ctx->pc = 0x2C2D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2D68u: goto label_2c2d68;
            case 0x2C2DCCu: goto label_2c2dcc;
            case 0x2C2DD8u: goto label_2c2dd8;
            case 0x2C2E2Cu: goto label_2c2e2c;
            case 0x2C2E40u: goto label_2c2e40;
            case 0x2C2E70u: goto label_2c2e70;
            case 0x2C2E7Cu: goto label_2c2e7c;
            case 0x2C2E88u: goto label_2c2e88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C2D68u;
label_2c2d68:
    // 0x2c2d68: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2c2d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2c2d6c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c2d70: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C2D70u;
    {
        const bool branch_taken_0x2c2d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D70u;
        // 0x2c2d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d70) {
            ctx->pc = 0x2C2E8Cu;
            goto label_2c2e8c;
        }
    }
    ctx->pc = 0x2C2D78u;
    // 0x2c2d78: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2c2d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c2d7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c2d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2d80: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2c2d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2c2d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2d88: 0x96040064  lhu         $a0, 0x64($s0)
    ctx->pc = 0x2c2d88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c2d8c: 0xa202003b  sb          $v0, 0x3B($s0)
    ctx->pc = 0x2c2d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2d90: 0xa205003a  sb          $a1, 0x3A($s0)
    ctx->pc = 0x2c2d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2d94: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2D94u;
    {
        const bool branch_taken_0x2c2d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D94u;
        // 0x2c2d98: 0xa2030039  sb          $v1, 0x39($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d94) {
            ctx->pc = 0x2C2DC4u;
            goto label_2c2dc4;
        }
    }
    ctx->pc = 0x2C2D9Cu;
    // 0x2c2d9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c2d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2c2da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2c2da4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da8: 0x24a5c238  addiu       $a1, $a1, -0x3DC8
    ctx->pc = 0x2c2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951480));
    // 0x2c2dac: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2C2DACu;
    SET_GPR_U32(ctx, 31, 0x2C2DB4u);
    ctx->pc = 0x2C2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DACu;
    // 0x2c2db0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2C2DACu, 0x2C2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DB4u;
label_2c2db4:
    // 0x2c2db4: 0xc0c738e  jal         func_31CE38
    ctx->pc = 0x2C2DB4u;
    SET_GPR_U32(ctx, 31, 0x2C2DBCu);
    ctx->pc = 0x2C2DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DB4u;
    // 0x2c2db8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CE38u, 0x2C2DB4u, 0x2C2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DBCu;
label_2c2dbc:
    // 0x2c2dbc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C2DBCu;
    {
        const bool branch_taken_0x2c2dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DBCu;
        // 0x2c2dc0: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dbc) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2DC4u;
label_2c2dc4:
    // 0x2c2dc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C2DC4u;
    {
        const bool branch_taken_0x2c2dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DC4u;
        // 0x2c2dc8: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dc4) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2DCCu;
label_2c2dcc:
    // 0x2c2dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2dd0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C2DD0u;
    {
        const bool branch_taken_0x2c2dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DD0u;
        // 0x2c2dd4: 0xa202003b  sb          $v0, 0x3B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dd0) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2DD8u;
label_2c2dd8:
    // 0x2c2dd8: 0x9204003b  lbu         $a0, 0x3B($s0)
    ctx->pc = 0x2c2dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2c2ddc: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2c2ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c2de0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2DE0u;
    {
        const bool branch_taken_0x2c2de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DE0u;
        // 0x2c2de4: 0x9203007a  lbu         $v1, 0x7A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 122)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2de0) {
            ctx->pc = 0x2C2E0Cu;
            goto label_2c2e0c;
        }
    }
    ctx->pc = 0x2C2DE8u;
    // 0x2c2de8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2DE8u;
    {
        const bool branch_taken_0x2c2de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DE8u;
        // 0x2c2dec: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2de8) {
            ctx->pc = 0x2C2DFCu;
            goto label_2c2dfc;
        }
    }
    ctx->pc = 0x2C2DF0u;
    // 0x2c2df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2df4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2DF4u;
    {
        const bool branch_taken_0x2c2df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DF4u;
        // 0x2c2df8: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2df4) {
            ctx->pc = 0x2C2E18u;
            goto label_2c2e18;
        }
    }
    ctx->pc = 0x2C2DFCu;
label_2c2dfc:
    // 0x2c2dfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c2e00: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2c2e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c2e04: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2E04u;
    {
        const bool branch_taken_0x2c2e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E04u;
        // 0x2c2e08: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e04) {
            ctx->pc = 0x2C2E60u;
            goto label_2c2e60;
        }
    }
    ctx->pc = 0x2C2E0Cu;
label_2c2e0c:
    // 0x2c2e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2e10: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C2E10u;
    {
        const bool branch_taken_0x2c2e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E10u;
        // 0x2c2e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e10) {
            ctx->pc = 0x2C2E8Cu;
            goto label_2c2e8c;
        }
    }
    ctx->pc = 0x2C2E18u;
label_2c2e18:
    // 0x2c2e18: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2c2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2c2e1c: 0xa200003b  sb          $zero, 0x3B($s0)
    ctx->pc = 0x2c2e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2e20: 0xa202003a  sb          $v0, 0x3A($s0)
    ctx->pc = 0x2c2e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2e24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2E24u;
    {
        const bool branch_taken_0x2c2e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E24u;
        // 0x2c2e28: 0xa2000039  sb          $zero, 0x39($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e24) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2E2Cu;
label_2c2e2c:
    // 0x2c2e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e30: 0xc0b0bae  jal         func_2C2EB8
    ctx->pc = 0x2C2E30u;
    SET_GPR_U32(ctx, 31, 0x2C2E38u);
    ctx->pc = 0x2C2E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E30u;
    // 0x2c2e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2EB8u, 0x2C2E30u, 0x2C2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E38u;
label_2c2e38:
    // 0x2c2e38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C2E38u;
    {
        const bool branch_taken_0x2c2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E38u;
        // 0x2c2e3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e38) {
            ctx->pc = 0x2C2E8Cu;
            goto label_2c2e8c;
        }
    }
    ctx->pc = 0x2C2E40u;
label_2c2e40:
    // 0x2c2e40: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2c2e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2c2e44: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c2e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c2e48: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C2E48u;
    {
        const bool branch_taken_0x2c2e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E48u;
        // 0x2c2e4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e48) {
            ctx->pc = 0x2C2E8Cu;
            goto label_2c2e8c;
        }
    }
    ctx->pc = 0x2C2E50u;
    // 0x2c2e50: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2c2e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c2e54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2e58: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2c2e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2c2e5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c2e60:
    // 0x2c2e60: 0xa202003b  sb          $v0, 0x3B($s0)
    ctx->pc = 0x2c2e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2e64: 0xa204003a  sb          $a0, 0x3A($s0)
    ctx->pc = 0x2c2e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2E68u;
    {
        const bool branch_taken_0x2c2e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E68u;
        // 0x2c2e6c: 0xa2030039  sb          $v1, 0x39($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e68) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2E70u;
label_2c2e70:
    // 0x2c2e70: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2c2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2c2e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2E74u;
    {
        const bool branch_taken_0x2c2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E74u;
        // 0x2c2e78: 0xa202003b  sb          $v0, 0x3B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e74) {
            ctx->pc = 0x2C2E88u;
            goto label_2c2e88;
        }
    }
    ctx->pc = 0x2C2E7Cu;
label_2c2e7c:
    // 0x2c2e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e80: 0xc0b0bbe  jal         func_2C2EF8
    ctx->pc = 0x2C2E80u;
    SET_GPR_U32(ctx, 31, 0x2C2E88u);
    ctx->pc = 0x2C2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E80u;
    // 0x2c2e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2EF8u, 0x2C2E80u, 0x2C2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E88u;
label_2c2e88:
    // 0x2c2e88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e8c:
    // 0x2c2e8c: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C2E8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2E94u);
    ctx->pc = 0x2C2E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E8Cu;
    // 0x2c2e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C2E8Cu, 0x2C2E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E94u;
label_2c2e94:
    // 0x2c2e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e98: 0x5600ffa9  bnel        $s0, $zero, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2C2E98u;
    {
        const bool branch_taken_0x2c2e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e98) {
            ctx->pc = 0x2C2E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2E98u;
            // 0x2c2e9c: 0x92020035  lbu         $v0, 0x35($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2d40;
        }
    }
    ctx->pc = 0x2C2EA0u;
    // 0x2c2ea0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c2ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2ea4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2eac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EACu;
        // 0x2c2eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2EB4u;
    // 0x2c2eb4: 0x0  nop
    ctx->pc = 0x2c2eb4u;
    // NOP
    ctx->pc = 0x2c2eb8u;
}
