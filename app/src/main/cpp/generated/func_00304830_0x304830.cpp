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

// Function: func_00304830
// Address: 0x304830 - 0x304938
void func_00304830_0x304830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304830_0x304830");
#endif

    switch (ctx->pc) {
        case 0x30485cu: goto label_30485c;
        case 0x3048a0u: goto label_3048a0;
        case 0x3048bcu: goto label_3048bc;
        case 0x3048d8u: goto label_3048d8;
        case 0x304910u: goto label_304910;
        case 0x304918u: goto label_304918;
        case 0x304924u: goto label_304924;
        default: break;
    }

    ctx->pc = 0x304830u;

    // 0x304830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x304830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x304834: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x304834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x304838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30483c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x304840: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x304840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x304844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304848: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x304848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x30484c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x30484cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x304850: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x304850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x304854: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x304854u;
    SET_GPR_U32(ctx, 31, 0x30485Cu);
    ctx->pc = 0x304858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304854u;
    // 0x304858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x304854u, 0x30485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30485Cu;
label_30485c:
    // 0x30485c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x30485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x304860: 0xc6030128  lwc1        $f3, 0x128($s0)
    ctx->pc = 0x304860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304864: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x304864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304868: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x304868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30486c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30486cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x304870: 0xc6020130  lwc1        $f2, 0x130($s0)
    ctx->pc = 0x304870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304874: 0xe6030128  swc1        $f3, 0x128($s0)
    ctx->pc = 0x304874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x304878: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x304878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30487c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x30487cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x304880: 0xe601012c  swc1        $f1, 0x12C($s0)
    ctx->pc = 0x304880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x304884: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x304884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304888: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x304888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30488c: 0xe6020130  swc1        $f2, 0x130($s0)
    ctx->pc = 0x30488cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x304890: 0xc44c01c4  lwc1        $f12, 0x1C4($v0)
    ctx->pc = 0x304890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304894: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x304894u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x304898: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x304898u;
    SET_GPR_U32(ctx, 31, 0x3048A0u);
    ctx->pc = 0x30489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304898u;
    // 0x30489c: 0x460c1b00  add.s       $f12, $f3, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x304898u, 0x3048A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048A0u;
label_3048a0:
    // 0x3048a0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3048a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3048a4: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x3048a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3048a8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3048a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3048ac: 0xc44c01c8  lwc1        $f12, 0x1C8($v0)
    ctx->pc = 0x3048acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3048b0: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x3048b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x3048b4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x3048B4u;
    SET_GPR_U32(ctx, 31, 0x3048BCu);
    ctx->pc = 0x3048B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048B4u;
    // 0x3048b8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x3048B4u, 0x3048BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048BCu;
label_3048bc:
    // 0x3048bc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3048bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3048c0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x3048c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3048c4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3048c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3048c8: 0xc44c01cc  lwc1        $f12, 0x1CC($v0)
    ctx->pc = 0x3048c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3048cc: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x3048ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x3048d0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x3048D0u;
    SET_GPR_U32(ctx, 31, 0x3048D8u);
    ctx->pc = 0x3048D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048D0u;
    // 0x3048d4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x3048D0u, 0x3048D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048D8u;
label_3048d8:
    // 0x3048d8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x3048d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3048dc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3048dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3048e0: 0xc602012c  lwc1        $f2, 0x12C($s0)
    ctx->pc = 0x3048e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3048e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3048e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3048e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3048ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3048ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3048f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3048f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048f4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3048f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3048f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3048f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048fc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3048fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x304900: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x304900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x304904: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x304904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x304908: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x304908u;
    SET_GPR_U32(ctx, 31, 0x304910u);
    ctx->pc = 0x30490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304908u;
    // 0x30490c: 0xe6000130  swc1        $f0, 0x130($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x304908u, 0x304910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304910u;
label_304910:
    // 0x304910: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x304910u;
    SET_GPR_U32(ctx, 31, 0x304918u);
    ctx->pc = 0x304914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304910u;
    // 0x304914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x304910u, 0x304918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304918u;
label_304918:
    // 0x304918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30491c: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x30491Cu;
    SET_GPR_U32(ctx, 31, 0x304924u);
    ctx->pc = 0x304920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30491Cu;
    // 0x304920: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x30491Cu, 0x304924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304924u;
label_304924:
    // 0x304924: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x304924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x304928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30492c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x30492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304930: 0x3e00008  jr          $ra
    ctx->pc = 0x304930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304930u;
        // 0x304934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304938u;
}
