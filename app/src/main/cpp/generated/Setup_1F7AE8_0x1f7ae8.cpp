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

// Function: Setup_1F7AE8
// Address: 0x1f7ae8 - 0x1f7b50
void Setup_1F7AE8_0x1f7ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup_1F7AE8_0x1f7ae8");
#endif

    ctx->pc = 0x1f7ae8u;

    // 0x1f7ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7aec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7af0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1f7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1f7af4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7af8: 0x24070031  addiu       $a3, $zero, 0x31
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1f7afc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f7afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f7b00: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f7b04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f7b08: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1f7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1f7b0c: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1f7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x1f7b10: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1f7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1f7b14: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1f7b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1f7b18: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1f7b1c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1f7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1f7b20: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1f7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1f7b24: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1f7b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1f7b28: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1f7b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1f7b2c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1f7b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1f7b30: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1f7b30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7b34: 0xa0800034  sb          $zero, 0x34($a0)
    ctx->pc = 0x1f7b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b38: 0xa0800035  sb          $zero, 0x35($a0)
    ctx->pc = 0x1f7b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b3c: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x1f7b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f7b40: 0xa0800036  sb          $zero, 0x36($a0)
    ctx->pc = 0x1f7b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7b44: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1f7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1f7b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B48u;
        // 0x1f7b4c: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B50u;
}
