#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: dpcmp
// Address: 0x79bb90 - 0x79bbe0
void dpcmp_0x79bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x79bb90");
#endif

    switch (ctx->pc) {
        case 0x79bbb0u: goto label_79bbb0;
        case 0x79bbc0u: goto label_79bbc0;
        case 0x79bbccu: goto label_79bbcc;
        default: break;
    }

    ctx->pc = 0x79bb90u;

    // 0x79bb90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79bb94: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x79bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x79bb98: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x79bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x79bb9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79bba0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x79bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x79bba4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79bba8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BBA8u;
    SET_GPR_U32(ctx, 31, 0x79BBB0u);
    ctx->pc = 0x79BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBA8u;
    // 0x79bbac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BBA8u, 0x79BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBB0u;
label_79bbb0:
    // 0x79bbb0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79bbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79bbb4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x79bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x79bbb8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BBB8u;
    SET_GPR_U32(ctx, 31, 0x79BBC0u);
    ctx->pc = 0x79BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBB8u;
    // 0x79bbbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BBB8u, 0x79BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBC0u;
label_79bbc0:
    // 0x79bbc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79bbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbc4: 0xc1e6e9e  jal         func_79BA78
    ctx->pc = 0x79BBC4u;
    SET_GPR_U32(ctx, 31, 0x79BBCCu);
    ctx->pc = 0x79BBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBC4u;
    // 0x79bbc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BA78u, 0x79BBC4u, 0x79BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBCCu;
label_79bbcc:
    // 0x79bbcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79bbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79bbd0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x79bbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79bbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x79BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBD4u;
        // 0x79bbd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BBDCu;
    // 0x79bbdc: 0x0  nop
    ctx->pc = 0x79bbdcu;
    // NOP
    ctx->pc = 0x79bbe0u;
}
} // namespace gh_r505
