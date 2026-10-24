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

// Function: func_00297DD0
// Address: 0x297dd0 - 0x297e08
void func_00297DD0_0x297dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297DD0_0x297dd0");
#endif

    switch (ctx->pc) {
        case 0x297de8u: goto label_297de8;
        case 0x297dfcu: goto label_297dfc;
        default: break;
    }

    ctx->pc = 0x297dd0u;

    // 0x297dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297dd4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297DD4u;
    {
        const bool branch_taken_0x297dd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DD4u;
        // 0x297dd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297dd4) {
            ctx->pc = 0x297DF0u;
            goto label_297df0;
        }
    }
    ctx->pc = 0x297DDCu;
    // 0x297ddc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297de0: 0xc0a5f70  jal         func_297DC0
    ctx->pc = 0x297DE0u;
    SET_GPR_U32(ctx, 31, 0x297DE8u);
    ctx->pc = 0x297DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DE0u;
    // 0x297de4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DC0u, 0x297DE0u, 0x297DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DE8u;
label_297de8:
    // 0x297de8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297DE8u;
    {
        const bool branch_taken_0x297de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DE8u;
        // 0x297dec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297de8) {
            ctx->pc = 0x297E00u;
            goto label_297e00;
        }
    }
    ctx->pc = 0x297DF0u;
label_297df0:
    // 0x297df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297df4: 0xc0a5f70  jal         func_297DC0
    ctx->pc = 0x297DF4u;
    SET_GPR_U32(ctx, 31, 0x297DFCu);
    ctx->pc = 0x297DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DF4u;
    // 0x297df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DC0u, 0x297DF4u, 0x297DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DFCu;
label_297dfc:
    // 0x297dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297e00:
    // 0x297e00: 0x3e00008  jr          $ra
    ctx->pc = 0x297E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E00u;
        // 0x297e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E08u;
}
