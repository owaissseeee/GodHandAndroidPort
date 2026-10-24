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

// Function: cIDBase
// Address: 0x2a9dc0 - 0x2a9df8
void cIDBase_0x2a9dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_0x2a9dc0");
#endif

    switch (ctx->pc) {
        case 0x2a9de0u: goto label_2a9de0;
        default: break;
    }

    ctx->pc = 0x2a9dc0u;

    // 0x2a9dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9dc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dd0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x2a9dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a9dd4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2a9dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a9dd8: 0xc0aa77e  jal         func_2A9DF8
    ctx->pc = 0x2A9DD8u;
    SET_GPR_U32(ctx, 31, 0x2A9DE0u);
    ctx->pc = 0x2A9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DD8u;
    // 0x2a9ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DF8u, 0x2A9DD8u, 0x2A9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DE0u;
label_2a9de0:
    // 0x2a9de0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9de8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9DECu;
        // 0x2a9df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9DF4u;
    // 0x2a9df4: 0x0  nop
    ctx->pc = 0x2a9df4u;
    // NOP
    ctx->pc = 0x2a9df8u;
}
