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

// Function: func_0012D3C8
// Address: 0x12d3c8 - 0x12d970
void func_0012D3C8_0x12d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012D3C8_0x12d3c8");
#endif

    switch (ctx->pc) {
        case 0x12d408u: goto label_12d408;
        case 0x12d4d0u: goto label_12d4d0;
        case 0x12d5dcu: goto label_12d5dc;
        case 0x12d5ecu: goto label_12d5ec;
        case 0x12d664u: goto label_12d664;
        case 0x12d6a4u: goto label_12d6a4;
        case 0x12d6b8u: goto label_12d6b8;
        case 0x12d7c8u: goto label_12d7c8;
        case 0x12d7d8u: goto label_12d7d8;
        case 0x12d7fcu: goto label_12d7fc;
        case 0x12d858u: goto label_12d858;
        case 0x12d8d8u: goto label_12d8d8;
        case 0x12d8ecu: goto label_12d8ec;
        case 0x12d914u: goto label_12d914;
        case 0x12d93cu: goto label_12d93c;
        case 0x12d950u: goto label_12d950;
        default: break;
    }

    ctx->pc = 0x12d3c8u;

    // 0x12d3c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x12d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x12d3cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d3d0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x12d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x12d3d4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x12d3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3d8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x12d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x12d3dc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d3e0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x12d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x12d3e4: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d3e8: 0x27ad0030  addiu       $t5, $sp, 0x30
    ctx->pc = 0x12d3e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12d3ec: 0x27ae0040  addiu       $t6, $sp, 0x40
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12d3f0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x12d3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12d3f4: 0x27af0060  addiu       $t7, $sp, 0x60
    ctx->pc = 0x12d3f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12d3f8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12d3fc: 0x27b80080  addiu       $t8, $sp, 0x80
    ctx->pc = 0x12d3fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12d400: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x12d400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d404: 0x0  nop
    ctx->pc = 0x12d404u;
    // NOP
label_12d408:
    // 0x12d408: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d408u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d40c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d410: 0x0  nop
    ctx->pc = 0x12d410u;
    // NOP
    // 0x12d414: 0x0  nop
    ctx->pc = 0x12d414u;
    // NOP
    // 0x12d418: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12D418u;
    {
        const bool branch_taken_0x12d418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x12D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D418u;
        // 0x12d41c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d418) {
            ctx->pc = 0x12D408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d408;
        }
    }
    ctx->pc = 0x12D420u;
    // 0x12d420: 0x248800c0  addiu       $t0, $a0, 0xC0
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x12d424: 0x13a80007  beq         $sp, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D424u;
    {
        const bool branch_taken_0x12d424 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 8));
        ctx->pc = 0x12D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D424u;
        // 0x12d428: 0x248b00d0  addiu       $t3, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d424) {
            ctx->pc = 0x12D444u;
            goto label_12d444;
        }
    }
    ctx->pc = 0x12D42Cu;
    // 0x12d42c: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x12d42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d430: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x12d430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d434: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x12d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d438: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12d438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d43c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12d43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d440: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12d440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12d444:
    // 0x12d444: 0x112b0007  beq         $t1, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D444u;
    {
        const bool branch_taken_0x12d444 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x12D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D444u;
        // 0x12d448: 0x248a00e0  addiu       $t2, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d444) {
            ctx->pc = 0x12D464u;
            goto label_12d464;
        }
    }
    ctx->pc = 0x12D44Cu;
    // 0x12d44c: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x12d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d450: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x12d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d454: 0xc5620008  lwc1        $f2, 0x8($t3)
    ctx->pc = 0x12d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d458: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12d458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12d45c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12d45cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12d460: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12d460u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12d464:
    // 0x12d464: 0x118a0007  beq         $t4, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D464u;
    {
        const bool branch_taken_0x12d464 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        ctx->pc = 0x12D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D464u;
        // 0x12d468: 0x248300f0  addiu       $v1, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d464) {
            ctx->pc = 0x12D484u;
            goto label_12d484;
        }
    }
    ctx->pc = 0x12D46Cu;
    // 0x12d46c: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x12d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d470: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x12d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d474: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x12d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d478: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12d478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12d47c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12d47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12d480: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x12d480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12d484:
    // 0x12d484: 0x11a30007  beq         $t5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D484u;
    {
        const bool branch_taken_0x12d484 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d484) {
            ctx->pc = 0x12D4A4u;
            goto label_12d4a4;
        }
    }
    ctx->pc = 0x12D48Cu;
    // 0x12d48c: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x12d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d490: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d494: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x12d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d498: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12d498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12d49c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12d49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12d4a0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x12d4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12d4a4:
    // 0x12d4a4: 0x11c80007  beq         $t6, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D4A4u;
    {
        const bool branch_taken_0x12d4a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 8));
        ctx->pc = 0x12D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4A4u;
        // 0x12d4a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4a4) {
            ctx->pc = 0x12D4C4u;
            goto label_12d4c4;
        }
    }
    ctx->pc = 0x12D4ACu;
    // 0x12d4ac: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x12d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d4b0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x12d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d4b4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x12d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d4b8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12d4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12d4bc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12d4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12d4c0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x12d4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_12d4c4:
    // 0x12d4c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x12d4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d4c8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d4cc: 0x0  nop
    ctx->pc = 0x12d4ccu;
    // NOP
