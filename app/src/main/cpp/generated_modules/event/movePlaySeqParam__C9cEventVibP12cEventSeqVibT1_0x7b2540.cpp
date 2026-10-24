#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlaySeqParam__C9cEventVibP12cEventSeqVibT1
// Address: 0x7b2540 - 0x7b2788
void movePlaySeqParam__C9cEventVibP12cEventSeqVibT1_0x7b2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeqParam__C9cEventVibP12cEventSeqVibT1_0x7b2540");
#endif

    switch (ctx->pc) {
        case 0x7b25bcu: goto label_7b25bc;
        case 0x7b25dcu: goto label_7b25dc;
        case 0x7b25f0u: goto label_7b25f0;
        case 0x7b26a8u: goto label_7b26a8;
        case 0x7b26dcu: goto label_7b26dc;
        case 0x7b26f4u: goto label_7b26f4;
        case 0x7b2740u: goto label_7b2740;
        case 0x7b275cu: goto label_7b275c;
        default: break;
    }

    ctx->pc = 0x7b2540u;

    // 0x7b2540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b2544: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b2544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b2548: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b254c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7b254cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2550: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b2550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b2554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7b2554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2558: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b255c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b2560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2564: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x7b2564u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x7b2568: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x7b2568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x7b256c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x7b256cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x7b2570: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x7b2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x7b2574: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x7B2574u;
    {
        const bool branch_taken_0x7b2574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2574u;
        // 0x7b2578: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2574) {
            ctx->pc = 0x7B26E4u;
            goto label_7b26e4;
        }
    }
    ctx->pc = 0x7B257Cu;
    // 0x7b257c: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
    ctx->pc = 0x7B257Cu;
    {
        const bool branch_taken_0x7b257c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B257Cu;
        // 0x7b2580: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b257c) {
            ctx->pc = 0x7B2760u;
            goto label_7b2760;
        }
    }
    ctx->pc = 0x7B2584u;
    // 0x7b2584: 0x56510005  bnel        $s2, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B2584u;
    {
        const bool branch_taken_0x7b2584 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x7b2584) {
            ctx->pc = 0x7B2588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2584u;
            // 0x7b2588: 0x86420006  lh          $v0, 0x6($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B259Cu;
            goto label_7b259c;
        }
    }
    ctx->pc = 0x7B258Cu;
    // 0x7b258c: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x7b258cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x7b2590: 0x92500016  lbu         $s0, 0x16($s2)
    ctx->pc = 0x7b2590u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x7b2594: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x7B2594u;
    {
        const bool branch_taken_0x7b2594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2594u;
        // 0x7b2598: 0x92450014  lbu         $a1, 0x14($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2594) {
            ctx->pc = 0x7B2674u;
            goto label_7b2674;
        }
    }
    ctx->pc = 0x7B259Cu;
label_7b259c:
    // 0x7b259c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7b259cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7b25a0: 0x26105248  addiu       $s0, $s0, 0x5248
    ctx->pc = 0x7b25a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21064));
    // 0x7b25a4: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x7b25a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x7b25a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b25a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b25ac: 0x0  nop
    ctx->pc = 0x7b25acu;
    // NOP
    // 0x7b25b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b25b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b25b4: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B25B4u;
    SET_GPR_U32(ctx, 31, 0x7B25BCu);
    ctx->pc = 0x7B25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B25B4u;
    // 0x7b25b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B25B4u, 0x7B25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B25BCu;
label_7b25bc:
    // 0x7b25bc: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x7b25bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x7b25c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b25c4: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x7b25c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x7b25c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7b25c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7b25cc: 0x0  nop
    ctx->pc = 0x7b25ccu;
    // NOP
    // 0x7b25d0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7b25d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7b25d4: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B25D4u;
    SET_GPR_U32(ctx, 31, 0x7B25DCu);
    ctx->pc = 0x7B25D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B25D4u;
    // 0x7b25d8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B25D4u, 0x7B25DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B25DCu;
label_7b25dc:
    // 0x7b25dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b25dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b25e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x7b25e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x7b25e4: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x7b25e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x7b25e8: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7B25E8u;
    SET_GPR_U32(ctx, 31, 0x7B25F0u);
    ctx->pc = 0x7B25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B25E8u;
    // 0x7b25ec: 0xc48c000c  lwc1        $f12, 0xC($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7B25E8u, 0x7B25F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B25F0u;
label_7b25f0:
    // 0x7b25f0: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x7b25f0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x7b25f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7b25f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7b25f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x7b25f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7b25fc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x7b25fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x7b2600: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x7b2600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x7b2604: 0x92240016  lbu         $a0, 0x16($s1)
    ctx->pc = 0x7b2604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x7b2608: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x7b2608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7b260c: 0x0  nop
    ctx->pc = 0x7b260cu;
    // NOP
    // 0x7b2610: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x7b2610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x7b2614: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x7b2614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7b2618: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x7b2618u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x7b261c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x7b261cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b2620: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x7b2620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7b2624: 0x0  nop
    ctx->pc = 0x7b2624u;
    // NOP
    // 0x7b2628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7b2628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7b262c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x7b262cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7b2630: 0x0  nop
    ctx->pc = 0x7b2630u;
    // NOP
    // 0x7b2634: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7b2634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7b2638: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x7b2638u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b263c: 0x0  nop
    ctx->pc = 0x7b263cu;
    // NOP
    // 0x7b2640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7b2640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7b2644: 0x46142501  sub.s       $f20, $f4, $f20
    ctx->pc = 0x7b2644u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x7b2648: 0x46142101  sub.s       $f4, $f4, $f20
    ctx->pc = 0x7b2648u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x7b264c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x7b264cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x7b2650: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x7b2650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x7b2654: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x7b2654u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x7b2658: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x7b2658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x7b265c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x7b265cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x7b2660: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x7b2660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x7b2664: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b2664u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7b2668: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x7b2668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x7b266c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7b266cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7b2670: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x7b2670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_7b2674:
    // 0x7b2674: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7b2674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7b2678: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x7b2678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x7b267c: 0x245474a0  addiu       $s4, $v0, 0x74A0
    ctx->pc = 0x7b267cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7b2680: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7b2680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b2684: 0x8e860564  lw          $a2, 0x564($s4)
    ctx->pc = 0x7b2684u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x747A04u));
    // 0x7b2688: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x7b2688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x7b268c: 0x24718140  addiu       $s1, $v1, -0x7EC0
    ctx->pc = 0x7b268cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x7b2690: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x7b2690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x7b2694: 0xd23004  sllv        $a2, $s2, $a2
    ctx->pc = 0x7b2694u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    // 0x7b2698: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x7b2698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7b269c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x7b269cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x7b26a0: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x7B26A0u;
    SET_GPR_U32(ctx, 31, 0x7B26A8u);
    ctx->pc = 0x7B26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B26A0u;
    // 0x7b26a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x7B26A0u, 0x7B26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B26A8u;
