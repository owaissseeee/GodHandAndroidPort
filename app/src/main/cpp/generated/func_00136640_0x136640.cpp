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

// Function: func_00136640
// Address: 0x136640 - 0x136a88
void func_00136640_0x136640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00136640_0x136640");
#endif

    switch (ctx->pc) {
        case 0x136708u: goto label_136708;
        case 0x13671cu: goto label_13671c;
        case 0x13672cu: goto label_13672c;
        case 0x1367f0u: goto label_1367f0;
        case 0x136848u: goto label_136848;
        default: break;
    }

    ctx->pc = 0x136640u;

    // 0x136640: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x136644: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x136644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x136648: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x136648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x13664c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x13664cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136650: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x136650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x136654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136658: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x136658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x13665c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x13665cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136660: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x136660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136664: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x136664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x136668: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x136668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x13666c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x13666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x136670: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x136670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x136674: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x136674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x136678: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x136678u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x13667c: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x13667cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x136680: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x136680u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x136684: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x136684u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x136688: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x136688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x13668c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x13668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136690: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x136690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136694: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x136694u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x136698: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x136698u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13669c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x13669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1366a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1366a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1366a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1366a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1366a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1366a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1366ac: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1366acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1366b0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1366b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1366b4: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1366b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1366b8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1366b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1366bc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1366bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1366c0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1366c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1366c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1366c8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1366c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1366cc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1366ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1366d0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1366d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1366d4: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1366d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1366d8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1366d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1366dc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1366dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1366e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1366e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1366e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1366e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1366e8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1366e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1366ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1366ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1366f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366f4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1366f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1366f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1366f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1366fc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1366fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x136700: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136700u;
    SET_GPR_U32(ctx, 31, 0x136708u);
    ctx->pc = 0x136704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136700u;
    // 0x136704: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136700u, 0x136708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136708u;
label_136708:
    // 0x136708: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x136708u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13670c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x13670cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x136710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136714: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136714u;
    SET_GPR_U32(ctx, 31, 0x13671Cu);
    ctx->pc = 0x136718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136714u;
    // 0x136718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136714u, 0x13671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13671Cu;
label_13671c:
    // 0x13671c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136720: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x136720u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x136724: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136724u;
    SET_GPR_U32(ctx, 31, 0x13672Cu);
    ctx->pc = 0x136728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136724u;
    // 0x136728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136724u, 0x13672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13672Cu;
