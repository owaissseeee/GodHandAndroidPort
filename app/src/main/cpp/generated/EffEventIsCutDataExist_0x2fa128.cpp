#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EffEventIsCutDataExist
// Address: 0x2fa128 - 0x2fa158
void EffEventIsCutDataExist_0x2fa128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffEventIsCutDataExist_0x2fa128");
#endif

    switch (ctx->pc) {
        case 0x2fa144u: goto label_2fa144;
        default: break;
    }

    ctx->pc = 0x2fa128u;

    // 0x2fa128: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x2fa128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fa12c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa130: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2fa130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2fa134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa138: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2fa138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x2fa13c: 0xc0c180c  jal         func_306030
    ctx->pc = 0x2FA13Cu;
    SET_GPR_U32(ctx, 31, 0x2FA144u);
    ctx->pc = 0x2FA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA13Cu;
    // 0x2fa140: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2FA13Cu, 0x2FA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA144u;
label_2fa144:
    // 0x2fa144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa148: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fa148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fa14c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA14Cu;
        // 0x2fa150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA154u;
    // 0x2fa154: 0x0  nop
    ctx->pc = 0x2fa154u;
    // NOP
    ctx->pc = 0x2fa158u;
}
