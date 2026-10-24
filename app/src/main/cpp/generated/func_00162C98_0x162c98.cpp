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

// Function: func_00162C98
// Address: 0x162c98 - 0x1630e8
void func_00162C98_0x162c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00162C98_0x162c98");
#endif

    switch (ctx->pc) {
        case 0x162cc0u: goto label_162cc0;
        case 0x162d60u: goto label_162d60;
        case 0x162d84u: goto label_162d84;
        case 0x162da0u: goto label_162da0;
        case 0x162f24u: goto label_162f24;
        case 0x162f60u: goto label_162f60;
        case 0x162f8cu: goto label_162f8c;
        case 0x162fbcu: goto label_162fbc;
        case 0x163004u: goto label_163004;
        case 0x163044u: goto label_163044;
        case 0x163080u: goto label_163080;
        default: break;
    }

    ctx->pc = 0x162c98u;

    // 0x162c98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x162c9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x162c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x162ca0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x162ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x162ca4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x162ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x162ca8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x162ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x162cac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x162cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x162cb0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x162cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x162cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162cb8: 0xc059178  jal         func_1645E0
    ctx->pc = 0x162CB8u;
    SET_GPR_U32(ctx, 31, 0x162CC0u);
    ctx->pc = 0x162CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CB8u;
    // 0x162cbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645E0u, 0x162CB8u, 0x162CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CC0u;
label_162cc0:
    // 0x162cc0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x162cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x162cc4: 0x8c636b28  lw          $v1, 0x6B28($v1)
    ctx->pc = 0x162cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B28u));
    // 0x162cc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162ccc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162cd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x162CD0u;
    {
        const bool branch_taken_0x162cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CD0u;
        // 0x162cd4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cd0) {
            ctx->pc = 0x162CF0u;
            goto label_162cf0;
        }
    }
    ctx->pc = 0x162CD8u;
    // 0x162cd8: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x162cd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x162cdc: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x162cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x162ce0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x162CE0u;
    {
        const bool branch_taken_0x162ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CE0u;
        // 0x162ce4: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ce0) {
            ctx->pc = 0x162D00u;
            goto label_162d00;
        }
    }
    ctx->pc = 0x162CE8u;
    // 0x162ce8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x162CE8u;
    {
        const bool branch_taken_0x162ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CE8u;
        // 0x162cec: 0x240720a3  addiu       $a3, $zero, 0x20A3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ce8) {
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162CF0u;
label_162cf0:
    // 0x162cf0: 0x94433eec  lhu         $v1, 0x3EEC($v0)
    ctx->pc = 0x162cf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16108)));
    // 0x162cf4: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x162cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x162cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162CF8u;
    {
        const bool branch_taken_0x162cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CF8u;
        // 0x162cfc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cf8) {
            ctx->pc = 0x162D10u;
            goto label_162d10;
        }
    }
    ctx->pc = 0x162D00u;
label_162d00:
    // 0x162d00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x162d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x162d04: 0x24422013  addiu       $v0, $v0, 0x2013
    ctx->pc = 0x162d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8211));
    // 0x162d08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162D08u;
    {
        const bool branch_taken_0x162d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D08u;
        // 0x162d0c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d08) {
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162D10u;
label_162d10:
    // 0x162d10: 0x240720a3  addiu       $a3, $zero, 0x20A3
    ctx->pc = 0x162d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
label_162d14:
    // 0x162d14: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x162d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x162d18: 0x2ce420a4  sltiu       $a0, $a3, 0x20A4
    ctx->pc = 0x162d18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8356) ? 1 : 0);
    // 0x162d1c: 0x8c6523a4  lw          $a1, 0x23A4($v1)
    ctx->pc = 0x162d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9124)));
    // 0x162d20: 0x240220a3  addiu       $v0, $zero, 0x20A3
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8355));
    // 0x162d24: 0x44380a  movz        $a3, $v0, $a0
    ctx->pc = 0x162d24u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x162d28: 0x24062022  addiu       $a2, $zero, 0x2022
    ctx->pc = 0x162d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8226));
    // 0x162d2c: 0xa4a70bee  sh          $a3, 0xBEE($a1)
    ctx->pc = 0x162d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 3054), (uint16_t)GPR_U32(ctx, 7));
    // 0x162d30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162d34: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x162d38: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x162d38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x162d3c: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x162d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x162d40: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x162d40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x162d44: 0xa20400f0  sb          $a0, 0xF0($s0)
    ctx->pc = 0x162d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 4));
    // 0x162d48: 0x26130080  addiu       $s3, $s0, 0x80
    ctx->pc = 0x162d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x162d4c: 0x3c140056  lui         $s4, 0x56
    ctx->pc = 0x162d4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)86 << 16));
    // 0x162d50: 0x3c110056  lui         $s1, 0x56
    ctx->pc = 0x162d50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)86 << 16));
    // 0x162d54: 0x3c120056  lui         $s2, 0x56
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)86 << 16));
    // 0x162d58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162D58u;
    {
        const bool branch_taken_0x162d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D58u;
        // 0x162d5c: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d58) {
            ctx->pc = 0x162D68u;
            goto label_162d68;
        }
    }
    ctx->pc = 0x162D60u;
