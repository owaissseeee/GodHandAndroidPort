#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: func_00799408
// Address: 0x799408 - 0x799568
void func_00799408_0x799408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799408_0x799408");
#endif

    switch (ctx->pc) {
        case 0x79944cu: goto label_79944c;
        case 0x79945cu: goto label_79945c;
        case 0x799468u: goto label_799468;
        case 0x799478u: goto label_799478;
        case 0x799488u: goto label_799488;
        case 0x799490u: goto label_799490;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994ccu: goto label_7994cc;
        case 0x799534u: goto label_799534;
        case 0x799540u: goto label_799540;
        default: break;
    }

    ctx->pc = 0x799408u;

    // 0x799408: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79940c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799410: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x799410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x799414: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x799414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x799418: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79941c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x799420: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x799420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x799424: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799428: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x799428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79942c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x799430: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799434: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799438: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79943c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79943Cu;
    {
        const bool branch_taken_0x79943c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79943c) {
            ctx->pc = 0x799468u;
            goto label_799468;
        }
    }
    ctx->pc = 0x799444u;
    // 0x799444: 0xc1e64c0  jal         func_799300
    ctx->pc = 0x799444u;
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->pc = 0x799300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799300u, 0x799444u, 0x79944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79944Cu;
label_79944c:
    // 0x79944c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799450: 0x26659568  addiu       $a1, $s3, -0x6A98
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940008));
    // 0x799454: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799460: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x79946c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x799488u;
            goto label_799488;
        }
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79947c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799480: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799490u;
    {
        const bool branch_taken_0x799490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0x8ea38658  lw          $v1, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799490) {
            ctx->pc = 0x799478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799478;
        }
    }
    ctx->pc = 0x799498u;
    // 0x799498: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79949c: 0x26446af0  addiu       $a0, $s2, 0x6AF0
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27376));
    // 0x7994a0: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x7994a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7994a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7994ac: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0xc1e64c0  jal         func_799300
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x799300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799300u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7994c0: 0x26659568  addiu       $a1, $s3, -0x6A98
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940008));
    // 0x7994c4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7994C4u;
    SET_GPR_U32(ctx, 31, 0x7994CCu);
    ctx->pc = 0x7994C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C4u;
    // 0x7994c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7994C4u, 0x7994CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7994d0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x7994d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7994d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d8: 0x3c0142b2  lui         $at, 0x42B2
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17074 << 16));
    // 0x7994dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x7994e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7994e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7994e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x7994ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7994ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7994f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f4: 0x3c01c216  lui         $at, 0xC216
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49686 << 16));
    // 0x7994f8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x7994fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799500: 0x3c01c03c  lui         $at, 0xC03C
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49212 << 16));
    // 0x799504: 0x3421c65a  ori         $at, $at, 0xC65A
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50778);
    // 0x799508: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79950c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x79950cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799510: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799514: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799518: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x799518u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79951c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79951cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799520: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x799520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799524: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x799528: 0x8e84264c  lw          $a0, 0x264C($s4)
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9804)));
    // 0x79952c: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0xe604000c  swc1        $f4, 0xC($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799538: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x799540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799544: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x799544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799548: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x799548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79954c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79954cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799550: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x799550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799554: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x799554u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79955c: 0x3e00008  jr          $ra
    ctx->pc = 0x79955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79955Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799564u;
    // 0x799564: 0x0  nop
    ctx->pc = 0x799564u;
    // NOP
    ctx->pc = 0x799568u;
}
} // namespace gh_r303
