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

// Function: func_0012ED60
// Address: 0x12ed60 - 0x12f288
void func_0012ED60_0x12ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012ED60_0x12ed60");
#endif

    switch (ctx->pc) {
        case 0x12ee6cu: goto label_12ee6c;
        case 0x12ef60u: goto label_12ef60;
        case 0x12ef90u: goto label_12ef90;
        case 0x12efa8u: goto label_12efa8;
        case 0x12efd8u: goto label_12efd8;
        case 0x12f000u: goto label_12f000;
        case 0x12f058u: goto label_12f058;
        case 0x12f068u: goto label_12f068;
        case 0x12f0a8u: goto label_12f0a8;
        case 0x12f0b8u: goto label_12f0b8;
        case 0x12f100u: goto label_12f100;
        case 0x12f110u: goto label_12f110;
        case 0x12f168u: goto label_12f168;
        case 0x12f1b4u: goto label_12f1b4;
        default: break;
    }

    ctx->pc = 0x12ed60u;

    // 0x12ed60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x12ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x12ed64: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x12ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x12ed68: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x12ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x12ed6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12ed6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed70: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x12ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x12ed74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12ed74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x12ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x12ed7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12ed7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x12ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x12ed84: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12ed84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed88: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x12ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x12ed8c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x12ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x12ed90: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x12ed90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed94: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x12ed94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x12ed98: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x12ed98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed9c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x12ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x12eda0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12eda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12eda4: 0x93b60108  lbu         $s6, 0x108($sp)
    ctx->pc = 0x12eda4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x12eda8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12edac: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x12edacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x12edb0: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x12EDB0u;
    {
        const bool branch_taken_0x12edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDB0u;
        // 0x12edb4: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edb0) {
            ctx->pc = 0x12EF68u;
            goto label_12ef68;
        }
    }
    ctx->pc = 0x12EDB8u;
    // 0x12edb8: 0x268200e0  addiu       $v0, $s4, 0xE0
    ctx->pc = 0x12edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x12edbc: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EDBCu;
    {
        const bool branch_taken_0x12edbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x12EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDBCu;
        // 0x12edc0: 0x269300b0  addiu       $s3, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edbc) {
            ctx->pc = 0x12EDDCu;
            goto label_12eddc;
        }
    }
    ctx->pc = 0x12EDC4u;
    // 0x12edc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12edc8: 0xe68000e0  swc1        $f0, 0xE0($s4)
    ctx->pc = 0x12edc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
    // 0x12edcc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12edd0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12edd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12edd4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12edd8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12edd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12eddc:
    // 0x12eddc: 0x52620008  beql        $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EDDCu;
    {
        const bool branch_taken_0x12eddc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x12eddc) {
            ctx->pc = 0x12EDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EDDCu;
            // 0x12ede0: 0x268200f0  addiu       $v0, $s4, 0xF0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EE00u;
            goto label_12ee00;
        }
    }
    ctx->pc = 0x12EDE4u;
    // 0x12ede4: 0xc68000e0  lwc1        $f0, 0xE0($s4)
    ctx->pc = 0x12ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ede8: 0xe68000b0  swc1        $f0, 0xB0($s4)
    ctx->pc = 0x12ede8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 176), bits); }
    // 0x12edec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12edf0: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x12edf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x12edf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12edf8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x12edf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x12edfc: 0x268200f0  addiu       $v0, $s4, 0xF0
    ctx->pc = 0x12edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
