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

// Function: func_001C7138
// Address: 0x1c7138 - 0x1c7310
void func_001C7138_0x1c7138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C7138_0x1c7138");
#endif

    ctx->pc = 0x1c7138u;

    // 0x1c7138: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1c7138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c713c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7140: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C7140u;
    {
        const bool branch_taken_0x1c7140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7140u;
        // 0x1c7144: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7140) {
            ctx->pc = 0x1C7228u;
            goto label_1c7228;
        }
    }
    ctx->pc = 0x1C7148u;
    // 0x1c7148: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1c714c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1c714cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7150: 0x24860070  addiu       $a2, $a0, 0x70
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1c7154: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x1c7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1c7158: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1c7158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c715c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7160: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7160u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7164: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c7164u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7168: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c716c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7170: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c7170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c7174: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c7174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7178: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7178u;
    {
        const bool branch_taken_0x1c7178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7178u;
        // 0x1c717c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7178) {
            ctx->pc = 0x1C7194u;
            goto label_1c7194;
        }
    }
    ctx->pc = 0x1C7180u;
    // 0x1c7180: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c7180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7184: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1c7184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1c7188: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c7188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c718c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7190: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c7190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c7194:
    // 0x1c7194: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x1c7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1c7198: 0x24850080  addiu       $a1, $a0, 0x80
    ctx->pc = 0x1c7198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1c719c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x1c719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1c71a0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c71a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c71a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c71a8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c71a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c71ac: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c71acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c71b0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c71b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c71b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c71b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c71b8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c71b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c71bc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c71bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c71c0: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C71C0u;
    {
        const bool branch_taken_0x1c71c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71C0u;
        // 0x1c71c4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71c0) {
            ctx->pc = 0x1C71DCu;
            goto label_1c71dc;
        }
    }
    ctx->pc = 0x1C71C8u;
    // 0x1c71c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c71cc: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x1c71ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1c71d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c71d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c71d4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c71d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c71d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c71d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c71dc:
    // 0x1c71dc: 0x248200b0  addiu       $v0, $a0, 0xB0
    ctx->pc = 0x1c71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1c71e0: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C71E0u;
    {
        const bool branch_taken_0x1c71e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c71e0) {
            ctx->pc = 0x1C71E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C71E0u;
            // 0x1c71e4: 0x248200c0  addiu       $v0, $a0, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7204u;
            goto label_1c7204;
        }
    }
    ctx->pc = 0x1C71E8u;
    // 0x1c71e8: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x1c71e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c71ec: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x1c71ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x1c71f0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1c71f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c71f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c71f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c71f8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c71f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c71fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c71fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c7200: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1c7200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1c7204:
    // 0x1c7204: 0x1045003f  beq         $v0, $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C7204u;
    {
        const bool branch_taken_0x1c7204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c7204) {
            ctx->pc = 0x1C7304u;
            goto label_1c7304;
        }
    }
    ctx->pc = 0x1C720Cu;
    // 0x1c720c: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1c720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7210: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x1c7210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1c7214: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1c7214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7218: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c721c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1c721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7220: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C7220u;
    {
        const bool branch_taken_0x1c7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7220u;
        // 0x1c7224: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7220) {
            ctx->pc = 0x1C7304u;
            goto label_1c7304;
        }
    }
    ctx->pc = 0x1C7228u;
label_1c7228:
    // 0x1c7228: 0x248200d0  addiu       $v0, $a0, 0xD0
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1c722c: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1c722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1c7230: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7230u;
    {
        const bool branch_taken_0x1c7230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c7230) {
            ctx->pc = 0x1C7234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7230u;
            // 0x1c7234: 0x248200e0  addiu       $v0, $a0, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7254u;
            goto label_1c7254;
        }
    }
    ctx->pc = 0x1C7238u;
    // 0x1c7238: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x1c7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c723c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1c723cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1c7240: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1c7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7244: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c7244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c7248: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1c7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c724c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c7250: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1c7250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_1c7254:
    // 0x1c7254: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1c7254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1c7258: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7258u;
    {
        const bool branch_taken_0x1c7258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c7258) {
            ctx->pc = 0x1C725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7258u;
            // 0x1c725c: 0x24820090  addiu       $v0, $a0, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C727Cu;
            goto label_1c727c;
        }
    }
    ctx->pc = 0x1C7260u;
    // 0x1c7260: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1c7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7264: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x1c7264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1c7268: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1c7268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c726c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c726cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c7270: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7274: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c7274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c7278: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_1c727c:
    // 0x1c727c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1c727cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7280: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1c7284: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c7284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7288: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c728c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c728cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7290: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c7290u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7294: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c7294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c7298: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c729c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c729cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c72a0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c72a4: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C72A4u;
    {
        const bool branch_taken_0x1c72a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72A4u;
        // 0x1c72a8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72a4) {
            ctx->pc = 0x1C72C0u;
            goto label_1c72c0;
        }
    }
    ctx->pc = 0x1C72ACu;
    // 0x1c72ac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c72b0: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x1c72b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x1c72b4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c72b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c72b8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c72bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c72bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c72c0:
    // 0x1c72c0: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x1c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1c72c4: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1c72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1c72c8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1c72c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c72cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c72ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c72d0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c72d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c72d4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c72d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c72d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c72d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c72dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c72dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c72e0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c72e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c72e4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c72e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c72e8: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C72E8u;
    {
        const bool branch_taken_0x1c72e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72E8u;
        // 0x1c72ec: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72e8) {
            ctx->pc = 0x1C7304u;
            goto label_1c7304;
        }
    }
    ctx->pc = 0x1C72F0u;
    // 0x1c72f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c72f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c72f4: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x1c72f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1c72f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c72f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c72fc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7300: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c7300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c7304:
    // 0x1c7304: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7304u;
        // 0x1c7308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C730Cu;
    // 0x1c730c: 0x0  nop
    ctx->pc = 0x1c730cu;
    // NOP
    ctx->pc = 0x1c7310u;
}
