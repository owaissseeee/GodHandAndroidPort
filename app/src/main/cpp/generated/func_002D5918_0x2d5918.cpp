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

// Function: func_002D5918
// Address: 0x2d5918 - 0x2d5958
void func_002D5918_0x2d5918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5918_0x2d5918");
#endif

    ctx->pc = 0x2d5918u;

    // 0x2d5918: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2d591c: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x2d591cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5920: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d5920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d5924: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d5928: 0x9486001c  lhu         $a2, 0x1C($a0)
    ctx->pc = 0x2d5928u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d592c: 0x24a55ad8  addiu       $a1, $a1, 0x5AD8
    ctx->pc = 0x2d592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23256));
    // 0x2d5930: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x2d5934: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5938: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2d5938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2d593c: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2d593cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d5940: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x2d5940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x2d5944: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x2d5944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2d5948: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x2d5948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x2d594c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D594Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D594Cu;
        // 0x2d5950: 0xac860034  sw          $a2, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D594Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5954u;
    // 0x2d5954: 0x0  nop
    ctx->pc = 0x2d5954u;
    // NOP
    ctx->pc = 0x2d5958u;
}
