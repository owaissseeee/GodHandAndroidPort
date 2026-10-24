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

// Function: func_003342E8
// Address: 0x3342e8 - 0x334310
void func_003342E8_0x3342e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003342E8_0x3342e8");
#endif

    switch (ctx->pc) {
        case 0x3342f8u: goto label_3342f8;
        default: break;
    }

    ctx->pc = 0x3342e8u;

    // 0x3342e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3342e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3342ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3342ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3342f0: 0xc0cd0c4  jal         func_334310
    ctx->pc = 0x3342F0u;
    SET_GPR_U32(ctx, 31, 0x3342F8u);
    ctx->pc = 0x334310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334310u, 0x3342F0u, 0x3342F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342F8u;
label_3342f8:
    // 0x3342f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3342f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3342fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3342fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334304: 0x3e00008  jr          $ra
    ctx->pc = 0x334304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334304u;
        // 0x334308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33430Cu;
    // 0x33430c: 0x0  nop
    ctx->pc = 0x33430cu;
    // NOP
    ctx->pc = 0x334310u;
}
