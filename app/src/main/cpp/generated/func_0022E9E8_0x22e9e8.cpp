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

// Function: func_0022E9E8
// Address: 0x22e9e8 - 0x22f698
void func_0022E9E8_0x22e9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022E9E8_0x22e9e8");
#endif

    switch (ctx->pc) {
        case 0x22ea3cu: goto label_22ea3c;
        case 0x22eab4u: goto label_22eab4;
        case 0x22eb6cu: goto label_22eb6c;
        case 0x22ebe4u: goto label_22ebe4;
        case 0x22ec1cu: goto label_22ec1c;
        case 0x22ec2cu: goto label_22ec2c;
        case 0x22ec4cu: goto label_22ec4c;
        case 0x22ec54u: goto label_22ec54;
        case 0x22ed00u: goto label_22ed00;
        case 0x22ee7cu: goto label_22ee7c;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22ef34u: goto label_22ef34;
        case 0x22ef48u: goto label_22ef48;
        case 0x22effcu: goto label_22effc;
        case 0x22f004u: goto label_22f004;
        case 0x22f0b8u: goto label_22f0b8;
        case 0x22f0ecu: goto label_22f0ec;
        case 0x22f128u: goto label_22f128;
        case 0x22f148u: goto label_22f148;
        case 0x22f198u: goto label_22f198;
        case 0x22f1a4u: goto label_22f1a4;
        case 0x22f1f0u: goto label_22f1f0;
        case 0x22f288u: goto label_22f288;
        case 0x22f2acu: goto label_22f2ac;
        case 0x22f2c0u: goto label_22f2c0;
        case 0x22f318u: goto label_22f318;
        case 0x22f340u: goto label_22f340;
        case 0x22f360u: goto label_22f360;
        case 0x22f3c4u: goto label_22f3c4;
        case 0x22f3e4u: goto label_22f3e4;
        case 0x22f448u: goto label_22f448;
        case 0x22f454u: goto label_22f454;
        case 0x22f460u: goto label_22f460;
        case 0x22f4ccu: goto label_22f4cc;
        case 0x22f4e0u: goto label_22f4e0;
        case 0x22f4fcu: goto label_22f4fc;
        case 0x22f504u: goto label_22f504;
        case 0x22f514u: goto label_22f514;
        case 0x22f528u: goto label_22f528;
        case 0x22f534u: goto label_22f534;
        case 0x22f568u: goto label_22f568;
        case 0x22f570u: goto label_22f570;
        case 0x22f65cu: goto label_22f65c;
        default: break;
    }

    ctx->pc = 0x22e9e8u;

    // 0x22e9e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22e9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22e9ec: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x22e9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e9f4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x22e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x22e9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9fc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x22e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x22ea00: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x22ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x22ea04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22ea04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea08: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x22ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x22ea0c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22ea10: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22ea14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ea14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea18: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x22ea18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x22ea1c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22ea20: 0xe6401724  swc1        $f0, 0x1724($s2)
    ctx->pc = 0x22ea20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5924), bits); }
    // 0x22ea24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22ea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea28: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x22ea2c: 0x8e5306b4  lw          $s3, 0x6B4($s2)
    ctx->pc = 0x22ea2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1716)));
    // 0x22ea30: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22ea34: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22EA34u;
    SET_GPR_U32(ctx, 31, 0x22EA3Cu);
    ctx->pc = 0x22EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA34u;
    // 0x22ea38: 0xae4216d4  sw          $v0, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22EA34u, 0x22EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA3Cu;
label_22ea3c:
    // 0x22ea3c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22ea3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22ea40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EA40u;
    {
        const bool branch_taken_0x22ea40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA40u;
        // 0x22ea44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea40) {
            ctx->pc = 0x22EA58u;
            goto label_22ea58;
        }
    }
    ctx->pc = 0x22EA48u;
    // 0x22ea48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22ea48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22ea4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ea4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ea50: 0xa2420617  sb          $v0, 0x617($s2)
    ctx->pc = 0x22ea50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ea54: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x22ea54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
label_22ea58:
    // 0x22ea58: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x22ea58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22ea5c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x22ea5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x22ea60: 0x104002b4  beqz        $v0, . + 4 + (0x2B4 << 2)
    ctx->pc = 0x22EA60u;
    {
        const bool branch_taken_0x22ea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA60u;
        // 0x22ea64: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea60) {
            ctx->pc = 0x22F534u;
            goto label_22f534;
        }
    }
    ctx->pc = 0x22EA68u;
    // 0x22ea68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22ea6c: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x22ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
    // 0x22ea70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ea74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ea78: 0x800008  jr          $a0
    ctx->pc = 0x22EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EA80u: goto label_22ea80;
            case 0x22EB34u: goto label_22eb34;
            case 0x22EC6Cu: goto label_22ec6c;
            case 0x22EE38u: goto label_22ee38;
            case 0x22F044u: goto label_22f044;
            case 0x22F0C4u: goto label_22f0c4;
            case 0x22F1ACu: goto label_22f1ac;
            case 0x22F22Cu: goto label_22f22c;
            case 0x22F4A0u: goto label_22f4a0;
            case 0x22F4ECu: goto label_22f4ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EA78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22EA80u;
label_22ea80:
    // 0x22ea80: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22ea84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea88: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x22ea88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ea8c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22ea8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ea90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22ea94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ea94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ea98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ea98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea9c: 0x8c45215c  lw          $a1, 0x215C($v0)
    ctx->pc = 0x22ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x22eaa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22eaa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eaa4: 0x8c462160  lw          $a2, 0x2160($v0)
    ctx->pc = 0x22eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8544)));
    // 0x22eaa8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22eaac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22EAACu;
    SET_GPR_U32(ctx, 31, 0x22EAB4u);
    ctx->pc = 0x22EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAACu;
    // 0x22eab0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22EAACu, 0x22EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAB4u;
label_22eab4:
    // 0x22eab4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x22eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22eab8: 0x26430580  addiu       $v1, $s2, 0x580
    ctx->pc = 0x22eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22eabc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x22eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22eac0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22eac0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eac4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x22eac4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22eac8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22eac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22eacc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22ead0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22ead4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22ead4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ead8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eadc: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22eae0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EAE0u;
    {
        const bool branch_taken_0x22eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x22EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAE0u;
        // 0x22eae4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eae0) {
            ctx->pc = 0x22EAFCu;
            goto label_22eafc;
        }
    }
    ctx->pc = 0x22EAE8u;
    // 0x22eae8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x22eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eaec: 0xe6400590  swc1        $f0, 0x590($s2)
    ctx->pc = 0x22eaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22eaf0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22eaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22eaf4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x22eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eaf8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22eaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22eafc:
    // 0x22eafc: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x22eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x22eb00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22eb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22eb04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22eb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eb08: 0xda440590  lqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22eb08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x22eb0c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22eb0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22eb10: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22eb10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22eb14: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22eb14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22eb18: 0xfa440590  sqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eb1c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EB1Cu;
    {
        const bool branch_taken_0x22eb1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB1Cu;
        // 0x22eb20: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb1c) {
            ctx->pc = 0x22EB28u;
            goto label_22eb28;
        }
    }
    ctx->pc = 0x22EB24u;
    // 0x22eb24: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x22eb24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_22eb28:
    // 0x22eb28: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22eb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22eb2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22eb30: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22eb30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22eb34:
    // 0x22eb34: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22eb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22eb38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22eb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eb3c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22eb3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x22eb40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22eb44: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22EB44u;
    {
        const bool branch_taken_0x22eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB44u;
        // 0x22eb48: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb44) {
            ctx->pc = 0x22EBBCu;
            goto label_22ebbc;
        }
    }
    ctx->pc = 0x22EB4Cu;
    // 0x22eb4c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb54: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22eb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22eb58: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22eb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22eb5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22eb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22eb60: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22eb64: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22EB64u;
    SET_GPR_U32(ctx, 31, 0x22EB6Cu);
    ctx->pc = 0x22EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB64u;
    // 0x22eb68: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22EB64u, 0x22EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB6Cu;
