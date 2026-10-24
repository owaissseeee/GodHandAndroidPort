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

// Function: CustomIDWork_SetColorAnimNormal_2D6898
// Address: 0x2d6898 - 0x2d68d8
void CustomIDWork_SetColorAnimNormal_2D6898_0x2d6898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetColorAnimNormal_2D6898_0x2d6898");
#endif

    ctx->pc = 0x2d6898u;

    // 0x2d6898: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d6898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d689c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D689Cu;
    {
        const bool branch_taken_0x2d689c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D689Cu;
        // 0x2d68a0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d689c) {
            ctx->pc = 0x2D68CCu;
            goto label_2d68cc;
        }
    }
    ctx->pc = 0x2D68A4u;
    // 0x2d68a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d68a8: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2d68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2d68ac: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x2d68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2d68b0: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x2d68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x2d68b4: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x2d68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x2d68b8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D68B8u;
    {
        const bool branch_taken_0x2d68b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68B8u;
        // 0x2d68bc: 0xa4860058  sh          $a2, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68b8) {
            ctx->pc = 0x2D68C8u;
            goto label_2d68c8;
        }
    }
    ctx->pc = 0x2D68C0u;
    // 0x2d68c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d68c4: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2d68c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
label_2d68c8:
    // 0x2d68c8: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x2d68c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
label_2d68cc:
    // 0x2d68cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D68CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D68CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D68D4u;
    // 0x2d68d4: 0x0  nop
    ctx->pc = 0x2d68d4u;
    // NOP
    ctx->pc = 0x2d68d8u;
}
