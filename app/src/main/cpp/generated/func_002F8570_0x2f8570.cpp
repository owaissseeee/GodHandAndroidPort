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

// Function: func_002F8570
// Address: 0x2f8570 - 0x2f8f30
void func_002F8570_0x2f8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F8570_0x2f8570");
#endif

    switch (ctx->pc) {
        case 0x2f85acu: goto label_2f85ac;
        case 0x2f8718u: goto label_2f8718;
        case 0x2f872cu: goto label_2f872c;
        case 0x2f8b28u: goto label_2f8b28;
        case 0x2f8b80u: goto label_2f8b80;
        case 0x2f8c08u: goto label_2f8c08;
        case 0x2f8ce0u: goto label_2f8ce0;
        case 0x2f8d44u: goto label_2f8d44;
        case 0x2f8e14u: goto label_2f8e14;
        case 0x2f8e30u: goto label_2f8e30;
        case 0x2f8e84u: goto label_2f8e84;
        case 0x2f8e94u: goto label_2f8e94;
        case 0x2f8ea0u: goto label_2f8ea0;
        case 0x2f8eb0u: goto label_2f8eb0;
        case 0x2f8ebcu: goto label_2f8ebc;
        case 0x2f8ed0u: goto label_2f8ed0;
        case 0x2f8ee8u: goto label_2f8ee8;
        default: break;
    }

    ctx->pc = 0x2f8570u;

    // 0x2f8570: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2f8570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2f8574: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2f8574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2f8578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f8578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f857c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2f857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2f8580: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2f8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2f8584: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2f8584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x2f8588: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2f8588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x2f858c: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2f858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x2f8590: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2f8590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x2f8594: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x2f8594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x2f8598: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x2f8598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x2f859c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2f859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2f85a0: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2f85a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2f85a4: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F85A4u;
    SET_GPR_U32(ctx, 31, 0x2F85ACu);
    ctx->pc = 0x2F85A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F85A4u;
    // 0x2f85a8: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F85A4u, 0x2F85ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85ACu;
label_2f85ac:
    // 0x2f85ac: 0x9222031b  lbu         $v0, 0x31B($s1)
    ctx->pc = 0x2f85acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 795)));
    // 0x2f85b0: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x2F85B0u;
    {
        const bool branch_taken_0x2f85b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85B0u;
        // 0x2f85b4: 0x26240319  addiu       $a0, $s1, 0x319 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 793));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85b0) {
            ctx->pc = 0x2F8AF8u;
            goto label_2f8af8;
        }
    }
    ctx->pc = 0x2F85B8u;
    // 0x2f85b8: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x2f85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x2f85bc: 0xda240330  lqc2        $vf4, 0x330($s1)
    ctx->pc = 0x2f85bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x2f85c0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2f85c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f85c4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f85c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f85c8: 0xfa240330  sqc2        $vf4, 0x330($s1)
    ctx->pc = 0x2f85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 816), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f85cc: 0xc6210340  lwc1        $f1, 0x340($s1)
    ctx->pc = 0x2f85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f85d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f85d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f85d4: 0x0  nop
    ctx->pc = 0x2f85d4u;
    // NOP
    // 0x2f85d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f85d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f85dc: 0x0  nop
    ctx->pc = 0x2f85dcu;
    // NOP
    // 0x2f85e0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2F85E0u;
    {
        const bool branch_taken_0x2f85e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f85e0) {
            ctx->pc = 0x2F85E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F85E0u;
            // 0x2f85e4: 0xc6210344  lwc1        $f1, 0x344($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8608u;
            goto label_2f8608;
        }
    }
    ctx->pc = 0x2F85E8u;
    // 0x2f85e8: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x2f85e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f85ec: 0xc6210350  lwc1        $f1, 0x350($s1)
    ctx->pc = 0x2f85ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f85f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f85f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f85f4: 0x0  nop
    ctx->pc = 0x2f85f4u;
    // NOP
    // 0x2f85f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F85F8u;
    {
        const bool branch_taken_0x2f85f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f85f8) {
            ctx->pc = 0x2F85FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F85F8u;
            // 0x2f85fc: 0xe6210330  swc1        $f1, 0x330($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8600u;
            goto label_2f8600;
        }
    }
    ctx->pc = 0x2F8600u;
