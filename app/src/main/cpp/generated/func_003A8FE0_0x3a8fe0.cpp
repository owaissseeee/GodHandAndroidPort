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

// Function: func_003A8FE0
// Address: 0x3a8fe0 - 0x3a9018
void func_003A8FE0_0x3a8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A8FE0_0x3a8fe0");
#endif

    switch (ctx->pc) {
        case 0x3a9000u: goto label_3a9000;
        default: break;
    }

    ctx->pc = 0x3a8fe0u;

    // 0x3a8fe0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a8fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8fe4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a8fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a8fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a8fec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a8fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ff0: 0x8c64a62c  lw          $a0, -0x59D4($v1)
    ctx->pc = 0x3a8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a8ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a8ff8: 0xc0ea03a  jal         func_3A80E8
    ctx->pc = 0x3A8FF8u;
    SET_GPR_U32(ctx, 31, 0x3A9000u);
    ctx->pc = 0x3A8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FF8u;
    // 0x3a8ffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80E8u, 0x3A8FF8u, 0x3A9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9000u;
label_3a9000:
    // 0x3a9000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9004: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9004u;
        // 0x3a9008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A900Cu;
    // 0x3a900c: 0x0  nop
    ctx->pc = 0x3a900cu;
    // NOP
    // 0x3a9010: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a9014: 0x0  nop
    ctx->pc = 0x3a9014u;
    // NOP
    ctx->pc = 0x3a9018u;
}
