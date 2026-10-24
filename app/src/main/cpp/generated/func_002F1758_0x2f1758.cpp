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

// Function: func_002F1758
// Address: 0x2f1758 - 0x2f1a90
void func_002F1758_0x2f1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1758_0x2f1758");
#endif

    switch (ctx->pc) {
        case 0x2f18c8u: goto label_2f18c8;
        case 0x2f191cu: goto label_2f191c;
        case 0x2f1924u: goto label_2f1924;
        case 0x2f192cu: goto label_2f192c;
        case 0x2f1938u: goto label_2f1938;
        case 0x2f194cu: goto label_2f194c;
        case 0x2f195cu: goto label_2f195c;
        case 0x2f19f8u: goto label_2f19f8;
        default: break;
    }

    ctx->pc = 0x2f1758u;

    // 0x2f1758: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2f1758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2f175c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2f175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2f1760: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2f1760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2f1764: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2f1764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2f1768: 0xc443b660  lwc1        $f3, -0x49A0($v0)
    ctx->pc = 0x2f1768u;
    { uint32_t bits = FAST_READ32(0x61B660u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f176c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f1770: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f1770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f1774: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2f1774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2f1778: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2f1778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2f177c: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x2f177cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1780: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2f1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2f1784: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2f1784u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1788: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x2f1788u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x2f178c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2f178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2f1790: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2f1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2f1794: 0x2442b660  addiu       $v0, $v0, -0x49A0
    ctx->pc = 0x2f1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948448));
    // 0x2f1798: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2f1798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2f179c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f179cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17a0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2f17a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2f17a4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2f17a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2f17a8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2f17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2f17ac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f17acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f17b0: 0xa060b670  sb          $zero, -0x4990($v1)
    ctx->pc = 0x2f17b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B670u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61B670u, _value); } while (0);
    // 0x2f17b4: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
    ctx->pc = 0x2F17B4u;
    {
        const bool branch_taken_0x2f17b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17B4u;
        // 0x2f17b8: 0xa2e03bb0  sb          $zero, 0x3BB0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 15280), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17b4) {
            ctx->pc = 0x2F1A4Cu;
            goto label_2f1a4c;
        }
    }
    ctx->pc = 0x2F17BCu;
    // 0x2f17bc: 0x3c0143ff  lui         $at, 0x43FF
    ctx->pc = 0x2f17bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17407 << 16));
    // 0x2f17c0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2f17c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2f17c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f17c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f17c8: 0x0  nop
    ctx->pc = 0x2f17c8u;
    // NOP
    // 0x2f17cc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2f17ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f17d0: 0x0  nop
    ctx->pc = 0x2f17d0u;
    // NOP
    // 0x2f17d4: 0x4502009e  bc1fl       . + 4 + (0x9E << 2)
    ctx->pc = 0x2F17D4u;
    {
        const bool branch_taken_0x2f17d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f17d4) {
            ctx->pc = 0x2F17D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F17D4u;
            // 0x2f17d8: 0x27c2b660  addiu       $v0, $fp, -0x49A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948448));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F17DCu;
    // 0x2f17dc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2f17dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f17e0: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2f17e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f17e4: 0x0  nop
    ctx->pc = 0x2f17e4u;
    // NOP
    // 0x2f17e8: 0x45020099  bc1fl       . + 4 + (0x99 << 2)
    ctx->pc = 0x2F17E8u;
    {
        const bool branch_taken_0x2f17e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f17e8) {
            ctx->pc = 0x2F17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F17E8u;
            // 0x2f17ec: 0x27c2b660  addiu       $v0, $fp, -0x49A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948448));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F17F0u;
    // 0x2f17f0: 0x3c0143df  lui         $at, 0x43DF
    ctx->pc = 0x2f17f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17375 << 16));
    // 0x2f17f4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2f17f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2f17f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f17f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f17fc: 0x0  nop
    ctx->pc = 0x2f17fcu;
    // NOP
    // 0x2f1800: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2f1800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1804: 0x0  nop
    ctx->pc = 0x2f1804u;
    // NOP
    // 0x2f1808: 0x45020091  bc1fl       . + 4 + (0x91 << 2)
    ctx->pc = 0x2F1808u;
    {
        const bool branch_taken_0x2f1808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1808) {
            ctx->pc = 0x2F180Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1808u;
            // 0x2f180c: 0x27c2b660  addiu       $v0, $fp, -0x49A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948448));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A50u;
            goto label_2f1a50;
        }
    }
    ctx->pc = 0x2F1810u;
    // 0x2f1810: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f1810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1818: 0x0  nop
    ctx->pc = 0x2f1818u;
    // NOP
    // 0x2f181c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f181cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1820: 0x0  nop
    ctx->pc = 0x2f1820u;
    // NOP
    // 0x2f1824: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x2F1824u;
    {
        const bool branch_taken_0x2f1824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1824u;
        // 0x2f1828: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1824) {
            ctx->pc = 0x2F1A4Cu;
            goto label_2f1a4c;
        }
    }
    ctx->pc = 0x2F182Cu;
    // 0x2f182c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2f182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2f1830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1834: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f1834u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f1838: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f1838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2f183c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2f183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2f1840: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2f1840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2f1844: 0x2455b680  addiu       $s5, $v0, -0x4980
    ctx->pc = 0x2f1844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x2f1848: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x2f1848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2f184c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x2f184cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f1850: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x2f1850u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2f1854: 0x3c090045  lui         $t1, 0x45
    ctx->pc = 0x2f1854u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)69 << 16));
    // 0x2f1858: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f1858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f185c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x2f185cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x2f1860: 0x2a0301c1  slti        $v1, $s0, 0x1C1
    ctx->pc = 0x2f1860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)449) ? 1 : 0);
    // 0x2f1864: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x2f1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2f1868: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f1868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f186c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2f186cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2f1870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1874: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x2f1874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f1878: 0x2a6701f1  slti        $a3, $s3, 0x1F1
    ctx->pc = 0x2f1878u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)497) ? 1 : 0);
    // 0x2f187c: 0x2666fe10  addiu       $a2, $s3, -0x1F0
    ctx->pc = 0x2f187cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966800));
    // 0x2f1880: 0x138823  negu        $s1, $s3
    ctx->pc = 0x2f1880u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2f1884: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x2f1884u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x2f1888: 0x3880b  movn        $s1, $zero, $v1
    ctx->pc = 0x2f1888u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x2f188c: 0x2a620201  slti        $v0, $s3, 0x201
    ctx->pc = 0x2f188cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x2f1890: 0xc7880a  movz        $s1, $a2, $a3
    ctx->pc = 0x2f1890u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    // 0x2f1894: 0x102980a  movz        $s3, $t0, $v0
    ctx->pc = 0x2f1894u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 8));
    // 0x2f1898: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2f1898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f189c: 0x2528ec60  addiu       $t0, $t1, -0x13A0
    ctx->pc = 0x2f189cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962272));
    // 0x2f18a0: 0x89020003  lwl         $v0, 0x3($t0)
    ctx->pc = 0x2f18a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2f18a4: 0x99020000  lwr         $v0, 0x0($t0)
    ctx->pc = 0x2f18a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2f18a8: 0x81030004  lb          $v1, 0x4($t0)
    ctx->pc = 0x2f18a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2f18ac: 0x81070005  lb          $a3, 0x5($t0)
    ctx->pc = 0x2f18acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x2f18b0: 0xaba20073  swl         $v0, 0x73($sp)
    ctx->pc = 0x2f18b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2f18b4: 0xbba20070  swr         $v0, 0x70($sp)
    ctx->pc = 0x2f18b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2f18b8: 0xa3a30074  sb          $v1, 0x74($sp)
    ctx->pc = 0x2f18b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f18bc: 0xa3a70075  sb          $a3, 0x75($sp)
    ctx->pc = 0x2f18bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f18c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2F18C0u;
    SET_GPR_U32(ctx, 31, 0x2F18C8u);
    ctx->pc = 0x2F18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18C0u;
    // 0x2f18c4: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2F18C0u, 0x2F18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F18C8u;