label_2f8600:
    // 0x2f8600: 0xc6210344  lwc1        $f1, 0x344($s1)
    ctx->pc = 0x2f8600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f8604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8608:
    // 0x2f8608: 0x0  nop
    ctx->pc = 0x2f8608u;
    // NOP
    // 0x2f860c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f860cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8610: 0x0  nop
    ctx->pc = 0x2f8610u;
    // NOP
    // 0x2f8614: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8614u;
    {
        const bool branch_taken_0x2f8614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8614) {
            ctx->pc = 0x2F8618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8614u;
            // 0x2f8618: 0xc6210348  lwc1        $f1, 0x348($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8638u;
            goto label_2f8638;
        }
    }
    ctx->pc = 0x2F861Cu;
    // 0x2f861c: 0xc6200334  lwc1        $f0, 0x334($s1)
    ctx->pc = 0x2f861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8620: 0xc6210354  lwc1        $f1, 0x354($s1)
    ctx->pc = 0x2f8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f8624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8628: 0x0  nop
    ctx->pc = 0x2f8628u;
    // NOP
    // 0x2f862c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F862Cu;
    {
        const bool branch_taken_0x2f862c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f862c) {
            ctx->pc = 0x2F8630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F862Cu;
            // 0x2f8630: 0xe6210334  swc1        $f1, 0x334($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8634u;
            goto label_2f8634;
        }
    }
    ctx->pc = 0x2F8634u;
label_2f8634:
    // 0x2f8634: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x2f8634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8638:
    // 0x2f8638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f8638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f863c: 0x0  nop
    ctx->pc = 0x2f863cu;
    // NOP
    // 0x2f8640: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f8640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8644: 0x0  nop
    ctx->pc = 0x2f8644u;
    // NOP
    // 0x2f8648: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2F8648u;
    {
        const bool branch_taken_0x2f8648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8648) {
            ctx->pc = 0x2F864Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8648u;
            // 0x2f864c: 0xc6210340  lwc1        $f1, 0x340($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8670u;
            goto label_2f8670;
        }
    }
    ctx->pc = 0x2F8650u;
    // 0x2f8650: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x2f8650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8654: 0xc6210358  lwc1        $f1, 0x358($s1)
    ctx->pc = 0x2f8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f8658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f865c: 0x0  nop
    ctx->pc = 0x2f865cu;
    // NOP
    // 0x2f8660: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8660u;
    {
        const bool branch_taken_0x2f8660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8660) {
            ctx->pc = 0x2F8664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8660u;
            // 0x2f8664: 0xe6210338  swc1        $f1, 0x338($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8668u;
            goto label_2f8668;
        }
    }
    ctx->pc = 0x2F8668u;
label_2f8668:
    // 0x2f8668: 0xc6210340  lwc1        $f1, 0x340($s1)
    ctx->pc = 0x2f8668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f866c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f866cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8670:
    // 0x2f8670: 0x0  nop
    ctx->pc = 0x2f8670u;
    // NOP
    // 0x2f8674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f8674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8678: 0x0  nop
    ctx->pc = 0x2f8678u;
    // NOP
    // 0x2f867c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2F867Cu;
    {
        const bool branch_taken_0x2f867c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f867c) {
            ctx->pc = 0x2F8680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F867Cu;
            // 0x2f8680: 0xc6210344  lwc1        $f1, 0x344($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F86A0u;
            goto label_2f86a0;
        }
    }
    ctx->pc = 0x2F8684u;
    // 0x2f8684: 0xc6200330  lwc1        $f0, 0x330($s1)
    ctx->pc = 0x2f8684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8688: 0xc6210350  lwc1        $f1, 0x350($s1)
    ctx->pc = 0x2f8688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f868c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f868cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8690: 0x0  nop
    ctx->pc = 0x2f8690u;
    // NOP
    // 0x2f8694: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8694u;
    {
        const bool branch_taken_0x2f8694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8694) {
            ctx->pc = 0x2F8698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8694u;
            // 0x2f8698: 0xe6210330  swc1        $f1, 0x330($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F869Cu;
            goto label_2f869c;
        }
    }
    ctx->pc = 0x2F869Cu;
label_2f869c:
    // 0x2f869c: 0xc6210344  lwc1        $f1, 0x344($s1)
    ctx->pc = 0x2f869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f86a0:
    // 0x2f86a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f86a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f86a4: 0x0  nop
    ctx->pc = 0x2f86a4u;
    // NOP
    // 0x2f86a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f86a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f86ac: 0x0  nop
    ctx->pc = 0x2f86acu;
    // NOP
    // 0x2f86b0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2F86B0u;
    {
        const bool branch_taken_0x2f86b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f86b0) {
            ctx->pc = 0x2F86B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F86B0u;
            // 0x2f86b4: 0xc6210348  lwc1        $f1, 0x348($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F86D8u;
            goto label_2f86d8;
        }
    }
    ctx->pc = 0x2F86B8u;
    // 0x2f86b8: 0xc6200334  lwc1        $f0, 0x334($s1)
    ctx->pc = 0x2f86b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f86bc: 0xc6210354  lwc1        $f1, 0x354($s1)
    ctx->pc = 0x2f86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f86c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f86c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f86c4: 0x0  nop
    ctx->pc = 0x2f86c4u;
    // NOP
    // 0x2f86c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F86C8u;
    {
        const bool branch_taken_0x2f86c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f86c8) {
            ctx->pc = 0x2F86CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F86C8u;
            // 0x2f86cc: 0xe6210334  swc1        $f1, 0x334($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F86D0u;
            goto label_2f86d0;
        }
    }
    ctx->pc = 0x2F86D0u;
