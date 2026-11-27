#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: Trig2Task__5cR503
// Address: 0x7994e8 - 0x7998a8
void Trig2Task__5cR503_0x7994e8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trig2Task__5cR503_0x7994e8");
#endif

    if (__builtin_expect(ctx->pc != 0x7994e8u, 0)) {
        switch (ctx->pc) {
            case 0x799640u: goto label_799640;
            case 0x799644u: goto label_799644;
            case 0x799650u: goto label_799650;
            case 0x799660u: goto label_799660;
            case 0x799674u: goto label_799674;
            case 0x799694u: goto label_799694;
            case 0x7996a8u: goto label_7996a8;
            case 0x7996ccu: goto label_7996cc;
            case 0x7996ecu: goto label_7996ec;
            case 0x7996f8u: goto label_7996f8;
            case 0x799704u: goto label_799704;
            case 0x799710u: goto label_799710;
            case 0x799720u: goto label_799720;
            case 0x799730u: goto label_799730;
            case 0x799740u: goto label_799740;
            case 0x79974cu: goto label_79974c;
            case 0x799764u: goto label_799764;
            case 0x799774u: goto label_799774;
            case 0x799784u: goto label_799784;
            case 0x799794u: goto label_799794;
            case 0x7997a0u: goto label_7997a0;
            case 0x7997b8u: goto label_7997b8;
            case 0x7997c8u: goto label_7997c8;
            case 0x7997d8u: goto label_7997d8;
            case 0x7997e8u: goto label_7997e8;
            case 0x7997f4u: goto label_7997f4;
            case 0x79980cu: goto label_79980c;
            case 0x799814u: goto label_799814;
            case 0x79981cu: goto label_79981c;
            case 0x799844u: goto label_799844;
            case 0x799854u: goto label_799854;
            case 0x799864u: goto label_799864;
            case 0x799870u: goto label_799870;
            default: break;
        }
    }



    // 0x7994e8: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7994ec: 0x27bdff20  addiu       $sp, $sp, -0xE0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x7994f0: 0x8ca2a040  lw          $v0, -0x5FC0($a1)
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A040u));
    // 0x7994f4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7994f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7994f8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7994f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7994fc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7994fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x799500: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799504: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799508: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79950c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799510: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799514: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79951c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799600u;
            goto label_799600;
        }
    }
    // 0x799524: 0x3c01c1ff  lui         $at, 0xC1FF
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49663 << 16));
    // 0x799528: 0x342170a4  ori         $at, $at, 0x70A4
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x79952c: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799530: 0x3c03007a  lui         $v1, 0x7A
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799534: 0x3c013ff3  lui         $at, 0x3FF3
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x799538: 0x34213333  ori         $at, $at, 0x3333
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79953c: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799540: 0x2462a000  addiu       $v0, $v1, -0x6000
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x799544: 0x3c01c1b9  lui         $at, 0xC1B9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49593 << 16));
    // 0x799548: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79954c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799550: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799554: 0xe462a000  swc1        $f2, -0x6000($v1)
    ctx->pc = 0x799554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A000u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A000u, _value); } while (0); }
    // 0x799558: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79955c: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799560: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A004u, _value); } while (0); }
    // 0x799564: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A008u, _value); } while (0); }
    // 0x799568: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x799568u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A00Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A00Cu, _value); } while (0); }
    // 0x79956c: 0x3c01c1e5  lui         $at, 0xC1E5
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49637 << 16));
    // 0x799570: 0x3421999a  ori         $at, $at, 0x999A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x799574: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799578: 0x24420010  addiu       $v0, $v0, 0x10
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79957c: 0x3c01c1b1  lui         $at, 0xC1B1
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49585 << 16));
    // 0x799580: 0x3421c28f  ori         $at, $at, 0xC28F
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x799584: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799588: 0x3c013ffc  lui         $at, 0x3FFC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16380 << 16));
    // 0x79958c: 0x342128f6  ori         $at, $at, 0x28F6
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x799590: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799594: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A010u, _value); } while (0); }
    // 0x799598: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x799598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A018u, _value); } while (0); }
    // 0x79959c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79959cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A014u, _value); } while (0); }
    // 0x7995a0: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x7995a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A01Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A01Cu, _value); } while (0); }
    // 0x7995a4: 0x3c01c204  lui         $at, 0xC204
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49668 << 16));
    // 0x7995a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7995ac: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7995b0: 0x24420010  addiu       $v0, $v0, 0x10
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x7995b4: 0x3c01c17e  lui         $at, 0xC17E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49534 << 16));
    // 0x7995b8: 0x3421e148  ori         $at, $at, 0xE148
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x7995bc: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7995c0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x7995c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A020u, _value); } while (0); }
    // 0x7995c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7995c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A028u, _value); } while (0); }
    // 0x7995c8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x7995c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A024u, _value); } while (0); }
    // 0x7995cc: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x7995ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A02Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A02Cu, _value); } while (0); }
    // 0x7995d0: 0x24420010  addiu       $v0, $v0, 0x10
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x7995d4: 0x3c01c1b7  lui         $at, 0xC1B7
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49591 << 16));
    // 0x7995d8: 0x34210a3d  ori         $at, $at, 0xA3D
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x7995dc: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7995e0: 0x3c01c199  lui         $at, 0xC199
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49561 << 16));
    // 0x7995e4: 0x3421851f  ori         $at, $at, 0x851F
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x7995e8: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7995ec: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x7995ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A03Cu, _value); } while (0); }
    // 0x7995f0: 0xaca4a040  sw          $a0, -0x5FC0($a1)
    ctx->pc = 0x7995f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942784), GPR_U32(ctx, 4));
    // 0x7995f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x7995f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A030u, _value); } while (0); }
    // 0x7995f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x7995f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A034u, _value); } while (0); }
    // 0x7995fc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x7995fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A038u, _value); } while (0); }