label_22eb6c:
    // 0x22eb6c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb70: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22eb74: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22eb78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22eb78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22eb7c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eb80: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eb80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eb84: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22eb84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22eb88: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22eb88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22eb8c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22eb8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22eb90: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eb94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22eb94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eb98: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eb9c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22eba0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22eba0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22eba4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22eba4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eba8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22eba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22ebac: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22ebb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ebb4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22EBB4u;
    {
        const bool branch_taken_0x22ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBB4u;
        // 0x22ebb8: 0xae4305f0  sw          $v1, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebb4) {
            ctx->pc = 0x22EC4Cu;
            goto label_22ec4c;
        }
    }
    ctx->pc = 0x22EBBCu;
label_22ebbc:
    // 0x22ebbc: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x22ebc0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22EBC0u;
    {
        const bool branch_taken_0x22ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebc0) {
            ctx->pc = 0x22EC24u;
            goto label_22ec24;
        }
    }
    ctx->pc = 0x22EBC8u;
    // 0x22ebc8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22ebc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22ebcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EBCCu;
    {
        const bool branch_taken_0x22ebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebcc) {
            ctx->pc = 0x22EBDCu;
            goto label_22ebdc;
        }
    }
    ctx->pc = 0x22EBD4u;
    // 0x22ebd4: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x22EBD4u;
    {
        const bool branch_taken_0x22ebd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebd4) {
            ctx->pc = 0x22EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EBD4u;
            // 0x22ebd8: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EC00u;
            goto label_22ec00;
        }
    }
    ctx->pc = 0x22EBDCu;
label_22ebdc:
    // 0x22ebdc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22EBDCu;
    SET_GPR_U32(ctx, 31, 0x22EBE4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22EBDCu, 0x22EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBE4u;
label_22ebe4:
    // 0x22ebe4: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ebe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebec: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22ebecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22ebf0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22ebf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22ebf4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ebf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ebf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22EBF8u;
    {
        const bool branch_taken_0x22ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBF8u;
        // 0x22ebfc: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebf8) {
            ctx->pc = 0x22EC14u;
            goto label_22ec14;
        }
    }
    ctx->pc = 0x22EC00u;
label_22ec00:
    // 0x22ec00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec04: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22ec04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22ec08: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22ec08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22ec0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ec0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ec10: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x22ec10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_22ec14:
    // 0x22ec14: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22EC14u;
    SET_GPR_U32(ctx, 31, 0x22EC1Cu);
    ctx->pc = 0x22EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC14u;
    // 0x22ec18: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22EC14u, 0x22EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC1Cu;
label_22ec1c:
    // 0x22ec1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22EC1Cu;
    {
        const bool branch_taken_0x22ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec1c) {
            ctx->pc = 0x22EC4Cu;
            goto label_22ec4c;
        }
    }
    ctx->pc = 0x22EC24u;
label_22ec24:
    // 0x22ec24: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22EC24u;
    SET_GPR_U32(ctx, 31, 0x22EC2Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22EC24u, 0x22EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC2Cu;
label_22ec2c:
    // 0x22ec2c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec34: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22ec38: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22ec38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22ec3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ec3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ec40: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22ec44: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22EC44u;
    SET_GPR_U32(ctx, 31, 0x22EC4Cu);
    ctx->pc = 0x22EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC44u;
    // 0x22ec48: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22EC44u, 0x22EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC4Cu;
label_22ec4c:
    // 0x22ec4c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22EC4Cu;
    SET_GPR_U32(ctx, 31, 0x22EC54u);
    ctx->pc = 0x22EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC4Cu;
    // 0x22ec50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22EC4Cu, 0x22EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC54u;
label_22ec54:
    // 0x22ec54: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x22EC54u;
    {
        const bool branch_taken_0x22ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec54) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22EC5Cu;
    // 0x22ec5c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22ec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22ec60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ec64: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x22EC64u;
    {
        const bool branch_taken_0x22ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC64u;
        // 0x22ec68: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec64) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22EC6Cu;
label_22ec6c:
    // 0x22ec6c: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x22ec6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22ec70: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22ec70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22ec74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EC74u;
    {
        const bool branch_taken_0x22ec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC74u;
        // 0x22ec78: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec74) {
            ctx->pc = 0x22EC94u;
            goto label_22ec94;
        }
    }
    ctx->pc = 0x22EC7Cu;
    // 0x22ec7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22ec80: 0x24428e10  addiu       $v0, $v0, -0x71F0
    ctx->pc = 0x22ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938128));
    // 0x22ec84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ec88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ec8c: 0x800008  jr          $a0
    ctx->pc = 0x22EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EC94u: goto label_22ec94;
            case 0x22ECA4u: goto label_22eca4;
            case 0x22ECB4u: goto label_22ecb4;
            case 0x22ECC4u: goto label_22ecc4;
            case 0x22ECD4u: goto label_22ecd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22EC94u;
label_22ec94:
    // 0x22ec94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22ec98: 0x8c43219c  lw          $v1, 0x219C($v0)
    ctx->pc = 0x22ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8604)));
    // 0x22ec9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22EC9Cu;
    {
        const bool branch_taken_0x22ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC9Cu;
        // 0x22eca0: 0x8c4421a0  lw          $a0, 0x21A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec9c) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22ECA4u;
label_22eca4:
    // 0x22eca4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22eca8: 0x8c4321ac  lw          $v1, 0x21AC($v0)
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8620)));
    // 0x22ecac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22ECACu;
    {
        const bool branch_taken_0x22ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECACu;
        // 0x22ecb0: 0x8c4421b0  lw          $a0, 0x21B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecac) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22ECB4u;
label_22ecb4:
    // 0x22ecb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22ecb8: 0x8c4321b4  lw          $v1, 0x21B4($v0)
    ctx->pc = 0x22ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8628)));
    // 0x22ecbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22ECBCu;
    {
        const bool branch_taken_0x22ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECBCu;
        // 0x22ecc0: 0x8c4421b8  lw          $a0, 0x21B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecbc) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22ECC4u;
label_22ecc4:
    // 0x22ecc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22ecc8: 0x8c4321bc  lw          $v1, 0x21BC($v0)
    ctx->pc = 0x22ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8636)));
    // 0x22eccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22ECCCu;
    {
        const bool branch_taken_0x22eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECCCu;
        // 0x22ecd0: 0x8c4421c0  lw          $a0, 0x21C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eccc) {
            ctx->pc = 0x22ECE0u;
            goto label_22ece0;
        }
    }
    ctx->pc = 0x22ECD4u;
