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

// Function: cScrArray_SearchScroll
// Address: 0x2c5420 - 0x2c5470
void cScrArray_SearchScroll_0x2c5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrArray_SearchScroll_0x2c5420");
#endif

    switch (ctx->pc) {
        case 0x2c5440u: goto label_2c5440;
        default: break;
    }

    ctx->pc = 0x2c5420u;

    // 0x2c5420: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2c5420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2c5424: 0x8c434c38  lw          $v1, 0x4C38($v0)
    ctx->pc = 0x2c5424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C38u));
    // 0x2c5428: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2c5428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c542c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c5430: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2c5430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c5434: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C5434u;
    {
        const bool branch_taken_0x2c5434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5434u;
        // 0x2c5438: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5434) {
            ctx->pc = 0x2C5464u;
            goto label_2c5464;
        }
    }
    ctx->pc = 0x2C543Cu;
    // 0x2c543c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2c543cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5440:
    // 0x2c5440: 0x8cc20320  lw          $v0, 0x320($a2)
    ctx->pc = 0x2c5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 800)));
    // 0x2c5444: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x2c5444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c5448: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5448u;
    {
        const bool branch_taken_0x2c5448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5448u;
        // 0x2c544c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5448) {
            ctx->pc = 0x2C5458u;
            goto label_2c5458;
        }
    }
    ctx->pc = 0x2C5450u;
    // 0x2c5450: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5450u;
        // 0x2c5454: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5458u;
label_2c5458:
    // 0x2c5458: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2c5458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c545c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C545Cu;
    {
        const bool branch_taken_0x2c545c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c545c) {
            ctx->pc = 0x2C5460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C545Cu;
            // 0x2c5460: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5440;
        }
    }
    ctx->pc = 0x2C5464u;
label_2c5464:
    // 0x2c5464: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5464u;
        // 0x2c5468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C546Cu;
    // 0x2c546c: 0x0  nop
    ctx->pc = 0x2c546cu;
    // NOP
    ctx->pc = 0x2c5470u;
}
