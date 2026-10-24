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

// Function: func_001EA830
// Address: 0x1ea830 - 0x1eb030
void func_001EA830_0x1ea830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EA830_0x1ea830");
#endif

    switch (ctx->pc) {
        case 0x1ea918u: goto label_1ea918;
        case 0x1ea9d4u: goto label_1ea9d4;
        case 0x1eaa10u: goto label_1eaa10;
        case 0x1eaa34u: goto label_1eaa34;
        case 0x1eaa5cu: goto label_1eaa5c;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaad8u: goto label_1eaad8;
        case 0x1eaae8u: goto label_1eaae8;
        case 0x1eaaf8u: goto label_1eaaf8;
        case 0x1eab08u: goto label_1eab08;
        case 0x1eab2cu: goto label_1eab2c;
        case 0x1eab40u: goto label_1eab40;
        case 0x1eab48u: goto label_1eab48;
        case 0x1eab50u: goto label_1eab50;
        case 0x1eab58u: goto label_1eab58;
        case 0x1eab60u: goto label_1eab60;
        case 0x1eab80u: goto label_1eab80;
        case 0x1eac90u: goto label_1eac90;
        case 0x1ead34u: goto label_1ead34;
        case 0x1ead48u: goto label_1ead48;
        case 0x1ead54u: goto label_1ead54;
        case 0x1ead60u: goto label_1ead60;
        case 0x1ead74u: goto label_1ead74;
        case 0x1eafdcu: goto label_1eafdc;
        case 0x1eafe4u: goto label_1eafe4;
        case 0x1eafecu: goto label_1eafec;
        case 0x1eaff4u: goto label_1eaff4;
        default: break;
    }

    ctx->pc = 0x1ea830u;

    // 0x1ea830: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ea834: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ea834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1ea838: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1ea838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1ea83c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea840: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ea840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1ea844: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ea844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1ea848: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ea848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1ea84c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ea84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1ea850: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ea850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ea854: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1ea854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1ea858: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1ea858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1ea85c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea860: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1ea860u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ea864: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1ea864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ea868: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1ea868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ea86c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ea86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ea870: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1ea870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ea874: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x1EA874u;
    {
        const bool branch_taken_0x1ea874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA874u;
        // 0x1ea878: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea874) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EA87Cu;
    // 0x1ea87c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ea880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea884: 0x2442bce0  addiu       $v0, $v0, -0x4320
    ctx->pc = 0x1ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950112));
    // 0x1ea888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea88c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea890: 0x800008  jr          $a0
    ctx->pc = 0x1EA890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA898u: goto label_1ea898;
            case 0x1EAA64u: goto label_1eaa64;
            case 0x1EAAA4u: goto label_1eaaa4;
            case 0x1EAB38u: goto label_1eab38;
            case 0x1EAC04u: goto label_1eac04;
            case 0x1EAC44u: goto label_1eac44;
            case 0x1EAD8Cu: goto label_1ead8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA890u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EA898u;
label_1ea898:
    // 0x1ea898: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x1ea89c: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x1ea8a0: 0x8cc27a80  lw          $v0, 0x7A80($a2)
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x1ea8a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ea8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ea8a8: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1ea8ac: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x1ea8b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ea8b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ea8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ea8b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea8bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ea8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ea8c0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1ea8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1ea8c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ea8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ea8c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ea8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ea8cc: 0x2635005c  addiu       $s5, $s1, 0x5C
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1ea8d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea8d4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x1ea8d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x1ea8d8: 0xacc27a80  sw          $v0, 0x7A80($a2)
    ctx->pc = 0x1ea8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31360), GPR_U32(ctx, 2));
    // 0x1ea8dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1ea8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1ea8e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ea8e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ea8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ea8ec: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ea8f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea8f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ea8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ea8f8: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x1ea8f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x1ea8fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ea8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ea900: 0x3694fffd  ori         $s4, $s4, 0xFFFD
    ctx->pc = 0x1ea900u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65533);
    // 0x1ea904: 0x2417ff7f  addiu       $s7, $zero, -0x81
    ctx->pc = 0x1ea904u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1ea908: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1ea908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea90c: 0x263201ec  addiu       $s2, $s1, 0x1EC
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
    // 0x1ea910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ea914: 0x0  nop
    ctx->pc = 0x1ea914u;
    // NOP
