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

// Function: func_00273D30
// Address: 0x273d30 - 0x273eb8
void func_00273D30_0x273d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273D30_0x273d30");
#endif

    switch (ctx->pc) {
        case 0x273da0u: goto label_273da0;
        case 0x273e60u: goto label_273e60;
        case 0x273e68u: goto label_273e68;
        case 0x273ea8u: goto label_273ea8;
        default: break;
    }

    ctx->pc = 0x273d30u;

    // 0x273d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273d34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x273d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x273d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d40: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x273d44: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x273d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x273d48: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x273D48u;
    {
        const bool branch_taken_0x273d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273d48) {
            ctx->pc = 0x273D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D48u;
            // 0x273d4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273EACu;
            goto label_273eac;
        }
    }
    ctx->pc = 0x273D50u;
    // 0x273d50: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x273d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x273d54: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x273d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x273d58: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x273d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x273d5c: 0x2444fde1  addiu       $a0, $v0, -0x21F
    ctx->pc = 0x273d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966753));
    // 0x273d60: 0x2c830060  sltiu       $v1, $a0, 0x60
    ctx->pc = 0x273d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x273d64: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x273D64u;
    {
        const bool branch_taken_0x273d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D64u;
        // 0x273d68: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d64) {
            ctx->pc = 0x273E90u;
            goto label_273e90;
        }
    }
    ctx->pc = 0x273D6Cu;
    // 0x273d6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273d70: 0x24426dd0  addiu       $v0, $v0, 0x6DD0
    ctx->pc = 0x273d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28112));
    // 0x273d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273d78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x273d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273d7c: 0x800008  jr          $a0
    ctx->pc = 0x273D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273D84u: goto label_273d84;
            case 0x273E90u: goto label_273e90;
            case 0x273EA8u: goto label_273ea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273D7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273D84u;
label_273d84:
    // 0x273d84: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x273d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x273d88: 0x24040801  addiu       $a0, $zero, 0x801
    ctx->pc = 0x273d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x273d8c: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x273d8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x273d90: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x273D90u;
    {
        const bool branch_taken_0x273d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x273D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D90u;
        // 0x273d94: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d90) {
            ctx->pc = 0x273E58u;
            goto label_273e58;
        }
    }
    ctx->pc = 0x273D98u;
    // 0x273d98: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x273D98u;
    SET_GPR_U32(ctx, 31, 0x273DA0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x273D98u, 0x273DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DA0u;
label_273da0:
    // 0x273da0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x273da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x273da4: 0x240403c1  addiu       $a0, $zero, 0x3C1
    ctx->pc = 0x273da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
    // 0x273da8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x273da8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x273dac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x273DACu;
    {
        const bool branch_taken_0x273dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273dac) {
            ctx->pc = 0x273DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273DACu;
            // 0x273db0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273DB4u;
            goto label_273db4;
        }
    }
    ctx->pc = 0x273DB4u;
label_273db4:
    // 0x273db4: 0x2810  mfhi        $a1
    ctx->pc = 0x273db4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x273db8: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x273db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x273dbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273DBCu;
    {
        const bool branch_taken_0x273dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DBCu;
        // 0x273dc0: 0xae040560  sw          $a0, 0x560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dbc) {
            ctx->pc = 0x273DCCu;
            goto label_273dcc;
        }
    }
    ctx->pc = 0x273DC4u;
    // 0x273dc4: 0x240203c8  addiu       $v0, $zero, 0x3C8
    ctx->pc = 0x273dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
    // 0x273dc8: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_273dcc:
    // 0x273dcc: 0x2ca20028  sltiu       $v0, $a1, 0x28
    ctx->pc = 0x273dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x273dd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273DD0u;
    {
        const bool branch_taken_0x273dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DD0u;
        // 0x273dd4: 0x2ca20031  sltiu       $v0, $a1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dd0) {
            ctx->pc = 0x273DE4u;
            goto label_273de4;
        }
    }
    ctx->pc = 0x273DD8u;
    // 0x273dd8: 0x240203d1  addiu       $v0, $zero, 0x3D1
    ctx->pc = 0x273dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
    // 0x273ddc: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x273de0: 0x2ca20031  sltiu       $v0, $a1, 0x31
    ctx->pc = 0x273de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_273de4:
    // 0x273de4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273DE4u;
    {
        const bool branch_taken_0x273de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE4u;
        // 0x273de8: 0x2ca20032  sltiu       $v0, $a1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273de4) {
            ctx->pc = 0x273DF8u;
            goto label_273df8;
        }
    }
    ctx->pc = 0x273DECu;
    // 0x273dec: 0x240203d0  addiu       $v0, $zero, 0x3D0
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    // 0x273df0: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x273df4: 0x2ca20032  sltiu       $v0, $a1, 0x32
    ctx->pc = 0x273df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_273df8:
    // 0x273df8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273DF8u;
    {
        const bool branch_taken_0x273df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DF8u;
        // 0x273dfc: 0x2ca20041  sltiu       $v0, $a1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273df8) {
            ctx->pc = 0x273E0Cu;
            goto label_273e0c;
        }
    }
    ctx->pc = 0x273E00u;
    // 0x273e00: 0x240203e0  addiu       $v0, $zero, 0x3E0
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    // 0x273e04: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x273e08: 0x2ca20041  sltiu       $v0, $a1, 0x41
    ctx->pc = 0x273e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_273e0c:
    // 0x273e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273E0Cu;
    {
        const bool branch_taken_0x273e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E0Cu;
        // 0x273e10: 0x2ca2003b  sltiu       $v0, $a1, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e0c) {
            ctx->pc = 0x273E20u;
            goto label_273e20;
        }
    }
    ctx->pc = 0x273E14u;
    // 0x273e14: 0x240203e1  addiu       $v0, $zero, 0x3E1
    ctx->pc = 0x273e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 993));
    // 0x273e18: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x273e1c: 0x2ca2003b  sltiu       $v0, $a1, 0x3B
    ctx->pc = 0x273e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_273e20:
    // 0x273e20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273E20u;
    {
        const bool branch_taken_0x273e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E20u;
        // 0x273e24: 0x2ca20050  sltiu       $v0, $a1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e20) {
            ctx->pc = 0x273E34u;
            goto label_273e34;
        }
    }
    ctx->pc = 0x273E28u;
    // 0x273e28: 0x240203de  addiu       $v0, $zero, 0x3DE
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 990));
    // 0x273e2c: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x273e30: 0x2ca20050  sltiu       $v0, $a1, 0x50
    ctx->pc = 0x273e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
