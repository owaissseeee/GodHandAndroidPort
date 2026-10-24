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

// Function: func_00291D48
// Address: 0x291d48 - 0x291fc0
void func_00291D48_0x291d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00291D48_0x291d48");
#endif

    switch (ctx->pc) {
        case 0x291d68u: goto label_291d68;
        case 0x291e30u: goto label_291e30;
        case 0x291e58u: goto label_291e58;
        case 0x291e98u: goto label_291e98;
        case 0x291ebcu: goto label_291ebc;
        case 0x291f04u: goto label_291f04;
        case 0x291f24u: goto label_291f24;
        case 0x291f50u: goto label_291f50;
        case 0x291f84u: goto label_291f84;
        case 0x291facu: goto label_291fac;
        default: break;
    }

    ctx->pc = 0x291d48u;

    // 0x291d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x291d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x291d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d5c: 0x8e040500  lw          $a0, 0x500($s0)
    ctx->pc = 0x291d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x291d60: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x291d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x291d64: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x291d64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_291d68:
    // 0x291d68: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x291D68u;
    {
        const bool branch_taken_0x291d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D68u;
        // 0x291d6c: 0x24c274a0  addiu       $v0, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d68) {
            ctx->pc = 0x291DC0u;
            goto label_291dc0;
        }
    }
    ctx->pc = 0x291D70u;
    // 0x291d70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x291d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x291d74: 0x0  nop
    ctx->pc = 0x291d74u;
    // NOP
    // 0x291d78: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x291D78u;
    {
        const bool branch_taken_0x291d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d78) {
            ctx->pc = 0x291D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291D78u;
            // 0x291d7c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291d68;
        }
    }
    ctx->pc = 0x291D80u;
    // 0x291d80: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x291d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x291d84: 0x2462fde0  addiu       $v0, $v1, -0x220
    ctx->pc = 0x291d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966752));
    // 0x291d88: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x291d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x291d8c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x291D8Cu;
    {
        const bool branch_taken_0x291d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291d8c) {
            ctx->pc = 0x291D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291D8Cu;
            // 0x291d90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291DBCu;
            goto label_291dbc;
        }
    }
    ctx->pc = 0x291D94u;
    // 0x291d94: 0x24020209  addiu       $v0, $zero, 0x209
    ctx->pc = 0x291d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x291d98: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291D98u;
    {
        const bool branch_taken_0x291d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D98u;
        // 0x291d9c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d98) {
            ctx->pc = 0x291DB8u;
            goto label_291db8;
        }
    }
    ctx->pc = 0x291DA0u;
    // 0x291da0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291DA0u;
    {
        const bool branch_taken_0x291da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DA0u;
        // 0x291da4: 0x24020263  addiu       $v0, $zero, 0x263 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291da0) {
            ctx->pc = 0x291DB8u;
            goto label_291db8;
        }
    }
    ctx->pc = 0x291DA8u;
    // 0x291da8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291DA8u;
    {
        const bool branch_taken_0x291da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DA8u;
        // 0x291dac: 0x24020266  addiu       $v0, $zero, 0x266 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291da8) {
            ctx->pc = 0x291DB8u;
            goto label_291db8;
        }
    }
    ctx->pc = 0x291DB0u;
    // 0x291db0: 0x5462ffed  bnel        $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x291DB0u;
    {
        const bool branch_taken_0x291db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291db0) {
            ctx->pc = 0x291DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291DB0u;
            // 0x291db4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291d68;
        }
    }
    ctx->pc = 0x291DB8u;
label_291db8:
    // 0x291db8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x291db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291dbc:
    // 0x291dbc: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x291dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
