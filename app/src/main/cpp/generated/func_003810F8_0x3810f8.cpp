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

// Function: func_003810F8
// Address: 0x3810f8 - 0x381150
void func_003810F8_0x3810f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003810F8_0x3810f8");
#endif

    ctx->pc = 0x3810f8u;

    // 0x3810f8: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x3810f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3810fc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3810fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x381100: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x381100u;
    {
        const bool branch_taken_0x381100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381100) {
            ctx->pc = 0x381104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381100u;
            // 0x381104: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381120u;
            goto label_381120;
        }
    }
    ctx->pc = 0x381108u;
    // 0x381108: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x381108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x38110c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38110Cu;
    {
        const bool branch_taken_0x38110c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38110Cu;
        // 0x381110: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38110c) {
            ctx->pc = 0x381118u;
            goto label_381118;
        }
    }
    ctx->pc = 0x381114u;
    // 0x381114: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x381114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_381118:
    // 0x381118: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x381118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x38111c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x38111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_381120:
    // 0x381120: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x381120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x381124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x381124u;
    {
        const bool branch_taken_0x381124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381124) {
            ctx->pc = 0x381148u;
            goto label_381148;
        }
    }
    ctx->pc = 0x38112Cu;
    // 0x38112c: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x38112cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x381130: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x381130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x381134: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381134u;
    {
        const bool branch_taken_0x381134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381134) {
            ctx->pc = 0x381138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381134u;
            // 0x381138: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381148u;
            goto label_381148;
        }
    }
    ctx->pc = 0x38113Cu;
    // 0x38113c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x381140: 0x3e00008  jr          $ra
    ctx->pc = 0x381140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381140u;
        // 0x381144: 0xa0820005  sb          $v0, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381148u;
label_381148:
    // 0x381148: 0x3e00008  jr          $ra
    ctx->pc = 0x381148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381150u;
}
