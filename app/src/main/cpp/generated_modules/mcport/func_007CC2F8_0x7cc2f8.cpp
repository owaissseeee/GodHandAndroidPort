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
// Function: func_007CC2F8
// Address: 0x7cc2f8 - 0x7cc348
void func_007CC2F8_0x7cc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC2F8_0x7cc2f8");
#endif

    switch (ctx->pc) {
        case 0x7cc300u: goto label_7cc300;
        default: break;
    }

    ctx->pc = 0x7cc2f8u;

    // 0x7cc2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7cc2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc2fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7cc2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cc300:
    // 0x7cc300: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x7cc300u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cc304: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7cc304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7cc308: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x7cc308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x7cc30c: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x7cc30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x7cc310: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x7cc310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x7cc314: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x7cc314u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x7cc318: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7CC318u;
    {
        const bool branch_taken_0x7cc318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC318u;
        // 0x7cc31c: 0x24e70007  addiu       $a3, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc318) {
            ctx->pc = 0x7CC300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc300;
        }
    }
    ctx->pc = 0x7CC320u;
    // 0x7cc320: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x7cc320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x7cc324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CC324u;
    {
        const bool branch_taken_0x7cc324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC324u;
        // 0x7cc328: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc324) {
            ctx->pc = 0x7CC33Cu;
            goto label_7cc33c;
        }
    }
    ctx->pc = 0x7CC32Cu;
    // 0x7cc32c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CC32Cu;
    {
        const bool branch_taken_0x7cc32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC32Cu;
        // 0x7cc330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc32c) {
            ctx->pc = 0x7CC33Cu;
            goto label_7cc33c;
        }
    }
    ctx->pc = 0x7CC334u;
    // 0x7cc334: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x7cc334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x7cc338: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x7cc338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_7cc33c:
    // 0x7cc33c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x7cc33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x7cc340: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC340u;
        // 0x7cc344: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC348u;
}
} // namespace gh_mcport