label_12ee00:
    // 0x12ee00: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EE00u;
    {
        const bool branch_taken_0x12ee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x12EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE00u;
        // 0x12ee04: 0x269200c0  addiu       $s2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee00) {
            ctx->pc = 0x12EE20u;
            goto label_12ee20;
        }
    }
    ctx->pc = 0x12EE08u;
    // 0x12ee08: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ee0c: 0xe68000f0  swc1        $f0, 0xF0($s4)
    ctx->pc = 0x12ee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 240), bits); }
    // 0x12ee10: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x12ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ee14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12ee14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ee18: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x12ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ee1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12ee20:
    // 0x12ee20: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EE20u;
    {
        const bool branch_taken_0x12ee20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE20u;
        // 0x12ee24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee20) {
            ctx->pc = 0x12EE40u;
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12EE28u;
    // 0x12ee28: 0xc68000f0  lwc1        $f0, 0xF0($s4)
    ctx->pc = 0x12ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ee2c: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x12ee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
    // 0x12ee30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ee34: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x12ee34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x12ee38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ee3c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x12ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_12ee40:
    // 0x12ee40: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ee44: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x12ee44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ee48: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x12ee48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ee4c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12ee4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12ee50: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x12ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ee54: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ee58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12ee58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ee5c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ee60: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ee64: 0xc04078a  jal         func_101E28
    ctx->pc = 0x12EE64u;
    SET_GPR_U32(ctx, 31, 0x12EE6Cu);
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x12EE64u, 0x12EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE6Cu;
label_12ee6c:
    // 0x12ee6c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x12ee6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x12ee70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12ee70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ee74: 0x0  nop
    ctx->pc = 0x12ee74u;
    // NOP
    // 0x12ee78: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12ee78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ee7c: 0x0  nop
    ctx->pc = 0x12ee7cu;
    // NOP
    // 0x12ee80: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x12EE80u;
    {
        const bool branch_taken_0x12ee80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE80u;
        // 0x12ee84: 0xc7a40010  lwc1        $f4, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee80) {
            ctx->pc = 0x12EEC4u;
            goto label_12eec4;
        }
    }
    ctx->pc = 0x12EE88u;
    // 0x12ee88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ee88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12ee8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ee8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ee90: 0x0  nop
    ctx->pc = 0x12ee90u;
    // NOP
    // 0x12ee94: 0x0  nop
    ctx->pc = 0x12ee94u;
    // NOP
    // 0x12ee98: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x12ee98u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x12ee9c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x12ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12eea0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x12eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12eea4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x12eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eea8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x12eea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x12eeac: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12eeacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12eeb0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x12eeb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x12eeb4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x12eeb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12eeb8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x12eeb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12eebc: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x12eebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12eec0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x12eec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12eec4:
    // 0x12eec4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x12eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12eec8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12eec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12eecc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12eed0: 0x268200d0  addiu       $v0, $s4, 0xD0
    ctx->pc = 0x12eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x12eed4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EED4u;
    {
        const bool branch_taken_0x12eed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x12EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED4u;
        // 0x12eed8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eed4) {
            ctx->pc = 0x12EEF0u;
            goto label_12eef0;
        }
    }
    ctx->pc = 0x12EEDCu;
    // 0x12eedc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x12eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eee0: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x12eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
    // 0x12eee4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12eee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12eee8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x12eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eeec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12eef0:
    // 0x12eef0: 0xae950174  sw          $s5, 0x174($s4)
    ctx->pc = 0x12eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 372), GPR_U32(ctx, 21));
    // 0x12eef4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12eef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eef8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12eef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eefc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12eefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef00: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x12ef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ef04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12ef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ef08: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ef0c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x12ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12ef10: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12ef10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x12ef14: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ef18: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x12ef18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x12ef1c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x12ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ef20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12ef20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x12ef24: 0xae97018c  sw          $s7, 0x18C($s4)
    ctx->pc = 0x12ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 23));
    // 0x12ef28: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x12ef28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x12ef2c: 0xa2960181  sb          $s6, 0x181($s4)
    ctx->pc = 0x12ef2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 385), (uint8_t)GPR_U32(ctx, 22));
    // 0x12ef30: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12ef30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x12ef34: 0xae9e0178  sw          $fp, 0x178($s4)
    ctx->pc = 0x12ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 30));
    // 0x12ef38: 0xae80017c  sw          $zero, 0x17C($s4)
    ctx->pc = 0x12ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 0));
    // 0x12ef3c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12ef3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x12ef40: 0xa2800180  sb          $zero, 0x180($s4)
    ctx->pc = 0x12ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ef44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12ef44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12ef48: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12ef4c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ef4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12ef50: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x12ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
    // 0x12ef54: 0xe6800188  swc1        $f0, 0x188($s4)
    ctx->pc = 0x12ef54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 392), bits); }
    // 0x12ef58: 0xc04bca2  jal         func_12F288
    ctx->pc = 0x12EF58u;
    SET_GPR_U32(ctx, 31, 0x12EF60u);
    ctx->pc = 0x12EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF58u;
    // 0x12ef5c: 0xe6800184  swc1        $f0, 0x184($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 388), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F288u, 0x12EF58u, 0x12EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF60u;
