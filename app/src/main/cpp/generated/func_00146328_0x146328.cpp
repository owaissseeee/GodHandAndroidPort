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

// Function: func_00146328
// Address: 0x146328 - 0x146748
void func_00146328_0x146328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146328_0x146328");
#endif

    switch (ctx->pc) {
        case 0x14638cu: goto label_14638c;
        case 0x1463bcu: goto label_1463bc;
        case 0x1463ccu: goto label_1463cc;
        case 0x1463e0u: goto label_1463e0;
        case 0x146498u: goto label_146498;
        case 0x146540u: goto label_146540;
        case 0x146590u: goto label_146590;
        case 0x1465a0u: goto label_1465a0;
        case 0x146650u: goto label_146650;
        case 0x146670u: goto label_146670;
        case 0x1466a8u: goto label_1466a8;
        case 0x1466b0u: goto label_1466b0;
        case 0x1466b8u: goto label_1466b8;
        case 0x1466c0u: goto label_1466c0;
        case 0x1466c8u: goto label_1466c8;
        case 0x1466e0u: goto label_1466e0;
        case 0x1466e8u: goto label_1466e8;
        case 0x1466f0u: goto label_1466f0;
        case 0x1466f8u: goto label_1466f8;
        case 0x146700u: goto label_146700;
        default: break;
    }

    ctx->pc = 0x146328u;

    // 0x146328: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x146328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x14632c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146330: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x146330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x146334: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x146334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x146338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x146338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14633c: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x14633cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x146340: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x146340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x146344: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x146344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x146348: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x146348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x14634c: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x14634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x146350: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x146350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x146354: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x146354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x146358: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x146358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x14635c: 0xe7b804f0  swc1        $f24, 0x4F0($sp)
    ctx->pc = 0x14635cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
    // 0x146360: 0xe7b704e8  swc1        $f23, 0x4E8($sp)
    ctx->pc = 0x146360u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
    // 0x146364: 0xe7b604e0  swc1        $f22, 0x4E0($sp)
    ctx->pc = 0x146364u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x146368: 0xe7b504d8  swc1        $f21, 0x4D8($sp)
    ctx->pc = 0x146368u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
    // 0x14636c: 0xe7b404d0  swc1        $f20, 0x4D0($sp)
    ctx->pc = 0x14636cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
    // 0x146370: 0x8622041e  lh          $v0, 0x41E($s1)
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1054)));
    // 0x146374: 0x144300d6  bne         $v0, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x146374u;
    {
        const bool branch_taken_0x146374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x146378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146374u;
        // 0x146378: 0x26300430  addiu       $s0, $s1, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146374) {
            ctx->pc = 0x1466D0u;
            goto label_1466d0;
        }
    }
    ctx->pc = 0x14637Cu;
    // 0x14637c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146380: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x146380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x146384: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x146384u;
    SET_GPR_U32(ctx, 31, 0x14638Cu);
    ctx->pc = 0x146388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146384u;
    // 0x146388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x146384u, 0x14638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14638Cu;
label_14638c:
    // 0x14638c: 0x26220480  addiu       $v0, $s1, 0x480
    ctx->pc = 0x14638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x146390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146394: 0xafa20428  sw          $v0, 0x428($sp)
    ctx->pc = 0x146394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
    // 0x146398: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x146398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14639c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1463a0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1463a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1463a4: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1463a8: 0xe7b5002c  swc1        $f21, 0x2C($sp)
    ctx->pc = 0x1463a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1463ac: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1463acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1463b0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1463b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1463b4: 0xc0ab38a  jal         func_2ACE28
    ctx->pc = 0x1463B4u;
    SET_GPR_U32(ctx, 31, 0x1463BCu);
    ctx->pc = 0x1463B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463B4u;
    // 0x1463b8: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE28u, 0x1463B4u, 0x1463BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463BCu;
label_1463bc:
    // 0x1463bc: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x1463bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
    // 0x1463c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1463c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1463c4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1463C4u;
    SET_GPR_U32(ctx, 31, 0x1463CCu);
    ctx->pc = 0x1463C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463C4u;
    // 0x1463c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1463C4u, 0x1463CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463CCu;
label_1463cc:
    // 0x1463cc: 0xc4540038  lwc1        $f20, 0x38($v0)
    ctx->pc = 0x1463ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1463d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1463d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1463d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1463d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1463d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1463D8u;
    SET_GPR_U32(ctx, 31, 0x1463E0u);
    ctx->pc = 0x1463DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463D8u;
    // 0x1463dc: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1463D8u, 0x1463E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1463E0u;
