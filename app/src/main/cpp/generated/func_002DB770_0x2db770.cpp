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

// Function: func_002DB770
// Address: 0x2db770 - 0x2db7a8
void func_002DB770_0x2db770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DB770_0x2db770");
#endif

    switch (ctx->pc) {
        case 0x2db79cu: goto label_2db79c;
        default: break;
    }

    ctx->pc = 0x2db770u;

    // 0x2db770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db774: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2db774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2db778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db77c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2db77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2db780: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2db780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2db784: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2db784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2db788: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2db788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2db78c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2db78cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db790: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2db790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db794: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DB794u;
    SET_GPR_U32(ctx, 31, 0x2DB79Cu);
    ctx->pc = 0x2DB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB794u;
    // 0x2db798: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DB794u, 0x2DB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB79Cu;
label_2db79c:
    // 0x2db79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7A0u;
        // 0x2db7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB7A8u;
}
