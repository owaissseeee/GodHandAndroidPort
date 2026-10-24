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

// Function: Obj0000_IsSet_D_00747A80_Bit_10000000_2B8978
// Address: 0x2b8978 - 0x2b8990
void Obj0000_IsSet_D_00747A80_Bit_10000000_2B8978_0x2b8978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_D_00747A80_Bit_10000000_2B8978_0x2b8978");
#endif

    ctx->pc = 0x2b8978u;

    // 0x2b8978: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2b8978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2b897c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2b8980: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x2b8980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x2b8984: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b8984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b8988: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8988u;
        // 0x2b898c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8990u;
}
