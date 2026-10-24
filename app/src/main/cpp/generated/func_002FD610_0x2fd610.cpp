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

// Function: func_002FD610
// Address: 0x2fd610 - 0x2fdd10
void func_002FD610_0x2fd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FD610_0x2fd610");
#endif

    switch (ctx->pc) {
        case 0x2fd674u: goto label_2fd674;
        case 0x2fd6d4u: goto label_2fd6d4;
        case 0x2fd7d0u: goto label_2fd7d0;
        case 0x2fd804u: goto label_2fd804;
        case 0x2fd82cu: goto label_2fd82c;
        case 0x2fd854u: goto label_2fd854;
        case 0x2fd96cu: goto label_2fd96c;
        case 0x2fd978u: goto label_2fd978;
        case 0x2fd984u: goto label_2fd984;
        case 0x2fd990u: goto label_2fd990;
        case 0x2fd9b0u: goto label_2fd9b0;
        case 0x2fd9d0u: goto label_2fd9d0;
        case 0x2fda94u: goto label_2fda94;
        case 0x2fdaa0u: goto label_2fdaa0;
        case 0x2fdaacu: goto label_2fdaac;
        case 0x2fdab8u: goto label_2fdab8;
        case 0x2fdad4u: goto label_2fdad4;
        case 0x2fdaf0u: goto label_2fdaf0;
        case 0x2fdc40u: goto label_2fdc40;
        case 0x2fdc4cu: goto label_2fdc4c;
        case 0x2fdc58u: goto label_2fdc58;
        case 0x2fdc64u: goto label_2fdc64;
        case 0x2fdc8cu: goto label_2fdc8c;
        case 0x2fdcb4u: goto label_2fdcb4;
        case 0x2fdce0u: goto label_2fdce0;
        default: break;
    }

    ctx->pc = 0x2fd610u;

    // 0x2fd610: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2fd610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2fd614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd618: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fd618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fd61c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fd61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2fd620: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fd620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2fd624: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fd624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd628: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fd628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2fd62c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd630: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fd630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fd634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd638: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x2fd638u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2fd63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fd63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd640: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x2fd640u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2fd644: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x2fd644u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2fd648: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2fd648u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2fd64c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2fd64cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2fd650: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2fd650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2fd654: 0xc6220124  lwc1        $f2, 0x124($s1)
    ctx->pc = 0x2fd654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd658: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2fd658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd65c: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x2fd65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd660: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2fd660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fd664: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fd664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fd668: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2fd668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fd66c: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2FD66Cu;
    SET_GPR_U32(ctx, 31, 0x2FD674u);
    ctx->pc = 0x2FD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD66Cu;
    // 0x2fd670: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2FD66Cu, 0x2FD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD674u;
label_2fd674:
    // 0x2fd674: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2fd674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fd678: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2fd678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fd67c: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2fd67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd680: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd684: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fd684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fd688: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD688u;
    {
        const bool branch_taken_0x2fd688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD688u;
        // 0x2fd68c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd688) {
            ctx->pc = 0x2FD6A0u;
            goto label_2fd6a0;
        }
    }
    ctx->pc = 0x2FD690u;
    // 0x2fd690: 0x9222011d  lbu         $v0, 0x11D($s1)
    ctx->pc = 0x2fd690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 285)));
    // 0x2fd694: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fd694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fd698: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD698u;
    {
        const bool branch_taken_0x2fd698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD698u;
        // 0x2fd69c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd698) {
            ctx->pc = 0x2FD6B8u;
            goto label_2fd6b8;
        }
    }
    ctx->pc = 0x2FD6A0u;
label_2fd6a0:
    // 0x2fd6a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2fd6a4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fd6a8: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2fd6ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fd6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fd6b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD6B0u;
    {
        const bool branch_taken_0x2fd6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6B0u;
        // 0x2fd6b4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6b0) {
            ctx->pc = 0x2FD6D4u;
            goto label_2fd6d4;
        }
    }
    ctx->pc = 0x2FD6B8u;
