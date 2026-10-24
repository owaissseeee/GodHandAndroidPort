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

// Function: func_001FCCC0
// Address: 0x1fccc0 - 0x1fcd00
void func_001FCCC0_0x1fccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FCCC0_0x1fccc0");
#endif

    ctx->pc = 0x1fccc0u;

    // 0x1fccc0: 0x84820030  lh          $v0, 0x30($a0)
    ctx->pc = 0x1fccc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1fccc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCCC4u;
    {
        const bool branch_taken_0x1fccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCC4u;
        // 0x1fccc8: 0x94830030  lhu         $v1, 0x30($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccc4) {
            ctx->pc = 0x1FCCF4u;
            goto label_1fccf4;
        }
    }
    ctx->pc = 0x1FCCCCu;
    // 0x1fcccc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fccd0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fccd4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCCD4u;
    {
        const bool branch_taken_0x1fccd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCD4u;
        // 0x1fccd8: 0xa4820030  sh          $v0, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccd4) {
            ctx->pc = 0x1FCCF4u;
            goto label_1fccf4;
        }
    }
    ctx->pc = 0x1FCCDCu;
    // 0x1fccdc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1fcce0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fcce4: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1fcce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x1fcce8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fccec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fccf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1fccf4:
    // 0x1fccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCCFCu;
    // 0x1fccfc: 0x0  nop
    ctx->pc = 0x1fccfcu;
    // NOP
    ctx->pc = 0x1fcd00u;
}
