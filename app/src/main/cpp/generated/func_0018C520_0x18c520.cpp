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

// Function: func_0018C520
// Address: 0x18c520 - 0x18c580
void func_0018C520_0x18c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C520_0x18c520");
#endif

    switch (ctx->pc) {
        case 0x18c534u: goto label_18c534;
        default: break;
    }

    ctx->pc = 0x18c520u;

    // 0x18c520: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x18c520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x18c524: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C524u;
    {
        const bool branch_taken_0x18c524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C524u;
        // 0x18c528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c524) {
            ctx->pc = 0x18C53Cu;
            goto label_18c53c;
        }
    }
    ctx->pc = 0x18C52Cu;
    // 0x18c52c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18C52Cu;
    {
        const bool branch_taken_0x18c52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c52c) {
            ctx->pc = 0x18C530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C52Cu;
            // 0x18c530: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C558u;
            goto label_18c558;
        }
    }
    ctx->pc = 0x18C534u;
label_18c534:
    // 0x18c534: 0x3e00008  jr          $ra
    ctx->pc = 0x18C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C53Cu;
label_18c53c:
    // 0x18c53c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18c540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c544: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x18c544u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c548: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x18c548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x18c54c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18c54cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c550: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18c550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c554: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x18c554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_18c558:
    // 0x18c558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c55c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18c560: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18C560u;
    {
        const bool branch_taken_0x18c560 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C560u;
        // 0x18c564: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c560) {
            ctx->pc = 0x18C534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c534;
        }
    }
    ctx->pc = 0x18C568u;
    // 0x18c568: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18c568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c56c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x18c56cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c570: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x18c570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c574: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18c574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c578: 0x3e00008  jr          $ra
    ctx->pc = 0x18C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C580u;
}
