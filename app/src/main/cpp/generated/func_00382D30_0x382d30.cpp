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

// Function: func_00382D30
// Address: 0x382d30 - 0x382f00
void func_00382D30_0x382d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382D30_0x382d30");
#endif

    switch (ctx->pc) {
        case 0x382d84u: goto label_382d84;
        case 0x382d9cu: goto label_382d9c;
        case 0x382dd0u: goto label_382dd0;
        case 0x382e38u: goto label_382e38;
        case 0x382e44u: goto label_382e44;
        case 0x382e54u: goto label_382e54;
        case 0x382e6cu: goto label_382e6c;
        case 0x382e84u: goto label_382e84;
        case 0x382e94u: goto label_382e94;
        case 0x382ea0u: goto label_382ea0;
        case 0x382eacu: goto label_382eac;
        case 0x382eb8u: goto label_382eb8;
        case 0x382ec0u: goto label_382ec0;
        case 0x382ee4u: goto label_382ee4;
        default: break;
    }

    ctx->pc = 0x382d30u;

    // 0x382d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x382d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x382d34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x382d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x382d38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x382d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x382d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x382d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x382d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382d48: 0x26120370  addiu       $s2, $s0, 0x370
    ctx->pc = 0x382d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x382d4c: 0x8e4200fc  lw          $v0, 0xFC($s2)
    ctx->pc = 0x382d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x382d50: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x382D50u;
    {
        const bool branch_taken_0x382d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D50u;
        // 0x382d54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d50) {
            ctx->pc = 0x382DA4u;
            goto label_382da4;
        }
    }
    ctx->pc = 0x382D58u;
    // 0x382d58: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x382d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x382d5c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x382d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x382d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382D60u;
    {
        const bool branch_taken_0x382d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D60u;
        // 0x382d64: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d60) {
            ctx->pc = 0x382D70u;
            goto label_382d70;
        }
    }
    ctx->pc = 0x382D68u;
    // 0x382d68: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x382D68u;
    {
        const bool branch_taken_0x382d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D68u;
        // 0x382d6c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d68) {
            ctx->pc = 0x382EE4u;
            goto label_382ee4;
        }
    }
    ctx->pc = 0x382D70u;
label_382d70:
    // 0x382d70: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x382d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x382d74: 0x24e7ca00  addiu       $a3, $a3, -0x3600
    ctx->pc = 0x382d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953472));
    // 0x382d78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x382d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x382d7c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382D7Cu;
    SET_GPR_U32(ctx, 31, 0x382D84u);
    ctx->pc = 0x382D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D7Cu;
    // 0x382d80: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382D7Cu, 0x382D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D84u;
label_382d84:
    // 0x382d84: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382d84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382d88: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x382d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x382d8c: 0x24e7ca20  addiu       $a3, $a3, -0x35E0
    ctx->pc = 0x382d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953504));
    // 0x382d90: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x382d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x382d94: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382D94u;
    SET_GPR_U32(ctx, 31, 0x382D9Cu);
    ctx->pc = 0x382D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D94u;
    // 0x382d98: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382D94u, 0x382D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D9Cu;
label_382d9c:
    // 0x382d9c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x382D9Cu;
    {
        const bool branch_taken_0x382d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D9Cu;
        // 0x382da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d9c) {
            ctx->pc = 0x382EE8u;
            goto label_382ee8;
        }
    }
    ctx->pc = 0x382DA4u;
label_382da4:
    // 0x382da4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x382da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x382da8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x382DA8u;
    {
        const bool branch_taken_0x382da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DA8u;
        // 0x382dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382da8) {
            ctx->pc = 0x382DC8u;
            goto label_382dc8;
        }
    }
    ctx->pc = 0x382DB0u;
    // 0x382db0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x382db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x382db4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x382db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x382db8: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x382DB8u;
    {
        const bool branch_taken_0x382db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382db8) {
            ctx->pc = 0x382DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382DB8u;
            // 0x382dbc: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382EB8u;
            goto label_382eb8;
        }
    }
    ctx->pc = 0x382DC0u;
    // 0x382dc0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x382DC0u;
    {
        const bool branch_taken_0x382dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382dc0) {
            ctx->pc = 0x382EB8u;
            goto label_382eb8;
        }
    }
    ctx->pc = 0x382DC8u;