label_2fd6b8:
    // 0x2fd6b8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fd6bc: 0xc4401dc0  lwc1        $f0, 0x1DC0($v0)
    ctx->pc = 0x2fd6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd6c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6c4: 0xc46c7a14  lwc1        $f12, 0x7A14($v1)
    ctx->pc = 0x2fd6c4u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd6c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fd6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6cc: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2FD6CCu;
    SET_GPR_U32(ctx, 31, 0x2FD6D4u);
    ctx->pc = 0x2FD6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6CCu;
    // 0x2fd6d0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2FD6CCu, 0x2FD6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6D4u;
label_2fd6d4:
    // 0x2fd6d4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fd6d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd6d8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2fd6d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd6dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fd6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd6e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fd6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd6e4: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2fd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd6e8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2fd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2fd6ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2fd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd6f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fd6f4: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x2FD6F4u;
    {
        const bool branch_taken_0x2fd6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6F4u;
        // 0x2fd6f8: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6f4) {
            ctx->pc = 0x2FDCD4u;
            goto label_2fdcd4;
        }
    }
    ctx->pc = 0x2FD6FCu;
    // 0x2fd6fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD6FCu;
    {
        const bool branch_taken_0x2fd6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6FCu;
        // 0x2fd700: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6fc) {
            ctx->pc = 0x2FD718u;
            goto label_2fd718;
        }
    }
    ctx->pc = 0x2FD704u;
    // 0x2fd704: 0x9222011d  lbu         $v0, 0x11D($s1)
    ctx->pc = 0x2fd704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 285)));
    // 0x2fd708: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fd708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fd70c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD70Cu;
    {
        const bool branch_taken_0x2fd70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd70c) {
            ctx->pc = 0x2FD710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD70Cu;
            // 0x2fd710: 0x8623022e  lh          $v1, 0x22E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 558)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD730u;
            goto label_2fd730;
        }
    }
    ctx->pc = 0x2FD714u;
    // 0x2fd714: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fd714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fd718:
    // 0x2fd718: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fd718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fd71c: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fd720: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fd720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fd724: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FD724u;
    {
        const bool branch_taken_0x2fd724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd724) {
            ctx->pc = 0x2FD728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD724u;
            // 0x2fd728: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD7D8u;
            goto label_2fd7d8;
        }
    }
    ctx->pc = 0x2FD72Cu;
    // 0x2fd72c: 0x8623022e  lh          $v1, 0x22E($s1)
    ctx->pc = 0x2fd72cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 558)));
label_2fd730:
    // 0x2fd730: 0x86220230  lh          $v0, 0x230($s1)
    ctx->pc = 0x2fd730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x2fd734: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FD734u;
    {
        const bool branch_taken_0x2fd734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fd734) {
            ctx->pc = 0x2FD738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD734u;
            // 0x2fd738: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD7D8u;
            goto label_2fd7d8;
        }
    }
    ctx->pc = 0x2FD73Cu;
    // 0x2fd73c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2fd740: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fd740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fd744: 0xc4411dc0  lwc1        $f1, 0x1DC0($v0)
    ctx->pc = 0x2fd744u;
    { uint32_t bits = FAST_READ32(0x741DC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd748: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2fd748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd74c: 0xc4607a14  lwc1        $f0, 0x7A14($v1)
    ctx->pc = 0x2fd74cu;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd750: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x2fd750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x2fd754: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd758: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2fd758u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd75c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fd75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd760: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fd760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd764: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2fd764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2fd768: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2fd768u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2fd76c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2fd76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd770: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fd770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd774: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2fd774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd778: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fd778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd77c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd780: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fd780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd784: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2fd784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd788: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fd788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd78c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fd78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd790: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2fd790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd794: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fd794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd798: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fd798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd79c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2fd79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2fd7a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2fd7a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2fd7a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2fd7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd7a8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fd7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd7ac: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2fd7acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fd7b0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fd7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd7b4: 0xda240290  lqc2        $vf4, 0x290($s1)
    ctx->pc = 0x2fd7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x2fd7b8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2fd7b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd7bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fd7bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd7c0: 0xfa240290  sqc2        $vf4, 0x290($s1)
    ctx->pc = 0x2fd7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd7c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd7c8: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2FD7C8u;
    SET_GPR_U32(ctx, 31, 0x2FD7D0u);
    ctx->pc = 0x2FD7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7C8u;
    // 0x2fd7cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2FD7C8u, 0x2FD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7D0u;
label_2fd7d0:
    // 0x2fd7d0: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x2FD7D0u;
    {
        const bool branch_taken_0x2fd7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7D0u;
        // 0x2fd7d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7d0) {
            ctx->pc = 0x2FDCE4u;
            goto label_2fdce4;
        }
    }
    ctx->pc = 0x2FD7D8u;
label_2fd7d8:
    // 0x2fd7d8: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2fd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2fd7dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fd7e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fd7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fd7e4: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FD7E4u;
    {
        const bool branch_taken_0x2fd7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7E4u;
        // 0x2fd7e8: 0x26300290  addiu       $s0, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7e4) {
            ctx->pc = 0x2FD874u;
            goto label_2fd874;
        }
    }
    ctx->pc = 0x2FD7ECu;
    // 0x2fd7ec: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fd7ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd7f0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2fd7f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fd7f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fd7f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd7f8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fd7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd7fc: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2FD7FCu;
    SET_GPR_U32(ctx, 31, 0x2FD804u);
    ctx->pc = 0x2FD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7FCu;
    // 0x2fd800: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2FD7FCu, 0x2FD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD804u;
