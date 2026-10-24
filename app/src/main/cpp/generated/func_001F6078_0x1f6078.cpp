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

// Function: func_001F6078
// Address: 0x1f6078 - 0x1f60d8
void func_001F6078_0x1f6078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6078_0x1f6078");
#endif

    switch (ctx->pc) {
        case 0x1f60acu: goto label_1f60ac;
        case 0x1f60c0u: goto label_1f60c0;
        default: break;
    }

    ctx->pc = 0x1f6078u;

    // 0x1f6078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f607c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f6080: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f6080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f6084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f6088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f608c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6090: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1f6090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1f6094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6098: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1f609c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1f609cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f60a0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1f60a4: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1F60A4u;
    SET_GPR_U32(ctx, 31, 0x1F60ACu);
    ctx->pc = 0x1F60A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60A4u;
    // 0x1f60a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1F60A4u, 0x1F60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60ACu;
label_1f60ac:
    // 0x1f60ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f60acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f60b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f60b4: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x1f60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1f60b8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1F60B8u;
    SET_GPR_U32(ctx, 31, 0x1F60C0u);
    ctx->pc = 0x1F60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60B8u;
    // 0x1f60bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1F60B8u, 0x1F60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60C0u;
label_1f60c0:
    // 0x1f60c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f60c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f60c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f60c8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1f60c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f60cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f60ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f60d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F60D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60D0u;
        // 0x1f60d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F60D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F60D8u;
}