label_162d60:
    // 0x162d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x162d64: 0xa20200f0  sb          $v0, 0xF0($s0)
    ctx->pc = 0x162d64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 2));
label_162d68:
    // 0x162d68: 0x820500f0  lb          $a1, 0xF0($s0)
    ctx->pc = 0x162d68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162d6c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x162d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x162d70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162D70u;
    {
        const bool branch_taken_0x162d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D70u;
        // 0x162d74: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d70) {
            ctx->pc = 0x162D8Cu;
            goto label_162d8c;
        }
    }
    ctx->pc = 0x162D78u;
    // 0x162d78: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x162d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x162d7c: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x162D7Cu;
    SET_GPR_U32(ctx, 31, 0x162D84u);
    ctx->pc = 0x162D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D7Cu;
    // 0x162d80: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x162D7Cu, 0x162D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D84u;
label_162d84:
    // 0x162d84: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x162D84u;
    {
        const bool branch_taken_0x162d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162d84) {
            ctx->pc = 0x162D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162D84u;
            // 0x162d88: 0x920200f0  lbu         $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162d60;
        }
    }
    ctx->pc = 0x162D8Cu;
label_162d8c:
    // 0x162d8c: 0x920200f0  lbu         $v0, 0xF0($s0)
    ctx->pc = 0x162d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162d94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x162d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x162d98: 0xa20200f0  sb          $v0, 0xF0($s0)
    ctx->pc = 0x162d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x162d9c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x162d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_162da0:
    // 0x162da0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x162da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x162da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162da8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x162da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x162dac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162db0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x162db4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x162db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x162db8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x162db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x162dbc: 0x820300f0  lb          $v1, 0xF0($s0)
    ctx->pc = 0x162dbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162dc0: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x162dc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x162dc4: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x162DC4u;
    {
        const bool branch_taken_0x162dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DC4u;
        // 0x162dc8: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dc4) {
            ctx->pc = 0x162F00u;
            goto label_162f00;
        }
    }
    ctx->pc = 0x162DCCu;
    // 0x162dcc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x162dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x162dd0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x162DD0u;
    {
        const bool branch_taken_0x162dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DD0u;
        // 0x162dd4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dd0) {
            ctx->pc = 0x162F00u;
            goto label_162f00;
        }
    }
    ctx->pc = 0x162DD8u;
    // 0x162dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162ddc: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x162ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x162de0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162de4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162de8: 0x800008  jr          $a0
    ctx->pc = 0x162DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162DF0u: goto label_162df0;
            case 0x162E10u: goto label_162e10;
            case 0x162E30u: goto label_162e30;
            case 0x162E50u: goto label_162e50;
            case 0x162E70u: goto label_162e70;
            case 0x162EA8u: goto label_162ea8;
            case 0x162EC8u: goto label_162ec8;
            case 0x162EE8u: goto label_162ee8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162DF0u;
