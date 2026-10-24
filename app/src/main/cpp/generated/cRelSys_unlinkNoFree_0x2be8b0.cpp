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

// Function: cRelSys_unlinkNoFree
// Address: 0x2be8b0 - 0x2be8e8
void cRelSys_unlinkNoFree_0x2be8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRelSys_unlinkNoFree_0x2be8b0");
#endif

    switch (ctx->pc) {
        case 0x2be8d8u: goto label_2be8d8;
        default: break;
    }

    ctx->pc = 0x2be8b0u;

    // 0x2be8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be8b4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2be8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2be8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be8bc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2be8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2be8c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be8c4: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2be8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2be8c8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE8C8u;
    {
        const bool branch_taken_0x2be8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8C8u;
        // 0x2be8cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8c8) {
            ctx->pc = 0x2BE8DCu;
            goto label_2be8dc;
        }
    }
    ctx->pc = 0x2BE8D0u;
    // 0x2be8d0: 0xc0af99c  jal         func_2BE670
    ctx->pc = 0x2BE8D0u;
    SET_GPR_U32(ctx, 31, 0x2BE8D8u);
    ctx->pc = 0x2BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE670u, 0x2BE8D0u, 0x2BE8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE8D8u;
label_2be8d8:
    // 0x2be8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be8dc:
    // 0x2be8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8DCu;
        // 0x2be8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE8E4u;
    // 0x2be8e4: 0x0  nop
    ctx->pc = 0x2be8e4u;
    // NOP
    ctx->pc = 0x2be8e8u;
}