label_12ef60:
    // 0x12ef60: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EF60u;
    {
        const bool branch_taken_0x12ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef60) {
            ctx->pc = 0x12EF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF60u;
            // 0x12ef64: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF70u;
            goto label_12ef70;
        }
    }
    ctx->pc = 0x12EF68u;
label_12ef68:
    // 0x12ef68: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x12EF68u;
    {
        const bool branch_taken_0x12ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF68u;
        // 0x12ef6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef68) {
            ctx->pc = 0x12F254u;
            goto label_12f254;
        }
    }
    ctx->pc = 0x12EF70u;
label_12ef70:
    // 0x12ef70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef74: 0x8e860078  lw          $a2, 0x78($s4)
    ctx->pc = 0x12ef74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x12ef78: 0x8e870070  lw          $a3, 0x70($s4)
    ctx->pc = 0x12ef78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x12ef7c: 0x8e88007c  lw          $t0, 0x7C($s4)
    ctx->pc = 0x12ef7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x12ef80: 0x8e890074  lw          $t1, 0x74($s4)
    ctx->pc = 0x12ef80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x12ef84: 0x8e8a0080  lw          $t2, 0x80($s4)
    ctx->pc = 0x12ef84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x12ef88: 0xc04bd32  jal         func_12F4C8
    ctx->pc = 0x12EF88u;
    SET_GPR_U32(ctx, 31, 0x12EF90u);
    ctx->pc = 0x12EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EF88u;
    // 0x12ef8c: 0x8e8b0174  lw          $t3, 0x174($s4) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F4C8u, 0x12EF88u, 0x12EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EF90u;
label_12ef90:
    // 0x12ef90: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x12ef94: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x12ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x12ef98: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x12ef98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12ef9c: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x12EF9Cu;
    {
        const bool branch_taken_0x12ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef9c) {
            ctx->pc = 0x12EFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF9Cu;
            // 0x12efa0: 0x8fa500f0  lw          $a1, 0xF0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F158u;
            goto label_12f158;
        }
    }
    ctx->pc = 0x12EFA4u;
    // 0x12efa4: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x12efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_12efa8:
    // 0x12efa8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12efac: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x12efacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x12efb0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x12efb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12efb4: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x12efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x12efb8: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x12efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x12efbc: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x12efbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x12efc0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x12efc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12efc4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x12efc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12efc8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x12EFC8u;
    {
        const bool branch_taken_0x12efc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFC8u;
        // 0x12efcc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efc8) {
            ctx->pc = 0x12F140u;
            goto label_12f140;
        }
    }
    ctx->pc = 0x12EFD0u;
    // 0x12efd0: 0x8e830068  lw          $v1, 0x68($s4)
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x12efd4: 0x0  nop
    ctx->pc = 0x12efd4u;
    // NOP
