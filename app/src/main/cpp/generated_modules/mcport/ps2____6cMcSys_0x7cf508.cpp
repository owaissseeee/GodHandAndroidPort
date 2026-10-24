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
// Function: _$_6cMcSys
// Address: 0x7cf508 - 0x7cf538
void ps2____6cMcSys_0x7cf508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____6cMcSys_0x7cf508");
#endif

    switch (ctx->pc) {
        case 0x7cf52cu: goto label_7cf52c;
        default: break;
    }

    ctx->pc = 0x7cf508u;

    // 0x7cf508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cf508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cf50c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cf510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cf514: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7cf514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7cf518: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7cf518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7cf51c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF51Cu;
    {
        const bool branch_taken_0x7cf51c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF51Cu;
        // 0x7cf520: 0xac8200ec  sw          $v0, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf51c) {
            ctx->pc = 0x7CF52Cu;
            goto label_7cf52c;
        }
    }
    ctx->pc = 0x7CF524u;
    // 0x7cf524: 0xc1f2588  jal         func_7C9620
    ctx->pc = 0x7CF524u;
    SET_GPR_U32(ctx, 31, 0x7CF52Cu);
    ctx->pc = 0x7C9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9620u, 0x7CF524u, 0x7CF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF52Cu;
label_7cf52c:
    // 0x7cf52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf530: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF530u;
        // 0x7cf534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF538u;
}
} // namespace gh_mcport
