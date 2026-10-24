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

// Function: func_00381010
// Address: 0x381010 - 0x381070
void func_00381010_0x381010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381010_0x381010");
#endif

    ctx->pc = 0x381010u;

    // 0x381010: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x381010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x381014: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x381014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x381018: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x381018u;
    {
        const bool branch_taken_0x381018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381018u;
        // 0x38101c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381018) {
            ctx->pc = 0x381038u;
            goto label_381038;
        }
    }
    ctx->pc = 0x381020u;
    // 0x381020: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x381020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x381024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x381024u;
    {
        const bool branch_taken_0x381024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381024u;
        // 0x381028: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381024) {
            ctx->pc = 0x381034u;
            goto label_381034;
        }
    }
    ctx->pc = 0x38102Cu;
    // 0x38102c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38102Cu;
    {
        const bool branch_taken_0x38102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38102Cu;
        // 0x381030: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38102c) {
            ctx->pc = 0x381038u;
            goto label_381038;
        }
    }
    ctx->pc = 0x381034u;
label_381034:
    // 0x381034: 0xa0860004  sb          $a2, 0x4($a0)
    ctx->pc = 0x381034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 6));
label_381038:
    // 0x381038: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x381038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x38103c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x38103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x381040: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x381040u;
    {
        const bool branch_taken_0x381040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381040) {
            ctx->pc = 0x381064u;
            goto label_381064;
        }
    }
    ctx->pc = 0x381048u;
    // 0x381048: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x381048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38104c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x38104cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x381050: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381050u;
    {
        const bool branch_taken_0x381050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381050) {
            ctx->pc = 0x381054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381050u;
            // 0x381054: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381064u;
            goto label_381064;
        }
    }
    ctx->pc = 0x381058u;
    // 0x381058: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x381058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38105c: 0x3e00008  jr          $ra
    ctx->pc = 0x38105Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38105Cu;
        // 0x381060: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38105Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381064u;
label_381064:
    // 0x381064: 0x3e00008  jr          $ra
    ctx->pc = 0x381064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38106Cu;
    // 0x38106c: 0x0  nop
    ctx->pc = 0x38106cu;
    // NOP
    ctx->pc = 0x381070u;
}
