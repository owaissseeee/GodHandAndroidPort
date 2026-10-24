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

// Function: func_00286D10
// Address: 0x286d10 - 0x287090
void func_00286D10_0x286d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00286D10_0x286d10");
#endif

    switch (ctx->pc) {
        case 0x286d38u: goto label_286d38;
        case 0x286d78u: goto label_286d78;
        case 0x286d84u: goto label_286d84;
        case 0x286e20u: goto label_286e20;
        case 0x286e74u: goto label_286e74;
        case 0x286ea8u: goto label_286ea8;
        case 0x286ed0u: goto label_286ed0;
        case 0x286ef4u: goto label_286ef4;
        case 0x286efcu: goto label_286efc;
        case 0x286f4cu: goto label_286f4c;
        case 0x286f70u: goto label_286f70;
        case 0x286f78u: goto label_286f78;
        case 0x28700cu: goto label_28700c;
        case 0x287034u: goto label_287034;
        case 0x287058u: goto label_287058;
        case 0x287060u: goto label_287060;
        case 0x287070u: goto label_287070;
        case 0x287078u: goto label_287078;
        default: break;
    }

    ctx->pc = 0x286d10u;

    // 0x286d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286d14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x286d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x286d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x286d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d20: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x286d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x286d24: 0x26111590  addiu       $s1, $s0, 0x1590
    ctx->pc = 0x286d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5520));
    // 0x286d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d30: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x286D30u;
    SET_GPR_U32(ctx, 31, 0x286D38u);
    ctx->pc = 0x286D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D30u;
    // 0x286d34: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x286D30u, 0x286D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D38u;
label_286d38:
    // 0x286d38: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286d3c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286d40: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x286d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x286d44: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x286d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x286d48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x286d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x286d4c: 0x920402fc  lbu         $a0, 0x2FC($s0)
    ctx->pc = 0x286d4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x286d50: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x286d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x286d54: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x286d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x286d58: 0x8ca276b0  lw          $v0, 0x76B0($a1)
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 30384)));
    // 0x286d5c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x286d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x286d60: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286D60u;
    {
        const bool branch_taken_0x286d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x286D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D60u;
        // 0x286d64: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d60) {
            ctx->pc = 0x286D84u;
            goto label_286d84;
        }
    }
    ctx->pc = 0x286D68u;
    // 0x286d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d70: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x286D70u;
    SET_GPR_U32(ctx, 31, 0x286D78u);
    ctx->pc = 0x286D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D70u;
    // 0x286d74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x286D70u, 0x286D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D78u;
label_286d78:
    // 0x286d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d7c: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x286D7Cu;
    SET_GPR_U32(ctx, 31, 0x286D84u);
    ctx->pc = 0x286D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D7Cu;
    // 0x286d80: 0x26051570  addiu       $a1, $s0, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x286D7Cu, 0x286D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D84u;
label_286d84:
    // 0x286d84: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x286d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286d8c: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x286D8Cu;
    {
        const bool branch_taken_0x286d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D8Cu;
        // 0x286d90: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d8c) {
            ctx->pc = 0x286EDCu;
            goto label_286edc;
        }
    }
    ctx->pc = 0x286D94u;
    // 0x286d94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286D94u;
    {
        const bool branch_taken_0x286d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286d94) {
            ctx->pc = 0x286D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286D94u;
            // 0x286d98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286DACu;
            goto label_286dac;
        }
    }
    ctx->pc = 0x286D9Cu;
    // 0x286d9c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x286D9Cu;
    {
        const bool branch_taken_0x286d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286d9c) {
            ctx->pc = 0x286DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286D9Cu;
            // 0x286da0: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286DC4u;
            goto label_286dc4;
        }
    }
    ctx->pc = 0x286DA4u;
    // 0x286da4: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x286DA4u;
    {
        const bool branch_taken_0x286da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DA4u;
        // 0x286da8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286da4) {
            ctx->pc = 0x28707Cu;
            goto label_28707c;
        }
    }
    ctx->pc = 0x286DACu;
