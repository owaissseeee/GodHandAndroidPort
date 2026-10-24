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

// Function: func_0022D938
// Address: 0x22d938 - 0x22dff0
void func_0022D938_0x22d938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022D938_0x22d938");
#endif

    switch (ctx->pc) {
        case 0x22d97cu: goto label_22d97c;
        case 0x22d9e4u: goto label_22d9e4;
        case 0x22da94u: goto label_22da94;
        case 0x22db14u: goto label_22db14;
        case 0x22db38u: goto label_22db38;
        case 0x22db74u: goto label_22db74;
        case 0x22dbc4u: goto label_22dbc4;
        case 0x22dbd8u: goto label_22dbd8;
        case 0x22dbecu: goto label_22dbec;
        case 0x22dc00u: goto label_22dc00;
        case 0x22dc34u: goto label_22dc34;
        case 0x22dca0u: goto label_22dca0;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dd00u: goto label_22dd00;
        case 0x22dd30u: goto label_22dd30;
        case 0x22dd44u: goto label_22dd44;
        case 0x22dd64u: goto label_22dd64;
        case 0x22dd6cu: goto label_22dd6c;
        case 0x22dd94u: goto label_22dd94;
        case 0x22dda0u: goto label_22dda0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22de04u: goto label_22de04;
        case 0x22de68u: goto label_22de68;
        case 0x22de88u: goto label_22de88;
        case 0x22de98u: goto label_22de98;
        case 0x22deb4u: goto label_22deb4;
        case 0x22dec0u: goto label_22dec0;
        case 0x22df38u: goto label_22df38;
        case 0x22df5cu: goto label_22df5c;
        case 0x22df70u: goto label_22df70;
        case 0x22df80u: goto label_22df80;
        case 0x22df94u: goto label_22df94;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfd0u: goto label_22dfd0;
        default: break;
    }

    ctx->pc = 0x22d938u;

    // 0x22d938: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22d938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22d93c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22d93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d940: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x22d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x22d944: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x22d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22d948: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d94c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x22d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x22d950: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22d950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22d954: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22d958: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22d95c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x22d95cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x22d960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d964: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x22d964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22d968: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x22d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x22d96c: 0x8e5006b4  lw          $s0, 0x6B4($s2)
    ctx->pc = 0x22d96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1716)));
    // 0x22d970: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22d970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22d974: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22D974u;
    SET_GPR_U32(ctx, 31, 0x22D97Cu);
    ctx->pc = 0x22D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D974u;
    // 0x22d978: 0xae4216d4  sw          $v0, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22D974u, 0x22D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D97Cu;
label_22d97c:
    // 0x22d97c: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x22d97cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22d980: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x22d980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x22d984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22d984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d988: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x22d988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x22d98c: 0x10400184  beqz        $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x22D98Cu;
    {
        const bool branch_taken_0x22d98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D98Cu;
        // 0x22d990: 0xe6401720  swc1        $f0, 0x1720($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d98c) {
            ctx->pc = 0x22DFA0u;
            goto label_22dfa0;
        }
    }
    ctx->pc = 0x22D994u;
    // 0x22d994: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22d998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22d998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22d99c: 0x24428d60  addiu       $v0, $v0, -0x72A0
    ctx->pc = 0x22d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937952));
    // 0x22d9a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d9a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d9a8: 0x800008  jr          $a0
    ctx->pc = 0x22D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D9B0u: goto label_22d9b0;
            case 0x22DA5Cu: goto label_22da5c;
            case 0x22DB40u: goto label_22db40;
            case 0x22DC88u: goto label_22dc88;
            case 0x22DCDCu: goto label_22dcdc;
            case 0x22DD3Cu: goto label_22dd3c;
            case 0x22DDA8u: goto label_22dda8;
            case 0x22DE34u: goto label_22de34;
            case 0x22DF04u: goto label_22df04;
            case 0x22DF68u: goto label_22df68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D9A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22D9B0u;