label_22ecd4:
    // 0x22ecd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22ecd8: 0x8c4321c4  lw          $v1, 0x21C4($v0)
    ctx->pc = 0x22ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8644)));
    // 0x22ecdc: 0x8c4421c8  lw          $a0, 0x21C8($v0)
    ctx->pc = 0x22ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8648)));
label_22ece0:
    // 0x22ece0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ece4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x22ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ece8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22ece8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ecec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecf0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22ecf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ecf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ecf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecf8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22ECF8u;
    SET_GPR_U32(ctx, 31, 0x22ED00u);
    ctx->pc = 0x22ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECF8u;
    // 0x22ecfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22ECF8u, 0x22ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED00u;
label_22ed00:
    // 0x22ed00: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22ed04: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x22ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22ed08: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ED08u;
    {
        const bool branch_taken_0x22ed08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ed08) {
            ctx->pc = 0x22ED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED08u;
            // 0x22ed0c: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED2Cu;
            goto label_22ed2c;
        }
    }
    ctx->pc = 0x22ED10u;
    // 0x22ed10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ed14: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x22ed14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x22ed18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ed1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x22ed1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22ed20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ed24: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x22ed24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x22ed28: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22ed28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_22ed2c:
    // 0x22ed2c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22ED2Cu;
    {
        const bool branch_taken_0x22ed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed2c) {
            ctx->pc = 0x22ED30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED2Cu;
            // 0x22ed30: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED64u;
            goto label_22ed64;
        }
    }
    ctx->pc = 0x22ED34u;
    // 0x22ed34: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22ED34u;
    {
        const bool branch_taken_0x22ed34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed34) {
            ctx->pc = 0x22ED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED34u;
            // 0x22ed38: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED64u;
            goto label_22ed64;
        }
    }
    ctx->pc = 0x22ED3Cu;
    // 0x22ed3c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x22ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x22ed40: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ED40u;
    {
        const bool branch_taken_0x22ed40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ed40) {
            ctx->pc = 0x22ED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED40u;
            // 0x22ed44: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED64u;
            goto label_22ed64;
        }
    }
    ctx->pc = 0x22ED48u;
    // 0x22ed48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ed4c: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x22ed4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x22ed50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ed54: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x22ed54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22ed58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ed5c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x22ed5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x22ed60: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_22ed64:
    // 0x22ed64: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x22ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22ed68: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22ed68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ed6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x22ed6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ed70: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22ed70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22ed74: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22ed74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22ed78: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22ed7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22ed7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ed80: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22ed84: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22ed88: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x22ED88u;
    {
        const bool branch_taken_0x22ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x22ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED88u;
        // 0x22ed8c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed88) {
            ctx->pc = 0x22EDA4u;
            goto label_22eda4;
        }
    }
    ctx->pc = 0x22ED90u;
    // 0x22ed90: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x22ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ed94: 0xe6400590  swc1        $f0, 0x590($s2)
    ctx->pc = 0x22ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22ed98: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22ed98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22ed9c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x22ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eda0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22eda4:
    // 0x22eda4: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x22eda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22eda8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22eda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22edac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22EDACu;
    {
        const bool branch_taken_0x22edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDACu;
        // 0x22edb0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edac) {
            ctx->pc = 0x22EE28u;
            goto label_22ee28;
        }
    }
    ctx->pc = 0x22EDB4u;
    // 0x22edb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22edb8: 0x24428e30  addiu       $v0, $v0, -0x71D0
    ctx->pc = 0x22edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
    // 0x22edbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22edc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22edc4: 0x800008  jr          $a0
    ctx->pc = 0x22EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22EDCCu: goto label_22edcc;
            case 0x22EDE0u: goto label_22ede0;
            case 0x22EDF4u: goto label_22edf4;
            case 0x22EE08u: goto label_22ee08;
            case 0x22EE28u: goto label_22ee28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EDC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22EDCCu;
label_22edcc:
    // 0x22edcc: 0x3c013dba  lui         $at, 0x3DBA
    ctx->pc = 0x22edccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15802 << 16));
    // 0x22edd0: 0x34212e8c  ori         $at, $at, 0x2E8C
    ctx->pc = 0x22edd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11916);
    // 0x22edd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22edd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22edd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22EDD8u;
    {
        const bool branch_taken_0x22edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edd8) {
            ctx->pc = 0x22EE14u;
            goto label_22ee14;
        }
    }
    ctx->pc = 0x22EDE0u;
label_22ede0:
    // 0x22ede0: 0x3c013d92  lui         $at, 0x3D92
    ctx->pc = 0x22ede0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15762 << 16));
    // 0x22ede4: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x22ede4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x22ede8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ede8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22edec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22EDECu;
    {
        const bool branch_taken_0x22edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edec) {
            ctx->pc = 0x22EE14u;
            goto label_22ee14;
        }
    }
    ctx->pc = 0x22EDF4u;
label_22edf4:
    // 0x22edf4: 0x3c013d70  lui         $at, 0x3D70
    ctx->pc = 0x22edf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15728 << 16));
    // 0x22edf8: 0x3421f0f1  ori         $at, $at, 0xF0F1
    ctx->pc = 0x22edf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61681);
    // 0x22edfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22edfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ee00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22EE00u;
    {
        const bool branch_taken_0x22ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee00) {
            ctx->pc = 0x22EE14u;
            goto label_22ee14;
        }
    }
    ctx->pc = 0x22EE08u;
label_22ee08:
    // 0x22ee08: 0x3c013d57  lui         $at, 0x3D57
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15703 << 16));
    // 0x22ee0c: 0x34219436  ori         $at, $at, 0x9436
    ctx->pc = 0x22ee0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37942);
    // 0x22ee10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ee10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ee14:
    // 0x22ee14: 0xda440590  lqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22ee14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x22ee18: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22ee18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22ee1c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22ee1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22ee20: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22ee20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22ee24: 0xfa440590  sqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
