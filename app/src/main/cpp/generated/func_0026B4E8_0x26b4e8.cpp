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

// Function: func_0026B4E8
// Address: 0x26b4e8 - 0x26b600
void func_0026B4E8_0x26b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026B4E8_0x26b4e8");
#endif

    switch (ctx->pc) {
        case 0x26b518u: goto label_26b518;
        case 0x26b534u: goto label_26b534;
        case 0x26b540u: goto label_26b540;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b574u: goto label_26b574;
        case 0x26b5e8u: goto label_26b5e8;
        default: break;
    }

    ctx->pc = 0x26b4e8u;

    // 0x26b4e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26b4ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x26b4f0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26b4f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26b4fc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x26b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x26b500: 0x8e320700  lw          $s2, 0x700($s1)
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x26b504: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x26B504u;
    {
        const bool branch_taken_0x26b504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B504u;
        // 0x26b508: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b504) {
            ctx->pc = 0x26B5ECu;
            goto label_26b5ec;
        }
    }
    ctx->pc = 0x26B50Cu;
    // 0x26b50c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26b50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26b510: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x26B510u;
    SET_GPR_U32(ctx, 31, 0x26B518u);
    ctx->pc = 0x26B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B510u;
    // 0x26b514: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26B510u, 0x26B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B518u;
label_26b518:
    // 0x26b518: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x26b518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26b51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b520: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x26b524: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26b524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x26b528: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26b528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b52c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x26B52Cu;
    SET_GPR_U32(ctx, 31, 0x26B534u);
    ctx->pc = 0x26B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B52Cu;
    // 0x26b530: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x26B52Cu, 0x26B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B534u;
label_26b534:
    // 0x26b534: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x26b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26b538: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x26B538u;
    SET_GPR_U32(ctx, 31, 0x26B540u);
    ctx->pc = 0x26B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B538u;
    // 0x26b53c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26B538u, 0x26B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B540u;
label_26b540:
    // 0x26b540: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26b540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26b544: 0xc051e62  jal         func_147988
    ctx->pc = 0x26B544u;
    SET_GPR_U32(ctx, 31, 0x26B54Cu);
    ctx->pc = 0x26B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B544u;
    // 0x26b548: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26B544u, 0x26B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B54Cu;
label_26b54c:
    // 0x26b54c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26b54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26b550: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26b550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26b554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b558: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26b55c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x26b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26b560: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26b560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b564: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26b564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26b568: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26b568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b56c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x26B56Cu;
    SET_GPR_U32(ctx, 31, 0x26B574u);
    ctx->pc = 0x26B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B56Cu;
    // 0x26b570: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26B56Cu, 0x26B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B574u;
label_26b574:
    // 0x26b574: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x26b578: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x26b57c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B57Cu;
    {
        const bool branch_taken_0x26b57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b57c) {
            ctx->pc = 0x26B580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B57Cu;
            // 0x26b580: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B5A0u;
            goto label_26b5a0;
        }
    }
    ctx->pc = 0x26B584u;
    // 0x26b584: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b588: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26b58c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b590: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26b594: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b598: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26b59c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_26b5a0:
    // 0x26b5a0: 0x26430490  addiu       $v1, $s2, 0x490
    ctx->pc = 0x26b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x26b5a4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26b5a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b5a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b5ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b5b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26b5b4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x26b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26b5b8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x26b5bc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B5BCu;
    {
        const bool branch_taken_0x26b5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5BCu;
        // 0x26b5c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5bc) {
            ctx->pc = 0x26B5DCu;
            goto label_26b5dc;
        }
    }
    ctx->pc = 0x26B5C4u;
    // 0x26b5c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b5c8: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x26b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x26b5cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b5d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26b5d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b5d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26b5dc:
    // 0x26b5dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26b5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b5e0: 0xc073eca  jal         func_1CFB28
    ctx->pc = 0x26B5E0u;
    SET_GPR_U32(ctx, 31, 0x26B5E8u);
    ctx->pc = 0x26B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B5E0u;
    // 0x26b5e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFB28u, 0x26B5E0u, 0x26B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5E8u;
label_26b5e8:
    // 0x26b5e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26b5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26b5ec:
    // 0x26b5ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26b5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b5f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26b5f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b5f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26b5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x26B5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5F8u;
        // 0x26b5fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B600u;
}
