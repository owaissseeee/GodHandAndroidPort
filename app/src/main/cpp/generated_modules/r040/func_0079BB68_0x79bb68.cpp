#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BB68
// Address: 0x79bb68 - 0x79bba8
void func_0079BB68_0x79bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BB68_0x79bb68");
#endif

    switch (ctx->pc) {
        case 0x79bb8cu: goto label_79bb8c;
        default: break;
    }

    ctx->pc = 0x79bb68u;

    // 0x79bb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79bb6c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79bb70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bb74: 0x8c43c800  lw          $v1, -0x3800($v0)
    ctx->pc = 0x79bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C800u));
    // 0x79bb78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79bb7c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BB7Cu;
    {
        const bool branch_taken_0x79bb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bb7c) {
            ctx->pc = 0x79BB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB7Cu;
            // 0x79bb80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB9Cu;
            goto label_79bb9c;
        }
    }
    ctx->pc = 0x79BB84u;
    // 0x79bb84: 0xc06199c  jal         func_186670
    ctx->pc = 0x79BB84u;
    SET_GPR_U32(ctx, 31, 0x79BB8Cu);
    ctx->pc = 0x186670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186670u, 0x79BB84u, 0x79BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB8Cu;
label_79bb8c:
    // 0x79bb8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79bb8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb90: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79BB90u;
    {
        const bool branch_taken_0x79bb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB90u;
        // 0x79bb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb90) {
            ctx->pc = 0x79BB9Cu;
            goto label_79bb9c;
        }
    }
    ctx->pc = 0x79BB98u;
    // 0x79bb98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bb9c:
    // 0x79bb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bba0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBA0u;
        // 0x79bba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BBA8u;
}
} // namespace gh_r040
