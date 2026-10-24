#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_007998C8
// Address: 0x7998c8 - 0x799b20
void func_007998C8_0x7998c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998C8_0x7998c8");
#endif

    switch (ctx->pc) {
        case 0x799920u: goto label_799920;
        case 0x799930u: goto label_799930;
        case 0x799940u: goto label_799940;
        case 0x799958u: goto label_799958;
        case 0x799964u: goto label_799964;
        case 0x79996cu: goto label_79996c;
        case 0x799978u: goto label_799978;
        case 0x799980u: goto label_799980;
        case 0x79998cu: goto label_79998c;
        case 0x799998u: goto label_799998;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999ecu: goto label_7999ec;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a20u: goto label_799a20;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a34u: goto label_799a34;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a48u: goto label_799a48;
        case 0x799a54u: goto label_799a54;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a90u: goto label_799a90;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ad8u: goto label_799ad8;
        case 0x799ae4u: goto label_799ae4;
        case 0x799af0u: goto label_799af0;
        default: break;
    }

    ctx->pc = 0x7998c8u;

    // 0x7998c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x7998cc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7998ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7998d0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7998d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7998d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7998d8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7998d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x7998dc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7998e0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7998e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x7998e4: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x7998e8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7998e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x7998ec: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x7998f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7998f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x7998f4: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x7998f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7998f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x7998fc: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799900: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799904: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x799908: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79990c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799910: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799914: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799914u;
    {
        const bool branch_taken_0x799914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799914) {
            ctx->pc = 0x799930u;
            goto label_799930;
        }
    }
    ctx->pc = 0x79991Cu;
    // 0x79991c: 0x0  nop
    ctx->pc = 0x79991cu;
    // NOP
label_799920:
    // 0x799920: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799928: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799928u;
    SET_GPR_U32(ctx, 31, 0x799930u);
    ctx->pc = 0x79992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799928u;
    // 0x79992c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799928u, 0x799930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799930u;
label_799930:
    // 0x799930: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799938: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799938u;
    SET_GPR_U32(ctx, 31, 0x799940u);
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799938u, 0x799940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799940u;
    {
        const bool branch_taken_0x799940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799940) {
            ctx->pc = 0x799920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799920;
        }
    }
    ctx->pc = 0x799948u;
    // 0x799948: 0x26046ab0  addiu       $a0, $s0, 0x6AB0
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79994c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79994cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799950: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799950u;
    SET_GPR_U32(ctx, 31, 0x799958u);
    ctx->pc = 0x799954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799950u;
    // 0x799954: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799950u, 0x799958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
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
    // 0x799964: 0xc0a584c  jal         func_296130
    ctx->pc = 0x799964u;
    SET_GPR_U32(ctx, 31, 0x79996Cu);
    ctx->pc = 0x799968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799964u;
    // 0x799968: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296130u, 0x799964u, 0x79996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79996Cu;
label_79996c:
    // 0x79996c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79996cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799970: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799970u;
    SET_GPR_U32(ctx, 31, 0x799978u);
    ctx->pc = 0x799974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799970u;
    // 0x799974: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799970u, 0x799978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0xc09d050  jal         func_274140
    ctx->pc = 0x799978u;
    SET_GPR_U32(ctx, 31, 0x799980u);
    ctx->pc = 0x79997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799978u;
    // 0x79997c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274140u, 0x799978u, 0x799980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799980u;
label_799980:
    // 0x799980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799984: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x24050a52  addiu       $a1, $zero, 0xA52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2642));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79998Cu;
    {
        const bool branch_taken_0x79998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x2644ea60  addiu       $a0, $s2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79998c) {
            ctx->pc = 0x7999ACu;
            goto label_7999ac;
        }
    }
    ctx->pc = 0x799994u;
    // 0x799994: 0x0  nop
    ctx->pc = 0x799994u;
    // NOP
label_799998:
    // 0x799998: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79999c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999a0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999A0u;
    SET_GPR_U32(ctx, 31, 0x7999A8u);
    ctx->pc = 0x7999A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A0u;
    // 0x7999a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999A0u, 0x7999A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
label_7999ac:
    // 0x7999ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7999b0: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7999B8u;
    {
        const bool branch_taken_0x7999b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x2644ea60  addiu       $a0, $s2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b8) {
            ctx->pc = 0x799998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799998;
        }
    }
    ctx->pc = 0x7999C0u;
    // 0x7999c0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7999C0u;
    SET_GPR_U32(ctx, 31, 0x7999C8u);
    ctx->pc = 0x7999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C0u;
    // 0x7999c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7999C0u, 0x7999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C8u;