label_1ea918:
    // 0x1ea918: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EA918u;
    {
        const bool branch_taken_0x1ea918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA918u;
        // 0x1ea91c: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea918) {
            ctx->pc = 0x1EA958u;
            goto label_1ea958;
        }
    }
    ctx->pc = 0x1EA920u;
    // 0x1ea920: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ea924: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ea924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea928: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ea928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ea92c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea930: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA930u;
            // 0x1ea934: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA938u;
    // 0x1ea938: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ea93c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA93Cu;
    {
        const bool branch_taken_0x1ea93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1EA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA93Cu;
        // 0x1ea940: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea93c) {
            ctx->pc = 0x1EA958u;
            goto label_1ea958;
        }
    }
    ctx->pc = 0x1EA944u;
    // 0x1ea944: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ea944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ea948: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1ea948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea94c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ea94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ea950: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ea950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea954: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ea954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ea958:
    // 0x1ea958: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ea958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea95c:
    // 0x1ea95c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ea95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ea960: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x1ea960u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ea964: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ea964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ea968: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA968u;
    {
        const bool branch_taken_0x1ea968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA968u;
        // 0x1ea96c: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea968) {
            ctx->pc = 0x1EA990u;
            goto label_1ea990;
        }
    }
    ctx->pc = 0x1EA970u;
    // 0x1ea970: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1ea970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1ea974: 0x505d0007  beql        $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA974u;
    {
        const bool branch_taken_0x1ea974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        if (branch_taken_0x1ea974) {
            ctx->pc = 0x1EA978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA974u;
            // 0x1ea978: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA994u;
            goto label_1ea994;
        }
    }
    ctx->pc = 0x1EA97Cu;
    // 0x1ea97c: 0xe4740100  swc1        $f20, 0x100($v1)
    ctx->pc = 0x1ea97cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1ea980: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1ea980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea984: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ea984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ea988: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1ea988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea98c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1ea98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ea990:
    // 0x1ea990: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ea990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea994:
    // 0x1ea994: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA994u;
    {
        const bool branch_taken_0x1ea994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA994u;
        // 0x1ea998: 0x2a42821  addu        $a1, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea994) {
            ctx->pc = 0x1EA9A8u;
            goto label_1ea9a8;
        }
    }
    ctx->pc = 0x1EA99Cu;
    // 0x1ea99c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1ea99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1ea9a0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1ea9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1ea9a4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1ea9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1ea9a8:
    // 0x1ea9a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea9ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ea9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ea9b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ea9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ea9b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ea9b8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1ea9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ea9bc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ea9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ea9c0: 0x8c620600  lw          $v0, 0x600($v1)
    ctx->pc = 0x1ea9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1536)));
    // 0x1ea9c4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x1ea9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x1ea9c8: 0xac620600  sw          $v0, 0x600($v1)
    ctx->pc = 0x1ea9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1536), GPR_U32(ctx, 2));
    // 0x1ea9cc: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1EA9CCu;
    SET_GPR_U32(ctx, 31, 0x1EA9D4u);
    ctx->pc = 0x1EA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA9CCu;
    // 0x1ea9d0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1EA9CCu, 0x1EA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA9D4u;
label_1ea9d4:
    // 0x1ea9d4: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1ea9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea9d8: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1EA9D8u;
    {
        const bool branch_taken_0x1ea9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea9d8) {
            ctx->pc = 0x1EA9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA9D8u;
            // 0x1ea9dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea918;
        }
    }
    ctx->pc = 0x1EA9E0u;
    // 0x1ea9e0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1ea9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1ea9e4: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x1ea9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
    // 0x1ea9e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ea9e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568220u));
    // 0x1ea9ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ea9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ea9f0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1ea9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1ea9f4: 0x24638230  addiu       $v1, $v1, -0x7DD0
    ctx->pc = 0x1ea9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935088));
    // 0x1ea9f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ea9f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568230u));
    // 0x1ea9fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1ea9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eaa00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eaa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa08: 0xc07adc6  jal         func_1EB718
    ctx->pc = 0x1EAA08u;
    SET_GPR_U32(ctx, 31, 0x1EAA10u);
    ctx->pc = 0x1EAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA08u;
    // 0x1eaa0c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB718u, 0x1EAA08u, 0x1EAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA10u;
label_1eaa10:
    // 0x1eaa10: 0x8e270200  lw          $a3, 0x200($s1)
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eaa14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1eaa18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1eaa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1eaa1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eaa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eaa20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaa24: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1eaa24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1eaa28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eaa28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa2c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EAA2Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA34u);
    ctx->pc = 0x1EAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA2Cu;
    // 0x1eaa30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EAA2Cu, 0x1EAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA34u;
label_1eaa34:
    // 0x1eaa34: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1eaa34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1eaa38: 0xae222a00  sw          $v0, 0x2A00($s1)
    ctx->pc = 0x1eaa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10752), GPR_U32(ctx, 2));
    // 0x1eaa3c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1eaa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1eaa40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eaa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa44: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1eaa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eaa48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eaa48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa4c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1eaa4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1eaa50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eaa50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa54: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EAA54u;
    SET_GPR_U32(ctx, 31, 0x1EAA5Cu);
    ctx->pc = 0x1EAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA54u;
    // 0x1eaa58: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EAA54u, 0x1EAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA5Cu;
