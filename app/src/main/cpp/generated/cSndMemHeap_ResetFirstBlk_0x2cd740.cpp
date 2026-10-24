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

// Function: cSndMemHeap_ResetFirstBlk
// Address: 0x2cd740 - 0x2cd780
void cSndMemHeap_ResetFirstBlk_0x2cd740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_ResetFirstBlk_0x2cd740");
#endif

    ctx->pc = 0x2cd740u;

    // 0x2cd740: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2cd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd744: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2cd744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2cd748: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd74c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2cd74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2cd750: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2cd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd754: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2cd754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2cd758: 0x8c820384  lw          $v0, 0x384($a0)
    ctx->pc = 0x2cd758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x2cd75c: 0x8c850380  lw          $a1, 0x380($a0)
    ctx->pc = 0x2cd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd760: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2cd760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2cd764: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2cd764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd768: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2cd768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2cd76c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2cd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd770: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2cd770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2cd774: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2cd774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd778: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD778u;
        // 0x2cd77c: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD780u;
}
