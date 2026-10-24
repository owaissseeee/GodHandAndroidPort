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

// Function: func_001B0540
// Address: 0x1b0540 - 0x1b0838
void func_001B0540_0x1b0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0540_0x1b0540");
#endif

    switch (ctx->pc) {
        case 0x1b056cu: goto label_1b056c;
        case 0x1b0590u: goto label_1b0590;
        case 0x1b0668u: goto label_1b0668;
        case 0x1b06a4u: goto label_1b06a4;
        case 0x1b070cu: goto label_1b070c;
        case 0x1b0734u: goto label_1b0734;
        case 0x1b0754u: goto label_1b0754;
        case 0x1b0818u: goto label_1b0818;
        default: break;
    }

    ctx->pc = 0x1b0540u;

    // 0x1b0540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0544: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b0544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b0548: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b0548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b054c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b054cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0554: 0x26300610  addiu       $s0, $s1, 0x610
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x1b0558: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b0558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b055c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b0560: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b0560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b0564: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B0564u;
    SET_GPR_U32(ctx, 31, 0x1B056Cu);
    ctx->pc = 0x1B0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0564u;
    // 0x1b0568: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B0564u, 0x1B056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B056Cu;
label_1b056c:
    // 0x1b056c: 0x0  nop
    ctx->pc = 0x1b056cu;
    // NOP
    // 0x1b0570: 0x0  nop
    ctx->pc = 0x1b0570u;
    // NOP
    // 0x1b0574: 0x46000044  c1          0x44
    ctx->pc = 0x1b0574u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1b0578: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x1b0578u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b057c: 0x0  nop
    ctx->pc = 0x1b057cu;
    // NOP
    // 0x1b0580: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0580u;
    {
        const bool branch_taken_0x1b0580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0580) {
            ctx->pc = 0x1B0594u;
            goto label_1b0594;
        }
    }
    ctx->pc = 0x1B0588u;
    // 0x1b0588: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1B0588u;
    SET_GPR_U32(ctx, 31, 0x1B0590u);
    ctx->pc = 0x1B058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0588u;
    // 0x1b058c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1B0588u, 0x1B0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0590u;
label_1b0590:
    // 0x1b0590: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b0590u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1b0594:
    // 0x1b0594: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1b0594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1b0598: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b0598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b059c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b059cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b05a0: 0x0  nop
    ctx->pc = 0x1b05a0u;
    // NOP
    // 0x1b05a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b05a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b05a8: 0x0  nop
    ctx->pc = 0x1b05a8u;
    // NOP
    // 0x1b05ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B05ACu;
    {
        const bool branch_taken_0x1b05ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b05ac) {
            ctx->pc = 0x1B05B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B05ACu;
            // 0x1b05b0: 0xa2200625  sb          $zero, 0x625($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1573), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B05B4u;
            goto label_1b05b4;
        }
    }
    ctx->pc = 0x1B05B4u;
label_1b05b4:
    // 0x1b05b4: 0x92220625  lbu         $v0, 0x625($s1)
    ctx->pc = 0x1b05b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1573)));
    // 0x1b05b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b05bc: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B05BCu;
    {
        const bool branch_taken_0x1b05bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b05bc) {
            ctx->pc = 0x1B05C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B05BCu;
            // 0x1b05c0: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B05D4u;
            goto label_1b05d4;
        }
    }
    ctx->pc = 0x1B05C4u;
    // 0x1b05c4: 0x92220624  lbu         $v0, 0x624($s1)
    ctx->pc = 0x1b05c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1b05c8: 0x54440015  bnel        $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B05C8u;
    {
        const bool branch_taken_0x1b05c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b05c8) {
            ctx->pc = 0x1B05CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B05C8u;
            // 0x1b05cc: 0xc6200614  lwc1        $f0, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0620u;
            goto label_1b0620;
        }
    }
    ctx->pc = 0x1B05D0u;
    // 0x1b05d0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b05d4:
    // 0x1b05d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b05d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b05d8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1b05d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b05dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b05dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b05e0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b05e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b05e4: 0x92230624  lbu         $v1, 0x624($s1)
    ctx->pc = 0x1b05e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1b05e8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1b05ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b05ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b05f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b05f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b05f4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B05F4u;
    {
        const bool branch_taken_0x1b05f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b05f4) {
            ctx->pc = 0x1B0608u;
            goto label_1b0608;
        }
    }
    ctx->pc = 0x1B05FCu;
    // 0x1b05fc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1b05fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1b0600: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b0600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b0604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0608:
    // 0x1b0608: 0xda240610  lqc2        $vf4, 0x610($s1)
    ctx->pc = 0x1b0608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1b060c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b060cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b0610: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b0610u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b0614: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b0614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b0618: 0xfa240610  sqc2        $vf4, 0x610($s1)
    ctx->pc = 0x1b0618u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b061c: 0xc6200614  lwc1        $f0, 0x614($s1)
    ctx->pc = 0x1b061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0620:
    // 0x1b0620: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1b0624: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b0624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b0628: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b0628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b062c: 0x0  nop
    ctx->pc = 0x1b062cu;
    // NOP
    // 0x1b0630: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0634: 0xe6200614  swc1        $f0, 0x614($s1)
    ctx->pc = 0x1b0634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    // 0x1b0638: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1b0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b063c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1b063cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b0640: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1b0640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1b0644: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b0644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b0648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b064c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b064cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b065c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b065cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0660: 0xc04cb68  jal         func_132DA0
    ctx->pc = 0x1B0660u;
    SET_GPR_U32(ctx, 31, 0x1B0668u);
    ctx->pc = 0x1B0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0660u;
    // 0x1b0664: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x1B0660u, 0x1B0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0668u;
