#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf6cMcSys
// Address: 0x7cf538 - 0x7cf578
void ps2___tf6cMcSys_0x7cf538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf6cMcSys_0x7cf538");
#endif

    switch (ctx->pc) {
        case 0x7cf564u: goto label_7cf564;
        default: break;
    }

    ctx->pc = 0x7cf538u;

    // 0x7cf538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cf538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cf53c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cf53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cf540: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7cf540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7cf544: 0x8c621480  lw          $v0, 0x1480($v1)
    ctx->pc = 0x7cf544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1480u));
    // 0x7cf548: 0x24701480  addiu       $s0, $v1, 0x1480
    ctx->pc = 0x7cf548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
    // 0x7cf54c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CF54Cu;
    {
        const bool branch_taken_0x7cf54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF54Cu;
        // 0x7cf550: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf54c) {
            ctx->pc = 0x7CF564u;
            goto label_7cf564;
        }
    }
    ctx->pc = 0x7CF554u;
    // 0x7cf554: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cf558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf55c: 0xc1f2614  jal         func_7C9850
    ctx->pc = 0x7CF55Cu;
    SET_GPR_U32(ctx, 31, 0x7CF564u);
    ctx->pc = 0x7CF560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF55Cu;
    // 0x7cf560: 0x24a509d8  addiu       $a1, $a1, 0x9D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9850u, 0x7CF55Cu, 0x7CF564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF564u;
label_7cf564:
    // 0x7cf564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cf564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf56c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7cf56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf570: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF570u;
        // 0x7cf574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF578u;
}
} // namespace gh_mcport
