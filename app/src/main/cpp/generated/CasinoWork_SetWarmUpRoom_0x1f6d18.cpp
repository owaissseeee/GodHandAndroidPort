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

// Function: CasinoWork_SetWarmUpRoom
// Address: 0x1f6d18 - 0x1f6d38
void CasinoWork_SetWarmUpRoom_0x1f6d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CasinoWork_SetWarmUpRoom_0x1f6d18");
#endif

    ctx->pc = 0x1f6d18u;

    // 0x1f6d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6d1c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1f6d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1f6d20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f6d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f6d24: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1f6d24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1f6d28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f6d2c: 0xa486000c  sh          $a2, 0xC($a0)
    ctx->pc = 0x1f6d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f6d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D30u;
        // 0x1f6d34: 0xa487000e  sh          $a3, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6D38u;
}
