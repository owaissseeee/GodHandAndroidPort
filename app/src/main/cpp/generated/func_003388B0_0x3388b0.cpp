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

// Function: func_003388B0
// Address: 0x3388b0 - 0x3388f8
void func_003388B0_0x3388b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003388B0_0x3388b0");
#endif

    switch (ctx->pc) {
        case 0x3388e4u: goto label_3388e4;
        default: break;
    }

    ctx->pc = 0x3388b0u;

    // 0x3388b0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3388b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3388b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3388b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3388b8: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x3388b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x3388bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3388bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3388c0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3388C0u;
    {
        const bool branch_taken_0x3388c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3388C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388C0u;
        // 0x3388c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388c0) {
            ctx->pc = 0x3388D8u;
            goto label_3388d8;
        }
    }
    ctx->pc = 0x3388C8u;
    // 0x3388c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3388c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3388cc: 0x8c830708  lw          $v1, 0x708($a0)
    ctx->pc = 0x3388ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3388d0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3388D0u;
    {
        const bool branch_taken_0x3388d0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3388D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388D0u;
        // 0x3388d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388d0) {
            ctx->pc = 0x3388E8u;
            goto label_3388e8;
        }
    }
    ctx->pc = 0x3388D8u;
label_3388d8:
    // 0x3388d8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3388d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3388dc: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x3388DCu;
    SET_GPR_U32(ctx, 31, 0x3388E4u);
    ctx->pc = 0x3388E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3388DCu;
    // 0x3388e0: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3388DCu, 0x3388E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3388E4u;
label_3388e4:
    // 0x3388e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3388e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3388e8:
    // 0x3388e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3388e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3388ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3388ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3388F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388ECu;
        // 0x3388f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3388F4u;
    // 0x3388f4: 0x0  nop
    ctx->pc = 0x3388f4u;
    // NOP
    ctx->pc = 0x3388f8u;
}
