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

// Function: func_002B22E8
// Address: 0x2b22e8 - 0x2b2318
void func_002B22E8_0x2b22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B22E8_0x2b22e8");
#endif

    ctx->pc = 0x2b22e8u;

    // 0x2b22e8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2b22e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2b22ec: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x2b22ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2b22f0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B22F0u;
    {
        const bool branch_taken_0x2b22f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22F0u;
        // 0x2b22f4: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b22f0) {
            ctx->pc = 0x2B22FCu;
            goto label_2b22fc;
        }
    }
    ctx->pc = 0x2B22F8u;
    // 0x2b22f8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2b22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2b22fc:
    // 0x2b22fc: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B22FCu;
    {
        const bool branch_taken_0x2b22fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b22fc) {
            ctx->pc = 0x2B2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22FCu;
            // 0x2b2300: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2304u;
            goto label_2b2304;
        }
    }
    ctx->pc = 0x2B2304u;
label_2b2304:
    // 0x2b2304: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x2b2304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b2308: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2b2308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2b230c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2b230cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2b2310: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2310u;
        // 0x2b2314: 0xa4870002  sh          $a3, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2318u;
}
