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

// Function: func_002BAE40
// Address: 0x2bae40 - 0x2bae68
void func_002BAE40_0x2bae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAE40_0x2bae40");
#endif

    switch (ctx->pc) {
        case 0x2bae54u: goto label_2bae54;
        default: break;
    }

    ctx->pc = 0x2bae40u;

    // 0x2bae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bae44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bae4c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2BAE4Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE54u);
    ctx->pc = 0x2BAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE4Cu;
    // 0x2bae50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2BAE4Cu, 0x2BAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE54u;
label_2bae54:
    // 0x2bae54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae58: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE58u;
        // 0x2bae5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE60u;
    // 0x2bae60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2bae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2bae64: 0x0  nop
    ctx->pc = 0x2bae64u;
    // NOP
    ctx->pc = 0x2bae68u;
}
