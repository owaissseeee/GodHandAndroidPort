#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_00799C78
// Address: 0x799c78 - 0x799f38
void func_00799C78_0x799c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C78_0x799c78");
#endif

    switch (ctx->pc) {
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cf4u: goto label_799cf4;
        case 0x799d08u: goto label_799d08;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d48u: goto label_799d48;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d80u: goto label_799d80;
        case 0x799da8u: goto label_799da8;
        case 0x799db4u: goto label_799db4;
        case 0x799dc4u: goto label_799dc4;
        case 0x799ddcu: goto label_799ddc;
        case 0x799e00u: goto label_799e00;
        case 0x799e34u: goto label_799e34;
        case 0x799e50u: goto label_799e50;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e88u: goto label_799e88;
        case 0x799ea4u: goto label_799ea4;
        case 0x799eacu: goto label_799eac;
        case 0x799ec4u: goto label_799ec4;
        case 0x799eccu: goto label_799ecc;
        case 0x799ee4u: goto label_799ee4;
        case 0x799eecu: goto label_799eec;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f00u: goto label_799f00;
        default: break;
    }

    ctx->pc = 0x799c78u;

    // 0x799c78: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x799c7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799c84: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x799c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x799c88: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x799c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x799c8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c90: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x799c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x799c94: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799c98: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x799c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x799c9c: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x799ca0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x799ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x799ca4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799ca8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x799ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x799cac: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x799cb0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x799cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x799cb4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x799cb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x799cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x799cbc: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799cc0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x799cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x799cc4: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799cc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x799cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x799ccc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x799cccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x799cd0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799cd4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799cd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cdc: 0x0  nop
    ctx->pc = 0x799cdcu;
    // NOP
label_799ce0:
    // 0x799ce0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799CE0u;
    SET_GPR_U32(ctx, 31, 0x799CE8u);
    ctx->pc = 0x799CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE0u;
    // 0x799ce4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799CE0u, 0x799CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE8u;
label_799ce8:
    // 0x799ce8: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x799ce8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x799cec: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799CECu;
    SET_GPR_U32(ctx, 31, 0x799CF4u);
    ctx->pc = 0x799CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CECu;
    // 0x799cf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799CECu, 0x799CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF4u;
label_799cf4:
    // 0x799cf4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799cf8: 0x26648658  addiu       $a0, $s3, -0x79A8
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
    // 0x799cfc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x799cfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x799d00: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D00u;
    SET_GPR_U32(ctx, 31, 0x799D08u);
    ctx->pc = 0x799D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D00u;
    // 0x799d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D00u, 0x799D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D08u;
label_799d08:
    // 0x799d08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d0c: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x799d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x799d10: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x799D10u;
    {
        const bool branch_taken_0x799d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D10u;
        // 0x799d14: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d10) {
            ctx->pc = 0x799D50u;
            goto label_799d50;
        }
    }
    ctx->pc = 0x799D18u;
    // 0x799d18: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x799d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799d1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799D1Cu;
    {
        const bool branch_taken_0x799d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D1Cu;
        // 0x799d20: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d1c) {
            ctx->pc = 0x799D50u;
            goto label_799d50;
        }
    }
    ctx->pc = 0x799D24u;
    // 0x799d24: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799D24u;
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->pc = 0x799D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799D24u, 0x799D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D2Cu;
label_799d2c:
    // 0x799d2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d30: 0x16110007  bne         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D50u;
            goto label_799d50;
        }
    }
    ctx->pc = 0x799D38u;
    // 0x799d38: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
    // 0x799d3c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799d40: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799D40u;
    SET_GPR_U32(ctx, 31, 0x799D48u);
    ctx->pc = 0x799D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D40u;
    // 0x799d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799D40u, 0x799D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799D48u;
    {
        const bool branch_taken_0x799d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D48u;
        // 0x799d4c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d48) {
            ctx->pc = 0x799D64u;
            goto label_799d64;
        }
    }
    ctx->pc = 0x799D50u;
label_799d50:
    // 0x799d50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d54: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799D54u;
    SET_GPR_U32(ctx, 31, 0x799D5Cu);
    ctx->pc = 0x799D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D54u;
    // 0x799d58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799D54u, 0x799D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D5Cu;
