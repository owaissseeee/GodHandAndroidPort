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

// Function: func_00183510
// Address: 0x183510 - 0x183550
void func_00183510_0x183510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183510_0x183510");
#endif

    switch (ctx->pc) {
        case 0x183540u: goto label_183540;
        default: break;
    }

    ctx->pc = 0x183510u;

    // 0x183510: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x183510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183518: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x18351c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183520: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x183520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x183524: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x183524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183528: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18352c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18352cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x183534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183538: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x183538u;
    SET_GPR_U32(ctx, 31, 0x183540u);
    ctx->pc = 0x18353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183538u;
    // 0x18353c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x183538u, 0x183540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183540u;
label_183540:
    // 0x183540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183544: 0x3e00008  jr          $ra
    ctx->pc = 0x183544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183544u;
        // 0x183548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18354Cu;
    // 0x18354c: 0x0  nop
    ctx->pc = 0x18354cu;
    // NOP
    ctx->pc = 0x183550u;
}
