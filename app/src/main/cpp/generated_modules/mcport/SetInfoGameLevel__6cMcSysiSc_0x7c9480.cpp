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
// Function: SetInfoGameLevel__6cMcSysiSc
// Address: 0x7c9480 - 0x7c94b0
void SetInfoGameLevel__6cMcSysiSc_0x7c9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInfoGameLevel__6cMcSysiSc_0x7c9480");
#endif

    switch (ctx->pc) {
        case 0x7c9498u: goto label_7c9498;
        default: break;
    }

    ctx->pc = 0x7c9480u;

    // 0x7c9480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c9488: 0x68600  sll         $s0, $a2, 24
    ctx->pc = 0x7c9488u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x7c948c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9490: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C9490u;
    SET_GPR_U32(ctx, 31, 0x7C9498u);
    ctx->pc = 0x7C9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9490u;
    // 0x7c9494: 0x108603  sra         $s0, $s0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C9490u, 0x7C9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9498u;
label_7c9498:
    // 0x7c9498: 0xa0500010  sb          $s0, 0x10($v0)
    ctx->pc = 0x7c9498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 16));
    // 0x7c949c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c949cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c94a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c94a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c94a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C94A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C94A4u;
        // 0x7c94a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C94A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C94ACu;
    // 0x7c94ac: 0x0  nop
    ctx->pc = 0x7c94acu;
    // NOP
    ctx->pc = 0x7c94b0u;
}
} // namespace gh_mcport
