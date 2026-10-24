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

// Function: ChkLine
// Address: 0x131e10 - 0x1321d8
void ChkLine_0x131e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkLine_0x131e10");
#endif

    switch (ctx->pc) {
        case 0x131ea0u: goto label_131ea0;
        case 0x131ec0u: goto label_131ec0;
        case 0x131f00u: goto label_131f00;
        case 0x131fd8u: goto label_131fd8;
        case 0x131fdcu: goto label_131fdc;
        case 0x1320ecu: goto label_1320ec;
        case 0x132190u: goto label_132190;
        default: break;
    }

    ctx->pc = 0x131e10u;

    // 0x131e10: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x131e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x131e14: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x131e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x131e18: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x131e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x131e1c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x131e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x131e20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e24: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x131e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x131e28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e2c: 0x93be01a0  lbu         $fp, 0x1A0($sp)
    ctx->pc = 0x131e2cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x131e30: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x131e30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e34: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x131e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x131e38: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x131e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x131e3c: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x131e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x131e40: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x131e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x131e44: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x131e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x131e48: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x131e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x131e4c: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x131e4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x131e50: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x131e50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x131e54: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x131e54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x131e58: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x131e58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x131e5c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x131e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x131e60: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x131e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x131e64: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x131e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
    // 0x131e68: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x131e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
    // 0x131e6c: 0xafa9009c  sw          $t1, 0x9C($sp)
    ctx->pc = 0x131e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 9));
    // 0x131e70: 0x13c000b3  beqz        $fp, . + 4 + (0xB3 << 2)
    ctx->pc = 0x131E70u;
    {
        const bool branch_taken_0x131e70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E70u;
        // 0x131e74: 0xafaa00a0  sw          $t2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e70) {
            ctx->pc = 0x132140u;
            goto label_132140;
        }
    }
    ctx->pc = 0x131E78u;
    // 0x131e78: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x131e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131e7c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x131e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131e80: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x131e80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131e84: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131e84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131e88: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x131e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131e8c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x131e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131e90: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x131e90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131e94: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x131e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131e98: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x131E98u;
    SET_GPR_U32(ctx, 31, 0x131EA0u);
    ctx->pc = 0x131E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131E98u;
    // 0x131e9c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x131E98u, 0x131EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131EA0u;
label_131ea0:
    // 0x131ea0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x131ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131ea4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x131ea4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x131ea8: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x131eac: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x131eb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x131eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ebc: 0x0  nop
    ctx->pc = 0x131ebcu;
    // NOP
label_131ec0:
    // 0x131ec0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x131ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131ec4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x131ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131ec8: 0x0  nop
    ctx->pc = 0x131ec8u;
    // NOP
    // 0x131ecc: 0x0  nop
    ctx->pc = 0x131eccu;
    // NOP
    // 0x131ed0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131ED0u;
    {
        const bool branch_taken_0x131ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x131ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131ED0u;
        // 0x131ed4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ed0) {
            ctx->pc = 0x131EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131ec0;
        }
    }
    ctx->pc = 0x131ED8u;
    // 0x131ed8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x131ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131edc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x131edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131ee0: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x131ee0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131ee4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131ee4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131ee8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x131ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131eec: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x131eecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x131ef0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x131ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131ef4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x131ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131ef8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x131EF8u;
    SET_GPR_U32(ctx, 31, 0x131F00u);
    ctx->pc = 0x131EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131EF8u;
    // 0x131efc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x131EF8u, 0x131F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F00u;
