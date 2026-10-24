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

// Function: ResetBufferOnFirstEnterC
// Address: 0x33a0c0 - 0x33a110
void ResetBufferOnFirstEnterC_0x33a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetBufferOnFirstEnterC_0x33a0c0");
#endif

    switch (ctx->pc) {
        case 0x33a0f0u: goto label_33a0f0;
        default: break;
    }

    ctx->pc = 0x33a0c0u;

    // 0x33a0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a0c4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33a0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a0cc: 0x24507fe8  addiu       $s0, $v0, 0x7FE8
    ctx->pc = 0x33a0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32744));
    // 0x33a0d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E7FE8u));
    // 0x33a0d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A0D4u;
    {
        const bool branch_taken_0x33a0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0D4u;
        // 0x33a0d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0d4) {
            ctx->pc = 0x33A0F4u;
            goto label_33a0f4;
        }
    }
    ctx->pc = 0x33A0DCu;
    // 0x33a0dc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x33a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x33a0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a0e4: 0x24847ff0  addiu       $a0, $a0, 0x7FF0
    ctx->pc = 0x33a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32752));
    // 0x33a0e8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33A0E8u;
    SET_GPR_U32(ctx, 31, 0x33A0F0u);
    ctx->pc = 0x33A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A0E8u;
    // 0x33a0ec: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33A0E8u, 0x33A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A0F0u;
label_33a0f0:
    // 0x33a0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a0f4:
    // 0x33a0f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a0f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a0fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33a100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a104: 0x3e00008  jr          $ra
    ctx->pc = 0x33A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A104u;
        // 0x33a108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A10Cu;
    // 0x33a10c: 0x0  nop
    ctx->pc = 0x33a10cu;
    // NOP
    ctx->pc = 0x33a110u;
}
