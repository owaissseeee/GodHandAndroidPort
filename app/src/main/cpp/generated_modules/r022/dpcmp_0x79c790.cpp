#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: dpcmp
// Address: 0x79c790 - 0x79c7e0
void dpcmp_0x79c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x79c790");
#endif

    switch (ctx->pc) {
        case 0x79c7b0u: goto label_79c7b0;
        case 0x79c7c0u: goto label_79c7c0;
        case 0x79c7ccu: goto label_79c7cc;
        default: break;
    }

    ctx->pc = 0x79c790u;

    // 0x79c790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79c794: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x79c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x79c798: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x79c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x79c79c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79c7a0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x79c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x79c7a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79c7a8: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C7A8u;
    SET_GPR_U32(ctx, 31, 0x79C7B0u);
    ctx->pc = 0x79C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C7A8u;
    // 0x79c7ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C7A8u, 0x79C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C7B0u;
label_79c7b0:
    // 0x79c7b0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79c7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c7b4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x79c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x79c7b8: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C7B8u;
    SET_GPR_U32(ctx, 31, 0x79C7C0u);
    ctx->pc = 0x79C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C7B8u;
    // 0x79c7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C7B8u, 0x79C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C7C0u;
label_79c7c0:
    // 0x79c7c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c7c4: 0xc1e719e  jal         func_79C678
    ctx->pc = 0x79C7C4u;
    SET_GPR_U32(ctx, 31, 0x79C7CCu);
    ctx->pc = 0x79C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C7C4u;
    // 0x79c7c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C678u, 0x79C7C4u, 0x79C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C7CCu;
label_79c7cc:
    // 0x79c7cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c7d0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x79c7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x79C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C7D4u;
        // 0x79c7d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C7DCu;
    // 0x79c7dc: 0x0  nop
    ctx->pc = 0x79c7dcu;
    // NOP
    ctx->pc = 0x79c7e0u;
}
} // namespace gh_r022