label_12d4d0:
    // 0x12d4d0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d4d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12d4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12d4d8: 0x0  nop
    ctx->pc = 0x12d4d8u;
    // NOP
    // 0x12d4dc: 0x0  nop
    ctx->pc = 0x12d4dcu;
    // NOP
    // 0x12d4e0: 0x14e9fffb  bne         $a3, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12D4E0u;
    {
        const bool branch_taken_0x12d4e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x12D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4E0u;
        // 0x12d4e4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4e0) {
            ctx->pc = 0x12D4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d4d0;
        }
    }
    ctx->pc = 0x12D4E8u;
    // 0x12d4e8: 0x12280007  beq         $s1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D4E8u;
    {
        const bool branch_taken_0x12d4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 8));
        if (branch_taken_0x12d4e8) {
            ctx->pc = 0x12D508u;
            goto label_12d508;
        }
    }
    ctx->pc = 0x12D4F0u;
    // 0x12d4f0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x12d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d4f4: 0xc48100c0  lwc1        $f1, 0xC0($a0)
    ctx->pc = 0x12d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d4f8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x12d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d4fc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x12d4fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12d500: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x12d500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12d504: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x12d504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_12d508:
    // 0x12d508: 0x11e30007  beq         $t7, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D508u;
    {
        const bool branch_taken_0x12d508 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d508) {
            ctx->pc = 0x12D528u;
            goto label_12d528;
        }
    }
    ctx->pc = 0x12D510u;
    // 0x12d510: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x12d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d514: 0xc48100f0  lwc1        $f1, 0xF0($a0)
    ctx->pc = 0x12d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d518: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x12d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d51c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x12d51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12d520: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x12d520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12d524: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x12d524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_12d528:
    // 0x12d528: 0x120b0007  beq         $s0, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D528u;
    {
        const bool branch_taken_0x12d528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x12d528) {
            ctx->pc = 0x12D548u;
            goto label_12d548;
        }
    }
    ctx->pc = 0x12D530u;
    // 0x12d530: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x12d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d534: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x12d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d538: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x12d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d53c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x12d53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12d540: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x12d540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x12d544: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x12d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_12d548:
    // 0x12d548: 0x130a0007  beq         $t8, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D548u;
    {
        const bool branch_taken_0x12d548 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 10));
        ctx->pc = 0x12D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D548u;
        // 0x12d54c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d548) {
            ctx->pc = 0x12D568u;
            goto label_12d568;
        }
    }
    ctx->pc = 0x12D550u;
    // 0x12d550: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x12d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d554: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x12d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d558: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x12d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d55c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x12d55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12d560: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x12d560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12d564: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x12d564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12d568:
    // 0x12d568: 0x10a30055  beq         $a1, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x12D568u;
    {
        const bool branch_taken_0x12d568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D568u;
        // 0x12d56c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d568) {
            ctx->pc = 0x12D6C0u;
            goto label_12d6c0;
        }
    }
    ctx->pc = 0x12D570u;
    // 0x12d570: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D570u;
    {
        const bool branch_taken_0x12d570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d570) {
            ctx->pc = 0x12D574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D570u;
            // 0x12d574: 0x28a20020  slti        $v0, $a1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D588u;
            goto label_12d588;
        }
    }
    ctx->pc = 0x12D578u;
    // 0x12d578: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D578u;
    {
        const bool branch_taken_0x12d578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D578u;
        // 0x12d57c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d578) {
            ctx->pc = 0x12D598u;
            goto label_12d598;
        }
    }
    ctx->pc = 0x12D580u;
    // 0x12d580: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x12D580u;
    {
        const bool branch_taken_0x12d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D580u;
        // 0x12d584: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d580) {
            ctx->pc = 0x12D958u;
            goto label_12d958;
        }
    }
    ctx->pc = 0x12D588u;
