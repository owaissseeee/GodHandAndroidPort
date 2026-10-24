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

// Function: cEm00_attachToTarget
// Address: 0x27e7f0 - 0x27e950
void cEm00_attachToTarget_0x27e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_attachToTarget_0x27e7f0");
#endif

    switch (ctx->pc) {
        case 0x27e874u: goto label_27e874;
        case 0x27e880u: goto label_27e880;
        case 0x27e8c4u: goto label_27e8c4;
        case 0x27e920u: goto label_27e920;
        default: break;
    }

    ctx->pc = 0x27e7f0u;

    // 0x27e7f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27e7f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27e7f8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x27e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x27e7fc: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x27e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x27e800: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x27e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x27e804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27e804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e808: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x27e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x27e80c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27e80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e810: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x27e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x27e814: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27e818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27e818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27e81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e820: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x27e820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x27e824: 0x924402b4  lbu         $a0, 0x2B4($s2)
    ctx->pc = 0x27e824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x27e828: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27e828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27e82c: 0xe640024c  swc1        $f0, 0x24C($s2)
    ctx->pc = 0x27e82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
    // 0x27e830: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x27e830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
    // 0x27e834: 0xae401580  sw          $zero, 0x1580($s2)
    ctx->pc = 0x27e834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5504), GPR_U32(ctx, 0));
    // 0x27e838: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E838u;
    {
        const bool branch_taken_0x27e838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E838u;
        // 0x27e83c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e838) {
            ctx->pc = 0x27E84Cu;
            goto label_27e84c;
        }
    }
    ctx->pc = 0x27E840u;
    // 0x27e840: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x27e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x27e844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E844u;
    {
        const bool branch_taken_0x27e844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E844u;
        // 0x27e848: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e844) {
            ctx->pc = 0x27E850u;
            goto label_27e850;
        }
    }
    ctx->pc = 0x27E84Cu;
label_27e84c:
    // 0x27e84c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e850:
    // 0x27e850: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27E850u;
    {
        const bool branch_taken_0x27e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E850u;
        // 0x27e854: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e850) {
            ctx->pc = 0x27E938u;
            goto label_27e938;
        }
    }
    ctx->pc = 0x27E858u;
    // 0x27e858: 0x12600031  beqz        $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x27E858u;
    {
        const bool branch_taken_0x27e858 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E858u;
        // 0x27e85c: 0xac520148  sw          $s2, 0x148($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e858) {
            ctx->pc = 0x27E920u;
            goto label_27e920;
        }
    }
    ctx->pc = 0x27E860u;
    // 0x27e860: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x27e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27e864: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x27e864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27e868: 0xc66c0104  lwc1        $f12, 0x104($s3)
    ctx->pc = 0x27e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e86c: 0xc051e62  jal         func_147988
    ctx->pc = 0x27E86Cu;
    SET_GPR_U32(ctx, 31, 0x27E874u);
    ctx->pc = 0x27E870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E86Cu;
    // 0x27e870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x27E86Cu, 0x27E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E874u;
label_27e874:
    // 0x27e874: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x27e874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x27e878: 0xc051f10  jal         func_147C40
    ctx->pc = 0x27E878u;
    SET_GPR_U32(ctx, 31, 0x27E880u);
    ctx->pc = 0x27E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E878u;
    // 0x27e87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x27E878u, 0x27E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E880u;
label_27e880:
    // 0x27e880: 0x3c013e4a  lui         $at, 0x3E4A
    ctx->pc = 0x27e880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15946 << 16));
    // 0x27e884: 0x34210903  ori         $at, $at, 0x903
    ctx->pc = 0x27e884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2307);
    // 0x27e888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e88c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x27e88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27e890: 0x3c01bfd8  lui         $at, 0xBFD8
    ctx->pc = 0x27e890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49112 << 16));
    // 0x27e894: 0x3421b0f2  ori         $at, $at, 0xB0F2
    ctx->pc = 0x27e894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45298);
    // 0x27e898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e89c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e8a0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x27e8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27e8a4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27e8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27e8a8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x27e8ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27e8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e8b0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x27e8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27e8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8bc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27E8BCu;
    SET_GPR_U32(ctx, 31, 0x27E8C4u);
    ctx->pc = 0x27E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E8BCu;
    // 0x27e8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27E8BCu, 0x27E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E8C4u;
label_27e8c4:
    // 0x27e8c4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x27e8c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e8c8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x27e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27e8cc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x27e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x27e8d0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27e8d4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E8D4u;
    {
        const bool branch_taken_0x27e8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8D4u;
        // 0x27e8d8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8d4) {
            ctx->pc = 0x27E8F0u;
            goto label_27e8f0;
        }
    }
    ctx->pc = 0x27E8DCu;
    // 0x27e8dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27e8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27e8e0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x27e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e8e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27e8e8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e8ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e8f0:
    // 0x27e8f0: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x27e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x27e8f4: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x27e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x27e8f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E8F8u;
    {
        const bool branch_taken_0x27e8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e8f8) {
            ctx->pc = 0x27E918u;
            goto label_27e918;
        }
    }
    ctx->pc = 0x27E900u;
    // 0x27e900: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x27e900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e904: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x27e904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x27e908: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e90c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27e90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27e910: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e914: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e918:
    // 0x27e918: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27E918u;
    SET_GPR_U32(ctx, 31, 0x27E920u);
    ctx->pc = 0x27E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E918u;
    // 0x27e91c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27E918u, 0x27E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E920u;
label_27e920:
    // 0x27e920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e924: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x27e924u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e928: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x27e928u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e92c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x27e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e930: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x27e930u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e934: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x27e934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27e938:
    // 0x27e938: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x27e938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27e93c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x27e93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27e940: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x27e940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27e944: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27e944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27e948: 0x3e00008  jr          $ra
    ctx->pc = 0x27E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E948u;
        // 0x27e94c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E950u;
}
