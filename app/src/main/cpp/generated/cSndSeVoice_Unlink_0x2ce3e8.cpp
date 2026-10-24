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

// Function: cSndSeVoice_Unlink
// Address: 0x2ce3e8 - 0x2ce430
void cSndSeVoice_Unlink_0x2ce3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Unlink_0x2ce3e8");
#endif

    ctx->pc = 0x2ce3e8u;

    // 0x2ce3e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ce3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce3ec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE3ECu;
    {
        const bool branch_taken_0x2ce3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3ec) {
            ctx->pc = 0x2CE3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE3ECu;
            // 0x2ce3f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE400u;
            goto label_2ce400;
        }
    }
    ctx->pc = 0x2CE3F4u;
    // 0x2ce3f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ce3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ce3f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE3F8u;
    {
        const bool branch_taken_0x2ce3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3F8u;
        // 0x2ce3fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce3f8) {
            ctx->pc = 0x2CE408u;
            goto label_2ce408;
        }
    }
    ctx->pc = 0x2CE400u;
label_2ce400:
    // 0x2ce400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ce400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ce404: 0xac43ee1c  sw          $v1, -0x11E4($v0)
    ctx->pc = 0x2ce404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FEE1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FEE1Cu, _value); } while (0);
label_2ce408:
    // 0x2ce408: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ce408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ce40c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE40Cu;
    {
        const bool branch_taken_0x2ce40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce40c) {
            ctx->pc = 0x2CE410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE40Cu;
            // 0x2ce410: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE420u;
            goto label_2ce420;
        }
    }
    ctx->pc = 0x2CE414u;
    // 0x2ce414: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ce414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce418: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ce418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ce41c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ce41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2ce420:
    // 0x2ce420: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2ce420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2ce424: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE424u;
        // 0x2ce428: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE42Cu;
    // 0x2ce42c: 0x0  nop
    ctx->pc = 0x2ce42cu;
    // NOP
    ctx->pc = 0x2ce430u;
}
