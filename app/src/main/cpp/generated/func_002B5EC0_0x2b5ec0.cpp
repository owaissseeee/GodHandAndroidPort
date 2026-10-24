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

// Function: func_002B5EC0
// Address: 0x2b5ec0 - 0x2b5f18
void func_002B5EC0_0x2b5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5EC0_0x2b5ec0");
#endif

    ctx->pc = 0x2b5ec0u;

    // 0x2b5ec0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b5ec4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B5EC4u;
    {
        const bool branch_taken_0x2b5ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ec4) {
            ctx->pc = 0x2B5F0Cu;
            goto label_2b5f0c;
        }
    }
    ctx->pc = 0x2B5ECCu;
    // 0x2b5ecc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b5ed0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5ED0u;
    {
        const bool branch_taken_0x2b5ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ed0) {
            ctx->pc = 0x2B5ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5ED0u;
            // 0x2b5ed4: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5EE4u;
            goto label_2b5ee4;
        }
    }
    ctx->pc = 0x2B5ED8u;
    // 0x2b5ed8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b5edc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2b5edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2b5ee0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2b5ee4:
    // 0x2b5ee4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5EE4u;
    {
        const bool branch_taken_0x2b5ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ee4) {
            ctx->pc = 0x2B5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5EE4u;
            // 0x2b5ee8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5EF8u;
            goto label_2b5ef8;
        }
    }
    ctx->pc = 0x2B5EECu;
    // 0x2b5eec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b5ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5EF0u;
    {
        const bool branch_taken_0x2b5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EF0u;
        // 0x2b5ef4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ef0) {
            ctx->pc = 0x2B5F00u;
            goto label_2b5f00;
        }
    }
    ctx->pc = 0x2B5EF8u;
label_2b5ef8:
    // 0x2b5ef8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b5efc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2b5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2b5f00:
    // 0x2b5f00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b5f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b5f04: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2b5f08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2b5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2b5f0c:
    // 0x2b5f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5F14u;
    // 0x2b5f14: 0x0  nop
    ctx->pc = 0x2b5f14u;
    // NOP
    ctx->pc = 0x2b5f18u;
}