label_2fd804:
    // 0x2fd804: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fd804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd808: 0xc623026c  lwc1        $f3, 0x26C($s1)
    ctx->pc = 0x2fd808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd80c: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x2fd80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd810: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2fd810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd814: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd818: 0xc62c0264  lwc1        $f12, 0x264($s1)
    ctx->pc = 0x2fd818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd81c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fd81cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fd820: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2fd820u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2fd824: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FD824u;
    SET_GPR_U32(ctx, 31, 0x2FD82Cu);
    ctx->pc = 0x2FD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD824u;
    // 0x2fd828: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FD824u, 0x2FD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD82Cu;
label_2fd82c:
    // 0x2fd82c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd830: 0xc623026c  lwc1        $f3, 0x26C($s1)
    ctx->pc = 0x2fd830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd834: 0xc44102a8  lwc1        $f1, 0x2A8($v0)
    ctx->pc = 0x2fd834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd838: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2fd838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd83c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd83cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd840: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x2fd840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd844: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fd844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fd848: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2fd848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2fd84c: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FD84Cu;
    SET_GPR_U32(ctx, 31, 0x2FD854u);
    ctx->pc = 0x2FD850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD84Cu;
    // 0x2fd850: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FD84Cu, 0x2FD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD854u;
label_2fd854:
    // 0x2fd854: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd858: 0xc623026c  lwc1        $f3, 0x26C($s1)
    ctx->pc = 0x2fd858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd85c: 0xc44102ac  lwc1        $f1, 0x2AC($v0)
    ctx->pc = 0x2fd85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd860: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fd860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd864: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd868: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fd868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fd86c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2fd86cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2fd870: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2fd870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2fd874:
    // 0x2fd874: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x2fd874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x2fd878: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2fd878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2fd87c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2fd880: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2fd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd884: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fd884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd888: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fd888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fd88c: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2FD88Cu;
    {
        const bool branch_taken_0x2fd88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD88Cu;
        // 0x2fd890: 0x846202b6  lh          $v0, 0x2B6($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 694)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd88c) {
            ctx->pc = 0x2FDB68u;
            goto label_2fdb68;
        }
    }
    ctx->pc = 0x2FD894u;
    // 0x2fd894: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2fd894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2fd898: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2fd898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2fd89c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fd89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fd8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd8a4: 0x0  nop
    ctx->pc = 0x2fd8a4u;
    // NOP
    // 0x2fd8a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd8ac: 0xc621026c  lwc1        $f1, 0x26C($s1)
    ctx->pc = 0x2fd8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd8b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd8b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fd8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fd8b8: 0xc6220270  lwc1        $f2, 0x270($s1)
    ctx->pc = 0x2fd8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd8bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2fd8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2fd8c0: 0xc62c0260  lwc1        $f12, 0x260($s1)
    ctx->pc = 0x2fd8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd8c4: 0xc6230264  lwc1        $f3, 0x264($s1)
    ctx->pc = 0x2fd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd8c8: 0xc6240268  lwc1        $f4, 0x268($s1)
    ctx->pc = 0x2fd8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fd8cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2fd8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd8d0: 0xe621026c  swc1        $f1, 0x26C($s1)
    ctx->pc = 0x2fd8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x2fd8d4: 0x806202b5  lb          $v0, 0x2B5($v1)
    ctx->pc = 0x2fd8d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 693)));
    // 0x2fd8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd8dc: 0x0  nop
    ctx->pc = 0x2fd8dcu;
    // NOP
    // 0x2fd8e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd8e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2fd8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2fd8e8: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2fd8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2fd8ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd8f0: 0xe621026c  swc1        $f1, 0x26C($s1)
    ctx->pc = 0x2fd8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x2fd8f4: 0x806202b4  lb          $v0, 0x2B4($v1)
    ctx->pc = 0x2fd8f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2fd8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd8fc: 0x0  nop
    ctx->pc = 0x2fd8fcu;
    // NOP
    // 0x2fd900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd904: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2fd904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2fd908: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2fd908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2fd90c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2fd90cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fd910: 0xe6220270  swc1        $f2, 0x270($s1)
    ctx->pc = 0x2fd910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x2fd914: 0x806202b0  lb          $v0, 0x2B0($v1)
    ctx->pc = 0x2fd914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x2fd918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd91c: 0x0  nop
    ctx->pc = 0x2fd91cu;
    // NOP
    // 0x2fd920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd924: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fd924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fd928: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2fd928u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2fd92c: 0xe62c0260  swc1        $f12, 0x260($s1)
    ctx->pc = 0x2fd92cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x2fd930: 0x806202b1  lb          $v0, 0x2B1($v1)
    ctx->pc = 0x2fd930u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 689)));
    // 0x2fd934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd938: 0x0  nop
    ctx->pc = 0x2fd938u;
    // NOP
    // 0x2fd93c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd940: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fd940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fd944: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2fd944u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2fd948: 0xe6230264  swc1        $f3, 0x264($s1)
    ctx->pc = 0x2fd948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    // 0x2fd94c: 0x806202b2  lb          $v0, 0x2B2($v1)
    ctx->pc = 0x2fd94cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 690)));
    // 0x2fd950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd954: 0x0  nop
    ctx->pc = 0x2fd954u;
    // NOP
    // 0x2fd958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fd958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fd95c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fd95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fd960: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2fd960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2fd964: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FD964u;
    SET_GPR_U32(ctx, 31, 0x2FD96Cu);
    ctx->pc = 0x2FD968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD964u;
    // 0x2fd968: 0xe6240268  swc1        $f4, 0x268($s1) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FD964u, 0x2FD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD96Cu;
