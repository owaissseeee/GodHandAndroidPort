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

// Function: func_00271810
// Address: 0x271810 - 0x271eb0
void func_00271810_0x271810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00271810_0x271810");
#endif

    switch (ctx->pc) {
        case 0x271830u: goto label_271830;
        case 0x2718f8u: goto label_2718f8;
        case 0x271994u: goto label_271994;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719e0u: goto label_2719e0;
        case 0x271a08u: goto label_271a08;
        case 0x271a50u: goto label_271a50;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bd0u: goto label_271bd0;
        case 0x271be4u: goto label_271be4;
        case 0x271c14u: goto label_271c14;
        case 0x271c30u: goto label_271c30;
        case 0x271c3cu: goto label_271c3c;
        case 0x271c60u: goto label_271c60;
        case 0x271c84u: goto label_271c84;
        case 0x271ca0u: goto label_271ca0;
        case 0x271cd0u: goto label_271cd0;
        case 0x271ce8u: goto label_271ce8;
        case 0x271d30u: goto label_271d30;
        case 0x271d58u: goto label_271d58;
        case 0x271d7cu: goto label_271d7c;
        case 0x271d9cu: goto label_271d9c;
        case 0x271dc0u: goto label_271dc0;
        case 0x271de8u: goto label_271de8;
        case 0x271e10u: goto label_271e10;
        case 0x271e20u: goto label_271e20;
        case 0x271e68u: goto label_271e68;
        case 0x271e90u: goto label_271e90;
        default: break;
    }

    ctx->pc = 0x271810u;

    // 0x271810: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x271810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x271814: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x271814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x271818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27181c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x27181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x271820: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x271820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x271824: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x271824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x271828: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271828u;
    SET_GPR_U32(ctx, 31, 0x271830u);
    ctx->pc = 0x27182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271828u;
    // 0x27182c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271828u, 0x271830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271830u;
label_271830:
    // 0x271830: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271834: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x271834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27183c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27183cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271840: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x271840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x271844: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x271844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x271848: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x271848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27184c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x271850: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x271850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x271854: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x271854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271858: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x271858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27185c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27185cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x271860: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x271860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271864: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x271864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x271868: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x271868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27186c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x27186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x271870: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x271870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x271874: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x271874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x271878: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x271878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x27187c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x271880: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x271880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x271884: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x271884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x271888: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x271888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x27188c: 0xa3a0005e  sb          $zero, 0x5E($sp)
    ctx->pc = 0x27188cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x271890: 0xa065004f  sb          $a1, 0x4F($v1)
    ctx->pc = 0x271890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x271894: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x271894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x271898: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x271898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27189c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x27189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2718a0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2718a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718a4: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x2718a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x2718a8: 0xa7a00080  sh          $zero, 0x80($sp)
    ctx->pc = 0x2718a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2718ac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2718acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2718b0: 0xa7a00082  sh          $zero, 0x82($sp)
    ctx->pc = 0x2718b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x2718b4: 0xa3a00084  sb          $zero, 0x84($sp)
    ctx->pc = 0x2718b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2718b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2718B8u;
    {
        const bool branch_taken_0x2718b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718B8u;
        // 0x2718bc: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718b8) {
            ctx->pc = 0x2718F8u;
            goto label_2718f8;
        }
    }
    ctx->pc = 0x2718C0u;
    // 0x2718c0: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x2718c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2718c4: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x2718c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2718c8: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2718C8u;
    {
        const bool branch_taken_0x2718c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2718c8) {
            ctx->pc = 0x2718CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2718C8u;
            // 0x2718cc: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2718FCu;
            goto label_2718fc;
        }
    }
    ctx->pc = 0x2718D0u;
    // 0x2718d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2718d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2718d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2718d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718d8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2718dc: 0x2406012b  addiu       $a2, $zero, 0x12B
    ctx->pc = 0x2718dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x2718e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2718e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2718e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2718e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2718ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718f0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2718F0u;
    SET_GPR_U32(ctx, 31, 0x2718F8u);
    ctx->pc = 0x2718F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718F0u;
    // 0x2718f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2718F0u, 0x2718F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718F8u;