label_2f86d0:
    // 0x2f86d0: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x2f86d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f86d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f86d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f86d8:
    // 0x2f86d8: 0x0  nop
    ctx->pc = 0x2f86d8u;
    // NOP
    // 0x2f86dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f86dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f86e0: 0x0  nop
    ctx->pc = 0x2f86e0u;
    // NOP
    // 0x2f86e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2F86E4u;
    {
        const bool branch_taken_0x2f86e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86E4u;
        // 0x2f86e8: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86e4) {
            ctx->pc = 0x2F8708u;
            goto label_2f8708;
        }
    }
    ctx->pc = 0x2F86ECu;
    // 0x2f86ec: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x2f86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f86f0: 0xc6210358  lwc1        $f1, 0x358($s1)
    ctx->pc = 0x2f86f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f86f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f86f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f86f8: 0x0  nop
    ctx->pc = 0x2f86f8u;
    // NOP
    // 0x2f86fc: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2F86FCu;
    {
        const bool branch_taken_0x2f86fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f86fc) {
            ctx->pc = 0x2F8700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F86FCu;
            // 0x2f8700: 0xe6210338  swc1        $f1, 0x338($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8708u;
            goto label_2f8708;
        }
    }
    ctx->pc = 0x2F8704u;
    // 0x2f8704: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x2f8704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_2f8708:
    // 0x2f8708: 0x26330350  addiu       $s3, $s1, 0x350
    ctx->pc = 0x2f8708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    // 0x2f870c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8710: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2F8710u;
    SET_GPR_U32(ctx, 31, 0x2F8718u);
    ctx->pc = 0x2F8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8710u;
    // 0x2f8714: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2F8710u, 0x2F8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8718u;
label_2f8718:
    // 0x2f8718: 0x26320330  addiu       $s2, $s1, 0x330
    ctx->pc = 0x2f8718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x2f871c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f8720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8724: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2F8724u;
    SET_GPR_U32(ctx, 31, 0x2F872Cu);
    ctx->pc = 0x2F8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8724u;
    // 0x2f8728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2F8724u, 0x2F872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F872Cu;
