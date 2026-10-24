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

// Function: func_0022DFF0
// Address: 0x22dff0 - 0x22e6a0
void func_0022DFF0_0x22dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022DFF0_0x22dff0");
#endif

    switch (ctx->pc) {
        case 0x22e034u: goto label_22e034;
        case 0x22e098u: goto label_22e098;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e240u: goto label_22e240;
        case 0x22e260u: goto label_22e260;
        case 0x22e294u: goto label_22e294;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e434u: goto label_22e434;
        case 0x22e480u: goto label_22e480;
        case 0x22e4c0u: goto label_22e4c0;
        case 0x22e4ccu: goto label_22e4cc;
        case 0x22e500u: goto label_22e500;
        case 0x22e518u: goto label_22e518;
        case 0x22e588u: goto label_22e588;
        case 0x22e594u: goto label_22e594;
        case 0x22e5a0u: goto label_22e5a0;
        case 0x22e618u: goto label_22e618;
        case 0x22e63cu: goto label_22e63c;
        case 0x22e650u: goto label_22e650;
        case 0x22e660u: goto label_22e660;
        case 0x22e674u: goto label_22e674;
        case 0x22e680u: goto label_22e680;
        default: break;
    }

    ctx->pc = 0x22dff0u;

    // 0x22dff0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22dff4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x22dff8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22dffc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22dffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e000: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22e000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22e004: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22e004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22e008: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22e00c: 0x8e5106b4  lw          $s1, 0x6B4($s2)
    ctx->pc = 0x22e00cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1716)));
    // 0x22e010: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22e014: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x22e014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x22e018: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22e018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22e01c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22e020: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22e020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e024: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22e028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e02c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22E02Cu;
    SET_GPR_U32(ctx, 31, 0x22E034u);
    ctx->pc = 0x22E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E02Cu;
    // 0x22e030: 0xae4216d4  sw          $v0, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22E02Cu, 0x22E034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E034u;
label_22e034:
    // 0x22e034: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x22e034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e038: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x22e038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x22e03c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e040: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x22e040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x22e044: 0x1040018e  beqz        $v0, . + 4 + (0x18E << 2)
    ctx->pc = 0x22E044u;
    {
        const bool branch_taken_0x22e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E044u;
        // 0x22e048: 0xe6401720  swc1        $f0, 0x1720($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e044) {
            ctx->pc = 0x22E680u;
            goto label_22e680;
        }
    }
    ctx->pc = 0x22E04Cu;
    // 0x22e04c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22e050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e054: 0x24428d90  addiu       $v0, $v0, -0x7270
    ctx->pc = 0x22e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938000));
    // 0x22e058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e05c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e060: 0x800008  jr          $a0
    ctx->pc = 0x22E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E068u: goto label_22e068;
            case 0x22E114u: goto label_22e114;
            case 0x22E210u: goto label_22e210;
            case 0x22E2FCu: goto label_22e2fc;
            case 0x22E408u: goto label_22e408;
            case 0x22E440u: goto label_22e440;
            case 0x22E4D4u: goto label_22e4d4;
            case 0x22E540u: goto label_22e540;
            case 0x22E5E4u: goto label_22e5e4;
            case 0x22E648u: goto label_22e648;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E068u;
label_22e068:
    // 0x22e068: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22e06c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e070: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x22e070u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e074: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22e074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e078: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e07c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e080: 0x8c45215c  lw          $a1, 0x215C($v0)
    ctx->pc = 0x22e080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x22e084: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e088: 0x8c462160  lw          $a2, 0x2160($v0)
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8544)));
    // 0x22e08c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e090: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22E090u;
    SET_GPR_U32(ctx, 31, 0x22E098u);
    ctx->pc = 0x22E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E090u;
    // 0x22e094: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22E090u, 0x22E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E098u;
