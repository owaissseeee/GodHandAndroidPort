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

// Function: func_002831C8
// Address: 0x2831c8 - 0x283240
void func_002831C8_0x2831c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002831C8_0x2831c8");
#endif

    switch (ctx->pc) {
        case 0x28320cu: goto label_28320c;
        default: break;
    }

    ctx->pc = 0x2831c8u;

    // 0x2831c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2831c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2831cc: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2831CCu;
    {
        const bool branch_taken_0x2831cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2831D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831CCu;
        // 0x2831d0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831cc) {
            ctx->pc = 0x283204u;
            goto label_283204;
        }
    }
    ctx->pc = 0x2831D4u;
    // 0x2831d4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2831D4u;
    {
        const bool branch_taken_0x2831d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2831D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831D4u;
        // 0x2831d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831d4) {
            ctx->pc = 0x2831ECu;
            goto label_2831ec;
        }
    }
    ctx->pc = 0x2831DCu;
    // 0x2831dc: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2831DCu;
    {
        const bool branch_taken_0x2831dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2831E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831DCu;
        // 0x2831e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831dc) {
            ctx->pc = 0x283220u;
            goto label_283220;
        }
    }
    ctx->pc = 0x2831E4u;
    // 0x2831e4: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2831E4u;
    {
        const bool branch_taken_0x2831e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2831E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831E4u;
        // 0x2831e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831e4) {
            ctx->pc = 0x283228u;
            goto label_283228;
        }
    }
    ctx->pc = 0x2831ECu;
label_2831ec:
    // 0x2831ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2831ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2831f0: 0xa08602f7  sb          $a2, 0x2F7($a0)
    ctx->pc = 0x2831f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x2831f4: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2831f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2831f8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2831f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2831fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2831FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831FCu;
        // 0x283200: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2831FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283204u;
label_283204:
    // 0x283204: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x283204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28320c:
    // 0x28320c: 0xa08602f7  sb          $a2, 0x2F7($a0)
    ctx->pc = 0x28320cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x283210: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283214: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x283214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x283218: 0x3e00008  jr          $ra
    ctx->pc = 0x283218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283218u;
        // 0x28321c: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283220u;
label_283220:
    // 0x283220: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x283220u;
    {
        const bool branch_taken_0x283220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283220u;
        // 0x283224: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283220) {
            ctx->pc = 0x28320Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28320c;
        }
    }
    ctx->pc = 0x283228u;
label_283228:
    // 0x283228: 0xa08602f7  sb          $a2, 0x2F7($a0)
    ctx->pc = 0x283228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x28322c: 0xa08502f5  sb          $a1, 0x2F5($a0)
    ctx->pc = 0x28322cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x283230: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x283230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x283234: 0x3e00008  jr          $ra
    ctx->pc = 0x283234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283234u;
        // 0x283238: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28323Cu;
    // 0x28323c: 0x0  nop
    ctx->pc = 0x28323cu;
    // NOP
    ctx->pc = 0x283240u;
}
