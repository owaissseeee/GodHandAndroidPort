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

// Function: func_0026F328
// Address: 0x26f328 - 0x26f478
void func_0026F328_0x26f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026F328_0x26f328");
#endif

    switch (ctx->pc) {
        case 0x26f3b8u: goto label_26f3b8;
        case 0x26f424u: goto label_26f424;
        default: break;
    }

    ctx->pc = 0x26f328u;

    // 0x26f328: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26f32c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x26f330: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26f334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26f334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f338: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x26f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x26f33c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26f340: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x26f340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26f344: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x26f348: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x26f348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x26f34c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F34Cu;
    {
        const bool branch_taken_0x26f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F34Cu;
        // 0x26f350: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f34c) {
            ctx->pc = 0x26F364u;
            goto label_26f364;
        }
    }
    ctx->pc = 0x26F354u;
    // 0x26f354: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x26F354u;
    {
        const bool branch_taken_0x26f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F354u;
        // 0x26f358: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f354) {
            ctx->pc = 0x26F42Cu;
            goto label_26f42c;
        }
    }
    ctx->pc = 0x26F35Cu;
    // 0x26f35c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F35Cu;
    {
        const bool branch_taken_0x26f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f35c) {
            ctx->pc = 0x26F368u;
            goto label_26f368;
        }
    }
    ctx->pc = 0x26F364u;
label_26f364:
    // 0x26f364: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x26f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_26f368:
    // 0x26f368: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F368u;
    {
        const bool branch_taken_0x26f368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F368u;
        // 0x26f36c: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f368) {
            ctx->pc = 0x26F42Cu;
            goto label_26f42c;
        }
    }
    ctx->pc = 0x26F370u;
    // 0x26f370: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x26f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f374: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f378: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x26f37c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F37Cu;
    {
        const bool branch_taken_0x26f37c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F37Cu;
        // 0x26f380: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f37c) {
            ctx->pc = 0x26F3A0u;
            goto label_26f3a0;
        }
    }
    ctx->pc = 0x26F384u;
    // 0x26f384: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f388: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26f388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26f38c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f390: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x26f390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x26f394: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f398: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x26f398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x26f39c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x26f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f3a0:
    // 0x26f3a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f3a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26f3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26f3a8: 0x0  nop
    ctx->pc = 0x26f3a8u;
    // NOP
    // 0x26f3ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x26f3acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x26f3b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x26F3B0u;
    SET_GPR_U32(ctx, 31, 0x26F3B8u);
    ctx->pc = 0x26F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3B0u;
    // 0x26f3b4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26F3B0u, 0x26F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3B8u;
label_26f3b8:
    // 0x26f3b8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26f3bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f3c0: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F3C0u;
    {
        const bool branch_taken_0x26f3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3C0u;
        // 0x26f3c4: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3c0) {
            ctx->pc = 0x26F3E4u;
            goto label_26f3e4;
        }
    }
    ctx->pc = 0x26F3C8u;
    // 0x26f3c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f3cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26f3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f3d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f3d4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26f3d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f3d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f3dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26f3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f3e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f3e4:
    // 0x26f3e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26f3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f3e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f3ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26f3f0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x26f3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x26f3f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26f3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f3fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x26f400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f404: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26f404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f408: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f40c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x26f40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f410: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x26f410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x26f414: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26f414u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f418: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x26f418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x26f41c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x26F41Cu;
    SET_GPR_U32(ctx, 31, 0x26F424u);
    ctx->pc = 0x26F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F41Cu;
    // 0x26f420: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x26F41Cu, 0x26F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F424u;
label_26f424:
    // 0x26f424: 0x50500007  beql        $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F424u;
    {
        const bool branch_taken_0x26f424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x26f424) {
            ctx->pc = 0x26F428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F424u;
            // 0x26f428: 0x8e2416d0  lw          $a0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F444u;
            goto label_26f444;
        }
    }
    ctx->pc = 0x26F42Cu;
label_26f42c:
    // 0x26f42c: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x26f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x26f430: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x26f430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x26f434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f438: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26f43c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26F43Cu;
    {
        const bool branch_taken_0x26f43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F43Cu;
        // 0x26f440: 0xae2316d0  sw          $v1, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f43c) {
            ctx->pc = 0x26F458u;
            goto label_26f458;
        }
    }
    ctx->pc = 0x26F444u;
label_26f444:
    // 0x26f444: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x26f444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x26f448: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f44c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f450: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26f450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f454: 0xae2416d0  sw          $a0, 0x16D0($s1)
    ctx->pc = 0x26f454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 4));
label_26f458:
    // 0x26f458: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26f458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f45c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26f45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26f460: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26f460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f464: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f468: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x26f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F46Cu;
        // 0x26f470: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F474u;
    // 0x26f474: 0x0  nop
    ctx->pc = 0x26f474u;
    // NOP
    ctx->pc = 0x26f478u;
}
