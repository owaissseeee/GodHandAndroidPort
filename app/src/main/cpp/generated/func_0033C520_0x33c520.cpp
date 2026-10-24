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

// Function: func_0033C520
// Address: 0x33c520 - 0x33c548
void func_0033C520_0x33c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C520_0x33c520");
#endif

    ctx->pc = 0x33c520u;

    // 0x33c520: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33c520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33c524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33c524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c528: 0x24849d3c  addiu       $a0, $a0, -0x62C4
    ctx->pc = 0x33c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942012));
    // 0x33c52c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9D3Cu));
    // 0x33c530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33c534: 0x3e00008  jr          $ra
    ctx->pc = 0x33C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C534u;
        // 0x33c538: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C53Cu;
    // 0x33c53c: 0x0  nop
    ctx->pc = 0x33c53cu;
    // NOP
    // 0x33c540: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33c540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33c544: 0x0  nop
    ctx->pc = 0x33c544u;
    // NOP
    ctx->pc = 0x33c548u;
}
