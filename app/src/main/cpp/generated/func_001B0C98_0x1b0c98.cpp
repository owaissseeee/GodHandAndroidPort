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

// Function: func_001B0C98
// Address: 0x1b0c98 - 0x1b0ce8
void func_001B0C98_0x1b0c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0C98_0x1b0c98");
#endif

    switch (ctx->pc) {
        case 0x1b0cbcu: goto label_1b0cbc;
        case 0x1b0cd4u: goto label_1b0cd4;
        default: break;
    }

    ctx->pc = 0x1b0c98u;

    // 0x1b0c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0c9c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b0ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0ca4: 0x8c626058  lw          $v0, 0x6058($v1)
    ctx->pc = 0x1b0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786058u));
    // 0x1b0ca8: 0x24706058  addiu       $s0, $v1, 0x6058
    ctx->pc = 0x1b0ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24664));
    // 0x1b0cac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0CACu;
    {
        const bool branch_taken_0x1b0cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CACu;
        // 0x1b0cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cac) {
            ctx->pc = 0x1B0CD4u;
            goto label_1b0cd4;
        }
    }
    ctx->pc = 0x1B0CB4u;
    // 0x1b0cb4: 0xc06f780  jal         func_1BDE00
    ctx->pc = 0x1B0CB4u;
    SET_GPR_U32(ctx, 31, 0x1B0CBCu);
    ctx->pc = 0x1BDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE00u, 0x1B0CB4u, 0x1B0CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CBCu;
label_1b0cbc:
    // 0x1b0cbc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b0cc0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b0cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b0cc4: 0x24a582d8  addiu       $a1, $a1, -0x7D28
    ctx->pc = 0x1b0cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935256));
    // 0x1b0cc8: 0x24c65858  addiu       $a2, $a2, 0x5858
    ctx->pc = 0x1b0cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22616));
    // 0x1b0ccc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B0CCCu;
    SET_GPR_U32(ctx, 31, 0x1B0CD4u);
    ctx->pc = 0x1B0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CCCu;
    // 0x1b0cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B0CCCu, 0x1B0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CD4u;
label_1b0cd4:
    // 0x1b0cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CE0u;
        // 0x1b0ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0CE8u;
}