label_13672c:
    // 0x13672c: 0x4616b836  c.le.s      $f23, $f22
    ctx->pc = 0x13672cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136730: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x136730u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x136734: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x136734u;
    {
        const bool branch_taken_0x136734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136734u;
        // 0x136738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136734) {
            ctx->pc = 0x136794u;
            goto label_136794;
        }
    }
    ctx->pc = 0x13673Cu;
    // 0x13673c: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x13673cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136740: 0x0  nop
    ctx->pc = 0x136740u;
    // NOP
    // 0x136744: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x136744u;
    {
        const bool branch_taken_0x136744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136744) {
            ctx->pc = 0x136790u;
            goto label_136790;
        }
    }
    ctx->pc = 0x13674Cu;
    // 0x13674c: 0x12530007  beq         $s2, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x13674Cu;
    {
        const bool branch_taken_0x13674c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x13674c) {
            ctx->pc = 0x13676Cu;
            goto label_13676c;
        }
    }
    ctx->pc = 0x136754u;
    // 0x136754: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x136754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136758: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x136758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x13675c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x13675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136760: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x136760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x136764: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x136764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136768: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x136768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_13676c:
    // 0x13676c: 0x129500b5  beq         $s4, $s5, . + 4 + (0xB5 << 2)
    ctx->pc = 0x13676Cu;
    {
        const bool branch_taken_0x13676c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x136770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13676Cu;
        // 0x136770: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13676c) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x136774u;
    // 0x136774: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x136774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136778: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x136778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x13677c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x13677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136780: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x136780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x136784: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x136784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136788: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x136788u;
    {
        const bool branch_taken_0x136788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136788u;
        // 0x13678c: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136788) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x136790u;
label_136790:
    // 0x136790: 0x4616b836  c.le.s      $f23, $f22
    ctx->pc = 0x136790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136794:
    // 0x136794: 0x0  nop
    ctx->pc = 0x136794u;
    // NOP
    // 0x136798: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x136798u;
    {
        const bool branch_taken_0x136798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136798) {
            ctx->pc = 0x1367E8u;
            goto label_1367e8;
        }
    }
    ctx->pc = 0x1367A0u;
    // 0x1367a0: 0x0  nop
    ctx->pc = 0x1367a0u;
    // NOP
    // 0x1367a4: 0x0  nop
    ctx->pc = 0x1367a4u;
    // NOP
    // 0x1367a8: 0x4614c0c3  div.s       $f3, $f24, $f20
    ctx->pc = 0x1367a8u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[20]);
    // 0x1367ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1367acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1367b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1367b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1367b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1367b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1367b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1367b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1367bc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1367bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1367c0: 0x0  nop
    ctx->pc = 0x1367c0u;
    // NOP
    // 0x1367c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1367C4u;
    {
        const bool branch_taken_0x1367c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1367C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C4u;
        // 0x1367c8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367c4) {
            ctx->pc = 0x1367D0u;
            goto label_1367d0;
        }
    }
    ctx->pc = 0x1367CCu;
    // 0x1367cc: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x1367ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_1367d0:
    // 0x1367d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1367d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1367d4: 0x0  nop
    ctx->pc = 0x1367d4u;
    // NOP
    // 0x1367d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1367D8u;
    {
        const bool branch_taken_0x1367d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1367d8) {
            ctx->pc = 0x1367DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1367D8u;
            // 0x1367dc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1367E0u;
            goto label_1367e0;
        }
    }
    ctx->pc = 0x1367E0u;
label_1367e0:
    // 0x1367e0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1367E0u;
    {
        const bool branch_taken_0x1367e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367E0u;
        // 0x1367e4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367e0) {
            ctx->pc = 0x136978u;
            goto label_136978;
        }
    }
    ctx->pc = 0x1367E8u;
label_1367e8:
    // 0x1367e8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1367E8u;
    SET_GPR_U32(ctx, 31, 0x1367F0u);
    ctx->pc = 0x1367ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1367E8u;
    // 0x1367ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1367E8u, 0x1367F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367F0u;
label_1367f0:
    // 0x1367f0: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x1367f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1367f4: 0x0  nop
    ctx->pc = 0x1367f4u;
    // NOP
    // 0x1367f8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1367F8u;
    {
        const bool branch_taken_0x1367f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1367FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F8u;
        // 0x1367fc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367f8) {
            ctx->pc = 0x13683Cu;
            goto label_13683c;
        }
    }
    ctx->pc = 0x136800u;
    // 0x136800: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x136800u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x136804: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136808: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x136808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13680c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13680cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x136810: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x136810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x136814: 0x0  nop
    ctx->pc = 0x136814u;
    // NOP
    // 0x136818: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x136818u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[23]);
    // 0x13681c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x13681cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136820: 0x0  nop
    ctx->pc = 0x136820u;
    // NOP
    // 0x136824: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136824u;
    {
        const bool branch_taken_0x136824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136824u;
        // 0x136828: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136824) {
            ctx->pc = 0x136830u;
            goto label_136830;
        }
    }
    ctx->pc = 0x13682Cu;
    // 0x13682c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13682cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_136830:
    // 0x136830: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x136830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136834: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x136834u;
    {
        const bool branch_taken_0x136834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136834u;
        // 0x136838: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136834) {
            ctx->pc = 0x13696Cu;
            goto label_13696c;
        }
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136840: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136840u;
    SET_GPR_U32(ctx, 31, 0x136848u);
    ctx->pc = 0x136844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136840u;
    // 0x136844: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136840u, 0x136848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136848u;