label_22d9b0:
    // 0x22d9b0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22d9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9b8: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x22d9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d9bc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22d9c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22d9c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22d9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d9c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9cc: 0x8c45215c  lw          $a1, 0x215C($v0)
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x22d9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22d9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d9d4: 0x8c462160  lw          $a2, 0x2160($v0)
    ctx->pc = 0x22d9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8544)));
    // 0x22d9d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22d9dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22D9DCu;
    SET_GPR_U32(ctx, 31, 0x22D9E4u);
    ctx->pc = 0x22D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9DCu;
    // 0x22d9e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22D9DCu, 0x22D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9E4u;
label_22d9e4:
    // 0x22d9e4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x22d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22d9e8: 0x26430580  addiu       $v1, $s2, 0x580
    ctx->pc = 0x22d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22d9ec: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x22d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22d9f0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22d9f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d9f4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x22d9f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d9f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22d9f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22d9fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22da00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22da04: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22da04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22da08: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22da0c: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22da10: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DA10u;
    {
        const bool branch_taken_0x22da10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x22DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA10u;
        // 0x22da14: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da10) {
            ctx->pc = 0x22DA2Cu;
            goto label_22da2c;
        }
    }
    ctx->pc = 0x22DA18u;
    // 0x22da18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x22da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da1c: 0xe6400590  swc1        $f0, 0x590($s2)
    ctx->pc = 0x22da1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x22da20: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22da20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22da24: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x22da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da28: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22da28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22da2c:
    // 0x22da2c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x22da2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x22da30: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22da30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22da34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22da34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da38: 0xda440590  lqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22da38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x22da3c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22da3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22da40: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22da40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22da44: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22da44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22da48: 0xfa440590  sqc2        $vf4, 0x590($s2)
    ctx->pc = 0x22da48u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22da4c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22da4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22da50: 0xae4005f0  sw          $zero, 0x5F0($s2)
    ctx->pc = 0x22da50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
    // 0x22da54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22da58: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22da58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22da5c:
    // 0x22da5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22da5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22da60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22da60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da64: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22da64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x22da68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22da68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22da6c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22DA6Cu;
    {
        const bool branch_taken_0x22da6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA6Cu;
        // 0x22da70: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da6c) {
            ctx->pc = 0x22DAE4u;
            goto label_22dae4;
        }
    }
    ctx->pc = 0x22DA74u;
    // 0x22da74: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22da78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da7c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22da7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22da80: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22da80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22da84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22da84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22da88: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22da8c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22DA8Cu;
    SET_GPR_U32(ctx, 31, 0x22DA94u);
    ctx->pc = 0x22DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA8Cu;
    // 0x22da90: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22DA8Cu, 0x22DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA94u;
label_22da94:
    // 0x22da94: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da98: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22da9c: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x22da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x22daa0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22daa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22daa4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22daa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22daa8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22daa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22daac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22daacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22dab0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22dab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22dab4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22dab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22dab8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22dabc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22dabcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22dac0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22dac4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22dac8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22dac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22dacc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22daccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dad0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22dad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22dad4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22dad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dadc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22DADCu;
    {
        const bool branch_taken_0x22dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DADCu;
        // 0x22dae0: 0xae4305f0  sw          $v1, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dadc) {
            ctx->pc = 0x22DB38u;
            goto label_22db38;
        }
    }
    ctx->pc = 0x22DAE4u;
label_22dae4:
    // 0x22dae4: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x22dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x22dae8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22DAE8u;
    {
        const bool branch_taken_0x22dae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAE8u;
        // 0x22daec: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dae8) {
            ctx->pc = 0x22DB1Cu;
            goto label_22db1c;
        }
    }
    ctx->pc = 0x22DAF0u;
    // 0x22daf0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x22DAF0u;
    {
        const bool branch_taken_0x22daf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22daf0) {
            ctx->pc = 0x22DB1Cu;
            goto label_22db1c;
        }
    }
    ctx->pc = 0x22DAF8u;
    // 0x22daf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dafc: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22dafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22db00: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22db00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22db04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22db04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22db08: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x22db08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22db0c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22DB0Cu;
    SET_GPR_U32(ctx, 31, 0x22DB14u);
    ctx->pc = 0x22DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB0Cu;
    // 0x22db10: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22DB0Cu, 0x22DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB14u;
