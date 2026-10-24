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

// Function: func_001661D8
// Address: 0x1661d8 - 0x166540
void func_001661D8_0x1661d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001661D8_0x1661d8");
#endif

    switch (ctx->pc) {
        case 0x166224u: goto label_166224;
        case 0x16627cu: goto label_16627c;
        case 0x166300u: goto label_166300;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663d4u: goto label_1663d4;
        case 0x16640cu: goto label_16640c;
        case 0x166410u: goto label_166410;
        case 0x166420u: goto label_166420;
        case 0x1664d4u: goto label_1664d4;
        case 0x1664f4u: goto label_1664f4;
        case 0x1664fcu: goto label_1664fc;
        default: break;
    }

    ctx->pc = 0x1661d8u;

    // 0x1661d8: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x1661d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x1661dc: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x1661dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x1661e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1661e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661e4: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x1661e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x1661e8: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x1661e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x1661ec: 0x26840230  addiu       $a0, $s4, 0x230
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 560));
    // 0x1661f0: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x1661f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x1661f4: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x1661f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x1661f8: 0xe7b504d8  swc1        $f21, 0x4D8($sp)
    ctx->pc = 0x1661f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
    // 0x1661fc: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x1661fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x166200: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x166200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x166204: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x166204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x166208: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x166208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x16620c: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x16620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x166210: 0xe7b804f0  swc1        $f24, 0x4F0($sp)
    ctx->pc = 0x166210u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
    // 0x166214: 0xe7b704e8  swc1        $f23, 0x4E8($sp)
    ctx->pc = 0x166214u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
    // 0x166218: 0xe7b604e0  swc1        $f22, 0x4E0($sp)
    ctx->pc = 0x166218u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x16621c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16621Cu;
    SET_GPR_U32(ctx, 31, 0x166224u);
    ctx->pc = 0x166220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16621Cu;
    // 0x166220: 0xe7b404d0  swc1        $f20, 0x4D0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16621Cu, 0x166224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166224u;
label_166224:
    // 0x166224: 0x3c013deb  lui         $at, 0x3DEB
    ctx->pc = 0x166224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15851 << 16));
    // 0x166228: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x166228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x16622c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16622cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x166230: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x166230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x166234: 0x3421d480  ori         $at, $at, 0xD480
    ctx->pc = 0x166234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54400);
    // 0x166238: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x166238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16623c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x16623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x166240: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x166244: 0x3421ffef  ori         $at, $at, 0xFFEF
    ctx->pc = 0x166244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65519);
    // 0x166248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x166248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16624c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166250: 0x3c013d7b  lui         $at, 0x3D7B
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15739 << 16));
    // 0x166254: 0x3421b2ff  ori         $at, $at, 0xB2FF
    ctx->pc = 0x166254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45823);
    // 0x166258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16625c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x16625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x166260: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x166264: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x166264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x166268: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x166268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x16626c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x16626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x166270: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x166270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x166274: 0xc0ab38a  jal         func_2ACE28
    ctx->pc = 0x166274u;
    SET_GPR_U32(ctx, 31, 0x16627Cu);
    ctx->pc = 0x166278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166274u;
    // 0x166278: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE28u, 0x166274u, 0x16627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16627Cu;
