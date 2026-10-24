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

// Function: ResetObjectState_2962B0
// Address: 0x2962b0 - 0x2962f0
void ResetObjectState_2962B0_0x2962b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjectState_2962B0_0x2962b0");
#endif

    switch (ctx->pc) {
        case 0x2962ccu: goto label_2962cc;
        case 0x2962d8u: goto label_2962d8;
        default: break;
    }

    ctx->pc = 0x2962b0u;

    // 0x2962b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2962b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2962b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2962b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2962b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2962bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2962c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2962c4: 0xc07e7fc  jal         func_1F9FF0
    ctx->pc = 0x2962C4u;
    SET_GPR_U32(ctx, 31, 0x2962CCu);
    ctx->pc = 0x2962C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962C4u;
    // 0x2962c8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9FF0u, 0x2962C4u, 0x2962CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962CCu;
label_2962cc:
    // 0x2962cc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2962ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2962d0: 0xc0a5d98  jal         func_297660
    ctx->pc = 0x2962D0u;
    SET_GPR_U32(ctx, 31, 0x2962D8u);
    ctx->pc = 0x2962D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962D0u;
    // 0x2962d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297660u, 0x2962D0u, 0x2962D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962D8u;
label_2962d8:
    // 0x2962d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2962d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2962dc: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x2962dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2962e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2962e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2962e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2962e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2962e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2962E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962E8u;
        // 0x2962ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2962E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2962F0u;
}
