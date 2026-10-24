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

// Function: MtxMulScaleVec
// Address: 0x147bf8 - 0x147c40
void MtxMulScaleVec_0x147bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxMulScaleVec_0x147bf8");
#endif

    switch (ctx->pc) {
        case 0x147c1cu: goto label_147c1c;
        case 0x147c2cu: goto label_147c2c;
        default: break;
    }

    ctx->pc = 0x147bf8u;

    // 0x147bf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x147bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x147bfc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x147bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x147c00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x147c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x147c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x147c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x147c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147c10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x147c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c14: 0xc051e82  jal         func_147A08
    ctx->pc = 0x147C14u;
    SET_GPR_U32(ctx, 31, 0x147C1Cu);
    ctx->pc = 0x147C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C14u;
    // 0x147c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A08u, 0x147C14u, 0x147C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C1Cu;
label_147c1c:
    // 0x147c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c24: 0xc051d52  jal         func_147548
    ctx->pc = 0x147C24u;
    SET_GPR_U32(ctx, 31, 0x147C2Cu);
    ctx->pc = 0x147C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C24u;
    // 0x147c28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x147C24u, 0x147C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C2Cu;
label_147c2c:
    // 0x147c2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x147c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147c30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x147c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147c34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x147c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147c38: 0x3e00008  jr          $ra
    ctx->pc = 0x147C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C38u;
        // 0x147c3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147C40u;
}
