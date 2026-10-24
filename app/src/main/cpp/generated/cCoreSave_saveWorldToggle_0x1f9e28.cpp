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

// Function: cCoreSave_saveWorldToggle
// Address: 0x1f9e28 - 0x1f9e68
void cCoreSave_saveWorldToggle_0x1f9e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_saveWorldToggle_0x1f9e28");
#endif

    switch (ctx->pc) {
        case 0x1f9e4cu: goto label_1f9e4c;
        default: break;
    }

    ctx->pc = 0x1f9e28u;

    // 0x1f9e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9e2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f9e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9e3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9E3Cu;
    {
        const bool branch_taken_0x1f9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e3c) {
            ctx->pc = 0x1F9E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9E3Cu;
            // 0x1f9e40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9E58u;
            goto label_1f9e58;
        }
    }
    ctx->pc = 0x1F9E44u;
    // 0x1f9e44: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x1F9E44u;
    SET_GPR_U32(ctx, 31, 0x1F9E4Cu);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x1F9E44u, 0x1F9E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E4Cu;
label_1f9e4c:
    // 0x1f9e4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9e50: 0xac620170  sw          $v0, 0x170($v1)
    ctx->pc = 0x1f9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 2));
    // 0x1f9e54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f9e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9e58:
    // 0x1f9e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E5Cu;
        // 0x1f9e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E64u;
    // 0x1f9e64: 0x0  nop
    ctx->pc = 0x1f9e64u;
    // NOP
    ctx->pc = 0x1f9e68u;
}
