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

// Function: _IO_un_link
// Address: 0x38c1a8 - 0x38c208
void ps2__IO_un_link_0x38c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_un_link_0x38c1a8");
#endif

    switch (ctx->pc) {
        case 0x38c1d8u: goto label_38c1d8;
        default: break;
    }

    ctx->pc = 0x38c1a8u;

    // 0x38c1a8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x38c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38c1ac: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x38c1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x38c1b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38C1B0u;
    {
        const bool branch_taken_0x38c1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1B0u;
        // 0x38c1b4: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1b0) {
            ctx->pc = 0x38C200u;
            goto label_38c200;
        }
    }
    ctx->pc = 0x38C1B8u;
    // 0x38c1b8: 0x8c6250f8  lw          $v0, 0x50F8($v1)
    ctx->pc = 0x38c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20728)));
    // 0x38c1bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38C1BCu;
    {
        const bool branch_taken_0x38c1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1BCu;
        // 0x38c1c0: 0x246550f8  addiu       $a1, $v1, 0x50F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1bc) {
            ctx->pc = 0x38C1F4u;
            goto label_38c1f4;
        }
    }
    ctx->pc = 0x38C1C4u;
    // 0x38c1c4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38C1C4u;
    {
        const bool branch_taken_0x38c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x38c1c4) {
            ctx->pc = 0x38C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C1C4u;
            // 0x38c1c8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C1D8u;
            goto label_38c1d8;
        }
    }
    ctx->pc = 0x38C1CCu;
    // 0x38c1cc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x38c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x38c1d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38C1D0u;
    {
        const bool branch_taken_0x38c1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1D0u;
        // 0x38c1d4: 0xac6250f8  sw          $v0, 0x50F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1d0) {
            ctx->pc = 0x38C1F4u;
            goto label_38c1f4;
        }
    }
    ctx->pc = 0x38C1D8u;
label_38c1d8:
    // 0x38c1d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x38c1dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C1DCu;
    {
        const bool branch_taken_0x38c1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1DCu;
        // 0x38c1e0: 0x24650034  addiu       $a1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1dc) {
            ctx->pc = 0x38C1F4u;
            goto label_38c1f4;
        }
    }
    ctx->pc = 0x38C1E4u;
    // 0x38c1e4: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x38C1E4u;
    {
        const bool branch_taken_0x38c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x38c1e4) {
            ctx->pc = 0x38C1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C1E4u;
            // 0x38c1e8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c1d8;
        }
    }
    ctx->pc = 0x38C1ECu;
    // 0x38c1ec: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x38c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x38c1f0: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x38c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_38c1f4:
    // 0x38c1f4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x38c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x38c1f8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x38c1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x38c1fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x38c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_38c200:
    // 0x38c200: 0x3e00008  jr          $ra
    ctx->pc = 0x38C200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C208u;
}
