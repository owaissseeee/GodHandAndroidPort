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

// Function: func_0017EEA0
// Address: 0x17eea0 - 0x17eed8
void func_0017EEA0_0x17eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EEA0_0x17eea0");
#endif

    switch (ctx->pc) {
        case 0x17eeb4u: goto label_17eeb4;
        default: break;
    }

    ctx->pc = 0x17eea0u;

    // 0x17eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17eea4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17eea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eeac: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17EEACu;
    SET_GPR_U32(ctx, 31, 0x17EEB4u);
    ctx->pc = 0x17EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEACu;
    // 0x17eeb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17EEACu, 0x17EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EEB4u;
label_17eeb4:
    // 0x17eeb4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x17eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x17eeb8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x17eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x17eebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eec4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17eec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17eec8: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x17eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x17eecc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17eeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x17EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EED0u;
        // 0x17eed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EED8u;
}
