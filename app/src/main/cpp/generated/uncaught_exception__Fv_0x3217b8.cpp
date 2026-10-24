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

// Function: uncaught_exception__Fv
// Address: 0x3217b8 - 0x3217f0
void uncaught_exception__Fv_0x3217b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("uncaught_exception__Fv_0x3217b8");
#endif

    switch (ctx->pc) {
        case 0x3217c8u: goto label_3217c8;
        default: break;
    }

    ctx->pc = 0x3217b8u;

    // 0x3217b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3217b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3217bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3217bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3217c0: 0xc0c80d8  jal         func_320360
    ctx->pc = 0x3217C0u;
    SET_GPR_U32(ctx, 31, 0x3217C8u);
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x3217C0u, 0x3217C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3217C8u;
label_3217c8:
    // 0x3217c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3217c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3217cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3217CCu;
    {
        const bool branch_taken_0x3217cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217CCu;
        // 0x3217d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217cc) {
            ctx->pc = 0x3217DCu;
            goto label_3217dc;
        }
    }
    ctx->pc = 0x3217D4u;
    // 0x3217d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3217d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3217d8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x3217d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3217dc:
    // 0x3217dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3217dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3217e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3217e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3217e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3217E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3217E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217E4u;
        // 0x3217e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3217E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3217ECu;
    // 0x3217ec: 0x0  nop
    ctx->pc = 0x3217ecu;
    // NOP
    ctx->pc = 0x3217f0u;
}
