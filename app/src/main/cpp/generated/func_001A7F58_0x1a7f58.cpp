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

// Function: func_001A7F58
// Address: 0x1a7f58 - 0x1a80f0
void func_001A7F58_0x1a7f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A7F58_0x1a7f58");
#endif

    switch (ctx->pc) {
        case 0x1a7fc8u: goto label_1a7fc8;
        case 0x1a7ff0u: goto label_1a7ff0;
        case 0x1a8008u: goto label_1a8008;
        case 0x1a8014u: goto label_1a8014;
        case 0x1a801cu: goto label_1a801c;
        case 0x1a803cu: goto label_1a803c;
        case 0x1a804cu: goto label_1a804c;
        case 0x1a805cu: goto label_1a805c;
        case 0x1a806cu: goto label_1a806c;
        default: break;
    }

    ctx->pc = 0x1a7f58u;

    // 0x1a7f58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a7f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a7f5c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a7f60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a7f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a7f6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a7f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1a7f70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1a7f74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a7f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a7f78: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1a7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1a7f7c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1a7f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1a7f80: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1a7f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1a7f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7f88: 0x92020612  lbu         $v0, 0x612($s0)
    ctx->pc = 0x1a7f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1554)));
    // 0x1a7f8c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1A7F8Cu;
    {
        const bool branch_taken_0x1a7f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F8Cu;
        // 0x1a7f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f8c) {
            ctx->pc = 0x1A80B8u;
            goto label_1a80b8;
        }
    }
    ctx->pc = 0x1A7F94u;
    // 0x1a7f94: 0x92020615  lbu         $v0, 0x615($s0)
    ctx->pc = 0x1a7f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1557)));
    // 0x1a7f98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7F98u;
    {
        const bool branch_taken_0x1a7f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F98u;
        // 0x1a7f9c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f98) {
            ctx->pc = 0x1A7FA8u;
            goto label_1a7fa8;
        }
    }
    ctx->pc = 0x1A7FA0u;
    // 0x1a7fa0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A7FA0u;
    {
        const bool branch_taken_0x1a7fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FA0u;
        // 0x1a7fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fa0) {
            ctx->pc = 0x1A80B8u;
            goto label_1a80b8;
        }
    }
    ctx->pc = 0x1A7FA8u;
label_1a7fa8:
    // 0x1a7fa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a7fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7fac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a7fb0: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1a7fb4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7fb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7fbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a7fbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fc0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1A7FC0u;
    SET_GPR_U32(ctx, 31, 0x1A7FC8u);
    ctx->pc = 0x1A7FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FC0u;
    // 0x1a7fc4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1A7FC0u, 0x1A7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FC8u;
label_1a7fc8:
    // 0x1a7fc8: 0x92140611  lbu         $s4, 0x611($s0)
    ctx->pc = 0x1a7fc8u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1553)));
    // 0x1a7fcc: 0x921e0615  lbu         $fp, 0x615($s0)
    ctx->pc = 0x1a7fccu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1557)));
    // 0x1a7fd0: 0x13c00037  beqz        $fp, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A7FD0u;
    {
        const bool branch_taken_0x1a7fd0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FD0u;
        // 0x1a7fd4: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fd0) {
            ctx->pc = 0x1A80B0u;
            goto label_1a80b0;
        }
    }
    ctx->pc = 0x1A7FD8u;
    // 0x1a7fd8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1a7fdc: 0x26170600  addiu       $s7, $s0, 0x600
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a7fe0: 0x24556ab0  addiu       $s5, $v0, 0x6AB0
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    // 0x1a7fe4: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a7fe8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7fec: 0x2f19021  addu        $s2, $s7, $s1
    ctx->pc = 0x1a7fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_1a7ff0:
    // 0x1a7ff0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1a7ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a7ff4: 0x10560027  beq         $v0, $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A7FF4u;
    {
        const bool branch_taken_0x1a7ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1A7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FF4u;
        // 0x1a7ff8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ff4) {
            ctx->pc = 0x1A8094u;
            goto label_1a8094;
        }
    }
    ctx->pc = 0x1A7FFCu;
    // 0x1a7ffc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1a7ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a8000: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1A8000u;
    SET_GPR_U32(ctx, 31, 0x1A8008u);
    ctx->pc = 0x1A8004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8000u;
    // 0x1a8004: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1A8000u, 0x1A8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8008u;
label_1a8008:
    // 0x1a8008: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1a8008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1a800c: 0xc0a566c  jal         func_2959B0
    ctx->pc = 0x1A800Cu;
    SET_GPR_U32(ctx, 31, 0x1A8014u);
    ctx->pc = 0x1A8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A800Cu;
    // 0x1a8010: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x1A800Cu, 0x1A8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8014u;
