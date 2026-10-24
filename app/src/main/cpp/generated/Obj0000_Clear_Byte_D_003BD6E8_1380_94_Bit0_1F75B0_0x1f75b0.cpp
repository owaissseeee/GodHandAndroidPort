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

// Function: Obj0000_Clear_Byte_D_003BD6E8_1380_94_Bit0_1F75B0
// Address: 0x1f75b0 - 0x1f75d0
void Obj0000_Clear_Byte_D_003BD6E8_1380_94_Bit0_1F75B0_0x1f75b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Clear_Byte_D_003BD6E8_1380_94_Bit0_1F75B0_0x1f75b0");
#endif

    ctx->pc = 0x1f75b0u;

    // 0x1f75b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f75b4: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x1f75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1f75b8: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1f75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1f75bc: 0x90620094  lbu         $v0, 0x94($v1)
    ctx->pc = 0x1f75bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1f75c0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1f75c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x1f75c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F75C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75C4u;
        // 0x1f75c8: 0xa0620094  sb          $v0, 0x94($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F75C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F75CCu;
    // 0x1f75cc: 0x0  nop
    ctx->pc = 0x1f75ccu;
    // NOP
    ctx->pc = 0x1f75d0u;
}