label_22ee28:
    // 0x22ee28: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22ee28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22ee2c: 0xae4005f0  sw          $zero, 0x5F0($s2)
    ctx->pc = 0x22ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
    // 0x22ee30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ee34: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22ee34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22ee38:
    // 0x22ee38: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22ee38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22ee3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EE3Cu;
    {
        const bool branch_taken_0x22ee3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee3c) {
            ctx->pc = 0x22EE58u;
            goto label_22ee58;
        }
    }
    ctx->pc = 0x22EE44u;
    // 0x22ee44: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EE44u;
    {
        const bool branch_taken_0x22ee44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE44u;
        // 0x22ee48: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee44) {
            ctx->pc = 0x22EE58u;
            goto label_22ee58;
        }
    }
    ctx->pc = 0x22EE4Cu;
    // 0x22ee4c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x22ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x22ee50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ee54: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x22ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_22ee58:
    // 0x22ee58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22ee5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ee5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ee60: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22ee60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22ee64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EE64u;
    {
        const bool branch_taken_0x22ee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE64u;
        // 0x22ee68: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee64) {
            ctx->pc = 0x22EE74u;
            goto label_22ee74;
        }
    }
    ctx->pc = 0x22EE6Cu;
    // 0x22ee6c: 0x5660000c  bnel        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22EE6Cu;
    {
        const bool branch_taken_0x22ee6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee6c) {
            ctx->pc = 0x22EE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE6Cu;
            // 0x22ee70: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EEA0u;
            goto label_22eea0;
        }
    }
    ctx->pc = 0x22EE74u;
label_22ee74:
    // 0x22ee74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22EE74u;
    SET_GPR_U32(ctx, 31, 0x22EE7Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22EE74u, 0x22EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE7Cu;
label_22ee7c:
    // 0x22ee7c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee84: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22ee84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22ee88: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22ee88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22ee8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ee8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ee90: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22ee94: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22EE94u;
    SET_GPR_U32(ctx, 31, 0x22EE9Cu);
    ctx->pc = 0x22EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE94u;
    // 0x22ee98: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22EE94u, 0x22EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE9Cu;
label_22ee9c:
    // 0x22ee9c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22ee9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_22eea0:
    // 0x22eea0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22eea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22eea4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22EEA4u;
    {
        const bool branch_taken_0x22eea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA4u;
        // 0x22eea8: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eea4) {
            ctx->pc = 0x22EEF8u;
            goto label_22eef8;
        }
    }
    ctx->pc = 0x22EEACu;
    // 0x22eeac: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eeb0: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22eeb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22eeb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22eeb8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eebc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eebcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eec0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22eec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22eec4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22eec4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22eec8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22eec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22eecc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eed0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22eed0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22eed4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eed8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22eedc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22eedcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22eee0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22eee0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eee4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22eee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22eee8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22eeec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22eef0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x22EEF0u;
    {
        const bool branch_taken_0x22eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF0u;
        // 0x22eef4: 0xae4305f0  sw          $v1, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eef0) {
            ctx->pc = 0x22EFFCu;
            goto label_22effc;
        }
    }
    ctx->pc = 0x22EEF8u;
label_22eef8:
    // 0x22eef8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22eef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22eefc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x22EEFCu;
    {
        const bool branch_taken_0x22eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eefc) {
            ctx->pc = 0x22EFFCu;
            goto label_22effc;
        }
    }
    ctx->pc = 0x22EF04u;
    // 0x22ef04: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x22EF04u;
    {
        const bool branch_taken_0x22ef04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef04) {
            ctx->pc = 0x22EFFCu;
            goto label_22effc;
        }
    }
    ctx->pc = 0x22EF0Cu;
    // 0x22ef0c: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x22ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x22ef10: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x22EF10u;
    {
        const bool branch_taken_0x22ef10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF10u;
        // 0x22ef14: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef10) {
            ctx->pc = 0x22EFE0u;
            goto label_22efe0;
        }
    }
    ctx->pc = 0x22EF18u;
    // 0x22ef18: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22ef1c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22ef1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22ef20: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x22ef20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22ef24: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x22ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ef28: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x22ef28u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x22ef2c: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x22EF2Cu;
    SET_GPR_U32(ctx, 31, 0x22EF34u);
    ctx->pc = 0x22EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF2Cu;
    // 0x22ef30: 0xc66d0104  lwc1        $f13, 0x104($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x22EF2Cu, 0x22EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF34u;
label_22ef34:
    // 0x22ef34: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x22ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ef38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22ef38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ef3c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22ef3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22ef40: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22EF40u;
    SET_GPR_U32(ctx, 31, 0x22EF48u);
    ctx->pc = 0x22EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF40u;
    // 0x22ef44: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22EF40u, 0x22EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF48u;
label_22ef48:
    // 0x22ef48: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22ef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x22ef4c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22ef50: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x22ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x22ef54: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x22ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22ef58: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22ef5c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x22ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22ef60: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22ef60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ef64: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x22ef64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ef68: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22ef68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22ef6c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22ef70: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x22ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ef74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22ef74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ef78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22ef7c: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EF7Cu;
    {
        const bool branch_taken_0x22ef7c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x22EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF7Cu;
        // 0x22ef80: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef7c) {
            ctx->pc = 0x22EF98u;
            goto label_22ef98;
        }
    }
    ctx->pc = 0x22EF84u;
    // 0x22ef84: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ef88: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x22ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22ef8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ef90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22ef90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22ef94: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22ef94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22ef98:
    // 0x22ef98: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ef9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x22efa0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22efa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22efa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22efa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22efa8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22efac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22efacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22efb0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22efb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22efb4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22efb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22efb8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22efb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22efbc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22efbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22efc0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22efc4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22efc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22efc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22efcc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22efccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22efd0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22efd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22efd4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22efd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22EFD8u;
    {
        const bool branch_taken_0x22efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22efd8) {
            ctx->pc = 0x22EFFCu;
            goto label_22effc;
        }
    }
    ctx->pc = 0x22EFE0u;
label_22efe0:
    // 0x22efe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22efe4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22efe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22efe8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22efe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22efec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22efecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22eff0: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22eff4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22EFF4u;
    SET_GPR_U32(ctx, 31, 0x22EFFCu);
    ctx->pc = 0x22EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFF4u;
    // 0x22eff8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22EFF4u, 0x22EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFFCu;
label_22effc:
    // 0x22effc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22EFFCu;
    SET_GPR_U32(ctx, 31, 0x22F004u);
    ctx->pc = 0x22F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFFCu;
    // 0x22f000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22EFFCu, 0x22F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F004u;
label_22f004:
    // 0x22f004: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x22F004u;
    {
        const bool branch_taken_0x22f004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f004) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22F00Cu;
    // 0x22f00c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f010: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F010u;
    {
        const bool branch_taken_0x22f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F010u;
        // 0x22f014: 0xae400604  sw          $zero, 0x604($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f010) {
            ctx->pc = 0x22F038u;
            goto label_22f038;
        }
    }
    ctx->pc = 0x22F018u;
    // 0x22f018: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F018u;
    {
        const bool branch_taken_0x22f018 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F018u;
        // 0x22f01c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f018) {
            ctx->pc = 0x22F03Cu;
            goto label_22f03c;
        }
    }
    ctx->pc = 0x22F020u;
    // 0x22f020: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x22f024: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22f028: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f02c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f030: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f034: 0xe6400604  swc1        $f0, 0x604($s2)
    ctx->pc = 0x22f034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
