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

// Function: func_002B6080
// Address: 0x2b6080 - 0x2b60d0
void func_002B6080_0x2b6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6080_0x2b6080");
#endif

    switch (ctx->pc) {
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60b0u: goto label_2b60b0;
        default: break;
    }

    ctx->pc = 0x2b6080u;

    // 0x2b6080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6084: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b6084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b6088: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b6088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b608c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b608cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6098: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b609c: 0xc0ad908  jal         func_2B6420
    ctx->pc = 0x2B609Cu;
    SET_GPR_U32(ctx, 31, 0x2B60A4u);
    ctx->pc = 0x2B60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B609Cu;
    // 0x2b60a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6420u, 0x2B609Cu, 0x2B60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60A4u;
label_2b60a4:
    // 0x2b60a4: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x2b60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2b60a8: 0xc052058  jal         func_148160
    ctx->pc = 0x2B60A8u;
    SET_GPR_U32(ctx, 31, 0x2B60B0u);
    ctx->pc = 0x2B60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60A8u;
    // 0x2b60ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148160u, 0x2B60A8u, 0x2B60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60B0u;
label_2b60b0:
    // 0x2b60b0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2b60b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b60b4: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b60b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b60b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b60b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b60bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b60c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b60c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b60c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b60c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b60c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B60C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60C8u;
        // 0x2b60cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B60D0u;
}
