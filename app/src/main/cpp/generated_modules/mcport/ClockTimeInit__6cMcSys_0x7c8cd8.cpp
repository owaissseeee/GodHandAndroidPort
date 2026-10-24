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
// Function: ClockTimeInit__6cMcSys
// Address: 0x7c8cd8 - 0x7c8d00
void ClockTimeInit__6cMcSys_0x7c8cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClockTimeInit__6cMcSys_0x7c8cd8");
#endif

    switch (ctx->pc) {
        case 0x7c8cf0u: goto label_7c8cf0;
        default: break;
    }

    ctx->pc = 0x7c8cd8u;

    // 0x7c8cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c8cdc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x7c8cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x7c8ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c8ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8ce8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C8CE8u;
    SET_GPR_U32(ctx, 31, 0x7C8CF0u);
    ctx->pc = 0x7C8CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8CE8u;
    // 0x7c8cec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C8CE8u, 0x7C8CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8CF0u;
label_7c8cf0:
    // 0x7c8cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8CF4u;
        // 0x7c8cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8CFCu;
    // 0x7c8cfc: 0x0  nop
    ctx->pc = 0x7c8cfcu;
    // NOP
    ctx->pc = 0x7c8d00u;
}
} // namespace gh_mcport
