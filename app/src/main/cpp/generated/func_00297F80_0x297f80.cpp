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

// Function: func_00297F80
// Address: 0x297f80 - 0x297fb8
void func_00297F80_0x297f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297F80_0x297f80");
#endif

    switch (ctx->pc) {
        case 0x297f98u: goto label_297f98;
        case 0x297facu: goto label_297fac;
        default: break;
    }

    ctx->pc = 0x297f80u;

    // 0x297f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297f84: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297F84u;
    {
        const bool branch_taken_0x297f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F84u;
        // 0x297f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f84) {
            ctx->pc = 0x297FA0u;
            goto label_297fa0;
        }
    }
    ctx->pc = 0x297F8Cu;
    // 0x297f8c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297f90: 0xc0a5fdc  jal         func_297F70
    ctx->pc = 0x297F90u;
    SET_GPR_U32(ctx, 31, 0x297F98u);
    ctx->pc = 0x297F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F90u;
    // 0x297f94: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F70u, 0x297F90u, 0x297F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F98u;
label_297f98:
    // 0x297f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297F98u;
    {
        const bool branch_taken_0x297f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F98u;
        // 0x297f9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f98) {
            ctx->pc = 0x297FB0u;
            goto label_297fb0;
        }
    }
    ctx->pc = 0x297FA0u;
label_297fa0:
    // 0x297fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fa4: 0xc0a5fdc  jal         func_297F70
    ctx->pc = 0x297FA4u;
    SET_GPR_U32(ctx, 31, 0x297FACu);
    ctx->pc = 0x297FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FA4u;
    // 0x297fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F70u, 0x297FA4u, 0x297FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FACu;
label_297fac:
    // 0x297fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297fb0:
    // 0x297fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x297FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FB0u;
        // 0x297fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297FB8u;
}
