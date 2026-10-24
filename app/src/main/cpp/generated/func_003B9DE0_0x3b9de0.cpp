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

// Function: func_003B9DE0
// Address: 0x3b9de0 - 0x3b9e10
void func_003B9DE0_0x3b9de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9DE0_0x3b9de0");
#endif

    switch (ctx->pc) {
        case 0x3b9de0u: goto label_3b9de0;
        case 0x3b9de4u: goto label_3b9de4;
        case 0x3b9de8u: goto label_3b9de8;
        case 0x3b9decu: goto label_3b9dec;
        case 0x3b9df0u: goto label_3b9df0;
        case 0x3b9df4u: goto label_3b9df4;
        case 0x3b9df8u: goto label_3b9df8;
        case 0x3b9dfcu: goto label_3b9dfc;
        case 0x3b9e00u: goto label_3b9e00;
        case 0x3b9e04u: goto label_3b9e04;
        case 0x3b9e08u: goto label_3b9e08;
        case 0x3b9e0cu: goto label_3b9e0c;
        default: break;
    }

    ctx->pc = 0x3b9de0u;

label_3b9de0:
    // 0x3b9de0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3b9de4:
    // 0x3b9de4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b9de8:
    // 0x3b9de8: 0x8c43c7ac  lw          $v1, -0x3854($v0)
    ctx->pc = 0x3b9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952876)));
label_3b9dec:
    // 0x3b9dec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b9decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9df0:
    // 0x3b9df0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b9df4:
    if (ctx->pc == 0x3B9DF4u) {
        ctx->pc = 0x3B9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DF0u;
        // 0x3b9df4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9DF8u;
        goto label_3b9df8;
    }
    ctx->pc = 0x3B9DF0u;
    {
        const bool branch_taken_0x3b9df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DF0u;
        // 0x3b9df4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9df0) {
            ctx->pc = 0x3B9E04u;
            goto label_3b9e04;
        }
    }
    ctx->pc = 0x3B9DF8u;
label_3b9df8:
    // 0x3b9df8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3b9dfc:
    // 0x3b9dfc: 0x60f809  jalr        $v1
label_3b9e00:
    if (ctx->pc == 0x3B9E00u) {
        ctx->pc = 0x3B9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DFCu;
        // 0x3b9e00: 0x8c44c7b0  lw          $a0, -0x3850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E04u;
        goto label_3b9e04;
    }
    ctx->pc = 0x3B9DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B9E04u);
        ctx->pc = 0x3B9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9DFCu;
        // 0x3b9e00: 0x8c44c7b0  lw          $a0, -0x3850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952880)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9DFCu, 0x3B9E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9E04u;
label_3b9e04:
    // 0x3b9e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9e08:
    // 0x3b9e08: 0x3e00008  jr          $ra
label_3b9e0c:
    if (ctx->pc == 0x3B9E0Cu) {
        ctx->pc = 0x3B9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E08u;
        // 0x3b9e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9E10u;
        goto label_fallthrough_0x3b9e08;
    }
    ctx->pc = 0x3B9E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E08u;
        // 0x3b9e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b9e08:
    ctx->pc = 0x3B9E10u;
}