label_22f038:
    // 0x22f038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22f03c:
    // 0x22f03c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x22F03Cu;
    {
        const bool branch_taken_0x22f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F03Cu;
        // 0x22f040: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f03c) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22F044u;
label_22f044:
    // 0x22f044: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x22f044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x22f048: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F048u;
    {
        const bool branch_taken_0x22f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f048) {
            ctx->pc = 0x22F04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F048u;
            // 0x22f04c: 0x8e430304  lw          $v1, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F068u;
            goto label_22f068;
        }
    }
    ctx->pc = 0x22F050u;
    // 0x22f050: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22f054: 0x8c4321ec  lw          $v1, 0x21EC($v0)
    ctx->pc = 0x22f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8684)));
    // 0x22f058: 0x8c4421f0  lw          $a0, 0x21F0($v0)
    ctx->pc = 0x22f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8688)));
    // 0x22f05c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F060u;
    {
        const bool branch_taken_0x22f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F060u;
        // 0x22f064: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f060) {
            ctx->pc = 0x22F074u;
            goto label_22f074;
        }
    }
    ctx->pc = 0x22F068u;
label_22f068:
    // 0x22f068: 0x8c6221cc  lw          $v0, 0x21CC($v1)
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8652)));
    // 0x22f06c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f070: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22f070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22f074:
    // 0x22f074: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f078: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F078u;
    {
        const bool branch_taken_0x22f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F078u;
        // 0x22f07c: 0xae400604  sw          $zero, 0x604($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f078) {
            ctx->pc = 0x22F0A0u;
            goto label_22f0a0;
        }
    }
    ctx->pc = 0x22F080u;
    // 0x22f080: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F080u;
    {
        const bool branch_taken_0x22f080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f080) {
            ctx->pc = 0x22F0A0u;
            goto label_22f0a0;
        }
    }
    ctx->pc = 0x22F088u;
    // 0x22f088: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x22f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x22f08c: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22f090: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f094: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f098: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f09c: 0xe6400604  swc1        $f0, 0x604($s2)
    ctx->pc = 0x22f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
label_22f0a0:
    // 0x22f0a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22f0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0a8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22f0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f0ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0b0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22F0B0u;
    SET_GPR_U32(ctx, 31, 0x22F0B8u);
    ctx->pc = 0x22F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0B0u;
    // 0x22f0b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22F0B0u, 0x22F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0B8u;
label_22f0b8:
    // 0x22f0b8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22f0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22f0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f0c0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22f0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22f0c4:
    // 0x22f0c4: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f0c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F0C8u;
    {
        const bool branch_taken_0x22f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0c8) {
            ctx->pc = 0x22F0E4u;
            goto label_22f0e4;
        }
    }
    ctx->pc = 0x22F0D0u;
    // 0x22f0d0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F0D0u;
    {
        const bool branch_taken_0x22f0d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D0u;
        // 0x22f0d4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0d0) {
            ctx->pc = 0x22F0E4u;
            goto label_22f0e4;
        }
    }
    ctx->pc = 0x22F0D8u;
    // 0x22f0d8: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x22f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x22f0dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f0e0: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x22f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_22f0e4:
    // 0x22f0e4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22F0E4u;
    SET_GPR_U32(ctx, 31, 0x22F0ECu);
    ctx->pc = 0x22F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0E4u;
    // 0x22f0e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22F0E4u, 0x22F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0ECu;
label_22f0ec:
    // 0x22f0ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F0ECu;
    {
        const bool branch_taken_0x22f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0ec) {
            ctx->pc = 0x22F0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F0ECu;
            // 0x22f0f0: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F104u;
            goto label_22f104;
        }
    }
    ctx->pc = 0x22F0F4u;
    // 0x22f0f4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22f0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22f0f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f0fc: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22f0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22f100: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_22f104:
    // 0x22f104: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22F104u;
    {
        const bool branch_taken_0x22f104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f104) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22F10Cu;
    // 0x22f10c: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x22F10Cu;
    {
        const bool branch_taken_0x22f10c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f10c) {
            ctx->pc = 0x22F184u;
            goto label_22f184;
        }
    }
    ctx->pc = 0x22F114u;
    // 0x22f114: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x22f114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x22f118: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22F118u;
    {
        const bool branch_taken_0x22f118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f118) {
            ctx->pc = 0x22F11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F118u;
            // 0x22f11c: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F14Cu;
            goto label_22f14c;
        }
    }
    ctx->pc = 0x22F120u;
    // 0x22f120: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22F120u;
    SET_GPR_U32(ctx, 31, 0x22F128u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22F120u, 0x22F128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F128u;
label_22f128:
    // 0x22f128: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f130: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22f134: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22f134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22f138: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f13c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22f140: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22F140u;
    SET_GPR_U32(ctx, 31, 0x22F148u);
    ctx->pc = 0x22F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F140u;
    // 0x22f144: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22F140u, 0x22F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F148u;
label_22f148:
    // 0x22f148: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_22f14c:
    // 0x22f14c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x22f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x22f150: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F150u;
    {
        const bool branch_taken_0x22f150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f150) {
            ctx->pc = 0x22F154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F150u;
            // 0x22f154: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F174u;
            goto label_22f174;
        }
    }
    ctx->pc = 0x22F158u;
    // 0x22f158: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f15c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22f15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22f160: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f164: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22f164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22f168: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f16c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x22f170: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_22f174:
    // 0x22f174: 0xc6410604  lwc1        $f1, 0x604($s2)
    ctx->pc = 0x22f174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f178: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22f178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f17c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f180: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x22f180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_22f184:
    // 0x22f184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22f188: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22f188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22f18c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f190: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22F190u;
    SET_GPR_U32(ctx, 31, 0x22F198u);
    ctx->pc = 0x22F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F190u;
    // 0x22f194: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22F190u, 0x22F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F198u;
label_22f198:
    // 0x22f198: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22f198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22f19c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22F19Cu;
    SET_GPR_U32(ctx, 31, 0x22F1A4u);
    ctx->pc = 0x22F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F19Cu;
    // 0x22f1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22F19Cu, 0x22F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1A4u;
label_22f1a4:
    // 0x22f1a4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x22F1A4u;
    {
        const bool branch_taken_0x22f1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1A4u;
        // 0x22f1a8: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1a4) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F1ACu;
label_22f1ac:
    // 0x22f1ac: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x22f1acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x22f1b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F1B0u;
    {
        const bool branch_taken_0x22f1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1B0u;
        // 0x22f1b4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1b0) {
            ctx->pc = 0x22F1C4u;
            goto label_22f1c4;
        }
    }
    ctx->pc = 0x22F1B8u;
    // 0x22f1b8: 0x8c4321e4  lw          $v1, 0x21E4($v0)
    ctx->pc = 0x22f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8676)));
    // 0x22f1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x8c4421e8  lw          $a0, 0x21E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F1CCu;
            goto label_22f1cc;
        }
    }
    ctx->pc = 0x22F1C4u;
label_22f1c4:
    // 0x22f1c4: 0x8c4321d4  lw          $v1, 0x21D4($v0)
    ctx->pc = 0x22f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8660)));
    // 0x22f1c8: 0x8c4421d8  lw          $a0, 0x21D8($v0)
    ctx->pc = 0x22f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8664)));
