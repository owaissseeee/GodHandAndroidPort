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

// Function: func_00123160
// Address: 0x123160 - 0x123460
void func_00123160_0x123160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00123160_0x123160");
#endif

    switch (ctx->pc) {
        case 0x1231c4u: goto label_1231c4;
        default: break;
    }

    ctx->pc = 0x123160u;

    // 0x123160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x123160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x123164: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x123164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x123168: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x123168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12316c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12316cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123170: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x123174: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x123174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x123178: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x123178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x12317c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12317Cu;
    {
        const bool branch_taken_0x12317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12317Cu;
        // 0x123180: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12317c) {
            ctx->pc = 0x1231B4u;
            goto label_1231b4;
        }
    }
    ctx->pc = 0x123184u;
    // 0x123184: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x123184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x123188: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x123188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x12318c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x12318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x123190: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x123190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x123194: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x123194u;
    {
        const bool branch_taken_0x123194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123194u;
        // 0x123198: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123194) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x12319Cu;
    // 0x12319c: 0xc600024c  lwc1        $f0, 0x24C($s0)
    ctx->pc = 0x12319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1231a0: 0xe460024c  swc1        $f0, 0x24C($v1)
    ctx->pc = 0x1231a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
    // 0x1231a4: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x1231a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x1231a8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1231a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1231ac: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1231ACu;
    {
        const bool branch_taken_0x1231ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231ACu;
        // 0x1231b0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231ac) {
            ctx->pc = 0x123440u;
            goto label_123440;
        }
    }
    ctx->pc = 0x1231B4u;
label_1231b4:
    // 0x1231b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1231b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1231b8: 0x24513050  addiu       $s1, $v0, 0x3050
    ctx->pc = 0x1231b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x1231bc: 0xc04e3e2  jal         func_138F88
    ctx->pc = 0x1231BCu;
    SET_GPR_U32(ctx, 31, 0x1231C4u);
    ctx->pc = 0x1231C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231BCu;
    // 0x1231c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F88u, 0x1231BCu, 0x1231C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231C4u;
