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

// Function: func_001430E8
// Address: 0x1430e8 - 0x1434a8
void func_001430E8_0x1430e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001430E8_0x1430e8");
#endif

    switch (ctx->pc) {
        case 0x143134u: goto label_143134;
        case 0x14318cu: goto label_14318c;
        case 0x143210u: goto label_143210;
        case 0x1432b8u: goto label_1432b8;
        case 0x1432dcu: goto label_1432dc;
        case 0x143314u: goto label_143314;
        case 0x143318u: goto label_143318;
        case 0x143328u: goto label_143328;
        case 0x1433dcu: goto label_1433dc;
        case 0x143404u: goto label_143404;
        case 0x14340cu: goto label_14340c;
        case 0x143414u: goto label_143414;
        case 0x143420u: goto label_143420;
        case 0x143460u: goto label_143460;
        default: break;
    }

    ctx->pc = 0x1430e8u;

    // 0x1430e8: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x1430e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x1430ec: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x1430ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x1430f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1430f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430f4: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x1430f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x1430f8: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x1430f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x1430fc: 0x26840190  addiu       $a0, $s4, 0x190
    ctx->pc = 0x1430fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x143100: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x143100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x143104: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x143104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x143108: 0xe7b504d8  swc1        $f21, 0x4D8($sp)
    ctx->pc = 0x143108u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
    // 0x14310c: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x14310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x143110: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x143110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x143114: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x143114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x143118: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x143118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x14311c: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x14311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x143120: 0xe7b804f0  swc1        $f24, 0x4F0($sp)
    ctx->pc = 0x143120u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
    // 0x143124: 0xe7b704e8  swc1        $f23, 0x4E8($sp)
    ctx->pc = 0x143124u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
    // 0x143128: 0xe7b604e0  swc1        $f22, 0x4E0($sp)
    ctx->pc = 0x143128u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x14312c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x14312Cu;
    SET_GPR_U32(ctx, 31, 0x143134u);
    ctx->pc = 0x143130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14312Cu;
    // 0x143130: 0xe7b404d0  swc1        $f20, 0x4D0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x14312Cu, 0x143134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143134u;
label_143134:
    // 0x143134: 0x3c013deb  lui         $at, 0x3DEB
    ctx->pc = 0x143134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15851 << 16));
    // 0x143138: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x143138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x14313c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14313cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x143140: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x143140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x143144: 0x3421d480  ori         $at, $at, 0xD480
    ctx->pc = 0x143144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54400);
    // 0x143148: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x143148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14314c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x143150: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x143150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x143154: 0x3421ffef  ori         $at, $at, 0xFFEF
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65519);
    // 0x143158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14315c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143160: 0x3c013d7b  lui         $at, 0x3D7B
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15739 << 16));
    // 0x143164: 0x3421b2ff  ori         $at, $at, 0xB2FF
    ctx->pc = 0x143164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45823);
    // 0x143168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14316c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x14316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x143170: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x143170u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x143174: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x143174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x143178: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x143178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x14317c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14317cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x143180: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x143180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x143184: 0xc0ab38a  jal         func_2ACE28
    ctx->pc = 0x143184u;
    SET_GPR_U32(ctx, 31, 0x14318Cu);
    ctx->pc = 0x143188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143184u;
    // 0x143188: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE28u, 0x143184u, 0x14318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14318Cu;