label_22db14:
    // 0x22db14: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x22DB14u;
    {
        const bool branch_taken_0x22db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB14u;
        // 0x22db18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db14) {
            ctx->pc = 0x22DC98u;
            goto label_22dc98;
        }
    }
    ctx->pc = 0x22DB1Cu;
label_22db1c:
    // 0x22db1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db20: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22db20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22db24: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22db24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22db28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22db28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22db2c: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x22db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x22db30: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22DB30u;
    SET_GPR_U32(ctx, 31, 0x22DB38u);
    ctx->pc = 0x22DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB30u;
    // 0x22db34: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22DB30u, 0x22DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB38u;
label_22db38:
    // 0x22db38: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x22DB38u;
    {
        const bool branch_taken_0x22db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB38u;
        // 0x22db3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db38) {
            ctx->pc = 0x22DC98u;
            goto label_22dc98;
        }
    }
    ctx->pc = 0x22DB40u;
label_22db40:
    // 0x22db40: 0x8e460304  lw          $a2, 0x304($s2)
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22db44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db48: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x22db48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22db4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22db4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22db50: 0x8cc52164  lw          $a1, 0x2164($a2)
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8548)));
    // 0x22db54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22db54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db58: 0x8cc22168  lw          $v0, 0x2168($a2)
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8552)));
    // 0x22db5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22db5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22db60: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22db64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22db64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db68: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x22db68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22db6c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22DB6Cu;
    SET_GPR_U32(ctx, 31, 0x22DB74u);
    ctx->pc = 0x22DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB6Cu;
    // 0x22db70: 0x26510580  addiu       $s1, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22DB6Cu, 0x22DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB74u;
label_22db74:
    // 0x22db74: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22db78: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22DB78u;
    {
        const bool branch_taken_0x22db78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x22db78) {
            ctx->pc = 0x22DB98u;
            goto label_22db98;
        }
    }
    ctx->pc = 0x22DB80u;
    // 0x22db80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22db84: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x22db84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x22db88: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22db8c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x22db8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x22db90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22db94: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_22db98:
    // 0x22db98: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x22DB98u;
    {
        const bool branch_taken_0x22db98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22db98) {
            ctx->pc = 0x22DB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DB98u;
            // 0x22db9c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC80u;
            goto label_22dc80;
        }
    }
    ctx->pc = 0x22DBA0u;
    // 0x22dba0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22dba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22dba4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x22dba8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22dba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22dbac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22dbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22dbb0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x22dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22dbb4: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x22dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22dbb8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x22dbb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x22dbbc: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x22DBBCu;
    SET_GPR_U32(ctx, 31, 0x22DBC4u);
    ctx->pc = 0x22DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBBCu;
    // 0x22dbc0: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x22DBBCu, 0x22DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBC4u;
label_22dbc4:
    // 0x22dbc4: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x22dbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dbc8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22dbc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22dbcc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22dbccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22dbd0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22DBD0u;
    SET_GPR_U32(ctx, 31, 0x22DBD8u);
    ctx->pc = 0x22DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBD0u;
    // 0x22dbd4: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22DBD0u, 0x22DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBD8u;
label_22dbd8:
    // 0x22dbd8: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x22dbd8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x22dbdc: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22dbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x22dbe0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dbe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dbe4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22DBE4u;
    SET_GPR_U32(ctx, 31, 0x22DBECu);
    ctx->pc = 0x22DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBE4u;
    // 0x22dbe8: 0xe6140104  swc1        $f20, 0x104($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22DBE4u, 0x22DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBECu;
label_22dbec:
    // 0x22dbec: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x22dbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x22dbf0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x22dbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22dbf4: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x22dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22dbf8: 0xc051e62  jal         func_147988
    ctx->pc = 0x22DBF8u;
    SET_GPR_U32(ctx, 31, 0x22DC00u);
    ctx->pc = 0x22DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBF8u;
    // 0x22dbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22DBF8u, 0x22DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC00u;
