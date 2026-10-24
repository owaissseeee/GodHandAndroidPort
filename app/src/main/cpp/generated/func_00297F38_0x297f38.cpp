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

// Function: func_00297F38
// Address: 0x297f38 - 0x297f70
void func_00297F38_0x297f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297F38_0x297f38");
#endif

    switch (ctx->pc) {
        case 0x297f50u: goto label_297f50;
        case 0x297f64u: goto label_297f64;
        default: break;
    }

    ctx->pc = 0x297f38u;

    // 0x297f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297f3c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297F3Cu;
    {
        const bool branch_taken_0x297f3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F3Cu;
        // 0x297f40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f3c) {
            ctx->pc = 0x297F58u;
            goto label_297f58;
        }
    }
    ctx->pc = 0x297F44u;
    // 0x297f44: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297f48: 0xc0a5fca  jal         func_297F28
    ctx->pc = 0x297F48u;
    SET_GPR_U32(ctx, 31, 0x297F50u);
    ctx->pc = 0x297F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F48u;
    // 0x297f4c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F28u, 0x297F48u, 0x297F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F50u;
label_297f50:
    // 0x297f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297F50u;
    {
        const bool branch_taken_0x297f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F50u;
        // 0x297f54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f50) {
            ctx->pc = 0x297F68u;
            goto label_297f68;
        }
    }
    ctx->pc = 0x297F58u;
label_297f58:
    // 0x297f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f5c: 0xc0a5fca  jal         func_297F28
    ctx->pc = 0x297F5Cu;
    SET_GPR_U32(ctx, 31, 0x297F64u);
    ctx->pc = 0x297F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F5Cu;
    // 0x297f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F28u, 0x297F5Cu, 0x297F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F64u;
label_297f64:
    // 0x297f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297f68:
    // 0x297f68: 0x3e00008  jr          $ra
    ctx->pc = 0x297F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F68u;
        // 0x297f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F70u;
}