label_22e098:
    // 0x22e098: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e09c: 0x26430580  addiu       $v1, $s2, 0x580
    ctx->pc = 0x22e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22e0a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e0a4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x22e0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22e0a8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e0a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e0ac: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x22e0acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e0b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e0b4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e0b8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x22e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e0bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e0bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e0c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e0c4: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22e0c8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E0C8u;
    {
        const bool branch_taken_0x22e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x22E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0C8u;
        // 0x22e0cc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0c8) {
            ctx->pc = 0x22E0E4u;
            goto label_22e0e4;
        }
    }
    ctx->pc = 0x22E0D0u;
    // 0x22e0d0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e0d4: 0xe6400590  swc1        $f0, 0x590($s2)
    ctx->pc = 0x22e0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22e0d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22e0d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22e0dc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x22e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e0e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22e0e4:
    // 0x22e0e4: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x22e0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x22e0e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22e0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22e0ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e0f0: 0xda440590  lqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22e0f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x22e0f4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22e0f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22e0f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22e0f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22e0fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22e0fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e100: 0xfa440590  sqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22e100u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e104: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e108: 0xae4005f0  sw          $zero, 0x5F0($s2)
    ctx->pc = 0x22e108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
    // 0x22e10c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e110: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e110u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e114:
    // 0x22e114: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22e114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22e118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e11c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22e11cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x22e120: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22e124: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22E124u;
    {
        const bool branch_taken_0x22e124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E124u;
        // 0x22e128: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e124) {
            ctx->pc = 0x22E1A0u;
            goto label_22e1a0;
        }
    }
    ctx->pc = 0x22E12Cu;
    // 0x22e12c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e134: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22e134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22e138: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e13c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e140: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x22e140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22e144: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22E144u;
    SET_GPR_U32(ctx, 31, 0x22E14Cu);
    ctx->pc = 0x22E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E144u;
    // 0x22e148: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22E144u, 0x22E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E14Cu;
label_22e14c:
    // 0x22e14c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22e14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e150: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e154: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22e158: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e15c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e160: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22e160u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e164: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22e164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22e168: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22e168u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22e16c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22e16cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e170: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22e170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e174: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e178: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e17c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x22e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e180: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e184: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22e184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e188: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x22e188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e18c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e18cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e190: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22e190u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e198: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22E198u;
    {
        const bool branch_taken_0x22e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E198u;
        // 0x22e19c: 0xae4305f0  sw          $v1, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e198) {
            ctx->pc = 0x22E1F4u;
            goto label_22e1f4;
        }
    }
    ctx->pc = 0x22E1A0u;
label_22e1a0:
    // 0x22e1a0: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x22e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x22e1a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22E1A4u;
    {
        const bool branch_taken_0x22e1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1A4u;
        // 0x22e1a8: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1a4) {
            ctx->pc = 0x22E1D8u;
            goto label_22e1d8;
        }
    }
    ctx->pc = 0x22E1ACu;
    // 0x22e1ac: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22E1ACu;
    {
        const bool branch_taken_0x22e1ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1ac) {
            ctx->pc = 0x22E1D8u;
            goto label_22e1d8;
        }
    }
    ctx->pc = 0x22E1B4u;
    // 0x22e1b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1b8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22e1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22e1bc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e1c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e1c4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x22e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22e1c8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22E1C8u;
    SET_GPR_U32(ctx, 31, 0x22E1D0u);
    ctx->pc = 0x22E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1C8u;
    // 0x22e1cc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22E1C8u, 0x22E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1D0u;
label_22e1d0:
    // 0x22e1d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22E1D0u;
    {
        const bool branch_taken_0x22e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1d0) {
            ctx->pc = 0x22E1F4u;
            goto label_22e1f4;
        }
    }
    ctx->pc = 0x22E1D8u;
label_22e1d8:
    // 0x22e1d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1dc: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22e1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22e1e0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e1e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e1e8: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x22e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22e1ec: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22E1ECu;
    SET_GPR_U32(ctx, 31, 0x22E1F4u);
    ctx->pc = 0x22E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1ECu;
    // 0x22e1f0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22E1ECu, 0x22E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1F4u;
label_22e1f4:
    // 0x22e1f4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22E1F4u;
    SET_GPR_U32(ctx, 31, 0x22E1FCu);
    ctx->pc = 0x22E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1F4u;
    // 0x22e1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22E1F4u, 0x22E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E1FCu;
label_22e1fc:
    // 0x22e1fc: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x22E1FCu;
    {
        const bool branch_taken_0x22e1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e1fc) {
            ctx->pc = 0x22E4ACu;
            goto label_22e4ac;
        }
    }
    ctx->pc = 0x22E204u;
    // 0x22e204: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e208: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x22E208u;
    {
        const bool branch_taken_0x22e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E208u;
        // 0x22e20c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e208) {
            ctx->pc = 0x22E4A8u;
            goto label_22e4a8;
        }
    }
    ctx->pc = 0x22E210u;