label_1231c4:
    // 0x1231c4: 0x50400091  beql        $v0, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x1231C4u;
    {
        const bool branch_taken_0x1231c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231c4) {
            ctx->pc = 0x1231C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1231C4u;
            // 0x1231c8: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12340Cu;
            goto label_12340c;
        }
    }
    ctx->pc = 0x1231CCu;
    // 0x1231cc: 0x1220009d  beqz        $s1, . + 4 + (0x9D << 2)
    ctx->pc = 0x1231CCu;
    {
        const bool branch_taken_0x1231cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231CCu;
        // 0x1231d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231cc) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x1231D4u;
    // 0x1231d4: 0x8e230520  lw          $v1, 0x520($s1)
    ctx->pc = 0x1231d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1312)));
    // 0x1231d8: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1231D8u;
    {
        const bool branch_taken_0x1231d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231D8u;
        // 0x1231dc: 0x26240210  addiu       $a0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231d8) {
            ctx->pc = 0x1232E0u;
            goto label_1232e0;
        }
    }
    ctx->pc = 0x1231E0u;
    // 0x1231e0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1231e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1231e4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1231e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1231e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1231e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1231ec: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1231ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1231f0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1231f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1231f4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1231f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1231f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1231f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1231fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1231fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123200: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x123200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123204: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x123204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123208: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x123208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12320c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12320cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x123210: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x123210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x123214: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x123214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x123218: 0x0  nop
    ctx->pc = 0x123218u;
    // NOP
    // 0x12321c: 0x0  nop
    ctx->pc = 0x12321cu;
    // NOP
    // 0x123220: 0x46010044  c1          0x10044
    ctx->pc = 0x123220u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x123224: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x123228: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x123228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x12322c: 0xc462d490  lwc1        $f2, -0x2B70($v1)
    ctx->pc = 0x12322cu;
    { uint32_t bits = FAST_READ32(0x3BD490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x123230: 0xc440d494  lwc1        $f0, -0x2B6C($v0)
    ctx->pc = 0x123230u;
    { uint32_t bits = FAST_READ32(0x3BD494u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123234: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x123234u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x123238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12323c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12323cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x123240: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x123240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x123244: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x123244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x123248: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x123248u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x12324c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x12324cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123250: 0x0  nop
    ctx->pc = 0x123250u;
    // NOP
    // 0x123254: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x123254u;
    {
        const bool branch_taken_0x123254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123254u;
        // 0x123258: 0xe7a30020  swc1        $f3, 0x20($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123254) {
            ctx->pc = 0x123260u;
            goto label_123260;
        }
    }
    ctx->pc = 0x12325Cu;
    // 0x12325c: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x12325cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_123260:
    // 0x123260: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x123260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123264: 0x0  nop
    ctx->pc = 0x123264u;
    // NOP
    // 0x123268: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x123268u;
    {
        const bool branch_taken_0x123268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123268u;
        // 0x12326c: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123268) {
            ctx->pc = 0x123274u;
            goto label_123274;
        }
    }
    ctx->pc = 0x123270u;
    // 0x123270: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x123270u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_123274:
    // 0x123274: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x123274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x123278: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x123278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x12327c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12327cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123280: 0x0  nop
    ctx->pc = 0x123280u;
    // NOP
    // 0x123284: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x123284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123288: 0x0  nop
    ctx->pc = 0x123288u;
    // NOP
    // 0x12328c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x12328Cu;
    {
        const bool branch_taken_0x12328c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12328Cu;
        // 0x123290: 0xe602024c  swc1        $f2, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12328c) {
            ctx->pc = 0x1232BCu;
            goto label_1232bc;
        }
    }
    ctx->pc = 0x123294u;
    // 0x123294: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x123294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x123298: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x123298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x12329c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x12329cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1232a0: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1232A0u;
    {
        const bool branch_taken_0x1232a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232A0u;
        // 0x1232a4: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232a0) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x1232A8u;
    // 0x1232a8: 0xe462024c  swc1        $f2, 0x24C($v1)
    ctx->pc = 0x1232a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
    // 0x1232ac: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x1232acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x1232b0: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1232b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1232b4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1232B4u;
    {
        const bool branch_taken_0x1232b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232B4u;
        // 0x1232b8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232b4) {
            ctx->pc = 0x123440u;
            goto label_123440;
        }
    }
    ctx->pc = 0x1232BCu;
label_1232bc:
    // 0x1232bc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1232c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1232c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1232c4: 0x34a5ffef  ori         $a1, $a1, 0xFFEF
    ctx->pc = 0x1232c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
    // 0x1232c8: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x1232c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x1232cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1232ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1232d0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1232D0u;
    {
        const bool branch_taken_0x1232d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232D0u;
        // 0x1232d4: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232d0) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x1232D8u;
    // 0x1232d8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1232D8u;
    {
        const bool branch_taken_0x1232d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232D8u;
        // 0x1232dc: 0xe462024c  swc1        $f2, 0x24C($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232d8) {
            ctx->pc = 0x123434u;
            goto label_123434;
        }
    }
    ctx->pc = 0x1232E0u;
label_1232e0:
    // 0x1232e0: 0x54600059  bnel        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1232E0u;
    {
        const bool branch_taken_0x1232e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1232e0) {
            ctx->pc = 0x1232E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1232E0u;
            // 0x1232e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123448u;
            goto label_123448;
        }
    }
    ctx->pc = 0x1232E8u;
    // 0x1232e8: 0x9e220528  lwu         $v0, 0x528($s1)
    ctx->pc = 0x1232e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x1232ec: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1232ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1232f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1232f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1232f4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1232F4u;
    {
        const bool branch_taken_0x1232f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232F4u;
        // 0x1232f8: 0x26240210  addiu       $a0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232f4) {
            ctx->pc = 0x123408u;
            goto label_123408;
        }
    }
    ctx->pc = 0x1232FCu;
    // 0x1232fc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x123300: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x123300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x123304: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x123304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123308: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x123308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12330c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12330cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x123310: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x123310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123314: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x123314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123318: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12331c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123320: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x123320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123324: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x123324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123328: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x123328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x12332c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12332cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x123330: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x123330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x123334: 0x0  nop
    ctx->pc = 0x123334u;
    // NOP
    // 0x123338: 0x0  nop
    ctx->pc = 0x123338u;
    // NOP
    // 0x12333c: 0x46010044  c1          0x10044
    ctx->pc = 0x12333cu;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x123340: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x123340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x123344: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x123344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x123348: 0xc462d498  lwc1        $f2, -0x2B68($v1)
    ctx->pc = 0x123348u;
    { uint32_t bits = FAST_READ32(0x3BD498u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12334c: 0xc440d49c  lwc1        $f0, -0x2B64($v0)
    ctx->pc = 0x12334cu;
    { uint32_t bits = FAST_READ32(0x3BD49Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123350: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x123350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x123354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123358: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x123358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12335c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12335cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x123360: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x123360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x123364: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x123364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x123368: 0x0  nop
    ctx->pc = 0x123368u;
    // NOP
    // 0x12336c: 0x0  nop
    ctx->pc = 0x12336cu;
    // NOP
    // 0x123370: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x123370u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x123374: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x123374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123378: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x123378u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x12337c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12337Cu;
    {
        const bool branch_taken_0x12337c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12337Cu;
        // 0x123380: 0xe601024c  swc1        $f1, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12337c) {
            ctx->pc = 0x123388u;
            goto label_123388;
        }
    }
    ctx->pc = 0x123384u;
    // 0x123384: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x123384u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_123388:
    // 0x123388: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x123388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12338c: 0x0  nop
    ctx->pc = 0x12338cu;
    // NOP
    // 0x123390: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x123390u;
    {
        const bool branch_taken_0x123390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123390u;
        // 0x123394: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123390) {
            ctx->pc = 0x12339Cu;
            goto label_12339c;
        }
    }
    ctx->pc = 0x123398u;
    // 0x123398: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x123398u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_12339c:
    // 0x12339c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x12339cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1233a0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1233a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1233a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1233a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1233a8: 0x0  nop
    ctx->pc = 0x1233a8u;
    // NOP
    // 0x1233ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1233acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1233b0: 0x0  nop
    ctx->pc = 0x1233b0u;
    // NOP
    // 0x1233b4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1233B4u;
    {
        const bool branch_taken_0x1233b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1233B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233B4u;
        // 0x1233b8: 0xe601024c  swc1        $f1, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233b4) {
            ctx->pc = 0x1233E4u;
            goto label_1233e4;
        }
    }
    ctx->pc = 0x1233BCu;
    // 0x1233bc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1233bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1233c0: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x1233c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x1233c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1233c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1233c8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1233C8u;
    {
        const bool branch_taken_0x1233c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233C8u;
        // 0x1233cc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233c8) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x1233D0u;
    // 0x1233d0: 0xe461024c  swc1        $f1, 0x24C($v1)
    ctx->pc = 0x1233d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
    // 0x1233d4: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x1233d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x1233d8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1233d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1233dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1233DCu;
    {
        const bool branch_taken_0x1233dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233DCu;
        // 0x1233e0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233dc) {
            ctx->pc = 0x123440u;
            goto label_123440;
        }
    }
    ctx->pc = 0x1233E4u;
label_1233e4:
    // 0x1233e4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1233e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1233e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1233e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1233ec: 0x34a5ffef  ori         $a1, $a1, 0xFFEF
    ctx->pc = 0x1233ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
    // 0x1233f0: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x1233f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x1233f4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1233f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1233f8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1233F8u;
    {
        const bool branch_taken_0x1233f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233F8u;
        // 0x1233fc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233f8) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x123400u;
    // 0x123400: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x123400u;
    {
        const bool branch_taken_0x123400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123400u;
        // 0x123404: 0xe461024c  swc1        $f1, 0x24C($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123400) {
            ctx->pc = 0x123434u;
            goto label_123434;
        }
    }
    ctx->pc = 0x123408u;
label_123408:
    // 0x123408: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x123408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_12340c:
    // 0x12340c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12340cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x123410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123418: 0x34a5ffef  ori         $a1, $a1, 0xFFEF
    ctx->pc = 0x123418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
    // 0x12341c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x12341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x123420: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x123420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x123424: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x123424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x123428: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123428u;
    {
        const bool branch_taken_0x123428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123428u;
        // 0x12342c: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123428) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x123430u;
    // 0x123430: 0xe460024c  swc1        $f0, 0x24C($v1)
    ctx->pc = 0x123430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
label_123434:
    // 0x123434: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x123434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x123438: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x123438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x12343c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x12343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_123440:
    // 0x123440: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x123440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_123444:
    // 0x123444: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x123444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_123448:
    // 0x123448: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x123448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12344c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123450: 0x3e00008  jr          $ra
    ctx->pc = 0x123450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123450u;
        // 0x123454: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123458u;
    // 0x123458: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x123458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12345c: 0x0  nop
    ctx->pc = 0x12345cu;
    // NOP
    ctx->pc = 0x123460u;
}
