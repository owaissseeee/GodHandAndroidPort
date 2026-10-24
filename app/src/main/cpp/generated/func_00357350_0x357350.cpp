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

// Function: func_00357350
// Address: 0x357350 - 0x357468
void func_00357350_0x357350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357350_0x357350");
#endif

    switch (ctx->pc) {
        case 0x357394u: goto label_357394;
        case 0x3573b0u: goto label_3573b0;
        case 0x3573e0u: goto label_3573e0;
        case 0x3573f0u: goto label_3573f0;
        case 0x357400u: goto label_357400;
        case 0x357410u: goto label_357410;
        case 0x357420u: goto label_357420;
        case 0x357430u: goto label_357430;
        default: break;
    }

    ctx->pc = 0x357350u;

    // 0x357350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35735c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357360: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357364: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x357364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x357368: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x357368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x35736c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x35736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x357370: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x357370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x357374: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x357374u;
    {
        const bool branch_taken_0x357374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357374) {
            ctx->pc = 0x357378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357374u;
            // 0x357378: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357450u;
            goto label_357450;
        }
    }
    ctx->pc = 0x35737Cu;
    // 0x35737c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x35737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x357380: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x357380u;
    {
        const bool branch_taken_0x357380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357380) {
            ctx->pc = 0x357384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357380u;
            // 0x357384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357450u;
            goto label_357450;
        }
    }
    ctx->pc = 0x357388u;
    // 0x357388: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x357388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x35738c: 0xc0d6e96  jal         func_35BA58
    ctx->pc = 0x35738Cu;
    SET_GPR_U32(ctx, 31, 0x357394u);
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x35738Cu, 0x357394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357394u;
label_357394:
    // 0x357394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x357394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357398: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x357398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x35739c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x35739cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3573a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3573A0u;
    {
        const bool branch_taken_0x3573a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573a0) {
            ctx->pc = 0x3573A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3573A0u;
            // 0x3573a4: 0x8e300048  lw          $s0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3573B4u;
            goto label_3573b4;
        }
    }
    ctx->pc = 0x3573A8u;
    // 0x3573a8: 0xc0d5d1a  jal         func_357468
    ctx->pc = 0x3573A8u;
    SET_GPR_U32(ctx, 31, 0x3573B0u);
    ctx->pc = 0x3573ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573A8u;
    // 0x3573ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357468u, 0x3573A8u, 0x3573B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573B0u;
label_3573b0:
    // 0x3573b0: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x3573b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3573b4:
    // 0x3573b4: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x3573b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3573b8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3573B8u;
    {
        const bool branch_taken_0x3573b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573b8) {
            ctx->pc = 0x3573BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3573B8u;
            // 0x3573bc: 0xae300048  sw          $s0, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357428u;
            goto label_357428;
        }
    }
    ctx->pc = 0x3573C0u;
    // 0x3573c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3573c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3573c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3573c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3573c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3573c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3573cc: 0x8c639900  lw          $v1, -0x6700($v1)
    ctx->pc = 0x3573ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940928)));
    // 0x3573d0: 0x600008  jr          $v1
    ctx->pc = 0x3573D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3573D8u: goto label_3573d8;
            case 0x3573E8u: goto label_3573e8;
            case 0x3573F8u: goto label_3573f8;
            case 0x357408u: goto label_357408;
            case 0x357418u: goto label_357418;
            case 0x357424u: goto label_357424;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3573D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3573D8u;
label_3573d8:
    // 0x3573d8: 0xc0d5d2a  jal         func_3574A8
    ctx->pc = 0x3573D8u;
    SET_GPR_U32(ctx, 31, 0x3573E0u);
    ctx->pc = 0x3573DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573D8u;
    // 0x3573dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3574A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3574A8u, 0x3573D8u, 0x3573E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573E0u;
label_3573e0:
    // 0x3573e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3573E0u;
    {
        const bool branch_taken_0x3573e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3573E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573E0u;
        // 0x3573e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3573e0) {
            ctx->pc = 0x357424u;
            goto label_357424;
        }
    }
    ctx->pc = 0x3573E8u;
label_3573e8:
    // 0x3573e8: 0xc0d5d36  jal         func_3574D8
    ctx->pc = 0x3573E8u;
    SET_GPR_U32(ctx, 31, 0x3573F0u);
    ctx->pc = 0x3573ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573E8u;
    // 0x3573ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3574D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3574D8u, 0x3573E8u, 0x3573F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573F0u;
label_3573f0:
    // 0x3573f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3573F0u;
    {
        const bool branch_taken_0x3573f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573F0u;
        // 0x3573f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3573f0) {
            ctx->pc = 0x357424u;
            goto label_357424;
        }
    }
    ctx->pc = 0x3573F8u;
label_3573f8:
    // 0x3573f8: 0xc0d5e1c  jal         func_357870
    ctx->pc = 0x3573F8u;
    SET_GPR_U32(ctx, 31, 0x357400u);
    ctx->pc = 0x3573FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573F8u;
    // 0x3573fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357870u, 0x3573F8u, 0x357400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357400u;
label_357400:
    // 0x357400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x357400u;
    {
        const bool branch_taken_0x357400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357400u;
        // 0x357404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357400) {
            ctx->pc = 0x357424u;
            goto label_357424;
        }
    }
    ctx->pc = 0x357408u;
label_357408:
    // 0x357408: 0xc0d5e44  jal         func_357910
    ctx->pc = 0x357408u;
    SET_GPR_U32(ctx, 31, 0x357410u);
    ctx->pc = 0x35740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357408u;
    // 0x35740c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357910u, 0x357408u, 0x357410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357410u;
label_357410:
    // 0x357410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357410u;
    {
        const bool branch_taken_0x357410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357410u;
        // 0x357414: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357410) {
            ctx->pc = 0x357424u;
            goto label_357424;
        }
    }
    ctx->pc = 0x357418u;
label_357418:
    // 0x357418: 0xc0d5e60  jal         func_357980
    ctx->pc = 0x357418u;
    SET_GPR_U32(ctx, 31, 0x357420u);
    ctx->pc = 0x35741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357418u;
    // 0x35741c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357980u, 0x357418u, 0x357420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357420u;
label_357420:
    // 0x357420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357424:
    // 0x357424: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x357424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_357428:
    // 0x357428: 0xc0d6e96  jal         func_35BA58
    ctx->pc = 0x357428u;
    SET_GPR_U32(ctx, 31, 0x357430u);
    ctx->pc = 0x35742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357428u;
    // 0x35742c: 0x26303760  addiu       $s0, $s1, 0x3760 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x357428u, 0x357430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357430u;
label_357430:
    // 0x357430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357434: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x357434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x357438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35743c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35743cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357444: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x357444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357448: 0x80d6ed8  j           func_35BB60
    ctx->pc = 0x357448u;
    ctx->pc = 0x35744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357448u;
    // 0x35744c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BB60u, 0x357448u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357450u;
label_357450:
    // 0x357450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357458: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x357458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35745c: 0x3e00008  jr          $ra
    ctx->pc = 0x35745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35745Cu;
        // 0x357460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35745Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357464u;
    // 0x357464: 0x0  nop
    ctx->pc = 0x357464u;
    // NOP
    ctx->pc = 0x357468u;
}
