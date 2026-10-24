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

// Function: func_002CF298
// Address: 0x2cf298 - 0x2cf2d0
void func_002CF298_0x2cf298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CF298_0x2cf298");
#endif

    switch (ctx->pc) {
        case 0x2cf2acu: goto label_2cf2ac;
        default: break;
    }

    ctx->pc = 0x2cf298u;

    // 0x2cf298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf29c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf2a4: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x2CF2A4u;
    SET_GPR_U32(ctx, 31, 0x2CF2ACu);
    ctx->pc = 0x2CF2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF2A4u;
    // 0x2cf2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x2CF2A4u, 0x2CF2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2ACu;
label_2cf2ac:
    // 0x2cf2ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf2b0: 0x50430002  beql        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF2B0u;
    {
        const bool branch_taken_0x2cf2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf2b0) {
            ctx->pc = 0x2CF2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF2B0u;
            // 0x2cf2b4: 0x8602002e  lh          $v0, 0x2E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF2BCu;
            goto label_2cf2bc;
        }
    }
    ctx->pc = 0x2CF2B8u;
    // 0x2cf2b8: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x2cf2b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_2cf2bc:
    // 0x2cf2bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2C4u;
        // 0x2cf2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF2CCu;
    // 0x2cf2cc: 0x0  nop
    ctx->pc = 0x2cf2ccu;
    // NOP
    ctx->pc = 0x2cf2d0u;
}