label_1b0668:
    // 0x1b0668: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0668u;
    {
        const bool branch_taken_0x1b0668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0668u;
        // 0x1b066c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0668) {
            ctx->pc = 0x1B0684u;
            goto label_1b0684;
        }
    }
    ctx->pc = 0x1B0670u;
    // 0x1b0670: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b0674: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b0674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b0678: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b0678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b067c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1b067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0680: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b0680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b0684:
    // 0x1b0684: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1b0684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b0688: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b0688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b068c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b068cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b069c: 0xc04ca70  jal         func_1329C0
    ctx->pc = 0x1B069Cu;
    SET_GPR_U32(ctx, 31, 0x1B06A4u);
    ctx->pc = 0x1B06A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B069Cu;
    // 0x1b06a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x1B069Cu, 0x1B06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06A4u;
label_1b06a4:
    // 0x1b06a4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B06A4u;
    {
        const bool branch_taken_0x1b06a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06A4u;
        // 0x1b06a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06a4) {
            ctx->pc = 0x1B076Cu;
            goto label_1b076c;
        }
    }
    ctx->pc = 0x1B06ACu;
    // 0x1b06ac: 0x92230624  lbu         $v1, 0x624($s1)
    ctx->pc = 0x1b06acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1b06b0: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B06B0u;
    {
        const bool branch_taken_0x1b06b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06B0u;
        // 0x1b06b4: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06b0) {
            ctx->pc = 0x1B075Cu;
            goto label_1b075c;
        }
    }
    ctx->pc = 0x1B06B8u;
    // 0x1b06b8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b06bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b06bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b06c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b06c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b06c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b06c8: 0x0  nop
    ctx->pc = 0x1b06c8u;
    // NOP
    // 0x1b06cc: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x1B06CCu;
    {
        const bool branch_taken_0x1b06cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b06cc) {
            ctx->pc = 0x1B06D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B06CCu;
            // 0x1b06d0: 0xde220620  ld          $v0, 0x620($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0770u;
            goto label_1b0770;
        }
    }
    ctx->pc = 0x1B06D4u;
    // 0x1b06d4: 0xc6200610  lwc1        $f0, 0x610($s1)
    ctx->pc = 0x1b06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b06d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b06d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b06dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b06dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b06e0: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x1b06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b06e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b06e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b06e8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1b06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b06ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b06ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b06f0: 0xa2200624  sb          $zero, 0x624($s1)
    ctx->pc = 0x1b06f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1572), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b06f4: 0xa6200622  sh          $zero, 0x622($s1)
    ctx->pc = 0x1b06f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1570), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b06f8: 0xe6200610  swc1        $f0, 0x610($s1)
    ctx->pc = 0x1b06f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
    // 0x1b06fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B06FCu;
    {
        const bool branch_taken_0x1b06fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06FCu;
        // 0x1b0700: 0xe6210618  swc1        $f1, 0x618($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06fc) {
            ctx->pc = 0x1B070Cu;
            goto label_1b070c;
        }
    }
    ctx->pc = 0x1B0704u;
    // 0x1b0704: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B0704u;
    SET_GPR_U32(ctx, 31, 0x1B070Cu);
    ctx->pc = 0x1B0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0704u;
    // 0x1b0708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B0704u, 0x1B070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B070Cu;
