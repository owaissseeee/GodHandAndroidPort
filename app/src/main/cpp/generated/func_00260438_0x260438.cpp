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

// Function: func_00260438
// Address: 0x260438 - 0x260650
void func_00260438_0x260438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00260438_0x260438");
#endif

    switch (ctx->pc) {
        case 0x26048cu: goto label_26048c;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604ecu: goto label_2604ec;
        case 0x260518u: goto label_260518;
        case 0x260530u: goto label_260530;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605f8u: goto label_2605f8;
        case 0x260630u: goto label_260630;
        default: break;
    }

    ctx->pc = 0x260438u;

    // 0x260438: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x260438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x26043c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x26043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x260440: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x260440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x260444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x260444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260448: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x260448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x26044c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x26044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x260450: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x260450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x260454: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x260454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x260458: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x260458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x26045c: 0x38420278  xori        $v0, $v0, 0x278
    ctx->pc = 0x26045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)632);
    // 0x260460: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x260460u;
    {
        const bool branch_taken_0x260460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260460u;
        // 0x260464: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260460) {
            ctx->pc = 0x260634u;
            goto label_260634;
        }
    }
    ctx->pc = 0x260468u;
    // 0x260468: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x260468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x26046c: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x26046cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x260470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260474: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x260474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260478: 0x964502fe  lhu         $a1, 0x2FE($s2)
    ctx->pc = 0x260478u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x26047c: 0xe6401728  swc1        $f0, 0x1728($s2)
    ctx->pc = 0x26047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5928), bits); }
    // 0x260480: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x260480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x260484: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x260484u;
    SET_GPR_U32(ctx, 31, 0x26048Cu);
    ctx->pc = 0x260488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260484u;
    // 0x260488: 0x2406020f  addiu       $a2, $zero, 0x20F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x260484u, 0x26048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26048Cu;
label_26048c:
    // 0x26048c: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26048Cu;
    {
        const bool branch_taken_0x26048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26048Cu;
        // 0x260490: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26048c) {
            ctx->pc = 0x260634u;
            goto label_260634;
        }
    }
    ctx->pc = 0x260494u;
    // 0x260494: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x260494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260498: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x260498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x26049c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2604a0: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x2604a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x2604a4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2604A4u;
    {
        const bool branch_taken_0x2604a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604A4u;
        // 0x2604a8: 0x24020303  addiu       $v0, $zero, 0x303 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604a4) {
            ctx->pc = 0x260508u;
            goto label_260508;
        }
    }
    ctx->pc = 0x2604ACu;
    // 0x2604ac: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2604ACu;
    {
        const bool branch_taken_0x2604ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2604ac) {
            ctx->pc = 0x26053Cu;
            goto label_26053c;
        }
    }
    ctx->pc = 0x2604B4u;
    // 0x2604b4: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2604b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2604b8: 0xc051e62  jal         func_147988
    ctx->pc = 0x2604B8u;
    SET_GPR_U32(ctx, 31, 0x2604C0u);
    ctx->pc = 0x2604BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604B8u;
    // 0x2604bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2604B8u, 0x2604C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604C0u;
label_2604c0:
    // 0x2604c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2604c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2604c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2604c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2604c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2604c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2604cc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2604ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2604d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2604d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2604d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2604d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2604d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2604dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2604dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604e0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2604e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2604e4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2604E4u;
    SET_GPR_U32(ctx, 31, 0x2604ECu);
    ctx->pc = 0x2604E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604E4u;
    // 0x2604e8: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2604E4u, 0x2604ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604ECu;
label_2604ec:
    // 0x2604ec: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2604ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2604f0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2604f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2604f4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2604f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2604f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2604f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2604fc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2604fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x260500: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x260500u;
    {
        const bool branch_taken_0x260500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260500) {
            ctx->pc = 0x260560u;
            goto label_260560;
        }
    }
    ctx->pc = 0x260508u;
label_260508:
    // 0x260508: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x260508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x26050c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26050cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260510: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x260510u;
    SET_GPR_U32(ctx, 31, 0x260518u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x260510u, 0x260518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260518u;
label_260518:
    // 0x260518: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x260518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x26051c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26051cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260520: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x260520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x260524: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x260524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x260528: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x260528u;
    SET_GPR_U32(ctx, 31, 0x260530u);
    ctx->pc = 0x26052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260528u;
    // 0x26052c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x260528u, 0x260530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260530u;
label_260530:
    // 0x260530: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x260530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x260534: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x260534u;
    {
        const bool branch_taken_0x260534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260534u;
        // 0x260538: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260534) {
            ctx->pc = 0x260560u;
            goto label_260560;
        }
    }
    ctx->pc = 0x26053Cu;
label_26053c:
    // 0x26053c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x26053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x260540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260544: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x260544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x260548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26054c: 0x3c01c1a8  lui         $at, 0xC1A8
    ctx->pc = 0x26054cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49576 << 16));
    // 0x260550: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x260550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260554: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x260554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x260558: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x260558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26055c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26055cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_260560:
    // 0x260560: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x260560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260564: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x260564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x260568: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x260568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26056c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x260570: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x260570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260574: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x260574u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260578: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x260578u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26057c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26057cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x260580: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x260580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x260584: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x260584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260588: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x260588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26058c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x26058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260590: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x260590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260594: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x260594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260598: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x260598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26059c: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26059cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x2605a0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2605a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2605a4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2605a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2605a8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2605A8u;
    SET_GPR_U32(ctx, 31, 0x2605B0u);
    ctx->pc = 0x2605ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605A8u;
    // 0x2605ac: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2605A8u, 0x2605B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605B0u;
label_2605b0:
    // 0x2605b0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2605b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2605b4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2605b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2605b8: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x2605b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2605bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2605bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2605c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2605c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2605c4: 0xa2110031  sb          $s1, 0x31($s0)
    ctx->pc = 0x2605c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 17));
    // 0x2605c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2605c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2605cc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2605ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2605d0: 0x964202fe  lhu         $v0, 0x2FE($s2)
    ctx->pc = 0x2605d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x2605d4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2605d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2605d8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2605d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2605dc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2605dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2605e0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2605e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2605e4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2605e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2605e8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2605e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2605ec: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2605ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2605f0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2605F0u;
    SET_GPR_U32(ctx, 31, 0x2605F8u);
    ctx->pc = 0x2605F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605F0u;
    // 0x2605f4: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2605F0u, 0x2605F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605F8u;
label_2605f8:
    // 0x2605f8: 0x2406020f  addiu       $a2, $zero, 0x20F
    ctx->pc = 0x2605f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x2605fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x260600: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x260600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x260604: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x260604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
    // 0x260608: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x260608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x26060c: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x26060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x260610: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x260610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x260614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260618: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x260618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
    // 0x26061c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26061cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260620: 0xa3b100b1  sb          $s1, 0xB1($sp)
    ctx->pc = 0x260620u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 177), (uint8_t)GPR_U32(ctx, 17));
    // 0x260624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260628: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x260628u;
    SET_GPR_U32(ctx, 31, 0x260630u);
    ctx->pc = 0x26062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260628u;
    // 0x26062c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x260628u, 0x260630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260630u;
label_260630:
    // 0x260630: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x260630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_260634:
    // 0x260634: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x260634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x260638: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x260638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26063c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x26063cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x260640: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x260640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x260644: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x260644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x260648: 0x3e00008  jr          $ra
    ctx->pc = 0x260648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260648u;
        // 0x26064c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260650u;
}
