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

// Function: func_002951B0
// Address: 0x2951b0 - 0x2952d0
void func_002951B0_0x2951b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002951B0_0x2951b0");
#endif

    switch (ctx->pc) {
        case 0x2952c0u: goto label_2952c0;
        default: break;
    }

    ctx->pc = 0x2951b0u;

    // 0x2951b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2951b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2951b4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2951b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2951b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2951bc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2951bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2951c0: 0x91030012  lbu         $v1, 0x12($t0)
    ctx->pc = 0x2951c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x2951c4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2951c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2951c8: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x2951c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x2951cc: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x2951ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2951d0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2951d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2951d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2951d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2951d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2951d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2951dc: 0x0  nop
    ctx->pc = 0x2951dcu;
    // NOP
    // 0x2951e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2951e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2951e4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2951e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2951e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2951e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2951ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2951ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2951f0: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x2951f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2951f4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2951f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2951f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2951f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2951fc: 0x0  nop
    ctx->pc = 0x2951fcu;
    // NOP
    // 0x295200: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x295200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x295204: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x295204u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295208: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x295208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x29520c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29520cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295210: 0x0  nop
    ctx->pc = 0x295210u;
    // NOP
    // 0x295214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29521c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x295220: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x295220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x295224: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x295224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x295228: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x295228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29522c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x29522cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x295230: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x295230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x295234: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x295234u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x295238: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x295238u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29523c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x29523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x295240: 0x85030006  lh          $v1, 0x6($t0)
    ctx->pc = 0x295240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x295244: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x295244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x295248: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x295248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x29524c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x29524cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x295250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x295250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295254: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x295254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x295258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29525c: 0x0  nop
    ctx->pc = 0x29525cu;
    // NOP
    // 0x295260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x295264: 0x91020011  lbu         $v0, 0x11($t0)
    ctx->pc = 0x295264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x295268: 0x910b0013  lbu         $t3, 0x13($t0)
    ctx->pc = 0x295268u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x29526c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295270: 0x8d0a0008  lw          $t2, 0x8($t0)
    ctx->pc = 0x295270u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x295274: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x295274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x295278: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29527c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x29527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x295280: 0x91090010  lbu         $t1, 0x10($t0)
    ctx->pc = 0x295280u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x295284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295288: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x295288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29528c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29528cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295290: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x295290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295294: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x295294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295298: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x295298u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29529c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x29529cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2952a0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2952a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2952a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2952a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2952a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2952a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2952ac: 0xafaa0024  sw          $t2, 0x24($sp)
    ctx->pc = 0x2952acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
    // 0x2952b0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2952b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2952b4: 0xa3a90030  sb          $t1, 0x30($sp)
    ctx->pc = 0x2952b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 9));
    // 0x2952b8: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x2952B8u;
    SET_GPR_U32(ctx, 31, 0x2952C0u);
    ctx->pc = 0x2952BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2952B8u;
    // 0x2952bc: 0xa3ab0031  sb          $t3, 0x31($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x2952B8u, 0x2952C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2952C0u;
label_2952c0:
    // 0x2952c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2952c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2952c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2952C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2952C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952C4u;
        // 0x2952c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2952C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2952CCu;
    // 0x2952cc: 0x0  nop
    ctx->pc = 0x2952ccu;
    // NOP
    ctx->pc = 0x2952d0u;
}
