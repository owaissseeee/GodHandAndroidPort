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

// Function: Tramp_cOm4f_setOpen_1A4B90
// Address: 0x1a4b90 - 0x1a4bb0
void Tramp_cOm4f_setOpen_1A4B90_0x1a4b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_cOm4f_setOpen_1A4B90_0x1a4b90");
#endif

    if (__builtin_expect(ctx->pc != 0x1a4b90u, 0)) {
        switch (ctx->pc) {
            case 0x1a4ba0u: goto label_1a4ba0;
            default: break;
        }
    }


    // 0x1a4b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4b98: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x1A4B98u;
    SET_GPR_U32(ctx, 31, 0x1A4BA0u);
    if (!runtime->callDirectStatic(rdram, ctx, &cOm4f_setOpen_0x1a4d48, 0x1a4d48u, 0x1a4ba0u)) {
        return;
    }
    ctx->pc = 0x1A4BA0u;
label_1a4ba0:
    // 0x1a4ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BA4u;
        // 0x1a4ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1a4bac: 0x0  nop
    // NOP
    ctx->pc = 0x1a4bb0u;
}