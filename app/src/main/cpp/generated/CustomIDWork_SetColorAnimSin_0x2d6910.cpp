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

// Function: CustomIDWork_SetColorAnimSin
// Address: 0x2d6910 - 0x2d6948
void CustomIDWork_SetColorAnimSin_0x2d6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetColorAnimSin_0x2d6910");
#endif

    ctx->pc = 0x2d6910u;

    // 0x2d6910: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6914: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D6914u;
    {
        const bool branch_taken_0x2d6914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6914u;
        // 0x2d6918: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6914) {
            ctx->pc = 0x2D6940u;
            goto label_2d6940;
        }
    }
    ctx->pc = 0x2D691Cu;
    // 0x2d691c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d6920: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x2d6920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x2d6924: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2d6924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2d6928: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x2d6928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x2d692c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D692Cu;
    {
        const bool branch_taken_0x2d692c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D692Cu;
        // 0x2d6930: 0xa4870058  sh          $a3, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d692c) {
            ctx->pc = 0x2D693Cu;
            goto label_2d693c;
        }
    }
    ctx->pc = 0x2D6934u;
    // 0x2d6934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6938: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x2d6938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
label_2d693c:
    // 0x2d693c: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x2d693cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
label_2d6940:
    // 0x2d6940: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6948u;
}
