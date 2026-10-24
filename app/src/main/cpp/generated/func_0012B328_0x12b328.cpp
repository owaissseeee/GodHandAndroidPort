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

// Function: func_0012B328
// Address: 0x12b328 - 0x12b5c0
void func_0012B328_0x12b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012B328_0x12b328");
#endif

    switch (ctx->pc) {
        case 0x12b3a4u: goto label_12b3a4;
        case 0x12b3b8u: goto label_12b3b8;
        case 0x12b400u: goto label_12b400;
        case 0x12b420u: goto label_12b420;
        case 0x12b490u: goto label_12b490;
        case 0x12b568u: goto label_12b568;
        default: break;
    }

    ctx->pc = 0x12b328u;

    // 0x12b328: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x12b328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x12b32c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x12b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x12b330: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12b334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b338: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x12b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x12b33c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x12b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x12b340: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x12b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x12b344: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x12b344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x12b348: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x12b348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x12b34c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x12b34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x12b350: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12b350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12b354: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x12b354u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x12b358: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x12b358u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x12b35c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x12b35cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x12b360: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x12b360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x12b364: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x12b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12b368: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x12b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x12b36c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x12b370: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12b374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b378: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x12b378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x12b37c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x12b37cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b380: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x12b380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b384: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x12b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x12b388: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x12b388u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12b38c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12b38cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b390: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x12b390u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12b394: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12b394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12b398: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12b39c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x12B39Cu;
    SET_GPR_U32(ctx, 31, 0x12B3A4u);
    ctx->pc = 0x12B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B39Cu;
    // 0x12b3a0: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12B39Cu, 0x12B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A4u;
label_12b3a4:
    // 0x12b3a4: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x12b3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x12b3a8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x12b3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x12b3ac: 0x12740075  beq         $s3, $s4, . + 4 + (0x75 << 2)
    ctx->pc = 0x12B3ACu;
    {
        const bool branch_taken_0x12b3ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ac) {
            ctx->pc = 0x12B584u;
            goto label_12b584;
        }
    }
    ctx->pc = 0x12B3B4u;
    // 0x12b3b4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x12b3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12b3b8:
    // 0x12b3b8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b3bc: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x12b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x12b3c0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x12b3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x12b3c4: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x12B3C4u;
    {
        const bool branch_taken_0x12b3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3C4u;
        // 0x12b3c8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3c4) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B3CCu;
    // 0x12b3cc: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x12B3CCu;
    {
        const bool branch_taken_0x12b3cc = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x12b3cc) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B3D4u;
    // 0x12b3d4: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x12b3d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x12b3d8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x12b3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x12b3dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B3DCu;
    {
        const bool branch_taken_0x12b3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3DCu;
        // 0x12b3e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3dc) {
            ctx->pc = 0x12B3ECu;
            goto label_12b3ec;
        }
    }
    ctx->pc = 0x12B3E4u;
    // 0x12b3e4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x12b3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x12b3e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b3ec:
    // 0x12b3ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x12b3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12b3f0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x12B3F0u;
    {
        const bool branch_taken_0x12b3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b3f0) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B3F8u;
    // 0x12b3f8: 0xc06de74  jal         func_1B79D0
    ctx->pc = 0x12B3F8u;
    SET_GPR_U32(ctx, 31, 0x12B400u);
    ctx->pc = 0x12B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3F8u;
    // 0x12b3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79D0u, 0x12B3F8u, 0x12B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B400u;
label_12b400:
    // 0x12b400: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x12B400u;
    {
        const bool branch_taken_0x12b400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b400) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B408u;
    // 0x12b408: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x12b408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
    // 0x12b40c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x12B40Cu;
    {
        const bool branch_taken_0x12b40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B40Cu;
        // 0x12b410: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b40c) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B414u;
    // 0x12b414: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b418: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x12B418u;
    SET_GPR_U32(ctx, 31, 0x12B420u);
    ctx->pc = 0x12B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B418u;
    // 0x12b41c: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x12B418u, 0x12B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B420u;
label_12b420:
    // 0x12b420: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x12b420u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x12b424: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x12b424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b428: 0x0  nop
    ctx->pc = 0x12b428u;
    // NOP
    // 0x12b42c: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x12B42Cu;
    {
        const bool branch_taken_0x12b42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b42c) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B434u;
    // 0x12b434: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x12b434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12b438: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x12b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12b43c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x12b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b440: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x12b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b444: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12b444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b448: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b44c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x12b44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b450: 0x0  nop
    ctx->pc = 0x12b450u;
    // NOP
    // 0x12b454: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12B454u;
    {
        const bool branch_taken_0x12b454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B454u;
        // 0x12b458: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b454) {
            ctx->pc = 0x12B460u;
            goto label_12b460;
        }
    }
    ctx->pc = 0x12B45Cu;
    // 0x12b45c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x12b45cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_12b460:
    // 0x12b460: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12b464: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12b464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12b468: 0x0  nop
    ctx->pc = 0x12b468u;
    // NOP
    // 0x12b46c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x12b46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b470: 0x0  nop
    ctx->pc = 0x12b470u;
    // NOP
    // 0x12b474: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x12B474u;
    {
        const bool branch_taken_0x12b474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b474) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B47Cu;
    // 0x12b47c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12b47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12b480: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12b480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12b484: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x12b484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12b488: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x12B488u;
    SET_GPR_U32(ctx, 31, 0x12B490u);
    ctx->pc = 0x12B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B488u;
    // 0x12b48c: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x12B488u, 0x12B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B490u;
