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

// Function: StoreVecFromFieldB0_2B6160
// Address: 0x2b6160 - 0x2b61b0
void StoreVecFromFieldB0_2B6160_0x2b6160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreVecFromFieldB0_2B6160_0x2b6160");
#endif

    switch (ctx->pc) {
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6190u: goto label_2b6190;
        default: break;
    }

    ctx->pc = 0x2b6160u;

    // 0x2b6160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b6164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b6168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b6168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b616c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b616cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6178: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b6178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b617c: 0xc0ad908  jal         func_2B6420
    ctx->pc = 0x2B617Cu;
    SET_GPR_U32(ctx, 31, 0x2B6184u);
    ctx->pc = 0x2B6180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B617Cu;
    // 0x2b6180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6420u, 0x2B617Cu, 0x2B6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6184u;
label_2b6184:
    // 0x2b6184: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x2b6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2b6188: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2B6188u;
    SET_GPR_U32(ctx, 31, 0x2B6190u);
    ctx->pc = 0x2B618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6188u;
    // 0x2b618c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2B6188u, 0x2B6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6190u;
label_2b6190:
    // 0x2b6190: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2b6190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6194: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b6194u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6198: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b6198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b619c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b619cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b61a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b61a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b61a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b61a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b61a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B61A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61A8u;
        // 0x2b61ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B61A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B61B0u;
}
