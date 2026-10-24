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
// Function: func_0079A6B8
// Address: 0x79a6b8 - 0x79a6f8
void func_0079A6B8_0x79a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A6B8_0x79a6b8");
#endif

    switch (ctx->pc) {
        case 0x79a6e8u: goto label_79a6e8;
        default: break;
    }

    ctx->pc = 0x79a6b8u;

    // 0x79a6b8: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x79a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x79a6bc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79a6c0: 0x8cc37a8c  lw          $v1, 0x7A8C($a2)
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79a6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a6cc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x79a6d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a6d8: 0x8c852f84  lw          $a1, 0x2F84($a0)
    ctx->pc = 0x79a6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
    // 0x79a6dc: 0xacc37a8c  sw          $v1, 0x7A8C($a2)
    ctx->pc = 0x79a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 3));
    // 0x79a6e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A6E0u;
    SET_GPR_U32(ctx, 31, 0x79A6E8u);
    ctx->pc = 0x79A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E0u;
    // 0x79a6e4: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A6E0u, 0x79A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E8u;
label_79a6e8:
    // 0x79a6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ECu;
        // 0x79a6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6F4u;
    // 0x79a6f4: 0x0  nop
    ctx->pc = 0x79a6f4u;
    // NOP
    ctx->pc = 0x79a6f8u;
}
} // namespace gh_r206