label_799600:
    // 0x799600: 0x3c02005f  lui         $v0, 0x5F
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799604: 0x3c044000  lui         $a0, 0x4000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799608: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79960c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799610: 0x441024  and         $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799614: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x799614u;
    {
        const bool branch_taken_0x799614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799614) {
            ctx->pc = 0x799864u;
            goto label_799864;
        }
    }
    // 0x79961c: 0x3c130060  lui         $s3, 0x60
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x799620: 0x3c120057  lui         $s2, 0x57
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x799624: 0x3c17007a  lui         $s7, 0x7A
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799628: 0x3c1e0060  lui         $fp, 0x60
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x79962c: 0x3c100058  lui         $s0, 0x58
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x799630: 0x3c11007a  lui         $s1, 0x7A
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799634: 0x27b40010  addiu       $s4, $sp, 0x10
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799638u;
    {
        const bool branch_taken_0x799638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x27b60020  addiu       $s6, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799638) {
            ctx->pc = 0x799650u;
            goto label_799650;
        }
    }
label_799640:
    // 0x799640: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799644:
    // 0x799644: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799648: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x799650u);
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799648u, 0x799650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799650:
    // 0x799650: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x799654: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799658: 0xc0b0aa6  jal         func_2C2A98
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_isHit_0x2c2a98, 0x2C2A98u, 0x799660u)) {
        return;
    }
label_799660:
    // 0x799660: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799664: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799664u;
    {
        const bool branch_taken_0x799664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799664u;
        // 0x799668: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799664) {
            ctx->pc = 0x799644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799644;
        }
    }
    // 0x79966c: 0xc07ea80  jal         func_1FAA00
    SET_GPR_U32(ctx, 31, 0x799674u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79966Cu;
    // 0x799670: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getKeyNum_0x1faa00, 0x1FAA00u, 0x799674u)) {
        return;
    }
label_799674:
    // 0x799674: 0x1840fff2  blez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x799674u;
    {
        const bool branch_taken_0x799674 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x799678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799674u;
        // 0x799678: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799674) {
            ctx->pc = 0x799640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799640;
        }
    }
    // 0x79967c: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x799680: 0x3c014974  lui         $at, 0x4974
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799684: 0x342123fe  ori         $at, $at, 0x23FE
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799688: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79968c: 0xc0b0fa2  jal         func_2C3E88
    SET_GPR_U32(ctx, 31, 0x799694u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79968Cu;
    // 0x799690: 0x2631a020  addiu       $s1, $s1, -0x5FE0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_waitEventStartOk_0x2c3e88, 0x2C3E88u, 0x799694u)) {
        return;
    }
