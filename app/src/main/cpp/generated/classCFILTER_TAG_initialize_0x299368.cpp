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

// Function: classCFILTER_TAG_initialize
// Address: 0x299368 - 0x2993a0
void classCFILTER_TAG_initialize_0x299368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classCFILTER_TAG_initialize_0x299368");
#endif

    ctx->pc = 0x299368u;

    // 0x299368: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29936c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x29936cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x299370: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x299370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x299374: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x299374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x299378: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x299378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29937c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299380: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x299380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299384: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x299384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x299388: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29938c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x299390: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x299394: 0x3e00008  jr          $ra
    ctx->pc = 0x299394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299394u;
        // 0x299398: 0xac824080  sw          $v0, 0x4080($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29939Cu;
    // 0x29939c: 0x0  nop
    ctx->pc = 0x29939cu;
    // NOP
    ctx->pc = 0x2993a0u;
}
