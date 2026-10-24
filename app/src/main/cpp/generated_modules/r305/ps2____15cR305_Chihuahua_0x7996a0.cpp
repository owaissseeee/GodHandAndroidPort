#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: _$_15cR305_Chihuahua
// Address: 0x7996a0 - 0x7996c8
void ps2____15cR305_Chihuahua_0x7996a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____15cR305_Chihuahua_0x7996a0");
#endif

    switch (ctx->pc) {
        case 0x7996b8u: goto label_7996b8;
        default: break;
    }

    ctx->pc = 0x7996a0u;

    // 0x7996a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7996a4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7996a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7996A8u;
    {
        const bool branch_taken_0x7996a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a8) {
            ctx->pc = 0x7996B8u;
            goto label_7996b8;
        }
    }
    ctx->pc = 0x7996B0u;
    // 0x7996b0: 0xc1e6474  jal         func_7991D0
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7996BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996C4u;
    // 0x7996c4: 0x0  nop
    ctx->pc = 0x7996c4u;
    // NOP
    ctx->pc = 0x7996c8u;
}
} // namespace gh_r305
