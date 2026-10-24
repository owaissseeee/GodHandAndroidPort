#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079A050
// Address: 0x79a050 - 0x79a2c8
void func_0079A050_0x79a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A050_0x79a050");
#endif

    switch (ctx->pc) {
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a080u: goto label_79a080;
        case 0x79a084u: goto label_79a084;
        case 0x79a088u: goto label_79a088;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a090u: goto label_79a090;
        case 0x79a094u: goto label_79a094;
        case 0x79a098u: goto label_79a098;
        case 0x79a09cu: goto label_79a09c;
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0b0u: goto label_79a0b0;
        case 0x79a0b4u: goto label_79a0b4;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a200u: goto label_79a200;
        case 0x79a204u: goto label_79a204;
        case 0x79a208u: goto label_79a208;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a210u: goto label_79a210;
        case 0x79a214u: goto label_79a214;
        case 0x79a218u: goto label_79a218;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a220u: goto label_79a220;
        case 0x79a224u: goto label_79a224;
        case 0x79a228u: goto label_79a228;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        case 0x79a288u: goto label_79a288;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a290u: goto label_79a290;
        case 0x79a294u: goto label_79a294;
        case 0x79a298u: goto label_79a298;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        default: break;
    }

    ctx->pc = 0x79a050u;

label_79a050:
    // 0x79a050: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_79a054:
    // 0x79a054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a058:
    // 0x79a058: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a05c:
    // 0x79a05c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a060:
    // 0x79a060: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_79a064:
    // 0x79a064: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_79a068:
    // 0x79a068: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x79a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_79a06c:
    // 0x79a06c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x79a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_79a070:
    // 0x79a070: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x79a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_79a074:
    // 0x79a074: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x79a074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_79a078:
    // 0x79a078: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x79a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_79a07c:
    // 0x79a07c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x79a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_79a080:
    // 0x79a080: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x79a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_79a084:
    // 0x79a084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_79a088:
    // 0x79a088: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a088u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a08c:
    // 0x79a08c: 0xa3a70010  sb          $a3, 0x10($sp)
    ctx->pc = 0x79a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 7));
label_79a090:
    // 0x79a090: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x79a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_79a094:
    // 0x79a094: 0xafbd0030  sw          $sp, 0x30($sp)
    ctx->pc = 0x79a094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
label_79a098:
    // 0x79a098: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x79a098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_79a09c:
    // 0x79a09c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x79a09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_79a0a0:
    // 0x79a0a0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x79a0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a0a4:
    // 0x79a0a4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x79a0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a0a8:
    // 0x79a0a8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a0ac:
    // 0x79a0ac: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79a0b0:
    // 0x79a0b0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a0b4:
    // 0x79a0b4: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79a0b8:
    // 0x79a0b8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_79a0bc:
    // 0x79a0bc: 0x8c86bd80  lw          $a2, -0x4280($a0)
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950272)));
label_79a0c0:
    // 0x79a0c0: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
label_79a0c4:
    // 0x79a0c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79a0c8:
    // 0x79a0c8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_79a0cc:
    // 0x79a0cc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79a0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79a0d0:
    // 0x79a0d0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x79a0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_79a0d4:
    // 0x79a0d4: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x79a0d4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_79a0d8:
    // 0x79a0d8: 0x1480006b  bnez        $a0, . + 4 + (0x6B << 2)
label_79a0dc:
    if (ctx->pc == 0x79A0DCu) {
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0xe2980b  movn        $s3, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E0u;
        goto label_79a0e0;
    }
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0xe2980b  movn        $s3, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A0E0u;
label_79a0e0:
    // 0x79a0e0: 0x3c160074  lui         $s6, 0x74
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
label_79a0e4:
    // 0x79a0e4: 0x3c1e8000  lui         $fp, 0x8000
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32768 << 16));
label_79a0e8:
    // 0x79a0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a0ec:
    // 0x79a0ec: 0x0  nop
    ctx->pc = 0x79a0ecu;
    // NOP
label_79a0f0:
    // 0x79a0f0: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
