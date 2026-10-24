#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B4F0
// Address: 0x79b4f0 - 0x79b540
void func_0079B4F0_0x79b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B4F0_0x79b4f0");
#endif

    switch (ctx->pc) {
        case 0x79b508u: goto label_79b508;
        case 0x79b524u: goto label_79b524;
        case 0x79b530u: goto label_79b530;
        default: break;
    }

    ctx->pc = 0x79b4f0u;

    // 0x79b4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b4f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b4f8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b500: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79B500u;
    SET_GPR_U32(ctx, 31, 0x79B508u);
    ctx->pc = 0x79B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B500u;
    // 0x79b504: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79B500u, 0x79B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B508u;
label_79b508:
    // 0x79b508: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b50c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79b510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b51c: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B51Cu;
    SET_GPR_U32(ctx, 31, 0x79B524u);
    ctx->pc = 0x79B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B51Cu;
    // 0x79b520: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B51Cu, 0x79B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B524u;
label_79b524:
    // 0x79b524: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b528: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B528u;
    SET_GPR_U32(ctx, 31, 0x79B530u);
    ctx->pc = 0x79B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B528u;
    // 0x79b52c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B528u, 0x79B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B530u;
label_79b530:
    // 0x79b530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b538: 0x3e00008  jr          $ra
    ctx->pc = 0x79B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B538u;
        // 0x79b53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B540u;
}
} // namespace gh_r700
