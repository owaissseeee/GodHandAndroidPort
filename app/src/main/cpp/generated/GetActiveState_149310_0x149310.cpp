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

// Function: GetActiveState_149310
// Address: 0x149310 - 0x149350
void GetActiveState_149310_0x149310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveState_149310_0x149310");
#endif

    switch (ctx->pc) {
        case 0x149338u: goto label_149338;
        default: break;
    }

    ctx->pc = 0x149310u;

    // 0x149310: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x149314: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149318: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x14931c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x149320: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x149320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x149324: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x149324u;
    {
        const bool branch_taken_0x149324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149324u;
        // 0x149328: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149324) {
            ctx->pc = 0x149340u;
            goto label_149340;
        }
    }
    ctx->pc = 0x14932Cu;
    // 0x14932c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x14932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x149330: 0xc052522  jal         func_149488
    ctx->pc = 0x149330u;
    SET_GPR_U32(ctx, 31, 0x149338u);
    ctx->pc = 0x149334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149330u;
    // 0x149334: 0x24846448  addiu       $a0, $a0, 0x6448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149488u, 0x149330u, 0x149338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149338u;
label_149338:
    // 0x149338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149338u;
    {
        const bool branch_taken_0x149338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149338u;
        // 0x14933c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149338) {
            ctx->pc = 0x149348u;
            goto label_149348;
        }
    }
    ctx->pc = 0x149340u;
label_149340:
    // 0x149340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_149348:
    // 0x149348: 0x3e00008  jr          $ra
    ctx->pc = 0x149348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149348u;
        // 0x14934c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149350u;
}