label_382dc8:
    // 0x382dc8: 0xc0e0bc0  jal         func_382F00
    ctx->pc = 0x382DC8u;
    SET_GPR_U32(ctx, 31, 0x382DD0u);
    ctx->pc = 0x382DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382DC8u;
    // 0x382dcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F00u, 0x382DC8u, 0x382DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382DD0u;
label_382dd0:
    // 0x382dd0: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x382dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x382dd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x382DD4u;
    {
        const bool branch_taken_0x382dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382dd4) {
            ctx->pc = 0x382DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382DD4u;
            // 0x382dd8: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382DECu;
            goto label_382dec;
        }
    }
    ctx->pc = 0x382DDCu;
    // 0x382ddc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382de0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x382DE0u;
    {
        const bool branch_taken_0x382de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382de0) {
            ctx->pc = 0x382DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382DE0u;
            // 0x382de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382EA4u;
            goto label_382ea4;
        }
    }
    ctx->pc = 0x382DE8u;
    // 0x382de8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x382de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_382dec:
    // 0x382dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x382decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382df0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x382df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x382df4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382DF4u;
    {
        const bool branch_taken_0x382df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DF4u;
        // 0x382df8: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382df4) {
            ctx->pc = 0x382E18u;
            goto label_382e18;
        }
    }
    ctx->pc = 0x382DFCu;
    // 0x382dfc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382e00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x382E00u;
    {
        const bool branch_taken_0x382e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E00u;
        // 0x382e04: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e00) {
            ctx->pc = 0x382E18u;
            goto label_382e18;
        }
    }
    ctx->pc = 0x382E08u;
    // 0x382e08: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x382e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x382e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x382e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382e10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x382E10u;
    {
        const bool branch_taken_0x382e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E10u;
        // 0x382e14: 0xae400030  sw          $zero, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e10) {
            ctx->pc = 0x382EE8u;
            goto label_382ee8;
        }
    }
    ctx->pc = 0x382E18u;
label_382e18:
    // 0x382e18: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x382E18u;
    {
        const bool branch_taken_0x382e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E18u;
        // 0x382e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e18) {
            ctx->pc = 0x382E4Cu;
            goto label_382e4c;
        }
    }
    ctx->pc = 0x382E20u;
    // 0x382e20: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x382e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x382e24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x382e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x382e28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382E28u;
    {
        const bool branch_taken_0x382e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382e28) {
            ctx->pc = 0x382E3Cu;
            goto label_382e3c;
        }
    }
    ctx->pc = 0x382E30u;
    // 0x382e30: 0xc0e0370  jal         func_380DC0
    ctx->pc = 0x382E30u;
    SET_GPR_U32(ctx, 31, 0x382E38u);
    ctx->pc = 0x382E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E30u;
    // 0x382e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380DC0u, 0x382E30u, 0x382E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E38u;
label_382e38:
    // 0x382e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382e3c:
    // 0x382e3c: 0xc0e0bd0  jal         func_382F40
    ctx->pc = 0x382E3Cu;
    SET_GPR_U32(ctx, 31, 0x382E44u);
    ctx->pc = 0x382E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E3Cu;
    // 0x382e40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F40u, 0x382E3Cu, 0x382E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E44u;
label_382e44:
    // 0x382e44: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x382E44u;
    {
        const bool branch_taken_0x382e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E44u;
        // 0x382e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e44) {
            ctx->pc = 0x382EB8u;
            goto label_382eb8;
        }
    }
    ctx->pc = 0x382E4Cu;
label_382e4c:
    // 0x382e4c: 0xc0e0cec  jal         func_3833B0
    ctx->pc = 0x382E4Cu;
    SET_GPR_U32(ctx, 31, 0x382E54u);
    ctx->pc = 0x382E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E4Cu;
    // 0x382e50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3833B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3833B0u, 0x382E4Cu, 0x382E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E54u;
