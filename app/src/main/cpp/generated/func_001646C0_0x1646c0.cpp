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

// Function: func_001646C0
// Address: 0x1646c0 - 0x164978
void func_001646C0_0x1646c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001646C0_0x1646c0");
#endif

    switch (ctx->pc) {
        case 0x1647a8u: goto label_1647a8;
        case 0x1647b8u: goto label_1647b8;
        case 0x16480cu: goto label_16480c;
        case 0x16481cu: goto label_16481c;
        case 0x164880u: goto label_164880;
        case 0x164890u: goto label_164890;
        case 0x1648e4u: goto label_1648e4;
        case 0x1648f4u: goto label_1648f4;
        default: break;
    }

    ctx->pc = 0x1646c0u;

    // 0x1646c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1646c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1646c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1646c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1646c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1646c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1646cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1646ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646d0: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x1646d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1646d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1646d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1646d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1646dc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1646dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1646e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1646e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1646e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1646e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1646e8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1646e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1646ec: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1646ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1646f0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1646f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1646f4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1646f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1646f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1646f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1646fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1646FCu;
    {
        const bool branch_taken_0x1646fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x164700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646FCu;
        // 0x164700: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646fc) {
            ctx->pc = 0x164718u;
            goto label_164718;
        }
    }
    ctx->pc = 0x164704u;
    // 0x164704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164708: 0x0  nop
    ctx->pc = 0x164708u;
    // NOP
    // 0x16470c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16470cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x164710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164710u;
    {
        const bool branch_taken_0x164710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164710) {
            ctx->pc = 0x164734u;
            goto label_164734;
        }
    }
    ctx->pc = 0x164718u;
label_164718:
    // 0x164718: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16471c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x164720: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x164720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x164724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164728: 0x0  nop
    ctx->pc = 0x164728u;
    // NOP
    // 0x16472c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16472cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x164730: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x164730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_164734:
    // 0x164734: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x164734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164738: 0x0  nop
    ctx->pc = 0x164738u;
    // NOP
    // 0x16473c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16473Cu;
    {
        const bool branch_taken_0x16473c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16473Cu;
        // 0x164740: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16473c) {
            ctx->pc = 0x164758u;
            goto label_164758;
        }
    }
    ctx->pc = 0x164744u;
    // 0x164744: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x164744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x164748: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16474c: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x16474cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164750: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x164750u;
    {
        const bool branch_taken_0x164750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164750u;
        // 0x164754: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164750) {
            ctx->pc = 0x164944u;
            goto label_164944;
        }
    }
    ctx->pc = 0x164758u;
label_164758:
    // 0x164758: 0x4600b824  .word       0x4600B824                   # cvt.w.s     $f0, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16475c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16475cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x164760: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x164760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x164764: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x164764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x164768: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x164768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16476c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x16476cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164770: 0x0  nop
    ctx->pc = 0x164770u;
    // NOP
    // 0x164774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x164774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x164778: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164778u;
    {
        const bool branch_taken_0x164778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x16477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164778u;
        // 0x16477c: 0x4600bdc1  sub.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164778) {
            ctx->pc = 0x164788u;
            goto label_164788;
        }
    }
    ctx->pc = 0x164780u;
    // 0x164780: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x164784: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x164784u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_164788:
    // 0x164788: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x164788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x16478c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16478cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x164790: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x164790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x164794: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x164794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x164798: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x164798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x16479c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x16479cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1647a0: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x1647A0u;
    SET_GPR_U32(ctx, 31, 0x1647A8u);
    ctx->pc = 0x1647A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647A0u;
    // 0x1647a4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x1647A0u, 0x1647A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647A8u;
label_1647a8:
    // 0x1647a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1647a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1647ac: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1647acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1647b0: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x1647B0u;
    SET_GPR_U32(ctx, 31, 0x1647B8u);
    ctx->pc = 0x1647B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647B0u;
    // 0x1647b4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x1647B0u, 0x1647B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647B8u;