label_2f872c:
    // 0x2f872c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2f872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f8730: 0xc62302f0  lwc1        $f3, 0x2F0($s1)
    ctx->pc = 0x2f8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f8734: 0x0  nop
    ctx->pc = 0x2f8734u;
    // NOP
    // 0x2f8738: 0x0  nop
    ctx->pc = 0x2f8738u;
    // NOP
    // 0x2f873c: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x2f873cu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f8740: 0xc62202f4  lwc1        $f2, 0x2F4($s1)
    ctx->pc = 0x2f8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f8744: 0xc62502f8  lwc1        $f5, 0x2F8($s1)
    ctx->pc = 0x2f8744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f8748: 0xc62102fc  lwc1        $f1, 0x2FC($s1)
    ctx->pc = 0x2f8748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f874c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2f874cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2f8750: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8754: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2f8754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2f8758: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f8758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f875c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8760: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2f8760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2f8764: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x2f8764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2f8768: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2f8768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2f876c: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x2f876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x2f8770: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2f8770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2f8774: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2f8774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2f8778: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2f8778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2f877c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2f877cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2f8780: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2f8780u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2f8784: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2f8784u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2f8788: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2f8788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f878c: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2f878cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f8790: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2f8790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2f8794: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f8794u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8798: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f8798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2f879c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f879cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f87a0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f87a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f87a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f87a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f87a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f87a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f87ac: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2f87acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f87b0: 0x0  nop
    ctx->pc = 0x2f87b0u;
    // NOP
    // 0x2f87b4: 0x0  nop
    ctx->pc = 0x2f87b4u;
    // NOP
    // 0x2f87b8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2f87b8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2f87bc: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x2f87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f87c0: 0x0  nop
    ctx->pc = 0x2f87c0u;
    // NOP
    // 0x2f87c4: 0x0  nop
    ctx->pc = 0x2f87c4u;
    // NOP
    // 0x2f87c8: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2f87c8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[6]);
    // 0x2f87cc: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2f87ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2f87d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f87d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f87d4: 0xe467000c  swc1        $f7, 0xC($v1)
    ctx->pc = 0x2f87d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f87d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2f87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2f87dc: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2f87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f87e0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2f87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f87e4: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2f87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x2f87e8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2f87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f87ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f87ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f87f0: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f87f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f87f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f87f8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f87f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f87fc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f87fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8800: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2f8800u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[6]);
    // 0x2f8804: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8808: 0x0  nop
    ctx->pc = 0x2f8808u;
    // NOP
    // 0x2f880c: 0x0  nop
    ctx->pc = 0x2f880cu;
    // NOP
    // 0x2f8810: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2f8810u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2f8814: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x2f8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2f8818: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x2f8818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f881c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f881cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8820: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f8820u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8824: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8828: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f882c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8830: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x2f8830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2f8834: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2f8834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2f8838: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f8838u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f883c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f883cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2f8840: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8844: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2f8844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8848: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f884c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f884cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8850: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8854: 0x0  nop
    ctx->pc = 0x2f8854u;
    // NOP
    // 0x2f8858: 0x0  nop
    ctx->pc = 0x2f8858u;
    // NOP
    // 0x2f885c: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2f885cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2f8860: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2f8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2f8864: 0x0  nop
    ctx->pc = 0x2f8864u;
    // NOP
    // 0x2f8868: 0x0  nop
    ctx->pc = 0x2f8868u;
    // NOP
    // 0x2f886c: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2f886cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[6]);
    // 0x2f8870: 0xe46100e0  swc1        $f1, 0xE0($v1)
    ctx->pc = 0x2f8870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2f8874: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f8874u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8878: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f887c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8880: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2f8880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8884: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2f8884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8888: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f888c: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x2f888cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x2f8890: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x2f8894: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f8894u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8898: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f889c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f889cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f88a0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f88a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f88a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f88a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f88a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f88a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f88ac: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f88b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f88b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2f88b4: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2f88b8: 0x0  nop
    ctx->pc = 0x2f88b8u;
    // NOP
    // 0x2f88bc: 0x0  nop
    ctx->pc = 0x2f88bcu;
    // NOP
    // 0x2f88c0: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2f88c0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[6]);
    // 0x2f88c4: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2f88c4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2f88c8: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f88c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2f88cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f88ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f88d0: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f88d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f88d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f88d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f88d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f88dc: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f88e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f88e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f88e4: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2f88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2f88e8: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2f88e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2f88ec: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x2f88ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f88f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2f88f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f88f8: 0xc6210330  lwc1        $f1, 0x330($s1)
    ctx->pc = 0x2f88f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f88fc: 0xc6200350  lwc1        $f0, 0x350($s1)
    ctx->pc = 0x2f88fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8900: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f8900u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8904: 0x0  nop
    ctx->pc = 0x2f8904u;
    // NOP
    // 0x2f8908: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2F8908u;
    {
        const bool branch_taken_0x2f8908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8908u;
        // 0x2f890c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8908) {
            ctx->pc = 0x2F895Cu;
            goto label_2f895c;
        }
    }
    ctx->pc = 0x2F8910u;
    // 0x2f8910: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2f8910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8914: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2f8914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8918: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f8918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f891c: 0x0  nop
    ctx->pc = 0x2f891cu;
    // NOP
    // 0x2f8920: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2F8920u;
    {
        const bool branch_taken_0x2f8920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8920) {
            ctx->pc = 0x2F895Cu;
            goto label_2f895c;
        }
    }
    ctx->pc = 0x2F8928u;
    // 0x2f8928: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2f8928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f892c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2f892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8930: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f8930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8934: 0x0  nop
    ctx->pc = 0x2f8934u;
    // NOP
    // 0x2f8938: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2F8938u;
    {
        const bool branch_taken_0x2f8938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8938) {
            ctx->pc = 0x2F893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8938u;
            // 0x2f893c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8960u;
            goto label_2f8960;
        }
    }
    ctx->pc = 0x2F8940u;
    // 0x2f8940: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2f8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8944: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2f8944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8948: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f8948u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f894c: 0x0  nop
    ctx->pc = 0x2f894cu;
    // NOP
    // 0x2f8950: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8950u;
    {
        const bool branch_taken_0x2f8950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8950u;
        // 0x2f8954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8950) {
            ctx->pc = 0x2F895Cu;
            goto label_2f895c;
        }
    }
    ctx->pc = 0x2F8958u;
    // 0x2f8958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f895c:
    // 0x2f895c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f8960:
    // 0x2f8960: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2F8960u;
    {
        const bool branch_taken_0x2f8960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8960u;
        // 0x2f8964: 0x26240319  addiu       $a0, $s1, 0x319 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 793));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8960) {
            ctx->pc = 0x2F8AF8u;
            goto label_2f8af8;
        }
    }
    ctx->pc = 0x2F8968u;
    // 0x2f8968: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f8968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f896c: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8970: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8970u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8974: 0xa220031b  sb          $zero, 0x31B($s1)
    ctx->pc = 0x2f8974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 795), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f897c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f897cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f8980: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x2f8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2f8984: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x2f8984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x2f8988: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2f8988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2f898c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f898cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f8990: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2f8990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2f8994: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8998: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f8998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2f899c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f899cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f89a0: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f89a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f89a4: 0xc62102fc  lwc1        $f1, 0x2FC($s1)
    ctx->pc = 0x2f89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f89a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f89a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f89ac: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2f89acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f89b0: 0x0  nop
    ctx->pc = 0x2f89b0u;
    // NOP
    // 0x2f89b4: 0x0  nop
    ctx->pc = 0x2f89b4u;
    // NOP
    // 0x2f89b8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f89b8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f89bc: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x2f89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f89c0: 0x0  nop
    ctx->pc = 0x2f89c0u;
    // NOP
    // 0x2f89c4: 0x0  nop
    ctx->pc = 0x2f89c4u;
    // NOP
    // 0x2f89c8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f89c8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f89cc: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2f89ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2f89d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f89d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f89d4: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2f89d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f89d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2f89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2f89dc: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2f89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f89e0: 0xc62002fc  lwc1        $f0, 0x2FC($s1)
    ctx->pc = 0x2f89e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f89e4: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2f89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x2f89e8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2f89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f89ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f89ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f89f0: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f89f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f89f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f89f8: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f89fc: 0xc62102fc  lwc1        $f1, 0x2FC($s1)
    ctx->pc = 0x2f89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8a00: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f8a00u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f8a04: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8a08: 0x0  nop
    ctx->pc = 0x2f8a08u;
    // NOP
    // 0x2f8a0c: 0x0  nop
    ctx->pc = 0x2f8a0cu;
    // NOP
    // 0x2f8a10: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f8a10u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f8a14: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x2f8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2f8a18: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x2f8a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f8a1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f8a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8a20: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8a20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8a24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8a28: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8a2c: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f8a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8a30: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x2f8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2f8a34: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2f8a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2f8a38: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8a3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2f8a40: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8a44: 0xc62002fc  lwc1        $f0, 0x2FC($s1)
    ctx->pc = 0x2f8a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8a48: 0xc62102f4  lwc1        $f1, 0x2F4($s1)
    ctx->pc = 0x2f8a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8a4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8a4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8a50: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8a54: 0x0  nop
    ctx->pc = 0x2f8a54u;
    // NOP
    // 0x2f8a58: 0x0  nop
    ctx->pc = 0x2f8a58u;
    // NOP
    // 0x2f8a5c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f8a5cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f8a60: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2f8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2f8a64: 0x0  nop
    ctx->pc = 0x2f8a64u;
    // NOP
    // 0x2f8a68: 0x0  nop
    ctx->pc = 0x2f8a68u;
    // NOP
    // 0x2f8a6c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f8a6cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f8a70: 0xe46100e0  swc1        $f1, 0xE0($v1)
    ctx->pc = 0x2f8a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2f8a74: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8a74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8a78: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8a7c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8a80: 0xc62002fc  lwc1        $f0, 0x2FC($s1)
    ctx->pc = 0x2f8a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8a84: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2f8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8a88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8a88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8a8c: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x2f8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x2f8a90: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x2f8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x2f8a94: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8a94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8a98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8a9c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8aa0: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f8aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8aa4: 0xc62102fc  lwc1        $f1, 0x2FC($s1)
    ctx->pc = 0x2f8aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8aa8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8aa8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8aac: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8ab0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f8ab0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2f8ab4: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2f8ab8: 0x0  nop
    ctx->pc = 0x2f8ab8u;
    // NOP
    // 0x2f8abc: 0x0  nop
    ctx->pc = 0x2f8abcu;
    // NOP
    // 0x2f8ac0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f8ac0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f8ac4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f8ac4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f8ac8: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f8ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2f8acc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f8accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8ad0: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8ad4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f8ad8: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8adc: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x2f8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8ae0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8ae0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8ae4: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2f8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2f8ae8: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2f8ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2f8aec: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8aecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8af0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2f8af4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2f8af8:
    // 0x2f8af8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f8afc: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x2f8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x2f8b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8b04: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2f8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f8b08: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2f8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2f8b0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f8b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f8b10: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x2f8b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x2f8b14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f8b18: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x2f8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x2f8b1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f8b20: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2f8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2f8b24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8b28:
    // 0x2f8b28: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2f8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f8b2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f8b30: 0x0  nop
    ctx->pc = 0x2f8b30u;
    // NOP
    // 0x2f8b34: 0x0  nop
    ctx->pc = 0x2f8b34u;
    // NOP
    // 0x2f8b38: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F8B38u;
    {
        const bool branch_taken_0x2f8b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B38u;
        // 0x2f8b3c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b38) {
            ctx->pc = 0x2F8B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8b28;
        }
    }
    ctx->pc = 0x2F8B40u;
    // 0x2f8b40: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f8b44: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2f8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f8b48: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2f8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f8b4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f8b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8b50: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x2f8b50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f8b54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8b58: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f8b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f8b5c: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f8b60: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2f8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2f8b64: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x2f8b64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f8b68: 0x8fb70108  lw          $s7, 0x108($sp)
    ctx->pc = 0x2f8b68u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f8b6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f8b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b70: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x2f8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x2f8b74: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2f8b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f8b78: 0x26330320  addiu       $s3, $s1, 0x320
    ctx->pc = 0x2f8b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x2f8b7c: 0x0  nop
    ctx->pc = 0x2f8b7cu;
    // NOP