label_799694:
    // 0x799694: 0x2632fff0  addiu       $s2, $s1, -0x10
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x799698: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79969c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996a0: 0xc0b0e6c  jal         func_2C39B0
    SET_GPR_U32(ctx, 31, 0x7996A8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A0u;
    // 0x7996a4: 0x26330010  addiu       $s3, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_startSoftEvent_0x2c39b0, 0x2C39B0u, 0x7996A8u)) {
        return;
    }
label_7996a8:
    // 0x7996a8: 0x24030004  addiu       $v1, $zero, 0x4
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7996ac: 0x24020003  addiu       $v0, $zero, 0x3
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7996b0: 0x24040005  addiu       $a0, $zero, 0x5
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7996b4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7996b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x7996b8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7996b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7996bc: 0x26e59f20  addiu       $a1, $s7, -0x60E0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942496));
    // 0x7996c0: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x7996c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x7996c4: 0xc0b0fb6  jal         func_2C3ED8
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_setCam_0x2c3ed8, 0x2C3ED8u, 0x7996CCu)) {
        return;
    }
label_7996cc:
    // 0x7996cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7996d0: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d4: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7996dc: 0x24060032  addiu       $a2, $zero, 0x32
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x7996e0: 0x27c4ee00  addiu       $a0, $fp, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962688));
    // 0x7996e4: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x7996ECu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E4u;
    // 0x7996e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x7996ECu)) {
        return;
    }
label_7996ec:
    // 0x7996ec: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x7996ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996f0: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x7996F8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F0u;
    // 0x7996f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x7996F8u)) {
        return;
    }
label_7996f8:
    // 0x7996f8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x7996f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7996fc: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x799704u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996FCu;
    // 0x799700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x799704u)) {
        return;
    }
label_799704:
    // 0x799704: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799708: 0xc0a54b4  jal         func_2952D0
    SET_GPR_U32(ctx, 31, 0x799710u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799708u;
    // 0x79970c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_setEm_0x2952d0, 0x2952D0u, 0x799710u)) {
        return;
    }
label_799710:
    // 0x799710: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799714: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799718: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x799720u);
    ctx->pc = 0x79971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799718u;
    // 0x79971c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799718u, 0x799720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799720:
    // 0x799720: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799724: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799728: 0xc0a54e0  jal         func_295380
    SET_GPR_U32(ctx, 31, 0x799730u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799728u;
    // 0x79972c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataPos_0x295380, 0x295380u, 0x799730u)) {
        return;
    }
label_799730:
    // 0x799730: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799734: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799738: 0xc0a5526  jal         func_295498
    SET_GPR_U32(ctx, 31, 0x799740u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799738u;
    // 0x79973c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295498u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataFlag_0x295498, 0x295498u, 0x799740u)) {
        return;
    }
label_799740:
    // 0x799740: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799744: 0xc0a581c  jal         func_296070
    SET_GPR_U32(ctx, 31, 0x79974Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799744u;
    // 0x799748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_SetKeepPos_0x296070, 0x296070u, 0x79974Cu)) {
        return;
    }
label_79974c:
    // 0x79974c: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799750: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799754: 0x24060004  addiu       $a2, $zero, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799758: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79975c: 0xc0a57e0  jal         func_295F80
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setGoto_0x295f80, 0x295F80u, 0x799764u)) {
        return;
    }
label_799764:
    // 0x799764: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799768: 0x2405000c  addiu       $a1, $zero, 0xC
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79976c: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x799774u);
    ctx->pc = 0x799770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79976Cu;
    // 0x799770: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79976Cu, 0x799774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799774:
    // 0x799774: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799778: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79977c: 0xc0a54e0  jal         func_295380
    SET_GPR_U32(ctx, 31, 0x799784u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79977Cu;
    // 0x799780: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataPos_0x295380, 0x295380u, 0x799784u)) {
        return;
    }
label_799784:
    // 0x799784: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799788: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79978c: 0xc0a5526  jal         func_295498
    SET_GPR_U32(ctx, 31, 0x799794u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79978Cu;
    // 0x799790: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295498u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataFlag_0x295498, 0x295498u, 0x799794u)) {
        return;
    }
