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

// Function: func_0035AB98
// Address: 0x35ab98 - 0x35abc0
void func_0035AB98_0x35ab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AB98_0x35ab98");
#endif

    ctx->pc = 0x35ab98u;

    // 0x35ab98: 0x24840d30  addiu       $a0, $a0, 0xD30
    ctx->pc = 0x35ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x35ab9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ab9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aba0: 0x8c83028c  lw          $v1, 0x28C($a0)
    ctx->pc = 0x35aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x35aba4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35aba8: 0x8c850290  lw          $a1, 0x290($a0)
    ctx->pc = 0x35aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x35abac: 0x3e00008  jr          $ra
    ctx->pc = 0x35ABACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABACu;
        // 0x35abb0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ABACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ABB4u;
    // 0x35abb4: 0x0  nop
    ctx->pc = 0x35abb4u;
    // NOP
    // 0x35abb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35abbc: 0x0  nop
    ctx->pc = 0x35abbcu;
    // NOP
    ctx->pc = 0x35abc0u;
}