label_2f8b80:
    // 0x2f8b80: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f8b84: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x2f8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2f8b88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f8b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8b8c: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2F8B8Cu;
    {
        const bool branch_taken_0x2f8b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B8Cu;
        // 0x2f8b90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b8c) {
            ctx->pc = 0x2F8D3Cu;
            goto label_2f8d3c;
        }
    }
    ctx->pc = 0x2F8B94u;
    // 0x2f8b94: 0x13b30007  beq         $sp, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8B94u;
    {
        const bool branch_taken_0x2f8b94 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B94u;
        // 0x2f8b98: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b94) {
            ctx->pc = 0x2F8BB4u;
            goto label_2f8bb4;
        }
    }
    ctx->pc = 0x2F8B9Cu;
    // 0x2f8b9c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2f8b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8ba0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2f8ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8ba4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2f8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f8ba8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f8ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f8bac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f8bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f8bb0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f8bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f8bb4:
    // 0x2f8bb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8bb8: 0x80440314  lb          $a0, 0x314($v0)
    ctx->pc = 0x2f8bb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 788)));
    // 0x2f8bbc: 0x5483002a  bnel        $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F8BBCu;
    {
        const bool branch_taken_0x2f8bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8bbc) {
            ctx->pc = 0x2F8BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8BBCu;
            // 0x2f8bc0: 0x8e250114  lw          $a1, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8C68u;
            goto label_2f8c68;
        }
    }
    ctx->pc = 0x2F8BC4u;
    // 0x2f8bc4: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f8bc8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2f8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2f8bcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f8bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8bd0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2f8bd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f8bd4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2f8bd4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f8bd8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2f8bd8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2f8bdc: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2f8bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8be0: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x2f8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f8be4: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x2f8be4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2f8be8: 0xfac70030  sqc2        $vf7, 0x30($s6)
    ctx->pc = 0x2f8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2f8bec: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x2f8becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2f8bf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f8bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bf4: 0xe7b400b4  swc1        $f20, 0xB4($sp)
    ctx->pc = 0x2f8bf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2f8bf8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f8bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f8bfc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f8bfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2f8c00: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F8C00u;
    SET_GPR_U32(ctx, 31, 0x2F8C08u);
    ctx->pc = 0x2F8C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8C00u;
    // 0x2f8c04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F8C00u, 0x2F8C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8C08u;
