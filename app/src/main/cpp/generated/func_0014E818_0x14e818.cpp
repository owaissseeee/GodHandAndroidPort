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

// Function: func_0014E818
// Address: 0x14e818 - 0x14e8d8
void func_0014E818_0x14e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014E818_0x14e818");
#endif

    switch (ctx->pc) {
        case 0x14e860u: goto label_14e860;
        case 0x14e86cu: goto label_14e86c;
        case 0x14e8a8u: goto label_14e8a8;
        default: break;
    }

    ctx->pc = 0x14e818u;

    // 0x14e818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e81c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14e820: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x14e820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14e824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e82c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14e82cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14e830: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x14e830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14e834: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x14e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14e838: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x14e838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14e83c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x14e83cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e840: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14e840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14e844: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x14e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e848: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e84c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14e84cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e850: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x14e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14e854: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x14e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14e858: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x14E858u;
    SET_GPR_U32(ctx, 31, 0x14E860u);
    ctx->pc = 0x14E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E858u;
    // 0x14e85c: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x14E858u, 0x14E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E860u;
label_14e860:
    // 0x14e860: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x14e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14e864: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x14E864u;
    SET_GPR_U32(ctx, 31, 0x14E86Cu);
    ctx->pc = 0x14E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E864u;
    // 0x14e868: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x14E864u, 0x14E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E86Cu;
label_14e86c:
    // 0x14e86c: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x14e86cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x14e870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14e870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e874: 0x0  nop
    ctx->pc = 0x14e874u;
    // NOP
    // 0x14e878: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x14E878u;
    {
        const bool branch_taken_0x14e878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e878) {
            ctx->pc = 0x14E87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E878u;
            // 0x14e87c: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E898u;
            goto label_14e898;
        }
    }
    ctx->pc = 0x14E880u;
    // 0x14e880: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14e880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e884: 0x0  nop
    ctx->pc = 0x14e884u;
    // NOP
    // 0x14e888: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14E888u;
    {
        const bool branch_taken_0x14e888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E888u;
        // 0x14e88c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e888) {
            ctx->pc = 0x14E894u;
            goto label_14e894;
        }
    }
    ctx->pc = 0x14E890u;
    // 0x14e890: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x14e890u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_14e894:
    // 0x14e894: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x14e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e898:
    // 0x14e898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e89c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x14e89cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x14e8a0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x14E8A0u;
    SET_GPR_U32(ctx, 31, 0x14E8A8u);
    ctx->pc = 0x14E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8A0u;
    // 0x14e8a4: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x14E8A0u, 0x14E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8A8u;
label_14e8a8:
    // 0x14e8a8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x14e8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x14e8ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14e8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e8b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e8b4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8B8u;
        // 0x14e8bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E8C0u;
    // 0x14e8c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14e8c4: 0x0  nop
    ctx->pc = 0x14e8c4u;
    // NOP
    // 0x14e8c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e8cc: 0x0  nop
    ctx->pc = 0x14e8ccu;
    // NOP
    // 0x14e8d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e8d4: 0x0  nop
    ctx->pc = 0x14e8d4u;
    // NOP
    ctx->pc = 0x14e8d8u;
}
