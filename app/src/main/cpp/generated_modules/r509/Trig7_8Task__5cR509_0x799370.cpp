#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r509_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r509
{
// Function: Trig7_8Task__5cR509
// Address: 0x799370 - 0x7995f0
void Trig7_8Task__5cR509_0x799370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trig7_8Task__5cR509_0x799370");
#endif

    switch (ctx->pc) {
        case 0x7993d0u: goto label_7993d0;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993ecu: goto label_7993ec;
        case 0x799400u: goto label_799400;
        case 0x79940cu: goto label_79940c;
        case 0x799428u: goto label_799428;
        case 0x799434u: goto label_799434;
        case 0x799440u: goto label_799440;
        case 0x799448u: goto label_799448;
        case 0x799450u: goto label_799450;
        case 0x799458u: goto label_799458;
        case 0x799464u: goto label_799464;
        case 0x799474u: goto label_799474;
        case 0x7994ecu: goto label_7994ec;
        case 0x79951cu: goto label_79951c;
        case 0x799528u: goto label_799528;
        case 0x799534u: goto label_799534;
        case 0x799544u: goto label_799544;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b8u: goto label_7995b8;
        default: break;
    }

    ctx->pc = 0x799370u;

    // 0x799370: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x799374: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799378: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x79937c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x799380: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799384: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x799388: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79938c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x79938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x799390: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799394: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x799398: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79939c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x79939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x7993a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7993a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7993a4: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x7993a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x7993a8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x7993a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x7993ac: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x7993acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x7993b0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x7993b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x7993b4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7993b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993bc: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7993BCu;
    {
        const bool branch_taken_0x7993bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993BCu;
        // 0x7993c0: 0x3c150060  lui         $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993bc) {
            ctx->pc = 0x799450u;
            goto label_799450;
        }
    }
    ctx->pc = 0x7993C4u;
    // 0x7993c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7993C4u;
    {
        const bool branch_taken_0x7993c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c4) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993CCu;
    // 0x7993cc: 0x0  nop
    ctx->pc = 0x7993ccu;
    // NOP
label_7993d0:
    // 0x7993d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x7993e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7993e4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993f0: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7993F0u;
    {
        const bool branch_taken_0x7993f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f0) {
            ctx->pc = 0x7993D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993F8u;
    // 0x7993f8: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7993F8u;
    SET_GPR_U32(ctx, 31, 0x799400u);
    ctx->pc = 0x7993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F8u;
    // 0x7993fc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799404: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799410: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799418: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79941c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79941cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799420: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79942c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x799430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799438: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x268599a8  addiu       $a1, $s4, -0x6658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799440u;
    SET_GPR_U32(ctx, 31, 0x799448u);
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799440u, 0x799448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799450u;
    {
        const bool branch_taken_0x799450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799450) {
            ctx->pc = 0x799464u;
            goto label_799464;
        }
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79945c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x799468: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79946c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x1454fff8  bne         $v0, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799474u;
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799474) {
            ctx->pc = 0x799458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799458;
        }
    }
    ctx->pc = 0x79947Cu;
    // 0x79947c: 0x3c01c119  lui         $at, 0xC119
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49433 << 16));
    // 0x799480: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x799484: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799488: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79948c: 0x3c01409b  lui         $at, 0x409B
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16539 << 16));
    // 0x799490: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x799494: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799498: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79949c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7994a0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x7994a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x7994a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994a8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7994a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7994ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b0: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x7994b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x7994b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x7994b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7994bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c0: 0x3c014262  lui         $at, 0x4262
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16994 << 16));
    // 0x7994c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7994c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994cc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x7994d0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x7994d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7994d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7994d8: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x7994d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x7994dc: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x7994dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x7994e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7994e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7994e4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x7994ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7994f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f4: 0x3c01425a  lui         $at, 0x425A
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16986 << 16));
    // 0x7994f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7994fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799500: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x799500u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x799504: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799508: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x799508u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79950c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799510: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x799510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x799514: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x26a4ea60  addiu       $a0, $s5, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799538u;
            goto label_799538;
        }
    }
    ctx->pc = 0x799524u;
    // 0x799524: 0x0  nop
    ctx->pc = 0x799524u;
    // NOP
label_799528:
    // 0x799528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79952c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
label_799538:
    // 0x799538: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79953c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x1454fff8  bne         $v0, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799544u;
    {
        const bool branch_taken_0x799544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x799548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799544u;
        // 0x799548: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799544) {
            ctx->pc = 0x799528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799528;
        }
    }
    ctx->pc = 0x79954Cu;
    // 0x79954c: 0x3c01c1ca  lui         $at, 0xC1CA
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49610 << 16));
    // 0x799550: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799554: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799558: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79955c: 0x3c01409b  lui         $at, 0x409B
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16539 << 16));
    // 0x799560: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x799564: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79956c: 0x3c01425e  lui         $at, 0x425E
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16990 << 16));
    // 0x799570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79957c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79957cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799584: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79958c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x79958cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799590: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799594: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799598: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79959c: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x79959cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x7995a0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x7995a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x7995a4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7995A4u;
    SET_GPR_U32(ctx, 31, 0x7995ACu);
    ctx->pc = 0x7995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A4u;
    // 0x7995a8: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7995A4u, 0x7995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7995b0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x7995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B0u;
    // 0x7995b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x7995b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7995bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x7995bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7995c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x7995c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7995c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x7995c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7995c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x7995c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7995cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x7995ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7995d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7995d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995d4: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x7995d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x7995d8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x7995d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7995dc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x7995dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7995e0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x7995e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7995e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7995E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E4u;
        // 0x7995e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995ECu;
    // 0x7995ec: 0x0  nop
    ctx->pc = 0x7995ecu;
    // NOP
    ctx->pc = 0x7995f0u;
}
} // namespace gh_r509
