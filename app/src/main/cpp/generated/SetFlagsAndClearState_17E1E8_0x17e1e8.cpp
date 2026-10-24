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

// Function: SetFlagsAndClearState_17E1E8
// Address: 0x17e1e8 - 0x17e230
void SetFlagsAndClearState_17E1E8_0x17e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagsAndClearState_17E1E8_0x17e1e8");
#endif

    switch (ctx->pc) {
        case 0x17e1fcu: goto label_17e1fc;
        default: break;
    }

    ctx->pc = 0x17e1e8u;

    // 0x17e1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e1ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e1f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e1f4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17E1F4u;
    SET_GPR_U32(ctx, 31, 0x17E1FCu);
    ctx->pc = 0x17E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1F4u;
    // 0x17e1f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17E1F4u, 0x17E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1FCu;
label_17e1fc:
    // 0x17e1fc: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x17e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x17e200: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x17e200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x17e204: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x17e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x17e208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e20c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17e20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17e210: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x17e210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e214: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17e218: 0xae040250  sw          $a0, 0x250($s0)
    ctx->pc = 0x17e218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
    // 0x17e21c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x17e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x17e220: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e228: 0x3e00008  jr          $ra
    ctx->pc = 0x17E228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E228u;
        // 0x17e22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E230u;
}