label_799794:
    // 0x799794: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799798: 0xc0a581c  jal         func_296070
    SET_GPR_U32(ctx, 31, 0x7997A0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799798u;
    // 0x79979c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_SetKeepPos_0x296070, 0x296070u, 0x7997A0u)) {
        return;
    }
label_7997a0:
    // 0x7997a0: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a4: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a8: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7997ac: 0x24060004  addiu       $a2, $zero, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7997b0: 0xc0a57e0  jal         func_295F80
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setGoto_0x295f80, 0x295F80u, 0x7997B8u)) {
        return;
    }
label_7997b8:
    // 0x7997b8: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x7997bc: 0x2405000c  addiu       $a1, $zero, 0xC
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7997c0: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x7997C8u);
    ctx->pc = 0x7997C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C0u;
    // 0x7997c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997C0u, 0x7997C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7997c8:
    // 0x7997c8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997cc: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7997d0: 0xc0a54e0  jal         func_295380
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D0u;
    // 0x7997d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataPos_0x295380, 0x295380u, 0x7997D8u)) {
        return;
    }
label_7997d8:
    // 0x7997d8: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997e0: 0xc0a5526  jal         func_295498
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295498u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataFlag_0x295498, 0x295498u, 0x7997E8u)) {
        return;
    }
label_7997e8:
    // 0x7997e8: 0x2c0202d  daddu       $a0, $s6, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997ec: 0xc0a581c  jal         func_296070
    SET_GPR_U32(ctx, 31, 0x7997F4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ECu;
    // 0x7997f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_SetKeepPos_0x296070, 0x296070u, 0x7997F4u)) {
        return;
    }
label_7997f4:
    // 0x7997f4: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f8: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7997fc: 0x260282d  daddu       $a1, $s3, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799800: 0x24060004  addiu       $a2, $zero, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799804: 0xc0a57e0  jal         func_295F80
    SET_GPR_U32(ctx, 31, 0x79980Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799804u;
    // 0x799808: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setGoto_0x295f80, 0x295F80u, 0x79980Cu)) {
        return;
    }
label_79980c:
    // 0x79980c: 0xc0b101e  jal         func_2C4078
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_waitCam_0x2c4078, 0x2C4078u, 0x799814u)) {
        return;
    }
label_799814:
    // 0x799814: 0xc0b0f04  jal         func_2C3C10
    SET_GPR_U32(ctx, 31, 0x79981Cu);
    ctx->pc = 0x799818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799814u;
    // 0x799818: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario__endSoftEvent_0x2c3c10, 0x2C3C10u, 0x79981Cu)) {
        return;
    }
label_79981c:
    // 0x79981c: 0x3c02005f  lui         $v0, 0x5F
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799820: 0x3c074000  lui         $a3, 0x4000
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x799824: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799828: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79982c: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799830: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799834: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799838: 0x471025  or          $v0, $v0, $a3
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x79983c: 0xc0a5516  jal         func_295458
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x799840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79983Cu;
    // 0x799840: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataAppPattern_0x295458, 0x295458u, 0x799844u)) {
        return;
    }
label_799844:
    // 0x799844: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799848: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79984c: 0xc0a5516  jal         func_295458
    SET_GPR_U32(ctx, 31, 0x799854u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79984Cu;
    // 0x799850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataAppPattern_0x295458, 0x295458u, 0x799854u)) {
        return;
    }
label_799854:
    // 0x799854: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799858: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79985c: 0xc0a5516  jal         func_295458
    SET_GPR_U32(ctx, 31, 0x799864u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79985Cu;
    // 0x799860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmSetParam_updateSetDataAppPattern_0x295458, 0x295458u, 0x799864u)) {
        return;
    }
label_799864:
    // 0x799864: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799868: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799870u)) {
        return;
    }
label_799870:
    // 0x799870: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799874: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799878: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79987c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79987cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799880: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799884: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799888: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79988c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79988cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799890: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x799890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799894: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799898: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x799898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79989c: 0x3e00008  jr          $ra
    ctx->pc = 0x79989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7998a4: 0x0  nop
    // NOP
    ctx->pc = 0x7998a8u;
}
} // namespace gh_r503
