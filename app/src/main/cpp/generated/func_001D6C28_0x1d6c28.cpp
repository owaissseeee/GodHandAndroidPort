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

// Function: func_001D6C28
// Address: 0x1d6c28 - 0x1d6c70
void func_001D6C28_0x1d6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6C28_0x1d6c28");
#endif

    switch (ctx->pc) {
        case 0x1d6c4cu: goto label_1d6c4c;
        case 0x1d6c5cu: goto label_1d6c5c;
        default: break;
    }

    ctx->pc = 0x1d6c28u;

    // 0x1d6c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6c2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6c40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c44: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6C44u;
    SET_GPR_U32(ctx, 31, 0x1D6C4Cu);
    ctx->pc = 0x1D6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C44u;
    // 0x1d6c48: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6C44u, 0x1D6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C4Cu;
label_1d6c4c:
    // 0x1d6c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c54: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6C54u;
    SET_GPR_U32(ctx, 31, 0x1D6C5Cu);
    ctx->pc = 0x1D6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C54u;
    // 0x1d6c58: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6C54u, 0x1D6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C5Cu;
label_1d6c5c:
    // 0x1d6c5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C68u;
        // 0x1d6c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C70u;
}