label_22e210:
    // 0x22e210: 0x8e460304  lw          $a2, 0x304($s2)
    ctx->pc = 0x22e210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22e214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e218: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22e218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22e21c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e220: 0x8cc5216c  lw          $a1, 0x216C($a2)
    ctx->pc = 0x22e220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8556)));
    // 0x22e224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e228: 0x8cc22170  lw          $v0, 0x2170($a2)
    ctx->pc = 0x22e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8560)));
    // 0x22e22c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22e22cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22e230: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22e234: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e234u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e238: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22E238u;
    SET_GPR_U32(ctx, 31, 0x22E240u);
    ctx->pc = 0x22E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E238u;
    // 0x22e23c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22E238u, 0x22E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E240u;
label_22e240:
    // 0x22e240: 0xe6540590  swc1        $f20, 0x590($s2)
    ctx->pc = 0x22e240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22e244: 0xe6540594  swc1        $f20, 0x594($s2)
    ctx->pc = 0x22e244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1428), bits); }
    // 0x22e248: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x22E248u;
    {
        const bool branch_taken_0x22e248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E248u;
        // 0x22e24c: 0xe6540598  swc1        $f20, 0x598($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e248) {
            ctx->pc = 0x22E2F0u;
            goto label_22e2f0;
        }
    }
    ctx->pc = 0x22E250u;
    // 0x22e250: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x22e250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22e254: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x22e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22e258: 0xc051e62  jal         func_147988
    ctx->pc = 0x22E258u;
    SET_GPR_U32(ctx, 31, 0x22E260u);
    ctx->pc = 0x22E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E258u;
    // 0x22e25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22E258u, 0x22E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E260u;
label_22e260:
    // 0x22e260: 0x3c01be88  lui         $at, 0xBE88
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48776 << 16));
    // 0x22e264: 0x342116f0  ori         $at, $at, 0x16F0
    ctx->pc = 0x22e264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5872);
    // 0x22e268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e270: 0x3c01406e  lui         $at, 0x406E
    ctx->pc = 0x22e270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16494 << 16));
    // 0x22e274: 0x342117c2  ori         $at, $at, 0x17C2
    ctx->pc = 0x22e274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6082);
    // 0x22e278: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22e278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e27c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e280: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22e280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22e284: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22e284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e288: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x22e288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22e28c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22E28Cu;
    SET_GPR_U32(ctx, 31, 0x22E294u);
    ctx->pc = 0x22E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E28Cu;
    // 0x22e290: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22E28Cu, 0x22E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E294u;
label_22e294:
    // 0x22e294: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e298: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22e298u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e29c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x22e29cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e2a0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e2a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e2a4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e2a8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x22e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22e2ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e2b0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x22e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22e2b4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e2b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e2b8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22e2b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e2bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e2bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e2c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e2c4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x22e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e2c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e2c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e2cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e2d0: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22e2d4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E2D4u;
    {
        const bool branch_taken_0x22e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2D4u;
        // 0x22e2d8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2d4) {
            ctx->pc = 0x22E2F0u;
            goto label_22e2f0;
        }
    }
    ctx->pc = 0x22E2DCu;
    // 0x22e2dc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e2e0: 0xe6400590  swc1        $f0, 0x590($s2)
    ctx->pc = 0x22e2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22e2e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22e2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22e2e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x22e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e2ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22e2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22e2f0:
    // 0x22e2f0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e2f8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e2fc:
    // 0x22e2fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22e2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22e300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e304: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22e304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x22e308: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22e30c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x22E30Cu;
    {
        const bool branch_taken_0x22e30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E30Cu;
        // 0x22e310: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e30c) {
            ctx->pc = 0x22E3BCu;
            goto label_22e3bc;
        }
    }
    ctx->pc = 0x22E314u;
    // 0x22e314: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x22e318: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22e318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22e31c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e320: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x22e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22e324: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22e328: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e32c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x22e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e330: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x22e330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e334: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22e334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22e338: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22e338u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22e33c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22e33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e340: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x22e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e344: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e344u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e348: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x22e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e34c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e350: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x22e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e354: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e358: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x22e358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e35c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x22e35cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e360: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22e360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22e364: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22e364u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22e368: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22e368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e36c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x22e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e370: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e374: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e378: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e37c: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E37Cu;
    {
        const bool branch_taken_0x22e37c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E37Cu;
        // 0x22e380: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e37c) {
            ctx->pc = 0x22E398u;
            goto label_22e398;
        }
    }
    ctx->pc = 0x22E384u;
    // 0x22e384: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e388: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x22e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e38c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22e38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22e390: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22e390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22e394: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22e394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22e398:
    // 0x22e398: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22e398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e39c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e39cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e3a0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22e3a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e3a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e3a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e3a8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e3ac: 0xda440590  lqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22e3acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x22e3b0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22e3b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e3b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e3b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e3b8: 0xfa440590  sqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
