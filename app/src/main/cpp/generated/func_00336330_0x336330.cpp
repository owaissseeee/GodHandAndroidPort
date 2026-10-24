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

// Function: func_00336330
// Address: 0x336330 - 0x336360
void func_00336330_0x336330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336330_0x336330");
#endif

    switch (ctx->pc) {
        case 0x336330u: goto label_336330;
        case 0x336334u: goto label_336334;
        case 0x336338u: goto label_336338;
        case 0x33633cu: goto label_33633c;
        case 0x336340u: goto label_336340;
        case 0x336344u: goto label_336344;
        case 0x336348u: goto label_336348;
        case 0x33634cu: goto label_33634c;
        case 0x336350u: goto label_336350;
        case 0x336354u: goto label_336354;
        case 0x336358u: goto label_336358;
        case 0x33635cu: goto label_33635c;
        default: break;
    }

    ctx->pc = 0x336330u;

label_336330:
    // 0x336330: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_336334:
    // 0x336334: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_336338:
    // 0x336338: 0x8c43ecfc  lw          $v1, -0x1304($v0)
    ctx->pc = 0x336338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962428)));
label_33633c:
    // 0x33633c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33633cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336340:
    // 0x336340: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_336344:
    if (ctx->pc == 0x336344u) {
        ctx->pc = 0x336344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336340u;
        // 0x336344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336348u;
        goto label_336348;
    }
    ctx->pc = 0x336340u;
    {
        const bool branch_taken_0x336340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336340u;
        // 0x336344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336340) {
            ctx->pc = 0x336354u;
            goto label_336354;
        }
    }
    ctx->pc = 0x336348u;
label_336348:
    // 0x336348: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x336348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_33634c:
    // 0x33634c: 0x60f809  jalr        $v1
label_336350:
    if (ctx->pc == 0x336350u) {
        ctx->pc = 0x336350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33634Cu;
        // 0x336350: 0x8c44ed00  lw          $a0, -0x1300($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336354u;
        goto label_336354;
    }
    ctx->pc = 0x33634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x336354u);
        ctx->pc = 0x336350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33634Cu;
        // 0x336350: 0x8c44ed00  lw          $a0, -0x1300($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962432)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33634Cu, 0x336354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336354u;
label_336354:
    // 0x336354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336358:
    // 0x336358: 0x3e00008  jr          $ra
label_33635c:
    if (ctx->pc == 0x33635Cu) {
        ctx->pc = 0x33635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336358u;
        // 0x33635c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336360u;
        goto label_fallthrough_0x336358;
    }
    ctx->pc = 0x336358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336358u;
        // 0x33635c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x336358:
    ctx->pc = 0x336360u;
}