label_1647b8:
    // 0x1647b8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1647b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1647bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1647c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1647c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1647c4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1647c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1647c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1647cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1647ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1647d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1647d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1647d4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1647d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1647d8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x1647d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1647dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1647dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1647e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1647e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1647e4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1647e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1647e8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1647e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1647ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1647ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1647f0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1647f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1647f4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1647f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1647f8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1647f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1647fc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1647fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164800: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x164800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x164804: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x164804u;
    SET_GPR_U32(ctx, 31, 0x16480Cu);
    ctx->pc = 0x164808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164804u;
    // 0x164808: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x164804u, 0x16480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16480Cu;
label_16480c:
    // 0x16480c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16480cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x164810: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x164810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x164814: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x164814u;
    SET_GPR_U32(ctx, 31, 0x16481Cu);
    ctx->pc = 0x164818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164814u;
    // 0x164818: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x164814u, 0x16481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16481Cu;
label_16481c:
    // 0x16481c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x16481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x164820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x164820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164824: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x164824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x164828: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x164828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16482c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x16482cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x164830: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x164830u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x164834: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x164834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x164838: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16483c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16483cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x164840: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x164840u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164844: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x164844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164848: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x164848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16484c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x16484cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x164850: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164850u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164854: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x164854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164858: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x164858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16485c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x16485cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164860: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x164860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164864: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x164864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164868: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x164868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16486c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16486cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164870: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x164870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164874: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x164874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x164878: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x164878u;
    SET_GPR_U32(ctx, 31, 0x164880u);
    ctx->pc = 0x16487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164878u;
    // 0x16487c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x164878u, 0x164880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164880u;
label_164880:
    // 0x164880: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x164880u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x164884: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x164884u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x164888: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x164888u;
    SET_GPR_U32(ctx, 31, 0x164890u);
    ctx->pc = 0x16488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164888u;
    // 0x16488c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x164888u, 0x164890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164890u;
label_164890:
    // 0x164890: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x164890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x164894: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x164894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x164898: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x164898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16489c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16489cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1648a0: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x1648a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x1648a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1648a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1648a8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1648a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1648ac: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1648acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1648b0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1648b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1648b4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1648b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1648b8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1648b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1648bc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1648bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1648c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1648c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1648c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1648c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1648c8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1648c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1648cc: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1648ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1648d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1648d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1648d4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1648d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1648d8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1648d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1648dc: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x1648DCu;
    SET_GPR_U32(ctx, 31, 0x1648E4u);
    ctx->pc = 0x1648E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648DCu;
    // 0x1648e0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x1648DCu, 0x1648E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648E4u;
label_1648e4:
    // 0x1648e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1648e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1648e8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1648e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1648ec: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x1648ECu;
    SET_GPR_U32(ctx, 31, 0x1648F4u);
    ctx->pc = 0x1648F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648ECu;
    // 0x1648f0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x1648ECu, 0x1648F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648F4u;
label_1648f4:
    // 0x1648f4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1648f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1648f8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1648f8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1648fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1648fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x164900: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x164904: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x164904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164908: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x164908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16490c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x16490cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164910: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x164910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x164914: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x164914u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x164918: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x164918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16491c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x16491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164920: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x164920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164924: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x164924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164928: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x164928u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16492c: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x16492cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x164930: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x164930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x164934: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x164934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164938: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x164938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16493c: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x16493cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x164940: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x164940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_164944:
    // 0x164944: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x164944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164948: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x164948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16494c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16494cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164950: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x164950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164958: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16495c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x16495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x164960: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x164960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x164964: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x164964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x164968: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x164968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16496c: 0x3e00008  jr          $ra
    ctx->pc = 0x16496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16496Cu;
        // 0x164970: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164974u;
    // 0x164974: 0x0  nop
    ctx->pc = 0x164974u;
    // NOP
    ctx->pc = 0x164978u;
}
