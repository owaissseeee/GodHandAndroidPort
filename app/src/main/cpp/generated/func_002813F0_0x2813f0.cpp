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

// Function: func_002813F0
// Address: 0x2813f0 - 0x281458
void func_002813F0_0x2813f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002813F0_0x2813f0");
#endif

    ctx->pc = 0x2813f0u;

    // 0x2813f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2813f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2813f4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2813F4u;
    {
        const bool branch_taken_0x2813f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2813F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813F4u;
        // 0x2813f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813f4) {
            ctx->pc = 0x28142Cu;
            goto label_28142c;
        }
    }
    ctx->pc = 0x2813FCu;
    // 0x2813fc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2813FCu;
    {
        const bool branch_taken_0x2813fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x281400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813FCu;
        // 0x281400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813fc) {
            ctx->pc = 0x281414u;
            goto label_281414;
        }
    }
    ctx->pc = 0x281404u;
    // 0x281404: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281404u;
    {
        const bool branch_taken_0x281404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281404u;
        // 0x281408: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281404) {
            ctx->pc = 0x281434u;
            goto label_281434;
        }
    }
    ctx->pc = 0x28140Cu;
    // 0x28140c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28140Cu;
    {
        const bool branch_taken_0x28140c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28140Cu;
        // 0x281410: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28140c) {
            ctx->pc = 0x281440u;
            goto label_281440;
        }
    }
    ctx->pc = 0x281414u;
label_281414:
    // 0x281414: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x281414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x281418: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28141c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x28141cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x281420: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x281420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281424: 0x3e00008  jr          $ra
    ctx->pc = 0x281424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281424u;
        // 0x281428: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28142Cu;
label_28142c:
    // 0x28142c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28142Cu;
    {
        const bool branch_taken_0x28142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28142Cu;
        // 0x281430: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28142c) {
            ctx->pc = 0x281444u;
            goto label_281444;
        }
    }
    ctx->pc = 0x281434u;
label_281434:
    // 0x281434: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x281434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x281438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281438u;
    {
        const bool branch_taken_0x281438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281438u;
        // 0x28143c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281438) {
            ctx->pc = 0x281444u;
            goto label_281444;
        }
    }
    ctx->pc = 0x281440u;
label_281440:
    // 0x281440: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x281440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_281444:
    // 0x281444: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x281444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x281448: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x281448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x28144c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x28144cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281450: 0x3e00008  jr          $ra
    ctx->pc = 0x281450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281450u;
        // 0x281454: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281458u;
}
