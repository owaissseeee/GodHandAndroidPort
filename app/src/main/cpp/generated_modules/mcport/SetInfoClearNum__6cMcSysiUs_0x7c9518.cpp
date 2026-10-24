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
// Function: SetInfoClearNum__6cMcSysiUs
// Address: 0x7c9518 - 0x7c9540
void SetInfoClearNum__6cMcSysiUs_0x7c9518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInfoClearNum__6cMcSysiUs_0x7c9518");
#endif

    switch (ctx->pc) {
        case 0x7c952cu: goto label_7c952c;
        default: break;
    }

    ctx->pc = 0x7c9518u;

    // 0x7c9518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c951c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c9520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9524: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C9524u;
    SET_GPR_U32(ctx, 31, 0x7C952Cu);
    ctx->pc = 0x7C9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9524u;
    // 0x7c9528: 0x30d0ffff  andi        $s0, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C9524u, 0x7C952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C952Cu;
label_7c952c:
    // 0x7c952c: 0xa450000e  sh          $s0, 0xE($v0)
    ctx->pc = 0x7c952cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x7c9530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c9530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9538: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9538u;
        // 0x7c953c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9540u;
}
} // namespace gh_mcport