label_286dac:
    // 0x286dac: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x286DACu;
    {
        const bool branch_taken_0x286dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DACu;
        // 0x286db0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dac) {
            ctx->pc = 0x286FE0u;
            goto label_286fe0;
        }
    }
    ctx->pc = 0x286DB4u;
    // 0x286db4: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x286DB4u;
    {
        const bool branch_taken_0x286db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286db4) {
            ctx->pc = 0x287040u;
            goto label_287040;
        }
    }
    ctx->pc = 0x286DBCu;
    // 0x286dbc: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x286DBCu;
    {
        const bool branch_taken_0x286dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DBCu;
        // 0x286dc0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dbc) {
            ctx->pc = 0x28707Cu;
            goto label_28707c;
        }
    }
    ctx->pc = 0x286DC4u;
label_286dc4:
    // 0x286dc4: 0x86030548  lh          $v1, 0x548($s0)
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x286dc8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x286dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286dcc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286DCCu;
    {
        const bool branch_taken_0x286dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DCCu;
        // 0x286dd0: 0x240202a7  addiu       $v0, $zero, 0x2A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dcc) {
            ctx->pc = 0x286E04u;
            goto label_286e04;
        }
    }
    ctx->pc = 0x286DD4u;
    // 0x286dd4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x286dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x286dd8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x286DD8u;
    {
        const bool branch_taken_0x286dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DD8u;
        // 0x286ddc: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dd8) {
            ctx->pc = 0x286E48u;
            goto label_286e48;
        }
    }
    ctx->pc = 0x286DE0u;
    // 0x286de0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x286DE0u;
    {
        const bool branch_taken_0x286de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DE0u;
        // 0x286de4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286de0) {
            ctx->pc = 0x286E48u;
            goto label_286e48;
        }
    }
    ctx->pc = 0x286DE8u;
    // 0x286de8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286df4: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x286df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x286df8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dfc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x8c4600bc  lw          $a2, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x286E64u;
            goto label_286e64;
        }
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x286e08: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x286E08u;
    {
        const bool branch_taken_0x286e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E08u;
        // 0x286e0c: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e08) {
            ctx->pc = 0x286E7Cu;
            goto label_286e7c;
        }
    }
    ctx->pc = 0x286E10u;
    // 0x286e10: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x286E10u;
    {
        const bool branch_taken_0x286e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286e10) {
            ctx->pc = 0x286E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286E10u;
            // 0x286e14: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286E80u;
            goto label_286e80;
        }
    }
    ctx->pc = 0x286E18u;
    // 0x286e18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x286E18u;
    SET_GPR_U32(ctx, 31, 0x286E20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x286E18u, 0x286E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E20u;
label_286e20:
    // 0x286e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286e24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286E24u;
    {
        const bool branch_taken_0x286e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E24u;
        // 0x286e28: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e24) {
            ctx->pc = 0x286E48u;
            goto label_286e48;
        }
    }
    ctx->pc = 0x286E2Cu;
    // 0x286e2c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286e38: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x286e3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286E40u;
    {
        const bool branch_taken_0x286e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E40u;
        // 0x286e44: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e40) {
            ctx->pc = 0x286E64u;
            goto label_286e64;
        }
    }
    ctx->pc = 0x286E48u;
label_286e48:
    // 0x286e48: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286e54: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x286e58: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x286e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x286e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e60: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x286e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_286e64:
    // 0x286e64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x286e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286e6c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x286E6Cu;
    SET_GPR_U32(ctx, 31, 0x286E74u);
    ctx->pc = 0x286E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E6Cu;
    // 0x286e70: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x286E6Cu, 0x286E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E74u;
label_286e74:
    // 0x286e74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x286E74u;
    {
        const bool branch_taken_0x286e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E74u;
        // 0x286e78: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e74) {
            ctx->pc = 0x286EACu;
            goto label_286eac;
        }
    }
    ctx->pc = 0x286E7Cu;
