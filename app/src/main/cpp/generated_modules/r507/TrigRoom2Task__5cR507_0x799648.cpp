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
// Function: TrigRoom2Task__5cR507
// Address: 0x799648 - 0x7998f0
void TrigRoom2Task__5cR507_0x799648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrigRoom2Task__5cR507_0x799648");
#endif

    switch (ctx->pc) {
        case 0x7996a8u: goto label_7996a8;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996c4u: goto label_7996c4;
        case 0x799710u: goto label_799710;
        case 0x799730u: goto label_799730;
        case 0x799750u: goto label_799750;
        case 0x79976cu: goto label_79976c;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d8u: goto label_7997d8;
        case 0x799818u: goto label_799818;
        case 0x799828u: goto label_799828;
        case 0x799830u: goto label_799830;
        case 0x799838u: goto label_799838;
        case 0x799850u: goto label_799850;
        case 0x799858u: goto label_799858;
        case 0x799870u: goto label_799870;
        case 0x799878u: goto label_799878;
        case 0x799880u: goto label_799880;
        case 0x79988cu: goto label_79988c;
        case 0x799894u: goto label_799894;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998b4u: goto label_7998b4;
        default: break;
    }

    ctx->pc = 0x799648u;

    // 0x799648: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79964c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799650: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x799654: 0x8c52a680  lw          $s2, -0x5980($v0)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x79A680u));
    // 0x799658: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79965c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x799660: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799664: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799668: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79966c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799670: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799674: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79967c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x79967cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x799680: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x799680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x799684: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x799684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x799688: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79968c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799690: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x799694: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x799698: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79969c: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x7996a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A0u;
        // 0x7996a4: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x7996B4u;
            goto label_7996b4;
        }
    }
    ctx->pc = 0x7996A8u;
label_7996a8:
    // 0x7996a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7996b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7996bc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7996BCu;
    SET_GPR_U32(ctx, 31, 0x7996C4u);
    ctx->pc = 0x7996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996BCu;
    // 0x7996c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7996c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996cc: 0x1682fff6  bne         $s4, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7996CCu;
    {
        const bool branch_taken_0x7996cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996cc) {
            ctx->pc = 0x7996A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996a8;
        }
    }
    ctx->pc = 0x7996D4u;
    // 0x7996d4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x7996d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7996d8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x7996D8u;
    {
        const bool branch_taken_0x7996d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d8) {
            ctx->pc = 0x7996A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996a8;
        }
    }
    ctx->pc = 0x7996E0u;
    // 0x7996e0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x7996e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x7996e4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x7996E4u;
    {
        const bool branch_taken_0x7996e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e4) {
            ctx->pc = 0x7996A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996a8;
        }
    }
    ctx->pc = 0x7996ECu;
    // 0x7996ec: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x7996ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x7996f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x7996A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996a8;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7996fc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799700: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799704: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799708: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799708u;
    SET_GPR_U32(ctx, 31, 0x799710u);
    ctx->pc = 0x79970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799708u;
    // 0x79970c: 0x26d06ab0  addiu       $s0, $s6, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799708u, 0x799710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799710u;
label_799710:
    // 0x799710: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x799714: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799718: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79971c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799724: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799728: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799728u;
    SET_GPR_U32(ctx, 31, 0x799730u);
    ctx->pc = 0x79972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799728u;
    // 0x79972c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799728u, 0x799730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799730u;