label_136848:
    // 0x136848: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x136848u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x13684c: 0x4614b842  mul.s       $f1, $f23, $f20
    ctx->pc = 0x13684cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x136850: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x136850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x136854: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x136854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x136858: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x136858u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13685c: 0x46053032  c.eq.s      $f6, $f5
    ctx->pc = 0x13685cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136860: 0x0  nop
    ctx->pc = 0x136860u;
    // NOP
    // 0x136864: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x136864u;
    {
        const bool branch_taken_0x136864 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136864u;
        // 0x136868: 0x46002886  mov.s       $f2, $f5 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136864) {
            ctx->pc = 0x1368B8u;
            goto label_1368b8;
        }
    }
    ctx->pc = 0x13686Cu;
    // 0x13686c: 0x46182002  mul.s       $f0, $f4, $f24
    ctx->pc = 0x13686cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x136870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136874: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x136874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x136878: 0x4614a842  mul.s       $f1, $f21, $f20
    ctx->pc = 0x136878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x13687c: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x13687cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x136880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x136880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x136884: 0x0  nop
    ctx->pc = 0x136884u;
    // NOP
    // 0x136888: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x136888u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[6]);
    // 0x13688c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x13688cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136890: 0x0  nop
    ctx->pc = 0x136890u;
    // NOP
    // 0x136894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136894u;
    {
        const bool branch_taken_0x136894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136894u;
        // 0x136898: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136894) {
            ctx->pc = 0x1368A0u;
            goto label_1368a0;
        }
    }
    ctx->pc = 0x13689Cu;
    // 0x13689c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x13689cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_1368a0:
    // 0x1368a0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1368a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1368a4: 0x0  nop
    ctx->pc = 0x1368a4u;
    // NOP
    // 0x1368a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1368A8u;
    {
        const bool branch_taken_0x1368a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1368ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A8u;
        // 0x1368ac: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368a8) {
            ctx->pc = 0x1368B4u;
            goto label_1368b4;
        }
    }
    ctx->pc = 0x1368B0u;
    // 0x1368b0: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1368b0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1368b4:
    // 0x1368b4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1368b4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1368b8:
    // 0x1368b8: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x1368b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1368bc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1368bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1368c0: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1368c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1368c4: 0x0  nop
    ctx->pc = 0x1368c4u;
    // NOP
    // 0x1368c8: 0x461400c3  div.s       $f3, $f0, $f20
    ctx->pc = 0x1368c8u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x1368cc: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x1368ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1368d0: 0x0  nop
    ctx->pc = 0x1368d0u;
    // NOP
    // 0x1368d4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1368D4u;
    {
        const bool branch_taken_0x1368d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368d4) {
            ctx->pc = 0x13691Cu;
            goto label_13691c;
        }
    }
    ctx->pc = 0x1368DCu;
    // 0x1368dc: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x1368dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x1368e0: 0x460028c6  mov.s       $f3, $f5
    ctx->pc = 0x1368e0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
    // 0x1368e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1368e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1368e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1368ec: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x1368ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x1368f0: 0x0  nop
    ctx->pc = 0x1368f0u;
    // NOP
    // 0x1368f4: 0x0  nop
    ctx->pc = 0x1368f4u;
    // NOP
    // 0x1368f8: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x1368f8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[23]);
    // 0x1368fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1368fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136900: 0x0  nop
    ctx->pc = 0x136900u;
    // NOP
    // 0x136904: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136904u;
    {
        const bool branch_taken_0x136904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136904u;
        // 0x136908: 0xe7a2006c  swc1        $f2, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136904) {
            ctx->pc = 0x136910u;
            goto label_136910;
        }
    }
    ctx->pc = 0x13690Cu;
    // 0x13690c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13690cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_136910:
    // 0x136910: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x136910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136914: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x136914u;
    {
        const bool branch_taken_0x136914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136914u;
        // 0x136918: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136914) {
            ctx->pc = 0x13696Cu;
            goto label_13696c;
        }
    }
    ctx->pc = 0x13691Cu;