label_79a0f4:
    if (ctx->pc == 0x79A0F4u) {
        ctx->pc = 0x79A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F0u;
        // 0x79a0f4: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0F8u;
        goto label_79a0f8;
    }
    ctx->pc = 0x79A0F0u;
    {
        const bool branch_taken_0x79a0f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F0u;
        // 0x79a0f4: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f0) {
            ctx->pc = 0x79A140u;
            goto label_79a140;
        }
    }
    ctx->pc = 0x79A0F8u;
label_79a0f8:
    // 0x79a0f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_79a0fc:
    if (ctx->pc == 0x79A0FCu) {
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A100u;
        goto label_79a100;
    }
    ctx->pc = 0x79A0F8u;
    {
        const bool branch_taken_0x79a0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f8) {
            ctx->pc = 0x79A110u;
            goto label_79a110;
        }
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_79a104:
    if (ctx->pc == 0x79A104u) {
        ctx->pc = 0x79A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A100u;
        // 0x79a104: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A108u;
        goto label_79a108;
    }
    ctx->pc = 0x79A100u;
    {
        const bool branch_taken_0x79a100 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A100u;
        // 0x79a104: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a100) {
            ctx->pc = 0x79A120u;
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A108u;
label_79a108:
    // 0x79a108: 0x10000055  b           . + 4 + (0x55 << 2)
label_79a10c:
    if (ctx->pc == 0x79A10Cu) {
        ctx->pc = 0x79A110u;
        goto label_79a110;
    }
    ctx->pc = 0x79A108u;
    {
        const bool branch_taken_0x79a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a108) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x12620028  beq         $s3, $v0, . + 4 + (0x28 << 2)
label_79a114:
    if (ctx->pc == 0x79A114u) {
        ctx->pc = 0x79A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A110u;
        // 0x79a114: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A118u;
        goto label_79a118;
    }
    ctx->pc = 0x79A110u;
    {
        const bool branch_taken_0x79a110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A110u;
        // 0x79a114: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a110) {
            ctx->pc = 0x79A1B4u;
            goto label_79a1b4;
        }
    }
    ctx->pc = 0x79A118u;
label_79a118:
    // 0x79a118: 0x10000051  b           . + 4 + (0x51 << 2)
label_79a11c:
    if (ctx->pc == 0x79A11Cu) {
        ctx->pc = 0x79A120u;
        goto label_79a120;
    }
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A120u;
label_79a120:
    // 0x79a120: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_79a124:
    // 0x79a124: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a128:
    // 0x79a128: 0x2465a718  addiu       $a1, $v1, -0x58E8
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944536));
label_79a12c:
    // 0x79a12c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a130:
    // 0x79a130: 0xc0b0e24  jal         func_2C3890
label_79a134:
    if (ctx->pc == 0x79A134u) {
        ctx->pc = 0x79A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A130u;
        // 0x79a134: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A138u;
        goto label_79a138;
    }
    ctx->pc = 0x79A130u;
    SET_GPR_U32(ctx, 31, 0x79A138u);
    ctx->pc = 0x79A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A130u;
    // 0x79a134: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A130u, 0x79A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0x10000049  b           . + 4 + (0x49 << 2)
label_79a13c:
    if (ctx->pc == 0x79A13Cu) {
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A140u;
        goto label_79a140;
    }
    ctx->pc = 0x79A138u;
    {
        const bool branch_taken_0x79a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a138) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a144:
    // 0x79a144: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a148:
    // 0x79a148: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a14c:
    // 0x79a14c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a150:
    // 0x79a150: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x79a150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a154:
    // 0x79a154: 0x0  nop
    ctx->pc = 0x79a154u;
    // NOP
label_79a158:
    // 0x79a158: 0xc0a572a  jal         func_295CA8
label_79a15c:
    if (ctx->pc == 0x79A15Cu) {
        ctx->pc = 0x79A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A158u;
        // 0x79a15c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A160u;
        goto label_79a160;
    }
    ctx->pc = 0x79A158u;
    SET_GPR_U32(ctx, 31, 0x79A160u);
    ctx->pc = 0x79A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A158u;
    // 0x79a15c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A158u, 0x79A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A160u;