label_799730:
    // 0x799730: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799738: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79973c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799740: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799744: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
    // 0x799748: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799748u;
    SET_GPR_U32(ctx, 31, 0x799750u);
    ctx->pc = 0x79974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799748u;
    // 0x79974c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799748u, 0x799750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799754: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799758: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x799758u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79975c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799760: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799760u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799764: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799764u;
    SET_GPR_U32(ctx, 31, 0x79976Cu);
    ctx->pc = 0x799768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799764u;
    // 0x799768: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799764u, 0x79976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0x3c01c251  lui         $at, 0xC251
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49745 << 16));
    // 0x799770: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x799774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79977c: 0x3c01c217  lui         $at, 0xC217
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49687 << 16));
    // 0x799780: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x799784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799788: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79978c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x79978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799794: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x799794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799798: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79979c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79979cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a0: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x7997a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x7997a4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x7997A4u;
    SET_GPR_U32(ctx, 31, 0x7997ACu);
    ctx->pc = 0x7997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A4u;
    // 0x7997a8: 0xe636000c  swc1        $f22, 0xC($s1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7997A4u, 0x7997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7997b0: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7997B0u;
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->pc = 0x7997B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0x27c5a540  addiu       $a1, $fp, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7997B0u, 0x7997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7997B8u;
    SET_GPR_U32(ctx, 31, 0x7997C0u);
    ctx->pc = 0x7997BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B8u;
    // 0x7997bc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7997B8u, 0x7997C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x7997C4u;
    SET_GPR_U32(ctx, 31, 0x7997CCu);
    ctx->pc = 0x7997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C4u;
    // 0x7997c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7997C4u, 0x7997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x7997ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7997d0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7997D0u;
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->pc = 0x7997D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D0u;
    // 0x7997d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7997D0u, 0x7997D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x7997dc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x7997e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7997e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7997e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7997e8: 0x3c01c204  lui         $at, 0xC204
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49668 << 16));
    // 0x7997ec: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x7997f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7997f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7997f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7997f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x7997f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7997fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7997fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799800: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x799800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799804: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799808: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79980c: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x79980cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x799810: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799810u;
    SET_GPR_U32(ctx, 31, 0x799818u);
    ctx->pc = 0x799814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799810u;
    // 0x799814: 0xe636000c  swc1        $f22, 0xC($s1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799810u, 0x799818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79981c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799820: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x2445a548  addiu       $a1, $v0, -0x5AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799828u;
    SET_GPR_U32(ctx, 31, 0x799830u);
    ctx->pc = 0x79982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799828u;
    // 0x79982c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799828u, 0x799830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799830u;
label_799830:
    // 0x799830: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799830u;
    SET_GPR_U32(ctx, 31, 0x799838u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799830u, 0x799838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79983c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799840: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799848: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79985c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79985cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799868: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799870u;
    SET_GPR_U32(ctx, 31, 0x799878u);
    ctx->pc = 0x799874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799870u;
    // 0x799874: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799870u, 0x799878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799878u;
    {
        const bool branch_taken_0x799878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0xa2540001  sb          $s4, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799878) {
            ctx->pc = 0x79988Cu;
            goto label_79988c;
        }
    }
    ctx->pc = 0x799880u;
label_799880:
    // 0x799880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799884: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79988Cu;
    SET_GPR_U32(ctx, 31, 0x799894u);
    ctx->pc = 0x799890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79988Cu;
    // 0x799890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79988Cu, 0x799894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799894u;
label_799894:
    // 0x799894: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799894) {
            ctx->pc = 0x799880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799880;
        }
    }
    ctx->pc = 0x79989Cu;
    // 0x79989c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79989Cu;
    SET_GPR_U32(ctx, 31, 0x7998A4u);
    ctx->pc = 0x7998A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79989Cu;
    // 0x7998a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79989Cu, 0x7998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7998A4u;
    {
        const bool branch_taken_0x7998a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a4) {
            ctx->pc = 0x799880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799880;
        }
    }
    ctx->pc = 0x7998ACu;
    // 0x7998ac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998ACu;
    SET_GPR_U32(ctx, 31, 0x7998B4u);
    ctx->pc = 0x7998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ACu;
    // 0x7998b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998ACu, 0x7998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x7998b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7998b8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7998b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7998bc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7998bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7998c0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7998c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7998c4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x7998c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7998c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x7998c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7998cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x7998ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7998d0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x7998d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7998d4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7998d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998dc: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x7998dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7998e0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x7998e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7998e4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x7998e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7998e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7998E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998F0u;
}
} // namespace gh_r507
