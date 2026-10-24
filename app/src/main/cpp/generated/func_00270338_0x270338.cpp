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

// Function: func_00270338
// Address: 0x270338 - 0x2705d8
void func_00270338_0x270338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00270338_0x270338");
#endif

    switch (ctx->pc) {
        case 0x270424u: goto label_270424;
        case 0x27043cu: goto label_27043c;
        case 0x27047cu: goto label_27047c;
        case 0x270590u: goto label_270590;
        default: break;
    }

    ctx->pc = 0x270338u;

    // 0x270338: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x270338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27033c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x27033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x270340: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x270340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x270344: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x270344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270348: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x270348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x27034c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x27034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x270350: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x270350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x270354: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x270354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x270358: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x270358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x27035c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x270360: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x270360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x270364: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x270364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x270368: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x270368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x27036c: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x27036Cu;
    {
        const bool branch_taken_0x27036c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27036Cu;
        // 0x270370: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27036c) {
            ctx->pc = 0x2705ACu;
            goto label_2705ac;
        }
    }
    ctx->pc = 0x270374u;
    // 0x270374: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x270374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x270378: 0x24425d10  addiu       $v0, $v0, 0x5D10
    ctx->pc = 0x270378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x27037c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270380: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270384: 0x800008  jr          $a0
    ctx->pc = 0x270384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27038Cu: goto label_27038c;
            case 0x2705ACu: goto label_2705ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270384u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27038Cu;
label_27038c:
    // 0x27038c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x27038cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x270390: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x270390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x270394: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270398u;
    {
        const bool branch_taken_0x270398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270398u;
        // 0x27039c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270398) {
            ctx->pc = 0x2703ACu;
            goto label_2703ac;
        }
    }
    ctx->pc = 0x2703A0u;
    // 0x2703a0: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2703a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2703a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2703A4u;
    {
        const bool branch_taken_0x2703a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A4u;
        // 0x2703a8: 0x8c530074  lw          $s3, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703a4) {
            ctx->pc = 0x2703B0u;
            goto label_2703b0;
        }
    }
    ctx->pc = 0x2703ACu;
label_2703ac:
    // 0x2703ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2703acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2703b0:
    // 0x2703b0: 0x1260007f  beqz        $s3, . + 4 + (0x7F << 2)
    ctx->pc = 0x2703B0u;
    {
        const bool branch_taken_0x2703b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703B0u;
        // 0x2703b4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703b0) {
            ctx->pc = 0x2705B0u;
            goto label_2705b0;
        }
    }
    ctx->pc = 0x2703B8u;
    // 0x2703b8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2703b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2703bc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x2703bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2703c0: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x2703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x2703c4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2703c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2703c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2703c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2703cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2703ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2703d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2703d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2703d4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2703d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2703d8: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2703d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2703dc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2703dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2703e0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2703e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2703e4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2703e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2703e8: 0x26551950  addiu       $s5, $s2, 0x1950
    ctx->pc = 0x2703e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 6480));
    // 0x2703ec: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2703ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2703f0: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2703f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2703f4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2703f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2703f8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2703f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2703fc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2703fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x270400: 0xda441950  lqc2        $vf4, 0x1950($s2)
    ctx->pc = 0x270400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 6480)));
    // 0x270404: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x270404u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x270408: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x270408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27040c: 0xfa441950  sqc2        $vf4, 0x1950($s2)
    ctx->pc = 0x27040cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 6480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x270410: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x270410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x270414: 0x26760080  addiu       $s6, $s3, 0x80
    ctx->pc = 0x270414u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x270418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27041c: 0xc051d5a  jal         func_147568
    ctx->pc = 0x27041Cu;
    SET_GPR_U32(ctx, 31, 0x270424u);
    ctx->pc = 0x270420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27041Cu;
    // 0x270420: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x27041Cu, 0x270424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270424u;
label_270424:
    // 0x270424: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x270424u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x270428: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x270428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27042c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270434: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x270434u;
    SET_GPR_U32(ctx, 31, 0x27043Cu);
    ctx->pc = 0x270438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270434u;
    // 0x270438: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x270434u, 0x27043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27043Cu;
label_27043c:
    // 0x27043c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x27043cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x270440: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x270440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x270444: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x270444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270448: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x270448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27044c: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x27044cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x270450: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x270450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270454: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x270454u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x270458: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x270458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27045c: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x27045cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x270460: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x270460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x270464: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x270464u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x270468: 0x0  nop
    ctx->pc = 0x270468u;
    // NOP
    // 0x27046c: 0x0  nop
    ctx->pc = 0x27046cu;
    // NOP
    // 0x270470: 0x460d0344  c1          0xD0344
    ctx->pc = 0x270470u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x270474: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x270474u;
    SET_GPR_U32(ctx, 31, 0x27047Cu);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x270474u, 0x27047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27047Cu;
