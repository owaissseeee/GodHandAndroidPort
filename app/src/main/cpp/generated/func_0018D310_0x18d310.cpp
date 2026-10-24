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

// Function: func_0018D310
// Address: 0x18d310 - 0x18d370
void func_0018D310_0x18d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018D310_0x18d310");
#endif

    switch (ctx->pc) {
        case 0x18d324u: goto label_18d324;
        default: break;
    }

    ctx->pc = 0x18d310u;

    // 0x18d310: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x18d310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x18d314: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D314u;
    {
        const bool branch_taken_0x18d314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D314u;
        // 0x18d318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d314) {
            ctx->pc = 0x18D32Cu;
            goto label_18d32c;
        }
    }
    ctx->pc = 0x18D31Cu;
    // 0x18d31c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18D31Cu;
    {
        const bool branch_taken_0x18d31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d31c) {
            ctx->pc = 0x18D320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D31Cu;
            // 0x18d320: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D348u;
            goto label_18d348;
        }
    }
    ctx->pc = 0x18D324u;
label_18d324:
    // 0x18d324: 0x3e00008  jr          $ra
    ctx->pc = 0x18D324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D32Cu;
label_18d32c:
    // 0x18d32c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18d330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d334: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x18d334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d338: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x18d338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x18d33c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18d33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d340: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18d340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d344: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x18d344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_18d348:
    // 0x18d348: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d34c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18d350: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18D350u;
    {
        const bool branch_taken_0x18d350 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D350u;
        // 0x18d354: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d350) {
            ctx->pc = 0x18D324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d324;
        }
    }
    ctx->pc = 0x18D358u;
    // 0x18d358: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18d358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d35c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x18d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d360: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x18d360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d364: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18d364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d368: 0x3e00008  jr          $ra
    ctx->pc = 0x18D368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D370u;
}