label_79a160:
    // 0x79a160: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_79a164:
    if (ctx->pc == 0x79A164u) {
        ctx->pc = 0x79A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A160u;
        // 0x79a164: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A168u;
        goto label_79a168;
    }
    ctx->pc = 0x79A160u;
    {
        const bool branch_taken_0x79a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a160) {
            ctx->pc = 0x79A164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A160u;
            // 0x79a164: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A16Cu;
            goto label_79a16c;
        }
    }
    ctx->pc = 0x79A168u;
label_79a168:
    // 0x79a168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79a16c:
    // 0x79a16c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a170:
    // 0x79a170: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x79a170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_79a174:
    // 0x79a174: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_79a178:
    if (ctx->pc == 0x79A178u) {
        ctx->pc = 0x79A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A174u;
        // 0x79a178: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A17Cu;
        goto label_79a17c;
    }
    ctx->pc = 0x79A174u;
    {
        const bool branch_taken_0x79a174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A174u;
        // 0x79a178: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a174) {
            ctx->pc = 0x79A158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a158;
        }
    }
    ctx->pc = 0x79A17Cu;
label_79a17c:
    // 0x79a17c: 0x1a400037  blez        $s2, . + 4 + (0x37 << 2)
label_79a180:
    if (ctx->pc == 0x79A180u) {
        ctx->pc = 0x79A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A17Cu;
        // 0x79a180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A184u;
        goto label_79a184;
    }
    ctx->pc = 0x79A17Cu;
    {
        const bool branch_taken_0x79a17c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x79A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A17Cu;
        // 0x79a180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a17c) {
            ctx->pc = 0x79A25Cu;
            goto label_79a25c;
        }
    }
    ctx->pc = 0x79A184u;
label_79a184:
    // 0x79a184: 0x12820035  beq         $s4, $v0, . + 4 + (0x35 << 2)
label_79a188:
    if (ctx->pc == 0x79A188u) {
        ctx->pc = 0x79A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A184u;
        // 0x79a188: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A18Cu;
        goto label_79a18c;
    }
    ctx->pc = 0x79A184u;
    {
        const bool branch_taken_0x79a184 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A184u;
        // 0x79a188: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a184) {
            ctx->pc = 0x79A25Cu;
            goto label_79a25c;
        }
    }
    ctx->pc = 0x79A18Cu;
label_79a18c:
    // 0x79a18c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x79a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_79a190:
    // 0x79a190: 0x240503d9  addiu       $a1, $zero, 0x3D9
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
label_79a194:
    // 0x79a194: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_79a198:
    // 0x79a198: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a19c:
    // 0x79a19c: 0xc0a578e  jal         func_295E38
label_79a1a0:
    if (ctx->pc == 0x79A1A0u) {
        ctx->pc = 0x79A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A19Cu;
        // 0x79a1a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1A4u;
        goto label_79a1a4;
    }
    ctx->pc = 0x79A19Cu;
    SET_GPR_U32(ctx, 31, 0x79A1A4u);
    ctx->pc = 0x79A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A19Cu;
    // 0x79a1a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A19Cu, 0x79A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A4u;
label_79a1a4:
    // 0x79a1a4: 0x8ec27a8c  lw          $v0, 0x7A8C($s6)
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
label_79a1a8:
    // 0x79a1a8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_79a1ac:
    // 0x79a1ac: 0x1000002b  b           . + 4 + (0x2B << 2)
label_79a1b0:
    if (ctx->pc == 0x79A1B0u) {
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0xaec27a8c  sw          $v0, 0x7A8C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B4u;
        goto label_79a1b4;
    }
    ctx->pc = 0x79A1ACu;
    {
        const bool branch_taken_0x79a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0xaec27a8c  sw          $v0, 0x7A8C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1ac) {
            ctx->pc = 0x79A25Cu;
            goto label_79a25c;
        }
    }
    ctx->pc = 0x79A1B4u;
label_79a1b4:
    // 0x79a1b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1b8:
    // 0x79a1b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1bc:
    // 0x79a1bc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79a1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a1c0:
    // 0x79a1c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a1c4:
    // 0x79a1c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a1c8:
    // 0x79a1c8: 0xc0a572a  jal         func_295CA8
