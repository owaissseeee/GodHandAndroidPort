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

// Function: VecRotY
// Address: 0x150888 - 0x1508d8
void VecRotY_0x150888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VecRotY_0x150888");
#endif

    switch (ctx->pc) {
        case 0x1508a8u: goto label_1508a8;
        case 0x1508b8u: goto label_1508b8;
        default: break;
    }

    ctx->pc = 0x150888u;

    // 0x150888: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x150888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15088c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x150890: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x150890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x150894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150898: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15089c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1508a0: 0xc051e62  jal         func_147988
    ctx->pc = 0x1508A0u;
    SET_GPR_U32(ctx, 31, 0x1508A8u);
    ctx->pc = 0x1508A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508A0u;
    // 0x1508a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1508A0u, 0x1508A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508A8u;
label_1508a8:
    // 0x1508a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1508a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1508acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508b0: 0xc054236  jal         func_1508D8
    ctx->pc = 0x1508B0u;
    SET_GPR_U32(ctx, 31, 0x1508B8u);
    ctx->pc = 0x1508B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508B0u;
    // 0x1508b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x1508B0u, 0x1508B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508B8u;
label_1508b8:
    // 0x1508b8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1508b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1508bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1508bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1508c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1508c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1508c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1508C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1508C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508C4u;
        // 0x1508c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1508C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1508CCu;
    // 0x1508cc: 0x0  nop
    ctx->pc = 0x1508ccu;
    // NOP
    // 0x1508d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1508d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1508d4: 0x0  nop
    ctx->pc = 0x1508d4u;
    // NOP
    ctx->pc = 0x1508d8u;
}