label_12d588:
    // 0x12d588: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x12D588u;
    {
        const bool branch_taken_0x12d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D588u;
        // 0x12d58c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d588) {
            ctx->pc = 0x12D950u;
            goto label_12d950;
        }
    }
    ctx->pc = 0x12D590u;
    // 0x12d590: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x12D590u;
    {
        const bool branch_taken_0x12d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D590u;
        // 0x12d594: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d590) {
            ctx->pc = 0x12D7E0u;
            goto label_12d7e0;
        }
    }
    ctx->pc = 0x12D598u;
label_12d598:
    // 0x12d598: 0x948400aa  lhu         $a0, 0xAA($a0)
    ctx->pc = 0x12d598u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x12d59c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x12d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x12d5a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12D5A0u;
    {
        const bool branch_taken_0x12d5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5A0u;
        // 0x12d5a4: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5a0) {
            ctx->pc = 0x12D5F4u;
            goto label_12d5f4;
        }
    }
    ctx->pc = 0x12D5A8u;
    // 0x12d5a8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D5A8u;
    {
        const bool branch_taken_0x12d5a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5A8u;
        // 0x12d5ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5a8) {
            ctx->pc = 0x12D5BCu;
            goto label_12d5bc;
        }
    }
    ctx->pc = 0x12D5B0u;
    // 0x12d5b0: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d5b4: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x12D5B4u;
    {
        const bool branch_taken_0x12d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5B4u;
        // 0x12d5b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5b4) {
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D5BCu;
label_12d5bc:
    // 0x12d5bc: 0x14c300e5  bne         $a2, $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x12D5BCu;
    {
        const bool branch_taken_0x12d5bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5BCu;
        // 0x12d5c0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5bc) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D5C4u;
    // 0x12d5c4: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d5c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d5d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12d5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12d5d4: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D5D4u;
    SET_GPR_U32(ctx, 31, 0x12D5DCu);
    ctx->pc = 0x12D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5D4u;
    // 0x12d5d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D5D4u, 0x12D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5DCu;
label_12d5dc:
    // 0x12d5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d5e4: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12D5E4u;
    SET_GPR_U32(ctx, 31, 0x12D5ECu);
    ctx->pc = 0x12D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D5E4u;
    // 0x12d5e8: 0x3c0620ff  lui         $a2, 0x20FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8447 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12D5E4u, 0x12D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D5ECu;
label_12d5ec:
    // 0x12d5ec: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x12D5ECu;
    {
        const bool branch_taken_0x12d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5ECu;
        // 0x12d5f0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5ec) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D5F4u;
label_12d5f4:
    // 0x12d5f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D5F4u;
    {
        const bool branch_taken_0x12d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5F4u;
        // 0x12d5f8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5f4) {
            ctx->pc = 0x12D624u;
            goto label_12d624;
        }
    }
    ctx->pc = 0x12D5FCu;
    // 0x12d5fc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D5FCu;
    {
        const bool branch_taken_0x12d5fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5FCu;
        // 0x12d600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5fc) {
            ctx->pc = 0x12D614u;
            goto label_12d614;
        }
    }
    ctx->pc = 0x12D604u;
    // 0x12d604: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d608: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d60c: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x12D60Cu;
    {
        const bool branch_taken_0x12d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D60Cu;
        // 0x12d610: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d60c) {
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D614u;
label_12d614:
    // 0x12d614: 0x14c300cf  bne         $a2, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x12D614u;
    {
        const bool branch_taken_0x12d614 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D614u;
        // 0x12d618: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d614) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D61Cu;
    // 0x12d61c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x12D61Cu;
    {
        const bool branch_taken_0x12d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d61c) {
            ctx->pc = 0x12D8C0u;
            goto label_12d8c0;
        }
    }
    ctx->pc = 0x12D624u;
label_12d624:
    // 0x12d624: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D624u;
    {
        const bool branch_taken_0x12d624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d624) {
            ctx->pc = 0x12D66Cu;
            goto label_12d66c;
        }
    }
    ctx->pc = 0x12D62Cu;
    // 0x12d62c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D62Cu;
    {
        const bool branch_taken_0x12d62c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D62Cu;
        // 0x12d630: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d62c) {
            ctx->pc = 0x12D644u;
            goto label_12d644;
        }
    }
    ctx->pc = 0x12D634u;
    // 0x12d634: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12d634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12d638: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d63c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x12D63Cu;
    {
        const bool branch_taken_0x12d63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D63Cu;
        // 0x12d640: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d63c) {
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D644u;
label_12d644:
    // 0x12d644: 0x14c300c3  bne         $a2, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x12D644u;
    {
        const bool branch_taken_0x12d644 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D644u;
        // 0x12d648: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d644) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D64Cu;
    // 0x12d64c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d654: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d658: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12d658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12d65c: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D65Cu;
    SET_GPR_U32(ctx, 31, 0x12D664u);
    ctx->pc = 0x12D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D65Cu;
    // 0x12d660: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D65Cu, 0x12D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D664u;
label_12d664:
    // 0x12d664: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x12D664u;
    {
        const bool branch_taken_0x12d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D664u;
        // 0x12d668: 0x3c062000  lui         $a2, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d664) {
            ctx->pc = 0x12D8DCu;
            goto label_12d8dc;
        }
    }
    ctx->pc = 0x12D66Cu;
label_12d66c:
    // 0x12d66c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D66Cu;
    {
        const bool branch_taken_0x12d66c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D66Cu;
        // 0x12d670: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d66c) {
            ctx->pc = 0x12D684u;
            goto label_12d684;
        }
    }
    ctx->pc = 0x12D674u;
    // 0x12d674: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x12d674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x12d678: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d67c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x12D67Cu;
    {
        const bool branch_taken_0x12d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D67Cu;
        // 0x12d680: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d67c) {
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D684u;
label_12d684:
    // 0x12d684: 0x14c300b3  bne         $a2, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x12D684u;
    {
        const bool branch_taken_0x12d684 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D684u;
        // 0x12d688: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d684) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D68Cu;
    // 0x12d68c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d694: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d698: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12d698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12d69c: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D69Cu;
    SET_GPR_U32(ctx, 31, 0x12D6A4u);
    ctx->pc = 0x12D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D69Cu;
    // 0x12d6a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D69Cu, 0x12D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6A4u;
label_12d6a4:
    // 0x12d6a4: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x12d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x12d6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d6b0: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12D6B0u;
    SET_GPR_U32(ctx, 31, 0x12D6B8u);
    ctx->pc = 0x12D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6B0u;
    // 0x12d6b4: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12D6B0u, 0x12D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6B8u;
label_12d6b8:
    // 0x12d6b8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x12D6B8u;
    {
        const bool branch_taken_0x12d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6B8u;
        // 0x12d6bc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6b8) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D6C0u;
label_12d6c0:
    // 0x12d6c0: 0x14c0001f  bnez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x12D6C0u;
    {
        const bool branch_taken_0x12d6c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d6c0) {
            ctx->pc = 0x12D740u;
            goto label_12d740;
        }
    }
    ctx->pc = 0x12D6C8u;
    // 0x12d6c8: 0x948300a8  lhu         $v1, 0xA8($a0)
    ctx->pc = 0x12d6c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x12d6cc: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x12d6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12d6d0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12D6D0u;
    {
        const bool branch_taken_0x12d6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6D0u;
        // 0x12d6d4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6d0) {
            ctx->pc = 0x12D72Cu;
            goto label_12d72c;
        }
    }
    ctx->pc = 0x12D6D8u;
    // 0x12d6d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d6dc: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x12d6e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12d6e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d6e8: 0x800008  jr          $a0
    ctx->pc = 0x12D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D6F0u: goto label_12d6f0;
            case 0x12D6FCu: goto label_12d6fc;
            case 0x12D708u: goto label_12d708;
            case 0x12D714u: goto label_12d714;
            case 0x12D720u: goto label_12d720;
            case 0x12D72Cu: goto label_12d72c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D6E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12D6F0u;
label_12d6f0:
    // 0x12d6f0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12d6f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12D6F4u;
    {
        const bool branch_taken_0x12d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6F4u;
        // 0x12d6f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6f4) {
            ctx->pc = 0x12D734u;
            goto label_12d734;
        }
    }
    ctx->pc = 0x12D6FCu;
