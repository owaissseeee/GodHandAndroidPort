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

// Function: func_003550D0
// Address: 0x3550d0 - 0x355130
void func_003550D0_0x3550d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003550D0_0x3550d0");
#endif

    switch (ctx->pc) {
        case 0x3550f8u: goto label_3550f8;
        case 0x355108u: goto label_355108;
        case 0x355114u: goto label_355114;
        default: break;
    }

    ctx->pc = 0x3550d0u;

    // 0x3550d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3550d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3550d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3550d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3550d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3550d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3550dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3550e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3550e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3550e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3550e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3550e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3550ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3550f0: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x3550F0u;
    SET_GPR_U32(ctx, 31, 0x3550F8u);
    ctx->pc = 0x3550F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3550F0u;
    // 0x3550f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x3550F0u, 0x3550F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3550F8u;
label_3550f8:
    // 0x3550f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3550f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3550fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355100: 0xc0d544c  jal         func_355130
    ctx->pc = 0x355100u;
    SET_GPR_U32(ctx, 31, 0x355108u);
    ctx->pc = 0x355104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355100u;
    // 0x355104: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355130u, 0x355100u, 0x355108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355108u;
label_355108:
    // 0x355108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x355108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35510c: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x35510Cu;
    SET_GPR_U32(ctx, 31, 0x355114u);
    ctx->pc = 0x355110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35510Cu;
    // 0x355110: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x35510Cu, 0x355114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355114u;
label_355114:
    // 0x355114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355118: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x355118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35511c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35511cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x355120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355124: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x355124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355128: 0x3e00008  jr          $ra
    ctx->pc = 0x355128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355128u;
        // 0x35512c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355130u;
}