label_273e34:
    // 0x273e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273E34u;
    {
        const bool branch_taken_0x273e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E34u;
        // 0x273e38: 0x2ca2005a  sltiu       $v0, $a1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e34) {
            ctx->pc = 0x273E48u;
            goto label_273e48;
        }
    }
    ctx->pc = 0x273E3Cu;
    // 0x273e3c: 0x240203e2  addiu       $v0, $zero, 0x3E2
    ctx->pc = 0x273e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 994));
    // 0x273e40: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x273e44: 0x2ca2005a  sltiu       $v0, $a1, 0x5A
    ctx->pc = 0x273e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
label_273e48:
    // 0x273e48: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x273E48u;
    {
        const bool branch_taken_0x273e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E48u;
        // 0x273e4c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e48) {
            ctx->pc = 0x273E94u;
            goto label_273e94;
        }
    }
    ctx->pc = 0x273E50u;
    // 0x273e50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x273E50u;
    {
        const bool branch_taken_0x273e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E50u;
        // 0x273e54: 0x240203df  addiu       $v0, $zero, 0x3DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e50) {
            ctx->pc = 0x273E8Cu;
            goto label_273e8c;
        }
    }
    ctx->pc = 0x273E58u;
label_273e58:
    // 0x273e58: 0xc0a482c  jal         func_2920B0
    ctx->pc = 0x273E58u;
    SET_GPR_U32(ctx, 31, 0x273E60u);
    ctx->pc = 0x273E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E58u;
    // 0x273e5c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920B0u, 0x273E58u, 0x273E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E60u;
label_273e60:
    // 0x273e60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x273E60u;
    SET_GPR_U32(ctx, 31, 0x273E68u);
    ctx->pc = 0x273E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E60u;
    // 0x273e64: 0xae020560  sw          $v0, 0x560($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x273E60u, 0x273E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E68u;
label_273e68:
    // 0x273e68: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x273e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x273e6c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x273e6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x273e70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x273E70u;
    {
        const bool branch_taken_0x273e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273e70) {
            ctx->pc = 0x273E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E70u;
            // 0x273e74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E78u;
            goto label_273e78;
        }
    }
    ctx->pc = 0x273E78u;
label_273e78:
    // 0x273e78: 0x2010  mfhi        $a0
    ctx->pc = 0x273e78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x273e7c: 0x2c840046  sltiu       $a0, $a0, 0x46
    ctx->pc = 0x273e7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x273e80: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273E80u;
    {
        const bool branch_taken_0x273e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E80u;
        // 0x273e84: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e80) {
            ctx->pc = 0x273E94u;
            goto label_273e94;
        }
    }
    ctx->pc = 0x273E88u;
    // 0x273e88: 0x240203d8  addiu       $v0, $zero, 0x3D8
    ctx->pc = 0x273e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
label_273e8c:
    // 0x273e8c: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x273e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_273e90:
    // 0x273e90: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x273e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_273e94:
    // 0x273e94: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x273e98: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x273e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x273e9c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x273e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x273ea0: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x273EA0u;
    SET_GPR_U32(ctx, 31, 0x273EA8u);
    ctx->pc = 0x273EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EA0u;
    // 0x273ea4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x273EA0u, 0x273EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EA8u;
label_273ea8:
    // 0x273ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273eac:
    // 0x273eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x273EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EB0u;
        // 0x273eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273EB8u;
}
