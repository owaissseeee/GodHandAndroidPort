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

// Function: func_002B6568
// Address: 0x2b6568 - 0x2b6598
void func_002B6568_0x2b6568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6568_0x2b6568");
#endif

    switch (ctx->pc) {
        case 0x2b658cu: goto label_2b658c;
        default: break;
    }

    ctx->pc = 0x2b6568u;

    // 0x2b6568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b656c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2b6570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6574: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x2b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x2b6578: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2b6578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2b657c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B657Cu;
    {
        const bool branch_taken_0x2b657c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B657Cu;
        // 0x2b6580: 0xac8200f0  sw          $v0, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b657c) {
            ctx->pc = 0x2B658Cu;
            goto label_2b658c;
        }
    }
    ctx->pc = 0x2B6584u;
    // 0x2b6584: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2B6584u;
    SET_GPR_U32(ctx, 31, 0x2B658Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2B6584u, 0x2B658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B658Cu;
label_2b658c:
    // 0x2b658c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b658cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6590: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6590u;
        // 0x2b6594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6598u;
}
