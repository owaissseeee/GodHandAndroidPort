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

// Function: func_001B80C0
// Address: 0x1b80c0 - 0x1b8108
void func_001B80C0_0x1b80c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B80C0_0x1b80c0");
#endif

    switch (ctx->pc) {
        case 0x1b80e4u: goto label_1b80e4;
        default: break;
    }

    ctx->pc = 0x1b80c0u;

    // 0x1b80c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b80c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b80c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b80c8: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x1b80c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x1b80cc: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1b80d0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b80d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b80d4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B80D4u;
    {
        const bool branch_taken_0x1b80d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80D4u;
        // 0x1b80d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80d4) {
            ctx->pc = 0x1B80ECu;
            goto label_1b80ec;
        }
    }
    ctx->pc = 0x1B80DCu;
    // 0x1b80dc: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x1B80DCu;
    SET_GPR_U32(ctx, 31, 0x1B80E4u);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x1B80DCu, 0x1B80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80E4u;
label_1b80e4:
    // 0x1b80e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B80E4u;
    {
        const bool branch_taken_0x1b80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80E4u;
        // 0x1b80e8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80e4) {
            ctx->pc = 0x1B80F0u;
            goto label_1b80f0;
        }
    }
    ctx->pc = 0x1B80ECu;
label_1b80ec:
    // 0x1b80ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b80f0:
    // 0x1b80f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b80f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b80f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80F4u;
        // 0x1b80f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80FCu;
    // 0x1b80fc: 0x0  nop
    ctx->pc = 0x1b80fcu;
    // NOP
    // 0x1b8100: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b8100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
    // 0x1b8104: 0x0  nop
    ctx->pc = 0x1b8104u;
    // NOP
    ctx->pc = 0x1b8108u;
}
