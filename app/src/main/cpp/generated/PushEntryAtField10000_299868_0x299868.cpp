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

// Function: PushEntryAtField10000_299868
// Address: 0x299868 - 0x2998a0
void PushEntryAtField10000_299868_0x299868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushEntryAtField10000_299868_0x299868");
#endif

    ctx->pc = 0x299868u;

    // 0x299868: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29986c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x299870: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299874: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x299874u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x299878: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29987c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x29987cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x299880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299884: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x299884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299888: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x299888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x29988c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x299890: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x299894: 0x3e00008  jr          $ra
    ctx->pc = 0x299894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299894u;
        // 0x299898: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29989Cu;
    // 0x29989c: 0x0  nop
    ctx->pc = 0x29989cu;
    // NOP
    ctx->pc = 0x2998a0u;
}
