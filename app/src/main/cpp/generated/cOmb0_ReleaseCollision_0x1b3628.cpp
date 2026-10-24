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

// Function: cOmb0_ReleaseCollision
// Address: 0x1b3628 - 0x1b3658
void cOmb0_ReleaseCollision_0x1b3628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmb0_ReleaseCollision_0x1b3628");
#endif

    switch (ctx->pc) {
        case 0x1b3648u: goto label_1b3648;
        default: break;
    }

    ctx->pc = 0x1b3628u;

    // 0x1b3628: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b3628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b362c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b362cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3634: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b3634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b3638: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1b3638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1b363c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3640: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x1B3640u;
    SET_GPR_U32(ctx, 31, 0x1B3648u);
    ctx->pc = 0x1B3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3640u;
    // 0x1b3644: 0xa040062c  sb          $zero, 0x62C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1580), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x1B3640u, 0x1B3648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3648u;
label_1b3648:
    // 0x1b3648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b364c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B364Cu;
        // 0x1b3650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3654u;
    // 0x1b3654: 0x0  nop
    ctx->pc = 0x1b3654u;
    // NOP
    ctx->pc = 0x1b3658u;
}
