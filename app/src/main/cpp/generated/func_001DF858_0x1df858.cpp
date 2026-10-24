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

// Function: func_001DF858
// Address: 0x1df858 - 0x1df890
void func_001DF858_0x1df858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF858_0x1df858");
#endif

    switch (ctx->pc) {
        case 0x1df86cu: goto label_1df86c;
        case 0x1df874u: goto label_1df874;
        default: break;
    }

    ctx->pc = 0x1df858u;

    // 0x1df858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df85c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df864: 0xc07741a  jal         func_1DD068
    ctx->pc = 0x1DF864u;
    SET_GPR_U32(ctx, 31, 0x1DF86Cu);
    ctx->pc = 0x1DF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF864u;
    // 0x1df868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD068u, 0x1DF864u, 0x1DF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF86Cu;
label_1df86c:
    // 0x1df86c: 0xc077b1c  jal         func_1DEC70
    ctx->pc = 0x1DF86Cu;
    SET_GPR_U32(ctx, 31, 0x1DF874u);
    ctx->pc = 0x1DF870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF86Cu;
    // 0x1df870: 0x260425b0  addiu       $a0, $s0, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEC70u, 0x1DF86Cu, 0x1DF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF874u;
label_1df874:
    // 0x1df874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df878: 0xae002e50  sw          $zero, 0x2E50($s0)
    ctx->pc = 0x1df878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11856), GPR_U32(ctx, 0));
    // 0x1df87c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df884: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF884u;
        // 0x1df888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF88Cu;
    // 0x1df88c: 0x0  nop
    ctx->pc = 0x1df88cu;
    // NOP
    ctx->pc = 0x1df890u;
}
