#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_007998A8
// Address: 0x7998a8 - 0x799b08
void func_007998A8_0x7998a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998A8_0x7998a8");
#endif

    switch (ctx->pc) {
        case 0x799978u: goto label_799978;
        case 0x79999cu: goto label_79999c;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f8u: goto label_7999f8;
        case 0x799a04u: goto label_799a04;
        case 0x799a10u: goto label_799a10;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a28u: goto label_799a28;
        case 0x799a34u: goto label_799a34;
        case 0x799a50u: goto label_799a50;
        case 0x799a70u: goto label_799a70;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a98u: goto label_799a98;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aacu: goto label_799aac;
        case 0x799accu: goto label_799acc;
        case 0x799ae4u: goto label_799ae4;
        case 0x799af0u: goto label_799af0;
        default: break;
    }

    ctx->pc = 0x7998a8u;

    // 0x7998a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7998ac: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7998b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7998b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7998b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7998b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7998b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7998bc: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79BD80u));
    // 0x7998c0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7998c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7998C4u;
    {
        const bool branch_taken_0x7998c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C4u;
        // 0x7998c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c4) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998CCu;
    // 0x7998cc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x7998d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7998d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7998d4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7998d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x7998d8: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
label_7998dc:
    // 0x7998dc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x7998e0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7998E0u;
    {
        const bool branch_taken_0x7998e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7998e0) {
            ctx->pc = 0x7998E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998E0u;
            // 0x7998e4: 0x8c430018  lw          $v1, 0x18($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998FCu;
            goto label_7998fc;
        }
    }
    ctx->pc = 0x7998E8u;
    // 0x7998e8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x7998ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7998f0: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7998f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x7998f4: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
    // 0x7998f8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_7998fc:
    // 0x7998fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7998FCu;
    {
        const bool branch_taken_0x7998fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x8ca2bd80  lw          $v0, -0x4280($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998fc) {
            ctx->pc = 0x799914u;
            goto label_799914;
        }
    }
    ctx->pc = 0x799904u;
    // 0x799904: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799908: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79990c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x79990cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799910: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
label_799914:
    // 0x799914: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x799918: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799918u;
    {
        const bool branch_taken_0x799918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799918u;
        // 0x79991c: 0x8ca2bd80  lw          $v0, -0x4280($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799918) {
            ctx->pc = 0x799930u;
            goto label_799930;
        }
    }
    ctx->pc = 0x799920u;
    // 0x799920: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799924: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799928: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x79992c: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
label_799930:
    // 0x799930: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799934: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799934u;
    {
        const bool branch_taken_0x799934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799934u;
        // 0x799938: 0x8ca2bd80  lw          $v0, -0x4280($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799934) {
            ctx->pc = 0x79994Cu;
            goto label_79994c;
        }
    }
    ctx->pc = 0x79993Cu;
    // 0x79993c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799940: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799944: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799948: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
label_79994c:
    // 0x79994c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x799950: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799950u;
    {
        const bool branch_taken_0x799950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799950u;
        // 0x799954: 0x8ca2bd80  lw          $v0, -0x4280($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799950) {
            ctx->pc = 0x799968u;
            goto label_799968;
        }
    }
    ctx->pc = 0x799958u;
    // 0x799958: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79995c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799960: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799964: 0x8ca2bd80  lw          $v0, -0x4280($a1)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950272)));
label_799968:
    // 0x799968: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79996c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x799970: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x799970u;
    SET_GPR_U32(ctx, 31, 0x799978u);
    ctx->pc = 0x799974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799970u;
    // 0x799974: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x799970u, 0x799978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79997c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799980: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x799984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799988: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799988u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79998c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799990: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799994: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799994u;
    SET_GPR_U32(ctx, 31, 0x79999Cu);
    ctx->pc = 0x799998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799994u;
    // 0x799998: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799994u, 0x79999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79999Cu;
label_79999c:
    // 0x79999c: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79999cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7999a0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7999A0u;
    SET_GPR_U32(ctx, 31, 0x7999A8u);
    ctx->pc = 0x7999A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A0u;
    // 0x7999a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999A0u, 0x7999A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999ac: 0xc0a588c  jal         func_296230
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7999b8: 0xc0a588c  jal         func_296230
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x7999c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c8: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x7999cc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7999CCu;
    SET_GPR_U32(ctx, 31, 0x7999D4u);
    ctx->pc = 0x7999D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999CCu;
    // 0x7999d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7999CCu, 0x7999D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D4u;
