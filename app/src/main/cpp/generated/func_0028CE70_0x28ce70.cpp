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

// Function: func_0028CE70
// Address: 0x28ce70 - 0x28cea8
void func_0028CE70_0x28ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028CE70_0x28ce70");
#endif

    switch (ctx->pc) {
        case 0x28ce94u: goto label_28ce94;
        default: break;
    }

    ctx->pc = 0x28ce70u;

    // 0x28ce70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ce74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ce7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ce7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce80: 0x8e041630  lw          $a0, 0x1630($s0)
    ctx->pc = 0x28ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5680)));
    // 0x28ce84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CE84u;
    {
        const bool branch_taken_0x28ce84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ce84) {
            ctx->pc = 0x28CE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CE84u;
            // 0x28ce88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CE9Cu;
            goto label_28ce9c;
        }
    }
    ctx->pc = 0x28CE8Cu;
    // 0x28ce8c: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x28CE8Cu;
    SET_GPR_U32(ctx, 31, 0x28CE94u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x28CE8Cu, 0x28CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE94u;
label_28ce94:
    // 0x28ce94: 0xae001630  sw          $zero, 0x1630($s0)
    ctx->pc = 0x28ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5680), GPR_U32(ctx, 0));
    // 0x28ce98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ce98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28ce9c:
    // 0x28ce9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ce9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cea0: 0x3e00008  jr          $ra
    ctx->pc = 0x28CEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEA0u;
        // 0x28cea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CEA8u;
}
