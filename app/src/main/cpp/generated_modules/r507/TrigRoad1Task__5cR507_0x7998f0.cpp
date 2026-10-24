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
// Function: TrigRoad1Task__5cR507
// Address: 0x7998f0 - 0x799b40
void TrigRoad1Task__5cR507_0x7998f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrigRoad1Task__5cR507_0x7998f0");
#endif

    switch (ctx->pc) {
        case 0x799950u: goto label_799950;
        case 0x79995cu: goto label_79995c;
        case 0x79996cu: goto label_79996c;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999dcu: goto label_7999dc;
        case 0x799a00u: goto label_799a00;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a40u: goto label_799a40;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a90u: goto label_799a90;
        case 0x799a98u: goto label_799a98;
        case 0x799aa8u: goto label_799aa8;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ac8u: goto label_799ac8;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ae8u: goto label_799ae8;
        case 0x799af0u: goto label_799af0;
        case 0x799b00u: goto label_799b00;
        default: break;
    }

    ctx->pc = 0x7998f0u;

    // 0x7998f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x7998f4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7998f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7998f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7998fc: 0x8c52a680  lw          $s2, -0x5980($v0)
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x79A680u));
    // 0x799900: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x799904: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x799908: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x799908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x79990c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x799910: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x799910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x799914: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x799914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x799918: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x799918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x79991c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799920: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x799920u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x799924: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x799924u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x799928: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x799928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x79992c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x79992cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x799930: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799934: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799938: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x79993c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799940: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799944: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799944u;
    {
        const bool branch_taken_0x799944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799944u;
        // 0x799948: 0x3c17007a  lui         $s7, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799944) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x79994Cu;
    // 0x79994c: 0x0  nop
    ctx->pc = 0x79994cu;
    // NOP
label_799950:
    // 0x799950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799954: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799954u;
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->pc = 0x799958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799960: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799964: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799964u;
    SET_GPR_U32(ctx, 31, 0x79996Cu);
    ctx->pc = 0x799968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799964u;
    // 0x799968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799964u, 0x79996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79996Cu;
label_79996c:
    // 0x79996c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799974: 0x1682fff6  bne         $s4, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x799978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799974u;
        // 0x799978: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799974) {
            ctx->pc = 0x799950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799950;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x79997cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799980: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x799980u;
    {
        const bool branch_taken_0x799980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799980u;
        // 0x799984: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799980) {
            ctx->pc = 0x799950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799950;
        }
    }
    ctx->pc = 0x799988u;
    // 0x799988: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x799988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79998c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x79998Cu;
    {
        const bool branch_taken_0x79998c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79998c) {
            ctx->pc = 0x799950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799950;
        }
    }
    ctx->pc = 0x799994u;
    // 0x799994: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x799994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x799998: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799998u;
    {
        const bool branch_taken_0x799998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799998u;
        // 0x79999c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799998) {
            ctx->pc = 0x799950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799950;
        }
    }
    ctx->pc = 0x7999A0u;
    // 0x7999a0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7999a4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x7999a8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x7999ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7999acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7999b0: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x26d06ab0  addiu       $s0, $s6, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x7999bc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x7999c0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x7999c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x7999c4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7999c8: 0x3c01c189  lui         $at, 0xC189
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49545 << 16));
    // 0x7999cc: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x7999d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7999d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x7999d4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7999D4u;
    SET_GPR_U32(ctx, 31, 0x7999DCu);
    ctx->pc = 0x7999D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D4u;
    // 0x7999d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7999D4u, 0x7999DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999DCu;
label_7999dc:
    // 0x7999dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7999e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7999e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x7999e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7999e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7999ec: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7999ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x7999f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7999f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7999f8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799a00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a04: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x3c01c116  lui         $at, 0xC116
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49430 << 16));
    // 0x799a10: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x799a14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799a18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799a1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x799a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a30: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x799a30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x799a34: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x799a34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799a38: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799A38u;
    SET_GPR_U32(ctx, 31, 0x799A40u);
    ctx->pc = 0x799A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A38u;
    // 0x799a3c: 0xe635000c  swc1        $f21, 0xC($s1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A38u, 0x799A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A40u;
label_799a40:
    // 0x799a40: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799a44: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799A44u;
    SET_GPR_U32(ctx, 31, 0x799A4Cu);
    ctx->pc = 0x799A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A44u;
    // 0x799a48: 0x26e5a550  addiu       $a1, $s7, -0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799A44u, 0x799A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A4Cu;
label_799a4c:
    // 0x799a4c: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799a50: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799a54: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799A54u;
    SET_GPR_U32(ctx, 31, 0x799A5Cu);
    ctx->pc = 0x799A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A54u;
    // 0x799a58: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A54u, 0x799A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A5Cu;
label_799a5c:
    // 0x799a5c: 0x3c01c133  lui         $at, 0xC133
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49459 << 16));
    // 0x799a60: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x799a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x799a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799a6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799a70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799a74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x799a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a80: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x799a80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x799a84: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x799a84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x799a88: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799A88u;
    SET_GPR_U32(ctx, 31, 0x799A90u);
    ctx->pc = 0x799A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A88u;
    // 0x799a8c: 0xe635000c  swc1        $f21, 0xC($s1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A88u, 0x799A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A90u;
label_799a90:
    // 0x799a90: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799a9c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x799aa0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799ab4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ab8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799abc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ac0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799AC8u;
    SET_GPR_U32(ctx, 31, 0x799AD0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799AC8u, 0x799AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799ad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799ad8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799adc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ae0: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799AE0u;
    SET_GPR_U32(ctx, 31, 0x799AE8u);
    ctx->pc = 0x799AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE0u;
    // 0x799ae4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799AE0u, 0x799AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0xa2540002  sb          $s4, 0x2($s2)
    ctx->pc = 0x799af0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x799af4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799af8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AF8u;
    SET_GPR_U32(ctx, 31, 0x799B00u);
    ctx->pc = 0x799AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF8u;
    // 0x799afc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AF8u, 0x799B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B00u;
label_799b00:
    // 0x799b00: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799b04: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799b08: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799b0c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799b10: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799b10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799b14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799b14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b18: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x799b18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799b1c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799b1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b24: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x799b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x799b28: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x799b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799b2c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x799b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799b30: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x799b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799b34: 0x3e00008  jr          $ra
    ctx->pc = 0x799B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B34u;
        // 0x799b38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B3Cu;
    // 0x799b3c: 0x0  nop
    ctx->pc = 0x799b3cu;
    // NOP
    ctx->pc = 0x799b40u;
}
} // namespace gh_r507
