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

// Function: func_001FC7C8
// Address: 0x1fc7c8 - 0x1fc7f8
void func_001FC7C8_0x1fc7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FC7C8_0x1fc7c8");
#endif

    ctx->pc = 0x1fc7c8u;

    // 0x1fc7c8: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1fc7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fc7cc: 0xf8800010  sqc2        $vf0, 0x10($a0)
    ctx->pc = 0x1fc7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fc7d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fc7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc7d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fc7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7d8: 0xa483002c  sh          $v1, 0x2C($a0)
    ctx->pc = 0x1fc7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc7dc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1fc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1fc7e0: 0xa080002e  sb          $zero, 0x2E($a0)
    ctx->pc = 0x1fc7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fc7e4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1fc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1fc7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7E8u;
        // 0x1fc7ec: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC7F0u;
    // 0x1fc7f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fc7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fc7f4: 0x0  nop
    ctx->pc = 0x1fc7f4u;
    // NOP
    ctx->pc = 0x1fc7f8u;
}