label_2718f8:
    // 0x2718f8: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_2718fc:
    // 0x2718fc: 0x2862024b  slti        $v0, $v1, 0x24B
    ctx->pc = 0x2718fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)587) ? 1 : 0);
    // 0x271900: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271900u;
    {
        const bool branch_taken_0x271900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271900u;
        // 0x271904: 0x28620249  slti        $v0, $v1, 0x249 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)585) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271900) {
            ctx->pc = 0x271928u;
            goto label_271928;
        }
    }
    ctx->pc = 0x271908u;
    // 0x271908: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x271908u;
    {
        const bool branch_taken_0x271908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271908u;
        // 0x27190c: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271908) {
            ctx->pc = 0x271974u;
            goto label_271974;
        }
    }
    ctx->pc = 0x271910u;
    // 0x271910: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x271910u;
    {
        const bool branch_taken_0x271910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271910u;
        // 0x271914: 0x24020240  addiu       $v0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271910) {
            ctx->pc = 0x271974u;
            goto label_271974;
        }
    }
    ctx->pc = 0x271918u;
    // 0x271918: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x271918u;
    {
        const bool branch_taken_0x271918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271918) {
            ctx->pc = 0x271974u;
            goto label_271974;
        }
    }
    ctx->pc = 0x271920u;
    // 0x271920: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271920u;
    {
        const bool branch_taken_0x271920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271920u;
        // 0x271924: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271920) {
            ctx->pc = 0x271954u;
            goto label_271954;
        }
    }
    ctx->pc = 0x271928u;
label_271928:
    // 0x271928: 0x2402024e  addiu       $v0, $zero, 0x24E
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x27192c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27192Cu;
    {
        const bool branch_taken_0x27192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27192Cu;
        // 0x271930: 0x2862024e  slti        $v0, $v1, 0x24E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)590) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27192c) {
            ctx->pc = 0x271974u;
            goto label_271974;
        }
    }
    ctx->pc = 0x271934u;
    // 0x271934: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x271934u;
    {
        const bool branch_taken_0x271934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271934) {
            ctx->pc = 0x271938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271934u;
            // 0x271938: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271954u;
            goto label_271954;
        }
    }
    ctx->pc = 0x27193Cu;
    // 0x27193c: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x271940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271940u;
    {
        const bool branch_taken_0x271940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271940u;
        // 0x271944: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271940) {
            ctx->pc = 0x271950u;
            goto label_271950;
        }
    }
    ctx->pc = 0x271948u;
    // 0x271948: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x271948u;
    {
        const bool branch_taken_0x271948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271948u;
        // 0x27194c: 0x240400cd  addiu       $a0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271948) {
            ctx->pc = 0x2719C4u;
            goto label_2719c4;
        }
    }
    ctx->pc = 0x271950u;
label_271950:
    // 0x271950: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x271950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_271954:
    // 0x271954: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x271954u;
    {
        const bool branch_taken_0x271954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271954) {
            ctx->pc = 0x271958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271954u;
            // 0x271958: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A0Cu;
            goto label_271a0c;
        }
    }
    ctx->pc = 0x27195Cu;
    // 0x27195c: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x27195cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x271960: 0x28620036  slti        $v0, $v1, 0x36
    ctx->pc = 0x271960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)54) ? 1 : 0);
    // 0x271964: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x271964u;
    {
        const bool branch_taken_0x271964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271964u;
        // 0x271968: 0x28620034  slti        $v0, $v1, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271964) {
            ctx->pc = 0x271A08u;
            goto label_271a08;
        }
    }
    ctx->pc = 0x27196Cu;
    // 0x27196c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x27196Cu;
    {
        const bool branch_taken_0x27196c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27196c) {
            ctx->pc = 0x271970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27196Cu;
            // 0x271970: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A0Cu;
            goto label_271a0c;
        }
    }
    ctx->pc = 0x271974u;
label_271974:
    // 0x271974: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x271974u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x271978: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x271978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x27197c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27197cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271980: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x271980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x271984: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271988: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x271988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27198c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x27198Cu;
    SET_GPR_U32(ctx, 31, 0x271994u);
    ctx->pc = 0x271990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27198Cu;
    // 0x271990: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x27198Cu, 0x271994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271994u;
