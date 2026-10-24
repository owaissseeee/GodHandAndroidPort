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

// Function: func_002BC0F8
// Address: 0x2bc0f8 - 0x2bc470
void func_002BC0F8_0x2bc0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BC0F8_0x2bc0f8");
#endif

    switch (ctx->pc) {
        case 0x2bc270u: goto label_2bc270;
        case 0x2bc298u: goto label_2bc298;
        case 0x2bc2f4u: goto label_2bc2f4;
        case 0x2bc368u: goto label_2bc368;
        case 0x2bc400u: goto label_2bc400;
        case 0x2bc424u: goto label_2bc424;
        default: break;
    }

    ctx->pc = 0x2bc0f8u;

    // 0x2bc0f8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2bc0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2bc0fc: 0x460068c6  mov.s       $f3, $f13
    ctx->pc = 0x2bc0fcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[13]);
    // 0x2bc100: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2bc100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2bc104: 0x46007b46  mov.s       $f13, $f15
    ctx->pc = 0x2bc104u;
    ctx->f[13] = FPU_MOV_S(ctx->f[15]);
    // 0x2bc108: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2bc108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2bc10c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2bc10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2bc110: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2bc110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2bc114: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2bc114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2bc118: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bc11c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2bc11cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bc120: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2bc120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2bc124: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2bc124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bc128: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bc128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc12c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bc12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc130: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bc130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc134: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2bc134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc138: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x2bc138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc13c: 0x0  nop
    ctx->pc = 0x2bc13cu;
    // NOP
    // 0x2bc140: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2BC140u;
    {
        const bool branch_taken_0x2bc140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc140) {
            ctx->pc = 0x2BC1D4u;
            goto label_2bc1d4;
        }
    }
    ctx->pc = 0x2BC148u;
    // 0x2bc148: 0x13a40007  beq         $sp, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC148u;
    {
        const bool branch_taken_0x2bc148 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC148u;
        // 0x2bc14c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc148) {
            ctx->pc = 0x2BC168u;
            goto label_2bc168;
        }
    }
    ctx->pc = 0x2BC150u;
    // 0x2bc150: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2bc150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc154: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2bc154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc158: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2bc158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc15c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bc15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bc160: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2bc160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bc164: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bc164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bc168:
    // 0x2bc168: 0x12050007  beq         $s0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC168u;
    {
        const bool branch_taken_0x2bc168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC168u;
        // 0x2bc16c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc168) {
            ctx->pc = 0x2BC188u;
            goto label_2bc188;
        }
    }
    ctx->pc = 0x2BC170u;
    // 0x2bc170: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bc170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc174: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2bc174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc178: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2bc178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc17c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bc17cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bc180: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bc180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc184: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2bc184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2bc188:
    // 0x2bc188: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2bc188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc18c: 0x12460007  beq         $s2, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC18Cu;
    {
        const bool branch_taken_0x2bc18c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC18Cu;
        // 0x2bc190: 0x46001d86  mov.s       $f22, $f3 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc18c) {
            ctx->pc = 0x2BC1ACu;
            goto label_2bc1ac;
        }
    }
    ctx->pc = 0x2BC194u;
    // 0x2bc194: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2bc194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc198: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2bc198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc19c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2bc19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc1a0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2bc1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bc1a4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2bc1a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bc1a8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2bc1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2bc1ac:
    // 0x2bc1ac: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2bc1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc1b0: 0x1227002a  beq         $s1, $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2BC1B0u;
    {
        const bool branch_taken_0x2bc1b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1B0u;
        // 0x2bc1b4: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1b0) {
            ctx->pc = 0x2BC25Cu;
            goto label_2bc25c;
        }
    }
    ctx->pc = 0x2BC1B8u;
    // 0x2bc1b8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2bc1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc1bc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2bc1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc1c0: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2bc1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc1c4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2bc1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc1c8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2bc1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc1cc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2BC1CCu;
    {
        const bool branch_taken_0x2bc1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1CCu;
        // 0x2bc1d0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1cc) {
            ctx->pc = 0x2BC25Cu;
            goto label_2bc25c;
        }
    }
    ctx->pc = 0x2BC1D4u;