label_2f8c08:
    // 0x2f8c08: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2f8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f8c0c: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x2f8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f8c10: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2f8c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8c14: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2f8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8c18: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f8c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2f8c1c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f8c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2f8c20: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f8c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2f8c24: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x2f8c24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x2f8c28: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2f8c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f8c2c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2f8c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8c30: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2f8c30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f8c34: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2f8c34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8c38: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f8c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f8c3c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2f8c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8c40: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2f8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f8c44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f8c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8c48: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2f8c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8c4c: 0x125e004d  beq         $s2, $fp, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F8C4Cu;
    {
        const bool branch_taken_0x2f8c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x2F8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C4Cu;
        // 0x2f8c50: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c4c) {
            ctx->pc = 0x2F8D84u;
            goto label_2f8d84;
        }
    }
    ctx->pc = 0x2F8C54u;
    // 0x2f8c54: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f8c58: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f8c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8c5c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2f8c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f8c60: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2F8C60u;
    {
        const bool branch_taken_0x2f8c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C60u;
        // 0x2f8c64: 0xc7a000c8  lwc1        $f0, 0xC8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c60) {
            ctx->pc = 0x2F8D80u;
            goto label_2f8d80;
        }
    }
    ctx->pc = 0x2F8C68u;
label_2f8c68:
    // 0x2f8c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c6c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f8c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f8c70: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8C70u;
    {
        const bool branch_taken_0x2f8c70 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C70u;
        // 0x2f8c74: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c70) {
            ctx->pc = 0x2F8C7Cu;
            goto label_2f8c7c;
        }
    }
    ctx->pc = 0x2F8C78u;
    // 0x2f8c78: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f8c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f8c7c:
    // 0x2f8c7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f8c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f8c80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8C80u;
    {
        const bool branch_taken_0x2f8c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C80u;
        // 0x2f8c84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c80) {
            ctx->pc = 0x2F8C98u;
            goto label_2f8c98;
        }
    }
    ctx->pc = 0x2F8C88u;
    // 0x2f8c88: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f8c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8C90u;
    {
        const bool branch_taken_0x2f8c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C90u;
        // 0x2f8c94: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c90) {
            ctx->pc = 0x2F8C9Cu;
            goto label_2f8c9c;
        }
    }
    ctx->pc = 0x2F8C98u;