label_79a1cc:
    if (ctx->pc == 0x79A1CCu) {
        ctx->pc = 0x79A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C8u;
        // 0x79a1cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D0u;
        goto label_79a1d0;
    }
    ctx->pc = 0x79A1C8u;
    SET_GPR_U32(ctx, 31, 0x79A1D0u);
    ctx->pc = 0x79A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C8u;
    // 0x79a1cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A1C8u, 0x79A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D0u;
label_79a1d0:
    // 0x79a1d0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79a1d4:
    // 0x79a1d4: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x79a1d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_79a1d8:
    // 0x79a1d8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a1dc:
    if (ctx->pc == 0x79A1DCu) {
        ctx->pc = 0x79A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D8u;
        // 0x79a1dc: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E0u;
        goto label_79a1e0;
    }
    ctx->pc = 0x79A1D8u;
    {
        const bool branch_taken_0x79a1d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D8u;
        // 0x79a1dc: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1d8) {
            ctx->pc = 0x79A1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1c0;
        }
    }
    ctx->pc = 0x79A1E0u;
label_79a1e0:
    // 0x79a1e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a1e4:
    // 0x79a1e4: 0x1644001e  bne         $s2, $a0, . + 4 + (0x1E << 2)
label_79a1e8:
    if (ctx->pc == 0x79A1E8u) {
        ctx->pc = 0x79A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E4u;
        // 0x79a1e8: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1ECu;
        goto label_79a1ec;
    }
    ctx->pc = 0x79A1E4u;
    {
        const bool branch_taken_0x79a1e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x79A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E4u;
        // 0x79a1e8: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1e4) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A1ECu;
label_79a1ec:
    // 0x79a1ec: 0x8ec27a8c  lw          $v0, 0x7A8C($s6)
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31372)));
label_79a1f0:
    // 0x79a1f0: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_79a1f4:
    // 0x79a1f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_79a1f8:
    if (ctx->pc == 0x79A1F8u) {
        ctx->pc = 0x79A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F4u;
        // 0x79a1f8: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1FCu;
        goto label_79a1fc;
    }
    ctx->pc = 0x79A1F4u;
    {
        const bool branch_taken_0x79a1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F4u;
        // 0x79a1f8: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1f4) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A1FCu;
label_79a1fc:
    // 0x79a1fc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_79a200:
    // 0x79a200: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a204:
    // 0x79a204: 0x24a4ea60  addiu       $a0, $a1, -0x15A0
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_79a208:
    // 0x79a208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79a20c:
    // 0x79a20c: 0xc0b0a92  jal         func_2C2A48
label_79a210:
    if (ctx->pc == 0x79A210u) {
        ctx->pc = 0x79A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A20Cu;
        // 0x79a210: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A214u;
        goto label_79a214;
    }
    ctx->pc = 0x79A20Cu;
    SET_GPR_U32(ctx, 31, 0x79A214u);
    ctx->pc = 0x79A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A20Cu;
    // 0x79a210: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A20Cu, 0x79A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A214u;
label_79a214:
    // 0x79a214: 0x240403d9  addiu       $a0, $zero, 0x3D9
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
label_79a218:
    // 0x79a218: 0xc0c3ea6  jal         func_30FA98
label_79a21c:
    if (ctx->pc == 0x79A21Cu) {
        ctx->pc = 0x79A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A218u;
        // 0x79a21c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A220u;
        goto label_79a220;
    }
    ctx->pc = 0x79A218u;
    SET_GPR_U32(ctx, 31, 0x79A220u);
    ctx->pc = 0x79A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A218u;
    // 0x79a21c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A218u, 0x79A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A220u;
label_79a220:
    // 0x79a220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a224:
    // 0x79a224: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_79a228:
    if (ctx->pc == 0x79A228u) {
        ctx->pc = 0x79A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A224u;
        // 0x79a228: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A22Cu;
        goto label_79a22c;
    }
    ctx->pc = 0x79A224u;
    {
        const bool branch_taken_0x79a224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A224u;
        // 0x79a228: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a224) {
            ctx->pc = 0x79A260u;
            goto label_79a260;
        }
    }
    ctx->pc = 0x79A22Cu;
label_79a22c:
    // 0x79a22c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a230:
    // 0x79a230: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x79a230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_79a234:
    // 0x79a234: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a238:
    // 0x79a238: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a23c:
    // 0x79a23c: 0x40f809  jalr        $v0