label_2fd96c:
    // 0x2fd96c: 0xc62c0264  lwc1        $f12, 0x264($s1)
    ctx->pc = 0x2fd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd970: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FD970u;
    SET_GPR_U32(ctx, 31, 0x2FD978u);
    ctx->pc = 0x2FD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD970u;
    // 0x2fd974: 0xe6200260  swc1        $f0, 0x260($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FD970u, 0x2FD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD978u;
label_2fd978:
    // 0x2fd978: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x2fd978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd97c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FD97Cu;
    SET_GPR_U32(ctx, 31, 0x2FD984u);
    ctx->pc = 0x2FD980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD97Cu;
    // 0x2fd980: 0xe6200264  swc1        $f0, 0x264($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FD97Cu, 0x2FD984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD984u;
label_2fd984:
    // 0x2fd984: 0xc62c0260  lwc1        $f12, 0x260($s1)
    ctx->pc = 0x2fd984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd988: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2FD988u;
    SET_GPR_U32(ctx, 31, 0x2FD990u);
    ctx->pc = 0x2FD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD988u;
    // 0x2fd98c: 0xe6200268  swc1        $f0, 0x268($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2FD988u, 0x2FD990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD990u;
label_2fd990:
    // 0x2fd990: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fd990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd994: 0xc622026c  lwc1        $f2, 0x26C($s1)
    ctx->pc = 0x2fd994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd998: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x2fd998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd99c: 0xc62c0264  lwc1        $f12, 0x264($s1)
    ctx->pc = 0x2fd99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd9a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd9a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fd9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2fd9a8: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FD9A8u;
    SET_GPR_U32(ctx, 31, 0x2FD9B0u);
    ctx->pc = 0x2FD9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9A8u;
    // 0x2fd9ac: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FD9A8u, 0x2FD9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9B0u;