label_2bc1d4:
    // 0x2bc1d4: 0x13a60007  beq         $sp, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC1D4u;
    {
        const bool branch_taken_0x2bc1d4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1D4u;
        // 0x2bc1d8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1d4) {
            ctx->pc = 0x2BC1F4u;
            goto label_2bc1f4;
        }
    }
    ctx->pc = 0x2BC1DCu;
    // 0x2bc1dc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2bc1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc1e0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2bc1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc1e4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2bc1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc1e8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bc1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bc1ec: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2bc1ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bc1f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bc1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bc1f4:
    // 0x2bc1f4: 0x12070007  beq         $s0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC1F4u;
    {
        const bool branch_taken_0x2bc1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F4u;
        // 0x2bc1f8: 0x46007546  mov.s       $f21, $f14 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1f4) {
            ctx->pc = 0x2BC214u;
            goto label_2bc214;
        }
    }
    ctx->pc = 0x2BC1FCu;
    // 0x2bc1fc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2bc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc200: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2bc200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc204: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2bc204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc208: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bc208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bc20c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bc20cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc210: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2bc210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2bc214:
    // 0x2bc214: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2bc214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc218: 0x12440007  beq         $s2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC218u;
    {
        const bool branch_taken_0x2bc218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC218u;
        // 0x2bc21c: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc218) {
            ctx->pc = 0x2BC238u;
            goto label_2bc238;
        }
    }
    ctx->pc = 0x2BC220u;
    // 0x2bc220: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2bc220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc224: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2bc224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc228: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2bc228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc22c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2bc22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bc230: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2bc230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bc234: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2bc234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2bc238:
    // 0x2bc238: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2bc238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc23c: 0x12250007  beq         $s1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC23Cu;
    {
        const bool branch_taken_0x2bc23c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC23Cu;
        // 0x2bc240: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc23c) {
            ctx->pc = 0x2BC25Cu;
            goto label_2bc25c;
        }
    }
    ctx->pc = 0x2BC244u;
    // 0x2bc244: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bc244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc248: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2bc248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc24c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2bc24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc250: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2bc250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc254: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2bc254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc258: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2bc258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2bc25c:
    // 0x2bc25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc260: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc264: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bc264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc268: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BC268u;
    SET_GPR_U32(ctx, 31, 0x2BC270u);
    ctx->pc = 0x2BC26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC268u;
    // 0x2bc26c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BC268u, 0x2BC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC270u;
label_2bc270:
    // 0x2bc270: 0x4615a040  add.s       $f1, $f20, $f21
    ctx->pc = 0x2bc270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2bc274: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bc274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc278: 0x0  nop
    ctx->pc = 0x2bc278u;
    // NOP
    // 0x2bc27c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2BC27Cu;
    {
        const bool branch_taken_0x2bc27c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC27Cu;
        // 0x2bc280: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc27c) {
            ctx->pc = 0x2BC2F4u;
            goto label_2bc2f4;
        }
    }
    ctx->pc = 0x2BC284u;
    // 0x2bc284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc288: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc28c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bc28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc290: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BC290u;
    SET_GPR_U32(ctx, 31, 0x2BC298u);
    ctx->pc = 0x2BC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC290u;
    // 0x2bc294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BC290u, 0x2BC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC298u;
label_2bc298:
    // 0x2bc298: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bc298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc29c: 0x0  nop
    ctx->pc = 0x2bc29cu;
    // NOP
    // 0x2bc2a0: 0x45010068  bc1t        . + 4 + (0x68 << 2)
    ctx->pc = 0x2BC2A0u;
    {
        const bool branch_taken_0x2bc2a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2A0u;
        // 0x2bc2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2a0) {
            ctx->pc = 0x2BC444u;
            goto label_2bc444;
        }
    }
    ctx->pc = 0x2BC2A8u;
    // 0x2bc2a8: 0x0  nop
    ctx->pc = 0x2bc2a8u;
    // NOP
    // 0x2bc2ac: 0x0  nop
    ctx->pc = 0x2bc2acu;
    // NOP
    // 0x2bc2b0: 0x4615b043  div.s       $f1, $f22, $f21
    ctx->pc = 0x2bc2b0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[21]);
    // 0x2bc2b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc2b8: 0x0  nop
    ctx->pc = 0x2bc2b8u;
    // NOP
    // 0x2bc2bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc2c0: 0x0  nop
    ctx->pc = 0x2bc2c0u;
    // NOP
    // 0x2bc2c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC2C4u;
    {
        const bool branch_taken_0x2bc2c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C4u;
        // 0x2bc2c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2c4) {
            ctx->pc = 0x2BC2D4u;
            goto label_2bc2d4;
        }
    }
    ctx->pc = 0x2BC2CCu;
    // 0x2bc2cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc2ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bc2d0: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x2bc2d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_2bc2d4:
    // 0x2bc2d4: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2bc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2bc2d8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC2D8u;
    {
        const bool branch_taken_0x2bc2d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2D8u;
        // 0x2bc2dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2d8) {
            ctx->pc = 0x2BC2FCu;
            goto label_2bc2fc;
        }
    }
    ctx->pc = 0x2BC2E0u;
    // 0x2bc2e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bc2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bc2e4: 0x0  nop
    ctx->pc = 0x2bc2e4u;
    // NOP
    // 0x2bc2e8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2bc2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2bc2ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC2ECu;
    {
        const bool branch_taken_0x2bc2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2ec) {
            ctx->pc = 0x2BC314u;
            goto label_2bc314;
        }
    }
    ctx->pc = 0x2BC2F4u;
