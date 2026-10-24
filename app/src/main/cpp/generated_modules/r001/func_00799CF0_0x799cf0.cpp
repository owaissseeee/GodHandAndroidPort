#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: func_00799CF0
// Address: 0x799cf0 - 0x799fc8
void func_00799CF0_0x799cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799CF0_0x799cf0");
#endif

    switch (ctx->pc) {
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd8u: goto label_799dd8;
        case 0x799de0u: goto label_799de0;
        case 0x799decu: goto label_799dec;
        case 0x799e00u: goto label_799e00;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e58u: goto label_799e58;
        case 0x799e88u: goto label_799e88;
        case 0x799eb0u: goto label_799eb0;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799eecu: goto label_799eec;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f04u: goto label_799f04;
        case 0x799f10u: goto label_799f10;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f48u: goto label_799f48;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f84u: goto label_799f84;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f98u: goto label_799f98;
        default: break;
    }

    ctx->pc = 0x799cf0u;

    // 0x799cf0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799cf4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x799cf8: 0x8c837a8c  lw          $v1, 0x7A8C($a0)
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799cfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799d00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x799d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799d0c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x799d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x799d10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d14: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x799d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x799d18: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799d18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799d1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799d20: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x799d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x799d24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799d28: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799d2c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799d30: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799d34: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799d38: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799d3c: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799d40: 0x240e000b  addiu       $t6, $zero, 0xB
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799d44: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799d48: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799d4c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799d50: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x799d54: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x799d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x799d58: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x799d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x799d5c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x799d5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d60: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x799d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x799d64: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x799d68: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x799d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x799d6c: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x799d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d70: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x799d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x799d74: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799d78: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x799d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x799d7c: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x799d80: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x799d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x799d84: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x799d88: 0xa3a50008  sb          $a1, 0x8($sp)
    ctx->pc = 0x799d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x799d8c: 0xa3a60018  sb          $a2, 0x18($sp)
    ctx->pc = 0x799d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x799d90: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x799d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x799d94: 0xa3a70020  sb          $a3, 0x20($sp)
    ctx->pc = 0x799d94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 7));
    // 0x799d98: 0xa3a80028  sb          $t0, 0x28($sp)
    ctx->pc = 0x799d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 8));
    // 0x799d9c: 0xa3a90030  sb          $t1, 0x30($sp)
    ctx->pc = 0x799d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 9));
    // 0x799da0: 0xa3aa0038  sb          $t2, 0x38($sp)
    ctx->pc = 0x799da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 10));
    // 0x799da4: 0xa3ab0040  sb          $t3, 0x40($sp)
    ctx->pc = 0x799da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 11));
    // 0x799da8: 0xa3ac0048  sb          $t4, 0x48($sp)
    ctx->pc = 0x799da8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 12));
    // 0x799dac: 0xa3ad0050  sb          $t5, 0x50($sp)
    ctx->pc = 0x799dacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 13));
    // 0x799db0: 0xa3ae0058  sb          $t6, 0x58($sp)
    ctx->pc = 0x799db0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 14));
    // 0x799db4: 0xa3af0060  sb          $t7, 0x60($sp)
    ctx->pc = 0x799db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 15));
    // 0x799db8: 0xa3b00068  sb          $s0, 0x68($sp)
    ctx->pc = 0x799db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 16));
    // 0x799dbc: 0xa3b10070  sb          $s1, 0x70($sp)
    ctx->pc = 0x799dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 17));
    // 0x799dc0: 0xac837a8c  sw          $v1, 0x7A8C($a0)
    ctx->pc = 0x799dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31372), GPR_U32(ctx, 3));
    // 0x799dc4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799dc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dcc: 0x0  nop
    ctx->pc = 0x799dccu;
    // NOP
label_799dd0:
    // 0x799dd0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dd4: 0x0  nop
    ctx->pc = 0x799dd4u;
    // NOP
label_799dd8:
    // 0x799dd8: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de4: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x799DE4u;
    SET_GPR_U32(ctx, 31, 0x799DECu);
    ctx->pc = 0x799DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE4u;
    // 0x799de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799DECu;
    {
        const bool branch_taken_0x799dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x799DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DECu;
        // 0x799df0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dec) {
            ctx->pc = 0x799E24u;
            goto label_799e24;
        }
    }
    ctx->pc = 0x799DF4u;
    // 0x799df4: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x799df8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799DF8u;
    {
        const bool branch_taken_0x799df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF8u;
        // 0x799dfc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df8) {
            ctx->pc = 0x799DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x8ec27a8c  lw          $v0, 0x7A8C($s6)
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
    // 0x799e04: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x799e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x799e08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799E08u;
    {
        const bool branch_taken_0x799e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E08u;
        // 0x799e0c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e08) {
            ctx->pc = 0x799E34u;
            goto label_799e34;
        }
    }
    ctx->pc = 0x799E10u;
    // 0x799e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e14: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E14u;
    SET_GPR_U32(ctx, 31, 0x799E1Cu);
    ctx->pc = 0x799E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E14u;
    // 0x799e18: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E14u, 0x799E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E1Cu;