label_1a8014:
    // 0x1a8014: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1A8014u;
    SET_GPR_U32(ctx, 31, 0x1A801Cu);
    ctx->pc = 0x1A8018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8014u;
    // 0x1a8018: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1A8014u, 0x1A801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A801Cu;
label_1a801c:
    // 0x1a801c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1a801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1a8020: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a8020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8024: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a8024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a8028: 0xc600061c  lwc1        $f0, 0x61C($s0)
    ctx->pc = 0x1a8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a802c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8030: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8034: 0xc0a581c  jal         func_296070
    ctx->pc = 0x1A8034u;
    SET_GPR_U32(ctx, 31, 0x1A803Cu);
    ctx->pc = 0x1A8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8034u;
    // 0x1a8038: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x1A8034u, 0x1A803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A803Cu;
label_1a803c:
    // 0x1a803c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1a803cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1a8040: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a8040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a8044: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x1A8044u;
    SET_GPR_U32(ctx, 31, 0x1A804Cu);
    ctx->pc = 0x1A8048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8044u;
    // 0x1a8048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x1A8044u, 0x1A804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A804Cu;
label_1a804c:
    // 0x1a804c: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x1a804cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8054: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x1A8054u;
    SET_GPR_U32(ctx, 31, 0x1A805Cu);
    ctx->pc = 0x1A8058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8054u;
    // 0x1a8058: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x1A8054u, 0x1A805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A805Cu;
label_1a805c:
    // 0x1a805c: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x1a805cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8064: 0xc0a5516  jal         func_295458
    ctx->pc = 0x1A8064u;
    SET_GPR_U32(ctx, 31, 0x1A806Cu);
    ctx->pc = 0x1A8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8064u;
    // 0x1a8068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x1A8064u, 0x1A806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A806Cu;
label_1a806c:
    // 0x1a806c: 0xa2560000  sb          $s6, 0x0($s2)
    ctx->pc = 0x1a806cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 22));
    // 0x1a8070: 0xa2110611  sb          $s1, 0x611($s0)
    ctx->pc = 0x1a8070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1553), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a8074: 0x92020615  lbu         $v0, 0x615($s0)
    ctx->pc = 0x1a8074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1557)));
    // 0x1a8078: 0x92030612  lbu         $v1, 0x612($s0)
    ctx->pc = 0x1a8078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1554)));
    // 0x1a807c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a8080: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a8084: 0xa2020615  sb          $v0, 0x615($s0)
    ctx->pc = 0x1a8084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1557), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a8088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a8088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a808c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A808Cu;
    {
        const bool branch_taken_0x1a808c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A808Cu;
        // 0x1a8090: 0xa2030612  sb          $v1, 0x612($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1554), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a808c) {
            ctx->pc = 0x1A80B0u;
            goto label_1a80b0;
        }
    }
    ctx->pc = 0x1A8094u;
label_1a8094:
    // 0x1a8094: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a8098: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x1a8098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a809c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1a809cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x1a80a0: 0x12910004  beq         $s4, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A80A0u;
    {
        const bool branch_taken_0x1a80a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A0u;
        // 0x1a80a4: 0x92020615  lbu         $v0, 0x615($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1557)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80a0) {
            ctx->pc = 0x1A80B4u;
            goto label_1a80b4;
        }
    }
    ctx->pc = 0x1A80A8u;
    // 0x1a80a8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1A80A8u;
    {
        const bool branch_taken_0x1a80a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A8u;
        // 0x1a80ac: 0x2f19021  addu        $s2, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80a8) {
            ctx->pc = 0x1A7FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7ff0;
        }
    }
    ctx->pc = 0x1A80B0u;
label_1a80b0:
    // 0x1a80b0: 0x92020615  lbu         $v0, 0x615($s0)
    ctx->pc = 0x1a80b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1557)));
label_1a80b4:
    // 0x1a80b4: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1a80b8:
    // 0x1a80b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a80b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a80bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a80bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a80c0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a80c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a80c4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a80c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a80c8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a80c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a80cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a80ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a80d0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1a80d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a80d4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1a80d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a80d8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1a80d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a80dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a80dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a80e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A80E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E0u;
        // 0x1a80e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A80E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A80E8u;
    // 0x1a80e8: 0xa0820614  sb          $v0, 0x614($a0)
    ctx->pc = 0x1a80e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1556), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a80ec: 0x0  nop
    ctx->pc = 0x1a80ecu;
    // NOP
    ctx->pc = 0x1a80f0u;
}
