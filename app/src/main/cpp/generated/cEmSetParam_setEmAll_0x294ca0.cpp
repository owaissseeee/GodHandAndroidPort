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

// Function: cEmSetParam_setEmAll
// Address: 0x294ca0 - 0x294f70
void cEmSetParam_setEmAll_0x294ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_setEmAll_0x294ca0");
#endif

    switch (ctx->pc) {
        case 0x294d00u: goto label_294d00;
        case 0x294d08u: goto label_294d08;
        case 0x294d30u: goto label_294d30;
        case 0x294d50u: goto label_294d50;
        case 0x294d6cu: goto label_294d6c;
        case 0x294d98u: goto label_294d98;
        case 0x294dacu: goto label_294dac;
        case 0x294dc8u: goto label_294dc8;
        case 0x294df0u: goto label_294df0;
        case 0x294df8u: goto label_294df8;
        case 0x294efcu: goto label_294efc;
        case 0x294f3cu: goto label_294f3c;
        default: break;
    }

    ctx->pc = 0x294ca0u;

    // 0x294ca0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x294ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x294ca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294ca8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x294ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x294cac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x294cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x294cb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x294cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cb4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x294cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x294cb8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x294cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x294cbc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x294cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x294cc0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x294cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x294cc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x294cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x294cc8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x294cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x294ccc: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x294cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x294cd0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294CD0u;
    {
        const bool branch_taken_0x294cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x294cd0) {
            ctx->pc = 0x294CE0u;
            goto label_294ce0;
        }
    }
    ctx->pc = 0x294CD8u;
    // 0x294cd8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x294CD8u;
    {
        const bool branch_taken_0x294cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CD8u;
        // 0x294cdc: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cd8) {
            ctx->pc = 0x294F48u;
            goto label_294f48;
        }
    }
    ctx->pc = 0x294CE0u;
label_294ce0:
    // 0x294ce0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x294ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x294ce4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x294ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x294ce8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x294ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cec: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x294cecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x294cf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x294cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294cf4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x294CF4u;
    {
        const bool branch_taken_0x294cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CF4u;
        // 0x294cf8: 0x3c15005f  lui         $s5, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cf4) {
            ctx->pc = 0x294D8Cu;
            goto label_294d8c;
        }
    }
    ctx->pc = 0x294CFCu;
    // 0x294cfc: 0x0  nop
    ctx->pc = 0x294cfcu;
    // NOP
label_294d00:
    // 0x294d00: 0xc0afbc2  jal         func_2BEF08
    ctx->pc = 0x294D00u;
    SET_GPR_U32(ctx, 31, 0x294D08u);
    ctx->pc = 0x294D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D00u;
    // 0x294d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF08u, 0x294D00u, 0x294D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D08u;
label_294d08:
    // 0x294d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d0c: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x294d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x294d10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x294d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x294d14: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x294D14u;
    {
        const bool branch_taken_0x294d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D14u;
        // 0x294d18: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d14) {
            ctx->pc = 0x294D88u;
            goto label_294d88;
        }
    }
    ctx->pc = 0x294D1Cu;
    // 0x294d1c: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x294d1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x294d20: 0x245164e0  addiu       $s1, $v0, 0x64E0
    ctx->pc = 0x294d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25824));
    // 0x294d24: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x294d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x294d28: 0xc07fa6e  jal         func_1FE9B8
    ctx->pc = 0x294D28u;
    SET_GPR_U32(ctx, 31, 0x294D30u);
    ctx->pc = 0x294D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D28u;
    // 0x294d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE9B8u, 0x294D28u, 0x294D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D30u;
label_294d30:
    // 0x294d30: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x294D30u;
    {
        const bool branch_taken_0x294d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D30u;
        // 0x294d34: 0x92050012  lbu         $a1, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d30) {
            ctx->pc = 0x294D54u;
            goto label_294d54;
        }
    }
    ctx->pc = 0x294D38u;
    // 0x294d38: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x294d38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x294d3c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x294d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x294d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d44: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x294d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x294d48: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x294D48u;
    SET_GPR_U32(ctx, 31, 0x294D50u);
    ctx->pc = 0x294D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D48u;
    // 0x294d4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x294D48u, 0x294D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D50u;
