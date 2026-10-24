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

// Function: MtxMulTransVec
// Address: 0x147b18 - 0x147b60
void MtxMulTransVec_0x147b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxMulTransVec_0x147b18");
#endif

    switch (ctx->pc) {
        case 0x147b3cu: goto label_147b3c;
        case 0x147b4cu: goto label_147b4c;
        default: break;
    }

    ctx->pc = 0x147b18u;

    // 0x147b18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x147b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x147b1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x147b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x147b20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x147b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x147b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x147b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x147b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147b30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x147b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b34: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x147B34u;
    SET_GPR_U32(ctx, 31, 0x147B3Cu);
    ctx->pc = 0x147B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B34u;
    // 0x147b38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x147B34u, 0x147B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B3Cu;
label_147b3c:
    // 0x147b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b44: 0xc051d52  jal         func_147548
    ctx->pc = 0x147B44u;
    SET_GPR_U32(ctx, 31, 0x147B4Cu);
    ctx->pc = 0x147B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B44u;
    // 0x147b48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x147B44u, 0x147B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B4Cu;
label_147b4c:
    // 0x147b4c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x147b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147b50: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x147b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147b54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x147b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147b58: 0x3e00008  jr          $ra
    ctx->pc = 0x147B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B58u;
        // 0x147b5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147B60u;
}
