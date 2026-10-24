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

// Function: cBgmData_IsReadDone
// Address: 0x2d0318 - 0x2d0350
void cBgmData_IsReadDone_0x2d0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_IsReadDone_0x2d0318");
#endif

    switch (ctx->pc) {
        case 0x2d0334u: goto label_2d0334;
        default: break;
    }

    ctx->pc = 0x2d0318u;

    // 0x2d0318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d031c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0320: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d0324: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0324u;
    {
        const bool branch_taken_0x2d0324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0324u;
        // 0x2d0328: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0324) {
            ctx->pc = 0x2D033Cu;
            goto label_2d033c;
        }
    }
    ctx->pc = 0x2D032Cu;
    // 0x2d032c: 0xc080426  jal         func_201098
    ctx->pc = 0x2D032Cu;
    SET_GPR_U32(ctx, 31, 0x2D0334u);
    ctx->pc = 0x2D0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D032Cu;
    // 0x2d0330: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x2D032Cu, 0x2D0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0334u;
label_2d0334:
    // 0x2d0334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0334u;
    {
        const bool branch_taken_0x2d0334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0334u;
        // 0x2d0338: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0334) {
            ctx->pc = 0x2D0340u;
            goto label_2d0340;
        }
    }
    ctx->pc = 0x2D033Cu;
label_2d033c:
    // 0x2d033c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0340:
    // 0x2d0340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0344: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0344u;
        // 0x2d0348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D034Cu;
    // 0x2d034c: 0x0  nop
    ctx->pc = 0x2d034cu;
    // NOP
    ctx->pc = 0x2d0350u;
}
