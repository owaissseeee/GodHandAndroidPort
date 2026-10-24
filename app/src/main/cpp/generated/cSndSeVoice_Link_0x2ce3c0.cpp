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

// Function: cSndSeVoice_Link
// Address: 0x2ce3c0 - 0x2ce3e8
void cSndSeVoice_Link_0x2ce3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Link_0x2ce3c0");
#endif

    ctx->pc = 0x2ce3c0u;

    // 0x2ce3c0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2ce3c4: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x2ce3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x2ce3c8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ce3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEE1Cu));
    // 0x2ce3cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ce3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ce3d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ce3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEE1Cu));
    // 0x2ce3d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CE3D4u;
    {
        const bool branch_taken_0x2ce3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3d4) {
            ctx->pc = 0x2CE3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE3D4u;
            // 0x2ce3d8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE3DCu;
            goto label_2ce3dc;
        }
    }
    ctx->pc = 0x2CE3DCu;
label_2ce3dc:
    // 0x2ce3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3DCu;
        // 0x2ce3e0: 0xac64001c  sw          $a0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE3E4u;
    // 0x2ce3e4: 0x0  nop
    ctx->pc = 0x2ce3e4u;
    // NOP
    ctx->pc = 0x2ce3e8u;
}
