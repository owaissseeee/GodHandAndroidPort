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

// Function: GetOrInitSingleton785828_170C98
// Address: 0x170c98 - 0x170ce8
void GetOrInitSingleton785828_170C98_0x170c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton785828_170C98_0x170c98");
#endif

    switch (ctx->pc) {
        case 0x170cbcu: goto label_170cbc;
        case 0x170cd4u: goto label_170cd4;
        default: break;
    }

    ctx->pc = 0x170c98u;

    // 0x170c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170c9c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x170c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x170ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170ca4: 0x8c625828  lw          $v0, 0x5828($v1)
    ctx->pc = 0x170ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785828u));
    // 0x170ca8: 0x24705828  addiu       $s0, $v1, 0x5828
    ctx->pc = 0x170ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22568));
    // 0x170cac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170CACu;
    {
        const bool branch_taken_0x170cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CACu;
        // 0x170cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cac) {
            ctx->pc = 0x170CD4u;
            goto label_170cd4;
        }
    }
    ctx->pc = 0x170CB4u;
    // 0x170cb4: 0xc070006  jal         func_1C0018
    ctx->pc = 0x170CB4u;
    SET_GPR_U32(ctx, 31, 0x170CBCu);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x170CB4u, 0x170CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CBCu;
label_170cbc:
    // 0x170cbc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x170cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x170cc0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x170cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x170cc4: 0x24a50838  addiu       $a1, $a1, 0x838
    ctx->pc = 0x170cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2104));
    // 0x170cc8: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x170cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x170ccc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x170CCCu;
    SET_GPR_U32(ctx, 31, 0x170CD4u);
    ctx->pc = 0x170CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CCCu;
    // 0x170cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x170CCCu, 0x170CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CD4u;
label_170cd4:
    // 0x170cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x170CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CE0u;
        // 0x170ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170CE8u;
}
