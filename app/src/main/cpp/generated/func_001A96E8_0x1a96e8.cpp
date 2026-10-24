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

// Function: func_001A96E8
// Address: 0x1a96e8 - 0x1a9720
void func_001A96E8_0x1a96e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A96E8_0x1a96e8");
#endif

    switch (ctx->pc) {
        case 0x1a96fcu: goto label_1a96fc;
        default: break;
    }

    ctx->pc = 0x1a96e8u;

    // 0x1a96e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a96e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a96ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a96f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a96f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a96f4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A96F4u;
    SET_GPR_U32(ctx, 31, 0x1A96FCu);
    ctx->pc = 0x1A96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96F4u;
    // 0x1a96f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A96F4u, 0x1A96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96FCu;
label_1a96fc:
    // 0x1a96fc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1a96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1a9700: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1a9700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1a9704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a970c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a970cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9710: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1a9710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1a9714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9718: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9718u;
        // 0x1a971c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9720u;
}
