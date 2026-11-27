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

// Function: Tramp_func_0030A2B0_001508D8
// Address: 0x1508d8 - 0x1508f8
void Tramp_func_0030A2B0_001508D8_0x1508d8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_0030A2B0_001508D8_0x1508d8");
#endif

    if (__builtin_expect(ctx->pc != 0x1508d8u, 0)) {
        switch (ctx->pc) {
            case 0x1508e8u: goto label_1508e8;
            default: break;
        }
    }


    // 0x1508d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1508dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1508dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1508e0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1508E0u;
    SET_GPR_U32(ctx, 31, 0x1508E8u);
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0ApplyMatrix_0x30a2b0, 0x30a2b0u, 0x1508e8u)) {
        return;
    }
label_1508e8:
    // 0x1508e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1508e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1508ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1508ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1508F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508ECu;
        // 0x1508f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1508ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1508f4: 0x0  nop
    // NOP
    ctx->pc = 0x1508f8u;
}