label_799d5c:
    // 0x799d5c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x799D5Cu;
    {
        const bool branch_taken_0x799d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D5Cu;
        // 0x799d60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d5c) {
            ctx->pc = 0x799CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799D64u;
label_799d64:
    // 0x799d64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d6c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799d70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799D78u;
    SET_GPR_U32(ctx, 31, 0x799D80u);
    ctx->pc = 0x799D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D78u;
    // 0x799d7c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799D78u, 0x799D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D80u;
label_799d80:
    // 0x799d80: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x799d84: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799d88: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x799d8c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799d90: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799d94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799d98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799d9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799da0: 0xc1e6634  jal         func_7998D0
    ctx->pc = 0x799DA0u;
    SET_GPR_U32(ctx, 31, 0x799DA8u);
    ctx->pc = 0x799DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA0u;
    // 0x799da4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7998D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7998D0u, 0x799DA0u, 0x799DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA8u;
label_799da8:
    // 0x799da8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799dac: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799DACu;
    SET_GPR_U32(ctx, 31, 0x799DB4u);
    ctx->pc = 0x799DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DACu;
    // 0x799db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799DACu, 0x799DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB4u;
label_799db4:
    // 0x799db4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799db8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799dbc: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799DBCu;
    SET_GPR_U32(ctx, 31, 0x799DC4u);
    ctx->pc = 0x799DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DBCu;
    // 0x799dc0: 0x24a5bf48  addiu       $a1, $a1, -0x40B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799DBCu, 0x799DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC4u;
label_799dc4:
    // 0x799dc4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799dc8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799dcc: 0x24a599b8  addiu       $a1, $a1, -0x6648
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941112));
    // 0x799dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dd4: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799DD4u;
    SET_GPR_U32(ctx, 31, 0x799DDCu);
    ctx->pc = 0x799DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD4u;
    // 0x799dd8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799de0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799de4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799de4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dec: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799df0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799df4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799df8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799DF8u;
    SET_GPR_U32(ctx, 31, 0x799E00u);
    ctx->pc = 0x799DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF8u;
    // 0x799dfc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799DF8u, 0x799E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799e04: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x799e08: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x799e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x799e0c: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x799e10: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799e14: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x799e18: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799e18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e20: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x799e20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x799e24: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799e28: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x799e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x799e2c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E2Cu;
    SET_GPR_U32(ctx, 31, 0x799E34u);
    ctx->pc = 0x799E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E2Cu;
    // 0x799e30: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E2Cu, 0x799E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E34u;
label_799e34:
    // 0x799e34: 0x8ea3c000  lw          $v1, -0x4000($s5)
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950912)));
    // 0x799e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799e48: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E48u;
    SET_GPR_U32(ctx, 31, 0x799E50u);
    ctx->pc = 0x799E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E48u;
    // 0x799e4c: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E48u, 0x799E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E50u;
label_799e50:
    // 0x799e50: 0x8ea3c000  lw          $v1, -0x4000($s5)
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950912)));
    // 0x799e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799e64: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E64u;
    SET_GPR_U32(ctx, 31, 0x799E6Cu);
    ctx->pc = 0x799E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E64u;
    // 0x799e68: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E64u, 0x799E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E6Cu;
label_799e6c:
    // 0x799e6c: 0x8ea3c000  lw          $v1, -0x4000($s5)
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950912)));
    // 0x799e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799e80: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x93a50050  lbu         $a1, 0x50($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x8ea3c000  lw          $v1, -0x4000($s5)
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950912)));
    // 0x799e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x799e9c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E9Cu;
    SET_GPR_U32(ctx, 31, 0x799EA4u);
    ctx->pc = 0x799EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E9Cu;
    // 0x799ea0: 0x93a50060  lbu         $a1, 0x60($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E9Cu, 0x799EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799EA4u;
    SET_GPR_U32(ctx, 31, 0x799EACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799EA4u, 0x799EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EACu;
label_799eac:
    // 0x799eac: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799eb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x799eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799eb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799eb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ebc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799EC4u;
    SET_GPR_U32(ctx, 31, 0x799ECCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799EC4u, 0x799ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799ed0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799ed4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799edc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799EDCu;
    SET_GPR_U32(ctx, 31, 0x799EE4u);
    ctx->pc = 0x799EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EDCu;
    // 0x799ee0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799EDCu, 0x799EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE4u;
label_799ee4:
    // 0x799ee4: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799EE4u;
    SET_GPR_U32(ctx, 31, 0x799EECu);
    ctx->pc = 0x799EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE4u;
    // 0x799ee8: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799ef8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799EF8u;
    SET_GPR_U32(ctx, 31, 0x799F00u);
    ctx->pc = 0x799EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF8u;
    // 0x799efc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799EF8u, 0x799F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x799f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799f04: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x799f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799f08: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x799f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799f0c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x799f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799f10: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x799f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799f14: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x799f14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799f18: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x799f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799f1c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x799f1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799f20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x799f20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799f24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x799f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799f28: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x799f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x799F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F34u;
    // 0x799f34: 0x0  nop
    ctx->pc = 0x799f34u;
    // NOP
    ctx->pc = 0x799f38u;
}
} // namespace gh_r102
