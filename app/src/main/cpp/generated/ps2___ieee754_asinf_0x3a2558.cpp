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

// Function: __ieee754_asinf
// Address: 0x3a2558 - 0x3a28f8
void ps2___ieee754_asinf_0x3a2558(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_asinf_0x3a2558");
#endif

    if (__builtin_expect(ctx->pc != 0x3a2558u, 0)) {
        switch (ctx->pc) {
            case 0x3a2718u: goto label_3a2718;
            case 0x3a27fcu: goto label_3a27fc;
            default: break;
        }
    }


    // 0x3a2558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a255c: 0x44026000  mfc1        $v0, $f12
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a2560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a2564: 0x40882d  daddu       $s1, $v0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a256c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2570: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x3a2570u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3a2574: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3a2574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3a2578: 0x3c027fff  lui         $v0, 0x7FFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a257c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2580: 0x3c033f80  lui         $v1, 0x3F80
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2584: 0x2228024  and         $s0, $s1, $v0
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3a2588: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A2588u;
    {
        const bool branch_taken_0x3a2588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2588u;
        // 0x3a258c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2588) {
            ctx->pc = 0x3A25B8u;
            goto label_3a25b8;
        }
    }
    // 0x3a2590: 0x3c013fc9  lui         $at, 0x3FC9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x3a2594: 0x34210fda  ori         $at, $at, 0xFDA
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x3a2598: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a259c: 0x3c0133a2  lui         $at, 0x33A2
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x3a25a0: 0x34212168  ori         $at, $at, 0x2168
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x3a25a4: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a25a8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x3a25ac: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a25b0: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3A25B0u;
    {
        const bool branch_taken_0x3a25b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25B0u;
        // 0x3a25b4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25b0) {
            ctx->pc = 0x3A28D4u;
            goto label_3a28d4;
        }
    }
label_3a25b8:
    // 0x3a25b8: 0x70102a  slt         $v0, $v1, $s0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a25bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A25BCu;
    {
        const bool branch_taken_0x3a25bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25BCu;
        // 0x3a25c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25bc) {
            ctx->pc = 0x3A25DCu;
            goto label_3a25dc;
        }
    }
    // 0x3a25c4: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x3a25c8: 0x0  nop
    // NOP
    // 0x3a25cc: 0x0  nop
    // NOP
    // 0x3a25d0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[0]);
    // 0x3a25d4: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x3A25D4u;
    {
        const bool branch_taken_0x3a25d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25D4u;
        // 0x3a25d8: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25d4) {
            ctx->pc = 0x3A28DCu;
            goto label_3a28dc;
        }
    }
label_3a25dc:
    // 0x3a25dc: 0x3c023eff  lui         $v0, 0x3EFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x3a25e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a25e4: 0x50102a  slt         $v0, $v0, $s0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a25e8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3A25E8u;
    {
        const bool branch_taken_0x3a25e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25E8u;
        // 0x3a25ec: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25e8) {
            ctx->pc = 0x3A2710u;
            goto label_3a2710;
        }
    }
    // 0x3a25f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a25f4: 0x50102a  slt         $v0, $v0, $s0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a25f8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3A25F8u;
    {
        const bool branch_taken_0x3a25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a25f8) {
            ctx->pc = 0x3A25FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A25F8u;
            // 0x3a25fc: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A262Cu;
            goto label_3a262c;
        }
    }
    // 0x3a2600: 0x3c017149  lui         $at, 0x7149
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a2604: 0x3421f2ca  ori         $at, $at, 0xF2CA
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a2608: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a260c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2610: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2614: 0x46006000  add.s       $f0, $f12, $f0
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a2618: 0x46000834  c.lt.s      $f1, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a261c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A261Cu;
    {
        const bool branch_taken_0x3a261c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a261c) {
            ctx->pc = 0x3A262Cu;
            goto label_3a262c;
        }
    }
    // 0x3a2624: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x3A2624u;
    {
        const bool branch_taken_0x3a2624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2624u;
        // 0x3a2628: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2624) {
            ctx->pc = 0x3A28D4u;
            goto label_3a28d4;
        }
    }
