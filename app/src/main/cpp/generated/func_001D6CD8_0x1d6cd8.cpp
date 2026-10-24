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

// Function: func_001D6CD8
// Address: 0x1d6cd8 - 0x1d6d20
void func_001D6CD8_0x1d6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6CD8_0x1d6cd8");
#endif

    switch (ctx->pc) {
        case 0x1d6cfcu: goto label_1d6cfc;
        case 0x1d6d0cu: goto label_1d6d0c;
        default: break;
    }

    ctx->pc = 0x1d6cd8u;

    // 0x1d6cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6cdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ce8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d6ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cf4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6CF4u;
    SET_GPR_U32(ctx, 31, 0x1D6CFCu);
    ctx->pc = 0x1D6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CF4u;
    // 0x1d6cf8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6CF4u, 0x1D6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CFCu;
label_1d6cfc:
    // 0x1d6cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d04: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6D04u;
    SET_GPR_U32(ctx, 31, 0x1D6D0Cu);
    ctx->pc = 0x1D6D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D04u;
    // 0x1d6d08: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6D04u, 0x1D6D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D0Cu;
label_1d6d0c:
    // 0x1d6d0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D18u;
        // 0x1d6d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D20u;
}
