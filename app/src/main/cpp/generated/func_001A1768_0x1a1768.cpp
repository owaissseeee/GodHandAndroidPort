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

// Function: func_001A1768
// Address: 0x1a1768 - 0x1a17c8
void func_001A1768_0x1a1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A1768_0x1a1768");
#endif

    switch (ctx->pc) {
        case 0x1a177cu: goto label_1a177c;
        default: break;
    }

    ctx->pc = 0x1a1768u;

    // 0x1a1768: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x1a1768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1a176c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A176Cu;
    {
        const bool branch_taken_0x1a176c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A176Cu;
        // 0x1a1770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a176c) {
            ctx->pc = 0x1A1784u;
            goto label_1a1784;
        }
    }
    ctx->pc = 0x1A1774u;
    // 0x1a1774: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1774u;
    {
        const bool branch_taken_0x1a1774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1774) {
            ctx->pc = 0x1A1778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1774u;
            // 0x1a1778: 0x94820d94  lhu         $v0, 0xD94($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A17A0u;
            goto label_1a17a0;
        }
    }
    ctx->pc = 0x1A177Cu;
label_1a177c:
    // 0x1a177c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1784u;
label_1a1784:
    // 0x1a1784: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a178c: 0xa4820d94  sh          $v0, 0xD94($a0)
    ctx->pc = 0x1a178cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3476), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1790: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1a1790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1794: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a1794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1798: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a1798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a179c: 0x94820d94  lhu         $v0, 0xD94($a0)
    ctx->pc = 0x1a179cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3476)));
label_1a17a0:
    // 0x1a17a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a17a4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a17a8: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A17A8u;
    {
        const bool branch_taken_0x1a17a8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17A8u;
        // 0x1a17ac: 0xa4820d94  sh          $v0, 0xD94($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17a8) {
            ctx->pc = 0x1A177Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A17B0u;
    // 0x1a17b0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a17b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a17b4: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1a17b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a17b8: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1a17b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a17bc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a17bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a17c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A17C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A17C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A17C8u;
}
