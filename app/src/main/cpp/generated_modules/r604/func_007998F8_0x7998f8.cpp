#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_007998F8
// Address: 0x7998f8 - 0x799ba8
void func_007998F8_0x7998f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998F8_0x7998f8");
#endif

    switch (ctx->pc) {
        case 0x799938u: goto label_799938;
        case 0x799944u: goto label_799944;
        case 0x799954u: goto label_799954;
        case 0x79995cu: goto label_79995c;
        case 0x799980u: goto label_799980;
        case 0x79998cu: goto label_79998c;
        case 0x79999cu: goto label_79999c;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999ecu: goto label_7999ec;
        case 0x799a30u: goto label_799a30;
        case 0x799a58u: goto label_799a58;
        case 0x799a64u: goto label_799a64;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a74u: goto label_799a74;
        case 0x799a88u: goto label_799a88;
        case 0x799a98u: goto label_799a98;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad8u: goto label_799ad8;
        case 0x799ae8u: goto label_799ae8;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b60u: goto label_799b60;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b78u: goto label_799b78;
        default: break;
    }

    ctx->pc = 0x7998f8u;

    // 0x7998f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7998fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799900: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x799904: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799908: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79990c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799910: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x799914: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x799914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x799918: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x799918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x79991c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x799920: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x799920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x799924: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x799924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x799928: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x799928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x79992c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799930: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799930u;
    SET_GPR_U32(ctx, 31, 0x799938u);
    ctx->pc = 0x799934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799930u;
    // 0x799934: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79993c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79993Cu;
    SET_GPR_U32(ctx, 31, 0x799944u);
    ctx->pc = 0x799940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79993Cu;
    // 0x799940: 0x24050a23  addiu       $a1, $zero, 0xA23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2595));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799944u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799948: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79994c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79994Cu;
    SET_GPR_U32(ctx, 31, 0x799954u);
    ctx->pc = 0x799950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79994Cu;
    // 0x799950: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79994Cu, 0x799954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0xc09d050  jal         func_274140
    ctx->pc = 0x799954u;
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->pc = 0x799958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274140u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799960: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x799964: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x799968: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79996c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799970: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
    // 0x799974: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799974u;
        // 0x799978: 0x3c15007a  lui         $s5, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799974) {
            ctx->pc = 0x79998Cu;
            goto label_79998c;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x0  nop
    ctx->pc = 0x79997cu;
    // NOP
label_799980:
    // 0x799980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799984: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x26e4ea60  addiu       $a0, $s7, -0x15A0
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
    // 0x799990: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799994: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799994u;
    SET_GPR_U32(ctx, 31, 0x79999Cu);
    ctx->pc = 0x799998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799994u;
    // 0x799998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799994u, 0x79999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79999Cu;
label_79999c:
    // 0x79999c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79999Cu;
    {
        const bool branch_taken_0x79999c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79999Cu;
        // 0x7999a0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79999c) {
            ctx->pc = 0x799980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799980;
        }
    }
    ctx->pc = 0x7999A4u;
    // 0x7999a4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7999A4u;
    SET_GPR_U32(ctx, 31, 0x7999ACu);
    ctx->pc = 0x7999A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A4u;
    // 0x7999a8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7999A4u, 0x7999ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ACu;
label_7999ac:
    // 0x7999ac: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7999b0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x27c4ee00  addiu       $a0, $fp, -0x1200
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962688));
    // 0x7999bc: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7999BCu;
    SET_GPR_U32(ctx, 31, 0x7999C4u);
    ctx->pc = 0x7999C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999BCu;
    // 0x7999c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7999BCu, 0x7999C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7999d4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7999D4u;
    SET_GPR_U32(ctx, 31, 0x7999DCu);
    ctx->pc = 0x7999D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D4u;
    // 0x7999d8: 0x2605b478  addiu       $a1, $s0, -0x4B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7999D4u, 0x7999DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999DCu;
label_7999dc:
    // 0x7999dc: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7999e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7999e4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999E4u;
    SET_GPR_U32(ctx, 31, 0x7999ECu);
    ctx->pc = 0x7999E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E4u;
    // 0x7999e8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999E4u, 0x7999ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ECu;
label_7999ec:
    // 0x7999ec: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x7999f0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x7999f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x7999f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7999f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7999f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7999f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999fc: 0x3c01c0c6  lui         $at, 0xC0C6
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49350 << 16));
    // 0x799a00: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799a08: 0x3c01c328  lui         $at, 0xC328
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49960 << 16));
    // 0x799a0c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799a10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799a1c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x799a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799a20: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x799a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x799a24: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x799a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x799a28: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799A28u;
    SET_GPR_U32(ctx, 31, 0x799A30u);
    ctx->pc = 0x799A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A28u;
    // 0x799a2c: 0xe642000c  swc1        $f2, 0xC($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799A28u, 0x799A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A30u;
label_799a30:
    // 0x799a30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799A30u;
    {
        const bool branch_taken_0x799a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A30u;
        // 0x799a34: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a30) {
            ctx->pc = 0x799A5Cu;
            goto label_799a5c;
        }
    }
    ctx->pc = 0x799A38u;
    // 0x799a38: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799a3c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799a40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799a44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a50: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799A50u;
    SET_GPR_U32(ctx, 31, 0x799A58u);
    ctx->pc = 0x799A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A50u;
    // 0x799a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799A50u, 0x799A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A58u;
