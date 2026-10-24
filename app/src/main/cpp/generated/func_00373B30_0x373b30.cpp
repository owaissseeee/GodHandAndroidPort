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

// Function: func_00373B30
// Address: 0x373b30 - 0x373b68
void func_00373B30_0x373b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373B30_0x373b30");
#endif

    switch (ctx->pc) {
        case 0x373b44u: goto label_373b44;
        default: break;
    }

    ctx->pc = 0x373b30u;

    // 0x373b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373b34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373b3c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373B3Cu;
    SET_GPR_U32(ctx, 31, 0x373B44u);
    ctx->pc = 0x373B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B3Cu;
    // 0x373b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373B3Cu, 0x373B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B44u;
label_373b44:
    // 0x373b44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x373B44u;
    {
        const bool branch_taken_0x373b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B44u;
        // 0x373b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373b44) {
            ctx->pc = 0x373B50u;
            goto label_373b50;
        }
    }
    ctx->pc = 0x373B4Cu;
    // 0x373b4c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x373b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_373b50:
    // 0x373b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x373b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b58: 0x3e00008  jr          $ra
    ctx->pc = 0x373B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B58u;
        // 0x373b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B60u;
    // 0x373b60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x373b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x373b64: 0x0  nop
    ctx->pc = 0x373b64u;
    // NOP
    ctx->pc = 0x373b68u;
}
