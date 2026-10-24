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

// Function: func_0031A300
// Address: 0x31a300 - 0x31a320
void func_0031A300_0x31a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A300_0x31a300");
#endif

    ctx->pc = 0x31a300u;

    // 0x31a300: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31a300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31a304: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x31a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31a308: 0xac460b00  sw          $a2, 0xB00($v0)
    ctx->pc = 0x31a308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2816), GPR_U32(ctx, 6));
    // 0x31a30c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31a30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a310: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x31a310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x31a314: 0x3e00008  jr          $ra
    ctx->pc = 0x31A314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A314u;
        // 0x31a318: 0xac860b04  sw          $a2, 0xB04($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2820), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A31Cu;
    // 0x31a31c: 0x0  nop
    ctx->pc = 0x31a31cu;
    // NOP
    ctx->pc = 0x31a320u;
}
