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

// Function: func_0017C4E0
// Address: 0x17c4e0 - 0x17c508
void func_0017C4E0_0x17c4e0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C4E0_0x17c4e0");
#endif

    if (__builtin_expect(ctx->pc != 0x17c4e0u, 0)) {
        switch (ctx->pc) {
            case 0x17c4fcu: goto label_17c4fc;
            default: break;
        }
    }


    // 0x17c4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c4e4: 0x3c020042  lui         $v0, 0x42
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17c4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c4ec: 0x80182d  daddu       $v1, $a0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4f0: 0x24421c80  addiu       $v0, $v0, 0x1C80
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7296));
    // 0x17c4f4: 0xc06f594  jal         func_1BD650
    SET_GPR_U32(ctx, 31, 0x17C4FCu);
    ctx->pc = 0x17C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4F4u;
    // 0x17c4f8: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &InitField214WithPtr429420_1BD650_0x1bd650, 0x1bd650u, 0x17c4fcu)) {
        return;
    }
label_17c4fc:
    // 0x17c4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c500: 0x3e00008  jr          $ra
    ctx->pc = 0x17C500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C500u;
        // 0x17c504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C508u;
}