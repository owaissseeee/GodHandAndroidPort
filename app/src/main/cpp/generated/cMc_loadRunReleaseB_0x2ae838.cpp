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

// Function: cMc_loadRunReleaseB
// Address: 0x2ae838 - 0x2ae8a8
void cMc_loadRunReleaseB_0x2ae838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_loadRunReleaseB_0x2ae838");
#endif

    switch (ctx->pc) {
        case 0x2ae85cu: goto label_2ae85c;
        case 0x2ae86cu: goto label_2ae86c;
        case 0x2ae874u: goto label_2ae874;
        case 0x2ae87cu: goto label_2ae87c;
        case 0x2ae888u: goto label_2ae888;
        default: break;
    }

    ctx->pc = 0x2ae838u;

    // 0x2ae838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae840: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ae840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ae844: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2ae844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x2ae848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae84c: 0x26106900  addiu       $s0, $s0, 0x6900
    ctx->pc = 0x2ae84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26880));
    // 0x2ae850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae854: 0xc0ab92a  jal         func_2AE4A8
    ctx->pc = 0x2AE854u;
    SET_GPR_U32(ctx, 31, 0x2AE85Cu);
    ctx->pc = 0x2AE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE854u;
    // 0x2ae858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE4A8u, 0x2AE854u, 0x2AE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE85Cu;
label_2ae85c:
    // 0x2ae85c: 0x3c110000  lui         $s1, 0x0
    ctx->pc = 0x2ae85cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2AE85Cu) & 0xFFFFu)) << 16));
    // 0x2ae860: 0x26310000  addiu       $s1, $s1, 0x0
    ctx->pc = 0x2ae860u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2AE860u) & 0xFFFFu))));
    // 0x2ae864: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE864u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE864u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE86Cu);
        ctx->pc = 0x2AE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE864u;
        // 0x2ae868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE864u, 0x2AE86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE86Cu;
label_2ae86c:
    // 0x2ae86c: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE86Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE86Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE874u);
        ctx->pc = 0x2AE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE86Cu;
        // 0x2ae870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE86Cu, 0x2AE874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE874u;
label_2ae874:
    // 0x2ae874: 0xc0ab97a  jal         func_2AE5E8
    ctx->pc = 0x2AE874u;
    SET_GPR_U32(ctx, 31, 0x2AE87Cu);
    ctx->pc = 0x2AE878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE874u;
    // 0x2ae878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE5E8u, 0x2AE874u, 0x2AE87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE87Cu;
label_2ae87c:
    // 0x2ae87c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2ae87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2ae880: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2AE880u;
    SET_GPR_U32(ctx, 31, 0x2AE888u);
    ctx->pc = 0x2AE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE880u;
    // 0x2ae884: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2AE880u, 0x2AE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE888u;
label_2ae888:
    // 0x2ae888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ae888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ae88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae894: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE894u;
        // 0x2ae898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE89Cu;
    // 0x2ae89c: 0x0  nop
    ctx->pc = 0x2ae89cu;
    // NOP
    // 0x2ae8a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ae8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae8a4: 0x0  nop
    ctx->pc = 0x2ae8a4u;
    // NOP
    ctx->pc = 0x2ae8a8u;
}
