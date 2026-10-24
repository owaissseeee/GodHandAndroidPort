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

// Function: func_00182668
// Address: 0x182668 - 0x182690
void func_00182668_0x182668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182668_0x182668");
#endif

    switch (ctx->pc) {
        case 0x182684u: goto label_182684;
        default: break;
    }

    ctx->pc = 0x182668u;

    // 0x182668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18266c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x182670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182674: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x182674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182678: 0x24422928  addiu       $v0, $v0, 0x2928
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10536));
    // 0x18267c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x18267Cu;
    SET_GPR_U32(ctx, 31, 0x182684u);
    ctx->pc = 0x182680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18267Cu;
    // 0x182680: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x18267Cu, 0x182684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182684u;
label_182684:
    // 0x182684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182688: 0x3e00008  jr          $ra
    ctx->pc = 0x182688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182688u;
        // 0x18268c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182690u;
}
