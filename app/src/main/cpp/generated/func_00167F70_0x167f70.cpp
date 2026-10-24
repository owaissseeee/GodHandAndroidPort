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

// Function: func_00167F70
// Address: 0x167f70 - 0x167fa8
void func_00167F70_0x167f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167F70_0x167f70");
#endif

    switch (ctx->pc) {
        case 0x167f84u: goto label_167f84;
        default: break;
    }

    ctx->pc = 0x167f70u;

    // 0x167f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167f74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167f7c: 0xc058534  jal         func_1614D0
    ctx->pc = 0x167F7Cu;
    SET_GPR_U32(ctx, 31, 0x167F84u);
    ctx->pc = 0x167F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F7Cu;
    // 0x167f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614D0u, 0x167F7Cu, 0x167F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F84u;
label_167f84:
    // 0x167f84: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x167f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x167f88: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x167f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x167f8c: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x167f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x167f90: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x167f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x167f94: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x167f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x167f98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x167FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FA0u;
        // 0x167fa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167FA8u;
}