label_12efd8:
    // 0x12efd8: 0x24de0001  addiu       $fp, $a2, 0x1
    ctx->pc = 0x12efd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12efdc: 0x8e850074  lw          $a1, 0x74($s4)
    ctx->pc = 0x12efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x12efe0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x12efe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12efe4: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x12efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x12efe8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x12efe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12efec: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x12EFECu;
    {
        const bool branch_taken_0x12efec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFECu;
        // 0x12eff0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efec) {
            ctx->pc = 0x12F12Cu;
            goto label_12f12c;
        }
    }
    ctx->pc = 0x12EFF4u;
    // 0x12eff4: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x12eff4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x12eff8: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x12eff8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x12effc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12f000:
    // 0x12f000: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f004: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x12f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x12f008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f00c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12f010: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12f014: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x12f014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12f018: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x12f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12f01c: 0x1076003e  beq         $v1, $s6, . + 4 + (0x3E << 2)
    ctx->pc = 0x12F01Cu;
    {
        const bool branch_taken_0x12f01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x12F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F01Cu;
        // 0x12f020: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f01c) {
            ctx->pc = 0x12F118u;
            goto label_12f118;
        }
    }
    ctx->pc = 0x12F024u;
    // 0x12f024: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x12f024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x12f028: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f02c: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x12f030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f034: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12F034u;
    {
        const bool branch_taken_0x12f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F034u;
        // 0x12f038: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f034) {
            ctx->pc = 0x12F070u;
            goto label_12f070;
        }
    }
    ctx->pc = 0x12F03Cu;
    // 0x12f03c: 0x92700004  lbu         $s0, 0x4($s3)
    ctx->pc = 0x12f03cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12f040: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12f040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x12f044: 0x1216000a  beq         $s0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x12F044u;
    {
        const bool branch_taken_0x12f044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x12F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F044u;
        // 0x12f048: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f044) {
            ctx->pc = 0x12F070u;
            goto label_12f070;
        }
    }
    ctx->pc = 0x12F04Cu;
    // 0x12f04c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x12f050: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x12f050u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x12f054: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x12f054u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_12f058:
    // 0x12f058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12f058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f05c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x12f05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x12f060: 0xc04bdd4  jal         func_12F750
    ctx->pc = 0x12F060u;
    SET_GPR_U32(ctx, 31, 0x12F068u);
    ctx->pc = 0x12F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F060u;
    // 0x12f064: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F750u, 0x12F060u, 0x12F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F068u;
label_12f068:
    // 0x12f068: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12F068u;
    {
        const bool branch_taken_0x12f068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x12f068) {
            ctx->pc = 0x12F06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F068u;
            // 0x12f06c: 0x96450000  lhu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f058;
        }
    }
    ctx->pc = 0x12F070u;
label_12f070:
    // 0x12f070: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
    // 0x12f074: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12f078: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F078u;
    {
        const bool branch_taken_0x12f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f078) {
            ctx->pc = 0x12F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F078u;
            // 0x12f07c: 0x8e820174  lw          $v0, 0x174($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F0C4u;
            goto label_12f0c4;
        }
    }
    ctx->pc = 0x12F080u;
    // 0x12f080: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x12f080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12f084: 0x92700005  lbu         $s0, 0x5($s3)
    ctx->pc = 0x12f084u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x12f088: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12f08c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12f08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x12f090: 0x1216000b  beq         $s0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x12F090u;
    {
        const bool branch_taken_0x12f090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x12F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F090u;
        // 0x12f094: 0x2a29021  addu        $s2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f090) {
            ctx->pc = 0x12F0C0u;
            goto label_12f0c0;
        }
    }
    ctx->pc = 0x12F098u;
    // 0x12f098: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x12f098u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x12f09c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x12f09cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x12f0a0: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x12f0a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f0a4: 0x0  nop
    ctx->pc = 0x12f0a4u;
    // NOP
label_12f0a8:
    // 0x12f0a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0ac: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x12f0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x12f0b0: 0xc04bdd4  jal         func_12F750
    ctx->pc = 0x12F0B0u;
    SET_GPR_U32(ctx, 31, 0x12F0B8u);
    ctx->pc = 0x12F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F0B0u;
    // 0x12f0b4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F750u, 0x12F0B0u, 0x12F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0B8u;
label_12f0b8:
    // 0x12f0b8: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12F0B8u;
    {
        const bool branch_taken_0x12f0b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x12f0b8) {
            ctx->pc = 0x12F0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0B8u;
            // 0x12f0bc: 0x96450000  lhu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f0a8;
        }
    }
    ctx->pc = 0x12F0C0u;
label_12f0c0:
    // 0x12f0c0: 0x8e820174  lw          $v0, 0x174($s4)
    ctx->pc = 0x12f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 372)));