label_294d50:
    // 0x294d50: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x294d50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_294d54:
    // 0x294d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d58: 0x92060011  lbu         $a2, 0x11($s0)
    ctx->pc = 0x294d58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x294d5c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x294d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x294d60: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x294d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x294d64: 0xc07faa8  jal         func_1FEAA0
    ctx->pc = 0x294D64u;
    SET_GPR_U32(ctx, 31, 0x294D6Cu);
    ctx->pc = 0x294D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D64u;
    // 0x294d68: 0x34c60200  ori         $a2, $a2, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAA0u, 0x294D64u, 0x294D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D6Cu;
label_294d6c:
    // 0x294d6c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x294d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x294d70: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x294d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x294d74: 0x284302a0  slti        $v1, $v0, 0x2A0
    ctx->pc = 0x294d74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x294d78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294D78u;
    {
        const bool branch_taken_0x294d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D78u;
        // 0x294d7c: 0x3843023b  xori        $v1, $v0, 0x23B (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)571);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d78) {
            ctx->pc = 0x294D88u;
            goto label_294d88;
        }
    }
    ctx->pc = 0x294D80u;
    // 0x294d80: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x294d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x294d84: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x294d84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_294d88:
    // 0x294d88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294d8c:
    // 0x294d8c: 0x26b08658  addiu       $s0, $s5, -0x79A8
    ctx->pc = 0x294d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
    // 0x294d90: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x294D90u;
    SET_GPR_U32(ctx, 31, 0x294D98u);
    ctx->pc = 0x294D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D90u;
    // 0x294d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x294D90u, 0x294D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D98u;
label_294d98:
    // 0x294d98: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x294d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x294d9c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x294D9Cu;
    {
        const bool branch_taken_0x294d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D9Cu;
        // 0x294da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d9c) {
            ctx->pc = 0x294D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294d00;
        }
    }
    ctx->pc = 0x294DA4u;
    // 0x294da4: 0xc0a5618  jal         func_295860
    ctx->pc = 0x294DA4u;
    SET_GPR_U32(ctx, 31, 0x294DACu);
    ctx->pc = 0x294DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DA4u;
    // 0x294da8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295860u, 0x294DA4u, 0x294DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DACu;
label_294dac:
    // 0x294dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294db0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294DB0u;
    {
        const bool branch_taken_0x294db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x294db0) {
            ctx->pc = 0x294DC0u;
            goto label_294dc0;
        }
    }
    ctx->pc = 0x294DB8u;
    // 0x294db8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x294DB8u;
    {
        const bool branch_taken_0x294db8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DB8u;
        // 0x294dbc: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294db8) {
            ctx->pc = 0x294DCCu;
            goto label_294dcc;
        }
    }
    ctx->pc = 0x294DC0u;
label_294dc0:
    // 0x294dc0: 0xc0a53dc  jal         func_294F70
    ctx->pc = 0x294DC0u;
    SET_GPR_U32(ctx, 31, 0x294DC8u);
    ctx->pc = 0x294DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DC0u;
    // 0x294dc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F70u, 0x294DC0u, 0x294DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DC8u;
label_294dc8:
    // 0x294dc8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x294dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_294dcc:
    // 0x294dcc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x294dd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x294dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x294dd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x294dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x294dd8: 0x24538658  addiu       $s3, $v0, -0x79A8
    ctx->pc = 0x294dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x294ddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x294ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294de0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x294de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x294de4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x294DE4u;
    {
        const bool branch_taken_0x294de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DE4u;
        // 0x294de8: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294de4) {
            ctx->pc = 0x294F34u;
            goto label_294f34;
        }
    }
    ctx->pc = 0x294DECu;
    // 0x294dec: 0x0  nop
    ctx->pc = 0x294decu;
    // NOP
label_294df0:
    // 0x294df0: 0xc0afbc2  jal         func_2BEF08
    ctx->pc = 0x294DF0u;
    SET_GPR_U32(ctx, 31, 0x294DF8u);
    ctx->pc = 0x294DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DF0u;
    // 0x294df4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF08u, 0x294DF0u, 0x294DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DF8u;
