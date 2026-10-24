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
// Function: func_0079B018
// Address: 0x79b018 - 0x79b048
void func_0079B018_0x79b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B018_0x79b018");
#endif

    switch (ctx->pc) {
        case 0x79b030u: goto label_79b030;
        case 0x79b03cu: goto label_79b03c;
        default: break;
    }

    ctx->pc = 0x79b018u;

    // 0x79b018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b01c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b024: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b028: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b02c: 0x0  nop
    ctx->pc = 0x79b02cu;
    // NOP
label_79b030:
    // 0x79b030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b034: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B034u;
    SET_GPR_U32(ctx, 31, 0x79B03Cu);
    ctx->pc = 0x79B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B034u;
    // 0x79b038: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B034u, 0x79B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B03Cu;
label_79b03c:
    // 0x79b03c: 0x0  nop
    ctx->pc = 0x79b03cu;
    // NOP
    // 0x79b040: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B040u;
    {
        const bool branch_taken_0x79b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B040u;
        // 0x79b044: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b040) {
            ctx->pc = 0x79B030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b030;
        }
    }
    ctx->pc = 0x79B048u;
}
} // namespace gh_r040
