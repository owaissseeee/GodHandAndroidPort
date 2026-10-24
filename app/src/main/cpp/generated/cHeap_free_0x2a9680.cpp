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

// Function: cHeap_free
// Address: 0x2a9680 - 0x2a96c0
void cHeap_free_0x2a9680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeap_free_0x2a9680");
#endif

    ctx->pc = 0x2a9680u;

    // 0x2a9680: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A9680u;
    {
        const bool branch_taken_0x2a9680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9680u;
        // 0x2a9684: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9680) {
            ctx->pc = 0x2A96B8u;
            goto label_2a96b8;
        }
    }
    ctx->pc = 0x2A9688u;
    // 0x2a9688: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2a9688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a968c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a9690: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2a9690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a9694: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2a9694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2a9698: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2a9698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a969c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a96a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a96a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a96a8: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x2a96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x2a96ac: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2a96acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a96b0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A96B0u;
    {
        const bool branch_taken_0x2a96b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a96b0) {
            ctx->pc = 0x2A96B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A96B0u;
            // 0x2a96b4: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A96B8u;
            goto label_2a96b8;
        }
    }
    ctx->pc = 0x2A96B8u;
label_2a96b8:
    // 0x2a96b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A96B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A96C0u;
}