label_12b490:
    // 0x12b490: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12b490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b494: 0x0  nop
    ctx->pc = 0x12b494u;
    // NOP
    // 0x12b498: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12B498u;
    {
        const bool branch_taken_0x12b498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B498u;
        // 0x12b49c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b498) {
            ctx->pc = 0x12B4A4u;
            goto label_12b4a4;
        }
    }
    ctx->pc = 0x12B4A0u;
    // 0x12b4a0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x12b4a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_12b4a4:
    // 0x12b4a4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x12b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x12b4a8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12b4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x12b4ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b4b0: 0x0  nop
    ctx->pc = 0x12b4b0u;
    // NOP
    // 0x12b4b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12b4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b4b8: 0x0  nop
    ctx->pc = 0x12b4b8u;
    // NOP
    // 0x12b4bc: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x12B4BCu;
    {
        const bool branch_taken_0x12b4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b4bc) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B4C4u;
    // 0x12b4c4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x12b4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12b4c8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12b4cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b4d0: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x12b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x12b4d4: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B4D4u;
    {
        const bool branch_taken_0x12b4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b4d4) {
            ctx->pc = 0x12B4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B4D4u;
            // 0x12b4d8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B4F8u;
            goto label_12b4f8;
        }
    }
    ctx->pc = 0x12B4DCu;
    // 0x12b4dc: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x12b4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b4e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12b4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12b4e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b4e8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12b4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12b4ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b4f0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x12b4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x12b4f4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x12b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_12b4f8:
    // 0x12b4f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12b4fc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B4FCu;
    {
        const bool branch_taken_0x12b4fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4FCu;
        // 0x12b500: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4fc) {
            ctx->pc = 0x12B520u;
            goto label_12b520;
        }
    }
    ctx->pc = 0x12B504u;
    // 0x12b504: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b508: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x12b508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12b50c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b510: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x12b510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12b514: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x12b518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12b51c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x12b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b520:
    // 0x12b520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b524: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x12b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b52c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x12b52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x12b530: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12b534: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x12b534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x12b538: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12b53c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12b53cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b540: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x12b540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12b544: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x12b544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12b548: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x12b548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b54c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x12b54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12b550: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b554: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12b554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x12b558: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12b558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b55c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x12b560: 0xc04c784  jal         func_131E10
    ctx->pc = 0x12B560u;
    SET_GPR_U32(ctx, 31, 0x12B568u);
    ctx->pc = 0x12B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B560u;
    // 0x12b564: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x12B560u, 0x12B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B568u;
label_12b568:
    // 0x12b568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B568u;
    {
        const bool branch_taken_0x12b568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b568) {
            ctx->pc = 0x12B578u;
            goto label_12b578;
        }
    }
    ctx->pc = 0x12B570u;
    // 0x12b570: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x12b570u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b574: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x12b574u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
label_12b578:
    // 0x12b578: 0x1674ff8f  bne         $s3, $s4, . + 4 + (-0x71 << 2)
    ctx->pc = 0x12B578u;
    {
        const bool branch_taken_0x12b578 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x12B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B578u;
        // 0x12b57c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b578) {
            ctx->pc = 0x12B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3b8;
        }
    }
    ctx->pc = 0x12B580u;
    // 0x12b580: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x12b580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12b584:
    // 0x12b584: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x12b584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12b588: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x12b588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12b58c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x12b58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12b590: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x12b590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12b594: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x12b594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b598: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x12b598u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12b59c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12b59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12b5a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12b5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b5a4: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x12b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12b5a8: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x12b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12b5ac: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x12b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12b5b0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x12b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B4u;
        // 0x12b5b8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B5BCu;
    // 0x12b5bc: 0x0  nop
    ctx->pc = 0x12b5bcu;
    // NOP
    ctx->pc = 0x12b5c0u;
}
