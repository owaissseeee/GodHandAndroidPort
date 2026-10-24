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

// Function: is_reading__7filebuf
// Address: 0x38b858 - 0x38b888
void is_reading__7filebuf_0x38b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("is_reading__7filebuf_0x38b858");
#endif

    ctx->pc = 0x38b858u;

    // 0x38b858: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38b85c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x38b85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x38b860: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38B860u;
    {
        const bool branch_taken_0x38b860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b860) {
            ctx->pc = 0x38B864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B860u;
            // 0x38b864: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B86Cu;
            goto label_38b86c;
        }
    }
    ctx->pc = 0x38B868u;
    // 0x38b868: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x38b868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38b86c:
    // 0x38b86c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38B86Cu;
    {
        const bool branch_taken_0x38b86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b86c) {
            ctx->pc = 0x38B870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B86Cu;
            // 0x38b870: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B878u;
            goto label_38b878;
        }
    }
    ctx->pc = 0x38B874u;
    // 0x38b874: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x38b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_38b878:
    // 0x38b878: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x38b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x38b87c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B87Cu;
        // 0x38b880: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B884u;
    // 0x38b884: 0x0  nop
    ctx->pc = 0x38b884u;
    // NOP
    ctx->pc = 0x38b888u;
}
