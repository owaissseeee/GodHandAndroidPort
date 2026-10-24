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

// Function: func_00294998
// Address: 0x294998 - 0x2949c8
void func_00294998_0x294998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294998_0x294998");
#endif

    switch (ctx->pc) {
        case 0x2949b4u: goto label_2949b4;
        default: break;
    }

    ctx->pc = 0x294998u;

    // 0x294998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29499c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2949a0: 0x8082053e  lb          $v0, 0x53E($a0)
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1342)));
    // 0x2949a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2949A4u;
    {
        const bool branch_taken_0x2949a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2949A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949A4u;
        // 0x2949a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949a4) {
            ctx->pc = 0x2949B8u;
            goto label_2949b8;
        }
    }
    ctx->pc = 0x2949ACu;
    // 0x2949ac: 0xc0a5272  jal         func_2949C8
    ctx->pc = 0x2949ACu;
    SET_GPR_U32(ctx, 31, 0x2949B4u);
    ctx->pc = 0x2949C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2949C8u, 0x2949ACu, 0x2949B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949B4u;
label_2949b4:
    // 0x2949b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2949b8:
    // 0x2949b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2949b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2949bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2949BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2949C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949BCu;
        // 0x2949c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2949C4u;
    // 0x2949c4: 0x0  nop
    ctx->pc = 0x2949c4u;
    // NOP
    ctx->pc = 0x2949c8u;
}
