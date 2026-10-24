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

// Function: func_002F7C88
// Address: 0x2f7c88 - 0x2f7cd8
void func_002F7C88_0x2f7c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7C88_0x2f7c88");
#endif

    switch (ctx->pc) {
        case 0x2f7cacu: goto label_2f7cac;
        case 0x2f7cc4u: goto label_2f7cc4;
        default: break;
    }

    ctx->pc = 0x2f7c88u;

    // 0x2f7c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7c8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f7c90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f7c94: 0x8c626568  lw          $v0, 0x6568($v1)
    ctx->pc = 0x2f7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786568u));
    // 0x2f7c98: 0x24706568  addiu       $s0, $v1, 0x6568
    ctx->pc = 0x2f7c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25960));
    // 0x2f7c9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7C9Cu;
    {
        const bool branch_taken_0x2f7c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C9Cu;
        // 0x2f7ca0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c9c) {
            ctx->pc = 0x2F7CC4u;
            goto label_2f7cc4;
        }
    }
    ctx->pc = 0x2F7CA4u;
    // 0x2f7ca4: 0xc0bbe98  jal         func_2EFA60
    ctx->pc = 0x2F7CA4u;
    SET_GPR_U32(ctx, 31, 0x2F7CACu);
    ctx->pc = 0x2EFA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA60u, 0x2F7CA4u, 0x2F7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CACu;
label_2f7cac:
    // 0x2f7cac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f7cb0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f7cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f7cb4: 0x24a5f770  addiu       $a1, $a1, -0x890
    ctx->pc = 0x2f7cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965104));
    // 0x2f7cb8: 0x24c663f8  addiu       $a2, $a2, 0x63F8
    ctx->pc = 0x2f7cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25592));
    // 0x2f7cbc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F7CBCu;
    SET_GPR_U32(ctx, 31, 0x2F7CC4u);
    ctx->pc = 0x2F7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CBCu;
    // 0x2f7cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F7CBCu, 0x2F7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CC4u;
label_2f7cc4:
    // 0x2f7cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f7cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7ccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CD0u;
        // 0x2f7cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7CD8u;
}
