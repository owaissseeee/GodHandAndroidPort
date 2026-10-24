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
// Function: Initialize__7cMcLoad
// Address: 0x7c1138 - 0x7c1178
void Initialize__7cMcLoad_0x7c1138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7cMcLoad_0x7c1138");
#endif

    switch (ctx->pc) {
        case 0x7c114cu: goto label_7c114c;
        case 0x7c1164u: goto label_7c1164;
        default: break;
    }

    ctx->pc = 0x7c1138u;

    // 0x7c1138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c1138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c113c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c1140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c1140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c1144: 0xc1f1c9a  jal         func_7C7268
    ctx->pc = 0x7C1144u;
    SET_GPR_U32(ctx, 31, 0x7C114Cu);
    ctx->pc = 0x7C1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1144u;
    // 0x7c1148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7268u, 0x7C1144u, 0x7C114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C114Cu;
label_7c114c:
    // 0x7c114c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c1150: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x7c1150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x7c1154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c1154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1158: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7c1158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7c115c: 0xc1f0474  jal         func_7C11D0
    ctx->pc = 0x7C115Cu;
    SET_GPR_U32(ctx, 31, 0x7C1164u);
    ctx->pc = 0x7C1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C115Cu;
    // 0x7c1160: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C11D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C11D0u, 0x7C115Cu, 0x7C1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1164u;
label_7c1164:
    // 0x7c1164: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c1164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c1168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c1168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c116c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C116Cu;
        // 0x7c1170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1174u;
    // 0x7c1174: 0x0  nop
    ctx->pc = 0x7c1174u;
    // NOP
    ctx->pc = 0x7c1178u;
}
} // namespace gh_mcport