label_3a262c:
    // 0x3a262c: 0x3c013811  lui         $at, 0x3811
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x3a2630: 0x3421ef08  ori         $at, $at, 0xEF08
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x3a2634: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2638: 0x3c013a4f  lui         $at, 0x3A4F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x3a263c: 0x34217f04  ori         $at, $at, 0x7F04
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x3a2640: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2644: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a2648: 0x3c01bd24  lui         $at, 0xBD24
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x3a264c: 0x34211146  ori         $at, $at, 0x1146
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x3a2650: 0x44812800  mtc1        $at, $f5
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a2654: 0x3c013d9d  lui         $at, 0x3D9D
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x3a2658: 0x3421c62e  ori         $at, $at, 0xC62E
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x3a265c: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2660: 0x3c01bf30  lui         $at, 0xBF30
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x3a2664: 0x34213361  ori         $at, $at, 0x3361
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x3a2668: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a266c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a2670: 0x3c013e4e  lui         $at, 0x3E4E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x3a2674: 0x34210aa8  ori         $at, $at, 0xAA8
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x3a2678: 0x44813000  mtc1        $at, $f6
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a267c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a2680: 0x3c014001  lui         $at, 0x4001
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x3a2684: 0x3421572d  ori         $at, $at, 0x572D
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x3a2688: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a268c: 0x3c01bea6  lui         $at, 0xBEA6
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x3a2690: 0x3421b090  ori         $at, $at, 0xB090
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x3a2694: 0x44813800  mtc1        $at, $f7
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a2698: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a269c: 0x3c01c019  lui         $at, 0xC019
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x3a26a0: 0x3421d139  ori         $at, $at, 0xD139
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x3a26a4: 0x44812000  mtc1        $at, $f4
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a26a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3a26ac: 0x3c013e2a  lui         $at, 0x3E2A
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x3a26b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a26b4: 0x44814000  mtc1        $at, $f8
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3a26b8: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a26bc: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a26c0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3a26c4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a26c8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a26cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a26d0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3a26d4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a26d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a26dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3a26e0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3a26e4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a26e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a26ec: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3a26f0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3a26f4: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a26f8: 0x0  nop
    // NOP
    // 0x3a26fc: 0x0  nop
    // NOP
    // 0x3a2700: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[22]);
    // 0x3a2704: 0x46086002  mul.s       $f0, $f12, $f8
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x3a2708: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3A2708u;
    {
        const bool branch_taken_0x3a2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2708u;
        // 0x3a270c: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2708) {
            ctx->pc = 0x3A28D4u;
            goto label_3a28d4;
        }
    }
label_3a2710:
    // 0x3a2710: 0xc0e8676  jal         func_3A19D8
    ctx->pc = 0x3A2710u;
    SET_GPR_U32(ctx, 31, 0x3A2718u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A19D8_0x3a19d8, 0x3a19d8u, 0x3a2718u)) {
        return;
    }
label_3a2718:
    // 0x3a2718: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a271c: 0x44815000  mtc1        $at, $f10
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x3a2720: 0x3c013f00  lui         $at, 0x3F00
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a2724: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2728: 0x46005201  sub.s       $f8, $f10, $f0
    ctx->f[8] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x3a272c: 0x3c013a4f  lui         $at, 0x3A4F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x3a2730: 0x34217f04  ori         $at, $at, 0x7F04
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x3a2734: 0x44812000  mtc1        $at, $f4
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a2738: 0x3c013811  lui         $at, 0x3811
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x3a273c: 0x3421ef08  ori         $at, $at, 0xEF08
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x3a2740: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2744: 0x3c01bd24  lui         $at, 0xBD24
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x3a2748: 0x34211146  ori         $at, $at, 0x1146
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x3a274c: 0x44813800  mtc1        $at, $f7
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a2750: 0x46024502  mul.s       $f20, $f8, $f2
    ctx->f[20] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x3a2754: 0x3c013d9d  lui         $at, 0x3D9D
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x3a2758: 0x3421c62e  ori         $at, $at, 0xC62E
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x3a275c: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2760: 0x3c01bf30  lui         $at, 0xBF30
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x3a2764: 0x34213361  ori         $at, $at, 0x3361
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x3a2768: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a276c: 0x3c013e4e  lui         $at, 0x3E4E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x3a2770: 0x34210aa8  ori         $at, $at, 0xAA8
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x3a2774: 0x44814000  mtc1        $at, $f8
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3a2778: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a277c: 0x3c014001  lui         $at, 0x4001
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x3a2780: 0x3421572d  ori         $at, $at, 0x572D
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x3a2784: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a2788: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a278c: 0x3c01bea6  lui         $at, 0xBEA6
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x3a2790: 0x3421b090  ori         $at, $at, 0xB090
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x3a2794: 0x44814800  mtc1        $at, $f9
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3a2798: 0x3c01c019  lui         $at, 0xC019
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x3a279c: 0x3421d139  ori         $at, $at, 0xD139
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x3a27a0: 0x44812800  mtc1        $at, $f5
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a27a4: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a27a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3a27ac: 0x3c013e2a  lui         $at, 0x3E2A
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x3a27b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a27b4: 0x44813000  mtc1        $at, $f6
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a27b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a27bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a27c0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a27c4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3a27c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3a27cc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a27d0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a27d4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3a27d8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3a27dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a27e0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3a27e4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3a27e8: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x3a27ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a27f0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3a27f4: 0xc0e8ed2  jal         func_3A3B48
    SET_GPR_U32(ctx, 31, 0x3A27FCu);
    ctx->pc = 0x3A27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A27F4u;
    // 0x3a27f8: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ps2___ieee754_sqrtf_0x3a3b48, 0x3a3b48u, 0x3a27fcu)) {
        return;
    }