label_22dc00:
    // 0x22dc00: 0x3c01be88  lui         $at, 0xBE88
    ctx->pc = 0x22dc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48776 << 16));
    // 0x22dc04: 0x342116f0  ori         $at, $at, 0x16F0
    ctx->pc = 0x22dc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5872);
    // 0x22dc08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22dc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22dc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc10: 0x3c01406e  lui         $at, 0x406E
    ctx->pc = 0x22dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16494 << 16));
    // 0x22dc14: 0x342117c2  ori         $at, $at, 0x17C2
    ctx->pc = 0x22dc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6082);
    // 0x22dc18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22dc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22dc1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc20: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22dc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22dc24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22dc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22dc28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22dc2c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22DC2Cu;
    SET_GPR_U32(ctx, 31, 0x22DC34u);
    ctx->pc = 0x22DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC2Cu;
    // 0x22dc30: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22DC2Cu, 0x22DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC34u;
label_22dc34:
    // 0x22dc34: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x22dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22dc38: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x22dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x22dc3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22dc3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22dc40: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22dc44: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22dc44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22dc48: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22dc48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dc4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22dc4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22dc50: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22dc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22dc54: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22dc54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22dc58: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22dc5c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22dc60: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DC60u;
    {
        const bool branch_taken_0x22dc60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC60u;
        // 0x22dc64: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc60) {
            ctx->pc = 0x22DC7Cu;
            goto label_22dc7c;
        }
    }
    ctx->pc = 0x22DC68u;
    // 0x22dc68: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dc6c: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x22dc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x22dc70: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x22dc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x22dc74: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x22dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dc78: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22dc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_22dc7c:
    // 0x22dc7c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22dc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_22dc80:
    // 0x22dc80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22dc84: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22dc84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22dc88:
    // 0x22dc88: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22dc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22dc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc94: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x22dc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
label_22dc98:
    // 0x22dc98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22DC98u;
    SET_GPR_U32(ctx, 31, 0x22DCA0u);
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22DC98u, 0x22DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCA0u;
label_22dca0:
    // 0x22dca0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DCA0u;
    {
        const bool branch_taken_0x22dca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dca0) {
            ctx->pc = 0x22DCB4u;
            goto label_22dcb4;
        }
    }
    ctx->pc = 0x22DCA8u;
    // 0x22dca8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22dca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22dcac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22dcb0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22dcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22dcb4:
    // 0x22dcb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22dcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22dcb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22dcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22dcbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dcc0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22DCC0u;
    SET_GPR_U32(ctx, 31, 0x22DCC8u);
    ctx->pc = 0x22DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCC0u;
    // 0x22dcc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22DCC0u, 0x22DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCC8u;
label_22dcc8:
    // 0x22dcc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dcc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dccc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22DCCCu;
    SET_GPR_U32(ctx, 31, 0x22DCD4u);
    ctx->pc = 0x22DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCCCu;
    // 0x22dcd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22DCCCu, 0x22DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCD4u;
label_22dcd4:
    // 0x22dcd4: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x22DCD4u;
    {
        const bool branch_taken_0x22dcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCD4u;
        // 0x22dcd8: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dcd4) {
            ctx->pc = 0x22DFA4u;
            goto label_22dfa4;
        }
    }
    ctx->pc = 0x22DCDCu;
label_22dcdc:
    // 0x22dcdc: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x22dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dce0: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x22dce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x22dce4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x22dce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x22dce8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22dce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22dcec: 0x0  nop
    ctx->pc = 0x22dcecu;
    // NOP
    // 0x22dcf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22dcf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22dcf4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22dcf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22dcf8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22DCF8u;
    SET_GPR_U32(ctx, 31, 0x22DD00u);
    ctx->pc = 0x22DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCF8u;
    // 0x22dcfc: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22DCF8u, 0x22DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD00u;
