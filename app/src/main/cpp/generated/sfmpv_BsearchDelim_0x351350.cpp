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

// Function: sfmpv_BsearchDelim
// Address: 0x351350 - 0x3514b8
void sfmpv_BsearchDelim_0x351350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_BsearchDelim_0x351350");
#endif

    switch (ctx->pc) {
        case 0x3513a0u: goto label_3513a0;
        case 0x3513b8u: goto label_3513b8;
        case 0x351408u: goto label_351408;
        case 0x351420u: goto label_351420;
        case 0x351430u: goto label_351430;
        case 0x351438u: goto label_351438;
        case 0x351470u: goto label_351470;
        case 0x351484u: goto label_351484;
        default: break;
    }

    ctx->pc = 0x351350u;

    // 0x351350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x351350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x351354: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x351354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x351358: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x351358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35135c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x35135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x351360: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x351360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x351364: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x351364u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351368: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x351368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35136c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x351370: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x351370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x351374: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x351374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x351378: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x351378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x35137c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x35137cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x351380: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x351380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x351384: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x351384u;
    {
        const bool branch_taken_0x351384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351384u;
        // 0x351388: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351384) {
            ctx->pc = 0x351458u;
            goto label_351458;
        }
    }
    ctx->pc = 0x35138Cu;
    // 0x35138c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x35138cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x351390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x351390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351394: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x351394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351398: 0xc0da49c  jal         func_369270
    ctx->pc = 0x351398u;
    SET_GPR_U32(ctx, 31, 0x3513A0u);
    ctx->pc = 0x35139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351398u;
    // 0x35139c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369270u, 0x351398u, 0x3513A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513A0u;
label_3513a0:
    // 0x3513a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3513a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513a4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3513A4u;
    {
        const bool branch_taken_0x3513a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3513a4) {
            ctx->pc = 0x3513A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3513A4u;
            // 0x3513a8: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3513D0u;
            goto label_3513d0;
        }
    }
    ctx->pc = 0x3513ACu;
    // 0x3513ac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3513ACu;
    {
        const bool branch_taken_0x3513ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3513ac) {
            ctx->pc = 0x35147Cu;
            goto label_35147c;
        }
    }
    ctx->pc = 0x3513B4u;
    // 0x3513b4: 0x0  nop
    ctx->pc = 0x3513b4u;
    // NOP
label_3513b8:
    // 0x3513b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3513bc: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x3513bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x3513c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3513c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3513c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3513c8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3513C8u;
    {
        const bool branch_taken_0x3513c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3513CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3513C8u;
        // 0x3513cc: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3513c8) {
            ctx->pc = 0x35148Cu;
            goto label_35148c;
        }
    }
    ctx->pc = 0x3513D0u;
label_3513d0:
    // 0x3513d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3513d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3513d4: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x3513d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3513d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3513d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3513dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3513e0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3513e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513e4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x3513e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3513e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3513e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513ec: 0xe2980a  movz        $s3, $a3, $v0
    ctx->pc = 0x3513ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
    // 0x3513f0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3513f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3513f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3513f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3513f8: 0xe2800a  movz        $s0, $a3, $v0
    ctx->pc = 0x3513f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x3513fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3513fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351400: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x351400u;
    SET_GPR_U32(ctx, 31, 0x351408u);
    ctx->pc = 0x351404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351400u;
    // 0x351404: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x351400u, 0x351408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351408u;
label_351408:
    // 0x351408: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x351408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x35140c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35140cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351410: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x351410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x351414: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x351418: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x351418u;
    SET_GPR_U32(ctx, 31, 0x351420u);
    ctx->pc = 0x35141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351418u;
    // 0x35141c: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x351418u, 0x351420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351420u;
label_351420:
    // 0x351420: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x351420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x351424: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x351424u;
    {
        const bool branch_taken_0x351424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351424) {
            ctx->pc = 0x351428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351424u;
            // 0x351428: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35145Cu;
            goto label_35145c;
        }
    }
    ctx->pc = 0x35142Cu;
    // 0x35142c: 0x0  nop
    ctx->pc = 0x35142cu;
    // NOP
label_351430:
    // 0x351430: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x351430u;
    SET_GPR_U32(ctx, 31, 0x351438u);
    ctx->pc = 0x351434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351430u;
    // 0x351434: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x351430u, 0x351438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351438u;
label_351438:
    // 0x351438: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x351438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35143c: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x35143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x351440: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x351440u;
    {
        const bool branch_taken_0x351440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351440) {
            ctx->pc = 0x351444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351440u;
            // 0x351444: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3513B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3513b8;
        }
    }
    ctx->pc = 0x351448u;
    // 0x351448: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x351448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x35144c: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x35144cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x351450: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x351450u;
    {
        const bool branch_taken_0x351450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351450) {
            ctx->pc = 0x351430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351430;
        }
    }
    ctx->pc = 0x351458u;
label_351458:
    // 0x351458: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x351458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35145c:
    // 0x35145c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35145cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351460: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x351460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x351464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x351464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351468: 0xc0da49c  jal         func_369270
    ctx->pc = 0x351468u;
    SET_GPR_U32(ctx, 31, 0x351470u);
    ctx->pc = 0x35146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351468u;
    // 0x35146c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369270u, 0x351468u, 0x351470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351470u;
label_351470:
    // 0x351470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351474: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x351474u;
    {
        const bool branch_taken_0x351474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x351474) {
            ctx->pc = 0x351478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351474u;
            // 0x351478: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351490u;
            goto label_351490;
        }
    }
    ctx->pc = 0x35147Cu;
label_35147c:
    // 0x35147c: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x35147Cu;
    SET_GPR_U32(ctx, 31, 0x351484u);
    ctx->pc = 0x351480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35147Cu;
    // 0x351480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x35147Cu, 0x351484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351484u;
label_351484:
    // 0x351484: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x351484u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x351488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x351488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35148c:
    // 0x35148c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35148cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_351490:
    // 0x351490: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x351490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x351494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x351494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351498: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x351498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35149c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35149cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3514a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3514a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3514a4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3514a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3514a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3514a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3514ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3514ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3514B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514ACu;
        // 0x3514b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3514ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3514B4u;
    // 0x3514b4: 0x0  nop
    ctx->pc = 0x3514b4u;
    // NOP
    ctx->pc = 0x3514b8u;
}