label_14318c:
    // 0x14318c: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x14318cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
    // 0x143190: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x143190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x143194: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x143194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143198: 0x3c014238  lui         $at, 0x4238
    ctx->pc = 0x143198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16952 << 16));
    // 0x14319c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1431a0: 0xafa20428  sw          $v0, 0x428($sp)
    ctx->pc = 0x1431a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
    // 0x1431a4: 0x27a70410  addiu       $a3, $sp, 0x410
    ctx->pc = 0x1431a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1431a8: 0x3c0143c5  lui         $at, 0x43C5
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17349 << 16));
    // 0x1431ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1431acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1431b0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1431b4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1431b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1431b8: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x1431b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1431bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1431bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1431c0: 0x27b60400  addiu       $s6, $sp, 0x400
    ctx->pc = 0x1431c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1431c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1431c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1431c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1431c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1431cc: 0x27b702e0  addiu       $s7, $sp, 0x2E0
    ctx->pc = 0x1431ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1431d0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1431d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1431d4: 0x27be0370  addiu       $fp, $sp, 0x370
    ctx->pc = 0x1431d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x1431d8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1431d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1431dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1431dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1431e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1431e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1431e4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1431e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1431e8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1431e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431ec: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1431ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1431f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1431f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1431f4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1431f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431f8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1431f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1431fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x143200: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x143200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x143204: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x143204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x143208: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x143208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x14320c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x14320cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_143210:
    // 0x143210: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x143210u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143214: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x143214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x143218: 0x0  nop
    ctx->pc = 0x143218u;
    // NOP
    // 0x14321c: 0x0  nop
    ctx->pc = 0x14321cu;
    // NOP
    // 0x143220: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x143220u;
    {
        const bool branch_taken_0x143220 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x143224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143220u;
        // 0x143224: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143220) {
            ctx->pc = 0x143210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143210;
        }
    }
    ctx->pc = 0x143228u;
    // 0x143228: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x143228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14322c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x14322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143230: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x143230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x143238: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14323c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x14323cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x143240: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x143240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x143244: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x143244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x143248: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x143248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x14324c: 0xe7b40370  swc1        $f20, 0x370($sp)
    ctx->pc = 0x14324cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x143250: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x143250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x143254: 0xfba40410  sqc2        $vf4, 0x410($sp)
    ctx->pc = 0x143254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143258: 0xdba40410  lqc2        $vf4, 0x410($sp)
    ctx->pc = 0x143258u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x14325c: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x14325cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143260: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x143260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143264: 0xfba40410  sqc2        $vf4, 0x410($sp)
    ctx->pc = 0x143264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143268: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x143268u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14326c: 0xfba40400  sqc2        $vf4, 0x400($sp)
    ctx->pc = 0x14326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x143270: 0xc7a20400  lwc1        $f2, 0x400($sp)
    ctx->pc = 0x143270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143274: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x143274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x143278: 0xc7a10404  lwc1        $f1, 0x404($sp)
    ctx->pc = 0x143278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14327c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x14327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x143280: 0xc7a00408  lwc1        $f0, 0x408($sp)
    ctx->pc = 0x143280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143284: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x143284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x143288: 0xafa30424  sw          $v1, 0x424($sp)
    ctx->pc = 0x143288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 3));
    // 0x14328c: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x14328cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x143290: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x143290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x143294: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x143294u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
    // 0x143298: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x143298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x14329c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1432a0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1432a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1432a4: 0x27d20008  addiu       $s2, $fp, 0x8
    ctx->pc = 0x1432a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1432a8: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x1432a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x1432ac: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x1432acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1432b0: 0xc07e820  jal         func_1FA080
    ctx->pc = 0x1432B0u;
    SET_GPR_U32(ctx, 31, 0x1432B8u);
    ctx->pc = 0x1432B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432B0u;
    // 0x1432b4: 0xafa00374  sw          $zero, 0x374($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA080u, 0x1432B0u, 0x1432B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432B8u;
label_1432b8:
    // 0x1432b8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1432b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1432bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1432bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1432c0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1432c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1432c4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1432c4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1432c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1432c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1432ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432d0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1432d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1432d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1432D4u;
    SET_GPR_U32(ctx, 31, 0x1432DCu);
    ctx->pc = 0x1432D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432D4u;
    // 0x1432d8: 0xe6800180  swc1        $f0, 0x180($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1432D4u, 0x1432DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432DCu;
label_1432dc:
    // 0x1432dc: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x1432e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1432e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1432e4: 0xe7b50408  swc1        $f21, 0x408($sp)
    ctx->pc = 0x1432e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1032), bits); }
    // 0x1432e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1432e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432ec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1432ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1432f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1432f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432f4: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x1432f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1432f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1432f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432fc: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x1432fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x143300: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x143300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x143304: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x143304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x143308: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x143308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x14330c: 0xc0c2a1c  jal         func_30A870
    ctx->pc = 0x14330Cu;
    SET_GPR_U32(ctx, 31, 0x143314u);
    ctx->pc = 0x143310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14330Cu;
    // 0x143310: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A870u, 0x14330Cu, 0x143314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143314u;
label_143314:
    // 0x143314: 0x0  nop
    ctx->pc = 0x143314u;
    // NOP
label_143318:
    // 0x143318: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x143318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14331c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14331cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x143320: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x143320u;
    SET_GPR_U32(ctx, 31, 0x143328u);
    ctx->pc = 0x143324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143320u;
    // 0x143324: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x143320u, 0x143328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143328u;