label_131f00:
    // 0x131f00: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x131f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x131f04: 0x0  nop
    ctx->pc = 0x131f04u;
    // NOP
    // 0x131f08: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x131f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131f0c: 0x0  nop
    ctx->pc = 0x131f0cu;
    // NOP
    // 0x131f10: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x131F10u;
    {
        const bool branch_taken_0x131f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F10u;
        // 0x131f14: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f10) {
            ctx->pc = 0x131F54u;
            goto label_131f54;
        }
    }
    ctx->pc = 0x131F18u;
    // 0x131f18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131f1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x131f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131f20: 0x0  nop
    ctx->pc = 0x131f20u;
    // NOP
    // 0x131f24: 0x0  nop
    ctx->pc = 0x131f24u;
    // NOP
    // 0x131f28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x131f28u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x131f2c: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x131f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131f30: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x131f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131f34: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x131f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131f38: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x131f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x131f3c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x131f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x131f40: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x131f40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x131f44: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x131f44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x131f48: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x131f48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x131f4c: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x131f4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x131f50: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x131f50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_131f54:
    // 0x131f54: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x131f54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x131f58: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x131f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131f5c: 0x4605b832  c.eq.s      $f23, $f5
    ctx->pc = 0x131f5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131f60: 0x0  nop
    ctx->pc = 0x131f60u;
    // NOP
    // 0x131f64: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
    ctx->pc = 0x131F64u;
    {
        const bool branch_taken_0x131f64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F64u;
        // 0x131f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f64) {
            ctx->pc = 0x132190u;
            goto label_132190;
        }
    }
    ctx->pc = 0x131F6Cu;
    // 0x131f6c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x131f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x131f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f74: 0x0  nop
    ctx->pc = 0x131f74u;
    // NOP
    // 0x131f78: 0x46170543  div.s       $f21, $f0, $f23
    ctx->pc = 0x131f78u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[23]);
    // 0x131f7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x131f80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f84: 0x0  nop
    ctx->pc = 0x131f84u;
    // NOP
    // 0x131f88: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x131f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131f8c: 0x0  nop
    ctx->pc = 0x131f8cu;
    // NOP
    // 0x131f90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x131F90u;
    {
        const bool branch_taken_0x131f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131f90) {
            ctx->pc = 0x131FA0u;
            goto label_131fa0;
        }
    }
    ctx->pc = 0x131F98u;
    // 0x131f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131F98u;
    {
        const bool branch_taken_0x131f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F98u;
        // 0x131f9c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f98) {
            ctx->pc = 0x131FB8u;
            goto label_131fb8;
        }
    }
    ctx->pc = 0x131FA0u;
label_131fa0:
    // 0x131fa0: 0x4605a836  c.le.s      $f21, $f5
    ctx->pc = 0x131fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131fa4: 0x0  nop
    ctx->pc = 0x131fa4u;
    // NOP
    // 0x131fa8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131FA8u;
    {
        const bool branch_taken_0x131fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FA8u;
        // 0x131fac: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131fa8) {
            ctx->pc = 0x131FBCu;
            goto label_131fbc;
        }
    }
    ctx->pc = 0x131FB0u;
    // 0x131fb0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x131FB0u;
    {
        const bool branch_taken_0x131fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FB0u;
        // 0x131fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131fb0) {
            ctx->pc = 0x132190u;
            goto label_132190;
        }
    }
    ctx->pc = 0x131FB8u;
label_131fb8:
    // 0x131fb8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_131fbc:
    // 0x131fbc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x131fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x131fc0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x131fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x131fc4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x131fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x131fc8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x131fc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fcc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x131fccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x131fd0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x131fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131fd4: 0x0  nop
    ctx->pc = 0x131fd4u;
    // NOP
label_131fd8:
    // 0x131fd8: 0x4616b802  mul.s       $f0, $f23, $f22
    ctx->pc = 0x131fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
label_131fdc:
    // 0x131fdc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x131fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131fe0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131fe4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x131fe8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x131fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x131fec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x131fecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x131ff0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x131ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131ff4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131ff8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x131ff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131ffc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x131ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132000: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x132000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132004: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132008: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132008u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13200c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x13200cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x132010: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132014: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132018: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x132018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13201c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x13201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132020: 0x12760006  beq         $s3, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x132020u;
    {
        const bool branch_taken_0x132020 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        ctx->pc = 0x132024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132020u;
        // 0x132024: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132020) {
            ctx->pc = 0x13203Cu;
            goto label_13203c;
        }
    }
    ctx->pc = 0x132028u;
    // 0x132028: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x132028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13202c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x13202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132030: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x132030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x132034: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x132034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x132038: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x132038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_13203c:
    // 0x13203c: 0x4614b802  mul.s       $f0, $f23, $f20
    ctx->pc = 0x13203cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x132040: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x132040u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132044: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132048: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13204c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x13204cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x132050: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x132050u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x132054: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x132054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132058: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13205c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13205cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132060: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x132060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132064: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x132064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132068: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13206c: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x13206cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x132070: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x132070u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x132074: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132078: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13207c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13207cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132080: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x132080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132084: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x132084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x132088: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x132088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13208c: 0x2444ae50  addiu       $a0, $v0, -0x51B0
    ctx->pc = 0x13208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x132090: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x132090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132094: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x132094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x132098: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x132098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13209c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x13209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1320a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1320a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1320a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1320a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1320a8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1320a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1320ac: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x1320acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1320b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1320b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1320b4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1320b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1320b8: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x1320b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1320bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1320bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1320c0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1320c4: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x1320c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1320c8: 0x8faa009c  lw          $t2, 0x9C($sp)
    ctx->pc = 0x1320c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1320cc: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1320d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1320d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1320d4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1320d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1320d8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1320d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1320dc: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1320dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x1320e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1320e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1320e4: 0xc04bb58  jal         func_12ED60
    ctx->pc = 0x1320E4u;
    SET_GPR_U32(ctx, 31, 0x1320ECu);
    ctx->pc = 0x1320E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1320E4u;
    // 0x1320e8: 0xafbe0028  sw          $fp, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED60u, 0x1320E4u, 0x1320ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320ECu;
