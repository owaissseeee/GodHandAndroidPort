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

// Function: func_00331C98
// Address: 0x331c98 - 0x331ce0
void func_00331C98_0x331c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331C98_0x331c98");
#endif

    ctx->pc = 0x331c98u;

    // 0x331c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331c9c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331ca8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x331CA8u;
    {
        const bool branch_taken_0x331ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x331CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CA8u;
        // 0x331cac: 0xac448480  sw          $a0, -0x7B80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ca8) {
            ctx->pc = 0x331CC8u;
            goto label_331cc8;
        }
    }
    ctx->pc = 0x331CB0u;
    // 0x331cb0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331cb8: 0x24844098  addiu       $a0, $a0, 0x4098
    ctx->pc = 0x331cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16536));
    // 0x331cbc: 0x80ec7ca  j           func_3B1F28
    ctx->pc = 0x331CBCu;
    ctx->pc = 0x331CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331CBCu;
    // 0x331cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331CBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x331CC4u;
    // 0x331cc4: 0x0  nop
    ctx->pc = 0x331cc4u;
    // NOP
label_331cc8:
    // 0x331cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x331CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CCCu;
        // 0x331cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331CD4u;
    // 0x331cd4: 0x0  nop
    ctx->pc = 0x331cd4u;
    // NOP
    // 0x331cd8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x331cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x331cdc: 0x0  nop
    ctx->pc = 0x331cdcu;
    // NOP
    ctx->pc = 0x331ce0u;
}
