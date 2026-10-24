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

// Function: cSnd_BgmEvIsPlaying
// Address: 0x2d1578 - 0x2d15a8
void cSnd_BgmEvIsPlaying_0x2d1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvIsPlaying_0x2d1578");
#endif

    switch (ctx->pc) {
        case 0x2d1594u: goto label_2d1594;
        default: break;
    }

    ctx->pc = 0x2d1578u;

    // 0x2d1578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d157c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d157cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1580: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2d1580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2d1584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1588: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2d1588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2d158c: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D158Cu;
    SET_GPR_U32(ctx, 31, 0x2D1594u);
    ctx->pc = 0x2D1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D158Cu;
    // 0x2d1590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D158Cu, 0x2D1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1594u;
label_2d1594:
    // 0x2d1594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d1598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d159c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D159Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D159Cu;
        // 0x2d15a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D159Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D15A4u;
    // 0x2d15a4: 0x0  nop
    ctx->pc = 0x2d15a4u;
    // NOP
    ctx->pc = 0x2d15a8u;
}
