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

// Function: func_0026E258
// Address: 0x26e258 - 0x26e458
void func_0026E258_0x26e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026E258_0x26e258");
#endif

    switch (ctx->pc) {
        case 0x26e27cu: goto label_26e27c;
        case 0x26e2b8u: goto label_26e2b8;
        case 0x26e424u: goto label_26e424;
        default: break;
    }

    ctx->pc = 0x26e258u;

    // 0x26e258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26e25c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x26e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x26e260: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x26e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x26e264: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x26e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x26e268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e26c: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x26e26cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x26e270: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26e274: 0xc0a47f6  jal         func_291FD8
    ctx->pc = 0x26E274u;
    SET_GPR_U32(ctx, 31, 0x26E27Cu);
    ctx->pc = 0x26E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E274u;
    // 0x26e278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FD8u, 0x26E274u, 0x26E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E27Cu;
label_26e27c:
    // 0x26e27c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x26E27Cu;
    {
        const bool branch_taken_0x26e27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E27Cu;
        // 0x26e280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e27c) {
            ctx->pc = 0x26E440u;
            goto label_26e440;
        }
    }
    ctx->pc = 0x26E284u;
    // 0x26e284: 0xc60116c0  lwc1        $f1, 0x16C0($s0)
    ctx->pc = 0x26e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e288: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e28c: 0x0  nop
    ctx->pc = 0x26e28cu;
    // NOP
    // 0x26e290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26e290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e294: 0x0  nop
    ctx->pc = 0x26e294u;
    // NOP
    // 0x26e298: 0x4503006a  bc1tl       . + 4 + (0x6A << 2)
    ctx->pc = 0x26E298u;
    {
        const bool branch_taken_0x26e298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e298) {
            ctx->pc = 0x26E29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E298u;
            // 0x26e29c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E444u;
            goto label_26e444;
        }
    }
    ctx->pc = 0x26E2A0u;
    // 0x26e2a0: 0x26220520  addiu       $v0, $s1, 0x520
    ctx->pc = 0x26e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x26e2a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26e2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e2a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x26e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26e2ac: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x26e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26e2b0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x26E2B0u;
    SET_GPR_U32(ctx, 31, 0x26E2B8u);
    ctx->pc = 0x26E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2B0u;
    // 0x26e2b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x26E2B0u, 0x26E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2B8u;
label_26e2b8:
    // 0x26e2b8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x26e2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x26e2bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e2c0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x26e2c0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x26e2c4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x26e2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e2c8: 0x0  nop
    ctx->pc = 0x26e2c8u;
    // NOP
    // 0x26e2cc: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x26E2CCu;
    {
        const bool branch_taken_0x26e2cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2CCu;
        // 0x26e2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2cc) {
            ctx->pc = 0x26E440u;
            goto label_26e440;
        }
    }
    ctx->pc = 0x26E2D4u;
    // 0x26e2d4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26e2d8: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x26e2dc: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x26e2dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x26e2e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26E2E0u;
    {
        const bool branch_taken_0x26e2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2E0u;
        // 0x26e2e4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2e0) {
            ctx->pc = 0x26E318u;
            goto label_26e318;
        }
    }
    ctx->pc = 0x26E2E8u;
    // 0x26e2e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26e2ec: 0x244257b0  addiu       $v0, $v0, 0x57B0
    ctx->pc = 0x26e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
    // 0x26e2f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e2f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e2f8: 0x800008  jr          $a0
    ctx->pc = 0x26E2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E300u: goto label_26e300;
            case 0x26E310u: goto label_26e310;
            case 0x26E318u: goto label_26e318;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E2F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26E300u;
label_26e300:
    // 0x26e300: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x26e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x26e304: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x26e304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e308: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x26E308u;
    {
        const bool branch_taken_0x26e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E308u;
        // 0x26e30c: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e308) {
            ctx->pc = 0x26E434u;
            goto label_26e434;
        }
    }
    ctx->pc = 0x26E310u;
label_26e310:
    // 0x26e310: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x26E310u;
    {
        const bool branch_taken_0x26e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E310u;
        // 0x26e314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e310) {
            ctx->pc = 0x26E440u;
            goto label_26e440;
        }
    }
    ctx->pc = 0x26E318u;
label_26e318:
    // 0x26e318: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26e31c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26e320: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26e320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e324: 0x0  nop
    ctx->pc = 0x26e324u;
    // NOP
    // 0x26e328: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x26e328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e32c: 0x0  nop
    ctx->pc = 0x26e32cu;
    // NOP
    // 0x26e330: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26E330u;
    {
        const bool branch_taken_0x26e330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E330u;
        // 0x26e334: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e330) {
            ctx->pc = 0x26E354u;
            goto label_26e354;
        }
    }
    ctx->pc = 0x26E338u;
    // 0x26e338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26e338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26e33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e340: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26e340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26e344: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x26e344u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x26e348: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x26e348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26e34c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26E34Cu;
    {
        const bool branch_taken_0x26e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E34Cu;
        // 0x26e350: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e34c) {
            ctx->pc = 0x26E39Cu;
            goto label_26e39c;
        }
    }
    ctx->pc = 0x26E354u;
label_26e354:
    // 0x26e354: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26e358: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26e358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26e35c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26e35cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e360: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x26e360u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e364: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26e364u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26e368: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26e368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26e36c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x26e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e370: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26e370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e374: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26e374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26e378: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e37c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x26e37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e380: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26e380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26e384: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26e384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26e388: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26e388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26e38c: 0x0  nop
    ctx->pc = 0x26e38cu;
    // NOP
    // 0x26e390: 0x0  nop
    ctx->pc = 0x26e390u;
    // NOP
    // 0x26e394: 0x460300c4  c1          0x300C4
    ctx->pc = 0x26e394u;
    ctx->f[3] = ps2FpuSqrt(ctx->fcr31, ctx->f[3]);
    // 0x26e398: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26e398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26e39c:
    // 0x26e39c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x26e39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x26e3a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e3a4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26e3a8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x26e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e3ac: 0x0  nop
    ctx->pc = 0x26e3acu;
    // NOP
    // 0x26e3b0: 0x0  nop
    ctx->pc = 0x26e3b0u;
    // NOP
    // 0x26e3b4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x26e3b4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x26e3b8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e3bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26e3c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26e3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26e3c4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x26e3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26e3c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26e3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26e3cc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x26e3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26e3d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26e3d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e3d4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26e3d8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26e3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e3dc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x26e3dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e3e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26e3e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26e3e4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26e3e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x26e3e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e3ec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26e3f0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x26e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3f8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e3fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26e400: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x26e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e404: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x26e404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e408: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x26e408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x26e40c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e414: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x26e414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e418: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26e418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26e41c: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x26E41Cu;
    SET_GPR_U32(ctx, 31, 0x26E424u);
    ctx->pc = 0x26E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E41Cu;
    // 0x26e420: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x26E41Cu, 0x26E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E424u;
label_26e424:
    // 0x26e424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e428: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x26e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e42c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x26e42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e430: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x26e430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_26e434:
    // 0x26e434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e438: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x26e438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e43c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x26e43cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_26e440:
    // 0x26e440: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x26e440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26e444:
    // 0x26e444: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x26e444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e448: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e44c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E44Cu;
        // 0x26e450: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E454u;
    // 0x26e454: 0x0  nop
    ctx->pc = 0x26e454u;
    // NOP
    ctx->pc = 0x26e458u;
}
