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

// Function: func_00186398
// Address: 0x186398 - 0x186598
void func_00186398_0x186398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186398_0x186398");
#endif

    switch (ctx->pc) {
        case 0x18645cu: goto label_18645c;
        case 0x186478u: goto label_186478;
        case 0x186494u: goto label_186494;
        case 0x1864c0u: goto label_1864c0;
        default: break;
    }

    ctx->pc = 0x186398u;

    // 0x186398: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18639c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1863a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1863a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1863a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1863a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1863a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1863a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1863acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1863b0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1863b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1863b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1863b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1863b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1863B8u;
    {
        const bool branch_taken_0x1863b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863B8u;
        // 0x1863bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863b8) {
            ctx->pc = 0x1863CCu;
            goto label_1863cc;
        }
    }
    ctx->pc = 0x1863C0u;
    // 0x1863c0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1863c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1863c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1863C4u;
    {
        const bool branch_taken_0x1863c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863C4u;
        // 0x1863c8: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863c4) {
            ctx->pc = 0x1863D0u;
            goto label_1863d0;
        }
    }
    ctx->pc = 0x1863CCu;
label_1863cc:
    // 0x1863cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1863ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1863d0:
    // 0x1863d0: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1863D0u;
    {
        const bool branch_taken_0x1863d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D0u;
        // 0x1863d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d0) {
            ctx->pc = 0x186580u;
            goto label_186580;
        }
    }
    ctx->pc = 0x1863D8u;
    // 0x1863d8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1863d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1863dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1863dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1863e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1863E0u;
    {
        const bool branch_taken_0x1863e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863E0u;
        // 0x1863e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863e0) {
            ctx->pc = 0x1863F4u;
            goto label_1863f4;
        }
    }
    ctx->pc = 0x1863E8u;
    // 0x1863e8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1863ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1863ECu;
    {
        const bool branch_taken_0x1863ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863ECu;
        // 0x1863f0: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863ec) {
            ctx->pc = 0x1863F8u;
            goto label_1863f8;
        }
    }
    ctx->pc = 0x1863F4u;
label_1863f4:
    // 0x1863f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1863f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1863f8:
    // 0x1863f8: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x1863f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1863fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1863fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186400: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x186400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186404: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x186404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186408: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x186408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18640c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18640cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186410: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x186410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x186414: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x186414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x186418: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x186418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18641c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x186420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x186420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186424: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x186424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x186428: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x186428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x18642c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x18642cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x186430: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x186430u;
    {
        const bool branch_taken_0x186430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186430u;
        // 0x186434: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186430) {
            ctx->pc = 0x186444u;
            goto label_186444;
        }
    }
    ctx->pc = 0x186438u;
    // 0x186438: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x186438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18643c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18643Cu;
    {
        const bool branch_taken_0x18643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18643Cu;
        // 0x186440: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18643c) {
            ctx->pc = 0x186448u;
            goto label_186448;
        }
    }
    ctx->pc = 0x186444u;
label_186444:
    // 0x186444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x186444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186448:
    // 0x186448: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x186448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x18644c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18644cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186450: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x186450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x186454: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x186454u;
    SET_GPR_U32(ctx, 31, 0x18645Cu);
    ctx->pc = 0x186458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186454u;
    // 0x186458: 0xc60c0e1c  lwc1        $f12, 0xE1C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x186454u, 0x18645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18645Cu;
label_18645c:
    // 0x18645c: 0xc6010e10  lwc1        $f1, 0xE10($s0)
    ctx->pc = 0x18645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186460: 0xc6020df4  lwc1        $f2, 0xDF4($s0)
    ctx->pc = 0x186460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186464: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x186464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186468: 0xc60c0e1c  lwc1        $f12, 0xE1C($s0)
    ctx->pc = 0x186468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18646c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x18646cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x186470: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x186470u;
    SET_GPR_U32(ctx, 31, 0x186478u);
    ctx->pc = 0x186474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186470u;
    // 0x186474: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x186470u, 0x186478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186478u;
label_186478:
    // 0x186478: 0xc6010e14  lwc1        $f1, 0xE14($s0)
    ctx->pc = 0x186478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18647c: 0xc6020e00  lwc1        $f2, 0xE00($s0)
    ctx->pc = 0x18647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x186480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186484: 0xc60c0e1c  lwc1        $f12, 0xE1C($s0)
    ctx->pc = 0x186484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186488: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x186488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18648c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x18648Cu;
    SET_GPR_U32(ctx, 31, 0x186494u);
    ctx->pc = 0x186490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18648Cu;
    // 0x186490: 0xe7a20020  swc1        $f2, 0x20($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x18648Cu, 0x186494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186494u;
