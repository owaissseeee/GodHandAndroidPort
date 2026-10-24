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

// Function: func_001926A0
// Address: 0x1926a0 - 0x192700
void func_001926A0_0x1926a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001926A0_0x1926a0");
#endif

    switch (ctx->pc) {
        case 0x1926b4u: goto label_1926b4;
        default: break;
    }

    ctx->pc = 0x1926a0u;

    // 0x1926a0: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x1926a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1926a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1926A4u;
    {
        const bool branch_taken_0x1926a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926A4u;
        // 0x1926a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926a4) {
            ctx->pc = 0x1926BCu;
            goto label_1926bc;
        }
    }
    ctx->pc = 0x1926ACu;
    // 0x1926ac: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1926ACu;
    {
        const bool branch_taken_0x1926ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1926ac) {
            ctx->pc = 0x1926B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1926ACu;
            // 0x1926b0: 0x94820600  lhu         $v0, 0x600($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1926D8u;
            goto label_1926d8;
        }
    }
    ctx->pc = 0x1926B4u;
label_1926b4:
    // 0x1926b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1926B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926BCu;
label_1926bc:
    // 0x1926bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1926bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1926c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1926c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1926c4: 0xa4820600  sh          $v0, 0x600($a0)
    ctx->pc = 0x1926c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x1926c8: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1926c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1926cc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1926ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1926d0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1926d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1926d4: 0x94820600  lhu         $v0, 0x600($a0)
    ctx->pc = 0x1926d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1536)));
label_1926d8:
    // 0x1926d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1926d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1926dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1926dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1926e0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1926E0u;
    {
        const bool branch_taken_0x1926e0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1926E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926E0u;
        // 0x1926e4: 0xa4820600  sh          $v0, 0x600($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926e0) {
            ctx->pc = 0x1926B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1926b4;
        }
    }
    ctx->pc = 0x1926E8u;
    // 0x1926e8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1926e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1926ec: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1926ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1926f0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1926f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1926f4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1926f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1926f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1926F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192700u;
}
