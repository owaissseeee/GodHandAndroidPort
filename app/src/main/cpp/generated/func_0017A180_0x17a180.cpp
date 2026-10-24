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

// Function: func_0017A180
// Address: 0x17a180 - 0x17a1e0
void func_0017A180_0x17a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017A180_0x17a180");
#endif

    switch (ctx->pc) {
        case 0x17a194u: goto label_17a194;
        default: break;
    }

    ctx->pc = 0x17a180u;

    // 0x17a180: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x17a180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x17a184: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A184u;
    {
        const bool branch_taken_0x17a184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A184u;
        // 0x17a188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a184) {
            ctx->pc = 0x17A19Cu;
            goto label_17a19c;
        }
    }
    ctx->pc = 0x17A18Cu;
    // 0x17a18c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17A18Cu;
    {
        const bool branch_taken_0x17a18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a18c) {
            ctx->pc = 0x17A190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A18Cu;
            // 0x17a190: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1B8u;
            goto label_17a1b8;
        }
    }
    ctx->pc = 0x17A194u;
label_17a194:
    // 0x17a194: 0x3e00008  jr          $ra
    ctx->pc = 0x17A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A19Cu;
label_17a19c:
    // 0x17a19c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17a1a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a1a4: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x17a1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x17a1a8: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x17a1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17a1ac: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1b0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17a1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1b4: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x17a1b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_17a1b8:
    // 0x17a1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a1bc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17a1c0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A1C0u;
    {
        const bool branch_taken_0x17a1c0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1C0u;
        // 0x17a1c4: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1c0) {
            ctx->pc = 0x17A194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a194;
        }
    }
    ctx->pc = 0x17A1C8u;
    // 0x17a1c8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17a1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1cc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x17a1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1d0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1d4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17a1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A1E0u;
}