label_22e3bc:
    // 0x22e3bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22E3BCu;
    SET_GPR_U32(ctx, 31, 0x22E3C4u);
    ctx->pc = 0x22E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3BCu;
    // 0x22e3c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22E3BCu, 0x22E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3C4u;
label_22e3c4:
    // 0x22e3c4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x22E3C4u;
    {
        const bool branch_taken_0x22e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3c4) {
            ctx->pc = 0x22E4ACu;
            goto label_22e4ac;
        }
    }
    ctx->pc = 0x22E3CCu;
    // 0x22e3cc: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22E3CCu;
    {
        const bool branch_taken_0x22e3cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3cc) {
            ctx->pc = 0x22E3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E3CCu;
            // 0x22e3d0: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E400u;
            goto label_22e400;
        }
    }
    ctx->pc = 0x22E3D4u;
    // 0x22e3d4: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x22e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22e3d8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e3dc: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E3DCu;
    {
        const bool branch_taken_0x22e3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22e3dc) {
            ctx->pc = 0x22E3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E3DCu;
            // 0x22e3e0: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E400u;
            goto label_22e400;
        }
    }
    ctx->pc = 0x22E3E4u;
    // 0x22e3e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x22e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e3e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x22e3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x22e3ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x22e3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e3f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22e3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22e3f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e3f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22e3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x22e3fc: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_22e400:
    // 0x22e400: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x22E400u;
    {
        const bool branch_taken_0x22e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E400u;
        // 0x22e404: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e400) {
            ctx->pc = 0x22E4A8u;
            goto label_22e4a8;
        }
    }
    ctx->pc = 0x22E408u;
label_22e408:
    // 0x22e408: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22e40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e418: 0x8c452194  lw          $a1, 0x2194($v0)
    ctx->pc = 0x22e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8596)));
    // 0x22e41c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e41cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e420: 0x8c462198  lw          $a2, 0x2198($v0)
    ctx->pc = 0x22e420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8600)));
    // 0x22e424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e428: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e42c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22E42Cu;
    SET_GPR_U32(ctx, 31, 0x22E434u);
    ctx->pc = 0x22E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E42Cu;
    // 0x22e430: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22E42Cu, 0x22E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E434u;
label_22e434:
    // 0x22e434: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e43c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e43cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e440:
    // 0x22e440: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x22E440u;
    {
        const bool branch_taken_0x22e440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e440) {
            ctx->pc = 0x22E478u;
            goto label_22e478;
        }
    }
    ctx->pc = 0x22E448u;
    // 0x22e448: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22e448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e44c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22e450: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E450u;
    {
        const bool branch_taken_0x22e450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22e450) {
            ctx->pc = 0x22E454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E450u;
            // 0x22e454: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E474u;
            goto label_22e474;
        }
    }
    ctx->pc = 0x22E458u;
    // 0x22e458: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e45c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22e45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22e460: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22e460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e464: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22e464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22e468: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e46c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22e46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x22e470: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x22e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e474:
    // 0x22e474: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22e474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_22e478:
    // 0x22e478: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22E478u;
    SET_GPR_U32(ctx, 31, 0x22E480u);
    ctx->pc = 0x22E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E478u;
    // 0x22e47c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22E478u, 0x22E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E480u;