label_1eaa5c:
    // 0x1eaa5c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1EAA5Cu;
    {
        const bool branch_taken_0x1eaa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA5Cu;
        // 0x1eaa60: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa5c) {
            ctx->pc = 0x1EAD80u;
            goto label_1ead80;
        }
    }
    ctx->pc = 0x1EAA64u;
label_1eaa64:
    // 0x1eaa64: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1eaa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1eaa68: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1eaa68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1eaa6c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1eaa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1eaa70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eaa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eaa74: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1EAA74u;
    {
        const bool branch_taken_0x1eaa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA74u;
        // 0x1eaa78: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa74) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAA7Cu;
    // 0x1eaa7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1eaa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1eaa80: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1eaa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1eaa84: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1eaa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1eaa88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eaa88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa8c: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1EAA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA94u);
    ctx->pc = 0x1EAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA8Cu;
    // 0x1eaa90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1EAA8Cu, 0x1EAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA94u;
label_1eaa94:
    // 0x1eaa94: 0xc07b5f2  jal         func_1ED7C8
    ctx->pc = 0x1EAA94u;
    SET_GPR_U32(ctx, 31, 0x1EAA9Cu);
    ctx->pc = 0x1EAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA94u;
    // 0x1eaa98: 0x26241840  addiu       $a0, $s1, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED7C8u, 0x1EAA94u, 0x1EAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA9Cu;
label_1eaa9c:
    // 0x1eaa9c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1EAA9Cu;
    {
        const bool branch_taken_0x1eaa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA9Cu;
        // 0x1eaaa0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa9c) {
            ctx->pc = 0x1EAD80u;
            goto label_1ead80;
        }
    }
    ctx->pc = 0x1EAAA4u;
label_1eaaa4:
    // 0x1eaaa4: 0x9e221840  lwu         $v0, 0x1840($s1)
    ctx->pc = 0x1eaaa4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6208)));
    // 0x1eaaa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eaaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eaaac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1eaaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1eaab0: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1EAAB0u;
    {
        const bool branch_taken_0x1eaab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAB0u;
        // 0x1eaab4: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaab0) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAAB8u;
    // 0x1eaab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaabc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eaabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaac0: 0xc07af80  jal         func_1EBE00
    ctx->pc = 0x1EAAC0u;
    SET_GPR_U32(ctx, 31, 0x1EAAC8u);
    ctx->pc = 0x1EAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAC0u;
    // 0x1eaac4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE00u, 0x1EAAC0u, 0x1EAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAC8u;
label_1eaac8:
    // 0x1eaac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eaaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaad0: 0xc07af80  jal         func_1EBE00
    ctx->pc = 0x1EAAD0u;
    SET_GPR_U32(ctx, 31, 0x1EAAD8u);
    ctx->pc = 0x1EAAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAD0u;
    // 0x1eaad4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE00u, 0x1EAAD0u, 0x1EAAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAD8u;
label_1eaad8:
    // 0x1eaad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaadc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eaae0: 0xc07af80  jal         func_1EBE00
    ctx->pc = 0x1EAAE0u;
    SET_GPR_U32(ctx, 31, 0x1EAAE8u);
    ctx->pc = 0x1EAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAE0u;
    // 0x1eaae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE00u, 0x1EAAE0u, 0x1EAAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAE8u;
label_1eaae8:
    // 0x1eaae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eaaf0: 0xc07af80  jal         func_1EBE00
    ctx->pc = 0x1EAAF0u;
    SET_GPR_U32(ctx, 31, 0x1EAAF8u);
    ctx->pc = 0x1EAAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAF0u;
    // 0x1eaaf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE00u, 0x1EAAF0u, 0x1EAAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAF8u;
label_1eaaf8:
    // 0x1eaaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaafc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eab00: 0xc07af80  jal         func_1EBE00
    ctx->pc = 0x1EAB00u;
    SET_GPR_U32(ctx, 31, 0x1EAB08u);
    ctx->pc = 0x1EAB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB00u;
    // 0x1eab04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE00u, 0x1EAB00u, 0x1EAB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB08u;
label_1eab08:
    // 0x1eab08: 0x8e270200  lw          $a3, 0x200($s1)
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eab0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1eab10: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1eab14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eab18: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1eab1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eab20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eab20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab24: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EAB24u;
    SET_GPR_U32(ctx, 31, 0x1EAB2Cu);
    ctx->pc = 0x1EAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB24u;
    // 0x1eab28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EAB24u, 0x1EAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB2Cu;
label_1eab2c:
    // 0x1eab2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eab30: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1EAB30u;
    {
        const bool branch_taken_0x1eab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB30u;
        // 0x1eab34: 0xae222a04  sw          $v0, 0x2A04($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab30) {
            ctx->pc = 0x1EAC38u;
            goto label_1eac38;
        }
    }
    ctx->pc = 0x1EAB38u;
