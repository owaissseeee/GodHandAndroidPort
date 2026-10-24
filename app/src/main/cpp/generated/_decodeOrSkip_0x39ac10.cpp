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

// Function: _decodeOrSkip
// Address: 0x39ac10 - 0x39ac58
void _decodeOrSkip_0x39ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkip_0x39ac10");
#endif

    switch (ctx->pc) {
        case 0x39ac38u: goto label_39ac38;
        case 0x39ac48u: goto label_39ac48;
        default: break;
    }

    ctx->pc = 0x39ac10u;

    // 0x39ac10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ac14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x39ac14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ac1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ac20: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x39ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x39ac24: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x39ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x39ac28: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39AC28u;
    {
        const bool branch_taken_0x39ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ac28) {
            ctx->pc = 0x39AC40u;
            goto label_39ac40;
        }
    }
    ctx->pc = 0x39AC30u;
    // 0x39ac30: 0xc0e69c8  jal         func_39A720
    ctx->pc = 0x39AC30u;
    SET_GPR_U32(ctx, 31, 0x39AC38u);
    ctx->pc = 0x39AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC30u;
    // 0x39ac34: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A720u, 0x39AC30u, 0x39AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC38u;
label_39ac38:
    // 0x39ac38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39AC38u;
    {
        const bool branch_taken_0x39ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC38u;
        // 0x39ac3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac38) {
            ctx->pc = 0x39AC4Cu;
            goto label_39ac4c;
        }
    }
    ctx->pc = 0x39AC40u;
label_39ac40:
    // 0x39ac40: 0xc0e696c  jal         func_39A5B0
    ctx->pc = 0x39AC40u;
    SET_GPR_U32(ctx, 31, 0x39AC48u);
    ctx->pc = 0x39AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC40u;
    // 0x39ac44: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A5B0u, 0x39AC40u, 0x39AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC48u;
label_39ac48:
    // 0x39ac48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39ac4c:
    // 0x39ac4c: 0x3e00008  jr          $ra
    ctx->pc = 0x39AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC4Cu;
        // 0x39ac50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AC54u;
    // 0x39ac54: 0x0  nop
    ctx->pc = 0x39ac54u;
    // NOP
    ctx->pc = 0x39ac58u;
}
