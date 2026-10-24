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

// Function: func_002B2F80
// Address: 0x2b2f80 - 0x2b2fa8
void func_002B2F80_0x2b2f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2F80_0x2b2f80");
#endif

    switch (ctx->pc) {
        case 0x2b2f94u: goto label_2b2f94;
        default: break;
    }

    ctx->pc = 0x2b2f80u;

    // 0x2b2f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2f88: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2b2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b2f8c: 0xc0ad178  jal         func_2B45E0
    ctx->pc = 0x2B2F8Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F94u);
    ctx->pc = 0x2B2F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F8Cu;
    // 0x2b2f90: 0x94450002  lhu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45E0u, 0x2B2F8Cu, 0x2B2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F94u;
label_2b2f94:
    // 0x2b2f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F9Cu;
        // 0x2b2fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2FA4u;
    // 0x2b2fa4: 0x0  nop
    ctx->pc = 0x2b2fa4u;
    // NOP
    ctx->pc = 0x2b2fa8u;
}