label_1463e0:
    // 0x1463e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1463e4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x1463e8: 0xafa30424  sw          $v1, 0x424($sp)
    ctx->pc = 0x1463e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 3));
    // 0x1463ec: 0x27a70410  addiu       $a3, $sp, 0x410
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x1463f0: 0x862304d0  lh          $v1, 0x4D0($s1)
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1232)));
    // 0x1463f4: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1463f8: 0x8485d70c  lh          $a1, -0x28F4($a0)
    ctx->pc = 0x1463f8u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x3BD70Cu));
    // 0x1463fc: 0x27b60400  addiu       $s6, $sp, 0x400
    ctx->pc = 0x1463fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x146400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146404: 0x0  nop
    ctx->pc = 0x146404u;
    // NOP
    // 0x146408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x146408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14640c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x14640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x146410: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x146410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x146414: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146418: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x146418u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14641c: 0x0  nop
    ctx->pc = 0x14641cu;
    // NOP
    // 0x146420: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x146420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x146424: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x146424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146428: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x146428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14642c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x14642cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x146430: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146434: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x146434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x146438: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x146438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x14643c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x14643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146440: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x146440u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x146444: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x146444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146448: 0x0  nop
    ctx->pc = 0x146448u;
    // NOP
    // 0x14644c: 0x0  nop
    ctx->pc = 0x14644cu;
    // NOP
    // 0x146450: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x146450u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x146454: 0x3c01c1d0  lui         $at, 0xC1D0
    ctx->pc = 0x146454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49616 << 16));
    // 0x146458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14645c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x14645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x146460: 0x27b702e0  addiu       $s7, $sp, 0x2E0
    ctx->pc = 0x146460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x146464: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x146464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x146468: 0x27be0370  addiu       $fp, $sp, 0x370
    ctx->pc = 0x146468u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x14646c: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x146470: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x146470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x146474: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x146474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x146478: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x146478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x14647c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146480: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x146480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x146484: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x146488: 0x0  nop
    ctx->pc = 0x146488u;
    // NOP
    // 0x14648c: 0x0  nop
    ctx->pc = 0x14648cu;
    // NOP
    // 0x146490: 0x46040543  div.s       $f21, $f0, $f4
    ctx->pc = 0x146490u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x146494: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x146494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_146498:
    // 0x146498: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x146498u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14649c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1464a0: 0x0  nop
    ctx->pc = 0x1464a0u;
    // NOP
    // 0x1464a4: 0x0  nop
    ctx->pc = 0x1464a4u;
    // NOP
    // 0x1464a8: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1464A8u;
    {
        const bool branch_taken_0x1464a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1464ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464A8u;
        // 0x1464ac: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464a8) {
            ctx->pc = 0x146498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146498;
        }
    }
    ctx->pc = 0x1464B0u;
    // 0x1464b0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1464b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1464b4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1464b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1464b8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1464b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1464bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1464c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1464c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1464c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1464c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1464c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1464c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1464cc: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1464ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1464d0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x1464d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1464d4: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x1464d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1464d8: 0xe7a00370  swc1        $f0, 0x370($sp)
    ctx->pc = 0x1464d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x1464dc: 0xe7b402e0  swc1        $f20, 0x2E0($sp)
    ctx->pc = 0x1464dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x1464e0: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x1464e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1464e4: 0xfba40410  sqc2        $vf4, 0x410($sp)
    ctx->pc = 0x1464e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1464e8: 0xdba40410  lqc2        $vf4, 0x410($sp)
    ctx->pc = 0x1464e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1464ec: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1464ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1464f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1464f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1464f4: 0xfba40410  sqc2        $vf4, 0x410($sp)
    ctx->pc = 0x1464f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1464f8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1464f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1464fc: 0xfba40400  sqc2        $vf4, 0x400($sp)
    ctx->pc = 0x1464fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x146500: 0xc7a10400  lwc1        $f1, 0x400($sp)
    ctx->pc = 0x146500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146504: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x146504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146508: 0xc7a20404  lwc1        $f2, 0x404($sp)
    ctx->pc = 0x146508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14650c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14650cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146510: 0xc7a00408  lwc1        $f0, 0x408($sp)
    ctx->pc = 0x146510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146514: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x146514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x146518: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x146518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x14651c: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x14651cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x146520: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x146520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x146524: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x146524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146528: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x146528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x14652c: 0x27d30008  addiu       $s3, $fp, 0x8
    ctx->pc = 0x14652cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x146530: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x146530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x146534: 0x26f20008  addiu       $s2, $s7, 0x8
    ctx->pc = 0x146534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x146538: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x146538u;
    SET_GPR_U32(ctx, 31, 0x146540u);
    ctx->pc = 0x14653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146538u;
    // 0x14653c: 0xafa00374  sw          $zero, 0x374($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x146538u, 0x146540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146540u;