label_271994:
    // 0x271994: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x271994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x271998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27199c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2719a0: 0x2406012b  addiu       $a2, $zero, 0x12B
    ctx->pc = 0x2719a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x2719a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2719a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2719a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2719acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2719b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2719B4u;
    SET_GPR_U32(ctx, 31, 0x2719BCu);
    ctx->pc = 0x2719B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719B4u;
    // 0x2719b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2719B4u, 0x2719BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719BCu;
label_2719bc:
    // 0x2719bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2719BCu;
    {
        const bool branch_taken_0x2719bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719BCu;
        // 0x2719c0: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719bc) {
            ctx->pc = 0x271A0Cu;
            goto label_271a0c;
        }
    }
    ctx->pc = 0x2719C4u;
label_2719c4:
    // 0x2719c4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2719c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2719c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2719c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719cc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2719ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2719d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2719d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2719d8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2719D8u;
    SET_GPR_U32(ctx, 31, 0x2719E0u);
    ctx->pc = 0x2719DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719D8u;
    // 0x2719dc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2719D8u, 0x2719E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719E0u;
label_2719e0:
    // 0x2719e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2719e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2719e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2719e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2719e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2719ec: 0x2406012b  addiu       $a2, $zero, 0x12B
    ctx->pc = 0x2719ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x2719f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2719f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2719f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2719f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2719fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a00: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x271A00u;
    SET_GPR_U32(ctx, 31, 0x271A08u);
    ctx->pc = 0x271A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A00u;
    // 0x271a04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x271A00u, 0x271A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A08u;
label_271a08:
    // 0x271a08: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x271a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_271a0c:
    // 0x271a0c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x271a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x271a10: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x271a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x271a14: 0x546400a0  bnel        $v1, $a0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x271A14u;
    {
        const bool branch_taken_0x271a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x271a14) {
            ctx->pc = 0x271A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271A14u;
            // 0x271a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271A1Cu;
    // 0x271a1c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x271a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x271a20: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x271a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x271a24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271A24u;
    {
        const bool branch_taken_0x271a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A24u;
        // 0x271a28: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a24) {
            ctx->pc = 0x271A3Cu;
            goto label_271a3c;
        }
    }
    ctx->pc = 0x271A2Cu;
    // 0x271a2c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x271A2Cu;
    {
        const bool branch_taken_0x271a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A2Cu;
        // 0x271a30: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a2c) {
            ctx->pc = 0x271C1Cu;
            goto label_271c1c;
        }
    }
    ctx->pc = 0x271A34u;
    // 0x271a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271A34u;
    {
        const bool branch_taken_0x271a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a34) {
            ctx->pc = 0x271A40u;
            goto label_271a40;
        }
    }
    ctx->pc = 0x271A3Cu;
label_271a3c:
    // 0x271a3c: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x271a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_271a40:
    // 0x271a40: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x271A40u;
    {
        const bool branch_taken_0x271a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271a40) {
            ctx->pc = 0x271C1Cu;
            goto label_271c1c;
        }
    }
    ctx->pc = 0x271A48u;
    // 0x271a48: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x271A48u;
    SET_GPR_U32(ctx, 31, 0x271A50u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x271A48u, 0x271A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A50u;
label_271a50:
    // 0x271a50: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x271a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x271a54: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x271a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x271a58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271A58u;
    {
        const bool branch_taken_0x271a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A58u;
        // 0x271a5c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a58) {
            ctx->pc = 0x271A78u;
            goto label_271a78;
        }
    }
    ctx->pc = 0x271A60u;
    // 0x271a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x271a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271a64: 0x24426360  addiu       $v0, $v0, 0x6360
    ctx->pc = 0x271a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25440));
    // 0x271a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x271a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271a6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271a70: 0x800008  jr          $a0
    ctx->pc = 0x271A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271A78u: goto label_271a78;
            case 0x271A98u: goto label_271a98;
            case 0x271AB8u: goto label_271ab8;
            case 0x271AD8u: goto label_271ad8;
            case 0x271AF8u: goto label_271af8;
            case 0x271B18u: goto label_271b18;
            case 0x271B38u: goto label_271b38;
            case 0x271B58u: goto label_271b58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271A78u;
