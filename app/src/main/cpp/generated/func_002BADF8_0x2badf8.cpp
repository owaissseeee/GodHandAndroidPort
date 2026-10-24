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

// Function: func_002BADF8
// Address: 0x2badf8 - 0x2bae20
void func_002BADF8_0x2badf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BADF8_0x2badf8");
#endif

    switch (ctx->pc) {
        case 0x2bae14u: goto label_2bae14;
        default: break;
    }

    ctx->pc = 0x2badf8u;

    // 0x2badf8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2badfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2badfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bae00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae04: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x2bae04u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x2bae08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bae0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2BAE0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE14u);
    ctx->pc = 0x2BAE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE0Cu;
    // 0x2bae10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2BAE0Cu, 0x2BAE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE14u;
label_2bae14:
    // 0x2bae14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae18: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE18u;
        // 0x2bae1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE20u;
}