label_2fd9b0:
    // 0x2fd9b0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd9b4: 0xc622026c  lwc1        $f2, 0x26C($s1)
    ctx->pc = 0x2fd9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd9b8: 0xc44102a8  lwc1        $f1, 0x2A8($v0)
    ctx->pc = 0x2fd9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd9bc: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x2fd9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fd9c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd9c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fd9c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2fd9c8: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FD9C8u;
    SET_GPR_U32(ctx, 31, 0x2FD9D0u);
    ctx->pc = 0x2FD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9C8u;
    // 0x2fd9cc: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FD9C8u, 0x2FD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9D0u;
label_2fd9d0:
    // 0x2fd9d0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fd9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fd9d4: 0xc634026c  lwc1        $f20, 0x26C($s1)
    ctx->pc = 0x2fd9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fd9d8: 0xc44102ac  lwc1        $f1, 0x2AC($v0)
    ctx->pc = 0x2fd9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd9dc: 0xc6390260  lwc1        $f25, 0x260($s1)
    ctx->pc = 0x2fd9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2fd9e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd9e4: 0xc6250270  lwc1        $f5, 0x270($s1)
    ctx->pc = 0x2fd9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fd9e8: 0xc6370264  lwc1        $f23, 0x264($s1)
    ctx->pc = 0x2fd9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fd9ec: 0xc6380268  lwc1        $f24, 0x268($s1)
    ctx->pc = 0x2fd9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2fd9f0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fd9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2fd9f4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2fd9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fd9f8: 0x804302b4  lb          $v1, 0x2B4($v0)
    ctx->pc = 0x2fd9f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x2fd9fc: 0x844502b6  lh          $a1, 0x2B6($v0)
    ctx->pc = 0x2fd9fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 694)));
    // 0x2fda00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fda00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fda04: 0x0  nop
    ctx->pc = 0x2fda04u;
    // NOP
    // 0x2fda08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fda08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fda0c: 0x804402b5  lb          $a0, 0x2B5($v0)
    ctx->pc = 0x2fda0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 693)));
    // 0x2fda10: 0x804602b0  lb          $a2, 0x2B0($v0)
    ctx->pc = 0x2fda10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x2fda14: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2fda14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fda18: 0x0  nop
    ctx->pc = 0x2fda18u;
    // NOP
    // 0x2fda1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fda1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fda20: 0x804302b1  lb          $v1, 0x2B1($v0)
    ctx->pc = 0x2fda20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 689)));
    // 0x2fda24: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2fda24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fda28: 0x0  nop
    ctx->pc = 0x2fda28u;
    // NOP
    // 0x2fda2c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2fda2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2fda30: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2fda30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2fda34: 0x804402b2  lb          $a0, 0x2B2($v0)
    ctx->pc = 0x2fda34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 690)));
    // 0x2fda38: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2fda38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fda3c: 0x0  nop
    ctx->pc = 0x2fda3cu;
    // NOP
    // 0x2fda40: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2fda40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2fda44: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2fda44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2fda48: 0x0  nop
    ctx->pc = 0x2fda48u;
    // NOP
    // 0x2fda4c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2fda4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2fda50: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2fda50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2fda54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2fda54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fda58: 0x0  nop
    ctx->pc = 0x2fda58u;
    // NOP
    // 0x2fda5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fda5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fda60: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x2fda60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2fda64: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2fda64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2fda68: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x2fda68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2fda6c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2fda6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2fda70: 0x46056302  mul.s       $f12, $f12, $f5
    ctx->pc = 0x2fda70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2fda74: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2fda74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2fda78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2fda78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2fda7c: 0x461618c0  add.s       $f3, $f3, $f22
    ctx->pc = 0x2fda7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[22]);
    // 0x2fda80: 0x460ccb00  add.s       $f12, $f25, $f12
    ctx->pc = 0x2fda80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[25], ctx->f[12]);
    // 0x2fda84: 0x4604bdc0  add.s       $f23, $f23, $f4
    ctx->pc = 0x2fda84u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[4]);
    // 0x2fda88: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x2fda88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2fda8c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FDA8Cu;
    SET_GPR_U32(ctx, 31, 0x2FDA94u);
    ctx->pc = 0x2FDA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA8Cu;
    // 0x2fda90: 0x4601c600  add.s       $f24, $f24, $f1 (Delay Slot)
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FDA8Cu, 0x2FDA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA94u;
label_2fda94:
    // 0x2fda94: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x2fda94u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x2fda98: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FDA98u;
    SET_GPR_U32(ctx, 31, 0x2FDAA0u);
    ctx->pc = 0x2FDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA98u;
    // 0x2fda9c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FDA98u, 0x2FDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAA0u;