label_382e54:
    // 0x382e54: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x382e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x382e58: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x382e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x382e5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382E5Cu;
    {
        const bool branch_taken_0x382e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E5Cu;
        // 0x382e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e5c) {
            ctx->pc = 0x382E6Cu;
            goto label_382e6c;
        }
    }
    ctx->pc = 0x382E64u;
    // 0x382e64: 0xc0e0cfe  jal         func_3833F8
    ctx->pc = 0x382E64u;
    SET_GPR_U32(ctx, 31, 0x382E6Cu);
    ctx->pc = 0x382E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E64u;
    // 0x382e68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3833F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3833F8u, 0x382E64u, 0x382E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E6Cu;
label_382e6c:
    // 0x382e6c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x382e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x382e70: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x382e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x382e74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382E74u;
    {
        const bool branch_taken_0x382e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E74u;
        // 0x382e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e74) {
            ctx->pc = 0x382E88u;
            goto label_382e88;
        }
    }
    ctx->pc = 0x382E7Cu;
    // 0x382e7c: 0xc0e0d0e  jal         func_383438
    ctx->pc = 0x382E7Cu;
    SET_GPR_U32(ctx, 31, 0x382E84u);
    ctx->pc = 0x382E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E7Cu;
    // 0x382e80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383438u, 0x382E7Cu, 0x382E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E84u;
label_382e84:
    // 0x382e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382e88:
    // 0x382e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e8c: 0xc0e0404  jal         func_381010
    ctx->pc = 0x382E8Cu;
    SET_GPR_U32(ctx, 31, 0x382E94u);
    ctx->pc = 0x382E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E8Cu;
    // 0x382e90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381010u, 0x382E8Cu, 0x382E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E94u;
label_382e94:
    // 0x382e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e98: 0xc0e0d1e  jal         func_383478
    ctx->pc = 0x382E98u;
    SET_GPR_U32(ctx, 31, 0x382EA0u);
    ctx->pc = 0x382E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E98u;
    // 0x382e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383478u, 0x382E98u, 0x382EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382EA0u;
label_382ea0:
    // 0x382ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382ea4:
    // 0x382ea4: 0xc0e0d46  jal         func_383518
    ctx->pc = 0x382EA4u;
    SET_GPR_U32(ctx, 31, 0x382EACu);
    ctx->pc = 0x382EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382EA4u;
    // 0x382ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383518u, 0x382EA4u, 0x382EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382EACu;
label_382eac:
    // 0x382eac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382eb0: 0xc0e0d68  jal         func_3835A0
    ctx->pc = 0x382EB0u;
    SET_GPR_U32(ctx, 31, 0x382EB8u);
    ctx->pc = 0x382EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382EB0u;
    // 0x382eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3835A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3835A0u, 0x382EB0u, 0x382EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382EB8u;
label_382eb8:
    // 0x382eb8: 0xc0e1066  jal         func_384198
    ctx->pc = 0x382EB8u;
    SET_GPR_U32(ctx, 31, 0x382EC0u);
    ctx->pc = 0x382EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382EB8u;
    // 0x382ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384198u, 0x382EB8u, 0x382EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382EC0u;
label_382ec0:
    // 0x382ec0: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x382ec0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x382ec4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x382ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x382ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ecc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x382eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x382ed0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x382ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x382ed4: 0x34e76060  ori         $a3, $a3, 0x6060
    ctx->pc = 0x382ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24672);
    // 0x382ed8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x382ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x382edc: 0xc0e019e  jal         func_380678
    ctx->pc = 0x382EDCu;
    SET_GPR_U32(ctx, 31, 0x382EE4u);
    ctx->pc = 0x382EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382EDCu;
    // 0x382ee0: 0x3408fff8  ori         $t0, $zero, 0xFFF8 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    ctx->in_delay_slot = false;
    ctx->pc = 0x380678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380678u, 0x382EDCu, 0x382EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382EE4u;
label_382ee4:
    // 0x382ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x382ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382ee8:
    // 0x382ee8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x382ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382eec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x382eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382ef0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x382ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x382EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382EF8u;
        // 0x382efc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F00u;
}