label_22dd00:
    // 0x22dd00: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22dd04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd08: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22dd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x22dd0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22dd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22dd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22dd14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22dd14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd18: 0x8c45218c  lw          $a1, 0x218C($v0)
    ctx->pc = 0x22dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8588)));
    // 0x22dd1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22dd1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd20: 0x8c462190  lw          $a2, 0x2190($v0)
    ctx->pc = 0x22dd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8592)));
    // 0x22dd24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22dd28: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22DD28u;
    SET_GPR_U32(ctx, 31, 0x22DD30u);
    ctx->pc = 0x22DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD28u;
    // 0x22dd2c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22DD28u, 0x22DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD30u;
label_22dd30:
    // 0x22dd30: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22dd30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22dd34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22dd38: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22dd38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22dd3c:
    // 0x22dd3c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22DD3Cu;
    SET_GPR_U32(ctx, 31, 0x22DD44u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22DD3Cu, 0x22DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD44u;
label_22dd44:
    // 0x22dd44: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dd48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd4c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22dd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22dd50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22dd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22dd54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22dd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22dd58: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22dd5c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22DD5Cu;
    SET_GPR_U32(ctx, 31, 0x22DD64u);
    ctx->pc = 0x22DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD5Cu;
    // 0x22dd60: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22DD5Cu, 0x22DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD64u;
label_22dd64:
    // 0x22dd64: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22DD64u;
    SET_GPR_U32(ctx, 31, 0x22DD6Cu);
    ctx->pc = 0x22DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD64u;
    // 0x22dd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22DD64u, 0x22DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD6Cu;
label_22dd6c:
    // 0x22dd6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DD6Cu;
    {
        const bool branch_taken_0x22dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dd6c) {
            ctx->pc = 0x22DD80u;
            goto label_22dd80;
        }
    }
    ctx->pc = 0x22DD74u;
    // 0x22dd74: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22dd74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22dd78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22dd7c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22dd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22dd80:
    // 0x22dd80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22dd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22dd84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22dd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22dd88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd8c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22DD8Cu;
    SET_GPR_U32(ctx, 31, 0x22DD94u);
    ctx->pc = 0x22DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD8Cu;
    // 0x22dd90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22DD8Cu, 0x22DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD94u;
label_22dd94:
    // 0x22dd94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dd94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dd98: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22DD98u;
    SET_GPR_U32(ctx, 31, 0x22DDA0u);
    ctx->pc = 0x22DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD98u;
    // 0x22dd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22DD98u, 0x22DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDA0u;
label_22dda0:
    // 0x22dda0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x22DDA0u;
    {
        const bool branch_taken_0x22dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dda0) {
            ctx->pc = 0x22DEE8u;
            goto label_22dee8;
        }
    }
    ctx->pc = 0x22DDA8u;
label_22dda8:
    // 0x22dda8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22ddac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22ddb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ddb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22ddb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddb8: 0x8c452174  lw          $a1, 0x2174($v0)
    ctx->pc = 0x22ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8564)));
    // 0x22ddbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ddbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddc0: 0x8c462178  lw          $a2, 0x2178($v0)
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8568)));
    // 0x22ddc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22ddc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22ddc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22ddcc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22DDCCu;
    SET_GPR_U32(ctx, 31, 0x22DDD4u);
    ctx->pc = 0x22DDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDCCu;
    // 0x22ddd0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22DDCCu, 0x22DDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDD4u;
label_22ddd4:
    // 0x22ddd4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x22ddd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x22ddd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ddd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dde0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x22dde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x22dde4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x22dde4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x22dde8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22dde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ddec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22ddf0: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x22ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x22ddf4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22ddf8: 0xe6410604  swc1        $f1, 0x604($s2)
    ctx->pc = 0x22ddf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x22ddfc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22DDFCu;
    SET_GPR_U32(ctx, 31, 0x22DE04u);
    ctx->pc = 0x22DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDFCu;
    // 0x22de00: 0xae4205f0  sw          $v0, 0x5F0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22DDFCu, 0x22DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE04u;
