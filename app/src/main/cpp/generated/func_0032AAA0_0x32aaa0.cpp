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

// Function: func_0032AAA0
// Address: 0x32aaa0 - 0x32aad8
void func_0032AAA0_0x32aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AAA0_0x32aaa0");
#endif

    switch (ctx->pc) {
        case 0x32aab4u: goto label_32aab4;
        case 0x32aabcu: goto label_32aabc;
        case 0x32aac4u: goto label_32aac4;
        default: break;
    }

    ctx->pc = 0x32aaa0u;

    // 0x32aaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32aaa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32aaa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32aaac: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AAACu;
    SET_GPR_U32(ctx, 31, 0x32AAB4u);
    ctx->pc = 0x32AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAACu;
    // 0x32aab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AAACu, 0x32AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAB4u;
label_32aab4:
    // 0x32aab4: 0xc0caab6  jal         func_32AAD8
    ctx->pc = 0x32AAB4u;
    SET_GPR_U32(ctx, 31, 0x32AABCu);
    ctx->pc = 0x32AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAB4u;
    // 0x32aab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AAD8u, 0x32AAB4u, 0x32AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AABCu;
label_32aabc:
    // 0x32aabc: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32AABCu;
    SET_GPR_U32(ctx, 31, 0x32AAC4u);
    ctx->pc = 0x32AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AABCu;
    // 0x32aac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AABCu, 0x32AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAC4u;
label_32aac4:
    // 0x32aac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32aac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32aac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aacc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32aaccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAD0u;
        // 0x32aad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AAD8u;
}
