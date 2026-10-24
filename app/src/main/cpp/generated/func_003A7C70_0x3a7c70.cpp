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

// Function: func_003A7C70
// Address: 0x3a7c70 - 0x3a7cc0
void func_003A7C70_0x3a7c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A7C70_0x3a7c70");
#endif

    switch (ctx->pc) {
        case 0x3a7c90u: goto label_3a7c90;
        case 0x3a7c9cu: goto label_3a7c9c;
        case 0x3a7ca8u: goto label_3a7ca8;
        default: break;
    }

    ctx->pc = 0x3a7c70u;

    // 0x3a7c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7c74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a7c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a7c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a7c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c80: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3a7c80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3a7c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7c88: 0xc0ea012  jal         func_3A8048
    ctx->pc = 0x3A7C88u;
    SET_GPR_U32(ctx, 31, 0x3A7C90u);
    ctx->pc = 0x3A7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C88u;
    // 0x3a7c8c: 0x8e24a62c  lw          $a0, -0x59D4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8048u, 0x3A7C88u, 0x3A7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C90u;
label_3a7c90:
    // 0x3a7c90: 0x8e24a62c  lw          $a0, -0x59D4($s1)
    ctx->pc = 0x3a7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944300)));
    // 0x3a7c94: 0xc0eb0be  jal         func_3AC2F8
    ctx->pc = 0x3A7C94u;
    SET_GPR_U32(ctx, 31, 0x3A7C9Cu);
    ctx->pc = 0x3A7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C94u;
    // 0x3a7c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2F8u, 0x3A7C94u, 0x3A7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C9Cu;
label_3a7c9c:
    // 0x3a7c9c: 0x8e24a62c  lw          $a0, -0x59D4($s1)
    ctx->pc = 0x3a7c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944300)));
    // 0x3a7ca0: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3A7CA0u;
    SET_GPR_U32(ctx, 31, 0x3A7CA8u);
    ctx->pc = 0x3A7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CA0u;
    // 0x3a7ca4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3A7CA0u, 0x3A7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CA8u;
label_3a7ca8:
    // 0x3a7ca8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7cac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7cb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a7cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CB8u;
        // 0x3a7cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7CC0u;
}