label_22e480:
    // 0x22e480: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E480u;
    {
        const bool branch_taken_0x22e480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e480) {
            ctx->pc = 0x22E494u;
            goto label_22e494;
        }
    }
    ctx->pc = 0x22E488u;
    // 0x22e488: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e48c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e490: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e490u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e494:
    // 0x22e494: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E494u;
    {
        const bool branch_taken_0x22e494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e494) {
            ctx->pc = 0x22E4ACu;
            goto label_22e4ac;
        }
    }
    ctx->pc = 0x22E49Cu;
    // 0x22e49c: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x22e49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x22e4a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E4A0u;
    {
        const bool branch_taken_0x22e4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4A0u;
        // 0x22e4a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4a0) {
            ctx->pc = 0x22E4ACu;
            goto label_22e4ac;
        }
    }
    ctx->pc = 0x22E4A8u;
label_22e4a8:
    // 0x22e4a8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e4ac:
    // 0x22e4ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e4b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22e4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22e4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22E4B8u;
    SET_GPR_U32(ctx, 31, 0x22E4C0u);
    ctx->pc = 0x22E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4B8u;
    // 0x22e4bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22E4B8u, 0x22E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4C0u;
label_22e4c0:
    // 0x22e4c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22E4C4u;
    SET_GPR_U32(ctx, 31, 0x22E4CCu);
    ctx->pc = 0x22E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4C4u;
    // 0x22e4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22E4C4u, 0x22E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4CCu;
label_22e4cc:
    // 0x22e4cc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22E4CCu;
    {
        const bool branch_taken_0x22e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4CCu;
        // 0x22e4d0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4cc) {
            ctx->pc = 0x22E684u;
            goto label_22e684;
        }
    }
    ctx->pc = 0x22E4D4u;
label_22e4d4:
    // 0x22e4d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22e4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e4e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4e4: 0x8c45217c  lw          $a1, 0x217C($v0)
    ctx->pc = 0x22e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8572)));
    // 0x22e4e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e4e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4ec: 0x8c462180  lw          $a2, 0x2180($v0)
    ctx->pc = 0x22e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8576)));
    // 0x22e4f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e4f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e4f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e4f8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22E4F8u;
    SET_GPR_U32(ctx, 31, 0x22E500u);
    ctx->pc = 0x22E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4F8u;
    // 0x22e4fc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22E4F8u, 0x22E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E500u;
label_22e500:
    // 0x22e500: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x22e504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e508: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22e508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22e50c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22e510: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22E510u;
    SET_GPR_U32(ctx, 31, 0x22E518u);
    ctx->pc = 0x22E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E510u;
    // 0x22e514: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22E510u, 0x22E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E518u;
label_22e518:
    // 0x22e518: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22e518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22e51c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E51Cu;
    {
        const bool branch_taken_0x22e51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22e51c) {
            ctx->pc = 0x22E520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E51Cu;
            // 0x22e520: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E538u;
            goto label_22e538;
        }
    }
    ctx->pc = 0x22E524u;
    // 0x22e524: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x22e528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e52c: 0x0  nop
    ctx->pc = 0x22e52cu;
    // NOP
    // 0x22e530: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x22e530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x22e534: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_22e538:
    // 0x22e538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e53c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e53cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e540:
    // 0x22e540: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x22E540u;
    {
        const bool branch_taken_0x22e540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e540) {
            ctx->pc = 0x22E578u;
            goto label_22e578;
        }
    }
    ctx->pc = 0x22E548u;
    // 0x22e548: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22e54c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22e550: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E550u;
    {
        const bool branch_taken_0x22e550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22e550) {
            ctx->pc = 0x22E554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E550u;
            // 0x22e554: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E574u;
            goto label_22e574;
        }
    }
    ctx->pc = 0x22E558u;
    // 0x22e558: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e55c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22e55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22e560: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22e560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e564: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x22e564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x22e568: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e56c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x22e56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x22e570: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x22e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e574:
    // 0x22e574: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22e574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_22e578:
    // 0x22e578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e57c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22e57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22e580: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22E580u;
    SET_GPR_U32(ctx, 31, 0x22E588u);
    ctx->pc = 0x22E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E580u;
    // 0x22e584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22E580u, 0x22E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E588u;
label_22e588:
    // 0x22e588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e58c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22E58Cu;
    SET_GPR_U32(ctx, 31, 0x22E594u);
    ctx->pc = 0x22E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E58Cu;
    // 0x22e590: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22E58Cu, 0x22E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E594u;
label_22e594:
    // 0x22e594: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22e594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22e598: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22E598u;
    SET_GPR_U32(ctx, 31, 0x22E5A0u);
    ctx->pc = 0x22E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E598u;
    // 0x22e59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22E598u, 0x22E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5A0u;
