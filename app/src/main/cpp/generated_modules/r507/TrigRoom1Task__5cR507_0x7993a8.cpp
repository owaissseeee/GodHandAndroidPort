#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: TrigRoom1Task__5cR507
// Address: 0x7993a8 - 0x799648
void TrigRoom1Task__5cR507_0x7993a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrigRoom1Task__5cR507_0x7993a8");
#endif

    switch (ctx->pc) {
        case 0x799408u: goto label_799408;
        case 0x799414u: goto label_799414;
        case 0x799424u: goto label_799424;
        case 0x799470u: goto label_799470;
        case 0x799490u: goto label_799490;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994c4u: goto label_7994c4;
        case 0x799504u: goto label_799504;
        case 0x799510u: goto label_799510;
        case 0x799518u: goto label_799518;
        case 0x799524u: goto label_799524;
        case 0x799530u: goto label_799530;
        case 0x799570u: goto label_799570;
        case 0x799580u: goto label_799580;
        case 0x799588u: goto label_799588;
        case 0x799590u: goto label_799590;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995fcu: goto label_7995fc;
        case 0x79960cu: goto label_79960c;
        default: break;
    }

    ctx->pc = 0x7993a8u;

    // 0x7993a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x7993ac: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7993b0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7993b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x7993b4: 0x8c52a680  lw          $s2, -0x5980($v0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x79A680u));
    // 0x7993b8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7993b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7993bc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7993bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7993c0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x7993c4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7993c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x7993c8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7993c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x7993cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x7993d0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x7993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x7993d4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x7993d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x7993d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7993d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7993dc: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x7993dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x7993e0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x7993e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x7993e4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x7993e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x7993e8: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x7993ec: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7993f0: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x7993f4: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x7993f8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7993fc: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x799400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799400u;
    {
        const bool branch_taken_0x799400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799400) {
            ctx->pc = 0x799414u;
            goto label_799414;
        }
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79940c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79941c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79941Cu;
    SET_GPR_U32(ctx, 31, 0x799424u);
    ctx->pc = 0x799420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79941Cu;
    // 0x799420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79942c: 0x1682fff6  bne         $s4, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79942Cu;
    {
        const bool branch_taken_0x79942c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79942c) {
            ctx->pc = 0x799408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799408;
        }
    }
    ctx->pc = 0x799434u;
    // 0x799434: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x799434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799438: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x799408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799408;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x799440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x799444: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799444u;
    {
        const bool branch_taken_0x799444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799444u;
        // 0x799448: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799444) {
            ctx->pc = 0x799408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799408;
        }
    }
    ctx->pc = 0x79944Cu;
    // 0x79944c: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x79944cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x799450: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799450u;
    {
        const bool branch_taken_0x799450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799450) {
            ctx->pc = 0x799408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799408;
        }
    }
    ctx->pc = 0x799458u;
    // 0x799458: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79945c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799460: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799464: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799468: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x26d06ab0  addiu       $s0, $s6, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x799474: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x799478: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79947c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799484: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799488: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799494: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799498: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79949c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x7994a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994a4: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
    // 0x7994a8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7994A8u;
    SET_GPR_U32(ctx, 31, 0x7994B0u);
    ctx->pc = 0x7994ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A8u;
    // 0x7994ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7994A8u, 0x7994B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7994b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0xa3b40010  sb          $s4, 0x10($sp)
    ctx->pc = 0x7994b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 20));
    // 0x7994bc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7994BCu;
    SET_GPR_U32(ctx, 31, 0x7994C4u);
    ctx->pc = 0x7994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994BCu;
    // 0x7994c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7994BCu, 0x7994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x3c01c1a4  lui         $at, 0xC1A4
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49572 << 16));
    // 0x7994c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7994cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7994d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d4: 0x3c01c06b  lui         $at, 0xC06B
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49259 << 16));
    // 0x7994d8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x7994dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7994dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7994e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7994e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x7994e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7994e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x7994ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x7994f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7994f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7994f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f8: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x7994f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x7994fc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0xe636000c  swc1        $f22, 0xC($s1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799508: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x27c5a530  addiu       $a1, $fp, -0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799510u;
    SET_GPR_U32(ctx, 31, 0x799518u);
    ctx->pc = 0x799514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799510u;
    // 0x799514: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799510u, 0x799518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79951c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799524u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799528: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x3c01c14f  lui         $at, 0xC14F
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49487 << 16));
    // 0x799534: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79953c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799540: 0x3c01c127  lui         $at, 0xC127
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49447 << 16));
    // 0x799544: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79954c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799550: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x799550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799554: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799558: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x799558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x79955c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799560: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799564: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x799564u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x799568: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0xe636000c  swc1        $f22, 0xC($s1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799574: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799578: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799578u;
    // 0x79957c: 0x2445a538  addiu       $a1, $v0, -0x5AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799580u;
    SET_GPR_U32(ctx, 31, 0x799588u);
    ctx->pc = 0x799584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799580u;
    // 0x799584: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799580u, 0x799588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799588u;
    SET_GPR_U32(ctx, 31, 0x799590u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799588u, 0x799590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799598: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79959c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7995A8u;
    SET_GPR_U32(ctx, 31, 0x7995B0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7995A8u, 0x7995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x7995b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7995b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7995b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7995b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7995c0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7995C0u;
    SET_GPR_U32(ctx, 31, 0x7995C8u);
    ctx->pc = 0x7995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C0u;
    // 0x7995c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7995C0u, 0x7995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7995C8u;
    SET_GPR_U32(ctx, 31, 0x7995D0u);
    ctx->pc = 0x7995CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C8u;
    // 0x7995cc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7995C8u, 0x7995D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7995D0u;
    {
        const bool branch_taken_0x7995d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D0u;
        // 0x7995d4: 0xa2540000  sb          $s4, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d0) {
            ctx->pc = 0x7995E4u;
            goto label_7995e4;
        }
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995dc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995DCu;
    SET_GPR_U32(ctx, 31, 0x7995E4u);
    ctx->pc = 0x7995E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995DCu;
    // 0x7995e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995DCu, 0x7995E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E4u;
label_7995e4:
    // 0x7995e4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7995E4u;
    SET_GPR_U32(ctx, 31, 0x7995ECu);
    ctx->pc = 0x7995E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E4u;
    // 0x7995e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995E4u, 0x7995ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ECu;
label_7995ec:
    // 0x7995ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7995ECu;
    {
        const bool branch_taken_0x7995ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ec) {
            ctx->pc = 0x7995D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995d8;
        }
    }
    ctx->pc = 0x7995F4u;
    // 0x7995f4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7995F4u;
    SET_GPR_U32(ctx, 31, 0x7995FCu);
    ctx->pc = 0x7995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F4u;
    // 0x7995f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7995FCu;
    {
        const bool branch_taken_0x7995fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995fc) {
            ctx->pc = 0x7995D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995d8;
        }
    }
    ctx->pc = 0x799604u;
    // 0x799604: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79960cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799610: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799614: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799618: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x799618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79961c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79961cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799620: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799624: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799628: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x799628u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79962c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79962cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799634: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x799634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799638: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x799638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79963c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x79963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799640: 0x3e00008  jr          $ra
    ctx->pc = 0x799640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799648u;
}
} // namespace gh_r507