label_12d6fc:
    // 0x12d6fc: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12D700u;
    {
        const bool branch_taken_0x12d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D700u;
        // 0x12d704: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d700) {
            ctx->pc = 0x12D738u;
            goto label_12d738;
        }
    }
    ctx->pc = 0x12D708u;
label_12d708:
    // 0x12d708: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x12d70c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12D70Cu;
    {
        const bool branch_taken_0x12d70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D70Cu;
        // 0x12d710: 0x34c68080  ori         $a2, $a2, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d70c) {
            ctx->pc = 0x12D734u;
            goto label_12d734;
        }
    }
    ctx->pc = 0x12D714u;
label_12d714:
    // 0x12d714: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12d714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12d718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D718u;
    {
        const bool branch_taken_0x12d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D718u;
        // 0x12d71c: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d718) {
            ctx->pc = 0x12D734u;
            goto label_12d734;
        }
    }
    ctx->pc = 0x12D720u;
label_12d720:
    // 0x12d720: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D724u;
    {
        const bool branch_taken_0x12d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D724u;
        // 0x12d728: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d724) {
            ctx->pc = 0x12D734u;
            goto label_12d734;
        }
    }
    ctx->pc = 0x12D72Cu;
label_12d72c:
    // 0x12d72c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12d72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12d730: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x12d730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_12d734:
    // 0x12d734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12d738:
    // 0x12d738: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x12D738u;
    {
        const bool branch_taken_0x12d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D738u;
        // 0x12d73c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d738) {
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D740u;
label_12d740:
    // 0x12d740: 0x14c50084  bne         $a2, $a1, . + 4 + (0x84 << 2)
    ctx->pc = 0x12D740u;
    {
        const bool branch_taken_0x12d740 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x12D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D740u;
        // 0x12d744: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d740) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D748u;
    // 0x12d748: 0x948300a8  lhu         $v1, 0xA8($a0)
    ctx->pc = 0x12d748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x12d74c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x12d74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12d750: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12D750u;
    {
        const bool branch_taken_0x12d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D750u;
        // 0x12d754: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d750) {
            ctx->pc = 0x12D7A8u;
            goto label_12d7a8;
        }
    }
    ctx->pc = 0x12D758u;
    // 0x12d758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12d758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d75c: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x12d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x12d760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12d764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12d764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d768: 0x800008  jr          $a0
    ctx->pc = 0x12D768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D770u: goto label_12d770;
            case 0x12D77Cu: goto label_12d77c;
            case 0x12D784u: goto label_12d784;
            case 0x12D790u: goto label_12d790;
            case 0x12D79Cu: goto label_12d79c;
            case 0x12D7A8u: goto label_12d7a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12D770u;
label_12d770:
    // 0x12d770: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x12d770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x12d774: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12D774u;
    {
        const bool branch_taken_0x12d774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D774u;
        // 0x12d778: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d774) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D77Cu;
label_12d77c:
    // 0x12d77c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12D77Cu;
    {
        const bool branch_taken_0x12d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D77Cu;
        // 0x12d780: 0x3c1020ff  lui         $s0, 0x20FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d77c) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D784u;
label_12d784:
    // 0x12d784: 0x3c102080  lui         $s0, 0x2080
    ctx->pc = 0x12d784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8320 << 16));
    // 0x12d788: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12D788u;
    {
        const bool branch_taken_0x12d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D788u;
        // 0x12d78c: 0x36108080  ori         $s0, $s0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d788) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D790u;
label_12d790:
    // 0x12d790: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x12d794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D794u;
    {
        const bool branch_taken_0x12d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D794u;
        // 0x12d798: 0x3610ff00  ori         $s0, $s0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d794) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D79Cu;
label_12d79c:
    // 0x12d79c: 0x3c1020ff  lui         $s0, 0x20FF
    ctx->pc = 0x12d79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8447 << 16));
    // 0x12d7a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D7A0u;
    {
        const bool branch_taken_0x12d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7A0u;
        // 0x12d7a4: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7a0) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D7A8u;
label_12d7a8:
    // 0x12d7a8: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x12d7ac: 0x361000ff  ori         $s0, $s0, 0xFF
    ctx->pc = 0x12d7acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
label_12d7b0:
    // 0x12d7b0: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d7b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d7bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12d7bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12d7c0: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D7C0u;
    SET_GPR_U32(ctx, 31, 0x12D7C8u);
    ctx->pc = 0x12D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7C0u;
    // 0x12d7c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D7C0u, 0x12D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7C8u;
label_12d7c8:
    // 0x12d7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12d7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7d0: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12D7D0u;
    SET_GPR_U32(ctx, 31, 0x12D7D8u);
    ctx->pc = 0x12D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7D0u;
    // 0x12d7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12D7D0u, 0x12D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7D8u;
label_12d7d8:
    // 0x12d7d8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x12D7D8u;
    {
        const bool branch_taken_0x12d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7D8u;
        // 0x12d7dc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7d8) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D7E0u;
label_12d7e0:
    // 0x12d7e0: 0x2448d2e0  addiu       $t0, $v0, -0x2D20
    ctx->pc = 0x12d7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955744));
    // 0x12d7e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x12d7e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7e8: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x12d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x12d7ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12D7ECu;
    {
        const bool branch_taken_0x12d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7ECu;
        // 0x12d7f0: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7ec) {
            ctx->pc = 0x12D850u;
            goto label_12d850;
        }
    }
    ctx->pc = 0x12D7F4u;
    // 0x12d7f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d7f8: 0x25030080  addiu       $v1, $t0, 0x80
    ctx->pc = 0x12d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_12d7fc:
    // 0x12d7fc: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x12d7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12d800: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x12d800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12d804: 0x690a000f  ldl         $t2, 0xF($t0)
    ctx->pc = 0x12d804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x12d808: 0x6d0a0008  ldr         $t2, 0x8($t0)
    ctx->pc = 0x12d808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x12d80c: 0x690b0017  ldl         $t3, 0x17($t0)
    ctx->pc = 0x12d80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x12d810: 0x6d0b0010  ldr         $t3, 0x10($t0)
    ctx->pc = 0x12d810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x12d814: 0x690c001f  ldl         $t4, 0x1F($t0)
    ctx->pc = 0x12d814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x12d818: 0x6d0c0018  ldr         $t4, 0x18($t0)
    ctx->pc = 0x12d818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x12d81c: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x12d81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d820: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x12d820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d824: 0xb0ea000f  sdl         $t2, 0xF($a3)
    ctx->pc = 0x12d824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d828: 0xb4ea0008  sdr         $t2, 0x8($a3)
    ctx->pc = 0x12d828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d82c: 0xb0eb0017  sdl         $t3, 0x17($a3)
    ctx->pc = 0x12d82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d830: 0xb4eb0010  sdr         $t3, 0x10($a3)
    ctx->pc = 0x12d830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d834: 0xb0ec001f  sdl         $t4, 0x1F($a3)
    ctx->pc = 0x12d834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d838: 0xb4ec0018  sdr         $t4, 0x18($a3)
    ctx->pc = 0x12d838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d83c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x12d83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x12d840: 0x1503ffee  bne         $t0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12D840u;
    {
        const bool branch_taken_0x12d840 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D840u;
        // 0x12d844: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d840) {
            ctx->pc = 0x12D7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d7fc;
        }
    }
    ctx->pc = 0x12D848u;
    // 0x12d848: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12D848u;
    {
        const bool branch_taken_0x12d848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D848u;
        // 0x12d84c: 0x8c8300ac  lw          $v1, 0xAC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d848) {
            ctx->pc = 0x12D888u;
            goto label_12d888;
        }
    }
    ctx->pc = 0x12D850u;
