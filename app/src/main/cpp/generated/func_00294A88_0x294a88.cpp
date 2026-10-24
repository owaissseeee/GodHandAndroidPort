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

// Function: func_00294A88
// Address: 0x294a88 - 0x294ad8
void func_00294A88_0x294a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294A88_0x294a88");
#endif

    switch (ctx->pc) {
        case 0x294accu: goto label_294acc;
        default: break;
    }

    ctx->pc = 0x294a88u;

    // 0x294a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294a8c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x294a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294a94: 0x84620542  lh          $v0, 0x542($v1)
    ctx->pc = 0x294a94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1346)));
    // 0x294a98: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x294A98u;
    {
        const bool branch_taken_0x294a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A98u;
        // 0x294a9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a98) {
            ctx->pc = 0x294AD0u;
            goto label_294ad0;
        }
    }
    ctx->pc = 0x294AA0u;
    // 0x294aa0: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x294aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x294aa4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x294aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x294aa8: 0xa4620542  sh          $v0, 0x542($v1)
    ctx->pc = 0x294aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1346), (uint16_t)GPR_U32(ctx, 2));
    // 0x294aac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x294aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x294ab0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x294ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294ab4: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x294ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x294ab8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x294ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294abc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x294abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294ac0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x294ac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ac4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x294AC4u;
    SET_GPR_U32(ctx, 31, 0x294ACCu);
    ctx->pc = 0x294AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294AC4u;
    // 0x294ac8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x294AC4u, 0x294ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294ACCu;
label_294acc:
    // 0x294acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294ad0:
    // 0x294ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x294AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AD0u;
        // 0x294ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294AD8u;
}
