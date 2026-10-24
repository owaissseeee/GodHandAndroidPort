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

// Function: func_0035AE18
// Address: 0x35ae18 - 0x35ae70
void func_0035AE18_0x35ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AE18_0x35ae18");
#endif

    ctx->pc = 0x35ae18u;

    // 0x35ae18: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x35ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x35ae1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35ae20: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35AE20u;
    {
        const bool branch_taken_0x35ae20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ae20) {
            ctx->pc = 0x35AE60u;
            goto label_35ae60;
        }
    }
    ctx->pc = 0x35AE28u;
    // 0x35ae28: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x35ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x35ae2c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35AE2Cu;
    {
        const bool branch_taken_0x35ae2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ae2c) {
            ctx->pc = 0x35AE60u;
            goto label_35ae60;
        }
    }
    ctx->pc = 0x35AE34u;
    // 0x35ae34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x35ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35ae38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35AE38u;
    {
        const bool branch_taken_0x35ae38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ae38) {
            ctx->pc = 0x35AE60u;
            goto label_35ae60;
        }
    }
    ctx->pc = 0x35AE40u;
    // 0x35ae40: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x35ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x35ae44: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35AE44u;
    {
        const bool branch_taken_0x35ae44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE44u;
        // 0x35ae48: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae44) {
            ctx->pc = 0x35AE60u;
            goto label_35ae60;
        }
    }
    ctx->pc = 0x35AE4Cu;
    // 0x35ae4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35ae54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ae54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae58: 0x3e00008  jr          $ra
    ctx->pc = 0x35AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE58u;
        // 0x35ae5c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AE60u;
label_35ae60:
    // 0x35ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x35AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE60u;
        // 0x35ae64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AE68u;
    // 0x35ae68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35ae6c: 0x0  nop
    ctx->pc = 0x35ae6cu;
    // NOP
    ctx->pc = 0x35ae70u;
}
