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

// Function: TimedButton_tick
// Address: 0x1f6f58 - 0x1f6fa0
void TimedButton_tick_0x1f6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TimedButton_tick_0x1f6f58");
#endif

    switch (ctx->pc) {
        case 0x1f6f84u: goto label_1f6f84;
        default: break;
    }

    ctx->pc = 0x1f6f58u;

    // 0x1f6f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6f64: 0x90820036  lbu         $v0, 0x36($a0)
    ctx->pc = 0x1f6f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1f6f68: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6F68u;
    {
        const bool branch_taken_0x1f6f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F68u;
        // 0x1f6f6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f68) {
            ctx->pc = 0x1F6F98u;
            goto label_1f6f98;
        }
    }
    ctx->pc = 0x1F6F70u;
    // 0x1f6f70: 0x84820032  lh          $v0, 0x32($a0)
    ctx->pc = 0x1f6f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x1f6f74: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6F74u;
    {
        const bool branch_taken_0x1f6f74 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1F6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F74u;
        // 0x1f6f78: 0x94830032  lhu         $v1, 0x32($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f74) {
            ctx->pc = 0x1F6F8Cu;
            goto label_1f6f8c;
        }
    }
    ctx->pc = 0x1F6F7Cu;
    // 0x1f6f7c: 0xc07dc8a  jal         func_1F7228
    ctx->pc = 0x1F6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F6F84u);
    ctx->pc = 0x1F7228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7228u, 0x1F6F7Cu, 0x1F6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F84u;
label_1f6f84:
    // 0x1f6f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F84u;
    {
        const bool branch_taken_0x1f6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F84u;
        // 0x1f6f88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f84) {
            ctx->pc = 0x1F6F98u;
            goto label_1f6f98;
        }
    }
    ctx->pc = 0x1F6F8Cu;
label_1f6f8c:
    // 0x1f6f8c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f6f90: 0xa4820032  sh          $v0, 0x32($a0)
    ctx->pc = 0x1f6f90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6f98:
    // 0x1f6f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F98u;
        // 0x1f6f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6FA0u;
}