label_291dc0:
    // 0x291dc0: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x291dc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x291dc4: 0x28830040  slti        $v1, $a0, 0x40
    ctx->pc = 0x291dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x291dc8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x291DC8u;
    {
        const bool branch_taken_0x291dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DC8u;
        // 0x291dcc: 0x8ce29b70  lw          $v0, -0x6490($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dc8) {
            ctx->pc = 0x291DF8u;
            goto label_291df8;
        }
    }
    ctx->pc = 0x291DD0u;
    // 0x291dd0: 0x28820046  slti        $v0, $a0, 0x46
    ctx->pc = 0x291dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x291dd4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x291DD4u;
    {
        const bool branch_taken_0x291dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291dd4) {
            ctx->pc = 0x291DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291DD4u;
            // 0x291dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291DF4u;
            goto label_291df4;
        }
    }
    ctx->pc = 0x291DDCu;
    // 0x291ddc: 0x28820050  slti        $v0, $a0, 0x50
    ctx->pc = 0x291ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x291de0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291DE0u;
    {
        const bool branch_taken_0x291de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DE0u;
        // 0x291de4: 0x2882004c  slti        $v0, $a0, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)76) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291de0) {
            ctx->pc = 0x291DF4u;
            goto label_291df4;
        }
    }
    ctx->pc = 0x291DE8u;
    // 0x291de8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291DE8u;
    {
        const bool branch_taken_0x291de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DE8u;
        // 0x291dec: 0x8ce29b70  lw          $v0, -0x6490($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291de8) {
            ctx->pc = 0x291DF8u;
            goto label_291df8;
        }
    }
    ctx->pc = 0x291DF0u;
    // 0x291df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291df4:
    // 0x291df4: 0x8ce29b70  lw          $v0, -0x6490($a3)
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941552)));
label_291df8:
    // 0x291df8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x291df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x291dfc: 0x4610019  bgez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x291DFCu;
    {
        const bool branch_taken_0x291dfc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x291E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291DFCu;
        // 0x291e00: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291dfc) {
            ctx->pc = 0x291E64u;
            goto label_291e64;
        }
    }
    ctx->pc = 0x291E04u;
    // 0x291e04: 0x92020518  lbu         $v0, 0x518($s0)
    ctx->pc = 0x291e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x291e08: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x291E08u;
    {
        const bool branch_taken_0x291e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291e08) {
            ctx->pc = 0x291E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291E08u;
            // 0x291e0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291FB0u;
            goto label_291fb0;
        }
    }
    ctx->pc = 0x291E10u;
    // 0x291e10: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x291e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x291e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x291e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x291e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x291e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291e28: 0xc0c194a  jal         func_306528
    ctx->pc = 0x291E28u;
    SET_GPR_U32(ctx, 31, 0x291E30u);
    ctx->pc = 0x291E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E28u;
    // 0x291e2c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x291E28u, 0x291E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E30u;
label_291e30:
    // 0x291e30: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x291e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x291e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291e38: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x291e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x291e3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x291e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x291e40: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x291e40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x291e44: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x291e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x291e48: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x291e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x291e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x291e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291e50: 0xc0b6284  jal         func_2D8A10
    ctx->pc = 0x291E50u;
    SET_GPR_U32(ctx, 31, 0x291E58u);
    ctx->pc = 0x291E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E50u;
    // 0x291e54: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8A10u, 0x291E50u, 0x291E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E58u;
label_291e58:
    // 0x291e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x291e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291e5c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x291E5Cu;
    {
        const bool branch_taken_0x291e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E5Cu;
        // 0x291e60: 0xa2030518  sb          $v1, 0x518($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1304), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e5c) {
            ctx->pc = 0x291FACu;
            goto label_291fac;
        }
    }
    ctx->pc = 0x291E64u;
label_291e64:
    // 0x291e64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x291e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x291e68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x291E68u;
    {
        const bool branch_taken_0x291e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E68u;
        // 0x291e6c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e68) {
            ctx->pc = 0x291EC4u;
            goto label_291ec4;
        }
    }
    ctx->pc = 0x291E70u;
    // 0x291e70: 0x92020518  lbu         $v0, 0x518($s0)
    ctx->pc = 0x291e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x291e74: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x291E74u;
    {
        const bool branch_taken_0x291e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E74u;
        // 0x291e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e74) {
            ctx->pc = 0x291FACu;
            goto label_291fac;
        }
    }
    ctx->pc = 0x291E7Cu;
    // 0x291e7c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x291e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x291e80: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x291e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x291e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291e90: 0xc0c194a  jal         func_306528
    ctx->pc = 0x291E90u;
    SET_GPR_U32(ctx, 31, 0x291E98u);
    ctx->pc = 0x291E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E90u;
    // 0x291e94: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x291E90u, 0x291E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E98u;
label_291e98:
    // 0x291e98: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x291e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x291e9c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x291e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x291ea0: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x291ea4: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x291ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x291ea8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x291ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x291eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291eb0: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x291eb0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x291eb4: 0xc0b6284  jal         func_2D8A10
    ctx->pc = 0x291EB4u;
    SET_GPR_U32(ctx, 31, 0x291EBCu);
    ctx->pc = 0x291EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EB4u;
    // 0x291eb8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8A10u, 0x291EB4u, 0x291EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EBCu;
label_291ebc:
    // 0x291ebc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x291EBCu;
    {
        const bool branch_taken_0x291ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EBCu;
        // 0x291ec0: 0xa2000518  sb          $zero, 0x518($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1304), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ebc) {
            ctx->pc = 0x291FACu;
            goto label_291fac;
        }
    }
    ctx->pc = 0x291EC4u;