label_143328:
    // 0x143328: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x143328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14332c: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x14332cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143330: 0x0  nop
    ctx->pc = 0x143330u;
    // NOP
    // 0x143334: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x143334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x143338: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x143338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14333c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x143340: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x143340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x143344: 0xc6830180  lwc1        $f3, 0x180($s4)
    ctx->pc = 0x143344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143348: 0x46181081  sub.s       $f2, $f2, $f24
    ctx->pc = 0x143348u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[24]);
    // 0x14334c: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x143350: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x143350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143354: 0x0  nop
    ctx->pc = 0x143354u;
    // NOP
    // 0x143358: 0x0  nop
    ctx->pc = 0x143358u;
    // NOP
    // 0x14335c: 0x46161083  div.s       $f2, $f2, $f22
    ctx->pc = 0x14335cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[22]);
    // 0x143360: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x143360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x143364: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x143364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143368: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x143368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14336c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x14336cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x143370: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x143370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x143374: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x143374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x143378: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x143378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14337c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x14337cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x143380: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x143380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x143384: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x143384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x143388: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x143388u;
    {
        const bool branch_taken_0x143388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143388u;
        // 0x14338c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143388) {
            ctx->pc = 0x143318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143318;
        }
    }
    ctx->pc = 0x143390u;
    // 0x143390: 0x24031cf0  addiu       $v1, $zero, 0x1CF0
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x143394: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x143394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x143398: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x143398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14339c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x14339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1433a0: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x1433a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x1433a4: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x1433a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x1433a8: 0x8c4b11b0  lw          $t3, 0x11B0($v0)
    ctx->pc = 0x1433a8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x1433ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1433b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1433b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1433b4: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1433b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1433b8: 0x8faa0420  lw          $t2, 0x420($sp)
    ctx->pc = 0x1433b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1433bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1433bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433c0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1433c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1433c4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1433c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433c8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1433c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1433cc: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x1433ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1433d0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x1433d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x1433d4: 0xc057104  jal         func_15C410
    ctx->pc = 0x1433D4u;
    SET_GPR_U32(ctx, 31, 0x1433DCu);
    ctx->pc = 0x1433D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433D4u;
    // 0x1433d8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C410u, 0x1433D4u, 0x1433DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433DCu;
label_1433dc:
    // 0x1433dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1433dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1433E0u;
    {
        const bool branch_taken_0x1433e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433E0u;
        // 0x1433e4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433e0) {
            ctx->pc = 0x1433F8u;
            goto label_1433f8;
        }
    }
    ctx->pc = 0x1433E8u;
    // 0x1433e8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1433e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1433ec: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1433ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x1433f0: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x1433f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
    // 0x1433f4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1433f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1433f8:
    // 0x1433f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1433f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433fc: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1433FCu;
    SET_GPR_U32(ctx, 31, 0x143404u);
    ctx->pc = 0x143400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433FCu;
    // 0x143400: 0x24519b70  addiu       $s1, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1433FCu, 0x143404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143404u;
label_143404:
    // 0x143404: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x143404u;
    SET_GPR_U32(ctx, 31, 0x14340Cu);
    ctx->pc = 0x143408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143404u;
    // 0x143408: 0x8fa40424  lw          $a0, 0x424($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x143404u, 0x14340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14340Cu;
label_14340c:
    // 0x14340c: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x14340Cu;
    SET_GPR_U32(ctx, 31, 0x143414u);
    ctx->pc = 0x143410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14340Cu;
    // 0x143410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x14340Cu, 0x143414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143414u;
label_143414:
    // 0x143414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143418: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x143418u;
    SET_GPR_U32(ctx, 31, 0x143420u);
    ctx->pc = 0x14341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143418u;
    // 0x14341c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x143418u, 0x143420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143420u;
label_143420:
    // 0x143420: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x143420u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143424: 0x0  nop
    ctx->pc = 0x143424u;
    // NOP
    // 0x143428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14342c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x14342cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x143430: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x143430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x143434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x143434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x143438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14343c: 0x0  nop
    ctx->pc = 0x14343cu;
    // NOP
    // 0x143440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x143440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143444: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x143444u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x143448: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x143448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14344c: 0x0  nop
    ctx->pc = 0x14344cu;
    // NOP
    // 0x143450: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x143450u;
    {
        const bool branch_taken_0x143450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143450u;
        // 0x143454: 0x7bb004c0  lq          $s0, 0x4C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143450) {
            ctx->pc = 0x143464u;
            goto label_143464;
        }
    }
    ctx->pc = 0x143458u;
    // 0x143458: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x143458u;
    SET_GPR_U32(ctx, 31, 0x143460u);
    ctx->pc = 0x14345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143458u;
    // 0x14345c: 0x26840210  addiu       $a0, $s4, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x143458u, 0x143460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143460u;
label_143460:
    // 0x143460: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x143460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_143464:
    // 0x143464: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x143464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x143468: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x143468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x14346c: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x14346cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x143470: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x143470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x143474: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x143474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x143478: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x143478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x14347c: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x14347cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x143480: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x143480u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x143484: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x143484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x143488: 0xc7b804f0  lwc1        $f24, 0x4F0($sp)
    ctx->pc = 0x143488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14348c: 0xc7b704e8  lwc1        $f23, 0x4E8($sp)
    ctx->pc = 0x14348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x143490: 0xc7b604e0  lwc1        $f22, 0x4E0($sp)
    ctx->pc = 0x143490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x143494: 0xc7b504d8  lwc1        $f21, 0x4D8($sp)
    ctx->pc = 0x143494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x143498: 0xc7b404d0  lwc1        $f20, 0x4D0($sp)
    ctx->pc = 0x143498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14349c: 0x3e00008  jr          $ra
    ctx->pc = 0x14349Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14349Cu;
        // 0x1434a0: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14349Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1434A4u;
    // 0x1434a4: 0x0  nop
    ctx->pc = 0x1434a4u;
    // NOP
    ctx->pc = 0x1434a8u;
}