label_286e7c:
    // 0x286e7c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_286e80:
    // 0x286e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286e88: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x286e8c: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x286e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e94: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x286e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x286e98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x286e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286ea0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x286EA0u;
    SET_GPR_U32(ctx, 31, 0x286EA8u);
    ctx->pc = 0x286EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EA0u;
    // 0x286ea4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x286EA0u, 0x286EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EA8u;
label_286ea8:
    // 0x286ea8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x286ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_286eac:
    // 0x286eac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286eb0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x286eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x286eb4: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x286eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x286eb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x286eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ec0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ec4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x286ec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ec8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x286EC8u;
    SET_GPR_U32(ctx, 31, 0x286ED0u);
    ctx->pc = 0x286ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EC8u;
    // 0x286ecc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x286EC8u, 0x286ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286ED0u;
label_286ed0:
    // 0x286ed0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x286ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286ed8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x286ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_286edc:
    // 0x286edc: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x286edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x286ee0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x286ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x286ee4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286eec: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x286EECu;
    SET_GPR_U32(ctx, 31, 0x286EF4u);
    ctx->pc = 0x286EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EECu;
    // 0x286ef0: 0x26051570  addiu       $a1, $s0, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x286EECu, 0x286EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EF4u;
label_286ef4:
    // 0x286ef4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286EF4u;
    SET_GPR_U32(ctx, 31, 0x286EFCu);
    ctx->pc = 0x286EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286EF4u;
    // 0x286ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286EF4u, 0x286EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EFCu;
label_286efc:
    // 0x286efc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x286EFCu;
    {
        const bool branch_taken_0x286efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286efc) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F04u;
    // 0x286f04: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286f08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x286f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x286f0c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x286F0Cu;
    {
        const bool branch_taken_0x286f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286f0c) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F14u;
    // 0x286f14: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x286f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x286f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286f1c: 0x0  nop
    ctx->pc = 0x286f1cu;
    // NOP
    // 0x286f20: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x286f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286f24: 0x0  nop
    ctx->pc = 0x286f24u;
    // NOP
    // 0x286f28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x286F28u;
    {
        const bool branch_taken_0x286f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F28u;
        // 0x286f2c: 0x240202a7  addiu       $v0, $zero, 0x2A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f28) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F30u;
    // 0x286f30: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x286f34: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286F34u;
    {
        const bool branch_taken_0x286f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F34u;
        // 0x286f38: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f34) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F3Cu;
    // 0x286f3c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286F3Cu;
    {
        const bool branch_taken_0x286f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286f3c) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F44u;
    // 0x286f44: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x286F44u;
    SET_GPR_U32(ctx, 31, 0x286F4Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x286F44u, 0x286F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F4Cu;
label_286f4c:
    // 0x286f4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x286f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x286f50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286F50u;
    {
        const bool branch_taken_0x286f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F50u;
        // 0x286f54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f50) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F58u;
    // 0x286f58: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286f5c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x286f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x286f60: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x286f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x286f64: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x286f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
label_286f68:
    // 0x286f68: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x286F68u;
    SET_GPR_U32(ctx, 31, 0x286F70u);
    ctx->pc = 0x286F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F68u;
    // 0x286f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x286F68u, 0x286F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F70u;
label_286f70:
    // 0x286f70: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286F70u;
    SET_GPR_U32(ctx, 31, 0x286F78u);
    ctx->pc = 0x286F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F70u;
    // 0x286f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286F70u, 0x286F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F78u;
label_286f78:
    // 0x286f78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x286f7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x286f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x286f80: 0x0  nop
    ctx->pc = 0x286f80u;
    // NOP
    // 0x286f84: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x286f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286f88: 0x0  nop
    ctx->pc = 0x286f88u;
    // NOP
    // 0x286f8c: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x286F8Cu;
    {
        const bool branch_taken_0x286f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286f8c) {
            ctx->pc = 0x286F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F8Cu;
            // 0x286f90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28707Cu;
            goto label_28707c;
        }
    }
    ctx->pc = 0x286F94u;
    // 0x286f94: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x286f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x286f98: 0xc6021594  lwc1        $f2, 0x1594($s0)
    ctx->pc = 0x286f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286f9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x286f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x286fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286fa4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x286fa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x286fa8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x286fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286fac: 0x0  nop
    ctx->pc = 0x286facu;
    // NOP
    // 0x286fb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x286FB0u;
    {
        const bool branch_taken_0x286fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FB0u;
        // 0x286fb4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fb0) {
            ctx->pc = 0x286FBCu;
            goto label_286fbc;
        }
    }
    ctx->pc = 0x286FB8u;
    // 0x286fb8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x286fb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_286fbc:
    // 0x286fbc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x286fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286fc0: 0x0  nop
    ctx->pc = 0x286fc0u;
    // NOP
    // 0x286fc4: 0x4502002d  bc1fl       . + 4 + (0x2D << 2)
    ctx->pc = 0x286FC4u;
    {
        const bool branch_taken_0x286fc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286fc4) {
            ctx->pc = 0x286FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286FC4u;
            // 0x286fc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28707Cu;
            goto label_28707c;
        }
    }
    ctx->pc = 0x286FCCu;
    // 0x286fcc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x286fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x286fd0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x286fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x286fd4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x286fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x286fd8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x286FD8u;
    {
        const bool branch_taken_0x286fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FD8u;
        // 0x286fdc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fd8) {
            ctx->pc = 0x287078u;
            goto label_287078;
        }
    }
    ctx->pc = 0x286FE0u;