label_12d850:
    // 0x12d850: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12d850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d854: 0x25030080  addiu       $v1, $t0, 0x80
    ctx->pc = 0x12d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_12d858:
    // 0x12d858: 0xdd050000  ld          $a1, 0x0($t0)
    ctx->pc = 0x12d858u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12d85c: 0xdd0a0008  ld          $t2, 0x8($t0)
    ctx->pc = 0x12d85cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12d860: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x12d860u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x12d864: 0xdd0c0018  ld          $t4, 0x18($t0)
    ctx->pc = 0x12d864u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x12d868: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x12d868u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x12d86c: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x12d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
    // 0x12d870: 0xfceb0010  sd          $t3, 0x10($a3)
    ctx->pc = 0x12d870u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 11));
    // 0x12d874: 0xfcec0018  sd          $t4, 0x18($a3)
    ctx->pc = 0x12d874u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 12));
    // 0x12d878: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x12d878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x12d87c: 0x1503fff6  bne         $t0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x12D87Cu;
    {
        const bool branch_taken_0x12d87c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x12D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D87Cu;
        // 0x12d880: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d87c) {
            ctx->pc = 0x12D858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d858;
        }
    }
    ctx->pc = 0x12D884u;
    // 0x12d884: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_12d888:
    // 0x12d888: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x12d88c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d890: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12d890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12d894: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12D894u;
    {
        const bool branch_taken_0x12d894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d894) {
            ctx->pc = 0x12D8F4u;
            goto label_12d8f4;
        }
    }
    ctx->pc = 0x12D89Cu;
    // 0x12d89c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D89Cu;
    {
        const bool branch_taken_0x12d89c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D89Cu;
        // 0x12d8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d89c) {
            ctx->pc = 0x12D8B8u;
            goto label_12d8b8;
        }
    }
    ctx->pc = 0x12D8A4u;
    // 0x12d8a4: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d8a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d8b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12D8B0u;
    {
        const bool branch_taken_0x12d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8B0u;
        // 0x12d8b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8b0) {
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D8B8u;
label_12d8b8:
    // 0x12d8b8: 0x14c20026  bne         $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x12D8B8u;
    {
        const bool branch_taken_0x12d8b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8B8u;
        // 0x12d8bc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8b8) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D8C0u;
label_12d8c0:
    // 0x12d8c0: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d8c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d8cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12d8ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12d8d0: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D8D0u;
    SET_GPR_U32(ctx, 31, 0x12D8D8u);
    ctx->pc = 0x12D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8D0u;
    // 0x12d8d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D8D0u, 0x12D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8D8u;
label_12d8d8:
    // 0x12d8d8: 0x3c0620ff  lui         $a2, 0x20FF
    ctx->pc = 0x12d8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8447 << 16));
