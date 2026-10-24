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
// Function: SetInfoSavePoint__6cMcSysi10eSavePoint
// Address: 0x7c8f78 - 0x7c8fa0
void SetInfoSavePoint__6cMcSysi10eSavePoint_0x7c8f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInfoSavePoint__6cMcSysi10eSavePoint_0x7c8f78");
#endif

    switch (ctx->pc) {
        case 0x7c8f8cu: goto label_7c8f8c;
        default: break;
    }

    ctx->pc = 0x7c8f78u;

    // 0x7c8f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c8f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c8f7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c8f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8f84: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C8F84u;
    SET_GPR_U32(ctx, 31, 0x7C8F8Cu);
    ctx->pc = 0x7C8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8F84u;
    // 0x7c8f88: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C8F84u, 0x7C8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8F8Cu;
label_7c8f8c:
    // 0x7c8f8c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x7c8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x7c8f90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c8f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8f98: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8F98u;
        // 0x7c8f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8FA0u;
}
} // namespace gh_mcport
