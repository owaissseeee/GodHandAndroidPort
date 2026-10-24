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
// Function: __throw_bad_typeid
// Address: 0x7ca3c0 - 0x7ca440
void ps2___throw_bad_typeid_0x7ca3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_bad_typeid_0x7ca3c0");
#endif

    switch (ctx->pc) {
        case 0x7ca3c0u: goto label_7ca3c0;
        case 0x7ca3c4u: goto label_7ca3c4;
        case 0x7ca3c8u: goto label_7ca3c8;
        case 0x7ca3ccu: goto label_7ca3cc;
        case 0x7ca3d0u: goto label_7ca3d0;
        case 0x7ca3d4u: goto label_7ca3d4;
        case 0x7ca3d8u: goto label_7ca3d8;
        case 0x7ca3dcu: goto label_7ca3dc;
        case 0x7ca3e0u: goto label_7ca3e0;
        case 0x7ca3e4u: goto label_7ca3e4;
        case 0x7ca3e8u: goto label_7ca3e8;
        case 0x7ca3ecu: goto label_7ca3ec;
        case 0x7ca3f0u: goto label_7ca3f0;
        case 0x7ca3f4u: goto label_7ca3f4;
        case 0x7ca3f8u: goto label_7ca3f8;
        case 0x7ca3fcu: goto label_7ca3fc;
        case 0x7ca400u: goto label_7ca400;
        case 0x7ca404u: goto label_7ca404;
        case 0x7ca408u: goto label_7ca408;
        case 0x7ca40cu: goto label_7ca40c;
        case 0x7ca410u: goto label_7ca410;
        case 0x7ca414u: goto label_7ca414;
        case 0x7ca418u: goto label_7ca418;
        case 0x7ca41cu: goto label_7ca41c;
        case 0x7ca420u: goto label_7ca420;
        case 0x7ca424u: goto label_7ca424;
        case 0x7ca428u: goto label_7ca428;
        case 0x7ca42cu: goto label_7ca42c;
        case 0x7ca430u: goto label_7ca430;
        case 0x7ca434u: goto label_7ca434;
        case 0x7ca438u: goto label_7ca438;
        case 0x7ca43cu: goto label_7ca43c;
        default: break;
    }

    ctx->pc = 0x7ca3c0u;

label_7ca3c0:
    // 0x7ca3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ca3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_7ca3c4:
    // 0x7ca3c4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ca3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7ca3c8:
    // 0x7ca3c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ca3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_7ca3cc:
    // 0x7ca3cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x7ca3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7ca3d0:
    // 0x7ca3d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ca3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_7ca3d4:
    // 0x7ca3d4: 0x24510f88  addiu       $s1, $v0, 0xF88
    ctx->pc = 0x7ca3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3976));
label_7ca3d8:
    // 0x7ca3d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7ca3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_7ca3dc:
    // 0x7ca3dc: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7ca3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
label_7ca3e0:
    // 0x7ca3e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ca3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_7ca3e4:
    // 0x7ca3e4: 0xc1f27d2  jal         func_7C9F48
label_7ca3e8:
    if (ctx->pc == 0x7CA3E8u) {
        ctx->pc = 0x7CA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA3E4u;
        // 0x7ca3e8: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA3ECu;
        goto label_7ca3ec;
    }
    ctx->pc = 0x7CA3E4u;
    SET_GPR_U32(ctx, 31, 0x7CA3ECu);
    ctx->pc = 0x7CA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA3E4u;
    // 0x7ca3e8: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F48u, 0x7CA3E4u, 0x7CA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA3ECu;
label_7ca3ec:
    // 0x7ca3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca3f0:
    // 0x7ca3f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_7ca3f4:
    if (ctx->pc == 0x7CA3F4u) {
        ctx->pc = 0x7CA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA3F0u;
        // 0x7ca3f4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA3F8u;
        goto label_7ca3f8;
    }
    ctx->pc = 0x7CA3F0u;
    {
        const bool branch_taken_0x7ca3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA3F0u;
        // 0x7ca3f4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca3f0) {
            ctx->pc = 0x7CA400u;
            goto label_7ca400;
        }
    }
    ctx->pc = 0x7CA3F8u;
label_7ca3f8:
    // 0x7ca3f8: 0xc1f2fba  jal         func_7CBEE8
label_7ca3fc:
    if (ctx->pc == 0x7CA3FCu) {
        ctx->pc = 0x7CA400u;
        goto label_7ca400;
    }
    ctx->pc = 0x7CA3F8u;
    SET_GPR_U32(ctx, 31, 0x7CA400u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA3F8u, 0x7CA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA400u;
label_7ca400:
    // 0x7ca400: 0x26421058  addiu       $v0, $s2, 0x1058
    ctx->pc = 0x7ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4184));
label_7ca404:
    // 0x7ca404: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7ca404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_7ca408:
    // 0x7ca408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7ca408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7ca40c:
    // 0x7ca40c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7ca40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7ca410:
    // 0x7ca410: 0x40f809  jalr        $v0
label_7ca414:
    if (ctx->pc == 0x7CA414u) {
        ctx->pc = 0x7CA418u;
        goto label_7ca418;
    }
    ctx->pc = 0x7CA410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CA418u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA410u, 0x7CA418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CA418u;
label_7ca418:
    // 0x7ca418: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7ca418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
label_7ca41c:
    // 0x7ca41c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7ca41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca420:
    // 0x7ca420: 0x24c69cb8  addiu       $a2, $a2, -0x6348
    ctx->pc = 0x7ca420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941880));
label_7ca424:
    // 0x7ca424: 0xc1f2800  jal         func_7CA000
label_7ca428:
    if (ctx->pc == 0x7CA428u) {
        ctx->pc = 0x7CA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA424u;
        // 0x7ca428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA42Cu;
        goto label_7ca42c;
    }
    ctx->pc = 0x7CA424u;
    SET_GPR_U32(ctx, 31, 0x7CA42Cu);
    ctx->pc = 0x7CA428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA424u;
    // 0x7ca428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA000u, 0x7CA424u, 0x7CA42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA42Cu;
label_7ca42c:
    // 0x7ca42c: 0xc1f2fba  jal         func_7CBEE8
label_7ca430:
    if (ctx->pc == 0x7CA430u) {
        ctx->pc = 0x7CA434u;
        goto label_7ca434;
    }
    ctx->pc = 0x7CA42Cu;
    SET_GPR_U32(ctx, 31, 0x7CA434u);
    ctx->pc = 0x7CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBEE8u, 0x7CA42Cu, 0x7CA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA434u;
label_7ca434:
    // 0x7ca434: 0x26421058  addiu       $v0, $s2, 0x1058
    ctx->pc = 0x7ca434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4184));
label_7ca438:
    // 0x7ca438: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_7ca43c:
    if (ctx->pc == 0x7CA43Cu) {
        ctx->pc = 0x7CA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA438u;
        // 0x7ca43c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA440u;
        goto label_fallthrough_0x7ca438;
    }
    ctx->pc = 0x7CA438u;
    {
        const bool branch_taken_0x7ca438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA438u;
        // 0x7ca43c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca438) {
            ctx->pc = 0x7CA3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca3f8;
        }
    }
label_fallthrough_0x7ca438:
    ctx->pc = 0x7CA440u;
}
} // namespace gh_mcport