label_7999d4:
    // 0x7999d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999d8: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999e4: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7999E4u;
    SET_GPR_U32(ctx, 31, 0x7999ECu);
    ctx->pc = 0x7999E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E4u;
    // 0x7999e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7999E4u, 0x7999ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999ECu;
label_7999ec:
    // 0x7999ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f0: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7999F0u;
    SET_GPR_U32(ctx, 31, 0x7999F8u);
    ctx->pc = 0x7999F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F0u;
    // 0x7999f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7999F0u, 0x7999F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999fc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7999FCu;
    SET_GPR_U32(ctx, 31, 0x799A04u);
    ctx->pc = 0x799A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999FCu;
    // 0x799a00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7999FCu, 0x799A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A04u;
label_799a04:
    // 0x799a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a08: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a14: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799A14u;
    SET_GPR_U32(ctx, 31, 0x799A1Cu);
    ctx->pc = 0x799A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A14u;
    // 0x799a18: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A14u, 0x799A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A1Cu;
label_799a1c:
    // 0x799a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a20: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799A20u;
    SET_GPR_U32(ctx, 31, 0x799A28u);
    ctx->pc = 0x799A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A20u;
    // 0x799a24: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A20u, 0x799A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a2c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799A2Cu;
    SET_GPR_U32(ctx, 31, 0x799A34u);
    ctx->pc = 0x799A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A2Cu;
    // 0x799a30: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A2Cu, 0x799A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799a38: 0x8c628658  lw          $v0, -0x79A8($v1)
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799a3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799a40: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799A40u;
    {
        const bool branch_taken_0x799a40 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x799A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A40u;
        // 0x799a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a40) {
            ctx->pc = 0x799A84u;
            goto label_799a84;
        }
    }
    ctx->pc = 0x799A48u;
    // 0x799a48: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a64: 0x24e7b4b0  addiu       $a3, $a3, -0x4B50
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948016));
    // 0x799a68: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x799A68u;
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a74: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799A74u;
    SET_GPR_U32(ctx, 31, 0x799A7Cu);
    ctx->pc = 0x799A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A74u;
    // 0x799a78: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799A74u, 0x799A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799A7Cu;
    {
        const bool branch_taken_0x799a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a7c) {
            ctx->pc = 0x799AA4u;
            goto label_799aa4;
        }
    }
    ctx->pc = 0x799A84u;
label_799a84:
    // 0x799a84: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799A84u;
    SET_GPR_U32(ctx, 31, 0x799A8Cu);
    ctx->pc = 0x799A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A84u;
    // 0x799a88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799A84u, 0x799A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A8Cu;
label_799a8c:
    // 0x799a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a90: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a9c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799A9Cu;
    SET_GPR_U32(ctx, 31, 0x799AA4u);
    ctx->pc = 0x799AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A9Cu;
    // 0x799aa0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A9Cu, 0x799AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0xc1e6dfe  jal         func_79B7F8
    ctx->pc = 0x799AA4u;
    SET_GPR_U32(ctx, 31, 0x799AACu);
    ctx->pc = 0x79B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B7F8u, 0x799AA4u, 0x799AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AACu;
label_799aac:
    // 0x799aac: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x799AACu;
    {
        const bool branch_taken_0x799aac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AACu;
        // 0x799ab0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aac) {
            ctx->pc = 0x799AD0u;
            goto label_799ad0;
        }
    }
    ctx->pc = 0x799AB4u;
    // 0x799ab4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799abc: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799ac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac4: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799AC4u;
    SET_GPR_U32(ctx, 31, 0x799ACCu);
    ctx->pc = 0x799AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC4u;
    // 0x799ac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799AC4u, 0x799ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_799ad0:
    // 0x799ad0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799ad4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799ad8: 0x24a5a050  addiu       $a1, $a1, -0x5FB0
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942800));
    // 0x799adc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799ADCu;
    SET_GPR_U32(ctx, 31, 0x799AE4u);
    ctx->pc = 0x799AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ADCu;
    // 0x799ae0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799ADCu, 0x799AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE4u;
label_799ae4:
    // 0x799ae4: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799ae8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799af4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799afc: 0x3e00008  jr          $ra
    ctx->pc = 0x799AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B04u;
    // 0x799b04: 0x0  nop
    ctx->pc = 0x799b04u;
    // NOP
    ctx->pc = 0x799b08u;
}
} // namespace gh_r201
