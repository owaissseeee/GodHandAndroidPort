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

// Function: Obj2B28_CopyU16_8C2_To38_ReturnZero
// Address: 0x2b2fd8 - 0x2b2ff0
void Obj2B28_CopyU16_8C2_To38_ReturnZero_0x2b2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj2B28_CopyU16_8C2_To38_ReturnZero_0x2b2fd8");
#endif

    ctx->pc = 0x2b2fd8u;

    // 0x2b2fd8: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2b2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b2fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fe0: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x2b2fe0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b2fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FE4u;
        // 0x2b2fe8: 0xa4850038  sh          $a1, 0x38($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2FECu;
    // 0x2b2fec: 0x0  nop
    ctx->pc = 0x2b2fecu;
    // NOP
    ctx->pc = 0x2b2ff0u;
}
