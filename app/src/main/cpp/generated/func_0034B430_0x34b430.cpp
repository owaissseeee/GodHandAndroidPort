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

// Function: func_0034B430
// Address: 0x34b430 - 0x34b478
void func_0034B430_0x34b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B430_0x34b430");
#endif

    ctx->pc = 0x34b430u;

    // 0x34b430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b434: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34b434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b43c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34b43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b440: 0x8c832004  lw          $v1, 0x2004($a0)
    ctx->pc = 0x34b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34b444: 0x24841020  addiu       $a0, $a0, 0x1020
    ctx->pc = 0x34b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x34b448: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34b448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b44c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34B44Cu;
    {
        const bool branch_taken_0x34b44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B44Cu;
        // 0x34b450: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b44c) {
            ctx->pc = 0x34B464u;
            goto label_34b464;
        }
    }
    ctx->pc = 0x34B454u;
    // 0x34b454: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x34b454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x34b458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b45c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B45Cu;
    {
        const bool branch_taken_0x34b45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B45Cu;
        // 0x34b460: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b45c) {
            ctx->pc = 0x34B470u;
            goto label_34b470;
        }
    }
    ctx->pc = 0x34B464u;
label_34b464:
    // 0x34b464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b468: 0x80d2d1e  j           func_34B478
    ctx->pc = 0x34B468u;
    ctx->pc = 0x34B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B468u;
    // 0x34b46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B478u, 0x34B468u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B470u;
label_34b470:
    // 0x34b470: 0x3e00008  jr          $ra
    ctx->pc = 0x34B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B470u;
        // 0x34b474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B478u;
}