label_1eab38:
    // 0x1eab38: 0xc07af16  jal         func_1EBC58
    ctx->pc = 0x1EAB38u;
    SET_GPR_U32(ctx, 31, 0x1EAB40u);
    ctx->pc = 0x1EAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB38u;
    // 0x1eab3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC58u, 0x1EAB38u, 0x1EAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB40u;
label_1eab40:
    // 0x1eab40: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1EAB40u;
    SET_GPR_U32(ctx, 31, 0x1EAB48u);
    ctx->pc = 0x1EAB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB40u;
    // 0x1eab44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1EAB40u, 0x1EAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB48u;
label_1eab48:
    // 0x1eab48: 0xc07aede  jal         func_1EBB78
    ctx->pc = 0x1EAB48u;
    SET_GPR_U32(ctx, 31, 0x1EAB50u);
    ctx->pc = 0x1EAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB48u;
    // 0x1eab4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB78u, 0x1EAB48u, 0x1EAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB50u;
label_1eab50:
    // 0x1eab50: 0xc07adee  jal         func_1EB7B8
    ctx->pc = 0x1EAB50u;
    SET_GPR_U32(ctx, 31, 0x1EAB58u);
    ctx->pc = 0x1EAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB50u;
    // 0x1eab54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB7B8u, 0x1EAB50u, 0x1EAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB58u;
label_1eab58:
    // 0x1eab58: 0xc07b208  jal         func_1EC820
    ctx->pc = 0x1EAB58u;
    SET_GPR_U32(ctx, 31, 0x1EAB60u);
    ctx->pc = 0x1EAB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB58u;
    // 0x1eab5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC820u, 0x1EAB58u, 0x1EAB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB60u;
label_1eab60:
    // 0x1eab60: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1eab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eab64: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x1eab68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eab6c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eab6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1eab70: 0xc7c3e198  lwc1        $f3, -0x1E68($fp)
    ctx->pc = 0x1eab70u;
    { uint32_t bits = FAST_READ32(0x3BE198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eab74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1eab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eab78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab7c: 0x2623005c  addiu       $v1, $s1, 0x5C
    ctx->pc = 0x1eab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_1eab80:
    // 0x1eab80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eab84: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EAB84u;
    {
        const bool branch_taken_0x1eab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eab84) {
            ctx->pc = 0x1EAB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAB84u;
            // 0x1eab88: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EABB4u;
            goto label_1eabb4;
        }
    }
    ctx->pc = 0x1EAB8Cu;
    // 0x1eab8c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eab90: 0x13a20013  beq         $sp, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EAB90u;
    {
        const bool branch_taken_0x1eab90 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB90u;
        // 0x1eab94: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab90) {
            ctx->pc = 0x1EABE0u;
            goto label_1eabe0;
        }
    }
    ctx->pc = 0x1EAB98u;
    // 0x1eab98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eab9c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eab9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eaba0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eaba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaba4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eaba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eaba8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eaba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eabac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EABACu;
    {
        const bool branch_taken_0x1eabac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABACu;
        // 0x1eabb0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabac) {
            ctx->pc = 0x1EABDCu;
            goto label_1eabdc;
        }
    }
    ctx->pc = 0x1EABB4u;
label_1eabb4:
    // 0x1eabb4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1eabb8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1eabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1eabbc: 0x13a40007  beq         $sp, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EABBCu;
    {
        const bool branch_taken_0x1eabbc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABBCu;
        // 0x1eabc0: 0xe484000c  swc1        $f4, 0xC($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabbc) {
            ctx->pc = 0x1EABDCu;
            goto label_1eabdc;
        }
    }
    ctx->pc = 0x1EABC4u;
    // 0x1eabc4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1eabc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eabc8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1eabc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eabcc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1eabccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eabd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eabd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eabd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eabd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eabd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1eabd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eabdc:
    // 0x1eabdc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1eabdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eabe0:
    // 0x1eabe0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1eabe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eabe4: 0x0  nop
    ctx->pc = 0x1eabe4u;
    // NOP
    // 0x1eabe8: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x1EABE8u;
    {
        const bool branch_taken_0x1eabe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABE8u;
        // 0x1eabec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabe8) {
            ctx->pc = 0x1EAD68u;
            goto label_1ead68;
        }
    }
    ctx->pc = 0x1EABF0u;
    // 0x1eabf0: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1eabf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eabf4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1EABF4u;
    {
        const bool branch_taken_0x1eabf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABF4u;
        // 0x1eabf8: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabf4) {
            ctx->pc = 0x1EAB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eab80;
        }
    }
    ctx->pc = 0x1EABFCu;
    // 0x1eabfc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1EABFCu;
    {
        const bool branch_taken_0x1eabfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eabfc) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAC04u;
