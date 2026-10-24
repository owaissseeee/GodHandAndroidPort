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

// Function: func_002A4FA0
// Address: 0x2a4fa0 - 0x2a4fd8
void func_002A4FA0_0x2a4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4FA0_0x2a4fa0");
#endif

    ctx->pc = 0x2a4fa0u;

    // 0x2a4fa0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a4fa4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a4fa8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a4fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a4fac: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2a4facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2a4fb0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4fb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a4fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4fb8: 0x8c822054  lw          $v0, 0x2054($a0)
    ctx->pc = 0x2a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8276)));
    // 0x2a4fbc: 0xac85205c  sw          $a1, 0x205C($a0)
    ctx->pc = 0x2a4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8284), GPR_U32(ctx, 5));
    // 0x2a4fc0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2a4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2a4fc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4fc8: 0xac822050  sw          $v0, 0x2050($a0)
    ctx->pc = 0x2a4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8272), GPR_U32(ctx, 2));
    // 0x2a4fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FCCu;
        // 0x2a4fd0: 0xac822054  sw          $v0, 0x2054($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4FD4u;
    // 0x2a4fd4: 0x0  nop
    ctx->pc = 0x2a4fd4u;
    // NOP
    ctx->pc = 0x2a4fd8u;
}
