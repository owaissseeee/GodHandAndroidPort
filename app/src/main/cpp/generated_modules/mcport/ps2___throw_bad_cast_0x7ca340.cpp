#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __throw_bad_cast
// Address: 0x7ca340 - 0x7ca3c0
void ps2___throw_bad_cast_0x7ca340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_bad_cast_0x7ca340");
#endif

    switch (ctx->pc) {
        case 0x7ca340u: goto label_7ca340;
        case 0x7ca344u: goto label_7ca344;
        case 0x7ca348u: goto label_7ca348;
        case 0x7ca34cu: goto label_7ca34c;
        case 0x7ca350u: goto label_7ca350;
        case 0x7ca354u: goto label_7ca354;
        case 0x7ca358u: goto label_7ca358;
        case 0x7ca35cu: goto label_7ca35c;
        case 0x7ca360u: goto label_7ca360;
        case 0x7ca364u: goto label_7ca364;
        case 0x7ca368u: goto label_7ca368;
        case 0x7ca36cu: goto label_7ca36c;
        case 0x7ca370u: goto label_7ca370;
        case 0x7ca374u: goto label_7ca374;
        case 0x7ca378u: goto label_7ca378;
        case 0x7ca37cu: goto label_7ca37c;
        case 0x7ca380u: goto label_7ca380;
        case 0x7ca384u: goto label_7ca384;
        case 0x7ca388u: goto label_7ca388;
        case 0x7ca38cu: goto label_7ca38c;
        case 0x7ca390u: goto label_7ca390;
        case 0x7ca394u: goto label_7ca394;
        case 0x7ca398u: goto label_7ca398;
        case 0x7ca39cu: goto label_7ca39c;
        case 0x7ca3a0u: goto label_7ca3a0;
        case 0x7ca3a4u: goto label_7ca3a4;
        case 0x7ca3a8u: goto label_7ca3a8;
        case 0x7ca3acu: goto label_7ca3ac;
        case 0x7ca3b0u: goto label_7ca3b0;
        case 0x7ca3b4u: goto label_7ca3b4;
        case 0x7ca3b8u: goto label_7ca3b8;
        case 0x7ca3bcu: goto label_7ca3bc;
        default: break;
    }

    ctx->pc = 0x7ca340u;

label_7ca340:
    // 0x7ca340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ca340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_7ca344:
    // 0x7ca344: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ca344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7ca348:
    // 0x7ca348: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ca348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_7ca34c:
    // 0x7ca34c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x7ca34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7ca350:
    // 0x7ca350: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ca350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_7ca354:
    // 0x7ca354: 0x24510fa0  addiu       $s1, $v0, 0xFA0
    ctx->pc = 0x7ca354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_7ca358:
    // 0x7ca358: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7ca358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_7ca35c:
    // 0x7ca35c: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7ca35cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
label_7ca360:
    // 0x7ca360: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ca360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_7ca364:
    // 0x7ca364: 0xc1f27d2  jal         func_7C9F48
label_7ca368:
    if (ctx->pc == 0x7CA368u) {
        ctx->pc = 0x7CA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA364u;
        // 0x7ca368: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA36Cu;
        goto label_7ca36c;
    }
    ctx->pc = 0x7CA364u;
    SET_GPR_U32(ctx, 31, 0x7CA36Cu);
    ctx->pc = 0x7CA368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA364u;
    // 0x7ca368: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F48u, 0x7CA364u, 0x7CA36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA36Cu;
label_7ca36c:
    // 0x7ca36c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca370:
    // 0x7ca370: 0x10000003  b           . + 4 + (0x3 << 2)
label_7ca374:
    if (ctx->pc == 0x7CA374u) {
        ctx->pc = 0x7CA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA370u;
        // 0x7ca374: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA378u;
        goto label_7ca378;
    }
    ctx->pc = 0x7CA370u;
    {
        const bool branch_taken_0x7ca370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA370u;
        // 0x7ca374: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca370) {
            ctx->pc = 0x7CA380u;
            goto label_7ca380;
        }
    }
    ctx->pc = 0x7CA378u;
label_7ca378:
    // 0x7ca378: 0xc1f2fba  jal         func_7CBEE8
label_7ca37c:
    if (ctx->pc == 0x7CA37Cu) {
        ctx->pc = 0x7CA380u;
        goto label_7ca380;
    }
    ctx->pc = 0x7CA378u;
    SET_GPR_U32(ctx, 31, 0x7CA380u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA378u, 0x7CA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA380u;
label_7ca380:
    // 0x7ca380: 0x26421058  addiu       $v0, $s2, 0x1058
    ctx->pc = 0x7ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4184));
label_7ca384:
    // 0x7ca384: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7ca384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_7ca388:
    // 0x7ca388: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7ca388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7ca38c:
    // 0x7ca38c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7ca38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7ca390:
    // 0x7ca390: 0x40f809  jalr        $v0
label_7ca394:
    if (ctx->pc == 0x7CA394u) {
        ctx->pc = 0x7CA398u;
        goto label_7ca398;
    }
    ctx->pc = 0x7CA390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CA398u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA390u, 0x7CA398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CA398u;
label_7ca398:
    // 0x7ca398: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7ca398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
label_7ca39c:
    // 0x7ca39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7ca39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca3a0:
    // 0x7ca3a0: 0x24c69d50  addiu       $a2, $a2, -0x62B0
    ctx->pc = 0x7ca3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942032));
label_7ca3a4:
    // 0x7ca3a4: 0xc1f2800  jal         func_7CA000
label_7ca3a8:
    if (ctx->pc == 0x7CA3A8u) {
        ctx->pc = 0x7CA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA3A4u;
        // 0x7ca3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA3ACu;
        goto label_7ca3ac;
    }
    ctx->pc = 0x7CA3A4u;
    SET_GPR_U32(ctx, 31, 0x7CA3ACu);
    ctx->pc = 0x7CA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA3A4u;
    // 0x7ca3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA000u, 0x7CA3A4u, 0x7CA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA3ACu;
label_7ca3ac:
    // 0x7ca3ac: 0xc1f2fba  jal         func_7CBEE8
label_7ca3b0:
    if (ctx->pc == 0x7CA3B0u) {
        ctx->pc = 0x7CA3B4u;
        goto label_7ca3b4;
    }
    ctx->pc = 0x7CA3ACu;
    SET_GPR_U32(ctx, 31, 0x7CA3B4u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA3ACu, 0x7CA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA3B4u;
label_7ca3b4:
    // 0x7ca3b4: 0x26421058  addiu       $v0, $s2, 0x1058
    ctx->pc = 0x7ca3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4184));
label_7ca3b8:
    // 0x7ca3b8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_7ca3bc:
    if (ctx->pc == 0x7CA3BCu) {
        ctx->pc = 0x7CA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA3B8u;
        // 0x7ca3bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA3C0u;
        goto label_fallthrough_0x7ca3b8;
    }
    ctx->pc = 0x7CA3B8u;
    {
        const bool branch_taken_0x7ca3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA3B8u;
        // 0x7ca3bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca3b8) {
            ctx->pc = 0x7CA378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca378;
        }
    }
label_fallthrough_0x7ca3b8:
    ctx->pc = 0x7CA3C0u;
}
} // namespace gh_mcport