label_271a78:
    // 0x271a78: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271a80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271a84: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x271A84u;
    {
        const bool branch_taken_0x271a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A84u;
        // 0x271a88: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a84) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271A8Cu;
    // 0x271a8c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271a90: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x271A90u;
    {
        const bool branch_taken_0x271a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A90u;
        // 0x271a94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a90) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271A98u;
label_271a98:
    // 0x271a98: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271a9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271aa0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271aa4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x271AA4u;
    {
        const bool branch_taken_0x271aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AA4u;
        // 0x271aa8: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271aa4) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271AACu;
    // 0x271aac: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271ab0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x271AB0u;
    {
        const bool branch_taken_0x271ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AB0u;
        // 0x271ab4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ab0) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271AB8u;
label_271ab8:
    // 0x271ab8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271abc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271ac0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271ac4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x271AC4u;
    {
        const bool branch_taken_0x271ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AC4u;
        // 0x271ac8: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ac4) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271ACCu;
    // 0x271acc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271ad0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x271AD0u;
    {
        const bool branch_taken_0x271ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AD0u;
        // 0x271ad4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ad0) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271AD8u;
label_271ad8:
    // 0x271ad8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271adc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271ae0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271ae4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x271AE4u;
    {
        const bool branch_taken_0x271ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AE4u;
        // 0x271ae8: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ae4) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271AECu;
    // 0x271aec: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271af0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x271AF0u;
    {
        const bool branch_taken_0x271af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AF0u;
        // 0x271af4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271af0) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271AF8u;
label_271af8:
    // 0x271af8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271afc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x271b00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271b04: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x271B04u;
    {
        const bool branch_taken_0x271b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B04u;
        // 0x271b08: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b04) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271B0Cu;
    // 0x271b0c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271b10: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x271B10u;
    {
        const bool branch_taken_0x271b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B10u;
        // 0x271b14: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b10) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271B18u;
label_271b18:
    // 0x271b18: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271b1c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x271b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x271b20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271b24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x271B24u;
    {
        const bool branch_taken_0x271b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B24u;
        // 0x271b28: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b24) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271B2Cu;
    // 0x271b2c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271b30: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x271B30u;
    {
        const bool branch_taken_0x271b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B30u;
        // 0x271b34: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b30) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271B38u;
label_271b38:
    // 0x271b38: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271b3c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x271b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x271b40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271b44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271B44u;
    {
        const bool branch_taken_0x271b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B44u;
        // 0x271b48: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b44) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271B4Cu;
    // 0x271b4c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271b50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x271B50u;
    {
        const bool branch_taken_0x271b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B50u;
        // 0x271b54: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b50) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271B58u;
label_271b58:
    // 0x271b58: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x271b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x271b5c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x271b60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271b64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271B64u;
    {
        const bool branch_taken_0x271b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B64u;
        // 0x271b68: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b64) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271B6Cu;
    // 0x271b6c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x271b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x271b70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271B70u;
    {
        const bool branch_taken_0x271b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B70u;
        // 0x271b74: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b70) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271B78u;
label_271b78:
    // 0x271b78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271b7c:
    // 0x271b7c: 0x108000c5  beqz        $a0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x271B7Cu;
    {
        const bool branch_taken_0x271b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B7Cu;
        // 0x271b80: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b7c) {
            ctx->pc = 0x271E94u;
            goto label_271e94;
        }
    }
    ctx->pc = 0x271B84u;
    // 0x271b84: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x271b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x271b88: 0x13a40007  beq         $sp, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271B88u;
    {
        const bool branch_taken_0x271b88 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        if (branch_taken_0x271b88) {
            ctx->pc = 0x271BA8u;
            goto label_271ba8;
        }
    }
    ctx->pc = 0x271B90u;
    // 0x271b90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x271b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271b94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x271b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271b98: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x271b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271b9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x271b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x271ba0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x271ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271ba4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x271ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_271ba8:
    // 0x271ba8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x271bac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x271bb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x271bb4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271BB4u;
    SET_GPR_U32(ctx, 31, 0x271BBCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271BB4u, 0x271BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BBCu;
label_271bbc:
    // 0x271bbc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x271bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271bc0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x271bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x271bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271bc8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271BC8u;
    SET_GPR_U32(ctx, 31, 0x271BD0u);
    ctx->pc = 0x271BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BC8u;
    // 0x271bcc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271BC8u, 0x271BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BD0u;
label_271bd0:
    // 0x271bd0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x271bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271bd4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x271bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271bd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x271bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271bdc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271BDCu;
    SET_GPR_U32(ctx, 31, 0x271BE4u);
    ctx->pc = 0x271BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BDCu;
    // 0x271be0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271BDCu, 0x271BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BE4u;
label_271be4:
    // 0x271be4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x271be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271be8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x271be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271bec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bf8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x271bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x271bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x271c00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271c04: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x271c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271c0c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271C0Cu;
    SET_GPR_U32(ctx, 31, 0x271C14u);
    ctx->pc = 0x271C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C0Cu;
    // 0x271c10: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271C0Cu, 0x271C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C14u;
label_271c14:
    // 0x271c14: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x271C14u;
    {
        const bool branch_taken_0x271c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C14u;
        // 0x271c18: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c14) {
            ctx->pc = 0x271E94u;
            goto label_271e94;
        }
    }
    ctx->pc = 0x271C1Cu;
label_271c1c:
    // 0x271c1c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x271c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x271c20: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x271c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x271c24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x271c28: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271C28u;
    SET_GPR_U32(ctx, 31, 0x271C30u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271C28u, 0x271C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C30u;
label_271c30:
    // 0x271c30: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x271c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271c34: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271C34u;
    SET_GPR_U32(ctx, 31, 0x271C3Cu);
    ctx->pc = 0x271C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C34u;
    // 0x271c38: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271C34u, 0x271C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C3Cu;
label_271c3c:
    // 0x271c3c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x271c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x271c40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x271c44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271c48: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x271c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x271c4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x271c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271c50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x271c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x271c54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x271c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x271c58: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271C58u;
    SET_GPR_U32(ctx, 31, 0x271C60u);
    ctx->pc = 0x271C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C58u;
    // 0x271c5c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271C58u, 0x271C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C60u;
label_271c60:
    // 0x271c60: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x271c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271c64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x271c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x271c68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271c6c: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x271c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x271c70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x271c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271c7c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x271C7Cu;
    SET_GPR_U32(ctx, 31, 0x271C84u);
    ctx->pc = 0x271C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C7Cu;
    // 0x271c80: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x271C7Cu, 0x271C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C84u;
label_271c84:
    // 0x271c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271c88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271c8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c90: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x271C90u;
    {
        const bool branch_taken_0x271c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C90u;
        // 0x271c94: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c90) {
            ctx->pc = 0x271E58u;
            goto label_271e58;
        }
    }
    ctx->pc = 0x271C98u;
label_271c98:
    // 0x271c98: 0xc09c546  jal         func_271518
    ctx->pc = 0x271C98u;
    SET_GPR_U32(ctx, 31, 0x271CA0u);
    ctx->pc = 0x271C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C98u;
    // 0x271c9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271518u, 0x271C98u, 0x271CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CA0u;
label_271ca0:
    // 0x271ca0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x271ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x271ca4: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x271ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x271ca8: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x271ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x271cac: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x271CACu;
    {
        const bool branch_taken_0x271cac = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x271CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CACu;
        // 0x271cb0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cac) {
            ctx->pc = 0x271CF8u;
            goto label_271cf8;
        }
    }
    ctx->pc = 0x271CB4u;
    // 0x271cb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271cbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271CC8u;
    SET_GPR_U32(ctx, 31, 0x271CD0u);
    ctx->pc = 0x271CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CC8u;
    // 0x271ccc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271CC8u, 0x271CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CD0u;
label_271cd0:
    // 0x271cd0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x271cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x271cd4: 0x9062b010  lbu         $v0, -0x4FF0($v1)
    ctx->pc = 0x271cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x271cd8: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x271CD8u;
    {
        const bool branch_taken_0x271cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CD8u;
        // 0x271cdc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cd8) {
            ctx->pc = 0x271DECu;
            goto label_271dec;
        }
    }
    ctx->pc = 0x271CE0u;
    // 0x271ce0: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x271CE0u;
    SET_GPR_U32(ctx, 31, 0x271CE8u);
    ctx->pc = 0x271CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CE0u;
    // 0x271ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x271CE0u, 0x271CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CE8u;
label_271ce8:
    // 0x271ce8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x271CE8u;
    {
        const bool branch_taken_0x271ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CE8u;
        // 0x271cec: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ce8) {
            ctx->pc = 0x271E90u;
            goto label_271e90;
        }
    }
    ctx->pc = 0x271CF0u;
    // 0x271cf0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x271CF0u;
    {
        const bool branch_taken_0x271cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CF0u;
        // 0x271cf4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cf0) {
            ctx->pc = 0x271DF0u;
            goto label_271df0;
        }
    }
    ctx->pc = 0x271CF8u;
label_271cf8:
    // 0x271cf8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x271cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x271cfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x271cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x271d00: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x271D00u;
    {
        const bool branch_taken_0x271d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D00u;
        // 0x271d04: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d00) {
            ctx->pc = 0x271DA8u;
            goto label_271da8;
        }
    }
    ctx->pc = 0x271D08u;
    // 0x271d08: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x271d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31280)));
    // 0x271d0c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x271d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x271d10: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x271D10u;
    {
        const bool branch_taken_0x271d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D10u;
        // 0x271d14: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d10) {
            ctx->pc = 0x271D7Cu;
            goto label_271d7c;
        }
    }
    ctx->pc = 0x271D18u;
    // 0x271d18: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x271d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x271d1c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x271d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x271d20: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x271D20u;
    {
        const bool branch_taken_0x271d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d20) {
            ctx->pc = 0x271D7Cu;
            goto label_271d7c;
        }
    }
    ctx->pc = 0x271D28u;
    // 0x271d28: 0xc0a4bc2  jal         func_292F08
    ctx->pc = 0x271D28u;
    SET_GPR_U32(ctx, 31, 0x271D30u);
    ctx->pc = 0x292F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F08u, 0x271D28u, 0x271D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D30u;
label_271d30:
    // 0x271d30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x271D30u;
    {
        const bool branch_taken_0x271d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D30u;
        // 0x271d34: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d30) {
            ctx->pc = 0x271D5Cu;
            goto label_271d5c;
        }
    }
    ctx->pc = 0x271D38u;
    // 0x271d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271d3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271d40: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x271d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x271d44: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x271d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x271d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d4c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d50: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271D50u;
    SET_GPR_U32(ctx, 31, 0x271D58u);
    ctx->pc = 0x271D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D50u;
    // 0x271d54: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271D50u, 0x271D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D58u;
label_271d58:
    // 0x271d58: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x271d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
label_271d5c:
    // 0x271d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x271d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271d64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x271d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271d68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x271d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x271d70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d74: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x271D74u;
    SET_GPR_U32(ctx, 31, 0x271D7Cu);
    ctx->pc = 0x271D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D74u;
    // 0x271d78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x271D74u, 0x271D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D7Cu;
label_271d7c:
    // 0x271d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271d80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271d84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d88: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x271d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x271d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d94: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271D94u;
    SET_GPR_U32(ctx, 31, 0x271D9Cu);
    ctx->pc = 0x271D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D94u;
    // 0x271d98: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271D94u, 0x271D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D9Cu;
label_271d9c:
    // 0x271d9c: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x271d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x271da0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x271DA0u;
    {
        const bool branch_taken_0x271da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA0u;
        // 0x271da4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271da0) {
            ctx->pc = 0x271DF4u;
            goto label_271df4;
        }
    }
    ctx->pc = 0x271DA8u;
label_271da8:
    // 0x271da8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x271da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x271dac: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x271dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x271db0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x271DB0u;
    {
        const bool branch_taken_0x271db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271db0) {
            ctx->pc = 0x271DC8u;
            goto label_271dc8;
        }
    }
    ctx->pc = 0x271DB8u;
    // 0x271db8: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x271DB8u;
    SET_GPR_U32(ctx, 31, 0x271DC0u);
    ctx->pc = 0x271DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DB8u;
    // 0x271dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x271DB8u, 0x271DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DC0u;
label_271dc0:
    // 0x271dc0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x271DC0u;
    {
        const bool branch_taken_0x271dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DC0u;
        // 0x271dc4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dc0) {
            ctx->pc = 0x271E18u;
            goto label_271e18;
        }
    }
    ctx->pc = 0x271DC8u;
label_271dc8:
    // 0x271dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271dcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271dd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271dd4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x271dd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ddc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271de0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271DE0u;
    SET_GPR_U32(ctx, 31, 0x271DE8u);
    ctx->pc = 0x271DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DE0u;
    // 0x271de4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271DE0u, 0x271DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DE8u;
label_271de8:
    // 0x271de8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x271de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_271dec:
    // 0x271dec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x271decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271df0:
    // 0x271df0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x271df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_271df4:
    // 0x271df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271df8: 0x24060121  addiu       $a2, $zero, 0x121
    ctx->pc = 0x271df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
    // 0x271dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x271e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x271e04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e08: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x271E08u;
    SET_GPR_U32(ctx, 31, 0x271E10u);
    ctx->pc = 0x271E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E08u;
    // 0x271e0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x271E08u, 0x271E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E10u;
label_271e10:
    // 0x271e10: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x271E10u;
    {
        const bool branch_taken_0x271e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E10u;
        // 0x271e14: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e10) {
            ctx->pc = 0x271E94u;
            goto label_271e94;
        }
    }
    ctx->pc = 0x271E18u;
label_271e18:
    // 0x271e18: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x271E18u;
    SET_GPR_U32(ctx, 31, 0x271E20u);
    ctx->pc = 0x271E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E18u;
    // 0x271e1c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x271E18u, 0x271E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E20u;
label_271e20:
    // 0x271e20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x271e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e24: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x271e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x271e28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x271E28u;
    {
        const bool branch_taken_0x271e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E28u;
        // 0x271e2c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e28) {
            ctx->pc = 0x271E70u;
            goto label_271e70;
        }
    }
    ctx->pc = 0x271E30u;
    // 0x271e30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x271e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271e34: 0x24426380  addiu       $v0, $v0, 0x6380
    ctx->pc = 0x271e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25472));
    // 0x271e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x271e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271e3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271e40: 0x800008  jr          $a0
    ctx->pc = 0x271E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271E48u: goto label_271e48;
            case 0x271E70u: goto label_271e70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271E40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271E48u;
