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

// Function: func_0017F828
// Address: 0x17f828 - 0x17f990
void func_0017F828_0x17f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017F828_0x17f828");
#endif

    switch (ctx->pc) {
        case 0x17f8a8u: goto label_17f8a8;
        case 0x17f914u: goto label_17f914;
        case 0x17f93cu: goto label_17f93c;
        case 0x17f958u: goto label_17f958;
        default: break;
    }

    ctx->pc = 0x17f828u;

    // 0x17f828: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17f828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17f82c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17f830: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17f830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17f834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f838: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f83c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17f83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17f840: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F840u;
    {
        const bool branch_taken_0x17f840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F840u;
        // 0x17f844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f840) {
            ctx->pc = 0x17F858u;
            goto label_17f858;
        }
    }
    ctx->pc = 0x17F848u;
    // 0x17f848: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x17F848u;
    {
        const bool branch_taken_0x17f848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F848u;
        // 0x17f84c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f848) {
            ctx->pc = 0x17F950u;
            goto label_17f950;
        }
    }
    ctx->pc = 0x17F850u;
    // 0x17f850: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x17F850u;
    {
        const bool branch_taken_0x17f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F850u;
        // 0x17f854: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f850) {
            ctx->pc = 0x17F980u;
            goto label_17f980;
        }
    }
    ctx->pc = 0x17F858u;
label_17f858:
    // 0x17f858: 0x92220764  lbu         $v0, 0x764($s1)
    ctx->pc = 0x17f858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1892)));
    // 0x17f85c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F85Cu;
    {
        const bool branch_taken_0x17f85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f85c) {
            ctx->pc = 0x17F86Cu;
            goto label_17f86c;
        }
    }
    ctx->pc = 0x17F864u;
    // 0x17f864: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17F864u;
    {
        const bool branch_taken_0x17f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F864u;
        // 0x17f868: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f864) {
            ctx->pc = 0x17F96Cu;
            goto label_17f96c;
        }
    }
    ctx->pc = 0x17F86Cu;
label_17f86c:
    // 0x17f86c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x17f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f870: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x17f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x17f874: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17f874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x17f878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17f878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f87c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x17f87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17f880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17f884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17f884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f88c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17f88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17f890: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x17f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x17f894: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17f894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x17f898: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17f898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f89c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x17f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17f8a0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x17F8A0u;
    SET_GPR_U32(ctx, 31, 0x17F8A8u);
    ctx->pc = 0x17F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8A0u;
    // 0x17f8a4: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x17F8A0u, 0x17F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8A8u;
label_17f8a8:
    // 0x17f8a8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x17f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17f8ac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x17f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f8b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17f8b4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x17f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f8b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17f8b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f8bc: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x17f8bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f8c0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17f8c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17f8c4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17f8c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17f8c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f8cc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17f8d0: 0x13a40006  beq         $sp, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F8D0u;
    {
        const bool branch_taken_0x17f8d0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x17F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8D0u;
        // 0x17f8d4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8d0) {
            ctx->pc = 0x17F8ECu;
            goto label_17f8ec;
        }
    }
    ctx->pc = 0x17F8D8u;
    // 0x17f8d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f8dc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x17f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17f8e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f8e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17f8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17f8e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17f8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17f8ec:
    // 0x17f8ec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17f8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17f8f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17f8f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17f8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17f8f8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8fc: 0x26240600  addiu       $a0, $s1, 0x600
    ctx->pc = 0x17f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x17f900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f904: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17f904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f908: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17f908u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17f90c: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x17F90Cu;
    SET_GPR_U32(ctx, 31, 0x17F914u);
    ctx->pc = 0x17F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F90Cu;
    // 0x17f910: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x17F90Cu, 0x17F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F914u;
label_17f914:
    // 0x17f914: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x17f914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x17f918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f91c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x17f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x17f920: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x17f920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x17f924: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17f924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f92c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f92cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f930: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17f930u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f934: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17F934u;
    SET_GPR_U32(ctx, 31, 0x17F93Cu);
    ctx->pc = 0x17F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F934u;
    // 0x17f938: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17F934u, 0x17F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F93Cu;
label_17f93c:
    // 0x17f93c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f940: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17f940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f944: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x17f944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f948: 0xa2230765  sb          $v1, 0x765($s1)
    ctx->pc = 0x17f948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1893), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f94c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17f94cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17f950:
    // 0x17f950: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x17F950u;
    SET_GPR_U32(ctx, 31, 0x17F958u);
    ctx->pc = 0x17F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F950u;
    // 0x17f954: 0x26240600  addiu       $a0, $s1, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x17F950u, 0x17F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F958u;
label_17f958:
    // 0x17f958: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F958u;
    {
        const bool branch_taken_0x17f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f958) {
            ctx->pc = 0x17F97Cu;
            goto label_17f97c;
        }
    }
    ctx->pc = 0x17F960u;
    // 0x17f960: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x17f960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f964: 0xa2200764  sb          $zero, 0x764($s1)
    ctx->pc = 0x17f964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1892), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f968: 0xa2200765  sb          $zero, 0x765($s1)
    ctx->pc = 0x17f968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1893), (uint8_t)GPR_U32(ctx, 0));
label_17f96c:
    // 0x17f96c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x17f96cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f970: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17f970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f974: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x17f974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f978: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17f978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f97c:
    // 0x17f97c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17f97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17f980:
    // 0x17f980: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f984: 0x3e00008  jr          $ra
    ctx->pc = 0x17F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F984u;
        // 0x17f988: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F98Cu;
    // 0x17f98c: 0x0  nop
    ctx->pc = 0x17f98cu;
    // NOP
    ctx->pc = 0x17f990u;
}
