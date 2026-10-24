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

// Function: EffectEventEndProc
// Address: 0x2fa310 - 0x2fa350
void EffectEventEndProc_0x2fa310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectEventEndProc_0x2fa310");
#endif

    switch (ctx->pc) {
        case 0x2fa324u: goto label_2fa324;
        case 0x2fa32cu: goto label_2fa32c;
        case 0x2fa334u: goto label_2fa334;
        case 0x2fa33cu: goto label_2fa33c;
        default: break;
    }

    ctx->pc = 0x2fa310u;

    // 0x2fa310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa31c: 0xc0bed30  jal         func_2FB4C0
    ctx->pc = 0x2FA31Cu;
    SET_GPR_U32(ctx, 31, 0x2FA324u);
    ctx->pc = 0x2FA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA31Cu;
    // 0x2fa320: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB4C0u, 0x2FA31Cu, 0x2FA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA324u;
label_2fa324:
    // 0x2fa324: 0xc0c0240  jal         func_300900
    ctx->pc = 0x2FA324u;
    SET_GPR_U32(ctx, 31, 0x2FA32Cu);
    ctx->pc = 0x2FA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA324u;
    // 0x2fa328: 0x261019a0  addiu       $s0, $s0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300900u, 0x2FA324u, 0x2FA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA32Cu;
label_2fa32c:
    // 0x2fa32c: 0xc0c16f8  jal         func_305BE0
    ctx->pc = 0x2FA32Cu;
    SET_GPR_U32(ctx, 31, 0x2FA334u);
    ctx->pc = 0x2FA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA32Cu;
    // 0x2fa330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305BE0u, 0x2FA32Cu, 0x2FA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA334u;
label_2fa334:
    // 0x2fa334: 0xc0c1708  jal         func_305C20
    ctx->pc = 0x2FA334u;
    SET_GPR_U32(ctx, 31, 0x2FA33Cu);
    ctx->pc = 0x2FA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA334u;
    // 0x2fa338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305C20u, 0x2FA334u, 0x2FA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA33Cu;
label_2fa33c:
    // 0x2fa33c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa344: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA344u;
        // 0x2fa348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA34Cu;
    // 0x2fa34c: 0x0  nop
    ctx->pc = 0x2fa34cu;
    // NOP
    ctx->pc = 0x2fa350u;
}
