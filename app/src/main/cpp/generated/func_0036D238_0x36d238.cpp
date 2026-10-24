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

// Function: func_0036D238
// Address: 0x36d238 - 0x36d280
void func_0036D238_0x36d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D238_0x36d238");
#endif

    switch (ctx->pc) {
        case 0x36d258u: goto label_36d258;
        default: break;
    }

    ctx->pc = 0x36d238u;

    // 0x36d238: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x36d238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x36d23c: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x36d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
    // 0x36d240: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x36d240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x76A5D0u));
    // 0x36d244: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x36D244u;
    {
        const bool branch_taken_0x36d244 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x36D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D244u;
        // 0x36d248: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d244) {
            ctx->pc = 0x36D274u;
            goto label_36d274;
        }
    }
    ctx->pc = 0x36D24Cu;
    // 0x36d24c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36d24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d254: 0x0  nop
    ctx->pc = 0x36d254u;
    // NOP
label_36d258:
    // 0x36d258: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36d25c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x36d260: 0x0  nop
    ctx->pc = 0x36d260u;
    // NOP
    // 0x36d264: 0x0  nop
    ctx->pc = 0x36d264u;
    // NOP
    // 0x36d268: 0x0  nop
    ctx->pc = 0x36d268u;
    // NOP
    // 0x36d26c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36D26Cu;
    {
        const bool branch_taken_0x36d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D26Cu;
        // 0x36d270: 0x24630640  addiu       $v1, $v1, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d26c) {
            ctx->pc = 0x36D258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d258;
        }
    }
    ctx->pc = 0x36D274u;
label_36d274:
    // 0x36d274: 0x3e00008  jr          $ra
    ctx->pc = 0x36D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D27Cu;
    // 0x36d27c: 0x0  nop
    ctx->pc = 0x36d27cu;
    // NOP
    ctx->pc = 0x36d280u;
}
