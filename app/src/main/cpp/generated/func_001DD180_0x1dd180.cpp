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

// Function: func_001DD180
// Address: 0x1dd180 - 0x1dd1a0
void func_001DD180_0x1dd180(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD180_0x1dd180");
#endif

    if (__builtin_expect(ctx->pc != 0x1dd180u, 0)) {
        switch (ctx->pc) {
            case 0x1dd190u: goto label_1dd190;
            default: break;
        }
    }


    // 0x1dd180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd188: 0xc0aa81e  jal         func_2AA078
    SET_GPR_U32(ctx, 31, 0x1DD190u);
    ctx->pc = 0x1DD18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD188u;
    // 0x1dd18c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_release_0x2aa078, 0x2aa078u, 0x1dd190u)) {
        return;
    }
label_1dd190:
    // 0x1dd190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd194: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD194u;
        // 0x1dd198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1dd19c: 0x0  nop
    // NOP
    ctx->pc = 0x1dd1a0u;
}