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
// Function: SetIdWinMess__6cMcSysUib
// Address: 0x7c88a8 - 0x7c88e8
void SetIdWinMess__6cMcSysUib_0x7c88a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdWinMess__6cMcSysUib_0x7c88a8");
#endif

    switch (ctx->pc) {
        case 0x7c88c4u: goto label_7c88c4;
        default: break;
    }

    ctx->pc = 0x7c88a8u;

    // 0x7c88a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c88a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c88ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x7c88acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c88b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c88b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c88b4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x7c88b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x7c88b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c88b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c88bc: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C88BCu;
    SET_GPR_U32(ctx, 31, 0x7C88C4u);
    ctx->pc = 0x7C88C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C88BCu;
    // 0x7c88c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C88BCu, 0x7C88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C88C4u;
label_7c88c4:
    // 0x7c88c4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c88c8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x7c88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x7c88cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c88ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c88d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7c88d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7c88d4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x7c88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x7c88d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c88d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c88dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C88DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C88DCu;
        // 0x7c88e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C88DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C88E4u;
    // 0x7c88e4: 0x0  nop
    ctx->pc = 0x7c88e4u;
    // NOP
    ctx->pc = 0x7c88e8u;
}
} // namespace gh_mcport
