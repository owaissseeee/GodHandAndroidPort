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

// Function: func_002B3BE0
// Address: 0x2b3be0 - 0x2b3c20
void func_002B3BE0_0x2b3be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3BE0_0x2b3be0");
#endif

    ctx->pc = 0x2b3be0u;

    // 0x2b3be0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b3be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3be4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2b3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2b3be8: 0x34450800  ori         $a1, $v0, 0x800
    ctx->pc = 0x2b3be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2b3bec: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x2b3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x2b3bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3BF0u;
    {
        const bool branch_taken_0x2b3bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF0u;
        // 0x2b3bf4: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bf0) {
            ctx->pc = 0x2B3C00u;
            goto label_2b3c00;
        }
    }
    ctx->pc = 0x2B3BF8u;
    // 0x2b3bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF8u;
        // 0x2b3bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C00u;
label_2b3c00:
    // 0x2b3c00: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2b3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2b3c04: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x2b3c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2b3c08: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2b3c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2b3c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b3c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b3c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C14u;
        // 0x2b3c18: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C1Cu;
    // 0x2b3c1c: 0x0  nop
    ctx->pc = 0x2b3c1cu;
    // NOP
    ctx->pc = 0x2b3c20u;
}
