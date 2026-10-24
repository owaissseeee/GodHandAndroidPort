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

// Function: func_00383848
// Address: 0x383848 - 0x383878
void func_00383848_0x383848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383848_0x383848");
#endif

    switch (ctx->pc) {
        case 0x383860u: goto label_383860;
        default: break;
    }

    ctx->pc = 0x383848u;

    // 0x383848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38384c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x383850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383858: 0xc0dff9e  jal         func_37FE78
    ctx->pc = 0x383858u;
    SET_GPR_U32(ctx, 31, 0x383860u);
    ctx->pc = 0x38385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383858u;
    // 0x38385c: 0x26050370  addiu       $a1, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FE78u, 0x383858u, 0x383860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383860u;
label_383860:
    // 0x383860: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383860u;
    {
        const bool branch_taken_0x383860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383860) {
            ctx->pc = 0x383864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383860u;
            // 0x383864: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383868u;
            goto label_383868;
        }
    }
    ctx->pc = 0x383868u;
label_383868:
    // 0x383868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x383868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38386c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38386cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383870: 0x3e00008  jr          $ra
    ctx->pc = 0x383870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383870u;
        // 0x383874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383878u;
}