label_22f1cc:
    // 0x22f1cc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22f1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f1d0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x22f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22f1d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22f1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22f1d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1dc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22f1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f1e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22f1e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22f1e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22F1E8u;
    SET_GPR_U32(ctx, 31, 0x22F1F0u);
    ctx->pc = 0x22F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1E8u;
    // 0x22f1ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22F1E8u, 0x22F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1F0u;
label_22f1f0:
    // 0x22f1f0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22f1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22f1f4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x22f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x22f1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f1fc: 0xc6420104  lwc1        $f2, 0x104($s2)
    ctx->pc = 0x22f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f204: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x22f204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x22f208: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22f208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22f20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f210: 0xe6410600  swc1        $f1, 0x600($s2)
    ctx->pc = 0x22f210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x22f214: 0xe6420608  swc1        $f2, 0x608($s2)
    ctx->pc = 0x22f214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1544), bits); }
    // 0x22f218: 0xe6400598  swc1        $f0, 0x598($s2)
    ctx->pc = 0x22f218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1432), bits); }
    // 0x22f21c: 0xe654060c  swc1        $f20, 0x60C($s2)
    ctx->pc = 0x22f21cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1548), bits); }
    // 0x22f220: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22f220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22f224: 0xe6540590  swc1        $f20, 0x590($s2)
    ctx->pc = 0x22f224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22f228: 0xe6540594  swc1        $f20, 0x594($s2)
    ctx->pc = 0x22f228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1428), bits); }
label_22f22c:
    // 0x22f22c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f230: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22F230u;
    {
        const bool branch_taken_0x22f230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f230) {
            ctx->pc = 0x22F234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F230u;
            // 0x22f234: 0xc6410618  lwc1        $f1, 0x618($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F264u;
            goto label_22f264;
        }
    }
    ctx->pc = 0x22F238u;
    // 0x22f238: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F238u;
    {
        const bool branch_taken_0x22f238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F238u;
        // 0x22f23c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f238) {
            ctx->pc = 0x22F250u;
            goto label_22f250;
        }
    }
    ctx->pc = 0x22F240u;
    // 0x22f240: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x22f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x22f244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f248: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x22f248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    // 0x22f24c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_22f250:
    // 0x22f250: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F250u;
            // 0x22f254: 0xc6410618  lwc1        $f1, 0x618($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F264u;
            goto label_22f264;
        }
    }
    ctx->pc = 0x22F258u;
    // 0x22f258: 0x16600030  bnez        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x22F258u;
    {
        const bool branch_taken_0x22f258 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f258) {
            ctx->pc = 0x22F31Cu;
            goto label_22f31c;
        }
    }
    ctx->pc = 0x22F260u;
    // 0x22f260: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x22f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22f264:
    // 0x22f264: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22f268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f26c: 0x0  nop
    ctx->pc = 0x22f26cu;
    // NOP
    // 0x22f270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22f270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f274: 0x0  nop
    ctx->pc = 0x22f274u;
    // NOP
    // 0x22f278: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x22F278u;
    {
        const bool branch_taken_0x22f278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f278) {
            ctx->pc = 0x22F27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F278u;
            // 0x22f27c: 0xc640060c  lwc1        $f0, 0x60C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F2C8u;
            goto label_22f2c8;
        }
    }
    ctx->pc = 0x22F280u;
    // 0x22f280: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22F280u;
    SET_GPR_U32(ctx, 31, 0x22F288u);
    ctx->pc = 0x22F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F280u;
    // 0x22f284: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22F280u, 0x22F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F288u;
label_22f288:
    // 0x22f288: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f290: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x22f290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x22f294: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x22f294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x22f298: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22f298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22f29c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22f2a0: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x22f2a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x22f2a4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22F2A4u;
    SET_GPR_U32(ctx, 31, 0x22F2ACu);
    ctx->pc = 0x22F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2A4u;
    // 0x22f2a8: 0xc64c0608  lwc1        $f12, 0x608($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22F2A4u, 0x22F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2ACu;
label_22f2ac:
    // 0x22f2ac: 0xc6410608  lwc1        $f1, 0x608($s2)
    ctx->pc = 0x22f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f2b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22f2b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f2b4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22f2b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22f2b8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22F2B8u;
    SET_GPR_U32(ctx, 31, 0x22F2C0u);
    ctx->pc = 0x22F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B8u;
    // 0x22f2bc: 0xe6410608  swc1        $f1, 0x608($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22F2B8u, 0x22F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2C0u;
label_22f2c0:
    // 0x22f2c0: 0xe6400608  swc1        $f0, 0x608($s2)
    ctx->pc = 0x22f2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1544), bits); }
    // 0x22f2c4: 0xc640060c  lwc1        $f0, 0x60C($s2)
    ctx->pc = 0x22f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22f2c8:
    // 0x22f2c8: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x22f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f2cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22f2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f2d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f2d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f2d4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22f2d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f2d8: 0x0  nop
    ctx->pc = 0x22f2d8u;
    // NOP
    // 0x22f2dc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x22F2DCu;
    {
        const bool branch_taken_0x22f2dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2DCu;
        // 0x22f2e0: 0xe640060c  swc1        $f0, 0x60C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2dc) {
            ctx->pc = 0x22F318u;
            goto label_22f318;
        }
    }
    ctx->pc = 0x22F2E4u;
    // 0x22f2e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x22f2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x22f2e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f2ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x22f2f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x22f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x22f2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f2f8: 0xe640060c  swc1        $f0, 0x60C($s2)
    ctx->pc = 0x22f2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1548), bits); }
    // 0x22f2fc: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x22f300: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22f300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f308: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f30c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22f30cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f310: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x22F310u;
    SET_GPR_U32(ctx, 31, 0x22F318u);
    ctx->pc = 0x22F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F310u;
    // 0x22f314: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x22F310u, 0x22F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F318u;
