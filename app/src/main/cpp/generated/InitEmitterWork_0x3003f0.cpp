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

// Function: InitEmitterWork
// Address: 0x3003f0 - 0x300458
void InitEmitterWork_0x3003f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEmitterWork_0x3003f0");
#endif

    switch (ctx->pc) {
        case 0x300410u: goto label_300410;
        case 0x300424u: goto label_300424;
        case 0x300438u: goto label_300438;
        case 0x30044cu: goto label_30044c;
        default: break;
    }

    ctx->pc = 0x3003f0u;

    // 0x3003f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3003f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3003f4: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x3003f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x3003f8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x3003f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x3003fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3003fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300400: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x300400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x300404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300408: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x300408u;
    SET_GPR_U32(ctx, 31, 0x300410u);
    ctx->pc = 0x30040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300408u;
    // 0x30040c: 0x34c66000  ori         $a2, $a2, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x300408u, 0x300410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300410u;
label_300410:
    // 0x300410: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x300410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x300414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300418: 0x24841940  addiu       $a0, $a0, 0x1940
    ctx->pc = 0x300418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6464));
    // 0x30041c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x30041Cu;
    SET_GPR_U32(ctx, 31, 0x300424u);
    ctx->pc = 0x300420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30041Cu;
    // 0x300420: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x30041Cu, 0x300424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300424u;
label_300424:
    // 0x300424: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x300424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x300428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30042c: 0x24841960  addiu       $a0, $a0, 0x1960
    ctx->pc = 0x30042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6496));
    // 0x300430: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x300430u;
    SET_GPR_U32(ctx, 31, 0x300438u);
    ctx->pc = 0x300434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300430u;
    // 0x300434: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x300430u, 0x300438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300438u;
label_300438:
    // 0x300438: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x300438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30043c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30043cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300440: 0x24841980  addiu       $a0, $a0, 0x1980
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6528));
    // 0x300444: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x300444u;
    SET_GPR_U32(ctx, 31, 0x30044Cu);
    ctx->pc = 0x300448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300444u;
    // 0x300448: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x300444u, 0x30044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30044Cu;
label_30044c:
    // 0x30044c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300450: 0x3e00008  jr          $ra
    ctx->pc = 0x300450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300450u;
        // 0x300454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300458u;
}