label_22de04:
    // 0x22de04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22de08: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22DE08u;
    {
        const bool branch_taken_0x22de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22de08) {
            ctx->pc = 0x22DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE08u;
            // 0x22de0c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE2Cu;
            goto label_22de2c;
        }
    }
    ctx->pc = 0x22DE10u;
    // 0x22de10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22de10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22de14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22de14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22de18: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x22de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x22de1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22de1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22de20: 0xe6400604  swc1        $f0, 0x604($s2)
    ctx->pc = 0x22de20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x22de24: 0xe6410600  swc1        $f1, 0x600($s2)
    ctx->pc = 0x22de24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x22de28: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22de28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_22de2c:
    // 0x22de2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22de30: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22de30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22de34:
    // 0x22de34: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x22de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22de38: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x22de38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x22de3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22de3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22de40: 0x0  nop
    ctx->pc = 0x22de40u;
    // NOP
    // 0x22de44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22de44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22de48: 0x0  nop
    ctx->pc = 0x22de48u;
    // NOP
    // 0x22de4c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x22DE4Cu;
    {
        const bool branch_taken_0x22de4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22de4c) {
            ctx->pc = 0x22DE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE4Cu;
            // 0x22de50: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE88u;
            goto label_22de88;
        }
    }
    ctx->pc = 0x22DE54u;
    // 0x22de54: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x22de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x22de58: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22DE58u;
    {
        const bool branch_taken_0x22de58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de58) {
            ctx->pc = 0x22DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE58u;
            // 0x22de5c: 0xae4005f0  sw          $zero, 0x5F0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE88u;
            goto label_22de88;
        }
    }
    ctx->pc = 0x22DE60u;
    // 0x22de60: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22DE60u;
    SET_GPR_U32(ctx, 31, 0x22DE68u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22DE60u, 0x22DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE68u;
label_22de68:
    // 0x22de68: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x22de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22de6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22de6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de70: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22de70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22de74: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22de74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22de78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22de78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22de7c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22de7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22de80: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22DE80u;
    SET_GPR_U32(ctx, 31, 0x22DE88u);
    ctx->pc = 0x22DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE80u;
    // 0x22de84: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22DE80u, 0x22DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE88u;
label_22de88:
    // 0x22de88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22de8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22de8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22de90: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22DE90u;
    SET_GPR_U32(ctx, 31, 0x22DE98u);
    ctx->pc = 0x22DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE90u;
    // 0x22de94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22DE90u, 0x22DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE98u;
label_22de98:
    // 0x22de98: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x22de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22de9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dea0: 0xc6400604  lwc1        $f0, 0x604($s2)
    ctx->pc = 0x22dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dea4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22dea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22dea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22deac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22DEACu;
    SET_GPR_U32(ctx, 31, 0x22DEB4u);
    ctx->pc = 0x22DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEACu;
    // 0x22deb0: 0xe6400338  swc1        $f0, 0x338($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22DEACu, 0x22DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEB4u;
label_22deb4:
    // 0x22deb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22deb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22deb8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22DEB8u;
    SET_GPR_U32(ctx, 31, 0x22DEC0u);
    ctx->pc = 0x22DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEB8u;
    // 0x22debc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22DEB8u, 0x22DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEC0u;
label_22dec0:
    // 0x22dec0: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x22dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dec4: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x22dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dec8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22dec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22decc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22deccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22ded0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22ded0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ded4: 0x0  nop
    ctx->pc = 0x22ded4u;
    // NOP
    // 0x22ded8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22DED8u;
    {
        const bool branch_taken_0x22ded8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DED8u;
        // 0x22dedc: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ded8) {
            ctx->pc = 0x22DEE8u;
            goto label_22dee8;
        }
    }
    ctx->pc = 0x22DEE0u;
    // 0x22dee0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22dee4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22dee4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22dee8:
    // 0x22dee8: 0x5200002e  beql        $s0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x22DEE8u;
    {
        const bool branch_taken_0x22dee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dee8) {
            ctx->pc = 0x22DEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DEE8u;
            // 0x22deec: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DFA4u;
            goto label_22dfa4;
        }
    }
    ctx->pc = 0x22DEF0u;
    // 0x22def0: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x22def0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x22def4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22DEF4u;
    {
        const bool branch_taken_0x22def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEF4u;
        // 0x22def8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22def4) {
            ctx->pc = 0x22DFA0u;
            goto label_22dfa0;
        }
    }
    ctx->pc = 0x22DEFCu;
    // 0x22defc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22DEFCu;
    {
        const bool branch_taken_0x22defc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEFCu;
        // 0x22df00: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22defc) {
            ctx->pc = 0x22DFA0u;
            goto label_22dfa0;
        }
    }
    ctx->pc = 0x22DF04u;