label_294df8:
    // 0x294df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294dfc: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x294dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x294e00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x294e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x294e04: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x294E04u;
    {
        const bool branch_taken_0x294e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294e04) {
            ctx->pc = 0x294E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294E04u;
            // 0x294e08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F34u;
            goto label_294f34;
        }
    }
    ctx->pc = 0x294E0Cu;
    // 0x294e0c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x294e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x294e10: 0x4420048  bltzl       $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x294E10u;
    {
        const bool branch_taken_0x294e10 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x294e10) {
            ctx->pc = 0x294E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294E10u;
            // 0x294e14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F34u;
            goto label_294f34;
        }
    }
    ctx->pc = 0x294E18u;
    // 0x294e18: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x294e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x294e1c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x294e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x294e20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x294e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x294e24: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x294e24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294e28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x294e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x294e2c: 0x0  nop
    ctx->pc = 0x294e2cu;
    // NOP
    // 0x294e30: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x294e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x294e34: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x294e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x294e38: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x294e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x294e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x294e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294e40: 0x0  nop
    ctx->pc = 0x294e40u;
    // NOP
    // 0x294e44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x294e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294e48: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x294e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x294e4c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x294e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x294e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294e54: 0x0  nop
    ctx->pc = 0x294e54u;
    // NOP
    // 0x294e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294e5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x294e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x294e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294e64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x294e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x294e68: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x294e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x294e6c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x294e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x294e70: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x294e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x294e74: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x294e74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x294e78: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x294e78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294e7c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x294e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x294e80: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x294e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294e84: 0x268464f0  addiu       $a0, $s4, 0x64F0
    ctx->pc = 0x294e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    // 0x294e88: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x294e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294e8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x294e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e90: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x294e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x294e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x294e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e98: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x294e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x294e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ea0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x294ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x294ea4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x294ea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x294ea8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x294ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x294eac: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x294eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x294eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294eb4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x294eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x294eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294ebc: 0x0  nop
    ctx->pc = 0x294ebcu;
    // NOP
    // 0x294ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294ec4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x294ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x294ec8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x294ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x294ecc: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x294eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x294ed0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x294ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x294ed4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x294ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x294ed8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x294ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x294edc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x294edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x294ee0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x294ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x294ee4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x294ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x294ee8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x294ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x294eec: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x294eecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x294ef0: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x294ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x294ef4: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x294EF4u;
    SET_GPR_U32(ctx, 31, 0x294EFCu);
    ctx->pc = 0x294EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EF4u;
    // 0x294ef8: 0xa3a20031  sb          $v0, 0x31($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x294EF4u, 0x294EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EFCu;
label_294efc:
    // 0x294efc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x294efcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f00: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x294F00u;
    {
        const bool branch_taken_0x294f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f00) {
            ctx->pc = 0x294F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F00u;
            // 0x294f04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F34u;
            goto label_294f34;
        }
    }
    ctx->pc = 0x294F08u;
    // 0x294f08: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x294f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x294f0c: 0x58800009  blezl       $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x294F0Cu;
    {
        const bool branch_taken_0x294f0c = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x294f0c) {
            ctx->pc = 0x294F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F0Cu;
            // 0x294f10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F34u;
            goto label_294f34;
        }
    }
    ctx->pc = 0x294F14u;
    // 0x294f14: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x294f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
    // 0x294f18: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x294f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x294f1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294F1Cu;
    {
        const bool branch_taken_0x294f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F1Cu;
        // 0x294f20: 0x94650548  lhu         $a1, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f1c) {
            ctx->pc = 0x294F2Cu;
            goto label_294f2c;
        }
    }
    ctx->pc = 0x294F24u;
    // 0x294f24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294F24u;
    {
        const bool branch_taken_0x294f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F24u;
        // 0x294f28: 0xa465054a  sh          $a1, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f24) {
            ctx->pc = 0x294F30u;
            goto label_294f30;
        }
    }
    ctx->pc = 0x294F2Cu;
label_294f2c:
    // 0x294f2c: 0xa464054a  sh          $a0, 0x54A($v1)
    ctx->pc = 0x294f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
label_294f30:
    // 0x294f30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294f34:
    // 0x294f34: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x294F34u;
    SET_GPR_U32(ctx, 31, 0x294F3Cu);
    ctx->pc = 0x294F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294F34u;
    // 0x294f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x294F34u, 0x294F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F3Cu;
label_294f3c:
    // 0x294f3c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x294f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x294f40: 0x5440ffab  bnel        $v0, $zero, . + 4 + (-0x55 << 2)
    ctx->pc = 0x294F40u;
    {
        const bool branch_taken_0x294f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294f40) {
            ctx->pc = 0x294F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294F40u;
            // 0x294f44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294df0;
        }
    }
    ctx->pc = 0x294F48u;
label_294f48:
    // 0x294f48: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x294f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x294f4c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x294f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x294f50: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x294f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x294f54: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x294f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294f58: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x294f58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294f5c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x294f5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294f60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x294f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294f64: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x294f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294f68: 0x3e00008  jr          $ra
    ctx->pc = 0x294F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F68u;
        // 0x294f6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F70u;
}