label_16627c:
    // 0x16627c: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x16627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
    // 0x166280: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x166280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x166284: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x166284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166288: 0x3c014238  lui         $at, 0x4238
    ctx->pc = 0x166288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16952 << 16));
    // 0x16628c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16628cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166290: 0xafa20428  sw          $v0, 0x428($sp)
    ctx->pc = 0x166290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
    // 0x166294: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x166294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x166298: 0x3c0143a7  lui         $at, 0x43A7
    ctx->pc = 0x166298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17319 << 16));
    // 0x16629c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16629cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1662a0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1662a4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1662a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1662a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1662a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1662acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1662b0: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1662b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1662b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1662b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1662bc: 0x27b60400  addiu       $s6, $sp, 0x400
    ctx->pc = 0x1662bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1662c0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1662c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1662c4: 0x27b702e0  addiu       $s7, $sp, 0x2E0
    ctx->pc = 0x1662c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1662c8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1662c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1662cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1662ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1662d0: 0x27be0370  addiu       $fp, $sp, 0x370
    ctx->pc = 0x1662d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x1662d4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1662d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1662d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1662d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1662dc: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1662dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1662e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1662e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1662e4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1662e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662e8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1662e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1662ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1662ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1662f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1662f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1662f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1662f8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1662f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1662fc: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1662fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_166300:
    // 0x166300: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x166300u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x166304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166308: 0x0  nop
    ctx->pc = 0x166308u;
    // NOP
    // 0x16630c: 0x0  nop
    ctx->pc = 0x16630cu;
    // NOP
    // 0x166310: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x166310u;
    {
        const bool branch_taken_0x166310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x166314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166310u;
        // 0x166314: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166310) {
            ctx->pc = 0x166300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166300;
        }
    }
    ctx->pc = 0x166318u;
    // 0x166318: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x166318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16631c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x16631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166320: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x166320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x166324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x166328: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x166328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16632c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x16632cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x166330: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x166330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x166334: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x166334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x166338: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x166338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x16633c: 0xe7b40370  swc1        $f20, 0x370($sp)
    ctx->pc = 0x16633cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x166340: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x166340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x166344: 0xfba40410  sqc2        $vf4, 0x410($sp)
    ctx->pc = 0x166344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x166348: 0xdba40410  lqc2        $vf4, 0x410($sp)
    ctx->pc = 0x166348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x16634c: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x16634cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x166350: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x166350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x166354: 0xfba40410  sqc2        $vf4, 0x410($sp)
    ctx->pc = 0x166354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x166358: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x166358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16635c: 0xfba40400  sqc2        $vf4, 0x400($sp)
    ctx->pc = 0x16635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x166360: 0xc7a10400  lwc1        $f1, 0x400($sp)
    ctx->pc = 0x166360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166364: 0x26830100  addiu       $v1, $s4, 0x100
    ctx->pc = 0x166364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x166368: 0xc7a20404  lwc1        $f2, 0x404($sp)
    ctx->pc = 0x166368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16636c: 0x26820180  addiu       $v0, $s4, 0x180
    ctx->pc = 0x16636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    // 0x166370: 0xc7a00408  lwc1        $f0, 0x408($sp)
    ctx->pc = 0x166370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166374: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x166374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x166378: 0xafa3042c  sw          $v1, 0x42C($sp)
    ctx->pc = 0x166378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 3));
    // 0x16637c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x16637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x166380: 0xafa20424  sw          $v0, 0x424($sp)
    ctx->pc = 0x166380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 2));
    // 0x166384: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x166388: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x166388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16638c: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x16638cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
    // 0x166390: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x166390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x166394: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x166394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166398: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x166398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16639c: 0x27d20008  addiu       $s2, $fp, 0x8
    ctx->pc = 0x16639cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1663a0: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x1663a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x1663a4: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1663a8: 0xc07e820  jal         func_1FA080
    ctx->pc = 0x1663A8u;
    SET_GPR_U32(ctx, 31, 0x1663B0u);
    ctx->pc = 0x1663ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663A8u;
    // 0x1663ac: 0xafa00374  sw          $zero, 0x374($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA080u, 0x1663A8u, 0x1663B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663B0u;
label_1663b0:
    // 0x1663b0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1663b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1663b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1663b8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1663b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1663bc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1663bcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1663c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1663c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1663c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663c8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1663c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1663cc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1663CCu;
    SET_GPR_U32(ctx, 31, 0x1663D4u);
    ctx->pc = 0x1663D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663CCu;
    // 0x1663d0: 0xe6800220  swc1        $f0, 0x220($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1663CCu, 0x1663D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663D4u;
label_1663d4:
    // 0x1663d4: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x1663d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x1663d8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1663d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1663dc: 0xe7b50408  swc1        $f21, 0x408($sp)
    ctx->pc = 0x1663dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1032), bits); }
    // 0x1663e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1663e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663e4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1663e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1663e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1663e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663ec: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x1663ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1663f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1663f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663f4: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x1663f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1663f8: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x1663f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1663fc: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x1663fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x166400: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x166400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x166404: 0xc0c2a1c  jal         func_30A870
    ctx->pc = 0x166404u;
    SET_GPR_U32(ctx, 31, 0x16640Cu);
    ctx->pc = 0x166408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166404u;
    // 0x166408: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A870u, 0x166404u, 0x16640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16640Cu;
label_16640c:
    // 0x16640c: 0x0  nop
    ctx->pc = 0x16640cu;
    // NOP