label_146540:
    // 0x146540: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x146544: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x146544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x146548: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x146548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x14654c: 0xe7b50408  swc1        $f21, 0x408($sp)
    ctx->pc = 0x14654cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1032), bits); }
    // 0x146550: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x146550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146554: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x146554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x146558: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x146558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14655c: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x14655cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x146560: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x146560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146564: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x146564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x146568: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x146568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x14656c: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x14656cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x146570: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x146570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x146574: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x146574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x146578: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x146578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x14657c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x14657cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x146580: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x146584: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x146584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x146588: 0xc0c2a1c  jal         func_30A870
    ctx->pc = 0x146588u;
    SET_GPR_U32(ctx, 31, 0x146590u);
    ctx->pc = 0x14658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146588u;
    // 0x14658c: 0xe6d4000c  swc1        $f20, 0xC($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A870u, 0x146588u, 0x146590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146590u;
label_146590:
    // 0x146590: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146594: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x146594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x146598: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x146598u;
    SET_GPR_U32(ctx, 31, 0x1465A0u);
    ctx->pc = 0x14659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146598u;
    // 0x14659c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x146598u, 0x1465A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465A0u;
label_1465a0:
    // 0x1465a0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1465a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1465a4: 0x2682fffe  addiu       $v0, $s4, -0x2
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x1465a8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1465a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1465ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1465acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1465b0: 0x0  nop
    ctx->pc = 0x1465b0u;
    // NOP
    // 0x1465b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1465b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1465b8: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x1465b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x1465bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1465bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1465c0: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x1465c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1465c4: 0x0  nop
    ctx->pc = 0x1465c4u;
    // NOP
    // 0x1465c8: 0x0  nop
    ctx->pc = 0x1465c8u;
    // NOP
    // 0x1465cc: 0x46161083  div.s       $f2, $f2, $f22
    ctx->pc = 0x1465ccu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[22]);
    // 0x1465d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1465d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1465d4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1465d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1465d8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1465d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1465dc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1465dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1465e0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1465e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1465e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1465e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1465e8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1465e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1465ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1465ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1465f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1465f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1465f4: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1465f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1465f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1465f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1465fc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1465FCu;
    {
        const bool branch_taken_0x1465fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465FCu;
        // 0x146600: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465fc) {
            ctx->pc = 0x146590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146590;
        }
    }
    ctx->pc = 0x146604u;
    // 0x146604: 0x24031cf0  addiu       $v1, $zero, 0x1CF0
    ctx->pc = 0x146604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x146608: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x146608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14660c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14660cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x146610: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x146610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x146614: 0x8fa30424  lw          $v1, 0x424($sp)
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x146618: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x146618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x14661c: 0x8c4b11b0  lw          $t3, 0x11B0($v0)
    ctx->pc = 0x14661cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x146620: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x146620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x146624: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x146624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146628: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x146628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x14662c: 0x8faa0420  lw          $t2, 0x420($sp)
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x146630: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x146630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146634: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x146634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x146638: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x146638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14663c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x14663cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x146640: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x146640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x146644: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x146644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x146648: 0xc057104  jal         func_15C410
    ctx->pc = 0x146648u;
    SET_GPR_U32(ctx, 31, 0x146650u);
    ctx->pc = 0x14664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146648u;
    // 0x14664c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C410u, 0x146648u, 0x146650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146650u;
label_146650:
    // 0x146650: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x146650u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146654: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146654u;
    {
        const bool branch_taken_0x146654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146654) {
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x14665Cu;
    // 0x14665c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x146660: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x146660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x146664: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x146664u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_146668:
    // 0x146668: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x146668u;
    SET_GPR_U32(ctx, 31, 0x146670u);
    ctx->pc = 0x14666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146668u;
    // 0x14666c: 0x8fa40428  lw          $a0, 0x428($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x146668u, 0x146670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146670u;
label_146670:
    // 0x146670: 0x8623041e  lh          $v1, 0x41E($s1)
    ctx->pc = 0x146670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1054)));
    // 0x146674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x146674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146678: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x146678u;
    {
        const bool branch_taken_0x146678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146678) {
            ctx->pc = 0x14667Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146678u;
            // 0x14667c: 0x8622041e  lh          $v0, 0x41E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1054)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1466D0u;
            goto label_1466d0;
        }
    }
    ctx->pc = 0x146680u;
    // 0x146680: 0xc62102a4  lwc1        $f1, 0x2A4($s1)
    ctx->pc = 0x146680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14668c: 0x0  nop
    ctx->pc = 0x14668cu;
    // NOP
    // 0x146690: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x146690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146694: 0x0  nop
    ctx->pc = 0x146694u;
    // NOP
    // 0x146698: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x146698u;
    {
        const bool branch_taken_0x146698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146698) {
            ctx->pc = 0x14669Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146698u;
            // 0x14669c: 0x8622041e  lh          $v0, 0x41E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1054)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1466D0u;
            goto label_1466d0;
        }
    }
    ctx->pc = 0x1466A0u;
    // 0x1466a0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466A0u;
    SET_GPR_U32(ctx, 31, 0x1466A8u);
    ctx->pc = 0x1466A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466A0u;
    // 0x1466a4: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466A0u, 0x1466A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466A8u;
