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

// Function: func_00297E18
// Address: 0x297e18 - 0x297e50
void func_00297E18_0x297e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297E18_0x297e18");
#endif

    switch (ctx->pc) {
        case 0x297e30u: goto label_297e30;
        case 0x297e44u: goto label_297e44;
        default: break;
    }

    ctx->pc = 0x297e18u;

    // 0x297e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297e1c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297E1Cu;
    {
        const bool branch_taken_0x297e1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E1Cu;
        // 0x297e20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e1c) {
            ctx->pc = 0x297E38u;
            goto label_297e38;
        }
    }
    ctx->pc = 0x297E24u;
    // 0x297e24: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297e28: 0xc0a5f82  jal         func_297E08
    ctx->pc = 0x297E28u;
    SET_GPR_U32(ctx, 31, 0x297E30u);
    ctx->pc = 0x297E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E28u;
    // 0x297e2c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E08u, 0x297E28u, 0x297E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E30u;
label_297e30:
    // 0x297e30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297E30u;
    {
        const bool branch_taken_0x297e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E30u;
        // 0x297e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e30) {
            ctx->pc = 0x297E48u;
            goto label_297e48;
        }
    }
    ctx->pc = 0x297E38u;
label_297e38:
    // 0x297e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e3c: 0xc0a5f82  jal         func_297E08
    ctx->pc = 0x297E3Cu;
    SET_GPR_U32(ctx, 31, 0x297E44u);
    ctx->pc = 0x297E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E3Cu;
    // 0x297e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E08u, 0x297E3Cu, 0x297E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E44u;
label_297e44:
    // 0x297e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297e48:
    // 0x297e48: 0x3e00008  jr          $ra
    ctx->pc = 0x297E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E48u;
        // 0x297e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E50u;
}
