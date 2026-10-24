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

// Function: EffEventDataRelease
// Address: 0x2fa0e8 - 0x2fa128
void EffEventDataRelease_0x2fa0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffEventDataRelease_0x2fa0e8");
#endif

    switch (ctx->pc) {
        case 0x2fa118u: goto label_2fa118;
        default: break;
    }

    ctx->pc = 0x2fa0e8u;

    // 0x2fa0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa0ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fa0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2fa0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa0f4: 0x244219a0  addiu       $v0, $v0, 0x19A0
    ctx->pc = 0x2fa0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
    // 0x2fa0f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa0fc: 0x9043041c  lbu         $v1, 0x41C($v0)
    ctx->pc = 0x2fa0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x741DBCu));
    // 0x2fa100: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA100u;
    {
        const bool branch_taken_0x2fa100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA100u;
        // 0x2fa104: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa100) {
            ctx->pc = 0x2FA11Cu;
            goto label_2fa11c;
        }
    }
    ctx->pc = 0x2FA108u;
    // 0x2fa108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa10c: 0xa040041c  sb          $zero, 0x41C($v0)
    ctx->pc = 0x2fa10cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1052), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa110: 0xc0c15de  jal         func_305778
    ctx->pc = 0x2FA110u;
    SET_GPR_U32(ctx, 31, 0x2FA118u);
    ctx->pc = 0x2FA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA110u;
    // 0x2fa114: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x2FA110u, 0x2FA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA118u;
label_2fa118:
    // 0x2fa118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa11c:
    // 0x2fa11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA11Cu;
        // 0x2fa120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA124u;
    // 0x2fa124: 0x0  nop
    ctx->pc = 0x2fa124u;
    // NOP
    ctx->pc = 0x2fa128u;
}