label_799e1c:
    // 0x799e1c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x799E1Cu;
    {
        const bool branch_taken_0x799e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E1Cu;
        // 0x799e20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e1c) {
            ctx->pc = 0x799DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799E24u;
label_799e24:
    // 0x799e24: 0x8ea27a8c  lw          $v0, 0x7A8C($s5)
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
    // 0x799e28: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x799e2c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x799E2Cu;
    {
        const bool branch_taken_0x799e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E2Cu;
        // 0x799e30: 0xaea27a8c  sw          $v0, 0x7A8C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e2c) {
            ctx->pc = 0x799E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e00;
        }
    }
    ctx->pc = 0x799E34u;
label_799e34:
    // 0x799e34: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799e38: 0x82e3ae20  lb          $v1, -0x51E0($s7)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294946336)));
    // 0x799e3c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e44: 0x26e2ae20  addiu       $v0, $s7, -0x51E0
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946336));
    // 0x799e48: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799E48u;
    {
        const bool branch_taken_0x799e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E48u;
        // 0x799e4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e48) {
            ctx->pc = 0x799E80u;
            goto label_799e80;
        }
    }
    ctx->pc = 0x799E50u;
    // 0x799e50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e54: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799e58:
    // 0x799e58: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799e5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799e60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799e64: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799e68: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799e68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E6Cu;
    {
        const bool branch_taken_0x799e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e6c) {
            ctx->pc = 0x799E80u;
            goto label_799e80;
        }
    }
    ctx->pc = 0x799E74u;
    // 0x799e74: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799e78: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799E78u;
    {
        const bool branch_taken_0x799e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e78) {
            ctx->pc = 0x799E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E78u;
            // 0x799e7c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E80u;
label_799e80:
    // 0x799e80: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799E8Cu;
    {
        const bool branch_taken_0x799e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0x93a50068  lbu         $a1, 0x68($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e8c) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799E94u;
    // 0x799e94: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799e98: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799e9c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799ea0: 0x93a50068  lbu         $a1, 0x68($sp)
    ctx->pc = 0x799ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
label_799ea4:
    // 0x799ea4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799ea8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x93a50068  lbu         $a1, 0x68($sp)
    ctx->pc = 0x799eb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x799eb4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799eb8: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799EB8u;
    SET_GPR_U32(ctx, 31, 0x799EC0u);
    ctx->pc = 0x799EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB8u;
    // 0x799ebc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799EB8u, 0x799EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC0u;
label_799ec0:
    // 0x799ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799EC4u;
    {
        const bool branch_taken_0x799ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ec4) {
            ctx->pc = 0x799EECu;
            goto label_799eec;
        }
    }
    ctx->pc = 0x799ECCu;
    // 0x799ecc: 0xc09d87e  jal         func_2761F8
    ctx->pc = 0x799ECCu;
    SET_GPR_U32(ctx, 31, 0x799ED4u);
    ctx->pc = 0x799ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ECCu;
    // 0x799ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761F8u, 0x799ECCu, 0x799ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x799ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee4: 0xc09cf4a  jal         func_273D28
    ctx->pc = 0x799EE4u;
    SET_GPR_U32(ctx, 31, 0x799EECu);
    ctx->pc = 0x799EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE4u;
    // 0x799ee8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D28u, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799efc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799EFCu;
    SET_GPR_U32(ctx, 31, 0x799F04u);
    ctx->pc = 0x799F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EFCu;
    // 0x799f00: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799EFCu, 0x799F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F04u;
label_799f04:
    // 0x799f04: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799f08: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799f14: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799f20: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f24: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x24a5ae38  addiu       $a1, $a1, -0x51C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799f30: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x799f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f40: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799f4c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799f50: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f5c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x799f60: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x799f64: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799F64u;
    SET_GPR_U32(ctx, 31, 0x799F6Cu);
    ctx->pc = 0x799F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F64u;
    // 0x799f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799F64u, 0x799F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F6Cu;
label_799f6c:
    // 0x799f6c: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799f70: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799f74: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F74u;
    SET_GPR_U32(ctx, 31, 0x799F7Cu);
    ctx->pc = 0x799F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F74u;
    // 0x799f78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F74u, 0x799F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F7Cu;
label_799f7c:
    // 0x799f7c: 0xc0b129c  jal         func_2C4A70
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4A70u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799F84u;
    SET_GPR_U32(ctx, 31, 0x799F8Cu);
    ctx->pc = 0x799F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F84u;
    // 0x799f88: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799F84u, 0x799F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F8Cu;
label_799f8c:
    // 0x799f8c: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799f90: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x799f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799f9c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x799f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799fa0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x799fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799fa4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x799fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799fa8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x799fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799fac: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x799facu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799fb0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x799fb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799fb4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x799fb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799fb8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x799fb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799fbc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x799fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x799FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FC8u;
}
} // namespace gh_r001
