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

// Function: SetT2
// Address: 0x3b6990 - 0x3b6a00
void SetT2_0x3b6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetT2_0x3b6990");
#endif

    switch (ctx->pc) {
        case 0x3b69a8u: goto label_3b69a8;
        default: break;
    }

    ctx->pc = 0x3b6990u;

    // 0x3b6990: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3b6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3b6994: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b6998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b6998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b699c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B699Cu;
    {
        const bool branch_taken_0x3b699c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B699Cu;
        // 0x3b69a0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b699c) {
            ctx->pc = 0x3B69CCu;
            goto label_3b69cc;
        }
    }
    ctx->pc = 0x3B69A4u;
    // 0x3b69a4: 0x0  nop
    ctx->pc = 0x3b69a4u;
    // NOP
label_3b69a8:
    // 0x3b69a8: 0x42000039  di
    ctx->pc = 0x3b69a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3b69ac: 0x40f  sync.p
    ctx->pc = 0x3b69acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b69b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3b69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3b69b4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3b69b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3b69b8: 0x0  nop
    ctx->pc = 0x3b69b8u;
    // NOP
    // 0x3b69bc: 0x0  nop
    ctx->pc = 0x3b69bcu;
    // NOP
    // 0x3b69c0: 0x0  nop
    ctx->pc = 0x3b69c0u;
    // NOP
    // 0x3b69c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B69C4u;
    {
        const bool branch_taken_0x3b69c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b69c4) {
            ctx->pc = 0x3B69A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b69a8;
        }
    }
    ctx->pc = 0x3B69CCu;
label_3b69cc:
    // 0x3b69cc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3b69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3b69d0: 0x40f  sync.p
    ctx->pc = 0x3b69d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b69d4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x3b69d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3b69d8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3b69d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x3b69dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b69dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b69e0: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x3b69e0u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x3b69e4: 0x40f  sync.p
    ctx->pc = 0x3b69e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b69e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3b69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3b69ec: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x3b69ecu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x3b69f0: 0x40f  sync.p
    ctx->pc = 0x3b69f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b69f4: 0x42000018  eret
    ctx->pc = 0x3b69f4u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x3b69f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B69F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B69F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6A00u;
}