label_162df0:
    // 0x162df0: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x162df4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162df8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162dfc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x162e00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162e04: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162e08: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x162E08u;
    {
        const bool branch_taken_0x162e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E08u;
        // 0x162e0c: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e08) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162E10u;
label_162e10:
    // 0x162e10: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x162e14: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162e18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162e1c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x162e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162e24: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162e24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162e28: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x162E28u;
    {
        const bool branch_taken_0x162e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e28) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162E30u;
label_162e30:
    // 0x162e30: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x162e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x162e34: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162e38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162e3c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x162e40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162e44: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162e48: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x162E48u;
    {
        const bool branch_taken_0x162e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E48u;
        // 0x162e4c: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e48) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162E50u;
label_162e50:
    // 0x162e50: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x162e54: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162e58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162e5c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x162e60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162e64: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162e68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x162E68u;
    {
        const bool branch_taken_0x162e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E68u;
        // 0x162e6c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e68) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162E70u;
label_162e70:
    // 0x162e70: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x162e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x162e74: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x162e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x162e78: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x162e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x162e7c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x162e80: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x162e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x162e84: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x162e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x162e88: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x162e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x162e8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x162e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x162e90: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x162e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x162e94: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x162e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x162e98: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x162e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x162e9c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x162ea0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x162EA0u;
    {
        const bool branch_taken_0x162ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EA0u;
        // 0x162ea4: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ea0) {
            ctx->pc = 0x162EFCu;
            goto label_162efc;
        }
    }
    ctx->pc = 0x162EA8u;
label_162ea8:
    // 0x162ea8: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x162ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x162eac: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162eb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162eb4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x162eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162ebc: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162ec0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162EC0u;
    {
        const bool branch_taken_0x162ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EC0u;
        // 0x162ec4: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ec0) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162EC8u;
label_162ec8:
    // 0x162ec8: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x162ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x162ecc: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162ed0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162ed4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x162ed8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162edc: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162EE0u;
    {
        const bool branch_taken_0x162ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EE0u;
        // 0x162ee4: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ee0) {
            ctx->pc = 0x162EF4u;
            goto label_162ef4;
        }
    }
    ctx->pc = 0x162EE8u;
label_162ee8:
    // 0x162ee8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x162ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x162eec: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162ef0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_162ef4:
    // 0x162ef4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x162ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x162ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_162efc:
    // 0x162efc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x162efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_162f00:
    // 0x162f00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x162f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x162f04: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x162f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x162f08: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x162F08u;
    {
        const bool branch_taken_0x162f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F08u;
        // 0x162f0c: 0x24c30008  addiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f08) {
            ctx->pc = 0x162DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162da0;
        }
    }
    ctx->pc = 0x162F10u;
    // 0x162f10: 0x26847d70  addiu       $a0, $s4, 0x7D70
    ctx->pc = 0x162f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x162f14: 0x26257d80  addiu       $a1, $s1, 0x7D80
    ctx->pc = 0x162f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32128));
    // 0x162f18: 0x26467e80  addiu       $a2, $s2, 0x7E80
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32384));
    // 0x162f1c: 0xc0591ac  jal         func_1646B0
    ctx->pc = 0x162F1Cu;
    SET_GPR_U32(ctx, 31, 0x162F24u);
    ctx->pc = 0x162F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F1Cu;
    // 0x162f20: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646B0u, 0x162F1Cu, 0x162F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F24u;
label_162f24:
    // 0x162f24: 0x820300f0  lb          $v1, 0xF0($s0)
    ctx->pc = 0x162f24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162f28: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x162f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x162f2c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x162F2Cu;
    {
        const bool branch_taken_0x162f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F2Cu;
        // 0x162f30: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f2c) {
            ctx->pc = 0x16306Cu;
            goto label_16306c;
        }
    }
    ctx->pc = 0x162F34u;
    // 0x162f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162f38: 0x2442f4b0  addiu       $v0, $v0, -0xB50
    ctx->pc = 0x162f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
    // 0x162f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162f40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162f44: 0x800008  jr          $a0
    ctx->pc = 0x162F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162F4Cu: goto label_162f4c;
            case 0x162F78u: goto label_162f78;
            case 0x162FA8u: goto label_162fa8;
            case 0x162FF0u: goto label_162ff0;
            case 0x163030u: goto label_163030;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162F4Cu;