label_27047c:
    // 0x27047c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x27047cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x270480: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x270480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x270484: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x270484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x270488: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x270488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27048c: 0x0  nop
    ctx->pc = 0x27048cu;
    // NOP
    // 0x270490: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x270490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270494: 0x0  nop
    ctx->pc = 0x270494u;
    // NOP
    // 0x270498: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x270498u;
    {
        const bool branch_taken_0x270498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270498) {
            ctx->pc = 0x27049Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270498u;
            // 0x27049c: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2704A0u;
            goto label_2704a0;
        }
    }
    ctx->pc = 0x2704A0u;
label_2704a0:
    // 0x2704a0: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x2704a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x2704a4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2704a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2704a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2704a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2704ac: 0x0  nop
    ctx->pc = 0x2704acu;
    // NOP
    // 0x2704b0: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2704b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2704b4: 0x0  nop
    ctx->pc = 0x2704b4u;
    // NOP
    // 0x2704b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2704B8u;
    {
        const bool branch_taken_0x2704b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2704b8) {
            ctx->pc = 0x2704BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2704B8u;
            // 0x2704bc: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2704C0u;
            goto label_2704c0;
        }
    }
    ctx->pc = 0x2704C0u;
label_2704c0:
    // 0x2704c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2704c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2704c4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2704c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2704c8: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x2704c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2704cc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2704ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2704d0: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x2704d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2704d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2704d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2704d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2704d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2704dc: 0xe6600100  swc1        $f0, 0x100($s3)
    ctx->pc = 0x2704dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x2704e0: 0xc6411960  lwc1        $f1, 0x1960($s2)
    ctx->pc = 0x2704e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2704e4: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x2704e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2704e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2704e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2704ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2704ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2704f0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2704f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2704f4: 0x0  nop
    ctx->pc = 0x2704f4u;
    // NOP
    // 0x2704f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2704F8u;
    {
        const bool branch_taken_0x2704f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2704FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704F8u;
        // 0x2704fc: 0xe6600100  swc1        $f0, 0x100($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704f8) {
            ctx->pc = 0x270508u;
            goto label_270508;
        }
    }
    ctx->pc = 0x270500u;
    // 0x270500: 0xe6630100  swc1        $f3, 0x100($s3)
    ctx->pc = 0x270500u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x270504: 0xae401960  sw          $zero, 0x1960($s2)
    ctx->pc = 0x270504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6496), GPR_U32(ctx, 0));
label_270508:
    // 0x270508: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x270508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27050c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x27050cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270510: 0x0  nop
    ctx->pc = 0x270510u;
    // NOP
    // 0x270514: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x270514u;
    {
        const bool branch_taken_0x270514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270514) {
            ctx->pc = 0x270518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270514u;
            // 0x270518: 0xc64405a8  lwc1        $f4, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x270528u;
            goto label_270528;
        }
    }
    ctx->pc = 0x27051Cu;
    // 0x27051c: 0xe6640100  swc1        $f4, 0x100($s3)
    ctx->pc = 0x27051cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x270520: 0xae401960  sw          $zero, 0x1960($s2)
    ctx->pc = 0x270520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6496), GPR_U32(ctx, 0));
    // 0x270524: 0xc64405a8  lwc1        $f4, 0x5A8($s2)
    ctx->pc = 0x270524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_270528:
    // 0x270528: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27052c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27052cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x270530: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x270530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x270534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27053c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270544: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x270544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270548: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x270548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27054c: 0xc6421960  lwc1        $f2, 0x1960($s2)
    ctx->pc = 0x27054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270550: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x270550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x270554: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x270554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x270558: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x270558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27055c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27055cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270560: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x270560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x270564: 0xe6421960  swc1        $f2, 0x1960($s2)
    ctx->pc = 0x270564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6496), bits); }
    // 0x270568: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x270568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27056c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x27056cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x270570: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x270570u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x270574: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x270574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x270578: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x270578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x27057c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27057cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x270580: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x270580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x270584: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x270584u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x270588: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x270588u;
    SET_GPR_U32(ctx, 31, 0x270590u);
    ctx->pc = 0x27058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270588u;
    // 0x27058c: 0xe6421960  swc1        $f2, 0x1960($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x270588u, 0x270590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270590u;
label_270590:
    // 0x270590: 0x12b40006  beq         $s5, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x270590u;
    {
        const bool branch_taken_0x270590 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        ctx->pc = 0x270594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270590u;
        // 0x270594: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270590) {
            ctx->pc = 0x2705ACu;
            goto label_2705ac;
        }
    }
    ctx->pc = 0x270598u;
    // 0x270598: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x270598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27059c: 0xe6401950  swc1        $f0, 0x1950($s2)
    ctx->pc = 0x27059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6480), bits); }
    // 0x2705a0: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2705a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2705a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2705a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2705a8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2705a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2705ac:
    // 0x2705ac: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2705acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2705b0:
    // 0x2705b0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2705b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2705b4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2705b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2705b8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2705b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2705bc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2705bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2705c0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2705c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2705c4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2705c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2705c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2705c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2705cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2705CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2705D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705CCu;
        // 0x2705d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2705CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2705D4u;
    // 0x2705d4: 0x0  nop
    ctx->pc = 0x2705d4u;
    // NOP
    ctx->pc = 0x2705d8u;
}
