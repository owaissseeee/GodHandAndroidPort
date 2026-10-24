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

// Function: func_002D30E0
// Address: 0x2d30e0 - 0x2d3110
void func_002D30E0_0x2d30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D30E0_0x2d30e0");
#endif

    switch (ctx->pc) {
        case 0x2d3100u: goto label_2d3100;
        default: break;
    }

    ctx->pc = 0x2d30e0u;

    // 0x2d30e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d30e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d30e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d30e8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d30e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d30ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d30f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d30f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30f8: 0xc0b4bde  jal         func_2D2F78
    ctx->pc = 0x2D30F8u;
    SET_GPR_U32(ctx, 31, 0x2D3100u);
    ctx->pc = 0x2D30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30F8u;
    // 0x2d30fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F78u, 0x2D30F8u, 0x2D3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3100u;
label_2d3100:
    // 0x2d3100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3104: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3104u;
        // 0x2d3108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D310Cu;
    // 0x2d310c: 0x0  nop
    ctx->pc = 0x2d310cu;
    // NOP
    ctx->pc = 0x2d3110u;
}
