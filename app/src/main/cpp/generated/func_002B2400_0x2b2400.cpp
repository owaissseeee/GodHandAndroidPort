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

// Function: func_002B2400
// Address: 0x2b2400 - 0x2b2438
void func_002B2400_0x2b2400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2400_0x2b2400");
#endif

    ctx->pc = 0x2b2400u;

    // 0x2b2400: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2b2400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b2404: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2b2404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b2408: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2b2408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2b240c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2b240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2b2410: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b2410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b2414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2414u;
    {
        const bool branch_taken_0x2b2414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2414u;
        // 0x2b2418: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2414) {
            ctx->pc = 0x2B2430u;
            goto label_2b2430;
        }
    }
    ctx->pc = 0x2B241Cu;
    // 0x2b241c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2420: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x2b2420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2424: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x2b2424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2428: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x2b2428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b242c: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x2b242cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
label_2b2430:
    // 0x2b2430: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2438u;
}