label_1b070c:
    // 0x1b070c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b0710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0714: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1b0714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1b0718: 0x24060091  addiu       $a2, $zero, 0x91
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x1b071c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0720: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0724: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b0724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b0728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b072c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1B072Cu;
    SET_GPR_U32(ctx, 31, 0x1B0734u);
    ctx->pc = 0x1B0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B072Cu;
    // 0x1b0730: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1B072Cu, 0x1B0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0734u;
label_1b0734:
    // 0x1b0734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0738: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b073c: 0x24060092  addiu       $a2, $zero, 0x92
    ctx->pc = 0x1b073cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x1b0740: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0744: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b0744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0748: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b0748u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b074c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1B074Cu;
    SET_GPR_U32(ctx, 31, 0x1B0754u);
    ctx->pc = 0x1B0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B074Cu;
    // 0x1b0750: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1B074Cu, 0x1B0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0754u;
label_1b0754:
    // 0x1b0754: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0754u;
    {
        const bool branch_taken_0x1b0754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0754u;
        // 0x1b0758: 0xde220620  ld          $v0, 0x620($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0754) {
            ctx->pc = 0x1B0770u;
            goto label_1b0770;
        }
    }
    ctx->pc = 0x1B075Cu;
label_1b075c:
    // 0x1b075c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b075cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0760: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b0760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b0764: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b0764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b0768: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b0768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b076c:
    // 0x1b076c: 0xde220620  ld          $v0, 0x620($s1)
    ctx->pc = 0x1b076cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1568)));
label_1b0770:
    // 0x1b0770: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1b0770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b0774: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0778: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1b0778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b077c: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1b077cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x1b0780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b0780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b0784: 0x14440027  bne         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B0784u;
    {
        const bool branch_taken_0x1b0784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0784u;
        // 0x1b0788: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0784) {
            ctx->pc = 0x1B0824u;
            goto label_1b0824;
        }
    }
    ctx->pc = 0x1B078Cu;
    // 0x1b078c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1b078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1b0790: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x1b0790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x1b0794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b0794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b0798: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0798u;
    {
        const bool branch_taken_0x1b0798 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0798u;
        // 0x1b079c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0798) {
            ctx->pc = 0x1B07B4u;
            goto label_1b07b4;
        }
    }
    ctx->pc = 0x1B07A0u;
    // 0x1b07a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b07a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b07a4: 0x0  nop
    ctx->pc = 0x1b07a4u;
    // NOP
    // 0x1b07a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b07a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b07ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B07ACu;
    {
        const bool branch_taken_0x1b07ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b07ac) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B07B4u;
label_1b07b4:
    // 0x1b07b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b07b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b07b8: 0x0  nop
    ctx->pc = 0x1b07b8u;
    // NOP
    // 0x1b07bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b07bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b07c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b07c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b07c4:
    // 0x1b07c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b07c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b07c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b07c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b07cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b07ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b07d0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b07d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b07d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b07d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b07dc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b07dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b07e0: 0x86220622  lh          $v0, 0x622($s1)
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1570)));
    // 0x1b07e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B07E4u;
    {
        const bool branch_taken_0x1b07e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1B07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07E4u;
        // 0x1b07e8: 0x96230622  lhu         $v1, 0x622($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07e4) {
            ctx->pc = 0x1B07F8u;
            goto label_1b07f8;
        }
    }
    ctx->pc = 0x1B07ECu;
    // 0x1b07ec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b07f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B07F0u;
    {
        const bool branch_taken_0x1b07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F0u;
        // 0x1b07f4: 0xa6220622  sh          $v0, 0x622($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1570), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07f0) {
            ctx->pc = 0x1B0820u;
            goto label_1b0820;
        }
    }
    ctx->pc = 0x1B07F8u;
label_1b07f8:
    // 0x1b07f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b07f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1b07fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b07fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0804: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b080c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b080cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0810: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1B0810u;
    SET_GPR_U32(ctx, 31, 0x1B0818u);
    ctx->pc = 0x1B0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0810u;
    // 0x1b0814: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B0810u, 0x1B0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0818u;
label_1b0818:
    // 0x1b0818: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b0818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b081c: 0xa6230622  sh          $v1, 0x622($s1)
    ctx->pc = 0x1b081cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1570), (uint16_t)GPR_U32(ctx, 3));
label_1b0820:
    // 0x1b0820: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b0820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0824:
    // 0x1b0824: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b0824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b082c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B082Cu;
        // 0x1b0830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B082Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0834u;
    // 0x1b0834: 0x0  nop
    ctx->pc = 0x1b0834u;
    // NOP
    ctx->pc = 0x1b0838u;
}