label_2f18c8:
    // 0x2f18c8: 0x291a023  subu        $s4, $s4, $s1
    ctx->pc = 0x2f18c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2f18cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f18d0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2f18d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f18d4: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2f18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2f18d8: 0x1515023  subu        $t2, $t2, $s1
    ctx->pc = 0x2f18d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x2f18dc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2f18dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2f18e0: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x2f18e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x2f18e4: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x2f18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2f18e8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2f18e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f18ec: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2f18ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2f18f0: 0x134400  sll         $t0, $s3, 16
    ctx->pc = 0x2f18f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x2f18f4: 0x63280  sll         $a2, $a2, 10
    ctx->pc = 0x2f18f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x2f18f8: 0x104c03  sra         $t1, $s0, 16
    ctx->pc = 0x2f18f8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2f18fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f18fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1900: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2f1900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2f1904: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2f1904u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1908: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2f1908u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x2f190c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2f190cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2f1910: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2f1910u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2f1914: 0xc0e5586  jal         func_395618
    ctx->pc = 0x2F1914u;
    SET_GPR_U32(ctx, 31, 0x2F191Cu);
    ctx->pc = 0x2F1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1914u;
    // 0x2f1918: 0x24051f00  addiu       $a1, $zero, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395618u, 0x2F1914u, 0x2F191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F191Cu;
