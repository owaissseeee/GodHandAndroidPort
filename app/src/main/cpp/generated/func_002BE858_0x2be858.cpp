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

// Function: func_002BE858
// Address: 0x2be858 - 0x2be890
void func_002BE858_0x2be858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE858_0x2be858");
#endif

    switch (ctx->pc) {
        case 0x2be880u: goto label_2be880;
        default: break;
    }

    ctx->pc = 0x2be858u;

    // 0x2be858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be85c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2be85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be864: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2be868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be86c: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2be86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2be870: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE870u;
    {
        const bool branch_taken_0x2be870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE870u;
        // 0x2be874: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be870) {
            ctx->pc = 0x2BE884u;
            goto label_2be884;
        }
    }
    ctx->pc = 0x2BE878u;
    // 0x2be878: 0xc0af97c  jal         func_2BE5F0
    ctx->pc = 0x2BE878u;
    SET_GPR_U32(ctx, 31, 0x2BE880u);
    ctx->pc = 0x2BE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE5F0u, 0x2BE878u, 0x2BE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE880u;
label_2be880:
    // 0x2be880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be884:
    // 0x2be884: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE884u;
        // 0x2be888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE88Cu;
    // 0x2be88c: 0x0  nop
    ctx->pc = 0x2be88cu;
    // NOP
    ctx->pc = 0x2be890u;
}