label_2fdaa0:
    // 0x2fdaa0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2fdaa0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2fdaa4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FDAA4u;
    SET_GPR_U32(ctx, 31, 0x2FDAACu);
    ctx->pc = 0x2FDAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAA4u;
    // 0x2fdaa8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FDAA4u, 0x2FDAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAACu;
label_2fdaac:
    // 0x2fdaac: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2fdaacu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2fdab0: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2FDAB0u;
    SET_GPR_U32(ctx, 31, 0x2FDAB8u);
    ctx->pc = 0x2FDAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAB0u;
    // 0x2fdab4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2FDAB0u, 0x2FDAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAB8u;
label_2fdab8:
    // 0x2fdab8: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fdabc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2fdabcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2fdac0: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x2fdac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdac4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdac8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fdac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2fdacc: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FDACCu;
    SET_GPR_U32(ctx, 31, 0x2FDAD4u);
    ctx->pc = 0x2FDAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDACCu;
    // 0x2fdad0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FDACCu, 0x2FDAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAD4u;
label_2fdad4:
    // 0x2fdad4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fdad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fdad8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x2fdad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x2fdadc: 0xc44102a8  lwc1        $f1, 0x2A8($v0)
    ctx->pc = 0x2fdadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdae0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdae4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fdae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2fdae8: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FDAE8u;
    SET_GPR_U32(ctx, 31, 0x2FDAF0u);
    ctx->pc = 0x2FDAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAE8u;
    // 0x2fdaec: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FDAE8u, 0x2FDAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAF0u;
label_2fdaf0:
    // 0x2fdaf0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fdaf4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2fdaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fdaf8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2fdaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fdafc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2fdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fdb00: 0xc44102ac  lwc1        $f1, 0x2AC($v0)
    ctx->pc = 0x2fdb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdb04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fdb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fdb08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdb08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdb0c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fdb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2fdb10: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2fdb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fdb14: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2fdb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fdb18: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2fdb18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fdb1c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x2fdb1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fdb20: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fdb20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb24: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2fdb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdb28: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2fdb28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fdb2c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdb30: 0x26220280  addiu       $v0, $s1, 0x280
    ctx->pc = 0x2fdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x2fdb34: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDB34u;
    {
        const bool branch_taken_0x2fdb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB34u;
        // 0x2fdb38: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb34) {
            ctx->pc = 0x2FDB50u;
            goto label_2fdb50;
        }
    }
    ctx->pc = 0x2FDB3Cu;
    // 0x2fdb3c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2fdb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdb40: 0xe6200280  swc1        $f0, 0x280($s1)
    ctx->pc = 0x2fdb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
    // 0x2fdb44: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2fdb44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2fdb48: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2fdb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdb4c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2fdb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2fdb50:
    // 0x2fdb50: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fdb50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdb54: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x2fdb54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fdb58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fdb58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fdb5c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fdb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdb60: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2FDB60u;
    {
        const bool branch_taken_0x2fdb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB60u;
        // 0x2fdb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb60) {
            ctx->pc = 0x2FDCD8u;
            goto label_2fdcd8;
        }
    }
    ctx->pc = 0x2FDB68u;