label_12f0c4:
    // 0x12f0c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12f0c8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x12F0C8u;
    {
        const bool branch_taken_0x12f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0c8) {
            ctx->pc = 0x12F0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0C8u;
            // 0x12f0cc: 0x8e820080  lw          $v0, 0x80($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F11Cu;
            goto label_12f11c;
        }
    }
    ctx->pc = 0x12F0D0u;
    // 0x12f0d0: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x12f0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12f0d4: 0x92630005  lbu         $v1, 0x5($s3)
    ctx->pc = 0x12f0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x12f0d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12f0dc: 0x92700006  lbu         $s0, 0x6($s3)
    ctx->pc = 0x12f0dcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12f0e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x12f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12f0e4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f0e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x12f0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x12f0ec: 0x1216000a  beq         $s0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x12F0ECu;
    {
        const bool branch_taken_0x12f0ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x12F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0ECu;
        // 0x12f0f0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0ec) {
            ctx->pc = 0x12F118u;
            goto label_12f118;
        }
    }
    ctx->pc = 0x12F0F4u;
    // 0x12f0f4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x12f0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x12f0f8: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x12f0f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x12f0fc: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x12f0fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_12f100:
    // 0x12f100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f104: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x12f108: 0xc04bdd4  jal         func_12F750
    ctx->pc = 0x12F108u;
    SET_GPR_U32(ctx, 31, 0x12F110u);
    ctx->pc = 0x12F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F108u;
    // 0x12f10c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F750u, 0x12F108u, 0x12F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F110u;
label_12f110:
    // 0x12f110: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12F110u;
    {
        const bool branch_taken_0x12f110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x12f110) {
            ctx->pc = 0x12F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F110u;
            // 0x12f114: 0x96450000  lhu         $a1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f100;
        }
    }
    ctx->pc = 0x12F118u;
label_12f118:
    // 0x12f118: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x12f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_12f11c:
    // 0x12f11c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12f11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f120: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x12f120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12f124: 0x1040ffb6  beqz        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x12F124u;
    {
        const bool branch_taken_0x12f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F124u;
        // 0x12f128: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f124) {
            ctx->pc = 0x12F000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f000;
        }
    }
    ctx->pc = 0x12F12Cu;
label_12f12c:
    // 0x12f12c: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x12f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x12f130: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12f130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f134: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x12f134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12f138: 0x5040ffa7  beql        $v0, $zero, . + 4 + (-0x59 << 2)
    ctx->pc = 0x12F138u;
    {
        const bool branch_taken_0x12f138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f138) {
            ctx->pc = 0x12F13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F138u;
            // 0x12f13c: 0x8e830068  lw          $v1, 0x68($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12efd8;
        }
    }
    ctx->pc = 0x12F140u;
label_12f140:
    // 0x12f140: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x12f144: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x12f144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f148: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x12f148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12f14c: 0x5040ff96  beql        $v0, $zero, . + 4 + (-0x6A << 2)
    ctx->pc = 0x12F14Cu;
    {
        const bool branch_taken_0x12f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f14c) {
            ctx->pc = 0x12F150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F14Cu;
            // 0x12f150: 0x8e830064  lw          $v1, 0x64($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12efa8;
        }
    }
    ctx->pc = 0x12F154u;
    // 0x12f154: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_12f158:
    // 0x12f158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12f158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f15c: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x12f15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12f160: 0xc04c1c0  jal         func_130700
    ctx->pc = 0x12F160u;
    SET_GPR_U32(ctx, 31, 0x12F168u);
    ctx->pc = 0x12F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F160u;
    // 0x12f164: 0x8fa70100  lw          $a3, 0x100($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130700u, 0x12F160u, 0x12F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F168u;