label_1eac04:
    // 0x1eac04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1eac08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAC08u;
    {
        const bool branch_taken_0x1eac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC08u;
        // 0x1eac0c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac08) {
            ctx->pc = 0x1EAC1Cu;
            goto label_1eac1c;
        }
    }
    ctx->pc = 0x1EAC10u;
    // 0x1eac10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eac10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAC14u;
    {
        const bool branch_taken_0x1eac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC14u;
        // 0x1eac18: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac14) {
            ctx->pc = 0x1EAC20u;
            goto label_1eac20;
        }
    }
    ctx->pc = 0x1EAC1Cu;
label_1eac1c:
    // 0x1eac1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eac20:
    // 0x1eac20: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eac20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eac24: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1EAC24u;
    {
        const bool branch_taken_0x1eac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC24u;
        // 0x1eac28: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac24) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAC2Cu;
    // 0x1eac2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eac30: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eac34: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1eac34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1eac38:
    // 0x1eac38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eac3c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1EAC3Cu;
    {
        const bool branch_taken_0x1eac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC3Cu;
        // 0x1eac40: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac3c) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAC44u;
label_1eac44:
    // 0x1eac44: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1eac48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAC48u;
    {
        const bool branch_taken_0x1eac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC48u;
        // 0x1eac4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac48) {
            ctx->pc = 0x1EAC5Cu;
            goto label_1eac5c;
        }
    }
    ctx->pc = 0x1EAC50u;
    // 0x1eac50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eac50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAC54u;
    {
        const bool branch_taken_0x1eac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC54u;
        // 0x1eac58: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac54) {
            ctx->pc = 0x1EAC60u;
            goto label_1eac60;
        }
    }
    ctx->pc = 0x1EAC5Cu;
label_1eac5c:
    // 0x1eac5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eac60:
    // 0x1eac60: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eac64: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC64u;
        // 0x1eac68: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAC6Cu;
    // 0x1eac6c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1eac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eac70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eac74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eac74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1eac78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1eac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eac7c: 0xc7c3e198  lwc1        $f3, -0x1E68($fp)
    ctx->pc = 0x1eac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294959512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eac80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac84: 0x2623005c  addiu       $v1, $s1, 0x5C
    ctx->pc = 0x1eac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1eac88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1eac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eac8c: 0x0  nop
    ctx->pc = 0x1eac8cu;
    // NOP
label_1eac90:
    // 0x1eac90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eac94: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EAC94u;
    {
        const bool branch_taken_0x1eac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac94) {
            ctx->pc = 0x1EAC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAC94u;
            // 0x1eac98: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EACC4u;
            goto label_1eacc4;
        }
    }
    ctx->pc = 0x1EAC9Cu;
    // 0x1eac9c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eaca0: 0x13a20013  beq         $sp, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EACA0u;
    {
        const bool branch_taken_0x1eaca0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACA0u;
        // 0x1eaca4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaca0) {
            ctx->pc = 0x1EACF0u;
            goto label_1eacf0;
        }
    }
    ctx->pc = 0x1EACA8u;
    // 0x1eaca8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eaca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eacac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eacacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eacb0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eacb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eacb4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eacb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eacb8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eacb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eacbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EACBCu;
    {
        const bool branch_taken_0x1eacbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACBCu;
        // 0x1eacc0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacbc) {
            ctx->pc = 0x1EACECu;
            goto label_1eacec;
        }
    }
    ctx->pc = 0x1EACC4u;
label_1eacc4:
    // 0x1eacc4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1eacc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1eacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1eaccc: 0x13a40007  beq         $sp, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EACCCu;
    {
        const bool branch_taken_0x1eaccc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACCCu;
        // 0x1eacd0: 0xe484000c  swc1        $f4, 0xC($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaccc) {
            ctx->pc = 0x1EACECu;
            goto label_1eacec;
        }
    }
    ctx->pc = 0x1EACD4u;
    // 0x1eacd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1eacd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eacd8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1eacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eacdc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1eacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eace0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eace0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eace4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eace4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eace8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1eace8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eacec:
    // 0x1eacec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1eacecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eacf0:
    // 0x1eacf0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1eacf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eacf4: 0x0  nop
    ctx->pc = 0x1eacf4u;
    // NOP
    // 0x1eacf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EACF8u;
    {
        const bool branch_taken_0x1eacf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eacf8) {
            ctx->pc = 0x1EACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EACF8u;
            // 0x1eacfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAD00u;
            goto label_1ead00;
        }
    }
    ctx->pc = 0x1EAD00u;