label_22e5a0:
    // 0x22e5a0: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x22e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e5a4: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x22e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e5a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22e5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22e5ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e5b0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22e5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e5b4: 0x0  nop
    ctx->pc = 0x22e5b4u;
    // NOP
    // 0x22e5b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22E5B8u;
    {
        const bool branch_taken_0x22e5b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5B8u;
        // 0x22e5bc: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5b8) {
            ctx->pc = 0x22E5C8u;
            goto label_22e5c8;
        }
    }
    ctx->pc = 0x22E5C0u;
    // 0x22e5c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e5c4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e5c8:
    // 0x22e5c8: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x22E5C8u;
    {
        const bool branch_taken_0x22e5c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5C8u;
        // 0x22e5cc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5c8) {
            ctx->pc = 0x22E684u;
            goto label_22e684;
        }
    }
    ctx->pc = 0x22E5D0u;
    // 0x22e5d0: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x22e5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x22e5d4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x22E5D4u;
    {
        const bool branch_taken_0x22e5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5D4u;
        // 0x22e5d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5d4) {
            ctx->pc = 0x22E684u;
            goto label_22e684;
        }
    }
    ctx->pc = 0x22E5DCu;
    // 0x22e5dc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x22E5DCu;
    {
        const bool branch_taken_0x22e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5DCu;
        // 0x22e5e0: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5dc) {
            ctx->pc = 0x22E684u;
            goto label_22e684;
        }
    }
    ctx->pc = 0x22E5E4u;
label_22e5e4:
    // 0x22e5e4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x22e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e5e8: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x22e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x22e5ec: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e5ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e5f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22e5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e5f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22e5f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22e5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22e5fc: 0x8c502184  lw          $s0, 0x2184($v0)
    ctx->pc = 0x22e5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8580)));
    // 0x22e600: 0x8c512188  lw          $s1, 0x2188($v0)
    ctx->pc = 0x22e600u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8584)));
    // 0x22e604: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22e604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22e608: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22e608u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22e60c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x22e60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22e610: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22E610u;
    SET_GPR_U32(ctx, 31, 0x22E618u);
    ctx->pc = 0x22E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E610u;
    // 0x22e614: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22E610u, 0x22E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E618u;
label_22e618:
    // 0x22e618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e61c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22e61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e620: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x22e624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22e624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e634: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22E634u;
    SET_GPR_U32(ctx, 31, 0x22E63Cu);
    ctx->pc = 0x22E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E634u;
    // 0x22e638: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22E634u, 0x22E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E63Cu;
label_22e63c:
    // 0x22e63c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22e63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22e640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e644: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22e644u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e648:
    // 0x22e648: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22E648u;
    SET_GPR_U32(ctx, 31, 0x22E650u);
    ctx->pc = 0x22E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E648u;
    // 0x22e64c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22E648u, 0x22E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E650u;
label_22e650:
    // 0x22e650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E650u;
    {
        const bool branch_taken_0x22e650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e650) {
            ctx->pc = 0x22E660u;
            goto label_22e660;
        }
    }
    ctx->pc = 0x22E658u;
    // 0x22e658: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x22E658u;
    SET_GPR_U32(ctx, 31, 0x22E660u);
    ctx->pc = 0x22E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E658u;
    // 0x22e65c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x22E658u, 0x22E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E660u;
label_22e660:
    // 0x22e660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e664: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22e664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22e668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e66c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22E66Cu;
    SET_GPR_U32(ctx, 31, 0x22E674u);
    ctx->pc = 0x22E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E66Cu;
    // 0x22e670: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22E66Cu, 0x22E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E674u;
label_22e674:
    // 0x22e674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e678: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22E678u;
    SET_GPR_U32(ctx, 31, 0x22E680u);
    ctx->pc = 0x22E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E678u;
    // 0x22e67c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22E678u, 0x22E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E680u;
label_22e680:
    // 0x22e680: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22e680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22e684:
    // 0x22e684: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22e684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22e688: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22e688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22e68c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22e68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e690: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e694: 0x3e00008  jr          $ra
    ctx->pc = 0x22E694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E694u;
        // 0x22e698: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E69Cu;
    // 0x22e69c: 0x0  nop
    ctx->pc = 0x22e69cu;
    // NOP
    ctx->pc = 0x22e6a0u;
}
