#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_00799F28
// Address: 0x799f28 - 0x79a080
void func_00799F28_0x799f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799F28_0x799f28");
#endif

    switch (ctx->pc) {
        case 0x799f70u: goto label_799f70;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fd8u: goto label_799fd8;
        case 0x799ff8u: goto label_799ff8;
        case 0x79a014u: goto label_79a014;
        case 0x79a050u: goto label_79a050;
        case 0x79a05cu: goto label_79a05c;
        default: break;
    }

    ctx->pc = 0x799f28u;

    // 0x799f28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799f2c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799f30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799f34: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799f38: 0x8044a5c0  lb          $a0, -0x5A40($v0)
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A5C0u));
    // 0x799f3c: 0x2446a5c0  addiu       $a2, $v0, -0x5A40
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
    // 0x799f40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799f44: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799f48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f58: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x799f58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x799f5c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799f60: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x799f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x799f64: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799F64u;
    {
        const bool branch_taken_0x799f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F64u;
        // 0x799f68: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f64) {
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F6Cu;
    // 0x799f6c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799f70:
    // 0x799f70: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799f74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799f78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799f7c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799f80: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799f84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F84u;
    {
        const bool branch_taken_0x799f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f84) {
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F8Cu;
    // 0x799f8c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f90: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F90u;
    {
        const bool branch_taken_0x799f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f90) {
            ctx->pc = 0x799F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F90u;
            // 0x799f94: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799F98u;
    SET_GPR_U32(ctx, 31, 0x799FA0u);
    ctx->pc = 0x799F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F98u;
    // 0x799f9c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799F98u, 0x799FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA0u;
label_799fa0:
    // 0x799fa0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fa8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799fac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799fb0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799fb4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799fbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fc0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799FC0u;
    SET_GPR_U32(ctx, 31, 0x799FC8u);
    ctx->pc = 0x799FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC0u;
    // 0x799fc4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799FC0u, 0x799FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x799FC8u;
    {
        const bool branch_taken_0x799fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC8u;
        // 0x799fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc8) {
            ctx->pc = 0x79A050u;
            goto label_79a050;
        }
    }
    ctx->pc = 0x799FD0u;
    // 0x799fd0: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x799FD0u;
    SET_GPR_U32(ctx, 31, 0x799FD8u);
    ctx->pc = 0x799FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD0u;
    // 0x799fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x799FD0u, 0x799FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799fdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799fe0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799fe4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x799fe8: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x799fec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x799ff0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799ff4: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x799ff4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_799ff8:
    // 0x799ff8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799ffc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x799ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x79a000: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a004: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a00c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A00Cu;
    SET_GPR_U32(ctx, 31, 0x79A014u);
    ctx->pc = 0x79A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A00Cu;
    // 0x79a010: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A00Cu, 0x79A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x79a014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a018: 0x0  nop
    ctx->pc = 0x79a018u;
    // NOP
    // 0x79a01c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x79A01Cu;
    {
        const bool branch_taken_0x79a01c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a01c) {
            ctx->pc = 0x79A030u;
            goto label_79a030;
        }
    }
    ctx->pc = 0x79A024u;
    // 0x79a024: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x79a028: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x79A028u;
    {
        const bool branch_taken_0x79a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a028) {
            ctx->pc = 0x799FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ff8;
        }
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x79a034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a03c: 0xae427a8c  sw          $v0, 0x7A8C($s2)
    ctx->pc = 0x79a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
    // 0x79a040: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x79a044: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x79a044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x79a048: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0xae0305a0  sw          $v1, 0x5A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a054: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A054u;
    SET_GPR_U32(ctx, 31, 0x79A05Cu);
    ctx->pc = 0x79A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A054u;
    // 0x79a058: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A054u, 0x79A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A05Cu;
label_79a05c:
    // 0x79a05c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a064: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a06c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x79a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a070: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x79a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a074: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x79a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a078: 0x3e00008  jr          $ra
    ctx->pc = 0x79A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A080u;
}
} // namespace gh_r205
