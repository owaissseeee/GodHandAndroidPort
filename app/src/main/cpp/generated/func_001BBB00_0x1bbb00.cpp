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

// Function: func_001BBB00
// Address: 0x1bbb00 - 0x1bbb28
void func_001BBB00_0x1bbb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBB00_0x1bbb00");
#endif

    switch (ctx->pc) {
        case 0x1bbb1cu: goto label_1bbb1c;
        default: break;
    }

    ctx->pc = 0x1bbb00u;

    // 0x1bbb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbb04: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bbb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbb0c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1bbb0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb10: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x1bbb14: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1BBB14u;
    SET_GPR_U32(ctx, 31, 0x1BBB1Cu);
    ctx->pc = 0x1BBB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB14u;
    // 0x1bbb18: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1BBB14u, 0x1BBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB1Cu;
label_1bbb1c:
    // 0x1bbb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbb20: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB20u;
        // 0x1bbb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBB28u;
}
