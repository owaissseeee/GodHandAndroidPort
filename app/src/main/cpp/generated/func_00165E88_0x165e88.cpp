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

// Function: func_00165E88
// Address: 0x165e88 - 0x165eb8
void func_00165E88_0x165e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00165E88_0x165e88");
#endif

    switch (ctx->pc) {
        case 0x165e9cu: goto label_165e9c;
        case 0x165ea4u: goto label_165ea4;
        default: break;
    }

    ctx->pc = 0x165e88u;

    // 0x165e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165e8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x165e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x165e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165e94: 0xc059876  jal         func_1661D8
    ctx->pc = 0x165E94u;
    SET_GPR_U32(ctx, 31, 0x165E9Cu);
    ctx->pc = 0x165E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E94u;
    // 0x165e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1661D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1661D8u, 0x165E94u, 0x165E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E9Cu;
label_165e9c:
    // 0x165e9c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x165E9Cu;
    SET_GPR_U32(ctx, 31, 0x165EA4u);
    ctx->pc = 0x165EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E9Cu;
    // 0x165ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x165E9Cu, 0x165EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EA4u;
label_165ea4:
    // 0x165ea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165eac: 0x3e00008  jr          $ra
    ctx->pc = 0x165EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EACu;
        // 0x165eb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165EB4u;
    // 0x165eb4: 0x0  nop
    ctx->pc = 0x165eb4u;
    // NOP
    ctx->pc = 0x165eb8u;
}
