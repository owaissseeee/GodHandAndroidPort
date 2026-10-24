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

// Function: func_003A93F8
// Address: 0x3a93f8 - 0x3a9470
void func_003A93F8_0x3a93f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A93F8_0x3a93f8");
#endif

    switch (ctx->pc) {
        case 0x3a9410u: goto label_3a9410;
        case 0x3a9418u: goto label_3a9418;
        case 0x3a9438u: goto label_3a9438;
        default: break;
    }

    ctx->pc = 0x3a93f8u;

    // 0x3a93f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a93f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a93fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A93FCu;
    {
        const bool branch_taken_0x3a93fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93FCu;
        // 0x3a9400: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93fc) {
            ctx->pc = 0x3A9418u;
            goto label_3a9418;
        }
    }
    ctx->pc = 0x3A9404u;
    // 0x3a9404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a9404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9408: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9408u;
        // 0x3a940c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9410u;
label_3a9410:
    // 0x3a9410: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9410u;
        // 0x3a9414: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9418u;
label_3a9418:
    // 0x3a9418: 0x0  nop
    ctx->pc = 0x3a9418u;
    // NOP
    // 0x3a941c: 0x0  nop
    ctx->pc = 0x3a941cu;
    // NOP
    // 0x3a9420: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A9420u;
    {
        const bool branch_taken_0x3a9420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9420u;
        // 0x3a9424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9420) {
            ctx->pc = 0x3A9410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9410;
        }
    }
    ctx->pc = 0x3A9428u;
    // 0x3a9428: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a9428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a942c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A942Cu;
    {
        const bool branch_taken_0x3a942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a942c) {
            ctx->pc = 0x3A9430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A942Cu;
            // 0x3a9430: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9458u;
            goto label_3a9458;
        }
    }
    ctx->pc = 0x3A9434u;
    // 0x3a9434: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3a9434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3a9438:
    // 0x3a9438: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x3a9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3a943c: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x3a943cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a9440: 0x10c0fff3  beqz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3A9440u;
    {
        const bool branch_taken_0x3a9440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9440u;
        // 0x3a9444: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9440) {
            ctx->pc = 0x3A9410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9410;
        }
    }
    ctx->pc = 0x3A9448u;
    // 0x3a9448: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a9448u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a944c: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A944Cu;
    {
        const bool branch_taken_0x3a944c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a944c) {
            ctx->pc = 0x3A9450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A944Cu;
            // 0x3a9450: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9438;
        }
    }
    ctx->pc = 0x3A9454u;
    // 0x3a9454: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a9454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a9458:
    // 0x3a9458: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a9458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a945c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3A945Cu;
    {
        const bool branch_taken_0x3a945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a945c) {
            ctx->pc = 0x3A9460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A945Cu;
            // 0x3a9460: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9418;
        }
    }
    ctx->pc = 0x3A9464u;
    // 0x3a9464: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9464u;
        // 0x3a9468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A946Cu;
    // 0x3a946c: 0x0  nop
    ctx->pc = 0x3a946cu;
    // NOP
    ctx->pc = 0x3a9470u;
}
