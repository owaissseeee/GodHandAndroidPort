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

// Function: Obj0000_Clear_Fields_50_To_7C_13C5C8
// Address: 0x13c5c8 - 0x13c618
void Obj0000_Clear_Fields_50_To_7C_13C5C8_0x13c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Clear_Fields_50_To_7C_13C5C8_0x13c5c8");
#endif

    ctx->pc = 0x13c5c8u;

    // 0x13c5c8: 0xa080007c  sb          $zero, 0x7C($a0)
    ctx->pc = 0x13c5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c5cc: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x13c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x13c5d0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x13c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x13c5d4: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x13c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x13c5d8: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x13c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x13c5dc: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x13c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x13c5e0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x13c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x13c5e4: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x13c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x13c5e8: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x13c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x13c5ec: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x13c5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x13c5f0: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x13c5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x13c5f4: 0xa0800074  sb          $zero, 0x74($a0)
    ctx->pc = 0x13c5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c5f8: 0xa0800075  sb          $zero, 0x75($a0)
    ctx->pc = 0x13c5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c5fc: 0xa0800076  sb          $zero, 0x76($a0)
    ctx->pc = 0x13c5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c600: 0xa0800077  sb          $zero, 0x77($a0)
    ctx->pc = 0x13c600u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c604: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x13c604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c608: 0xa0800079  sb          $zero, 0x79($a0)
    ctx->pc = 0x13c608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c60c: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x13c60cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c610: 0x3e00008  jr          $ra
    ctx->pc = 0x13C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C610u;
        // 0x13c614: 0xa080007b  sb          $zero, 0x7B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C618u;
}
