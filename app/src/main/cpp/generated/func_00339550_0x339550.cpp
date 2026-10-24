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

// Function: func_00339550
// Address: 0x339550 - 0x3395a0
void func_00339550_0x339550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339550_0x339550");
#endif

    ctx->pc = 0x339550u;

    // 0x339550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339554: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x339554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x339558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33955c: 0x24633fb0  addiu       $v1, $v1, 0x3FB0
    ctx->pc = 0x33955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16304));
    // 0x339560: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x339560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3FB0u));
    // 0x339564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x339564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x339568: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x339568u;
    {
        const bool branch_taken_0x339568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339568u;
        // 0x33956c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339568) {
            ctx->pc = 0x339590u;
            goto label_339590;
        }
    }
    ctx->pc = 0x339570u;
    // 0x339570: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x339570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x339574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33957c: 0x24843fb8  addiu       $a0, $a0, 0x3FB8
    ctx->pc = 0x33957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16312));
    // 0x339580: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x339580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x339584: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x339584u;
    ctx->pc = 0x339588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339584u;
    // 0x339588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x339584u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33958Cu;
    // 0x33958c: 0x0  nop
    ctx->pc = 0x33958cu;
    // NOP
label_339590:
    // 0x339590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339594: 0x3e00008  jr          $ra
    ctx->pc = 0x339594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339594u;
        // 0x339598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33959Cu;
    // 0x33959c: 0x0  nop
    ctx->pc = 0x33959cu;
    // NOP
    ctx->pc = 0x3395a0u;
}
