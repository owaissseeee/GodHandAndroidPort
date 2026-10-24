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

// Function: func_003028E8
// Address: 0x3028e8 - 0x302918
void func_003028E8_0x3028e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003028E8_0x3028e8");
#endif

    switch (ctx->pc) {
        case 0x30290cu: goto label_30290c;
        default: break;
    }

    ctx->pc = 0x3028e8u;

    // 0x3028e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3028e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3028ec: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3028ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3028f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3028f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3028f4: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x3028f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x3028f8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3028f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3028fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3028FCu;
    {
        const bool branch_taken_0x3028fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028FCu;
        // 0x302900: 0xac8200f0  sw          $v0, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028fc) {
            ctx->pc = 0x30290Cu;
            goto label_30290c;
        }
    }
    ctx->pc = 0x302904u;
    // 0x302904: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x302904u;
    SET_GPR_U32(ctx, 31, 0x30290Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x302904u, 0x30290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30290Cu;
label_30290c:
    // 0x30290c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302910: 0x3e00008  jr          $ra
    ctx->pc = 0x302910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302910u;
        // 0x302914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302918u;
}
