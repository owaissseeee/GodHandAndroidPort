#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079A398
// Address: 0x79a398 - 0x79a3d0
void func_0079A398_0x79a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A398_0x79a398");
#endif

    switch (ctx->pc) {
        case 0x79a3a8u: goto label_79a3a8;
        default: break;
    }

    ctx->pc = 0x79a398u;

    // 0x79a398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a3a0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A3A0u;
    SET_GPR_U32(ctx, 31, 0x79A3A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A3A0u, 0x79A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0x8c420698  lw          $v0, 0x698($v0)
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1688)));
    // 0x79a3ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3ACu;
    {
        const bool branch_taken_0x79a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a3ac) {
            ctx->pc = 0x79A3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3ACu;
            // 0x79a3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3C0u;
            goto label_79a3c0;
        }
    }
    ctx->pc = 0x79A3B4u;
    // 0x79a3b4: 0x944202fe  lhu         $v0, 0x2FE($v0)
    ctx->pc = 0x79a3b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x79a3b8: 0x384203b7  xori        $v0, $v0, 0x3B7
    ctx->pc = 0x79a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)951);
    // 0x79a3bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79a3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_79a3c0:
    // 0x79a3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C4u;
        // 0x79a3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3CCu;
    // 0x79a3cc: 0x0  nop
    ctx->pc = 0x79a3ccu;
    // NOP
    ctx->pc = 0x79a3d0u;
}
} // namespace gh_r607