label_1ead00:
    // 0x1ead00: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ead04: 0x4a1ffe2  bgez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1EAD04u;
    {
        const bool branch_taken_0x1ead04 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1EAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD04u;
        // 0x1ead08: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead04) {
            ctx->pc = 0x1EAC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eac90;
        }
    }
    ctx->pc = 0x1EAD0Cu;
    // 0x1ead0c: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EAD0Cu;
    {
        const bool branch_taken_0x1ead0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD0Cu;
        // 0x1ead10: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead0c) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAD14u;
    // 0x1ead14: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ead18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ead18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ead1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead20: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1ead20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1ead24: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1ead24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ead28: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ead28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ead2c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EAD2Cu;
    SET_GPR_U32(ctx, 31, 0x1EAD34u);
    ctx->pc = 0x1EAD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD2Cu;
    // 0x1ead30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EAD2Cu, 0x1EAD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD34u;
label_1ead34:
    // 0x1ead34: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ead34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ead38: 0x8e252a00  lw          $a1, 0x2A00($s1)
    ctx->pc = 0x1ead38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10752)));
    // 0x1ead3c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1ead3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1ead40: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1EAD40u;
    SET_GPR_U32(ctx, 31, 0x1EAD48u);
    ctx->pc = 0x1EAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD40u;
    // 0x1ead44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1EAD40u, 0x1EAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD48u;
label_1ead48:
    // 0x1ead48: 0x8e252a04  lw          $a1, 0x2A04($s1)
    ctx->pc = 0x1ead48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10756)));
    // 0x1ead4c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1EAD4Cu;
    SET_GPR_U32(ctx, 31, 0x1EAD54u);
    ctx->pc = 0x1EAD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD4Cu;
    // 0x1ead50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1EAD4Cu, 0x1EAD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD54u;
label_1ead54:
    // 0x1ead54: 0x8e252a08  lw          $a1, 0x2A08($s1)
    ctx->pc = 0x1ead54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10760)));
    // 0x1ead58: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1EAD58u;
    SET_GPR_U32(ctx, 31, 0x1EAD60u);
    ctx->pc = 0x1EAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD58u;
    // 0x1ead5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1EAD58u, 0x1EAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD60u;
label_1ead60:
    // 0x1ead60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAD60u;
    {
        const bool branch_taken_0x1ead60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD60u;
        // 0x1ead64: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead60) {
            ctx->pc = 0x1EAD80u;
            goto label_1ead80;
        }
    }
    ctx->pc = 0x1EAD68u;
label_1ead68:
    // 0x1ead68: 0x26241840  addiu       $a0, $s1, 0x1840
    ctx->pc = 0x1ead68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6208));
    // 0x1ead6c: 0xc07b70a  jal         func_1EDC28
    ctx->pc = 0x1EAD6Cu;
    SET_GPR_U32(ctx, 31, 0x1EAD74u);
    ctx->pc = 0x1EAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD6Cu;
    // 0x1ead70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC28u, 0x1EAD6Cu, 0x1EAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD74u;
label_1ead74:
    // 0x1ead74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ead74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ead78: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ead7c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1ead7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1ead80:
    // 0x1ead80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ead84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EAD84u;
    {
        const bool branch_taken_0x1ead84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD84u;
        // 0x1ead88: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead84) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EAD8Cu;
label_1ead8c:
    // 0x1ead8c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ead8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ead90: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ead90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ead94: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ead98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ead98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ead9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAD9Cu;
    {
        const bool branch_taken_0x1ead9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD9Cu;
        // 0x1eada0: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead9c) {
            ctx->pc = 0x1EADB4u;
            goto label_1eadb4;
        }
    }
    ctx->pc = 0x1EADA4u;
    // 0x1eada4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eada8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1eada8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1eadac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1eadacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1eadb0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1eadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1eadb4:
    // 0x1eadb4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1eadb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eadb8: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1eadb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1eadbc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1eadbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eadc0: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1EADC0u;
    {
        const bool branch_taken_0x1eadc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADC0u;
        // 0x1eadc4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadc0) {
            ctx->pc = 0x1EAFA0u;
            goto label_1eafa0;
        }
    }
    ctx->pc = 0x1EADC8u;
    // 0x1eadc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eadcc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1eadd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eadd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eadd8: 0x800008  jr          $a0
    ctx->pc = 0x1EADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EADE0u: goto label_1eade0;
            case 0x1EAE60u: goto label_1eae60;
            case 0x1EAEDCu: goto label_1eaedc;
            case 0x1EAEF0u: goto label_1eaef0;
            case 0x1EAF04u: goto label_1eaf04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EADE0u;
label_1eade0:
    // 0x1eade0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1eade4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EADE4u;
    {
        const bool branch_taken_0x1eade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eade4) {
            ctx->pc = 0x1EADE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EADE4u;
            // 0x1eade8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAE14u;
            goto label_1eae14;
        }
    }
    ctx->pc = 0x1EADECu;
    // 0x1eadec: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eadf0: 0x13a20016  beq         $sp, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EADF0u;
    {
        const bool branch_taken_0x1eadf0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADF0u;
        // 0x1eadf4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadf0) {
            ctx->pc = 0x1EAE4Cu;
            goto label_1eae4c;
        }
    }
    ctx->pc = 0x1EADF8u;
    // 0x1eadf8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eadf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eadfc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eadfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eae00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eae04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eae04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eae08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eae0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EAE0Cu;
    {
        const bool branch_taken_0x1eae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE0Cu;
        // 0x1eae10: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae0c) {
            ctx->pc = 0x1EAE48u;
            goto label_1eae48;
        }
    }
    ctx->pc = 0x1EAE14u;
