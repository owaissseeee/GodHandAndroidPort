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

// Function: func_00338E38
// Address: 0x338e38 - 0x338e98
void func_00338E38_0x338e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338E38_0x338e38");
#endif

    ctx->pc = 0x338e38u;

    // 0x338e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338e3c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338E3Cu;
    {
        const bool branch_taken_0x338e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x338E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E3Cu;
        // 0x338e40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e3c) {
            ctx->pc = 0x338E60u;
            goto label_338e60;
        }
    }
    ctx->pc = 0x338E44u;
    // 0x338e44: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338e48: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338e50: 0x24845990  addiu       $a0, $a0, 0x5990
    ctx->pc = 0x338e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22928));
    // 0x338e54: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x338e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
    // 0x338e58: 0x80ce292  j           func_338A48
    ctx->pc = 0x338E58u;
    ctx->pc = 0x338E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E58u;
    // 0x338e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338E58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338E60u;
label_338e60:
    // 0x338e60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x338e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338e64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338E64u;
    {
        const bool branch_taken_0x338e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E64u;
        // 0x338e68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e64) {
            ctx->pc = 0x338E88u;
            goto label_338e88;
        }
    }
    ctx->pc = 0x338E6Cu;
    // 0x338e6c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338e70: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x338e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x338e74: 0x248459a0  addiu       $a0, $a0, 0x59A0
    ctx->pc = 0x338e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22944));
    // 0x338e78: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x338e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
    // 0x338e7c: 0x80ce292  j           func_338A48
    ctx->pc = 0x338E7Cu;
    ctx->pc = 0x338E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E7Cu;
    // 0x338e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A48u, 0x338E7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338E84u;
    // 0x338e84: 0x0  nop
    ctx->pc = 0x338e84u;
    // NOP
label_338e88:
    // 0x338e88: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x338e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x338e8c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x338e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x338e90: 0x3e00008  jr          $ra
    ctx->pc = 0x338E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E90u;
        // 0x338e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338E98u;
}
