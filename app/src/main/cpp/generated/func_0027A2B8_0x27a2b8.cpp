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

// Function: func_0027A2B8
// Address: 0x27a2b8 - 0x27a2f8
void func_0027A2B8_0x27a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027A2B8_0x27a2b8");
#endif

    switch (ctx->pc) {
        case 0x27a2dcu: goto label_27a2dc;
        default: break;
    }

    ctx->pc = 0x27a2b8u;

    // 0x27a2b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x27a2bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a2c0: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x27a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x27a2c4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x27a2c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27a2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x27a2cc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A2CCu;
    {
        const bool branch_taken_0x27a2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2CCu;
        // 0x27a2d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2cc) {
            ctx->pc = 0x27A2E4u;
            goto label_27a2e4;
        }
    }
    ctx->pc = 0x27A2D4u;
    // 0x27a2d4: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x27A2D4u;
    SET_GPR_U32(ctx, 31, 0x27A2DCu);
    ctx->pc = 0x14B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B470u, 0x27A2D4u, 0x27A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A2DCu;
label_27a2dc:
    // 0x27a2dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A2DCu;
    {
        const bool branch_taken_0x27a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2DCu;
        // 0x27a2e0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2dc) {
            ctx->pc = 0x27A2E8u;
            goto label_27a2e8;
        }
    }
    ctx->pc = 0x27A2E4u;
label_27a2e4:
    // 0x27a2e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a2e8:
    // 0x27a2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x27A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2ECu;
        // 0x27a2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A2F4u;
    // 0x27a2f4: 0x0  nop
    ctx->pc = 0x27a2f4u;
    // NOP
    ctx->pc = 0x27a2f8u;
}
