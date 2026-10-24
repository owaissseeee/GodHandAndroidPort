#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A680
// Address: 0x79a680 - 0x79a6b8
void func_0079A680_0x79a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A680_0x79a680");
#endif

    switch (ctx->pc) {
        case 0x79a6acu: goto label_79a6ac;
        default: break;
    }

    ctx->pc = 0x79a680u;

    // 0x79a680: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79a684: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79a688: 0x8c827a8c  lw          $v0, 0x7A8C($a0)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79a68c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a690: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79a694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a698: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a69c: 0x8c652f84  lw          $a1, 0x2F84($v1)
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a6a0: 0xac827a8c  sw          $v0, 0x7A8C($a0)
    ctx->pc = 0x79a6a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A8Cu, _value); } while (0);
    // 0x79a6a4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A6A4u;
    SET_GPR_U32(ctx, 31, 0x79A6ACu);
    ctx->pc = 0x79A6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6A4u;
    // 0x79a6a8: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A6A4u, 0x79A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6ACu;
label_79a6ac:
    // 0x79a6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B0u;
        // 0x79a6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6B8u;
}
} // namespace gh_r206