label_13691c:
    // 0x13691c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13691cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136920: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136924: 0x0  nop
    ctx->pc = 0x136924u;
    // NOP
    // 0x136928: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x136928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13692c: 0x0  nop
    ctx->pc = 0x13692cu;
    // NOP
    // 0x136930: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x136930u;
    {
        const bool branch_taken_0x136930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136930u;
        // 0x136934: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136930) {
            ctx->pc = 0x13697Cu;
            goto label_13697c;
        }
    }
    ctx->pc = 0x136938u;
    // 0x136938: 0x46152001  sub.s       $f0, $f4, $f21
    ctx->pc = 0x136938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x13693c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x13693cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x136940: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x136940u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x136944: 0x0  nop
    ctx->pc = 0x136944u;
    // NOP
    // 0x136948: 0x0  nop
    ctx->pc = 0x136948u;
    // NOP
    // 0x13694c: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x13694cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[23]);
    // 0x136950: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x136950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136954: 0x0  nop
    ctx->pc = 0x136954u;
    // NOP
    // 0x136958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136958u;
    {
        const bool branch_taken_0x136958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136958u;
        // 0x13695c: 0xe7a30070  swc1        $f3, 0x70($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136958) {
            ctx->pc = 0x136964u;
            goto label_136964;
        }
    }
    ctx->pc = 0x136960u;
    // 0x136960: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x136960u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_136964:
    // 0x136964: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x136964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136968: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x136968u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_13696c:
    // 0x13696c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13696Cu;
    {
        const bool branch_taken_0x13696c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13696c) {
            ctx->pc = 0x136970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13696Cu;
            // 0x136970: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x136974u;
label_136974:
    // 0x136974: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x136974u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_136978:
    // 0x136978: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x136978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13697c:
    // 0x13697c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13697cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136980: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x136980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136984: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x136984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136988: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x136988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x13698c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x13698cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x136990: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x136990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136994: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x136994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136998: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13699c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1369a0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1369a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1369a4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1369a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1369a8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1369a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1369ac: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1369acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1369b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1369b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1369b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1369b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1369b8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1369b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1369bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1369bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1369c0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1369c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1369c4: 0x12570006  beq         $s2, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1369C4u;
    {
        const bool branch_taken_0x1369c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x1369C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369C4u;
        // 0x1369c8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369c4) {
            ctx->pc = 0x1369E0u;
            goto label_1369e0;
        }
    }
    ctx->pc = 0x1369CCu;
    // 0x1369cc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1369ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1369d0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1369d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1369d4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1369d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1369d8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1369d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1369dc: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1369dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1369e0:
    // 0x1369e0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1369e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1369e4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1369e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1369e8: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1369e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1369ec: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1369ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1369f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1369f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1369f4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1369f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1369f8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1369f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1369fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1369fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136a00: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x136a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136a04: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x136a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x136a08: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x136a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136a0c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x136a0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136a10: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x136a10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136a14: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x136a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136a18: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x136a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136a1c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136a20: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x136a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136a24: 0x12970006  beq         $s4, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x136A24u;
    {
        const bool branch_taken_0x136a24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 23));
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A24u;
        // 0x136a28: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a24) {
            ctx->pc = 0x136A40u;
            goto label_136a40;
        }
    }
    ctx->pc = 0x136A2Cu;
    // 0x136a2c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x136a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136a30: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x136a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136a34: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x136a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x136a38: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x136a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x136a3c: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x136a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_136a40:
    // 0x136a40: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x136a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_136a44:
    // 0x136a44: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x136a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x136a48: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x136a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x136a4c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x136a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x136a50: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x136a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x136a54: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x136a54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x136a58: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x136a58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136a5c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x136a5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x136a60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x136a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136a64: 0xc7b80130  lwc1        $f24, 0x130($sp)
    ctx->pc = 0x136a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x136a68: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x136a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x136a6c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x136a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x136a70: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x136a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x136a74: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x136a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136a78: 0x3e00008  jr          $ra
    ctx->pc = 0x136A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A78u;
        // 0x136a7c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136A80u;
    // 0x136a80: 0x0  nop
    ctx->pc = 0x136a80u;
    // NOP
    // 0x136a84: 0x0  nop
    ctx->pc = 0x136a84u;
    // NOP
    ctx->pc = 0x136a88u;
}
