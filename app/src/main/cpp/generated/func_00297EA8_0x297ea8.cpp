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

// Function: func_00297EA8
// Address: 0x297ea8 - 0x297ee0
void func_00297EA8_0x297ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297EA8_0x297ea8");
#endif

    switch (ctx->pc) {
        case 0x297ec0u: goto label_297ec0;
        case 0x297ed4u: goto label_297ed4;
        default: break;
    }

    ctx->pc = 0x297ea8u;

    // 0x297ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297eac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297EACu;
    {
        const bool branch_taken_0x297eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EACu;
        // 0x297eb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297eac) {
            ctx->pc = 0x297EC8u;
            goto label_297ec8;
        }
    }
    ctx->pc = 0x297EB4u;
    // 0x297eb4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297eb8: 0xc0a5fa6  jal         func_297E98
    ctx->pc = 0x297EB8u;
    SET_GPR_U32(ctx, 31, 0x297EC0u);
    ctx->pc = 0x297EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297EB8u;
    // 0x297ebc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E98u, 0x297EB8u, 0x297EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EC0u;
label_297ec0:
    // 0x297ec0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297EC0u;
    {
        const bool branch_taken_0x297ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EC0u;
        // 0x297ec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ec0) {
            ctx->pc = 0x297ED8u;
            goto label_297ed8;
        }
    }
    ctx->pc = 0x297EC8u;
label_297ec8:
    // 0x297ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ecc: 0xc0a5fa6  jal         func_297E98
    ctx->pc = 0x297ECCu;
    SET_GPR_U32(ctx, 31, 0x297ED4u);
    ctx->pc = 0x297ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297ECCu;
    // 0x297ed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E98u, 0x297ECCu, 0x297ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297ED4u;
label_297ed4:
    // 0x297ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297ed8:
    // 0x297ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x297ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297ED8u;
        // 0x297edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297EE0u;
}
