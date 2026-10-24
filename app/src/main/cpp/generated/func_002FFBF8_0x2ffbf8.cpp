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

// Function: func_002FFBF8
// Address: 0x2ffbf8 - 0x2ffc20
void func_002FFBF8_0x2ffbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFBF8_0x2ffbf8");
#endif

    switch (ctx->pc) {
        case 0x2ffc10u: goto label_2ffc10;
        default: break;
    }

    ctx->pc = 0x2ffbf8u;

    // 0x2ffbf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ffbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ffbfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ffbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFC00u;
    {
        const bool branch_taken_0x2ffc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC00u;
        // 0x2ffc04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc00) {
            ctx->pc = 0x2FFC10u;
            goto label_2ffc10;
        }
    }
    ctx->pc = 0x2FFC08u;
    // 0x2ffc08: 0xc0ba6da  jal         func_2E9B68
    ctx->pc = 0x2FFC08u;
    SET_GPR_U32(ctx, 31, 0x2FFC10u);
    ctx->pc = 0x2E9B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9B68u, 0x2FFC08u, 0x2FFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC10u;
label_2ffc10:
    // 0x2ffc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffc14: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC14u;
        // 0x2ffc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC1Cu;
    // 0x2ffc1c: 0x0  nop
    ctx->pc = 0x2ffc1cu;
    // NOP
    ctx->pc = 0x2ffc20u;
}