label_271e48:
    // 0x271e48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271e4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271e50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e54: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_271e58:
    // 0x271e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e5c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e60: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271E60u;
    SET_GPR_U32(ctx, 31, 0x271E68u);
    ctx->pc = 0x271E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E60u;
    // 0x271e64: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271E60u, 0x271E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E68u;
label_271e68:
    // 0x271e68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x271E68u;
    {
        const bool branch_taken_0x271e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E68u;
        // 0x271e6c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e68) {
            ctx->pc = 0x271E94u;
            goto label_271e94;
        }
    }
    ctx->pc = 0x271E70u;
label_271e70:
    // 0x271e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271e74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271e78: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x271e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x271e7c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x271e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x271e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e84: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x271e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e88: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x271E88u;
    SET_GPR_U32(ctx, 31, 0x271E90u);
    ctx->pc = 0x271E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E88u;
    // 0x271e8c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x271E88u, 0x271E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E90u;
label_271e90:
    // 0x271e90: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x271e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_271e94:
    // 0x271e94: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x271e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271e98: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x271e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x271e9c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x271e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x271ea0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x271ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x271EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EA4u;
        // 0x271ea8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271EACu;
    // 0x271eac: 0x0  nop
    ctx->pc = 0x271eacu;
    // NOP
    ctx->pc = 0x271eb0u;
}
