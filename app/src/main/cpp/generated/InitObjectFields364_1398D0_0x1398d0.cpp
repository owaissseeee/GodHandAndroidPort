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

// Function: InitObjectFields364_1398D0
// Address: 0x1398d0 - 0x139910
void InitObjectFields364_1398D0_0x1398d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectFields364_1398D0_0x1398d0");
#endif

    switch (ctx->pc) {
        case 0x1398e4u: goto label_1398e4;
        default: break;
    }

    ctx->pc = 0x1398d0u;

    // 0x1398d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1398d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1398d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1398d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1398d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1398d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1398dc: 0xc04e02a  jal         func_1380A8
    ctx->pc = 0x1398DCu;
    SET_GPR_U32(ctx, 31, 0x1398E4u);
    ctx->pc = 0x1398E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1398DCu;
    // 0x1398e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1380A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1380A8u, 0x1398DCu, 0x1398E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398E4u;
label_1398e4:
    // 0x1398e4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1398e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1398e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1398e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398ec: 0x2463d930  addiu       $v1, $v1, -0x26D0
    ctx->pc = 0x1398ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957360));
    // 0x1398f0: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1398f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x1398f4: 0xae03035c  sw          $v1, 0x35C($s0)
    ctx->pc = 0x1398f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 3));
    // 0x1398f8: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x1398f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x1398fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1398fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139904: 0x3e00008  jr          $ra
    ctx->pc = 0x139904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139904u;
        // 0x139908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13990Cu;
    // 0x13990c: 0x0  nop
    ctx->pc = 0x13990cu;
    // NOP
    ctx->pc = 0x139910u;
}
