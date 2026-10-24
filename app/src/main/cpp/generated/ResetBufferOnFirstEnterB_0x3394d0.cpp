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

// Function: ResetBufferOnFirstEnterB
// Address: 0x3394d0 - 0x339520
void ResetBufferOnFirstEnterB_0x3394d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetBufferOnFirstEnterB_0x3394d0");
#endif

    switch (ctx->pc) {
        case 0x339500u: goto label_339500;
        default: break;
    }

    ctx->pc = 0x3394d0u;

    // 0x3394d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3394d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3394d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3394d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3394d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3394d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3394dc: 0x24503fb0  addiu       $s0, $v0, 0x3FB0
    ctx->pc = 0x3394dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16304));
    // 0x3394e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3394e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3FB0u));
    // 0x3394e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3394E4u;
    {
        const bool branch_taken_0x3394e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3394E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394E4u;
        // 0x3394e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394e4) {
            ctx->pc = 0x339504u;
            goto label_339504;
        }
    }
    ctx->pc = 0x3394ECu;
    // 0x3394ec: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3394ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3394f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3394f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394f4: 0x24843fb8  addiu       $a0, $a0, 0x3FB8
    ctx->pc = 0x3394f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16312));
    // 0x3394f8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3394F8u;
    SET_GPR_U32(ctx, 31, 0x339500u);
    ctx->pc = 0x3394FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394F8u;
    // 0x3394fc: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3394F8u, 0x339500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339500u;
label_339500:
    // 0x339500: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x339500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_339504:
    // 0x339504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x339504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x339508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33950c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33950cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x339510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339514: 0x3e00008  jr          $ra
    ctx->pc = 0x339514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339514u;
        // 0x339518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33951Cu;
    // 0x33951c: 0x0  nop
    ctx->pc = 0x33951cu;
    // NOP
    ctx->pc = 0x339520u;
}