label_3a27fc:
    // 0x3a27fc: 0x3c023f79  lui         $v0, 0x3F79
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x3a2800: 0x34429999  ori         $v0, $v0, 0x9999
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x3a2804: 0x50102a  slt         $v0, $v0, $s0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a2808: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A2808u;
    {
        const bool branch_taken_0x3a2808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2808u;
        // 0x3a280c: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2808) {
            ctx->pc = 0x3A284Cu;
            goto label_3a284c;
        }
    }
    // 0x3a2810: 0x0  nop
    // NOP
    // 0x3a2814: 0x0  nop
    // NOP
    // 0x3a2818: 0x4616aa03  div.s       $f8, $f21, $f22
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[22]);
    // 0x3a281c: 0x3c0133a2  lui         $at, 0x33A2
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x3a2820: 0x34212168  ori         $at, $at, 0x2168
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x3a2824: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2828: 0x3c013fc9  lui         $at, 0x3FC9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x3a282c: 0x34210fda  ori         $at, $at, 0xFDA
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x3a2830: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2834: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x3a2838: 0x46013840  add.s       $f1, $f7, $f1
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x3a283c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3a2840: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2844: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A2844u;
    {
        const bool branch_taken_0x3a2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2844u;
        // 0x3a2848: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2844) {
            ctx->pc = 0x3A28C8u;
            goto label_3a28c8;
        }
    }
label_3a284c:
    // 0x3a284c: 0x44023800  mfc1        $v0, $f7
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2850: 0x40182d  daddu       $v1, $v0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2854: 0x3c02ffff  lui         $v0, 0xFFFF
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a2858: 0x3442f000  ori         $v0, $v0, 0xF000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3a285c: 0x621824  and         $v1, $v1, $v0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a2860: 0x44834000  mtc1        $v1, $f8
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3a2864: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3a2868: 0x3c0133a2  lui         $at, 0x33A2
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x3a286c: 0x34212168  ori         $at, $at, 0x2168
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x3a2870: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a2874: 0x3c013f49  lui         $at, 0x3F49
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x3a2878: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a287c: 0x44813000  mtc1        $at, $f6
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a2880: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a2884: 0x46083900  add.s       $f4, $f7, $f8
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x3a2888: 0x0  nop
    // NOP
    // 0x3a288c: 0x0  nop
    // NOP
    // 0x3a2890: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[22]);
    // 0x3a2894: 0x46073840  add.s       $f1, $f7, $f7
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x3a2898: 0x0  nop
    // NOP
    // 0x3a289c: 0x0  nop
    // NOP
    // 0x3a28a0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x3a28a4: 0x46084080  add.s       $f2, $f8, $f8
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x3a28a8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3a28ac: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x3a28b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3a28b4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3a28b8: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3a28bc: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x3a28c0: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x3a28c4: 0x0  nop
    // NOP
label_3a28c8:
    // 0x3a28c8: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A28C8u;
    {
        const bool branch_taken_0x3a28c8 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x3A28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28C8u;
        // 0x3a28cc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a28c8) {
            ctx->pc = 0x3A28D4u;
            goto label_3a28d4;
        }
    }
    // 0x3a28d0: 0x4600a007  neg.s       $f0, $f20
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_3a28d4:
    // 0x3a28d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a28d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a28d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a28d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a28dc:
    // 0x3a28dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a28dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a28e0: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x3a28e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a28e4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3a28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a28e8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3a28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a28ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A28ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28ECu;
        // 0x3a28f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A28ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3a28f4: 0x0  nop
    // NOP
    ctx->pc = 0x3a28f8u;
}