label_7999c8:
    // 0x7999c8: 0x26d0ee00  addiu       $s0, $s6, -0x1200
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x7999cc: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7999CCu;
    SET_GPR_U32(ctx, 31, 0x7999D4u);
    ctx->pc = 0x7999D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999CCu;
    // 0x7999d0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7999CCu, 0x7999D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D4u;
label_7999d4:
    // 0x7999d4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7999d8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e4: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7999E4u;
    SET_GPR_U32(ctx, 31, 0x7999ECu);
    ctx->pc = 0x7999E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E4u;
    // 0x7999e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7999E4u, 0x7999ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ECu;
label_7999ec:
    // 0x7999ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7999ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7999f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x7999f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7999fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a04: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799a10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a14: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799a14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799a18: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799a24: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x799A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A24u;
    // 0x799a28: 0x27c5a8b8  addiu       $a1, $fp, -0x5748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799A2Cu;
    SET_GPR_U32(ctx, 31, 0x799A34u);
    ctx->pc = 0x799A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A2Cu;
    // 0x799a30: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799A2Cu, 0x799A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799A34u;
    SET_GPR_U32(ctx, 31, 0x799A3Cu);
    ctx->pc = 0x799A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A34u;
    // 0x799a38: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799A34u, 0x799A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799A3Cu;
    {
        const bool branch_taken_0x799a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a3c) {
            ctx->pc = 0x799A54u;
            goto label_799a54;
        }
    }
    ctx->pc = 0x799A44u;
    // 0x799a44: 0x0  nop
    ctx->pc = 0x799a44u;
    // NOP
label_799a48:
    // 0x799a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a4c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799A4Cu;
    SET_GPR_U32(ctx, 31, 0x799A54u);
    ctx->pc = 0x799A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A4Cu;
    // 0x799a50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A4Cu, 0x799A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A54u;
label_799a54:
    // 0x799a54: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799A54u;
    SET_GPR_U32(ctx, 31, 0x799A5Cu);
    ctx->pc = 0x799A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A54u;
    // 0x799a58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799A54u, 0x799A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A5Cu;
label_799a5c:
    // 0x799a5c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799A5Cu;
    {
        const bool branch_taken_0x799a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A5Cu;
        // 0x799a60: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a5c) {
            ctx->pc = 0x799A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a48;
        }
    }
    ctx->pc = 0x799A64u;
    // 0x799a64: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799A64u;
    SET_GPR_U32(ctx, 31, 0x799A6Cu);
    ctx->pc = 0x799A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A64u;
    // 0x799a68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799A64u, 0x799A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A6Cu;
label_799a6c:
    // 0x799a6c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799a6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799a70: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799a74: 0x8e64a980  lw          $a0, -0x5680($s3)
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945152)));
    // 0x799a78: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799a7c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799a84: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x799a88: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799A88u;
    SET_GPR_U32(ctx, 31, 0x799A90u);
    ctx->pc = 0x799A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A88u;
    // 0x799a8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799A88u, 0x799A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A90u;
label_799a90:
    // 0x799a90: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799a94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799a98: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a9c: 0x8e64a980  lw          $a0, -0x5680($s3)
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945152)));
    // 0x799aa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799aa4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799aa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799aa8: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x24840290  addiu       $a0, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x8e63a980  lw          $v1, -0x5680($s3)
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945152)));
    // 0x799ab4: 0x24021006  addiu       $v0, $zero, 0x1006
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4102));
    // 0x799ab8: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799abc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ac0: 0xa46202ee  sh          $v0, 0x2EE($v1)
    ctx->pc = 0x799ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 750), (uint16_t)GPR_U32(ctx, 2));
    // 0x799ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799acc: 0x8e65a980  lw          $a1, -0x5680($s3)
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945152)));
    // 0x799ad0: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x799AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD0u;
    // 0x799ad4: 0x24a50290  addiu       $a1, $a1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x799adc: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799ADCu;
    SET_GPR_U32(ctx, 31, 0x799AE4u);
    ctx->pc = 0x799AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ADCu;
    // 0x799ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799ADCu, 0x799AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE4u;
label_799ae4:
    // 0x799ae4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799ae8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799af4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799af8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799afc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x799afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799b00: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799b04: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799b08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799b08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b0c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x799b0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799b10: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x799b10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b18: 0x3e00008  jr          $ra
    ctx->pc = 0x799B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B18u;
        // 0x799b1c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B20u;
}
} // namespace gh_r606