label_1eae14:
    // 0x1eae14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eae18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eae18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae1c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1eae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1eae20: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eae20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1eae24: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1eae24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1eae28: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAE28u;
    {
        const bool branch_taken_0x1eae28 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE28u;
        // 0x1eae2c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae28) {
            ctx->pc = 0x1EAE48u;
            goto label_1eae48;
        }
    }
    ctx->pc = 0x1EAE30u;
    // 0x1eae30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1eae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eae34: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1eae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eae38: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1eae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eae3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eae40: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eae40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eae44: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1eae44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eae48:
    // 0x1eae48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1eae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eae4c:
    // 0x1eae4c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1eae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1eae50: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1eae50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1eae54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eae54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eae58: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1EAE58u;
    {
        const bool branch_taken_0x1eae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE58u;
        // 0x1eae5c: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae58) {
            ctx->pc = 0x1EAF84u;
            goto label_1eaf84;
        }
    }
    ctx->pc = 0x1EAE60u;
label_1eae60:
    // 0x1eae60: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1eae64: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EAE64u;
    {
        const bool branch_taken_0x1eae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae64) {
            ctx->pc = 0x1EAE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAE64u;
            // 0x1eae68: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAE94u;
            goto label_1eae94;
        }
    }
    ctx->pc = 0x1EAE6Cu;
    // 0x1eae6c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eae70: 0x13a20016  beq         $sp, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EAE70u;
    {
        const bool branch_taken_0x1eae70 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE70u;
        // 0x1eae74: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae70) {
            ctx->pc = 0x1EAECCu;
            goto label_1eaecc;
        }
    }
    ctx->pc = 0x1EAE78u;
    // 0x1eae78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eae7c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eae80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eae84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eae84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eae88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eae8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EAE8Cu;
    {
        const bool branch_taken_0x1eae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE8Cu;
        // 0x1eae90: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae8c) {
            ctx->pc = 0x1EAEC8u;
            goto label_1eaec8;
        }
    }
    ctx->pc = 0x1EAE94u;
label_1eae94:
    // 0x1eae94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eae98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eae98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae9c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1eae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1eaea0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eaea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1eaea4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1eaea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1eaea8: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAEA8u;
    {
        const bool branch_taken_0x1eaea8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEA8u;
        // 0x1eaeac: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaea8) {
            ctx->pc = 0x1EAEC8u;
            goto label_1eaec8;
        }
    }
    ctx->pc = 0x1EAEB0u;
    // 0x1eaeb0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1eaeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaeb4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1eaeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaeb8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1eaeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eaebc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eaebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eaec0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eaec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eaec4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1eaec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eaec8:
    // 0x1eaec8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1eaec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaecc:
    // 0x1eaecc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1eaeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1eaed0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eaed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eaed4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1EAED4u;
    {
        const bool branch_taken_0x1eaed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAED4u;
        // 0x1eaed8: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaed4) {
            ctx->pc = 0x1EAF84u;
            goto label_1eaf84;
        }
    }
    ctx->pc = 0x1EAEDCu;
label_1eaedc:
    // 0x1eaedc: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1eaedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1eaee0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1EAEE0u;
    {
        const bool branch_taken_0x1eaee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaee0) {
            ctx->pc = 0x1EAEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAEE0u;
            // 0x1eaee4: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF14u;
            goto label_1eaf14;
        }
    }
    ctx->pc = 0x1EAEE8u;
    // 0x1eaee8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EAEE8u;
    {
        const bool branch_taken_0x1eaee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaee8) {
            ctx->pc = 0x1EAF38u;
            goto label_1eaf38;
        }
    }
    ctx->pc = 0x1EAEF0u;
label_1eaef0:
    // 0x1eaef0: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x1eaef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1eaef4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAEF4u;
    {
        const bool branch_taken_0x1eaef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaef4) {
            ctx->pc = 0x1EAEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAEF4u;
            // 0x1eaef8: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAF14u;
            goto label_1eaf14;
        }
    }
    ctx->pc = 0x1EAEFCu;
    // 0x1eaefc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EAEFCu;
    {
        const bool branch_taken_0x1eaefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaefc) {
            ctx->pc = 0x1EAF38u;
            goto label_1eaf38;
        }
    }
    ctx->pc = 0x1EAF04u;
