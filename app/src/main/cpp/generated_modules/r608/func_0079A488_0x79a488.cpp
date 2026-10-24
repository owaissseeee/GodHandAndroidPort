#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_0079A488
// Address: 0x79a488 - 0x79a4d0
void func_0079A488_0x79a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A488_0x79a488");
#endif

    switch (ctx->pc) {
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4c0u: goto label_79a4c0;
        default: break;
    }

    ctx->pc = 0x79a488u;

    // 0x79a488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a48c: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x79a490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a498: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a4a0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a4a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4ac: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A4ACu;
    SET_GPR_U32(ctx, 31, 0x79A4B4u);
    ctx->pc = 0x79A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4ACu;
    // 0x79a4b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A4ACu, 0x79A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B4u;
label_79a4b4:
    // 0x79a4b4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a4b8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A4B8u;
    SET_GPR_U32(ctx, 31, 0x79A4C0u);
    ctx->pc = 0x79A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B8u;
    // 0x79a4bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A4B8u, 0x79A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C0u;
label_79a4c0:
    // 0x79a4c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C8u;
        // 0x79a4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4D0u;
}
} // namespace gh_r608
