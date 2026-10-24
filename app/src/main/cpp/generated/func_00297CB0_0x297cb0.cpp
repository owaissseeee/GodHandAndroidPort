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

// Function: func_00297CB0
// Address: 0x297cb0 - 0x297ce8
void func_00297CB0_0x297cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297CB0_0x297cb0");
#endif

    switch (ctx->pc) {
        case 0x297cc8u: goto label_297cc8;
        case 0x297cdcu: goto label_297cdc;
        default: break;
    }

    ctx->pc = 0x297cb0u;

    // 0x297cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297cb4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297CB4u;
    {
        const bool branch_taken_0x297cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CB4u;
        // 0x297cb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cb4) {
            ctx->pc = 0x297CD0u;
            goto label_297cd0;
        }
    }
    ctx->pc = 0x297CBCu;
    // 0x297cbc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297cc0: 0xc0a5f28  jal         func_297CA0
    ctx->pc = 0x297CC0u;
    SET_GPR_U32(ctx, 31, 0x297CC8u);
    ctx->pc = 0x297CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CC0u;
    // 0x297cc4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CA0u, 0x297CC0u, 0x297CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CC8u;
label_297cc8:
    // 0x297cc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297CC8u;
    {
        const bool branch_taken_0x297cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CC8u;
        // 0x297ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cc8) {
            ctx->pc = 0x297CE0u;
            goto label_297ce0;
        }
    }
    ctx->pc = 0x297CD0u;
label_297cd0:
    // 0x297cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cd4: 0xc0a5f28  jal         func_297CA0
    ctx->pc = 0x297CD4u;
    SET_GPR_U32(ctx, 31, 0x297CDCu);
    ctx->pc = 0x297CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CD4u;
    // 0x297cd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CA0u, 0x297CD4u, 0x297CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CDCu;
label_297cdc:
    // 0x297cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297ce0:
    // 0x297ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x297CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CE0u;
        // 0x297ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297CE8u;
}