label_12f168:
    // 0x12f168: 0x92820180  lbu         $v0, 0x180($s4)
    ctx->pc = 0x12f168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
    // 0x12f16c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x12F16Cu;
    {
        const bool branch_taken_0x12f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F16Cu;
        // 0x12f170: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f16c) {
            ctx->pc = 0x12F254u;
            goto label_12f254;
        }
    }
    ctx->pc = 0x12F174u;
    // 0x12f174: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F174u;
    {
        const bool branch_taken_0x12f174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F174u;
        // 0x12f178: 0x26820120  addiu       $v0, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f174) {
            ctx->pc = 0x12F19Cu;
            goto label_12f19c;
        }
    }
    ctx->pc = 0x12F17Cu;
    // 0x12f17c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F17Cu;
    {
        const bool branch_taken_0x12f17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f17c) {
            ctx->pc = 0x12F180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F17Cu;
            // 0x12f180: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F1A0u;
            goto label_12f1a0;
        }
    }
    ctx->pc = 0x12F184u;
    // 0x12f184: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x12f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f188: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x12f188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12f18c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f190: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12f190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12f194: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f198: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12f198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_12f19c:
    // 0x12f19c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x12f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_12f1a0:
    // 0x12f1a0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x12F1A0u;
    {
        const bool branch_taken_0x12f1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1A0u;
        // 0x12f1a4: 0x26900130  addiu       $s0, $s4, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1a0) {
            ctx->pc = 0x12F23Cu;
            goto label_12f23c;
        }
    }
    ctx->pc = 0x12F1A8u;
    // 0x12f1a8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f1ac: 0xc04078a  jal         func_101E28
    ctx->pc = 0x12F1ACu;
    SET_GPR_U32(ctx, 31, 0x12F1B4u);
    ctx->pc = 0x12F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1ACu;
    // 0x12f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x12F1ACu, 0x12F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1B4u;
label_12f1b4:
    // 0x12f1b4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x12f1b4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x12f1b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1bc: 0x0  nop
    ctx->pc = 0x12f1bcu;
    // NOP
    // 0x12f1c0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x12f1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f1c4: 0x0  nop
    ctx->pc = 0x12f1c4u;
    // NOP
    // 0x12f1c8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x12F1C8u;
    {
        const bool branch_taken_0x12f1c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1C8u;
        // 0x12f1cc: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1c8) {
            ctx->pc = 0x12F210u;
            goto label_12f210;
        }
    }
    ctx->pc = 0x12F1D0u;
    // 0x12f1d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f1d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12f1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f1d8: 0xc6810130  lwc1        $f1, 0x130($s4)
    ctx->pc = 0x12f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f1dc: 0x0  nop
    ctx->pc = 0x12f1dcu;
    // NOP
    // 0x12f1e0: 0x0  nop
    ctx->pc = 0x12f1e0u;
    // NOP
    // 0x12f1e4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x12f1e4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x12f1e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12f1e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12f1ec: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x12f1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12f1f0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f1f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12f1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12f1f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x12f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12f1fc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x12f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f200: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12f200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12f204: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x12f204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12f208: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x12f208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f20c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x12f20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_12f210:
    // 0x12f210: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12f210u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f214: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12f218: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x12f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12f21c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x12f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f220: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F220u;
    {
        const bool branch_taken_0x12f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F220u;
        // 0x12f224: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f220) {
            ctx->pc = 0x12F23Cu;
            goto label_12f23c;
        }
    }
    ctx->pc = 0x12F228u;
    // 0x12f228: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12f228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f22c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x12f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f230: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12f230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12f234: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12f234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12f238: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12f238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12f23c:
    // 0x12f23c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x12f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12f240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F240u;
    {
        const bool branch_taken_0x12f240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F240u;
        // 0x12f244: 0x8fa300e8  lw          $v1, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f240) {
            ctx->pc = 0x12F250u;
            goto label_12f250;
        }
    }
    ctx->pc = 0x12F248u;
    // 0x12f248: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x12f248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x12f24c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_12f250:
    // 0x12f250: 0x92820180  lbu         $v0, 0x180($s4)
    ctx->pc = 0x12f250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
label_12f254:
    // 0x12f254: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x12f254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12f258: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x12f258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12f25c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x12f25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12f260: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x12f260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12f264: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x12f264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12f268: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x12f268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12f26c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12f26cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12f270: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x12f270u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f274: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x12f274u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f278: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12f278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f27c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F27Cu;
        // 0x12f280: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F284u;
    // 0x12f284: 0x0  nop
    ctx->pc = 0x12f284u;
    // NOP
    ctx->pc = 0x12f288u;
}
