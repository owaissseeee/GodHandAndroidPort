#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: __5cR508
// Address: 0x799288 - 0x7992c8
void ps2___5cR508_0x799288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR508_0x799288");
#endif

    switch (ctx->pc) {
        case 0x7992b0u: goto label_7992b0;
        default: break;
    }

    ctx->pc = 0x799288u;

    // 0x799288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79928c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799290: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799294: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79929c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992a0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992a4: 0x24a59500  addiu       $a1, $a1, -0x6B00
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939904));
    // 0x7992a8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992A8u;
    SET_GPR_U32(ctx, 31, 0x7992B0u);
    ctx->pc = 0x7992ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A8u;
    // 0x7992ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992A8u, 0x7992B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B0u;
label_7992b0:
    // 0x7992b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7992BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992BCu;
        // 0x7992c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992C4u;
    // 0x7992c4: 0x0  nop
    ctx->pc = 0x7992c4u;
    // NOP
    ctx->pc = 0x7992c8u;
}
} // namespace gh_r508