label_1320ec:
    // 0x1320ec: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1320ECu;
    {
        const bool branch_taken_0x1320ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1320ec) {
            ctx->pc = 0x1320F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1320ECu;
            // 0x1320f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132190u;
            goto label_132190;
        }
    }
    ctx->pc = 0x1320F4u;
    // 0x1320f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1320f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1320f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1320f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1320fc: 0x0  nop
    ctx->pc = 0x1320fcu;
    // NOP
    // 0x132100: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x132100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132104: 0x0  nop
    ctx->pc = 0x132104u;
    // NOP
    // 0x132108: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x132108u;
    {
        const bool branch_taken_0x132108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132108) {
            ctx->pc = 0x13210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132108u;
            // 0x13210c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132190u;
            goto label_132190;
        }
    }
    ctx->pc = 0x132110u;
    // 0x132110: 0x0  nop
    ctx->pc = 0x132110u;
    // NOP
    // 0x132114: 0x0  nop
    ctx->pc = 0x132114u;
    // NOP
    // 0x132118: 0x4618a803  div.s       $f0, $f21, $f24
    ctx->pc = 0x132118u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[24]);
    // 0x13211c: 0x4615b580  add.s       $f22, $f22, $f21
    ctx->pc = 0x13211cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x132120: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x132120u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x132124: 0x4615b500  add.s       $f20, $f22, $f21
    ctx->pc = 0x132124u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x132128: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x132128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13212c: 0x0  nop
    ctx->pc = 0x13212cu;
    // NOP
    // 0x132130: 0x4503ffa9  bc1tl       . + 4 + (-0x57 << 2)
    ctx->pc = 0x132130u;
    {
        const bool branch_taken_0x132130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132130) {
            ctx->pc = 0x132134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132130u;
            // 0x132134: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131fd8;
        }
    }
    ctx->pc = 0x132138u;
    // 0x132138: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
    ctx->pc = 0x132138u;
    {
        const bool branch_taken_0x132138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132138u;
        // 0x13213c: 0x4616b802  mul.s       $f0, $f23, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132138) {
            ctx->pc = 0x131FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131fdc;
        }
    }
    ctx->pc = 0x132140u;
label_132140:
    // 0x132140: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x132140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x132144: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x132144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x132148: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x132148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13214c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x13214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x132150: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x132150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x132154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132158: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x132158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x13215c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13215cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132160: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x132164: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x132164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x132168: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x132168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x13216c: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x13216cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x132170: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x132170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x132174: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x132174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x132178: 0x8faa009c  lw          $t2, 0x9C($sp)
    ctx->pc = 0x132178u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x13217c: 0x8fab00a0  lw          $t3, 0xA0($sp)
    ctx->pc = 0x13217cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x132180: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x132180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x132184: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x132184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x132188: 0xc04bb58  jal         func_12ED60
    ctx->pc = 0x132188u;
    SET_GPR_U32(ctx, 31, 0x132190u);
    ctx->pc = 0x13218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132188u;
    // 0x13218c: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED60u, 0x132188u, 0x132190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132190u;
label_132190:
    // 0x132190: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x132190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x132194: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x132194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x132198: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x132198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13219c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x13219cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1321a0: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1321a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1321a4: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1321a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1321a8: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1321a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1321ac: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1321acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1321b0: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1321b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1321b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1321b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1321b8: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x1321b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1321bc: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x1321bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1321c0: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x1321c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1321c4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1321c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1321c8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1321c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1321cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1321CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1321D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321CCu;
        // 0x1321d0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1321CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1321D4u;
    // 0x1321d4: 0x0  nop
    ctx->pc = 0x1321d4u;
    // NOP
    ctx->pc = 0x1321d8u;
}