label_79a240:
    if (ctx->pc == 0x79A240u) {
        ctx->pc = 0x79A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A23Cu;
        // 0x79a240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A244u;
        goto label_79a244;
    }
    ctx->pc = 0x79A23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A244u);
        ctx->pc = 0x79A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A23Cu;
        // 0x79a240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A23Cu, 0x79A244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A244u;
label_79a244:
    // 0x79a244: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a248:
    // 0x79a248: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79a24c:
    // 0x79a24c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79a250:
    // 0x79a250: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79a254:
    // 0x79a254: 0x40f809  jalr        $v0
label_79a258:
    if (ctx->pc == 0x79A258u) {
        ctx->pc = 0x79A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A254u;
        // 0x79a258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A25Cu;
        goto label_79a25c;
    }
    ctx->pc = 0x79A254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A25Cu);
        ctx->pc = 0x79A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A254u;
        // 0x79a258: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A254u, 0x79A25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A25Cu;
label_79a25c:
    // 0x79a25c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_79a260:
    // 0x79a260: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_79a264:
    if (ctx->pc == 0x79A264u) {
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A268u;
        goto label_79a268;
    }
    ctx->pc = 0x79A260u;
    {
        const bool branch_taken_0x79a260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a260) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A268u;
label_79a268:
    // 0x79a268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a26c:
    // 0x79a26c: 0xc0b56a8  jal         func_2D5AA0
label_79a270:
    if (ctx->pc == 0x79A270u) {
        ctx->pc = 0x79A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A26Cu;
        // 0x79a270: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A274u;
        goto label_79a274;
    }
    ctx->pc = 0x79A26Cu;
    SET_GPR_U32(ctx, 31, 0x79A274u);
    ctx->pc = 0x79A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A26Cu;
    // 0x79a270: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A26Cu, 0x79A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A274u;
label_79a274:
    // 0x79a274: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a278:
    // 0x79a278: 0x8c62bd80  lw          $v0, -0x4280($v1)
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950272)));
label_79a27c:
    // 0x79a27c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a280:
    // 0x79a280: 0x1060ff9b  beqz        $v1, . + 4 + (-0x65 << 2)
label_79a284:
    if (ctx->pc == 0x79A284u) {
        ctx->pc = 0x79A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A280u;
        // 0x79a284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A288u;
        goto label_79a288;
    }
    ctx->pc = 0x79A280u;
    {
        const bool branch_taken_0x79a280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A280u;
        // 0x79a284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a280) {
            ctx->pc = 0x79A0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0f0;
        }
    }
    ctx->pc = 0x79A288u;
label_79a288:
    // 0x79a288: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_79a28c:
    // 0x79a28c: 0xc0b5692  jal         func_2D5A48
label_79a290:
    if (ctx->pc == 0x79A290u) {
        ctx->pc = 0x79A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A28Cu;
        // 0x79a290: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A294u;
        goto label_79a294;
    }
    ctx->pc = 0x79A28Cu;
    SET_GPR_U32(ctx, 31, 0x79A294u);
    ctx->pc = 0x79A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A28Cu;
    // 0x79a290: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A28Cu, 0x79A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A294u;
label_79a294:
    // 0x79a294: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x79a294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79a298:
    // 0x79a298: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79a298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79a29c:
    // 0x79a29c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x79a29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79a2a0:
    // 0x79a2a0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79a2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79a2a4:
    // 0x79a2a4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x79a2a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a2a8:
    // 0x79a2a8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79a2a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a2ac:
    // 0x79a2ac: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x79a2acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a2b0:
    // 0x79a2b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x79a2b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a2b4:
    // 0x79a2b4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x79a2b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a2b8:
    // 0x79a2b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79a2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_79a2bc:
    // 0x79a2bc: 0x3e00008  jr          $ra
label_79a2c0:
    if (ctx->pc == 0x79A2C0u) {
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2C4u;
        goto label_79a2c4;
    }
    ctx->pc = 0x79A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x0  nop
    ctx->pc = 0x79a2c4u;
    // NOP
    ctx->pc = 0x79a2c8u;
}
} // namespace gh_r201
