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

// Function: func_002BDFF8
// Address: 0x2bdff8 - 0x2be028
void func_002BDFF8_0x2bdff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDFF8_0x2bdff8");
#endif

    switch (ctx->pc) {
        case 0x2be00cu: goto label_2be00c;
        case 0x2be014u: goto label_2be014;
        default: break;
    }

    ctx->pc = 0x2bdff8u;

    // 0x2bdff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bdffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be004: 0xc0af80a  jal         func_2BE028
    ctx->pc = 0x2BE004u;
    SET_GPR_U32(ctx, 31, 0x2BE00Cu);
    ctx->pc = 0x2BE008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE004u;
    // 0x2be008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE028u, 0x2BE004u, 0x2BE00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE00Cu;
label_2be00c:
    // 0x2be00c: 0xc0af83c  jal         func_2BE0F0
    ctx->pc = 0x2BE00Cu;
    SET_GPR_U32(ctx, 31, 0x2BE014u);
    ctx->pc = 0x2BE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE00Cu;
    // 0x2be010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE0F0u, 0x2BE00Cu, 0x2BE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE014u;
label_2be014:
    // 0x2be014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be01c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE01Cu;
        // 0x2be020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE024u;
    // 0x2be024: 0x0  nop
    ctx->pc = 0x2be024u;
    // NOP
    ctx->pc = 0x2be028u;
}