label_1eaf04:
    // 0x1eaf04: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x1eaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1eaf08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EAF08u;
    {
        const bool branch_taken_0x1eaf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf08) {
            ctx->pc = 0x1EAF38u;
            goto label_1eaf38;
        }
    }
    ctx->pc = 0x1EAF10u;
    // 0x1eaf10: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1eaf14:
    // 0x1eaf14: 0x13a20017  beq         $sp, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EAF14u;
    {
        const bool branch_taken_0x1eaf14 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF14u;
        // 0x1eaf18: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf14) {
            ctx->pc = 0x1EAF74u;
            goto label_1eaf74;
        }
    }
    ctx->pc = 0x1EAF1Cu;
    // 0x1eaf1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eaf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaf20: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eaf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eaf24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eaf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaf28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eaf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eaf2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eaf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaf30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EAF30u;
    {
        const bool branch_taken_0x1eaf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF30u;
        // 0x1eaf34: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf30) {
            ctx->pc = 0x1EAF70u;
            goto label_1eaf70;
        }
    }
    ctx->pc = 0x1EAF38u;
label_1eaf38:
    // 0x1eaf38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eaf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eaf3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eaf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaf40: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eaf44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1eaf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1eaf48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1eaf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1eaf4c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1eaf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1eaf50: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAF50u;
    {
        const bool branch_taken_0x1eaf50 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF50u;
        // 0x1eaf54: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf50) {
            ctx->pc = 0x1EAF70u;
            goto label_1eaf70;
        }
    }
    ctx->pc = 0x1EAF58u;
    // 0x1eaf58: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1eaf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaf5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1eaf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaf60: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1eaf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eaf64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1eaf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eaf68: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1eaf68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eaf6c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1eaf6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eaf70:
    // 0x1eaf70: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1eaf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf74:
    // 0x1eaf74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1eaf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaf78: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1eaf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1eaf7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eaf7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1eaf80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eaf80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1eaf84:
    // 0x1eaf84: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1eaf88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eaf88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1eaf8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eaf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eaf90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1eaf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eaf94: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1eaf94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1eaf98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1eaf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eaf9c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1eaf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1eafa0:
    // 0x1eafa0: 0xc7c1e198  lwc1        $f1, -0x1E68($fp)
    ctx->pc = 0x1eafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294959512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eafa4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1eafa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eafa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eafac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1eafacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eafb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1eafb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eafb4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1eafb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eafb8: 0x0  nop
    ctx->pc = 0x1eafb8u;
    // NOP
    // 0x1eafbc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAFBCu;
    {
        const bool branch_taken_0x1eafbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFBCu;
        // 0x1eafc0: 0x26301840  addiu       $s0, $s1, 0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafbc) {
            ctx->pc = 0x1EAFDCu;
            goto label_1eafdc;
        }
    }
    ctx->pc = 0x1EAFC4u;
    // 0x1eafc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAFC4u;
    {
        const bool branch_taken_0x1eafc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFC4u;
        // 0x1eafc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafc4) {
            ctx->pc = 0x1EAFD0u;
            goto label_1eafd0;
        }
    }
    ctx->pc = 0x1EAFCCu;
    // 0x1eafcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eafd0:
    // 0x1eafd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eafd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafd4: 0xc07b764  jal         func_1EDD90
    ctx->pc = 0x1EAFD4u;
    SET_GPR_U32(ctx, 31, 0x1EAFDCu);
    ctx->pc = 0x1EAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFD4u;
    // 0x1eafd8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDD90u, 0x1EAFD4u, 0x1EAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFDCu;
label_1eafdc:
    // 0x1eafdc: 0xc07b150  jal         func_1EC540
    ctx->pc = 0x1EAFDCu;
    SET_GPR_U32(ctx, 31, 0x1EAFE4u);
    ctx->pc = 0x1EAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFDCu;
    // 0x1eafe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC540u, 0x1EAFDCu, 0x1EAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFE4u;
label_1eafe4:
    // 0x1eafe4: 0xc07b5a0  jal         func_1ED680
    ctx->pc = 0x1EAFE4u;
    SET_GPR_U32(ctx, 31, 0x1EAFECu);
    ctx->pc = 0x1EAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFE4u;
    // 0x1eafe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED680u, 0x1EAFE4u, 0x1EAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFECu;
label_1eafec:
    // 0x1eafec: 0xc07b5b8  jal         func_1ED6E0
    ctx->pc = 0x1EAFECu;
    SET_GPR_U32(ctx, 31, 0x1EAFF4u);
    ctx->pc = 0x1EAFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFECu;
    // 0x1eaff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED6E0u, 0x1EAFECu, 0x1EAFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFF4u;
label_1eaff4:
    // 0x1eaff4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1eaff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eaff8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1eaff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1eaffc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1eaffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eb000: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1eb000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eb004: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1eb004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eb008: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1eb008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eb00c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1eb00cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eb010: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1eb010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb014: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1eb014u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb01c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1eb01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1eb020: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1eb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1eb024: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1eb024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eb028: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB028u;
        // 0x1eb02c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB030u;
}