label_2f8c98:
    // 0x2f8c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f8c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c9c:
    // 0x2f8c9c: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F8C9Cu;
    {
        const bool branch_taken_0x2f8c9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C9Cu;
        // 0x2f8ca0: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c9c) {
            ctx->pc = 0x2F8D84u;
            goto label_2f8d84;
        }
    }
    ctx->pc = 0x2F8CA4u;
    // 0x2f8ca4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f8ca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8ca8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2f8ca8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f8cac: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2f8cacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f8cb0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2f8cb0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2f8cb4: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2f8cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8cb8: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x2f8cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f8cbc: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x2f8cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2f8cc0: 0xfac70030  sqc2        $vf7, 0x30($s6)
    ctx->pc = 0x2f8cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2f8cc4: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x2f8cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2f8cc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ccc: 0xe7b400b4  swc1        $f20, 0xB4($sp)
    ctx->pc = 0x2f8cccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2f8cd0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2f8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f8cd4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2f8cd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2f8cd8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F8CD8u;
    SET_GPR_U32(ctx, 31, 0x2F8CE0u);
    ctx->pc = 0x2F8CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8CD8u;
    // 0x2f8cdc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F8CD8u, 0x2F8CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8CE0u;
label_2f8ce0:
    // 0x2f8ce0: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x2f8ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f8ce4: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x2f8ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8ce8: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x2f8ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8cec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2f8cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2f8cf0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2f8cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2f8cf4: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2f8cf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2f8cf8: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x2f8cf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x2f8cfc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2f8cfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f8d00: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2f8d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8d04: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2f8d04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f8d08: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2f8d08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8d0c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f8d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f8d10: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2f8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8d14: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2f8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f8d18: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f8d18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8d1c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2f8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8d20: 0x125e0018  beq         $s2, $fp, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F8D20u;
    {
        const bool branch_taken_0x2f8d20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x2F8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D20u;
        // 0x2f8d24: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d20) {
            ctx->pc = 0x2F8D84u;
            goto label_2f8d84;
        }
    }
    ctx->pc = 0x2F8D28u;
    // 0x2f8d28: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f8d2c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2f8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8d30: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2f8d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f8d34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F8D34u;
    {
        const bool branch_taken_0x2f8d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D34u;
        // 0x2f8d38: 0xc7a000c8  lwc1        $f0, 0xC8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d34) {
            ctx->pc = 0x2F8D80u;
            goto label_2f8d80;
        }
    }
    ctx->pc = 0x2F8D3Cu;
label_2f8d3c:
    // 0x2f8d3c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F8D44u);
    ctx->pc = 0x2F8D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D3Cu;
    // 0x2f8d40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F8D3Cu, 0x2F8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D44u;
label_2f8d44:
    // 0x2f8d44: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f8d44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f8d48: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8d4c: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f8d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f8d50: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x2f8d50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2f8d54: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f8d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f8d58: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2f8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8d5c: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x2f8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2f8d60: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f8d60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8d64: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f8d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8d68: 0x12560006  beq         $s2, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8D68u;
    {
        const bool branch_taken_0x2f8d68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x2F8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D68u;
        // 0x2f8d6c: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d68) {
            ctx->pc = 0x2F8D84u;
            goto label_2f8d84;
        }
    }
    ctx->pc = 0x2F8D70u;
    // 0x2f8d70: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2f8d74: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2f8d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8d78: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2f8d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2f8d7c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2f8d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8d80:
    // 0x2f8d80: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2f8d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2f8d84:
    // 0x2f8d84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f8d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f8d88: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f8d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f8d8c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2f8d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f8d90: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2F8D90u;
    {
        const bool branch_taken_0x2f8d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D90u;
        // 0x2f8d94: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d90) {
            ctx->pc = 0x2F8B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8b80;
        }
    }
    ctx->pc = 0x2F8D98u;
    // 0x2f8d98: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2f8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f8d9c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f8da0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f8da4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f8da4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8da8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f8da8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8dac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f8dacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f8db0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2f8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8db4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2f8db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f8db8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f8db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8dbc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f8dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8dc0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f8dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8dc4: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x2f8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f8dc8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2f8dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2f8dcc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2f8dccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2f8dd0: 0x46030880  add.s       $f2, $f1, $f3
    ctx->pc = 0x2f8dd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2f8dd4: 0x0  nop
    ctx->pc = 0x2f8dd4u;
    // NOP
    // 0x2f8dd8: 0x0  nop
    ctx->pc = 0x2f8dd8u;
    // NOP
    // 0x2f8ddc: 0x46020544  c1          0x20544
    ctx->pc = 0x2f8ddcu;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x2f8de0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2f8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8de4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f8de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2f8de8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f8de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f8dec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2f8decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2f8df0: 0x0  nop
    ctx->pc = 0x2f8df0u;
    // NOP
    // 0x2f8df4: 0x0  nop
    ctx->pc = 0x2f8df4u;
    // NOP
    // 0x2f8df8: 0x46010504  c1          0x10504
    ctx->pc = 0x2f8df8u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x2f8dfc: 0x8e260300  lw          $a2, 0x300($s1)
    ctx->pc = 0x2f8dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x2f8e00: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x2f8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f8e04: 0x631c0  sll         $a2, $a2, 7
    ctx->pc = 0x2f8e04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x2f8e08: 0x8e250360  lw          $a1, 0x360($s1)
    ctx->pc = 0x2f8e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2f8e0c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2F8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E14u);
    ctx->pc = 0x2F8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E0Cu;
    // 0x2f8e10: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2F8E0Cu, 0x2F8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E14u;
