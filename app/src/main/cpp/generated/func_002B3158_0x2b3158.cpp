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

// Function: func_002B3158
// Address: 0x2b3158 - 0x2b3190
void func_002B3158_0x2b3158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3158_0x2b3158");
#endif

    switch (ctx->pc) {
        case 0x2b3184u: goto label_2b3184;
        default: break;
    }

    ctx->pc = 0x2b3158u;

    // 0x2b3158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b315c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b315cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3164: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2b3164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2b3168: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b316c: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x2b316cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x2b3170: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2b3170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2b3174: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x2b3174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x2b3178: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2b3178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2b317c: 0xc0ad172  jal         func_2B45C8
    ctx->pc = 0x2B317Cu;
    SET_GPR_U32(ctx, 31, 0x2B3184u);
    ctx->pc = 0x2B3180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B317Cu;
    // 0x2b3180: 0xac4000a0  sw          $zero, 0xA0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45C8u, 0x2B317Cu, 0x2B3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3184u;
label_2b3184:
    // 0x2b3184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3188: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3188u;
        // 0x2b318c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3190u;
}