label_186494:
    // 0x186494: 0xc6010e18  lwc1        $f1, 0xE18($s0)
    ctx->pc = 0x186494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186498: 0xc6020e08  lwc1        $f2, 0xE08($s0)
    ctx->pc = 0x186498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18649c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18649cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1864a0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x1864a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1864a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1864a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1864a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1864ac: 0xc6000e1c  lwc1        $f0, 0xE1C($s0)
    ctx->pc = 0x1864acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1864b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1864b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1864b4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1864b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1864b8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1864B8u;
    SET_GPR_U32(ctx, 31, 0x1864C0u);
    ctx->pc = 0x1864BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864B8u;
    // 0x1864bc: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1864B8u, 0x1864C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864C0u;
label_1864c0:
    // 0x1864c0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1864c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1864c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1864c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1864c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1864c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1864cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1864ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1864d0: 0xc6020e10  lwc1        $f2, 0xE10($s0)
    ctx->pc = 0x1864d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1864d4: 0xc6030e14  lwc1        $f3, 0xE14($s0)
    ctx->pc = 0x1864d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1864d8: 0xc6040e18  lwc1        $f4, 0xE18($s0)
    ctx->pc = 0x1864d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1864dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1864dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1864e0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1864e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1864e4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1864e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1864e8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1864e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1864ec: 0xe6000e1c  swc1        $f0, 0xE1C($s0)
    ctx->pc = 0x1864ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3612), bits); }
    // 0x1864f0: 0xe6020e10  swc1        $f2, 0xE10($s0)
    ctx->pc = 0x1864f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3600), bits); }
    // 0x1864f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1864f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1864f8: 0xe6030e14  swc1        $f3, 0xE14($s0)
    ctx->pc = 0x1864f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3604), bits); }
    // 0x1864fc: 0xe6040e18  swc1        $f4, 0xE18($s0)
    ctx->pc = 0x1864fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3608), bits); }
    // 0x186500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186500u;
    {
        const bool branch_taken_0x186500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186500u;
        // 0x186504: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186500) {
            ctx->pc = 0x186514u;
            goto label_186514;
        }
    }
    ctx->pc = 0x186508u;
    // 0x186508: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18650c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18650Cu;
    {
        const bool branch_taken_0x18650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18650Cu;
        // 0x186510: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18650c) {
            ctx->pc = 0x186518u;
            goto label_186518;
        }
    }
    ctx->pc = 0x186514u;
label_186514:
    // 0x186514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x186514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186518:
    // 0x186518: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x186518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x18651c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18651Cu;
    {
        const bool branch_taken_0x18651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x186520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18651Cu;
        // 0x186520: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18651c) {
            ctx->pc = 0x186538u;
            goto label_186538;
        }
    }
    ctx->pc = 0x186524u;
    // 0x186524: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x186524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x186528: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x186528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18652c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x186530: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x186530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186534: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x186534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_186538:
    // 0x186538: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x186538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18653c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x186540: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x186540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x186544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186544u;
    {
        const bool branch_taken_0x186544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186544u;
        // 0x186548: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186544) {
            ctx->pc = 0x186558u;
            goto label_186558;
        }
    }
    ctx->pc = 0x18654Cu;
    // 0x18654c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x18654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x186550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186550u;
    {
        const bool branch_taken_0x186550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186550u;
        // 0x186554: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186550) {
            ctx->pc = 0x18655Cu;
            goto label_18655c;
        }
    }
    ctx->pc = 0x186558u;
label_186558:
    // 0x186558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18655c:
    // 0x18655c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x18655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186560: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x186564: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186564u;
    {
        const bool branch_taken_0x186564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186564u;
        // 0x186568: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186564) {
            ctx->pc = 0x186580u;
            goto label_186580;
        }
    }
    ctx->pc = 0x18656Cu;
    // 0x18656c: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x18656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x186570: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x186570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186574: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x186574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x186578: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x186578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18657c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_186580:
    // 0x186580: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x186580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186584: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x186584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186588: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18658c: 0x3e00008  jr          $ra
    ctx->pc = 0x18658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18658Cu;
        // 0x186590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186594u;
    // 0x186594: 0x0  nop
    ctx->pc = 0x186594u;
    // NOP
    ctx->pc = 0x186598u;
}