label_166410:
    // 0x166410: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x166414: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x166414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x166418: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x166418u;
    SET_GPR_U32(ctx, 31, 0x166420u);
    ctx->pc = 0x16641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166418u;
    // 0x16641c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x166418u, 0x166420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166420u;
label_166420:
    // 0x166420: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x166420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166424: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x166424u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x166428: 0x0  nop
    ctx->pc = 0x166428u;
    // NOP
    // 0x16642c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16642cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x166430: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x166430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166434: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x166434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x166438: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x166438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x16643c: 0xc6830220  lwc1        $f3, 0x220($s4)
    ctx->pc = 0x16643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166440: 0x46181081  sub.s       $f2, $f2, $f24
    ctx->pc = 0x166440u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[24]);
    // 0x166444: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x166444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x166448: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x166448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16644c: 0x0  nop
    ctx->pc = 0x16644cu;
    // NOP
    // 0x166450: 0x0  nop
    ctx->pc = 0x166450u;
    // NOP
    // 0x166454: 0x46161083  div.s       $f2, $f2, $f22
    ctx->pc = 0x166454u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[22]);
    // 0x166458: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x166458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x16645c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x16645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166460: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x166460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166464: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x166464u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x166468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x166468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16646c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x166470: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x166470u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x166474: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x166474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x166478: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x166478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x16647c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16647cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x166480: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x166480u;
    {
        const bool branch_taken_0x166480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166480u;
        // 0x166484: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166480) {
            ctx->pc = 0x166410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166410;
        }
    }
    ctx->pc = 0x166488u;
    // 0x166488: 0x24031cf0  addiu       $v1, $zero, 0x1CF0
    ctx->pc = 0x166488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x16648c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x16648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x166490: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x166490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x166494: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x166494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x166498: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x166498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x16649c: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x1664a0: 0x8c4b11b0  lw          $t3, 0x11B0($v0)
    ctx->pc = 0x1664a0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x1664a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1664a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1664a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1664a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1664ac: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1664acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1664b0: 0x8faa0420  lw          $t2, 0x420($sp)
    ctx->pc = 0x1664b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1664b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1664b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1664b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1664bc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1664bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664c0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1664c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1664c4: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1664c8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x1664c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x1664cc: 0xc057104  jal         func_15C410
    ctx->pc = 0x1664CCu;
    SET_GPR_U32(ctx, 31, 0x1664D4u);
    ctx->pc = 0x1664D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664CCu;
    // 0x1664d0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C410u, 0x1664CCu, 0x1664D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664D4u;
label_1664d4:
    // 0x1664d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1664d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1664D8u;
    {
        const bool branch_taken_0x1664d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1664d8) {
            ctx->pc = 0x1664ECu;
            goto label_1664ec;
        }
    }
    ctx->pc = 0x1664E0u;
    // 0x1664e0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1664e4: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1664e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x1664e8: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x1664e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_1664ec:
    // 0x1664ec: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1664ECu;
    SET_GPR_U32(ctx, 31, 0x1664F4u);
    ctx->pc = 0x1664F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664ECu;
    // 0x1664f0: 0x8fa4042c  lw          $a0, 0x42C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1664ECu, 0x1664F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664F4u;
label_1664f4:
    // 0x1664f4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1664F4u;
    SET_GPR_U32(ctx, 31, 0x1664FCu);
    ctx->pc = 0x1664F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664F4u;
    // 0x1664f8: 0x8fa40424  lw          $a0, 0x424($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1664F4u, 0x1664FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664FCu;
label_1664fc:
    // 0x1664fc: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x1664fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x166500: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x166500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x166504: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x166504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x166508: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x166508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x16650c: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x16650cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x166510: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x166510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x166514: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x166514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x166518: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x166518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x16651c: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x16651cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x166520: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x166520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x166524: 0xc7b804f0  lwc1        $f24, 0x4F0($sp)
    ctx->pc = 0x166524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x166528: 0xc7b704e8  lwc1        $f23, 0x4E8($sp)
    ctx->pc = 0x166528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16652c: 0xc7b604e0  lwc1        $f22, 0x4E0($sp)
    ctx->pc = 0x16652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x166530: 0xc7b504d8  lwc1        $f21, 0x4D8($sp)
    ctx->pc = 0x166530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166534: 0xc7b404d0  lwc1        $f20, 0x4D0($sp)
    ctx->pc = 0x166534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166538: 0x3e00008  jr          $ra
    ctx->pc = 0x166538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166538u;
        // 0x16653c: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166540u;
}
