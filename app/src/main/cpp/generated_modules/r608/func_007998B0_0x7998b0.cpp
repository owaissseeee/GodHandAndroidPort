#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_007998B0
// Address: 0x7998b0 - 0x799b88
void func_007998B0_0x7998b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998B0_0x7998b0");
#endif

    switch (ctx->pc) {
        case 0x799908u: goto label_799908;
        case 0x799918u: goto label_799918;
        case 0x799928u: goto label_799928;
        case 0x799940u: goto label_799940;
        case 0x79994cu: goto label_79994c;
        case 0x799958u: goto label_799958;
        case 0x799964u: goto label_799964;
        case 0x799984u: goto label_799984;
        case 0x799990u: goto label_799990;
        case 0x799998u: goto label_799998;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999f4u: goto label_7999f4;
        case 0x799a00u: goto label_799a00;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a38u: goto label_799a38;
        case 0x799a44u: goto label_799a44;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a64u: goto label_799a64;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a98u: goto label_799a98;
        case 0x799aa4u: goto label_799aa4;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac8u: goto label_799ac8;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae8u: goto label_799ae8;
        case 0x799af8u: goto label_799af8;
        case 0x799b04u: goto label_799b04;
        case 0x799b20u: goto label_799b20;
        case 0x799b34u: goto label_799b34;
        case 0x799b48u: goto label_799b48;
        case 0x799b54u: goto label_799b54;
        default: break;
    }

    ctx->pc = 0x7998b0u;

    // 0x7998b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7998b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7998b8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7998b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7998bc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7998c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7998c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7998c4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7998c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7998c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7998cc: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x7998d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7998d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7998d4: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x7998d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7998d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7998dc: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x7998e0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7998e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7998e4: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x7998e8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7998e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x7998ec: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x7998f0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x7998f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x7998f4: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x7998f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7998fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7998FCu;
    {
        const bool branch_taken_0x7998fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998fc) {
            ctx->pc = 0x799918u;
            goto label_799918;
        }
    }
    ctx->pc = 0x799904u;
    // 0x799904: 0x0  nop
    ctx->pc = 0x799904u;
    // NOP
label_799908:
    // 0x799908: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79990c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799910: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x79991c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799920: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799920u;
    SET_GPR_U32(ctx, 31, 0x799928u);
    ctx->pc = 0x799924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799920u;
    // 0x799924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799920u, 0x799928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799928u;
label_799928:
    // 0x799928: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799928u;
    {
        const bool branch_taken_0x799928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799928u;
        // 0x79992c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799928) {
            ctx->pc = 0x799908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799908;
        }
    }
    ctx->pc = 0x799930u;
    // 0x799930: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799934: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799934u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799938: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799938u;
    SET_GPR_U32(ctx, 31, 0x799940u);
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799938u, 0x799940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799944: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799944u;
    SET_GPR_U32(ctx, 31, 0x79994Cu);
    ctx->pc = 0x799948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799944u;
    // 0x799948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799944u, 0x79994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79994Cu;
label_79994c:
    // 0x79994c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799950: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799950u;
    SET_GPR_U32(ctx, 31, 0x799958u);
    ctx->pc = 0x799954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799950u;
    // 0x799954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799950u, 0x799958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79995c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79995Cu;
    SET_GPR_U32(ctx, 31, 0x799964u);
    ctx->pc = 0x799960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79995Cu;
    // 0x799960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79995Cu, 0x799964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799964u;
label_799964:
    // 0x799964: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x799968: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79996c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799978: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x79997c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79997Cu;
    SET_GPR_U32(ctx, 31, 0x799984u);
    ctx->pc = 0x799980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79997Cu;
    // 0x799980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79997Cu, 0x799984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799988: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799988u;
    SET_GPR_U32(ctx, 31, 0x799990u);
    ctx->pc = 0x79998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799988u;
    // 0x79998c: 0x26a5afe8  addiu       $a1, $s5, -0x5018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799988u, 0x799990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799990u;
label_799990:
    // 0x799990: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799990u;
    SET_GPR_U32(ctx, 31, 0x799998u);
    ctx->pc = 0x799994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799990u;
    // 0x799994: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799990u, 0x799998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799998u;