label_22f318:
    // 0x22f318: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_22f31c:
    // 0x22f31c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x22F31Cu;
    {
        const bool branch_taken_0x22f31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f31c) {
            ctx->pc = 0x22F3B0u;
            goto label_22f3b0;
        }
    }
    ctx->pc = 0x22F324u;
    // 0x22f324: 0x5260001e  beql        $s3, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F324u;
    {
        const bool branch_taken_0x22f324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f324) {
            ctx->pc = 0x22F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F324u;
            // 0x22f328: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F3A0u;
            goto label_22f3a0;
        }
    }
    ctx->pc = 0x22F32Cu;
    // 0x22f32c: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x22f330: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22F330u;
    {
        const bool branch_taken_0x22f330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f330) {
            ctx->pc = 0x22F334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F330u;
            // 0x22f334: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F364u;
            goto label_22f364;
        }
    }
    ctx->pc = 0x22F338u;
    // 0x22f338: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22F338u;
    SET_GPR_U32(ctx, 31, 0x22F340u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22F338u, 0x22F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F340u;
label_22f340:
    // 0x22f340: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f348: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22f34c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22f34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22f350: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f354: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22f354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22f358: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22F358u;
    SET_GPR_U32(ctx, 31, 0x22F360u);
    ctx->pc = 0x22F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F358u;
    // 0x22f35c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22F358u, 0x22F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F360u;
label_22f360:
    // 0x22f360: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_22f364:
    // 0x22f364: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x22f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x22f368: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F368u;
    {
        const bool branch_taken_0x22f368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f368) {
            ctx->pc = 0x22F36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F368u;
            // 0x22f36c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F38Cu;
            goto label_22f38c;
        }
    }
    ctx->pc = 0x22F370u;
    // 0x22f370: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f374: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22f378: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f37c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22f37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22f380: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f384: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22f384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x22f388: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_22f38c:
    // 0x22f38c: 0xc6410604  lwc1        $f1, 0x604($s2)
    ctx->pc = 0x22f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f390: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f394: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f398: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x22f398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22f39c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_22f3a0:
    // 0x22f3a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F3A0u;
    {
        const bool branch_taken_0x22f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3a0) {
            ctx->pc = 0x22F3B0u;
            goto label_22f3b0;
        }
    }
    ctx->pc = 0x22F3A8u;
    // 0x22f3a8: 0x16600023  bnez        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x22F3A8u;
    {
        const bool branch_taken_0x22f3a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3a8) {
            ctx->pc = 0x22F438u;
            goto label_22f438;
        }
    }
    ctx->pc = 0x22F3B0u;
label_22f3b0:
    // 0x22f3b0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22f3b4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x22f3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22f3b8: 0xc64c0608  lwc1        $f12, 0x608($s2)
    ctx->pc = 0x22f3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f3bc: 0xc051e62  jal         func_147988
    ctx->pc = 0x22F3BCu;
    SET_GPR_U32(ctx, 31, 0x22F3C4u);
    ctx->pc = 0x22F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3BCu;
    // 0x22f3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22F3BCu, 0x22F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3C4u;
label_22f3c4:
    // 0x22f3c4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x22f3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f3c8: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22f3cc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f3ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f3d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f3d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3dc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22F3DCu;
    SET_GPR_U32(ctx, 31, 0x22F3E4u);
    ctx->pc = 0x22F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3DCu;
    // 0x22f3e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22F3DCu, 0x22F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3E4u;
label_22f3e4:
    // 0x22f3e4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x22f3e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22f3e8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f3ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f3f0: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F3F0u;
    {
        const bool branch_taken_0x22f3f0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3F0u;
        // 0x22f3f4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3f0) {
            ctx->pc = 0x22F40Cu;
            goto label_22f40c;
        }
    }
    ctx->pc = 0x22F3F8u;
    // 0x22f3f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f3fc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x22f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f400: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22f400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22f404: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22f404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22f408: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22f408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22f40c:
    // 0x22f40c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f410: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22f410u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f414: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22f414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22f418: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22f418u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22f41c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22f41cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f420: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f424: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22f428: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f42c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22f42cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f430: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22f430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f434: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f434u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_22f438:
    // 0x22f438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22f43c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22f43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22f440: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22F440u;
    SET_GPR_U32(ctx, 31, 0x22F448u);
    ctx->pc = 0x22F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F440u;
    // 0x22f444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22F440u, 0x22F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F448u;
label_22f448:
    // 0x22f448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f44c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22F44Cu;
    SET_GPR_U32(ctx, 31, 0x22F454u);
    ctx->pc = 0x22F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F44Cu;
    // 0x22f450: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22F44Cu, 0x22F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F454u;
label_22f454:
    // 0x22f454: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22f454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22f458: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22F458u;
    SET_GPR_U32(ctx, 31, 0x22F460u);
    ctx->pc = 0x22F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F458u;
    // 0x22f45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22F458u, 0x22F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F460u;
label_22f460:
    // 0x22f460: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f464: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F464u;
    {
        const bool branch_taken_0x22f464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f464) {
            ctx->pc = 0x22F468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F464u;
            // 0x22f468: 0xc6400600  lwc1        $f0, 0x600($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F478u;
            goto label_22f478;
        }
    }
    ctx->pc = 0x22F46Cu;
    // 0x22f46c: 0x16600032  bnez        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x22F46Cu;
    {
        const bool branch_taken_0x22f46c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f46c) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F474u;
    // 0x22f474: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x22f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22f478:
    // 0x22f478: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x22f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f47c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22f47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f480: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f484: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22f484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f488: 0x0  nop
    ctx->pc = 0x22f488u;
    // NOP
    // 0x22f48c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x22F48Cu;
    {
        const bool branch_taken_0x22f48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F48Cu;
        // 0x22f490: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f48c) {
            ctx->pc = 0x22F534u;
            goto label_22f534;
        }
    }
    ctx->pc = 0x22F494u;
    // 0x22f494: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f498: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x22F498u;
    {
        const bool branch_taken_0x22f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F498u;
        // 0x22f49c: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f498) {
            ctx->pc = 0x22F534u;
            goto label_22f534;
        }
    }
    ctx->pc = 0x22F4A0u;
label_22f4a0:
    // 0x22f4a0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22f4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22f4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f4ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4b0: 0x8c4521dc  lw          $a1, 0x21DC($v0)
    ctx->pc = 0x22f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8668)));
    // 0x22f4b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f4b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4b8: 0x8c4621e0  lw          $a2, 0x21E0($v0)
    ctx->pc = 0x22f4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
    // 0x22f4bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22f4c4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22F4C4u;
    SET_GPR_U32(ctx, 31, 0x22F4CCu);
    ctx->pc = 0x22F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4C4u;
    // 0x22f4c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22F4C4u, 0x22F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4CCu;
label_22f4cc:
    // 0x22f4cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x22f4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4d4: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x22f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x22f4d8: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x22F4D8u;
    SET_GPR_U32(ctx, 31, 0x22F4E0u);
    ctx->pc = 0x22F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4D8u;
    // 0x22f4dc: 0xae4205b4  sw          $v0, 0x5B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x22F4D8u, 0x22F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4E0u;
label_22f4e0:
    // 0x22f4e0: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x22f4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22f4e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22f4e8: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x22f4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_22f4ec:
    // 0x22f4ec: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x22f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x22f4f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22f4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4f4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22F4F4u;
    SET_GPR_U32(ctx, 31, 0x22F4FCu);
    ctx->pc = 0x22F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4F4u;
    // 0x22f4f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22F4F4u, 0x22F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4FCu;
label_22f4fc:
    // 0x22f4fc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22F4FCu;
    SET_GPR_U32(ctx, 31, 0x22F504u);
    ctx->pc = 0x22F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4FCu;
    // 0x22f500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22F4FCu, 0x22F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F504u;
label_22f504:
    // 0x22f504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F504u;
    {
        const bool branch_taken_0x22f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f504) {
            ctx->pc = 0x22F514u;
            goto label_22f514;
        }
    }
    ctx->pc = 0x22F50Cu;
    // 0x22f50c: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x22F50Cu;
    SET_GPR_U32(ctx, 31, 0x22F514u);
    ctx->pc = 0x22F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F50Cu;
    // 0x22f510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x22F50Cu, 0x22F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F514u;
