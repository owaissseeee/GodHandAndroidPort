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

// Function: func_002BE670
// Address: 0x2be670 - 0x2be6a0
void func_002BE670_0x2be670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE670_0x2be670");
#endif

    switch (ctx->pc) {
        case 0x2be684u: goto label_2be684;
        default: break;
    }

    ctx->pc = 0x2be670u;

    // 0x2be670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be67c: 0xc0af9b2  jal         func_2BE6C8
    ctx->pc = 0x2BE67Cu;
    SET_GPR_U32(ctx, 31, 0x2BE684u);
    ctx->pc = 0x2BE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE67Cu;
    // 0x2be680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6C8u, 0x2BE67Cu, 0x2BE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE684u;
label_2be684:
    // 0x2be684: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2be684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2be688: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2be688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be68c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be694: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE694u;
        // 0x2be698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE69Cu;
    // 0x2be69c: 0x0  nop
    ctx->pc = 0x2be69cu;
    // NOP
    ctx->pc = 0x2be6a0u;
}