label_2fdb68:
    // 0x2fdb68: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2fdb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2fdb6c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2fdb6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2fdb70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fdb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fdb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdb78: 0x0  nop
    ctx->pc = 0x2fdb78u;
    // NOP
    // 0x2fdb7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdb7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdb80: 0xc621026c  lwc1        $f1, 0x26C($s1)
    ctx->pc = 0x2fdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdb84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fdb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fdb88: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2fdb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2fdb8c: 0xc6220270  lwc1        $f2, 0x270($s1)
    ctx->pc = 0x2fdb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdb90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fdb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fdb94: 0xc62c0260  lwc1        $f12, 0x260($s1)
    ctx->pc = 0x2fdb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdb98: 0xc6240264  lwc1        $f4, 0x264($s1)
    ctx->pc = 0x2fdb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdb9c: 0xc6250268  lwc1        $f5, 0x268($s1)
    ctx->pc = 0x2fdb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fdba0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2fdba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fdba4: 0xe621026c  swc1        $f1, 0x26C($s1)
    ctx->pc = 0x2fdba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x2fdba8: 0x806202b5  lb          $v0, 0x2B5($v1)
    ctx->pc = 0x2fdba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 693)));
    // 0x2fdbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdbb0: 0x0  nop
    ctx->pc = 0x2fdbb0u;
    // NOP
    // 0x2fdbb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdbb8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fdbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fdbbc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2fdbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2fdbc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdbc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdbc4: 0xe621026c  swc1        $f1, 0x26C($s1)
    ctx->pc = 0x2fdbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x2fdbc8: 0x806202b4  lb          $v0, 0x2B4($v1)
    ctx->pc = 0x2fdbc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2fdbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdbd0: 0x0  nop
    ctx->pc = 0x2fdbd0u;
    // NOP
    // 0x2fdbd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdbd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2fdbd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2fdbdc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2fdbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2fdbe0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2fdbe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fdbe4: 0xe6220270  swc1        $f2, 0x270($s1)
    ctx->pc = 0x2fdbe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x2fdbe8: 0x806202b0  lb          $v0, 0x2B0($v1)
    ctx->pc = 0x2fdbe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x2fdbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdbf0: 0x0  nop
    ctx->pc = 0x2fdbf0u;
    // NOP
    // 0x2fdbf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdbf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdbf8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fdbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fdbfc: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2fdbfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2fdc00: 0xe62c0260  swc1        $f12, 0x260($s1)
    ctx->pc = 0x2fdc00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x2fdc04: 0x806202b1  lb          $v0, 0x2B1($v1)
    ctx->pc = 0x2fdc04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 689)));
    // 0x2fdc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc0c: 0x0  nop
    ctx->pc = 0x2fdc0cu;
    // NOP
    // 0x2fdc10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdc10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdc14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fdc14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fdc18: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2fdc18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2fdc1c: 0xe6240264  swc1        $f4, 0x264($s1)
    ctx->pc = 0x2fdc1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    // 0x2fdc20: 0x806202b2  lb          $v0, 0x2B2($v1)
    ctx->pc = 0x2fdc20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 690)));
    // 0x2fdc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fdc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdc28: 0x0  nop
    ctx->pc = 0x2fdc28u;
    // NOP
    // 0x2fdc2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fdc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fdc30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fdc30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fdc34: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2fdc34u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2fdc38: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FDC38u;
    SET_GPR_U32(ctx, 31, 0x2FDC40u);
    ctx->pc = 0x2FDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC38u;
    // 0x2fdc3c: 0xe6250268  swc1        $f5, 0x268($s1) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FDC38u, 0x2FDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC40u;
