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

// Function: func_002BF420
// Address: 0x2bf420 - 0x2bf478
void func_002BF420_0x2bf420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF420_0x2bf420");
#endif

    ctx->pc = 0x2bf420u;

    // 0x2bf420: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2bf420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2bf424: 0x24637a84  addiu       $v1, $v1, 0x7A84
    ctx->pc = 0x2bf424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
    // 0x2bf428: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bf428u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x2bf42c: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BF42Cu;
    {
        const bool branch_taken_0x2bf42c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2bf42c) {
            ctx->pc = 0x2BF470u;
            goto label_2bf470;
        }
    }
    ctx->pc = 0x2BF434u;
    // 0x2bf434: 0x8c62ffa0  lw          $v0, -0x60($v1)
    ctx->pc = 0x2bf434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967200)));
    // 0x2bf438: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2bf438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2bf43c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf440: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF440u;
    {
        const bool branch_taken_0x2bf440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF440u;
        // 0x2bf444: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf440) {
            ctx->pc = 0x2BF45Cu;
            goto label_2bf45c;
        }
    }
    ctx->pc = 0x2BF448u;
    // 0x2bf448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf44c: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x2bf44cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf450: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2bf450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF454u;
    {
        const bool branch_taken_0x2bf454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF454u;
        // 0x2bf458: 0xa0800003  sb          $zero, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf454) {
            ctx->pc = 0x2BF468u;
            goto label_2bf468;
        }
    }
    ctx->pc = 0x2BF45Cu;
label_2bf45c:
    // 0x2bf45c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2bf45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bf460: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2bf460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf464: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2bf464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2bf468:
    // 0x2bf468: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2bf468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf46c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2bf46cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2bf470:
    // 0x2bf470: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF478u;
}
