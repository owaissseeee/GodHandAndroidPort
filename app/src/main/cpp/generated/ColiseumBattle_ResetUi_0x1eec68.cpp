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

// Function: ColiseumBattle_ResetUi
// Address: 0x1eec68 - 0x1eec98
void ColiseumBattle_ResetUi_0x1eec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_ResetUi_0x1eec68");
#endif

    switch (ctx->pc) {
        case 0x1eec78u: goto label_1eec78;
        default: break;
    }

    ctx->pc = 0x1eec68u;

    // 0x1eec68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eec6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eec70: 0xc07ca30  jal         func_1F28C0
    ctx->pc = 0x1EEC70u;
    SET_GPR_U32(ctx, 31, 0x1EEC78u);
    ctx->pc = 0x1EEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEC70u;
    // 0x1eec74: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F28C0u, 0x1EEC70u, 0x1EEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEC78u;
label_1eec78:
    // 0x1eec78: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1eec7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eec80: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1eec80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1eec84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1eec84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eec88: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1eec88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x1eec8c: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x1eec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x1eec90: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC90u;
        // 0x1eec94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEC98u;
}
