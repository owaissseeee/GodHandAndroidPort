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

// Function: cNode_setTranslationFromParent
// Address: 0x2b5f28 - 0x2b5fc8
void cNode_setTranslationFromParent_0x2b5f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNode_setTranslationFromParent_0x2b5f28");
#endif

    switch (ctx->pc) {
        case 0x2b5f48u: goto label_2b5f48;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f68u: goto label_2b5f68;
        case 0x2b5fb0u: goto label_2b5fb0;
        default: break;
    }

    ctx->pc = 0x2b5f28u;

    // 0x2b5f28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b5f2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b5f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b5f30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b5f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f38: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b5f3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b5f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b5f40: 0xc0ad8dc  jal         func_2B6370
    ctx->pc = 0x2B5F40u;
    SET_GPR_U32(ctx, 31, 0x2B5F48u);
    ctx->pc = 0x2B5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F40u;
    // 0x2b5f44: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6370u, 0x2B5F40u, 0x2B5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F48u;
label_2b5f48:
    // 0x2b5f48: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b5f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b5f4c: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F54u);
    ctx->pc = 0x2B5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F4Cu;
    // 0x2b5f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2B5F4Cu, 0x2B5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F54u;
label_2b5f54:
    // 0x2b5f54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5F54u;
    {
        const bool branch_taken_0x2b5f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F54u;
        // 0x2b5f58: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f54) {
            ctx->pc = 0x2B5F84u;
            goto label_2b5f84;
        }
    }
    ctx->pc = 0x2B5F5Cu;
    // 0x2b5f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b5f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f60: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2B5F60u;
    SET_GPR_U32(ctx, 31, 0x2B5F68u);
    ctx->pc = 0x2B5F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F60u;
    // 0x2b5f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2B5F60u, 0x2B5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F68u;
label_2b5f68:
    // 0x2b5f68: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5F68u;
    {
        const bool branch_taken_0x2b5f68 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F68u;
        // 0x2b5f6c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f68) {
            ctx->pc = 0x2B5F84u;
            goto label_2b5f84;
        }
    }
    ctx->pc = 0x2B5F70u;
    // 0x2b5f70: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2b5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5f74: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2b5f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5f78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b5f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b5f7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b5f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b5f80: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2b5f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2b5f84:
    // 0x2b5f84: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2b5f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b5f88: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2b5f88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b5f8c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2b5f8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5f90: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b5f90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b5f94: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2b5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b5f98: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5f9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2b5f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5fa0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2b5fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b5fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5fa8: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x2B5FA8u;
    SET_GPR_U32(ctx, 31, 0x2B5FB0u);
    ctx->pc = 0x2B5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FA8u;
    // 0x2b5fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x2B5FA8u, 0x2B5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FB0u;
label_2b5fb0:
    // 0x2b5fb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b5fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5fb4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b5fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5fb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b5fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5fbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b5fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FC0u;
        // 0x2b5fc4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5FC8u;
}