label_162f4c:
    // 0x162f4c: 0x26257d80  addiu       $a1, $s1, 0x7D80
    ctx->pc = 0x162f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32128));
    // 0x162f50: 0x26467e80  addiu       $a2, $s2, 0x7E80
    ctx->pc = 0x162f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32384));
    // 0x162f54: 0x26847d70  addiu       $a0, $s4, 0x7D70
    ctx->pc = 0x162f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x162f58: 0xc0591ac  jal         func_1646B0
    ctx->pc = 0x162F58u;
    SET_GPR_U32(ctx, 31, 0x162F60u);
    ctx->pc = 0x162F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F58u;
    // 0x162f5c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646B0u, 0x162F58u, 0x162F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F60u;
label_162f60:
    // 0x162f60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x162f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x162f64: 0x2442d9a8  addiu       $v0, $v0, -0x2658
    ctx->pc = 0x162f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957480));
    // 0x162f68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x162f68u;
    { uint32_t bits = FAST_READ32(0x3BD9ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f6c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x162f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x162f70: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x162F70u;
    {
        const bool branch_taken_0x162f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F70u;
        // 0x162f74: 0xc4410004  lwc1        $f1, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f70) {
            ctx->pc = 0x163068u;
            goto label_163068;
        }
    }
    ctx->pc = 0x162F78u;
label_162f78:
    // 0x162f78: 0x26847d70  addiu       $a0, $s4, 0x7D70
    ctx->pc = 0x162f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x162f7c: 0x26257d80  addiu       $a1, $s1, 0x7D80
    ctx->pc = 0x162f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32128));
    // 0x162f80: 0x26467e80  addiu       $a2, $s2, 0x7E80
    ctx->pc = 0x162f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32384));
    // 0x162f84: 0xc0591ac  jal         func_1646B0
    ctx->pc = 0x162F84u;
    SET_GPR_U32(ctx, 31, 0x162F8Cu);
    ctx->pc = 0x162F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F84u;
    // 0x162f88: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646B0u, 0x162F84u, 0x162F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F8Cu;
label_162f8c:
    // 0x162f8c: 0x820200f0  lb          $v0, 0xF0($s0)
    ctx->pc = 0x162f8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162f90: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x162f94: 0x2484d9a8  addiu       $a0, $a0, -0x2658
    ctx->pc = 0x162f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957480));
    // 0x162f98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x162f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162f9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162fa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162FA0u;
    {
        const bool branch_taken_0x162fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FA0u;
        // 0x162fa4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fa0) {
            ctx->pc = 0x162FD4u;
            goto label_162fd4;
        }
    }
    ctx->pc = 0x162FA8u;
label_162fa8:
    // 0x162fa8: 0x26847d70  addiu       $a0, $s4, 0x7D70
    ctx->pc = 0x162fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x162fac: 0x26257d80  addiu       $a1, $s1, 0x7D80
    ctx->pc = 0x162facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32128));
    // 0x162fb0: 0x26467e80  addiu       $a2, $s2, 0x7E80
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32384));
    // 0x162fb4: 0xc0591ac  jal         func_1646B0
    ctx->pc = 0x162FB4u;
    SET_GPR_U32(ctx, 31, 0x162FBCu);
    ctx->pc = 0x162FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162FB4u;
    // 0x162fb8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646B0u, 0x162FB4u, 0x162FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162FBCu;
label_162fbc:
    // 0x162fbc: 0x820200f0  lb          $v0, 0xF0($s0)
    ctx->pc = 0x162fbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x162fc0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x162fc4: 0x2484d9a8  addiu       $a0, $a0, -0x2658
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957480));
    // 0x162fc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x162fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162fd0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_162fd4:
    // 0x162fd4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x162fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162fdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x162fe0: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x162fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x162fe4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x162fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162fe8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x162FE8u;
    {
        const bool branch_taken_0x162fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FE8u;
        // 0x162fec: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fe8) {
            ctx->pc = 0x16306Cu;
            goto label_16306c;
        }
    }
    ctx->pc = 0x162FF0u;
