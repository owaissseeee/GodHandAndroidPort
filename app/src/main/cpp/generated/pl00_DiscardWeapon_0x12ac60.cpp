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

// Function: pl00_DiscardWeapon
// Address: 0x12ac60 - 0x12ac98
void pl00_DiscardWeapon_0x12ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_DiscardWeapon_0x12ac60");
#endif

    switch (ctx->pc) {
        case 0x12ac84u: goto label_12ac84;
        default: break;
    }

    ctx->pc = 0x12ac60u;

    // 0x12ac60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ac64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12ac68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ac6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ac6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac70: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12ac74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AC74u;
    {
        const bool branch_taken_0x12ac74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac74) {
            ctx->pc = 0x12AC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AC74u;
            // 0x12ac78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AC8Cu;
            goto label_12ac8c;
        }
    }
    ctx->pc = 0x12AC7Cu;
    // 0x12ac7c: 0xc073e2c  jal         func_1CF8B0
    ctx->pc = 0x12AC7Cu;
    SET_GPR_U32(ctx, 31, 0x12AC84u);
    ctx->pc = 0x1CF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF8B0u, 0x12AC7Cu, 0x12AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC84u;
label_12ac84:
    // 0x12ac84: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x12ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x12ac88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ac88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ac8c:
    // 0x12ac8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ac90: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC90u;
        // 0x12ac94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC98u;
}