label_799998:
    // 0x799998: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799998u;
    SET_GPR_U32(ctx, 31, 0x7999A0u);
    ctx->pc = 0x79999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799998u;
    // 0x79999c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799998u, 0x7999A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7999A0u;
    {
        const bool branch_taken_0x7999a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7999a0) {
            ctx->pc = 0x7999B4u;
            goto label_7999b4;
        }
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7999B4u;
    SET_GPR_U32(ctx, 31, 0x7999BCu);
    ctx->pc = 0x7999B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B4u;
    // 0x7999b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7999B4u, 0x7999BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999BCu;
label_7999bc:
    // 0x7999bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c0: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x7999c4: 0xc0b0bc2  jal         func_2C2F08
    ctx->pc = 0x7999C4u;
    SET_GPR_U32(ctx, 31, 0x7999CCu);
    ctx->pc = 0x7999C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C4u;
    // 0x7999c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x7999C4u, 0x7999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999CCu;
label_7999cc:
    // 0x7999cc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7999CCu;
    {
        const bool branch_taken_0x7999cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999CCu;
        // 0x7999d0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999cc) {
            ctx->pc = 0x7999A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999a8;
        }
    }
    ctx->pc = 0x7999D4u;
    // 0x7999d4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7999d8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7999ec: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7999ECu;
    SET_GPR_U32(ctx, 31, 0x7999F4u);
    ctx->pc = 0x7999F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ECu;
    // 0x7999f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7999ECu, 0x7999F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F4u;
label_7999f4:
    // 0x7999f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a04: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x799a10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799a1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a20: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x799a24: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x799A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A24u;
    // 0x799a28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799a30: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799A30u;
    SET_GPR_U32(ctx, 31, 0x799A38u);
    ctx->pc = 0x799A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A30u;
    // 0x799a34: 0x26c5aff0  addiu       $a1, $s6, -0x5010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799A30u, 0x799A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A38u;
label_799a38:
    // 0x799a38: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799a38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a3c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799A3Cu;
    SET_GPR_U32(ctx, 31, 0x799A44u);
    ctx->pc = 0x799A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A3Cu;
    // 0x799a40: 0x26e464f0  addiu       $a0, $s7, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799A3Cu, 0x799A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0xc09e000  jal         func_278000
    ctx->pc = 0x799A44u;
    SET_GPR_U32(ctx, 31, 0x799A4Cu);
    ctx->pc = 0x799A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A44u;
    // 0x799a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278000u, 0x799A44u, 0x799A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A4Cu;
label_799a4c:
    // 0x799a4c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799a50: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x799a54: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799A54u;
    SET_GPR_U32(ctx, 31, 0x799A5Cu);
    ctx->pc = 0x799A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A54u;
    // 0x799a58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A54u, 0x799A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A5Cu;
label_799a5c:
    // 0x799a5c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799A5Cu;
    SET_GPR_U32(ctx, 31, 0x799A64u);
    ctx->pc = 0x799A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A5Cu;
    // 0x799a60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799A5Cu, 0x799A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0x8e42b1c4  lw          $v0, -0x4E3C($s2)
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
    // 0x799a68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799a6c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x799A6Cu;
    {
        const bool branch_taken_0x799a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a6c) {
            ctx->pc = 0x799AB8u;
            goto label_799ab8;
        }
    }
    ctx->pc = 0x799A74u;
    // 0x799a74: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x799A74u;
    SET_GPR_U32(ctx, 31, 0x799A7Cu);
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x799A74u, 0x799A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0x8e42b1c4  lw          $v0, -0x4E3C($s2)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
    // 0x799a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a84: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799A84u;
    SET_GPR_U32(ctx, 31, 0x799A8Cu);
    ctx->pc = 0x799A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A84u;
    // 0x799a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799A84u, 0x799A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A8Cu;
label_799a8c:
    // 0x799a8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799A8Cu;
    {
        const bool branch_taken_0x799a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A8Cu;
        // 0x799a90: 0x8e42b1c4  lw          $v0, -0x4E3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a8c) {
            ctx->pc = 0x799AA8u;
            goto label_799aa8;
        }
    }
    ctx->pc = 0x799A94u;
    // 0x799a94: 0x0  nop
    ctx->pc = 0x799a94u;
    // NOP