label_162ff0:
    // 0x162ff0: 0x26847d70  addiu       $a0, $s4, 0x7D70
    ctx->pc = 0x162ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x162ff4: 0x26257d80  addiu       $a1, $s1, 0x7D80
    ctx->pc = 0x162ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32128));
    // 0x162ff8: 0x26467e80  addiu       $a2, $s2, 0x7E80
    ctx->pc = 0x162ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32384));
    // 0x162ffc: 0xc0591ac  jal         func_1646B0
    ctx->pc = 0x162FFCu;
    SET_GPR_U32(ctx, 31, 0x163004u);
    ctx->pc = 0x163000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162FFCu;
    // 0x163000: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646B0u, 0x162FFCu, 0x163004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163004u;
label_163004:
    // 0x163004: 0x820200f0  lb          $v0, 0xF0($s0)
    ctx->pc = 0x163004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x163008: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x163008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x16300c: 0x2484d9a8  addiu       $a0, $a0, -0x2658
    ctx->pc = 0x16300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957480));
    // 0x163010: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x163010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163018: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x163018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16301c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163024: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x163024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163028: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x163028u;
    {
        const bool branch_taken_0x163028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163028u;
        // 0x16302c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163028) {
            ctx->pc = 0x163060u;
            goto label_163060;
        }
    }
    ctx->pc = 0x163030u;
label_163030:
    // 0x163030: 0x26257d80  addiu       $a1, $s1, 0x7D80
    ctx->pc = 0x163030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32128));
    // 0x163034: 0x26467e80  addiu       $a2, $s2, 0x7E80
    ctx->pc = 0x163034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32384));
    // 0x163038: 0x26847d70  addiu       $a0, $s4, 0x7D70
    ctx->pc = 0x163038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x16303c: 0xc0591ac  jal         func_1646B0
    ctx->pc = 0x16303Cu;
    SET_GPR_U32(ctx, 31, 0x163044u);
    ctx->pc = 0x163040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16303Cu;
    // 0x163040: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646B0u, 0x16303Cu, 0x163044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163044u;
label_163044:
    // 0x163044: 0x820200f0  lb          $v0, 0xF0($s0)
    ctx->pc = 0x163044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x163048: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x163048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x16304c: 0x2463d9a8  addiu       $v1, $v1, -0x2658
    ctx->pc = 0x16304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957480));
    // 0x163050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16305c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163060:
    // 0x163060: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x163060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x163064: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x163064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_163068:
    // 0x163068: 0xe6010124  swc1        $f1, 0x124($s0)
    ctx->pc = 0x163068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_16306c:
    // 0x16306c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x16306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x163070: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x163070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163074: 0x26857d70  addiu       $a1, $s4, 0x7D70
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32112));
    // 0x163078: 0xc0591b0  jal         func_1646C0
    ctx->pc = 0x163078u;
    SET_GPR_U32(ctx, 31, 0x163080u);
    ctx->pc = 0x16307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163078u;
    // 0x16307c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1646C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1646C0u, 0x163078u, 0x163080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163080u;
label_163080:
    // 0x163080: 0x13b50006  beq         $sp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x163080u;
    {
        const bool branch_taken_0x163080 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 21));
        ctx->pc = 0x163084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163080u;
        // 0x163084: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163080) {
            ctx->pc = 0x16309Cu;
            goto label_16309c;
        }
    }
    ctx->pc = 0x163088u;
    // 0x163088: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x163088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16308c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x16308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163090: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x163090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x163094: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x163094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x163098: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x163098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16309c:
    // 0x16309c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x16309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1630a0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1630a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1630a4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1630a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1630a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1630ac: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x1630acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1630b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1630b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1630b4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1630b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1630b8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1630bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1630bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1630c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1630c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1630c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1630c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1630c8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1630c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1630cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1630ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1630d0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1630d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1630d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1630d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1630d8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1630d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1630dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1630DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1630E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630DCu;
        // 0x1630e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1630DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1630E4u;
    // 0x1630e4: 0x0  nop
    ctx->pc = 0x1630e4u;
    // NOP
    ctx->pc = 0x1630e8u;
}
