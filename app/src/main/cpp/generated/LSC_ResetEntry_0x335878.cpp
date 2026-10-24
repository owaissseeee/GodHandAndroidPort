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

// Function: LSC_ResetEntry
// Address: 0x335878 - 0x3358b8
void LSC_ResetEntry_0x335878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LSC_ResetEntry_0x335878");
#endif

    ctx->pc = 0x335878u;

    // 0x335878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33587c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33587Cu;
    {
        const bool branch_taken_0x33587c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33587Cu;
        // 0x335880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33587c) {
            ctx->pc = 0x335898u;
            goto label_335898;
        }
    }
    ctx->pc = 0x335884u;
    // 0x335884: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33588c: 0x24844c78  addiu       $a0, $a0, 0x4C78
    ctx->pc = 0x33588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19576));
    // 0x335890: 0x80cd750  j           func_335D40
    ctx->pc = 0x335890u;
    ctx->pc = 0x335894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335890u;
    // 0x335894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335898u;
label_335898:
    // 0x335898: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x335898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x33589c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33589Cu;
    {
        const bool branch_taken_0x33589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3358A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33589Cu;
        // 0x3358a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33589c) {
            ctx->pc = 0x3358B0u;
            goto label_3358b0;
        }
    }
    ctx->pc = 0x3358A4u;
    // 0x3358a4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3358a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3358a8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3358a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3358ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3358acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_3358b0:
    // 0x3358b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3358B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3358B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358B0u;
        // 0x3358b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3358B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3358B8u;
}