label_22f514:
    // 0x22f514: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22f518: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22f518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22f51c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f520: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22F520u;
    SET_GPR_U32(ctx, 31, 0x22F528u);
    ctx->pc = 0x22F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F520u;
    // 0x22f524: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22F520u, 0x22F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F528u;
label_22f528:
    // 0x22f528: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22f528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22f52c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22F52Cu;
    SET_GPR_U32(ctx, 31, 0x22F534u);
    ctx->pc = 0x22F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F52Cu;
    // 0x22f530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22F52Cu, 0x22F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F534u;
label_22f534:
    // 0x22f534: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_22f538:
    // 0x22f538: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F538u;
    {
        const bool branch_taken_0x22f538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f538) {
            ctx->pc = 0x22F570u;
            goto label_22f570;
        }
    }
    ctx->pc = 0x22F540u;
    // 0x22f540: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22f540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x22f544: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F548u;
    {
        const bool branch_taken_0x22f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F548u;
        // 0x22f54c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f548) {
            ctx->pc = 0x22F570u;
            goto label_22f570;
        }
    }
    ctx->pc = 0x22F550u;
    // 0x22f550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f554: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x22f554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x22f558: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22f55c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f560: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22F560u;
    SET_GPR_U32(ctx, 31, 0x22F568u);
    ctx->pc = 0x22F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F560u;
    // 0x22f564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22F560u, 0x22F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F568u;
label_22f568:
    // 0x22f568: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22F568u;
    SET_GPR_U32(ctx, 31, 0x22F570u);
    ctx->pc = 0x22F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F568u;
    // 0x22f56c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22F568u, 0x22F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F570u;
label_22f570:
    // 0x22f570: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x22F570u;
    {
        const bool branch_taken_0x22f570 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F570u;
        // 0x22f574: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f570) {
            ctx->pc = 0x22F67Cu;
            goto label_22f67c;
        }
    }
    ctx->pc = 0x22F578u;
    // 0x22f578: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22f578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22f57c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22f57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x22f580: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x22F580u;
    {
        const bool branch_taken_0x22f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F580u;
        // 0x22f584: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f580) {
            ctx->pc = 0x22F680u;
            goto label_22f680;
        }
    }
    ctx->pc = 0x22F588u;
    // 0x22f588: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x22f588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f58c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22F58Cu;
    {
        const bool branch_taken_0x22f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F58Cu;
        // 0x22f590: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f58c) {
            ctx->pc = 0x22F680u;
            goto label_22f680;
        }
    }
    ctx->pc = 0x22F594u;
    // 0x22f594: 0x926202f4  lbu         $v0, 0x2F4($s3)
    ctx->pc = 0x22f594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 756)));
    // 0x22f598: 0xde6302f0  ld          $v1, 0x2F0($s3)
    ctx->pc = 0x22f598u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 752)));
    // 0x22f59c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22f59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5a0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x22f5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f5a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x22f5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f5a8: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x22f5a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x22f5ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22f5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x22f5b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x22f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22f5b4: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x22f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x22f5b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F5B8u;
    {
        const bool branch_taken_0x22f5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f5b8) {
            ctx->pc = 0x22F5CCu;
            goto label_22f5cc;
        }
    }
    ctx->pc = 0x22F5C0u;
    // 0x22f5c0: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x22f5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x22f5c4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22f5c8: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x22f5c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_22f5cc:
    // 0x22f5cc: 0x50a0002b  beql        $a1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x22F5CCu;
    {
        const bool branch_taken_0x22f5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f5cc) {
            ctx->pc = 0x22F5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F5CCu;
            // 0x22f5d0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F67Cu;
            goto label_22f67c;
        }
    }
    ctx->pc = 0x22F5D4u;
    // 0x22f5d4: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x22f5d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x22f5d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22f5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22f5dc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22F5DCu;
    {
        const bool branch_taken_0x22f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5DCu;
        // 0x22f5e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5dc) {
            ctx->pc = 0x22F660u;
            goto label_22f660;
        }
    }
    ctx->pc = 0x22F5E4u;
    // 0x22f5e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22f5e8: 0x24428e50  addiu       $v0, $v0, -0x71B0
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938192));
    // 0x22f5ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f5f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f5f4: 0x800008  jr          $a0
    ctx->pc = 0x22F5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F5FCu: goto label_22f5fc;
            case 0x22F610u: goto label_22f610;
            case 0x22F624u: goto label_22f624;
            case 0x22F638u: goto label_22f638;
            case 0x22F660u: goto label_22f660;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F5F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22F5FCu;
label_22f5fc:
    // 0x22f5fc: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x22f5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x22f600: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x22f600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x22f604: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f608: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22F608u;
    {
        const bool branch_taken_0x22f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f608) {
            ctx->pc = 0x22F648u;
            goto label_22f648;
        }
    }
    ctx->pc = 0x22F610u;
label_22f610:
    // 0x22f610: 0x3c01bf5f  lui         $at, 0xBF5F
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48991 << 16));
    // 0x22f614: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x22f614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x22f618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f61c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22F61Cu;
    {
        const bool branch_taken_0x22f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F61Cu;
        // 0x22f620: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f61c) {
            ctx->pc = 0x22F648u;
            goto label_22f648;
        }
    }
    ctx->pc = 0x22F624u;
label_22f624:
    // 0x22f624: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x22f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x22f628: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x22f628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x22f62c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F630u;
    {
        const bool branch_taken_0x22f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F630u;
        // 0x22f634: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f630) {
            ctx->pc = 0x22F648u;
            goto label_22f648;
        }
    }
    ctx->pc = 0x22F638u;
label_22f638:
    // 0x22f638: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x22f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f63c: 0x3c01bfdf  lui         $at, 0xBFDF
    ctx->pc = 0x22f63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49119 << 16));
    // 0x22f640: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x22f640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x22f644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22f648:
    // 0x22f648: 0x0  nop
    ctx->pc = 0x22f648u;
    // NOP
    // 0x22f64c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f650: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22f650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22f654: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22F654u;
    SET_GPR_U32(ctx, 31, 0x22F65Cu);
    ctx->pc = 0x22F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F654u;
    // 0x22f658: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22F654u, 0x22F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F65Cu;
label_22f65c:
    // 0x22f65c: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22f65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_22f660:
    // 0x22f660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f664: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f668: 0xa24302f7  sb          $v1, 0x2F7($s2)
    ctx->pc = 0x22f668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f66c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x22f66cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x22f670: 0xa24302f4  sb          $v1, 0x2F4($s2)
    ctx->pc = 0x22f670u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f674: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x22f674u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f678: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x22f678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22f67c:
    // 0x22f67c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x22f67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22f680:
    // 0x22f680: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x22f680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f684: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x22f684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f688: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22f688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f68c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x22f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f690: 0x3e00008  jr          $ra
    ctx->pc = 0x22F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F690u;
        // 0x22f694: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F698u;
}
