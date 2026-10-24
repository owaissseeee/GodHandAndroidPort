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

// Function: func_002812A8
// Address: 0x2812a8 - 0x281320
void func_002812A8_0x2812a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002812A8_0x2812a8");
#endif

    switch (ctx->pc) {
        case 0x2812ecu: goto label_2812ec;
        default: break;
    }

    ctx->pc = 0x2812a8u;

    // 0x2812a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2812a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2812ac: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2812ACu;
    {
        const bool branch_taken_0x2812ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2812B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812ACu;
        // 0x2812b0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812ac) {
            ctx->pc = 0x2812E4u;
            goto label_2812e4;
        }
    }
    ctx->pc = 0x2812B4u;
    // 0x2812b4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2812B4u;
    {
        const bool branch_taken_0x2812b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2812B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812B4u;
        // 0x2812b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812b4) {
            ctx->pc = 0x2812CCu;
            goto label_2812cc;
        }
    }
    ctx->pc = 0x2812BCu;
    // 0x2812bc: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2812BCu;
    {
        const bool branch_taken_0x2812bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2812C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812BCu;
        // 0x2812c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812bc) {
            ctx->pc = 0x281300u;
            goto label_281300;
        }
    }
    ctx->pc = 0x2812C4u;
    // 0x2812c4: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2812C4u;
    {
        const bool branch_taken_0x2812c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2812C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812C4u;
        // 0x2812c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812c4) {
            ctx->pc = 0x281308u;
            goto label_281308;
        }
    }
    ctx->pc = 0x2812CCu;
label_2812cc:
    // 0x2812cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2812ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2812d0: 0xa08602f7  sb          $a2, 0x2F7($a0)
    ctx->pc = 0x2812d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x2812d4: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2812d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2812d8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2812d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2812dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2812DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812DCu;
        // 0x2812e0: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2812DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2812E4u;
label_2812e4:
    // 0x2812e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2812e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2812e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2812ec:
    // 0x2812ec: 0xa08602f7  sb          $a2, 0x2F7($a0)
    ctx->pc = 0x2812ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x2812f0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2812f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2812f4: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2812f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2812f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2812F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812F8u;
        // 0x2812fc: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2812F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281300u;
label_281300:
    // 0x281300: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x281300u;
    {
        const bool branch_taken_0x281300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281300u;
        // 0x281304: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281300) {
            ctx->pc = 0x2812ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2812ec;
        }
    }
    ctx->pc = 0x281308u;
label_281308:
    // 0x281308: 0xa08602f7  sb          $a2, 0x2F7($a0)
    ctx->pc = 0x281308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x28130c: 0xa08502f5  sb          $a1, 0x2F5($a0)
    ctx->pc = 0x28130cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x281310: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x281310u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x281314: 0x3e00008  jr          $ra
    ctx->pc = 0x281314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281314u;
        // 0x281318: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28131Cu;
    // 0x28131c: 0x0  nop
    ctx->pc = 0x28131cu;
    // NOP
    ctx->pc = 0x281320u;
}
