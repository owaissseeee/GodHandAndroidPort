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

// Function: func_00178340
// Address: 0x178340 - 0x178368
void func_00178340_0x178340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178340_0x178340");
#endif

    switch (ctx->pc) {
        case 0x17835cu: goto label_17835c;
        default: break;
    }

    ctx->pc = 0x178340u;

    // 0x178340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178344: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x178344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17834c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17834cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178350: 0x244213c0  addiu       $v0, $v0, 0x13C0
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5056));
    // 0x178354: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x178354u;
    SET_GPR_U32(ctx, 31, 0x17835Cu);
    ctx->pc = 0x178358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178354u;
    // 0x178358: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x178354u, 0x17835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17835Cu;
label_17835c:
    // 0x17835c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178360: 0x3e00008  jr          $ra
    ctx->pc = 0x178360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178360u;
        // 0x178364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178368u;
}
