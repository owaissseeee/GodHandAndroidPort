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

// Function: func_00146EA0
// Address: 0x146ea0 - 0x146ef0
void func_00146EA0_0x146ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146EA0_0x146ea0");
#endif

    switch (ctx->pc) {
        case 0x146ec4u: goto label_146ec4;
        case 0x146edcu: goto label_146edc;
        default: break;
    }

    ctx->pc = 0x146ea0u;

    // 0x146ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146ea4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x146ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x146ea8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146eac: 0x8c6256a8  lw          $v0, 0x56A8($v1)
    ctx->pc = 0x146eacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7856A8u));
    // 0x146eb0: 0x247056a8  addiu       $s0, $v1, 0x56A8
    ctx->pc = 0x146eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22184));
    // 0x146eb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146EB4u;
    {
        const bool branch_taken_0x146eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EB4u;
        // 0x146eb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146eb4) {
            ctx->pc = 0x146EDCu;
            goto label_146edc;
        }
    }
    ctx->pc = 0x146EBCu;
    // 0x146ebc: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x146EBCu;
    SET_GPR_U32(ctx, 31, 0x146EC4u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x146EBCu, 0x146EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EC4u;
label_146ec4:
    // 0x146ec4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x146ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x146ec8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x146ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x146ecc: 0x24a5e8f8  addiu       $a1, $a1, -0x1708
    ctx->pc = 0x146eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961400));
    // 0x146ed0: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x146ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x146ed4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x146ED4u;
    SET_GPR_U32(ctx, 31, 0x146EDCu);
    ctx->pc = 0x146ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146ED4u;
    // 0x146ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x146ED4u, 0x146EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EDCu;
label_146edc:
    // 0x146edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x146EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EE8u;
        // 0x146eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146EF0u;
}