label_291ec4:
    // 0x291ec4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x291ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x291ec8: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x291ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x291ecc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x291eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x291ed0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x291ED0u;
    {
        const bool branch_taken_0x291ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ed0) {
            ctx->pc = 0x291ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291ED0u;
            // 0x291ed4: 0x92020518  lbu         $v0, 0x518($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291EE0u;
            goto label_291ee0;
        }
    }
    ctx->pc = 0x291ED8u;
    // 0x291ed8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x291ED8u;
    {
        const bool branch_taken_0x291ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291ED8u;
        // 0x291edc: 0xa2000518  sb          $zero, 0x518($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1304), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ed8) {
            ctx->pc = 0x291FACu;
            goto label_291fac;
        }
    }
    ctx->pc = 0x291EE0u;
label_291ee0:
    // 0x291ee0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x291EE0u;
    {
        const bool branch_taken_0x291ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ee0) {
            ctx->pc = 0x291F58u;
            goto label_291f58;
        }
    }
    ctx->pc = 0x291EE8u;
    // 0x291ee8: 0x54a00031  bnel        $a1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x291EE8u;
    {
        const bool branch_taken_0x291ee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x291ee8) {
            ctx->pc = 0x291EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291EE8u;
            // 0x291eec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291FB0u;
            goto label_291fb0;
        }
    }
    ctx->pc = 0x291EF0u;
    // 0x291ef0: 0xa2000518  sb          $zero, 0x518($s0)
    ctx->pc = 0x291ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1304), (uint8_t)GPR_U32(ctx, 0));
    // 0x291ef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x291ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x291ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291efc: 0xc0c1880  jal         func_306200
    ctx->pc = 0x291EFCu;
    SET_GPR_U32(ctx, 31, 0x291F04u);
    ctx->pc = 0x291F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EFCu;
    // 0x291f00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x291EFCu, 0x291F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F04u;
label_291f04:
    // 0x291f04: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x291f04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x291f08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x291f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x291f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x291f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x291f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291f1c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x291F1Cu;
    SET_GPR_U32(ctx, 31, 0x291F24u);
    ctx->pc = 0x291F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F1Cu;
    // 0x291f20: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x291F1Cu, 0x291F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F24u;
label_291f24:
    // 0x291f24: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x291f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x291f28: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x291f2c: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x291f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x291f30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x291f34: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x291f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x291f38: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x291f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x291f3c: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x291f3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x291f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f44: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x291f44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x754C40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C40u, _value); } while (0);
    // 0x291f48: 0xc0b6386  jal         func_2D8E18
    ctx->pc = 0x291F48u;
    SET_GPR_U32(ctx, 31, 0x291F50u);
    ctx->pc = 0x291F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F48u;
    // 0x291f4c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8E18u, 0x291F48u, 0x291F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F50u;
label_291f50:
    // 0x291f50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x291F50u;
    {
        const bool branch_taken_0x291f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F50u;
        // 0x291f54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f50) {
            ctx->pc = 0x291FB0u;
            goto label_291fb0;
        }
    }
    ctx->pc = 0x291F58u;
label_291f58:
    // 0x291f58: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x291F58u;
    {
        const bool branch_taken_0x291f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F58u;
        // 0x291f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f58) {
            ctx->pc = 0x291FACu;
            goto label_291fac;
        }
    }
    ctx->pc = 0x291F60u;
    // 0x291f60: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x291f60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x291f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f68: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x291f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x291f6c: 0xa2020518  sb          $v0, 0x518($s0)
    ctx->pc = 0x291f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1304), (uint8_t)GPR_U32(ctx, 2));
    // 0x291f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x291f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291f7c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x291F7Cu;
    SET_GPR_U32(ctx, 31, 0x291F84u);
    ctx->pc = 0x291F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F7Cu;
    // 0x291f80: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x291F7Cu, 0x291F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F84u;
label_291f84:
    // 0x291f84: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x291f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x291f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291f8c: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x291f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x291f90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x291f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x291f94: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x291f94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x291f98: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x291f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x291f9c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x291f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x291fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x291fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291fa4: 0xc0b6102  jal         func_2D8408
    ctx->pc = 0x291FA4u;
    SET_GPR_U32(ctx, 31, 0x291FACu);
    ctx->pc = 0x291FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291FA4u;
    // 0x291fa8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8408u, 0x291FA4u, 0x291FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FACu;
label_291fac:
    // 0x291fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x291facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_291fb0:
    // 0x291fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x291FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FB4u;
        // 0x291fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291FBCu;
    // 0x291fbc: 0x0  nop
    ctx->pc = 0x291fbcu;
    // NOP
    ctx->pc = 0x291fc0u;
}
