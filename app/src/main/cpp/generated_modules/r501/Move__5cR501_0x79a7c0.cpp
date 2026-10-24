#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: Move__5cR501
// Address: 0x79a7c0 - 0x79a970
void Move__5cR501_0x79a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__5cR501_0x79a7c0");
#endif

    switch (ctx->pc) {
        case 0x79a860u: goto label_79a860;
        case 0x79a884u: goto label_79a884;
        case 0x79a88cu: goto label_79a88c;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a958u: goto label_79a958;
        default: break;
    }

    ctx->pc = 0x79a7c0u;

    // 0x79a7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a7c4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79a7c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7d0: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79a7d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a7d8: 0x24647a8c  addiu       $a0, $v1, 0x7A8C
    ctx->pc = 0x79a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31372));
    // 0x79a7dc: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x79A7DCu;
    {
        const bool branch_taken_0x79a7dc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7DCu;
        // 0x79a7e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7dc) {
            ctx->pc = 0x79A860u;
            goto label_79a860;
        }
    }
    ctx->pc = 0x79A7E4u;
    // 0x79a7e4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a7e8: 0xc484ff88  lwc1        $f4, -0x78($a0)
    ctx->pc = 0x79a7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x79a7ec: 0xc4404c48  lwc1        $f0, 0x4C48($v0)
    ctx->pc = 0x79a7ecu;
    { uint32_t bits = FAST_READ32(0x754C48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a7f0: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x79a7f4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x79a7f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x79a7f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a7fc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x79a7fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x79a800: 0xc60302e4  lwc1        $f3, 0x2E4($s0)
    ctx->pc = 0x79a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79a804: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x79a804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x79a808: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x79a808u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x79a80c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79a80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x79a810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a814: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x79a814u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x79a818: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x79a818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x79a81c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x79a81cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x79a820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a824: 0xc6020394  lwc1        $f2, 0x394($s0)
    ctx->pc = 0x79a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a828: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x79a828u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x79a82c: 0xe60302e4  swc1        $f3, 0x2E4($s0)
    ctx->pc = 0x79a82cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x79a830: 0x3c014409  lui         $at, 0x4409
    ctx->pc = 0x79a830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17417 << 16));
    // 0x79a834: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79a834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79a838: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a83c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x79a83cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x79a840: 0x46051043  div.s       $f1, $f2, $f5
    ctx->pc = 0x79a840u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[5]);
    // 0x79a844: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79a844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x79a848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a84c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x79a84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79a850: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x79a850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x79a854: 0xe6020394  swc1        $f2, 0x394($s0)
    ctx->pc = 0x79a854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
    // 0x79a858: 0xc1e6e6c  jal         func_79B9B0
    ctx->pc = 0x79A858u;
    SET_GPR_U32(ctx, 31, 0x79A860u);
    ctx->pc = 0x79A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A858u;
    // 0x79a85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B9B0u, 0x79A858u, 0x79A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A860u;
label_79a860:
    // 0x79a860: 0x8e030340  lw          $v1, 0x340($s0)
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x79a864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a868: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A868u;
    {
        const bool branch_taken_0x79a868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a868) {
            ctx->pc = 0x79A8D0u;
            goto label_79a8d0;
        }
    }
    ctx->pc = 0x79A870u;
    // 0x79a870: 0x92020399  lbu         $v0, 0x399($s0)
    ctx->pc = 0x79a870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 921)));
    // 0x79a874: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A874u;
    {
        const bool branch_taken_0x79a874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A874u;
        // 0x79a878: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a874) {
            ctx->pc = 0x79A884u;
            goto label_79a884;
        }
    }
    ctx->pc = 0x79A87Cu;
    // 0x79a87c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A87Cu;
    SET_GPR_U32(ctx, 31, 0x79A884u);
    ctx->pc = 0x79A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A87Cu;
    // 0x79a880: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A87Cu, 0x79A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A884u;
label_79a884:
    // 0x79a884: 0xc1e6ac2  jal         func_79AB08
    ctx->pc = 0x79A884u;
    SET_GPR_U32(ctx, 31, 0x79A88Cu);
    ctx->pc = 0x79A888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A884u;
    // 0x79a888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB08u, 0x79A884u, 0x79A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A88Cu;
