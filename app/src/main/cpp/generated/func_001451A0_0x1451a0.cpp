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

// Function: func_001451A0
// Address: 0x1451a0 - 0x1451e0
void func_001451A0_0x1451a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001451A0_0x1451a0");
#endif

    switch (ctx->pc) {
        case 0x1451bcu: goto label_1451bc;
        default: break;
    }

    ctx->pc = 0x1451a0u;

    // 0x1451a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1451a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1451a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1451a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1451a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1451ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1451acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451b0: 0x260403fa  addiu       $a0, $s0, 0x3FA
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1018));
    // 0x1451b4: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x1451B4u;
    SET_GPR_U32(ctx, 31, 0x1451BCu);
    ctx->pc = 0x1451B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1451B4u;
    // 0x1451b8: 0x860603b2  lh          $a2, 0x3B2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 946)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x1451B4u, 0x1451BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451BCu;
label_1451bc:
    // 0x1451bc: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1451bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1451c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1451c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1451c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1451c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1451c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1451cc: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1451ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x1451d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1451d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1451D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451D4u;
        // 0x1451d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451DCu;
    // 0x1451dc: 0x0  nop
    ctx->pc = 0x1451dcu;
    // NOP
    ctx->pc = 0x1451e0u;
}