label_22df04:
    // 0x22df04: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x22df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22df08: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22df08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22df0c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22df0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22df10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22df10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22df14: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x22df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x22df18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22df18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22df1c: 0x8c502184  lw          $s0, 0x2184($v0)
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8580)));
    // 0x22df20: 0x8c512188  lw          $s1, 0x2188($v0)
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8584)));
    // 0x22df24: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22df28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22df28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22df2c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22df30: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x22DF30u;
    SET_GPR_U32(ctx, 31, 0x22DF38u);
    ctx->pc = 0x22DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF30u;
    // 0x22df34: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x22DF30u, 0x22DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF38u;
label_22df38:
    // 0x22df38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22df38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22df3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22df3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df40: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x22df40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x22df44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22df44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22df48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22df4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22df50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df54: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22DF54u;
    SET_GPR_U32(ctx, 31, 0x22DF5Cu);
    ctx->pc = 0x22DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF54u;
    // 0x22df58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22DF54u, 0x22DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF5Cu;
label_22df5c:
    // 0x22df5c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22df5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22df60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22df64: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x22df64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22df68:
    // 0x22df68: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22DF68u;
    SET_GPR_U32(ctx, 31, 0x22DF70u);
    ctx->pc = 0x22DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF68u;
    // 0x22df6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22DF68u, 0x22DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF70u;
label_22df70:
    // 0x22df70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DF70u;
    {
        const bool branch_taken_0x22df70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df70) {
            ctx->pc = 0x22DF80u;
            goto label_22df80;
        }
    }
    ctx->pc = 0x22DF78u;
    // 0x22df78: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x22DF78u;
    SET_GPR_U32(ctx, 31, 0x22DF80u);
    ctx->pc = 0x22DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF78u;
    // 0x22df7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x22DF78u, 0x22DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF80u;
label_22df80:
    // 0x22df80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22df84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22df84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22df88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22df8c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22DF8Cu;
    SET_GPR_U32(ctx, 31, 0x22DF94u);
    ctx->pc = 0x22DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF8Cu;
    // 0x22df90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22DF8Cu, 0x22DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF94u;
label_22df94:
    // 0x22df94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22df94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22df98: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22DF98u;
    SET_GPR_U32(ctx, 31, 0x22DFA0u);
    ctx->pc = 0x22DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF98u;
    // 0x22df9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22DF98u, 0x22DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFA0u;
label_22dfa0:
    // 0x22dfa0: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_22dfa4:
    // 0x22dfa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22dfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22dfa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22DFA8u;
    {
        const bool branch_taken_0x22dfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFA8u;
        // 0x22dfac: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfa8) {
            ctx->pc = 0x22DFD0u;
            goto label_22dfd0;
        }
    }
    ctx->pc = 0x22DFB0u;
    // 0x22dfb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dfb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22dfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dfb8: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x22dfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x22dfbc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22dfbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22dfc0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22DFC0u;
    SET_GPR_U32(ctx, 31, 0x22DFC8u);
    ctx->pc = 0x22DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFC0u;
    // 0x22dfc4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22DFC0u, 0x22DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFC8u;
label_22dfc8:
    // 0x22dfc8: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22DFC8u;
    SET_GPR_U32(ctx, 31, 0x22DFD0u);
    ctx->pc = 0x22DFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFC8u;
    // 0x22dfcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22DFC8u, 0x22DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFD0u;
label_22dfd0:
    // 0x22dfd0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22dfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22dfd4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22dfd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22dfd8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x22dfd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22dfdc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22dfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22dfe0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x22dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22dfe4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x22dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22dfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x22DFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFE8u;
        // 0x22dfec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DFF0u;
}