label_286fe0:
    // 0x286fe0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286fec: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x286ff0: 0x8c450178  lw          $a1, 0x178($v0)
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x286ff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ff8: 0x8c46017c  lw          $a2, 0x17C($v0)
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x286ffc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287000: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x287000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x287004: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287004u;
    SET_GPR_U32(ctx, 31, 0x28700Cu);
    ctx->pc = 0x287008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287004u;
    // 0x287008: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287004u, 0x28700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28700Cu;
label_28700c:
    // 0x28700c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28700cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x287010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287014: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287018: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x287018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x28701c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28701cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287020: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287028: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28702c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28702Cu;
    SET_GPR_U32(ctx, 31, 0x287034u);
    ctx->pc = 0x287030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28702Cu;
    // 0x287030: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28702Cu, 0x287034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287034u;
label_287034:
    // 0x287034: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x287034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x287038: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28703c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x28703cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_287040:
    // 0x287040: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x287044: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x287044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x287048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28704c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287050: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x287050u;
    SET_GPR_U32(ctx, 31, 0x287058u);
    ctx->pc = 0x287054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287050u;
    // 0x287054: 0x26051570  addiu       $a1, $s0, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x287050u, 0x287058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287058u;
label_287058:
    // 0x287058: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287058u;
    SET_GPR_U32(ctx, 31, 0x287060u);
    ctx->pc = 0x28705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287058u;
    // 0x28705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287058u, 0x287060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287060u;
label_287060:
    // 0x287060: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287060u;
    {
        const bool branch_taken_0x287060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287060) {
            ctx->pc = 0x287064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287060u;
            // 0x287064: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287068u;
            goto label_287068;
        }
    }
    ctx->pc = 0x287068u;
label_287068:
    // 0x287068: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287068u;
    SET_GPR_U32(ctx, 31, 0x287070u);
    ctx->pc = 0x28706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287068u;
    // 0x28706c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287068u, 0x287070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287070u;
label_287070:
    // 0x287070: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287070u;
    SET_GPR_U32(ctx, 31, 0x287078u);
    ctx->pc = 0x287074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287070u;
    // 0x287074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287070u, 0x287078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287078u;
label_287078:
    // 0x287078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x287078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28707c:
    // 0x28707c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28707cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287084: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x287084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287088: 0x3e00008  jr          $ra
    ctx->pc = 0x287088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287088u;
        // 0x28708c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287090u;
}
