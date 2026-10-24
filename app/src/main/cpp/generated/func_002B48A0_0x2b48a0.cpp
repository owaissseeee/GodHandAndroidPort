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

// Function: func_002B48A0
// Address: 0x2b48a0 - 0x2b48c8
void func_002B48A0_0x2b48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B48A0_0x2b48a0");
#endif

    switch (ctx->pc) {
        case 0x2b48bcu: goto label_2b48bc;
        default: break;
    }

    ctx->pc = 0x2b48a0u;

    // 0x2b48a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b48a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b48a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b48a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b48a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48ac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b48acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b48b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b48b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b48b4: 0xc0ad6be  jal         func_2B5AF8
    ctx->pc = 0x2B48B4u;
    SET_GPR_U32(ctx, 31, 0x2B48BCu);
    ctx->pc = 0x2B48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48B4u;
    // 0x2b48b8: 0x244479d0  addiu       $a0, $v0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AF8u, 0x2B48B4u, 0x2B48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48BCu;
label_2b48bc:
    // 0x2b48bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b48bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b48c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B48C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48C0u;
        // 0x2b48c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B48C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B48C8u;
}