label_799a58:
    // 0x799a58: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799a5c:
    // 0x799a5c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799A5Cu;
    SET_GPR_U32(ctx, 31, 0x799A64u);
    ctx->pc = 0x799A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A5Cu;
    // 0x799a60: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799A5Cu, 0x799A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799A64u;
    SET_GPR_U32(ctx, 31, 0x799A6Cu);
    ctx->pc = 0x799A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A64u;
    // 0x799a68: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799A64u, 0x799A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A6Cu;
label_799a6c:
    // 0x799a6c: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x799A6Cu;
    SET_GPR_U32(ctx, 31, 0x799A74u);
    ctx->pc = 0x799A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A6Cu;
    // 0x799a70: 0x26c49b70  addiu       $a0, $s6, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x799A6Cu, 0x799A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A74u;
label_799a74:
    // 0x799a74: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x799a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x799A7Cu;
    {
        const bool branch_taken_0x799a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A7Cu;
        // 0x799a80: 0x2474b000  addiu       $s4, $v1, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a7c) {
            ctx->pc = 0x799AD0u;
            goto label_799ad0;
        }
    }
    ctx->pc = 0x799A84u;
    // 0x799a84: 0x0  nop
    ctx->pc = 0x799a84u;
    // NOP
label_799a88:
    // 0x799a88: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x799A88u;
    {
        const bool branch_taken_0x799a88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A88u;
        // 0x799a8c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a88) {
            ctx->pc = 0x799AC4u;
            goto label_799ac4;
        }
    }
    ctx->pc = 0x799A90u;
    // 0x799a90: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x26c49b70  addiu       $a0, $s6, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a9c: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x799a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x799aa0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799AA0u;
    {
        const bool branch_taken_0x799aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799aa0) {
            ctx->pc = 0x799AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AA0u;
            // 0x799aa4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AB8u;
            goto label_799ab8;
        }
    }
    ctx->pc = 0x799AA8u;
    // 0x799aa8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x799aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x799aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799AACu;
    {
        const bool branch_taken_0x799aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AACu;
        // 0x799ab0: 0x203102b  sltu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aac) {
            ctx->pc = 0x799ABCu;
            goto label_799abc;
        }
    }
    ctx->pc = 0x799AB4u;
    // 0x799ab4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ab8:
    // 0x799ab8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_799abc:
    // 0x799abc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x799abcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x799ac0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799ac4:
    // 0x799ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ac8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799AC8u;
    SET_GPR_U32(ctx, 31, 0x799AD0u);
    ctx->pc = 0x799ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC8u;
    // 0x799acc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799AC8u, 0x799AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x799AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD0u;
    // 0x799ad4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799AD8u;
    {
        const bool branch_taken_0x799ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ad8) {
            ctx->pc = 0x799A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a88;
        }
    }
    ctx->pc = 0x799AE0u;
    // 0x799ae0: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799AE0u;
    SET_GPR_U32(ctx, 31, 0x799AE8u);
    ctx->pc = 0x799AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE0u;
    // 0x799ae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799AE0u, 0x799AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799ae8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799aec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799af0: 0x8ea4b600  lw          $a0, -0x4A00($s5)
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948352)));
    // 0x799af4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799af8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799afc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799b00: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x799b04: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799B04u;
    SET_GPR_U32(ctx, 31, 0x799B0Cu);
    ctx->pc = 0x799B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B04u;
    // 0x799b08: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799B04u, 0x799B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799b10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b18: 0x8ea4b600  lw          $a0, -0x4A00($s5)
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948352)));
    // 0x799b1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799b20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799b24: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799B24u;
    SET_GPR_U32(ctx, 31, 0x799B2Cu);
    ctx->pc = 0x799B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B24u;
    // 0x799b28: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799B24u, 0x799B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B2Cu;
label_799b2c:
    // 0x799b2c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x8ea3b600  lw          $v1, -0x4A00($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B3Cu;
            goto label_799b3c;
        }
    }
    ctx->pc = 0x799B34u;
    // 0x799b34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799B34u;
    {
        const bool branch_taken_0x799b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B34u;
        // 0x799b38: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b34) {
            ctx->pc = 0x799B40u;
            goto label_799b40;
        }
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_799b40:
    // 0x799b40: 0xa4620062  sh          $v0, 0x62($v1)
    ctx->pc = 0x799b40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x799b44: 0x8ea5b600  lw          $a1, -0x4A00($s5)
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948352)));
    // 0x799b48: 0x26e4ea60  addiu       $a0, $s7, -0x15A0
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
    // 0x799b4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b58: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x27c4ee00  addiu       $a0, $fp, -0x1200
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962688));
    // 0x799b64: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799B64u;
    SET_GPR_U32(ctx, 31, 0x799B6Cu);
    ctx->pc = 0x799B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B64u;
    // 0x799b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799B64u, 0x799B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799b70: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799B70u;
    SET_GPR_U32(ctx, 31, 0x799B78u);
    ctx->pc = 0x799B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B70u;
    // 0x799b74: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799B70u, 0x799B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799b7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799b80: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799b84: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799b88: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799b8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799b8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b90: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x799b90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799b94: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799b94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b98: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x799b98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x799BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BA8u;
}
} // namespace gh_r604
