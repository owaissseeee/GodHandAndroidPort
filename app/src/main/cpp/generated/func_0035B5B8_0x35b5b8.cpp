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

// Function: func_0035B5B8
// Address: 0x35b5b8 - 0x35b5f8
void func_0035B5B8_0x35b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B5B8_0x35b5b8");
#endif

    ctx->pc = 0x35b5b8u;

    // 0x35b5b8: 0x8c820920  lw          $v0, 0x920($a0)
    ctx->pc = 0x35b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2336)));
    // 0x35b5bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B5BCu;
    {
        const bool branch_taken_0x35b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5BCu;
        // 0x35b5c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5bc) {
            ctx->pc = 0x35B5D8u;
            goto label_35b5d8;
        }
    }
    ctx->pc = 0x35B5C4u;
    // 0x35b5c4: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x35b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x35b5c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x35b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x35b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5CCu;
        // 0x35b5d0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5D4u;
    // 0x35b5d4: 0x0  nop
    ctx->pc = 0x35b5d4u;
    // NOP
label_35b5d8:
    // 0x35b5d8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x35b5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x35b5dc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35b5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35b5e0: 0x8c239920  lw          $v1, -0x66E0($at)
    ctx->pc = 0x35b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940960)));
    // 0x35b5e4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x35b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x35b5e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x35b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x35b5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5ECu;
        // 0x35b5f0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5F4u;
    // 0x35b5f4: 0x0  nop
    ctx->pc = 0x35b5f4u;
    // NOP
    ctx->pc = 0x35b5f8u;
}