label_2fdc40:
    // 0x2fdc40: 0xc62c0264  lwc1        $f12, 0x264($s1)
    ctx->pc = 0x2fdc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdc44: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FDC44u;
    SET_GPR_U32(ctx, 31, 0x2FDC4Cu);
    ctx->pc = 0x2FDC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC44u;
    // 0x2fdc48: 0xe6200260  swc1        $f0, 0x260($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FDC44u, 0x2FDC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC4Cu;
label_2fdc4c:
    // 0x2fdc4c: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x2fdc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdc50: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2FDC50u;
    SET_GPR_U32(ctx, 31, 0x2FDC58u);
    ctx->pc = 0x2FDC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC50u;
    // 0x2fdc54: 0xe6200264  swc1        $f0, 0x264($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2FDC50u, 0x2FDC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC58u;
label_2fdc58:
    // 0x2fdc58: 0xc62c0260  lwc1        $f12, 0x260($s1)
    ctx->pc = 0x2fdc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdc5c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2FDC5Cu;
    SET_GPR_U32(ctx, 31, 0x2FDC64u);
    ctx->pc = 0x2FDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC5Cu;
    // 0x2fdc60: 0xe6200268  swc1        $f0, 0x268($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2FDC5Cu, 0x2FDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC64u;
label_2fdc64:
    // 0x2fdc64: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fdc68: 0xc623026c  lwc1        $f3, 0x26C($s1)
    ctx->pc = 0x2fdc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdc6c: 0xc44102a4  lwc1        $f1, 0x2A4($v0)
    ctx->pc = 0x2fdc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdc70: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2fdc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdc74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdc74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdc78: 0xc62c0264  lwc1        $f12, 0x264($s1)
    ctx->pc = 0x2fdc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdc7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fdc7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fdc80: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2fdc80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2fdc84: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FDC84u;
    SET_GPR_U32(ctx, 31, 0x2FDC8Cu);
    ctx->pc = 0x2FDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC84u;
    // 0x2fdc88: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FDC84u, 0x2FDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC8Cu;
label_2fdc8c:
    // 0x2fdc8c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fdc90: 0xc623026c  lwc1        $f3, 0x26C($s1)
    ctx->pc = 0x2fdc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdc94: 0xc44102a8  lwc1        $f1, 0x2A8($v0)
    ctx->pc = 0x2fdc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdc98: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2fdc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdc9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdc9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdca0: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x2fdca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdca4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fdca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fdca8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2fdca8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2fdcac: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2FDCACu;
    SET_GPR_U32(ctx, 31, 0x2FDCB4u);
    ctx->pc = 0x2FDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCACu;
    // 0x2fdcb0: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2FDCACu, 0x2FDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCB4u;
label_2fdcb4:
    // 0x2fdcb4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2fdcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2fdcb8: 0xc623026c  lwc1        $f3, 0x26C($s1)
    ctx->pc = 0x2fdcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdcbc: 0xc44102ac  lwc1        $f1, 0x2AC($v0)
    ctx->pc = 0x2fdcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdcc0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fdcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdcc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fdcc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fdcc8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fdcc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fdccc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2fdcccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2fdcd0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2fdcd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2fdcd4:
    // 0x2fdcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fdcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdcd8:
    // 0x2fdcd8: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2FDCD8u;
    SET_GPR_U32(ctx, 31, 0x2FDCE0u);
    ctx->pc = 0x2FDCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCD8u;
    // 0x2fdcdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2FDCD8u, 0x2FDCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCE0u;
label_2fdce0:
    // 0x2fdce0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fdce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fdce4:
    // 0x2fdce4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fdce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fdce8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fdce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fdcec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fdcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fdcf0: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x2fdcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2fdcf4: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x2fdcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2fdcf8: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x2fdcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fdcfc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2fdcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fdd00: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2fdd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fdd04: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2fdd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fdd08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD08u;
        // 0x2fdd0c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD10u;
}