label_2f8e14:
    // 0x2f8e14: 0x8e230300  lw          $v1, 0x300($s1)
    ctx->pc = 0x2f8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x2f8e18: 0x3a042  srl         $s4, $v1, 1
    ctx->pc = 0x2f8e18u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2f8e1c: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2f8e1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f8e20: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8E20u;
    {
        const bool branch_taken_0x2f8e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E20u;
        // 0x2f8e24: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e20) {
            ctx->pc = 0x2F8E54u;
            goto label_2f8e54;
        }
    }
    ctx->pc = 0x2F8E28u;
    // 0x2f8e28: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f8e2c: 0x0  nop
    ctx->pc = 0x2f8e2cu;
    // NOP
label_2f8e30:
    // 0x2f8e30: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2f8e34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f8e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f8e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f8e3c: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2f8e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f8e40: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x2f8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x2f8e44: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2f8e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f8e48: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8E48u;
    {
        const bool branch_taken_0x2f8e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e48) {
            ctx->pc = 0x2F8E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E48u;
            // 0x2f8e4c: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8e30;
        }
    }
    ctx->pc = 0x2F8E50u;
    // 0x2f8e50: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2f8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2f8e54:
    // 0x2f8e54: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2f8e54u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f8e58: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2f8e58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2f8e5c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2f8e5cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2f8e60: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2f8e60u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2f8e64: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2f8e64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f8e68: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2f8e68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2f8e6c: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2f8e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2f8e70: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2f8e70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2f8e74: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x2f8e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f8e78: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2f8e78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2f8e7c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2F8E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E84u);
    ctx->pc = 0x2F8E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E7Cu;
    // 0x2f8e80: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2F8E7Cu, 0x2F8E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E84u;
label_2f8e84:
    // 0x2f8e84: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2f8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2f8e88: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f8e88u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8e8c: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x2F8E8Cu;
    SET_GPR_U32(ctx, 31, 0x2F8E94u);
    ctx->pc = 0x2F8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E8Cu;
    // 0x2f8e90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x2F8E8Cu, 0x2F8E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E94u;
label_2f8e94:
    // 0x2f8e94: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2f8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f8e98: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2F8E98u;
    SET_GPR_U32(ctx, 31, 0x2F8EA0u);
    ctx->pc = 0x2F8E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E98u;
    // 0x2f8e9c: 0xc7ad0088  lwc1        $f13, 0x88($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2F8E98u, 0x2F8EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EA0u;
label_2f8ea0:
    // 0x2f8ea0: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2f8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2f8ea4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f8ea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f8ea8: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x2F8EA8u;
    SET_GPR_U32(ctx, 31, 0x2F8EB0u);
    ctx->pc = 0x2F8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EA8u;
    // 0x2f8eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x2F8EA8u, 0x2F8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EB0u;
label_2f8eb0:
    // 0x2f8eb0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2f8eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f8eb4: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2F8EB4u;
    SET_GPR_U32(ctx, 31, 0x2F8EBCu);
    ctx->pc = 0x2F8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EB4u;
    // 0x2f8eb8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2F8EB4u, 0x2F8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EBCu;
label_2f8ebc:
    // 0x2f8ebc: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x2f8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x2f8ec0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F8EC0u;
    {
        const bool branch_taken_0x2f8ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EC0u;
        // 0x2f8ec4: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ec0) {
            ctx->pc = 0x2F8EFCu;
            goto label_2f8efc;
        }
    }
    ctx->pc = 0x2F8EC8u;
    // 0x2f8ec8: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2f8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2f8ecc: 0x0  nop
    ctx->pc = 0x2f8eccu;
    // NOP
label_2f8ed0:
    // 0x2f8ed0: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x2f8ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2f8ed4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f8ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f8ed8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f8edc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f8edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f8ee0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F8EE0u;
    SET_GPR_U32(ctx, 31, 0x2F8EE8u);
    ctx->pc = 0x2F8EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EE0u;
    // 0x2f8ee4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F8EE0u, 0x2F8EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EE8u;
label_2f8ee8:
    // 0x2f8ee8: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x2f8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x2f8eec: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2f8eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f8ef0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F8EF0u;
    {
        const bool branch_taken_0x2f8ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ef0) {
            ctx->pc = 0x2F8EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8EF0u;
            // 0x2f8ef4: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8ed0;
        }
    }
    ctx->pc = 0x2F8EF8u;
    // 0x2f8ef8: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2f8ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f8efc:
    // 0x2f8efc: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2f8efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2f8f00: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2f8f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2f8f04: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2f8f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2f8f08: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2f8f08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2f8f0c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2f8f0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2f8f10: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x2f8f10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f8f14: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x2f8f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2f8f18: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x2f8f18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2f8f1c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2f8f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f8f20: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2f8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f8f24: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2f8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f8f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F28u;
        // 0x2f8f2c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8F30u;
}