label_79a88c:
    // 0x79a88c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a890: 0x92030399  lbu         $v1, 0x399($s0)
    ctx->pc = 0x79a890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 921)));
    // 0x79a894: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x79a898: 0xc44c0994  lwc1        $f12, 0x994($v0)
    ctx->pc = 0x79a898u;
    { uint32_t bits = FAST_READ32(0x7A0994u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79a89c: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x79a8a0: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x79a8a4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a8a8: 0x3400b  movn        $t0, $zero, $v1
    ctx->pc = 0x79a8a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x79a8ac: 0x24c60980  addiu       $a2, $a2, 0x980
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2432));
    // 0x79a8b0: 0x24050501  addiu       $a1, $zero, 0x501
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x79a8b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8b8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79A8B8u;
    SET_GPR_U32(ctx, 31, 0x79A8C0u);
    ctx->pc = 0x79A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8B8u;
    // 0x79a8bc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79A8B8u, 0x79A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8C0u;
label_79a8c0:
    // 0x79a8c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a8c4: 0xae000390  sw          $zero, 0x390($s0)
    ctx->pc = 0x79a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
    // 0x79a8c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A8C8u;
    {
        const bool branch_taken_0x79a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C8u;
        // 0x79a8cc: 0xae020340  sw          $v0, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c8) {
            ctx->pc = 0x79A914u;
            goto label_79a914;
        }
    }
    ctx->pc = 0x79A8D0u;
label_79a8d0:
    // 0x79a8d0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A8D0u;
    {
        const bool branch_taken_0x79a8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D0u;
        // 0x79a8d4: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8d0) {
            ctx->pc = 0x79A914u;
            goto label_79a914;
        }
    }
    ctx->pc = 0x79A8D8u;
    // 0x79a8d8: 0x8e020390  lw          $v0, 0x390($s0)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
    // 0x79a8dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a8e0: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x79a8e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x79a8e4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A8E4u;
    {
        const bool branch_taken_0x79a8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E4u;
        // 0x79a8e8: 0xae020390  sw          $v0, 0x390($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e4) {
            ctx->pc = 0x79A914u;
            goto label_79a914;
        }
    }
    ctx->pc = 0x79A8ECu;
    // 0x79a8ec: 0xc1e6ada  jal         func_79AB68
    ctx->pc = 0x79A8ECu;
    SET_GPR_U32(ctx, 31, 0x79A8F4u);
    ctx->pc = 0x79A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ECu;
    // 0x79a8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB68u, 0x79A8ECu, 0x79A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a8f8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a8fc: 0x24a5a970  addiu       $a1, $a1, -0x5690
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945136));
    // 0x79a900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a904: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79A904u;
    SET_GPR_U32(ctx, 31, 0x79A90Cu);
    ctx->pc = 0x79A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A904u;
    // 0x79a908: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A904u, 0x79A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A90Cu;
label_79a90c:
    // 0x79a90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a910: 0xae030340  sw          $v1, 0x340($s0)
    ctx->pc = 0x79a910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 3));
label_79a914:
    // 0x79a914: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a918: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a91c: 0x8c459b70  lw          $a1, -0x6490($v0)
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x569B70u));
    // 0x79a920: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79a920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79a924: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x79a928: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x79a92c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79a930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A930u;
    {
        const bool branch_taken_0x79a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A930u;
        // 0x79a934: 0x26272f84  addiu       $a3, $s1, 0x2F84 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a930) {
            ctx->pc = 0x79A944u;
            goto label_79a944;
        }
    }
    ctx->pc = 0x79A938u;
    // 0x79a938: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a93c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79A93Cu;
    {
        const bool branch_taken_0x79a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x244607e0  addiu       $a2, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a93c) {
            ctx->pc = 0x79A94Cu;
            goto label_79a94c;
        }
    }
    ctx->pc = 0x79A944u;
label_79a944:
    // 0x79a944: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a948: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_79a94c:
    // 0x79a94c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a950: 0xc1e810a  jal         func_7A0428
    ctx->pc = 0x79A950u;
    SET_GPR_U32(ctx, 31, 0x79A958u);
    ctx->pc = 0x79A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A950u;
    // 0x79a954: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0428u, 0x79A950u, 0x79A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A958u;
label_79a958:
    // 0x79a958: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a964: 0x3e00008  jr          $ra
    ctx->pc = 0x79A964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A96Cu;
    // 0x79a96c: 0x0  nop
    ctx->pc = 0x79a96cu;
    // NOP
    ctx->pc = 0x79a970u;
}
} // namespace gh_r501
