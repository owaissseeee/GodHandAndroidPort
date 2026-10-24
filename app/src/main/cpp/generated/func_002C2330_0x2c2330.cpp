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

// Function: func_002C2330
// Address: 0x2c2330 - 0x2c2368
void func_002C2330_0x2c2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C2330_0x2c2330");
#endif

    switch (ctx->pc) {
        case 0x2c2354u: goto label_2c2354;
        default: break;
    }

    ctx->pc = 0x2c2330u;

    // 0x2c2330: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c2330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2334: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c2334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c2338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c233c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c233cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c2340: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c2340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c2344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2348: 0x24a52368  addiu       $a1, $a1, 0x2368
    ctx->pc = 0x2c2348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9064));
    // 0x2c234c: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x2C234Cu;
    SET_GPR_U32(ctx, 31, 0x2C2354u);
    ctx->pc = 0x2C2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C234Cu;
    // 0x2c2350: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x2C234Cu, 0x2C2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2354u;
label_2c2354:
    // 0x2c2354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c235c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C235Cu;
        // 0x2c2360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2364u;
    // 0x2c2364: 0x0  nop
    ctx->pc = 0x2c2364u;
    // NOP
    ctx->pc = 0x2c2368u;
}
