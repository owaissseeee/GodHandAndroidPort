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
// Function: Initialize__7cMcSave
// Address: 0x7c3a20 - 0x7c3a60
void Initialize__7cMcSave_0x7c3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7cMcSave_0x7c3a20");
#endif

    switch (ctx->pc) {
        case 0x7c3a34u: goto label_7c3a34;
        case 0x7c3a4cu: goto label_7c3a4c;
        default: break;
    }

    ctx->pc = 0x7c3a20u;

    // 0x7c3a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c3a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3a24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c3a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3a2c: 0xc1f1c9a  jal         func_7C7268
    ctx->pc = 0x7C3A2Cu;
    SET_GPR_U32(ctx, 31, 0x7C3A34u);
    ctx->pc = 0x7C3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3A2Cu;
    // 0x7c3a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7268u, 0x7C3A2Cu, 0x7C3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3A34u;
label_7c3a34:
    // 0x7c3a34: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c3a38: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x7c3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x7c3a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c3a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3a40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7c3a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7c3a44: 0xc1f0eba  jal         func_7C3AE8
    ctx->pc = 0x7C3A44u;
    SET_GPR_U32(ctx, 31, 0x7C3A4Cu);
    ctx->pc = 0x7C3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3A44u;
    // 0x7c3a48: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3AE8u, 0x7C3A44u, 0x7C3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3A4Cu;
label_7c3a4c:
    // 0x7c3a4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c3a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3a54: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3A54u;
        // 0x7c3a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3A5Cu;
    // 0x7c3a5c: 0x0  nop
    ctx->pc = 0x7c3a5cu;
    // NOP
    ctx->pc = 0x7c3a60u;
}
} // namespace gh_mcport
