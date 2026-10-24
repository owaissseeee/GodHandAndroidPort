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
// Function: _$_7cMcSave
// Address: 0x7cf388 - 0x7cf3b8
void ps2____7cMcSave_0x7cf388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____7cMcSave_0x7cf388");
#endif

    switch (ctx->pc) {
        case 0x7cf3acu: goto label_7cf3ac;
        default: break;
    }

    ctx->pc = 0x7cf388u;

    // 0x7cf388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cf388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cf38c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cf390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cf394: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7cf394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7cf398: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7cf398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7cf39c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CF39Cu;
    {
        const bool branch_taken_0x7cf39c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF39Cu;
        // 0x7cf3a0: 0xac8200ec  sw          $v0, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf39c) {
            ctx->pc = 0x7CF3ACu;
            goto label_7cf3ac;
        }
    }
    ctx->pc = 0x7CF3A4u;
    // 0x7cf3a4: 0xc1f2588  jal         func_7C9620
    ctx->pc = 0x7CF3A4u;
    SET_GPR_U32(ctx, 31, 0x7CF3ACu);
    ctx->pc = 0x7C9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9620u, 0x7CF3A4u, 0x7CF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF3ACu;
label_7cf3ac:
    // 0x7cf3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF3B0u;
        // 0x7cf3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF3B8u;
}
} // namespace gh_mcport
