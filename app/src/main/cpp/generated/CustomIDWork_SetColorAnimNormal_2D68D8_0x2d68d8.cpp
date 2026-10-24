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

// Function: CustomIDWork_SetColorAnimNormal_2D68D8
// Address: 0x2d68d8 - 0x2d6910
void CustomIDWork_SetColorAnimNormal_2D68D8_0x2d68d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetColorAnimNormal_2D68D8_0x2d68d8");
#endif

    ctx->pc = 0x2d68d8u;

    // 0x2d68d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d68dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D68DCu;
    {
        const bool branch_taken_0x2d68dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68DCu;
        // 0x2d68e0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68dc) {
            ctx->pc = 0x2D6908u;
            goto label_2d6908;
        }
    }
    ctx->pc = 0x2D68E4u;
    // 0x2d68e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d68e8: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x2d68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x2d68ec: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2d68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2d68f0: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x2d68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x2d68f4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D68F4u;
    {
        const bool branch_taken_0x2d68f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D68F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68F4u;
        // 0x2d68f8: 0xa4870058  sh          $a3, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68f4) {
            ctx->pc = 0x2D6904u;
            goto label_2d6904;
        }
    }
    ctx->pc = 0x2D68FCu;
    // 0x2d68fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6900: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2d6900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
label_2d6904:
    // 0x2d6904: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x2d6904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
label_2d6908:
    // 0x2d6908: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6910u;
}
