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

// Function: cEvent_playStartWait
// Address: 0x296370 - 0x296458
void cEvent_playStartWait_0x296370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_playStartWait_0x296370");
#endif

    switch (ctx->pc) {
        case 0x296394u: goto label_296394;
        case 0x2963acu: goto label_2963ac;
        case 0x2963bcu: goto label_2963bc;
        case 0x2963d8u: goto label_2963d8;
        case 0x2963e4u: goto label_2963e4;
        case 0x296404u: goto label_296404;
        case 0x296410u: goto label_296410;
        case 0x296418u: goto label_296418;
        case 0x296424u: goto label_296424;
        case 0x29643cu: goto label_29643c;
        default: break;
    }

    ctx->pc = 0x296370u;

    // 0x296370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x296370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x296374: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x296374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x296378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29637c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x296380: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x296380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x296384: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x296384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x296388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29638c: 0xc0a58aa  jal         func_2962A8
    ctx->pc = 0x29638Cu;
    SET_GPR_U32(ctx, 31, 0x296394u);
    ctx->pc = 0x296390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29638Cu;
    // 0x296390: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962A8u, 0x29638Cu, 0x296394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296394u;
label_296394:
    // 0x296394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x296394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296398: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x296398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x29639c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963a0: 0x24a5a890  addiu       $a1, $a1, -0x5770
    ctx->pc = 0x2963a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944912));
    // 0x2963a4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2963A4u;
    SET_GPR_U32(ctx, 31, 0x2963ACu);
    ctx->pc = 0x2963A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963A4u;
    // 0x2963a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2963A4u, 0x2963ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963ACu;
label_2963ac:
    // 0x2963ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2963acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2963b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2963b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963b4: 0xc08047e  jal         func_2011F8
    ctx->pc = 0x2963B4u;
    SET_GPR_U32(ctx, 31, 0x2963BCu);
    ctx->pc = 0x2963B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963B4u;
    // 0x2963b8: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011F8u, 0x2963B4u, 0x2963BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963BCu;
label_2963bc:
    // 0x2963bc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2963BCu;
    {
        const bool branch_taken_0x2963bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2963C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963BCu;
        // 0x2963c0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963bc) {
            ctx->pc = 0x29643Cu;
            goto label_29643c;
        }
    }
    ctx->pc = 0x2963C4u;
    // 0x2963c4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2963c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2963c8: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2963c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
    // 0x2963cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2963CCu;
    {
        const bool branch_taken_0x2963cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2963D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963CCu;
        // 0x2963d0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963cc) {
            ctx->pc = 0x2963E8u;
            goto label_2963e8;
        }
    }
    ctx->pc = 0x2963D4u;
    // 0x2963d4: 0x0  nop
    ctx->pc = 0x2963d4u;
    // NOP
label_2963d8:
    // 0x2963d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2963d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2963dc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2963DCu;
    SET_GPR_U32(ctx, 31, 0x2963E4u);
    ctx->pc = 0x2963E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963DCu;
    // 0x2963e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2963DCu, 0x2963E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963E4u;
label_2963e4:
    // 0x2963e4: 0x8e427a84  lw          $v0, 0x7A84($s2)
    ctx->pc = 0x2963e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31364)));
label_2963e8:
    // 0x2963e8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2963e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2963ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2963ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2963f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2963F0u;
    {
        const bool branch_taken_0x2963f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2963F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963F0u;
        // 0x2963f4: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963f0) {
            ctx->pc = 0x2963D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2963d8;
        }
    }
    ctx->pc = 0x2963F8u;
    // 0x2963f8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x2963fc: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x2963FCu;
    SET_GPR_U32(ctx, 31, 0x296404u);
    ctx->pc = 0x296400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963FCu;
    // 0x296400: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x2963FCu, 0x296404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296404u;
label_296404:
    // 0x296404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x296404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296408: 0xc0a5916  jal         func_296458
    ctx->pc = 0x296408u;
    SET_GPR_U32(ctx, 31, 0x296410u);
    ctx->pc = 0x29640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296408u;
    // 0x29640c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296458u, 0x296408u, 0x296410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296410u;
label_296410:
    // 0x296410: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296410u;
    {
        const bool branch_taken_0x296410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296410u;
        // 0x296414: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296410) {
            ctx->pc = 0x296428u;
            goto label_296428;
        }
    }
    ctx->pc = 0x296418u;
label_296418:
    // 0x296418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29641c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x29641Cu;
    SET_GPR_U32(ctx, 31, 0x296424u);
    ctx->pc = 0x296420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29641Cu;
    // 0x296420: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x29641Cu, 0x296424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296424u;
label_296424:
    // 0x296424: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x296424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_296428:
    // 0x296428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29642c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29642Cu;
    {
        const bool branch_taken_0x29642c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29642Cu;
        // 0x296430: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29642c) {
            ctx->pc = 0x296418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296418;
        }
    }
    ctx->pc = 0x296434u;
    // 0x296434: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x296434u;
    SET_GPR_U32(ctx, 31, 0x29643Cu);
    ctx->pc = 0x296438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296434u;
    // 0x296438: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x296434u, 0x29643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29643Cu;
label_29643c:
    // 0x29643c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x29643cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296440: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x296440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296444: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x296444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29644c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29644cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296450: 0x3e00008  jr          $ra
    ctx->pc = 0x296450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296450u;
        // 0x296454: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296458u;
}