label_2bc2f4:
    // 0x2bc2f4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2BC2F4u;
    {
        const bool branch_taken_0x2bc2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2F4u;
        // 0x2bc2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2f4) {
            ctx->pc = 0x2BC444u;
            goto label_2bc444;
        }
    }
    ctx->pc = 0x2BC2FCu;
label_2bc2fc:
    // 0x2bc2fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bc300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bc304: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bc304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bc308: 0x0  nop
    ctx->pc = 0x2bc308u;
    // NOP
    // 0x2bc30c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2bc30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2bc310: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2bc310u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2bc314:
    // 0x2bc314: 0x0  nop
    ctx->pc = 0x2bc314u;
    // NOP
    // 0x2bc318: 0x0  nop
    ctx->pc = 0x2bc318u;
    // NOP
    // 0x2bc31c: 0x460db543  div.s       $f21, $f22, $f13
    ctx->pc = 0x2bc31cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[13]);
    // 0x2bc320: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bc320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc324: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x2bc324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bc328: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bc328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc32c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bc32cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc330: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bc330u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc334: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc338: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2bc338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc33c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bc33cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc340: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc344: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc348: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc34c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc350: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bc354: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bc358: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc35c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bc35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc360: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BC360u;
    SET_GPR_U32(ctx, 31, 0x2BC368u);
    ctx->pc = 0x2BC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC360u;
    // 0x2bc364: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BC360u, 0x2BC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC368u;
label_2bc368:
    // 0x2bc368: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bc368u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc36c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc370: 0x0  nop
    ctx->pc = 0x2bc370u;
    // NOP
    // 0x2bc374: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bc374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc378: 0x0  nop
    ctx->pc = 0x2bc378u;
    // NOP
    // 0x2bc37c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC37Cu;
    {
        const bool branch_taken_0x2bc37c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC37Cu;
        // 0x2bc380: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc37c) {
            ctx->pc = 0x2BC3C0u;
            goto label_2bc3c0;
        }
    }
    ctx->pc = 0x2BC384u;
    // 0x2bc384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc38c: 0x0  nop
    ctx->pc = 0x2bc38cu;
    // NOP
    // 0x2bc390: 0x0  nop
    ctx->pc = 0x2bc390u;
    // NOP
    // 0x2bc394: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2bc394u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2bc398: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x2bc398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc39c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc3a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2bc3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2bc3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2bc3a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bc3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bc3ac: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bc3acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bc3b0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bc3b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bc3b4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2bc3b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bc3b8: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2bc3b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc3bc: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x2bc3bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2bc3c0:
    // 0x2bc3c0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bc3c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc3c4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc3c8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3cc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc3d0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc3d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bc3d8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bc3dc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc3e0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc3e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc3e4: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2bc3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bc3e8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bc3e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bc3ec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bc3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc3f0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc3f4: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BC3F4u;
    {
        const bool branch_taken_0x2bc3f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F4u;
        // 0x2bc3f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3f4) {
            ctx->pc = 0x2BC440u;
            goto label_2bc440;
        }
    }
    ctx->pc = 0x2BC3FCu;
    // 0x2bc3fc: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2bc3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2bc400:
    // 0x2bc400: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bc400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc404: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2bc404u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc408: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc40c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bc40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc414: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bc418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc41c: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BC41Cu;
    SET_GPR_U32(ctx, 31, 0x2BC424u);
    ctx->pc = 0x2BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC41Cu;
    // 0x2bc420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BC41Cu, 0x2BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC424u;
label_2bc424:
    // 0x2bc424: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bc424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc428: 0x0  nop
    ctx->pc = 0x2bc428u;
    // NOP
    // 0x2bc42c: 0x4501ffb1  bc1t        . + 4 + (-0x4F << 2)
    ctx->pc = 0x2BC42Cu;
    {
        const bool branch_taken_0x2bc42c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC42Cu;
        // 0x2bc430: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc42c) {
            ctx->pc = 0x2BC2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc2f4;
        }
    }
    ctx->pc = 0x2BC434u;
    // 0x2bc434: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2bc434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2bc438: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BC438u;
    {
        const bool branch_taken_0x2bc438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc438) {
            ctx->pc = 0x2BC400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc400;
        }
    }
    ctx->pc = 0x2BC440u;
label_2bc440:
    // 0x2bc440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc444:
    // 0x2bc444: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2bc444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc448: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2bc448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bc44c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2bc44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc450: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2bc450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc454: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2bc454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc458: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bc458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc45c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2bc45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bc460: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2bc460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bc464: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2bc464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc468: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC468u;
        // 0x2bc46c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC470u;
}