label_2f191c:
    // 0x2f191c: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x2F191Cu;
    SET_GPR_U32(ctx, 31, 0x2F1924u);
    ctx->pc = 0x2F1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F191Cu;
    // 0x2f1920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x2F191Cu, 0x2F1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1924u;
label_2f1924:
    // 0x2f1924: 0xc0e5928  jal         func_3964A0
    ctx->pc = 0x2F1924u;
    SET_GPR_U32(ctx, 31, 0x2F192Cu);
    ctx->pc = 0x3964A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3964A0u, 0x2F1924u, 0x2F192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F192Cu;
label_2f192c:
    // 0x2f192c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x2f192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f1930: 0xc0e5802  jal         func_396008
    ctx->pc = 0x2F1930u;
    SET_GPR_U32(ctx, 31, 0x2F1938u);
    ctx->pc = 0x2F1934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1930u;
    // 0x2f1934: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396008u, 0x2F1930u, 0x2F1938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1938u;
label_2f1938:
    // 0x2f1938: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2f1938u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f193c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2f193cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2f1940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1944: 0xc0e5636  jal         func_3958D8
    ctx->pc = 0x2F1944u;
    SET_GPR_U32(ctx, 31, 0x2F194Cu);
    ctx->pc = 0x2F1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1944u;
    // 0x2f1948: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3958D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3958D8u, 0x2F1944u, 0x2F194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F194Cu;
label_2f194c:
    // 0x2f194c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2f194cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2f1950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f1950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1954: 0xc0e5802  jal         func_396008
    ctx->pc = 0x2F1954u;
    SET_GPR_U32(ctx, 31, 0x2F195Cu);
    ctx->pc = 0x2F1958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1954u;
    // 0x2f1958: 0x10203e  dsrl32      $a0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396008u, 0x2F1954u, 0x2F195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F195Cu;
label_2f195c:
    // 0x2f195c: 0x1232003b  beq         $s1, $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F195Cu;
    {
        const bool branch_taken_0x2f195c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F195Cu;
        // 0x2f1960: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f195c) {
            ctx->pc = 0x2F1A4Cu;
            goto label_2f1a4c;
        }
    }
    ctx->pc = 0x2F1964u;
    // 0x2f1964: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2f1964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2f1968: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2f1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2f196c: 0x94a2b672  lhu         $v0, -0x498E($a1)
    ctx->pc = 0x2f196cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61B672u));
    // 0x2f1970: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2f1970u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f1974: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2f1974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f1978: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F1978u;
    {
        const bool branch_taken_0x2f1978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1978u;
        // 0x2f197c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1978) {
            ctx->pc = 0x2F19B4u;
            goto label_2f19b4;
        }
    }
    ctx->pc = 0x2F1980u;
    // 0x2f1980: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f1980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2f1984: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f1984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f1988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f198c: 0xc4603bb4  lwc1        $f0, 0x3BB4($v1)
    ctx->pc = 0x2f198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 15284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1994: 0xa2e23bb0  sb          $v0, 0x3BB0($s7)
    ctx->pc = 0x2f1994u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 15280), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1998: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2f1998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f199c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f199cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f19a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f19a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f19a4: 0x0  nop
    ctx->pc = 0x2f19a4u;
    // NOP
    // 0x2f19a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F19A8u;
    {
        const bool branch_taken_0x2f19a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19A8u;
        // 0x2f19ac: 0xe4603bb4  swc1        $f0, 0x3BB4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 15284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19a8) {
            ctx->pc = 0x2F19B4u;
            goto label_2f19b4;
        }
    }
    ctx->pc = 0x2F19B0u;
    // 0x2f19b0: 0xe4743bb4  swc1        $f20, 0x3BB4($v1)
    ctx->pc = 0x2f19b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 15284), bits); }