label_799a98:
    // 0x799a98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a9c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799A9Cu;
    SET_GPR_U32(ctx, 31, 0x799AA4u);
    ctx->pc = 0x799AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A9Cu;
    // 0x799aa0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A9Cu, 0x799AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0x8e42b1c4  lw          $v0, -0x4E3C($s2)
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
label_799aa8:
    // 0x799aa8: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799AB0u;
    {
        const bool branch_taken_0x799ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab0) {
            ctx->pc = 0x799A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a98;
        }
    }
    ctx->pc = 0x799AB8u;
label_799ab8:
    // 0x799ab8: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799AB8u;
    SET_GPR_U32(ctx, 31, 0x799AC0u);
    ctx->pc = 0x799ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB8u;
    // 0x799abc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799AB8u, 0x799AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC0u;
label_799ac0:
    // 0x799ac0: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x8e42b1c4  lw          $v0, -0x4E3C($s2)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
    // 0x799acc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799ad0: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x799AD0u;
    {
        const bool branch_taken_0x799ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD0u;
        // 0x799ad4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad0) {
            ctx->pc = 0x799B0Cu;
            goto label_799b0c;
        }
    }
    ctx->pc = 0x799AD8u;
    // 0x799ad8: 0xc05f99e  jal         func_17E678
    ctx->pc = 0x799AD8u;
    SET_GPR_U32(ctx, 31, 0x799AE0u);
    ctx->pc = 0x17E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E678u, 0x799AD8u, 0x799AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE0u;
label_799ae0:
    // 0x799ae0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799AE0u;
    {
        const bool branch_taken_0x799ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x8e42b1c4  lw          $v0, -0x4E3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae0) {
            ctx->pc = 0x799AFCu;
            goto label_799afc;
        }
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799af0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x8e42b1c4  lw          $v0, -0x4E3C($s2)
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947268)));
label_799afc:
    // 0x799afc: 0xc05f9f4  jal         func_17E7D0
    ctx->pc = 0x799AFCu;
    SET_GPR_U32(ctx, 31, 0x799B04u);
    ctx->pc = 0x799B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AFCu;
    // 0x799b00: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E7D0u, 0x799AFCu, 0x799B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B04u;
label_799b04:
    // 0x799b04: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799B04u;
    {
        const bool branch_taken_0x799b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B04u;
        // 0x799b08: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b04) {
            ctx->pc = 0x799AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ae8;
        }
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0x27c5afb8  addiu       $a1, $fp, -0x5048
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946744));
    // 0x799b10: 0x2450ae50  addiu       $s0, $v0, -0x51B0
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x799b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b18: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799B18u;
    SET_GPR_U32(ctx, 31, 0x799B20u);
    ctx->pc = 0x799B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B18u;
    // 0x799b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799B18u, 0x799B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B20u;
label_799b20:
    // 0x799b20: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b28: 0x2445afc8  addiu       $a1, $v0, -0x5038
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946760));
    // 0x799b2c: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799B2Cu;
    SET_GPR_U32(ctx, 31, 0x799B34u);
    ctx->pc = 0x799B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B2Cu;
    // 0x799b30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799B2Cu, 0x799B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b3c: 0x2445afd8  addiu       $a1, $v0, -0x5028
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946776));
    // 0x799b40: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799B40u;
    SET_GPR_U32(ctx, 31, 0x799B48u);
    ctx->pc = 0x799B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B40u;
    // 0x799b44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799B40u, 0x799B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799b4c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799B4Cu;
    SET_GPR_U32(ctx, 31, 0x799B54u);
    ctx->pc = 0x799B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B4Cu;
    // 0x799b50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799B4Cu, 0x799B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B54u;
label_799b54:
    // 0x799b54: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799b58: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799b5c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799b60: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799b64: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799b68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799b68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b6c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x799b6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799b70: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799b70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b74: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x799b74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x799B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B7Cu;
        // 0x799b80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B84u;
    // 0x799b84: 0x0  nop
    ctx->pc = 0x799b84u;
    // NOP
    ctx->pc = 0x799b88u;
}
} // namespace gh_r608
