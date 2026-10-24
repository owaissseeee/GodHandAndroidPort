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

// Function: func_002BB3F0
// Address: 0x2bb3f0 - 0x2bb488
void func_002BB3F0_0x2bb3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB3F0_0x2bb3f0");
#endif

    switch (ctx->pc) {
        case 0x2bb454u: goto label_2bb454;
        default: break;
    }

    ctx->pc = 0x2bb3f0u;

    // 0x2bb3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bb3f4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2bb3f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bb3f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2bb3f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bb3fc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2bb3fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2bb400: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bb404: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2bb404u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2bb408: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bb408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb40c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2bb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb410: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bb410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb414: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2bb414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb418: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2bb418u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb41c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bb41cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb420: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bb420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb424: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2bb424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb428: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bb428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb42c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bb42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb430: 0x13a30006  beq         $sp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB430u;
    {
        const bool branch_taken_0x2bb430 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB430u;
        // 0x2bb434: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb430) {
            ctx->pc = 0x2BB44Cu;
            goto label_2bb44c;
        }
    }
    ctx->pc = 0x2BB438u;
    // 0x2bb438: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb43c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2bb43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb440: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bb440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bb444: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bb444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bb448: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2bb448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bb44c:
    // 0x2bb44c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BB44Cu;
    SET_GPR_U32(ctx, 31, 0x2BB454u);
    ctx->pc = 0x2BB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB44Cu;
    // 0x2bb450: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BB44Cu, 0x2BB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB454u;
label_2bb454:
    // 0x2bb454: 0x4614a840  add.s       $f1, $f21, $f20
    ctx->pc = 0x2bb454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2bb458: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bb458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bb45c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bb45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb460: 0x0  nop
    ctx->pc = 0x2bb460u;
    // NOP
    // 0x2bb464: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB464u;
    {
        const bool branch_taken_0x2bb464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB464u;
        // 0x2bb468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb464) {
            ctx->pc = 0x2BB470u;
            goto label_2bb470;
        }
    }
    ctx->pc = 0x2BB46Cu;
    // 0x2bb46c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb470:
    // 0x2bb470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb474: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2bb474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bb478: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2bb478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bb47c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB47Cu;
        // 0x2bb480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB484u;
    // 0x2bb484: 0x0  nop
    ctx->pc = 0x2bb484u;
    // NOP
    ctx->pc = 0x2bb488u;
}