label_2f19b4:
    // 0x2f19b4: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F19B4u;
    {
        const bool branch_taken_0x2f19b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19B4u;
        // 0x2f19b8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19b4) {
            ctx->pc = 0x2F1A4Cu;
            goto label_2f1a4c;
        }
    }
    ctx->pc = 0x2F19BCu;
    // 0x2f19bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2f19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f19c0: 0x8c45b674  lw          $a1, -0x498C($v0)
    ctx->pc = 0x2f19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948468)));
    // 0x2f19c4: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x2f19c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f19c8: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2f19c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2f19cc: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F19CCu;
    {
        const bool branch_taken_0x2f19cc = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2F19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19CCu;
        // 0x2f19d0: 0x3c08003c  lui         $t0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19cc) {
            ctx->pc = 0x2F1A4Cu;
            goto label_2f1a4c;
        }
    }
    ctx->pc = 0x2F19D4u;
    // 0x2f19d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2f19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2f19d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2f19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2f19dc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2f19dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2f19e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f19e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f19e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f19e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f19e8: 0xc5023bb4  lwc1        $f2, 0x3BB4($t0)
    ctx->pc = 0x2f19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 15284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f19ec: 0x2447b680  addiu       $a3, $v0, -0x4980
    ctx->pc = 0x2f19ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x2f19f0: 0x2466b660  addiu       $a2, $v1, -0x49A0
    ctx->pc = 0x2f19f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948448));
    // 0x2f19f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f19f8:
    // 0x2f19f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2f19f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f19fc: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2f19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2f1a00: 0x2631023  subu        $v0, $s3, $v1
    ctx->pc = 0x2f1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2f1a04: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F1A04u;
    {
        const bool branch_taken_0x2f1a04 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A04u;
        // 0x2f1a08: 0x28420201  slti        $v0, $v0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a04) {
            ctx->pc = 0x2F1A3Cu;
            goto label_2f1a3c;
        }
    }
    ctx->pc = 0x2F1A0Cu;
    // 0x2f1a0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F1A0Cu;
    {
        const bool branch_taken_0x2f1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A0Cu;
        // 0x2f1a10: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a0c) {
            ctx->pc = 0x2F1A3Cu;
            goto label_2f1a3c;
        }
    }
    ctx->pc = 0x2F1A14u;
    // 0x2f1a14: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2f1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1a18: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f1a1c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2f1a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f1a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1a24: 0x0  nop
    ctx->pc = 0x2f1a24u;
    // NOP
    // 0x2f1a28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1a2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f1a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f1a30: 0x0  nop
    ctx->pc = 0x2f1a30u;
    // NOP
    // 0x2f1a34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F1A34u;
    {
        const bool branch_taken_0x2f1a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f1a34) {
            ctx->pc = 0x2F1A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1A34u;
            // 0x2f1a38: 0x46031081  sub.s       $f2, $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1A3Cu;
            goto label_2f1a3c;
        }
    }
    ctx->pc = 0x2F1A3Cu;
label_2f1a3c:
    // 0x2f1a3c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2f1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f1a40: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F1A40u;
    {
        const bool branch_taken_0x2f1a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A40u;
        // 0x2f1a44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a40) {
            ctx->pc = 0x2F19F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f19f8;
        }
    }
    ctx->pc = 0x2F1A48u;
    // 0x2f1a48: 0xe5023bb4  swc1        $f2, 0x3BB4($t0)
    ctx->pc = 0x2f1a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 15284), bits); }
label_2f1a4c:
    // 0x2f1a4c: 0x27c2b660  addiu       $v0, $fp, -0x49A0
    ctx->pc = 0x2f1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948448));
label_2f1a50:
    // 0x2f1a50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f1a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f1a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1a58: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2f1a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f1a5c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2f1a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f1a60: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2f1a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f1a64: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2f1a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f1a68: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2f1a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f1a6c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2f1a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f1a70: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2f1a70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f1a74: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2f1a74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f1a78: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2f1a78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f1a7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f1a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f1a80: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2f1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f1a84: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f1a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f1a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A88u;
        // 0x2f1a8c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1A90u;
}
