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

// Function: cNode_setTranslationFromWorld
// Address: 0x2b5fc8 - 0x2b6080
void cNode_setTranslationFromWorld_0x2b5fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNode_setTranslationFromWorld_0x2b5fc8");
#endif

    switch (ctx->pc) {
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6064u: goto label_2b6064;
        default: break;
    }

    ctx->pc = 0x2b5fc8u;

    // 0x2b5fc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b5fcc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b5fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2b5fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5fd4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b5fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2b5fd8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b5fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2b5fdc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b5fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b5fe0: 0xc0ad8dc  jal         func_2B6370
    ctx->pc = 0x2B5FE0u;
    SET_GPR_U32(ctx, 31, 0x2B5FE8u);
    ctx->pc = 0x2B5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FE0u;
    // 0x2b5fe4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6370u, 0x2B5FE0u, 0x2B5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FE8u;
label_2b5fe8:
    // 0x2b5fe8: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2B5FE8u;
    SET_GPR_U32(ctx, 31, 0x2B5FF0u);
    ctx->pc = 0x2B5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FE8u;
    // 0x2b5fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2B5FE8u, 0x2B5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FF0u;
label_2b5ff0:
    // 0x2b5ff0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5FF0u;
    {
        const bool branch_taken_0x2b5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ff0) {
            ctx->pc = 0x2B6014u;
            goto label_2b6014;
        }
    }
    ctx->pc = 0x2B5FF8u;
    // 0x2b5ff8: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2B5FF8u;
    SET_GPR_U32(ctx, 31, 0x2B6000u);
    ctx->pc = 0x2B5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FF8u;
    // 0x2b5ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2B5FF8u, 0x2B6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6000u;
label_2b6000:
    // 0x2b6000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6004: 0xc051d5a  jal         func_147568
    ctx->pc = 0x2B6004u;
    SET_GPR_U32(ctx, 31, 0x2B600Cu);
    ctx->pc = 0x2B6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6004u;
    // 0x2b6008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x2B6004u, 0x2B600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B600Cu;
label_2b600c:
    // 0x2b600c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B600Cu;
    {
        const bool branch_taken_0x2b600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B600Cu;
        // 0x2b6010: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b600c) {
            ctx->pc = 0x2B6038u;
            goto label_2b6038;
        }
    }
    ctx->pc = 0x2B6014u;
label_2b6014:
    // 0x2b6014: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2b6014u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b6018: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2b6018u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b601c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2b601cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2b6020: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2b6020u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2b6024: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2b6024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6028: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x2b6028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b602c: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x2b602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2b6030: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x2b6030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2b6034: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2b6034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2b6038:
    // 0x2b6038: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2b6038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b603c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2b603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6048: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2B6048u;
    SET_GPR_U32(ctx, 31, 0x2B6050u);
    ctx->pc = 0x2B604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6048u;
    // 0x2b604c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2B6048u, 0x2B6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6050u;
label_2b6050:
    // 0x2b6050: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2b6050u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6054: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2b6054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b605c: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2B605Cu;
    SET_GPR_U32(ctx, 31, 0x2B6064u);
    ctx->pc = 0x2B6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B605Cu;
    // 0x2b6060: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2B605Cu, 0x2B6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6064u;
label_2b6064:
    // 0x2b6064: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b6064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b6068: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b6068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b606c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b606cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b6070: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b6070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b6074: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6074u;
        // 0x2b6078: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B607Cu;
    // 0x2b607c: 0x0  nop
    ctx->pc = 0x2b607cu;
    // NOP
    ctx->pc = 0x2b6080u;
}
