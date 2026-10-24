#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getObjPtr__C12cEventMotionUsUc
// Address: 0x7b0438 - 0x7b0478
void getObjPtr__C12cEventMotionUsUc_0x7b0438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getObjPtr__C12cEventMotionUsUc_0x7b0438");
#endif

    switch (ctx->pc) {
        case 0x7b045cu: goto label_7b045c;
        default: break;
    }

    ctx->pc = 0x7b0438u;

    // 0x7b0438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b0438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b043c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x7b043cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7b0440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0444: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b0444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b0448: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7B0448u;
    {
        const bool branch_taken_0x7b0448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7B044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0448u;
        // 0x7b044c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0448) {
            ctx->pc = 0x7B0464u;
            goto label_7b0464;
        }
    }
    ctx->pc = 0x7B0450u;
    // 0x7b0450: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0454: 0xc1ea5b0  jal         func_7A96C0
    ctx->pc = 0x7B0454u;
    SET_GPR_U32(ctx, 31, 0x7B045Cu);
    ctx->pc = 0x7B0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0454u;
    // 0x7b0458: 0x24844f80  addiu       $a0, $a0, 0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7B0454u, 0x7B045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B045Cu;
label_7b045c:
    // 0x7b045c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7B045Cu;
    {
        const bool branch_taken_0x7b045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B045Cu;
        // 0x7b0460: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b045c) {
            ctx->pc = 0x7B046Cu;
            goto label_7b046c;
        }
    }
    ctx->pc = 0x7B0464u;
label_7b0464:
    // 0x7b0464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7b0464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b046c:
    // 0x7b046c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B046Cu;
        // 0x7b0470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B046Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0474u;
    // 0x7b0474: 0x0  nop
    ctx->pc = 0x7b0474u;
    // NOP
    ctx->pc = 0x7b0478u;
}
} // namespace gh_event
