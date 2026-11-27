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

// Function: func_003052E8
// Address: 0x3052e8 - 0x305308
void func_003052E8_0x3052e8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003052E8_0x3052e8");
#endif

    if (__builtin_expect(ctx->pc != 0x3052e8u, 0)) {
        switch (ctx->pc) {
            case 0x3052f8u: goto label_3052f8;
            default: break;
        }
    }


    // 0x3052e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3052ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3052ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3052f0: 0xc0befa2  jal         func_2FBE88
    ctx->pc = 0x3052F0u;
    SET_GPR_U32(ctx, 31, 0x3052F8u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_002FBE88_0x2fbe88, 0x2fbe88u, 0x3052f8u)) {
        return;
    }
label_3052f8:
    // 0x3052f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3052f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3052fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3052FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052FCu;
        // 0x305300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3052FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x305304: 0x0  nop
    // NOP
    ctx->pc = 0x305308u;
}