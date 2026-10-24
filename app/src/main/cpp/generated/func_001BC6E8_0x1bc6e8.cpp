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

// Function: func_001BC6E8
// Address: 0x1bc6e8 - 0x1bc748
void func_001BC6E8_0x1bc6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BC6E8_0x1bc6e8");
#endif

    switch (ctx->pc) {
        case 0x1bc6fcu: goto label_1bc6fc;
        default: break;
    }

    ctx->pc = 0x1bc6e8u;

    // 0x1bc6e8: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x1bc6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1bc6ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC6ECu;
    {
        const bool branch_taken_0x1bc6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6ECu;
        // 0x1bc6f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6ec) {
            ctx->pc = 0x1BC704u;
            goto label_1bc704;
        }
    }
    ctx->pc = 0x1BC6F4u;
    // 0x1bc6f4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC6F4u;
    {
        const bool branch_taken_0x1bc6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc6f4) {
            ctx->pc = 0x1BC6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC6F4u;
            // 0x1bc6f8: 0x9482062c  lhu         $v0, 0x62C($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC720u;
            goto label_1bc720;
        }
    }
    ctx->pc = 0x1BC6FCu;
label_1bc6fc:
    // 0x1bc6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC704u;
label_1bc704:
    // 0x1bc704: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1bc704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bc708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc70c: 0xa482062c  sh          $v0, 0x62C($a0)
    ctx->pc = 0x1bc70cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1580), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc710: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1bc710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bc714: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1bc714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc718: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1bc718u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc71c: 0x9482062c  lhu         $v0, 0x62C($a0)
    ctx->pc = 0x1bc71cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1580)));
label_1bc720:
    // 0x1bc720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc724: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bc724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1bc728: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BC728u;
    {
        const bool branch_taken_0x1bc728 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1BC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC728u;
        // 0x1bc72c: 0xa482062c  sh          $v0, 0x62C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc728) {
            ctx->pc = 0x1BC6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc6fc;
        }
    }
    ctx->pc = 0x1BC730u;
    // 0x1bc730: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1bc730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc734: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1bc734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc738: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1bc738u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc73c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1bc73cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc740: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC748u;
}