label_12d8dc:
    // 0x12d8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d8e4: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12D8E4u;
    SET_GPR_U32(ctx, 31, 0x12D8ECu);
    ctx->pc = 0x12D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D8E4u;
    // 0x12d8e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12D8E4u, 0x12D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8ECu;
label_12d8ec:
    // 0x12d8ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12D8ECu;
    {
        const bool branch_taken_0x12d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8ECu;
        // 0x12d8f0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8ec) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D8F4u;
label_12d8f4:
    // 0x12d8f4: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D8F4u;
    {
        const bool branch_taken_0x12d8f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8F4u;
        // 0x12d8f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8f4) {
            ctx->pc = 0x12D91Cu;
            goto label_12d91c;
        }
    }
    ctx->pc = 0x12D8FCu;
    // 0x12d8fc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x12d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x12d900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d904: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d908: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x12d908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_12d90c:
    // 0x12d90c: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D90Cu;
    SET_GPR_U32(ctx, 31, 0x12D914u);
    ctx->pc = 0x12D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D90Cu;
    // 0x12d910: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D90Cu, 0x12D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D914u;
label_12d914:
    // 0x12d914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12D914u;
    {
        const bool branch_taken_0x12d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D914u;
        // 0x12d918: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d914) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D91Cu;
label_12d91c:
    // 0x12d91c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12D91Cu;
    {
        const bool branch_taken_0x12d91c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D91Cu;
        // 0x12d920: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d91c) {
            ctx->pc = 0x12D954u;
            goto label_12d954;
        }
    }
    ctx->pc = 0x12D924u;
    // 0x12d924: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x12d928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12d928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d92c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d930: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x12d930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x12d934: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x12D934u;
    SET_GPR_U32(ctx, 31, 0x12D93Cu);
    ctx->pc = 0x12D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D934u;
    // 0x12d938: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x12D934u, 0x12D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D93Cu;
label_12d93c:
    // 0x12d93c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x12d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x12d940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d948: 0xc04cd2a  jal         func_1334A8
    ctx->pc = 0x12D948u;
    SET_GPR_U32(ctx, 31, 0x12D950u);
    ctx->pc = 0x12D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D948u;
    // 0x12d94c: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A8u, 0x12D948u, 0x12D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D950u;
label_12d950:
    // 0x12d950: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x12d950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_12d954:
    // 0x12d954: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x12d954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_12d958:
    // 0x12d958: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x12d958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12d95c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D95Cu;
        // 0x12d960: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D964u;
    // 0x12d964: 0x0  nop
    ctx->pc = 0x12d964u;
    // NOP
    // 0x12d968: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x12d968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12d96c: 0x0  nop
    ctx->pc = 0x12d96cu;
    // NOP
    ctx->pc = 0x12d970u;
}
