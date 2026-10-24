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

// Function: Obj293_SetByte_53A_2
// Address: 0x2930b8 - 0x2930d0
void Obj293_SetByte_53A_2_0x2930b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj293_SetByte_53A_2_0x2930b8");
#endif

    ctx->pc = 0x2930b8u;

    // 0x2930b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2930b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2930bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2930BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930BCu;
        // 0x2930c0: 0xa082053a  sb          $v0, 0x53A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1338), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930C4u;
    // 0x2930c4: 0x0  nop
    ctx->pc = 0x2930c4u;
    // NOP
    // 0x2930c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2930c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2930cc: 0x0  nop
    ctx->pc = 0x2930ccu;
    // NOP
    ctx->pc = 0x2930d0u;
}