label_1466a8:
    // 0x1466a8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466A8u;
    SET_GPR_U32(ctx, 31, 0x1466B0u);
    ctx->pc = 0x1466ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466A8u;
    // 0x1466ac: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466A8u, 0x1466B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466B0u;
label_1466b0:
    // 0x1466b0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466B0u;
    SET_GPR_U32(ctx, 31, 0x1466B8u);
    ctx->pc = 0x1466B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466B0u;
    // 0x1466b4: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466B0u, 0x1466B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466B8u;
label_1466b8:
    // 0x1466b8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466B8u;
    SET_GPR_U32(ctx, 31, 0x1466C0u);
    ctx->pc = 0x1466BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466B8u;
    // 0x1466bc: 0x262401f0  addiu       $a0, $s1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466B8u, 0x1466C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466C0u;
label_1466c0:
    // 0x1466c0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466C0u;
    SET_GPR_U32(ctx, 31, 0x1466C8u);
    ctx->pc = 0x1466C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466C0u;
    // 0x1466c4: 0x26240240  addiu       $a0, $s1, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466C0u, 0x1466C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466C8u;
label_1466c8:
    // 0x1466c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1466C8u;
    {
        const bool branch_taken_0x1466c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466C8u;
        // 0x1466cc: 0x7bb004c0  lq          $s0, 0x4C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466c8) {
            ctx->pc = 0x146704u;
            goto label_146704;
        }
    }
    ctx->pc = 0x1466D0u;
label_1466d0:
    // 0x1466d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1466D0u;
    {
        const bool branch_taken_0x1466d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466D0u;
        // 0x1466d4: 0x7bb004c0  lq          $s0, 0x4C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466d0) {
            ctx->pc = 0x146704u;
            goto label_146704;
        }
    }
    ctx->pc = 0x1466D8u;
    // 0x1466d8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466D8u;
    SET_GPR_U32(ctx, 31, 0x1466E0u);
    ctx->pc = 0x1466DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466D8u;
    // 0x1466dc: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466D8u, 0x1466E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466E0u;
label_1466e0:
    // 0x1466e0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466E0u;
    SET_GPR_U32(ctx, 31, 0x1466E8u);
    ctx->pc = 0x1466E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466E0u;
    // 0x1466e4: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466E0u, 0x1466E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466E8u;
label_1466e8:
    // 0x1466e8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466E8u;
    SET_GPR_U32(ctx, 31, 0x1466F0u);
    ctx->pc = 0x1466ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466E8u;
    // 0x1466ec: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466E8u, 0x1466F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466F0u;
label_1466f0:
    // 0x1466f0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466F0u;
    SET_GPR_U32(ctx, 31, 0x1466F8u);
    ctx->pc = 0x1466F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466F0u;
    // 0x1466f4: 0x262401f0  addiu       $a0, $s1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466F0u, 0x1466F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466F8u;
label_1466f8:
    // 0x1466f8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1466F8u;
    SET_GPR_U32(ctx, 31, 0x146700u);
    ctx->pc = 0x1466FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466F8u;
    // 0x1466fc: 0x26240240  addiu       $a0, $s1, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1466F8u, 0x146700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146700u;
label_146700:
    // 0x146700: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x146700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_146704:
    // 0x146704: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x146704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x146708: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x146708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x14670c: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x14670cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x146710: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x146710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x146714: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x146714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x146718: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x146718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x14671c: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x14671cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x146720: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x146720u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x146724: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x146724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x146728: 0xc7b804f0  lwc1        $f24, 0x4F0($sp)
    ctx->pc = 0x146728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14672c: 0xc7b704e8  lwc1        $f23, 0x4E8($sp)
    ctx->pc = 0x14672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x146730: 0xc7b604e0  lwc1        $f22, 0x4E0($sp)
    ctx->pc = 0x146730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x146734: 0xc7b504d8  lwc1        $f21, 0x4D8($sp)
    ctx->pc = 0x146734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x146738: 0xc7b404d0  lwc1        $f20, 0x4D0($sp)
    ctx->pc = 0x146738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14673c: 0x3e00008  jr          $ra
    ctx->pc = 0x14673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14673Cu;
        // 0x146740: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146744u;
    // 0x146744: 0x0  nop
    ctx->pc = 0x146744u;
    // NOP
    ctx->pc = 0x146748u;
}
