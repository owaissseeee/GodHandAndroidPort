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

// Function: func_00146EF0
// Address: 0x146ef0 - 0x146f18
void func_00146EF0_0x146ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146EF0_0x146ef0");
#endif

    switch (ctx->pc) {
        case 0x146f04u: goto label_146f04;
        default: break;
    }

    ctx->pc = 0x146ef0u;

    // 0x146ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146efc: 0xc04f172  jal         func_13C5C8
    ctx->pc = 0x146EFCu;
    SET_GPR_U32(ctx, 31, 0x146F04u);
    ctx->pc = 0x146F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146EFCu;
    // 0x146f00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5C8u, 0x146EFCu, 0x146F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F04u;
label_146f04:
    // 0x146f04: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x146f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x146f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146f10: 0x3e00008  jr          $ra
    ctx->pc = 0x146F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F10u;
        // 0x146f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F18u;
}