label_7b26a8:
    // 0x7b26a8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x7b26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x7b26ac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x7b26acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x7b26b0: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x7b26b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x7b26b4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x7B26B4u;
    {
        const bool branch_taken_0x7b26b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B26B4u;
        // 0x7b26b8: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b26b4) {
            ctx->pc = 0x7B275Cu;
            goto label_7b275c;
        }
    }
    ctx->pc = 0x7B26BCu;
    // 0x7b26bc: 0x2462ff01  addiu       $v0, $v1, -0xFF
    ctx->pc = 0x7b26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
    // 0x7b26c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7b26c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b26c4: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x7b26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x7b26c8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x7b26c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x7b26cc: 0x8e860564  lw          $a2, 0x564($s4)
    ctx->pc = 0x7b26ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1380)));
    // 0x7b26d0: 0xd23004  sllv        $a2, $s2, $a2
    ctx->pc = 0x7b26d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    // 0x7b26d4: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x7B26D4u;
    SET_GPR_U32(ctx, 31, 0x7B26DCu);
    ctx->pc = 0x7B26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B26D4u;
    // 0x7b26d8: 0x63400  sll         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x7B26D4u, 0x7B26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B26DCu;
label_7b26dc:
    // 0x7b26dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7B26DCu;
    {
        const bool branch_taken_0x7b26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B26DCu;
        // 0x7b26e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b26dc) {
            ctx->pc = 0x7B2760u;
            goto label_7b2760;
        }
    }
    ctx->pc = 0x7B26E4u;
label_7b26e4:
    // 0x7b26e4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b26e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7b26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b26ec: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7B26ECu;
    SET_GPR_U32(ctx, 31, 0x7B26F4u);
    ctx->pc = 0x7B26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B26ECu;
    // 0x7b26f0: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7B26ECu, 0x7B26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B26F4u;
label_7b26f4:
    // 0x7b26f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7b26f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7b26f8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7B26F8u;
    {
        const bool branch_taken_0x7b26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B26F8u;
        // 0x7b26fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b26f8) {
            ctx->pc = 0x7B2760u;
            goto label_7b2760;
        }
    }
    ctx->pc = 0x7B2700u;
    // 0x7b2700: 0x16510018  bne         $s2, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x7B2700u;
    {
        const bool branch_taken_0x7b2700 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x7B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2700u;
        // 0x7b2704: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2700) {
            ctx->pc = 0x7B2764u;
            goto label_7b2764;
        }
    }
    ctx->pc = 0x7B2708u;
    // 0x7b2708: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x7b2708u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x7b270c: 0x92420014  lbu         $v0, 0x14($s2)
    ctx->pc = 0x7b270cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7b2710: 0x263174a0  addiu       $s1, $s1, 0x74A0
    ctx->pc = 0x7b2710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x7b2714: 0x92460015  lbu         $a2, 0x15($s2)
    ctx->pc = 0x7b2714u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x7b2718: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x7b2718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x7b271c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7b271cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x7b2720: 0x26108140  addiu       $s0, $s0, -0x7EC0
    ctx->pc = 0x7b2720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x7b2724: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7b2724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7b2728: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x7b2728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x7b272c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x7b272cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x7b2730: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x7b2730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7b2734: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x7b2734u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x7b2738: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x7B2738u;
    SET_GPR_U32(ctx, 31, 0x7B2740u);
    ctx->pc = 0x7B273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2738u;
    // 0x7b273c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x7B2738u, 0x7B2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2740u;
label_7b2740:
    // 0x7b2740: 0x92460017  lbu         $a2, 0x17($s2)
    ctx->pc = 0x7b2740u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 23)));
    // 0x7b2744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b2744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2748: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x7b2748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x7b274c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x7b274cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x7b2750: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x7b2750u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x7b2754: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x7B2754u;
    SET_GPR_U32(ctx, 31, 0x7B275Cu);
    ctx->pc = 0x7B2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2754u;
    // 0x7b2758: 0x63400  sll         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x7B2754u, 0x7B275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B275Cu;
label_7b275c:
    // 0x7b275c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b275cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7b2760:
    // 0x7b2760: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b2760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7b2764:
    // 0x7b2764: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b2764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b2768: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b2768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b276c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b276cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2774: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x7b2774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7b2778: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x7b2778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7b277c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B277Cu;
        // 0x7b2780: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B277Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2784u;
    // 0x7b2784: 0x0  nop
    ctx->pc = 0x7b2784u;
    // NOP
    ctx->pc = 0x7b2788u;
}
} // namespace gh_event
