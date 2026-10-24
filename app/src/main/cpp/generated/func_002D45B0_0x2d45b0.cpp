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

// Function: func_002D45B0
// Address: 0x2d45b0 - 0x2d4b08
void func_002D45B0_0x2d45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D45B0_0x2d45b0");
#endif

    switch (ctx->pc) {
        case 0x2d46acu: goto label_2d46ac;
        case 0x2d47d0u: goto label_2d47d0;
        case 0x2d4930u: goto label_2d4930;
        case 0x2d4940u: goto label_2d4940;
        case 0x2d49a8u: goto label_2d49a8;
        case 0x2d49b4u: goto label_2d49b4;
        default: break;
    }

    ctx->pc = 0x2d45b0u;

    // 0x2d45b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d45b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d45b4: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2d45b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2d45b8: 0x3421dc00  ori         $at, $at, 0xDC00
    ctx->pc = 0x2d45b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56320);
    // 0x2d45bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d45bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d45c0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2d45c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2d45c4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d45c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d45c8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2d45c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2d45cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d45ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d45d0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2d45d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2d45d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d45d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d45d8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2d45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2d45dc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2d45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d45e0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2d45e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2d45e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d45e8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2d45e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2d45ec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2d45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2d45f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d45f4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2d45f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x2d45f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d45f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d45fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d45fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d4600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d4604: 0x86060020  lh          $a2, 0x20($s0)
    ctx->pc = 0x2d4604u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d4608: 0x86070022  lh          $a3, 0x22($s0)
    ctx->pc = 0x2d4608u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2d460c: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x2d460cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d4610: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x2d4610u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d4614: 0x0  nop
    ctx->pc = 0x2d4614u;
    // NOP
    // 0x2d4618: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2d4618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2d461c: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2d4620: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x2d4620u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d4624: 0x0  nop
    ctx->pc = 0x2d4624u;
    // NOP
    // 0x2d4628: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2d4628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2d462c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d4630: 0x8612001c  lh          $s2, 0x1C($s0)
    ctx->pc = 0x2d4630u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d4634: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d4638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d4638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d463c: 0x0  nop
    ctx->pc = 0x2d463cu;
    // NOP
    // 0x2d4640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d4640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d4644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d4644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4648: 0x0  nop
    ctx->pc = 0x2d4648u;
    // NOP
    // 0x2d464c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d464cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d4650: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d4654: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2d4654u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d4658: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2d4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d465c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2d465cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d4660: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d4660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d4664: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d4664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d4668: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2d4668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d466c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2d466cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d4670: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2d4670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4674: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2d4674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d4678: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2d4678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d467c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D467Cu;
    {
        const bool branch_taken_0x2d467c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D467Cu;
        // 0x2d4680: 0x9604001e  lhu         $a0, 0x1E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d467c) {
            ctx->pc = 0x2D4698u;
            goto label_2d4698;
        }
    }
    ctx->pc = 0x2D4684u;
    // 0x2d4684: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d4684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d4688: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2d4688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d468c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d468cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d4690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4694: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2d4694u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2d4698:
    // 0x2d4698: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d4698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d469c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46a0: 0x2a403  sra         $s4, $v0, 16
    ctx->pc = 0x2d46a0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d46a4: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x2D46A4u;
    SET_GPR_U32(ctx, 31, 0x2D46ACu);
    ctx->pc = 0x2D46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D46A4u;
    // 0x2d46a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x2D46A4u, 0x2D46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46ACu;
label_2d46ac:
    // 0x2d46ac: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d46acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46b0: 0x8e0b0018  lw          $t3, 0x18($s0)
    ctx->pc = 0x2d46b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d46b4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d46b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d46bc: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2d46bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2d46c0: 0x8c5711ac  lw          $s7, 0x11AC($v0)
    ctx->pc = 0x2d46c0u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2d46c4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2d46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2d46c8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x2d46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x2d46cc: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x2d46ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x2d46d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2d46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2d46d4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2d46d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2d46d8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2d46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2d46dc: 0x1e143c  dsll32      $v0, $fp, 16
    ctx->pc = 0x2d46dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 16));
    // 0x2d46e0: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x2d46e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
    // 0x2d46e4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d46e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d46e8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d46e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d46ec: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d46ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d46f0: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2d46f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2d46f4: 0x34a58002  ori         $a1, $a1, 0x8002
    ctx->pc = 0x2d46f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32770);
    // 0x2d46f8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x2d46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x2d46fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d4700: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2d4700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d4704: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x2d4704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2d4708: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x2d4708u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x2d470c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4710: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4714: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4718: 0xb2282a  slt         $a1, $a1, $s2
    ctx->pc = 0x2d4718u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d471c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2d471cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2d4720: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x2d4720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2d4724: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x2d4724u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x2d4728: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x2d4728u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x2d472c: 0x245100b  movn        $v0, $s2, $a1
    ctx->pc = 0x2d472cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x2d4730: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4734: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x2d4734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2d4738: 0x24903  sra         $t1, $v0, 4
    ctx->pc = 0x2d4738u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d473c: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d473cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4740: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x2d4740u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x2d4744: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2d4748: 0x145180  sll         $t2, $s4, 6
    ctx->pc = 0x2d4748u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x2d474c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2d474cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4754: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4758: 0x1920003a  blez        $t1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D4758u;
    {
        const bool branch_taken_0x2d4758 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2D475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4758u;
        // 0x2d475c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4758) {
            ctx->pc = 0x2D4844u;
            goto label_2d4844;
        }
    }
    ctx->pc = 0x2D4760u;
    // 0x2d4760: 0xa2102  srl         $a0, $t2, 4
    ctx->pc = 0x2d4760u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x2d4764: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2d4764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2d4768: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2d4768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d476c: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2d476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2d4770: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4774: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d4774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d4778: 0x2683e  dsrl32      $t5, $v0, 0
    ctx->pc = 0x2d4778u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d477c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d4780: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d4780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d4784: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x2d4784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x2d4788: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x2d4788u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x2d478c: 0x626025  or          $t4, $v1, $v0
    ctx->pc = 0x2d478cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4790: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x2d4790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x2d4794: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2d4794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2d4798: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2d4798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d479c: 0x825825  or          $t3, $a0, $v0
    ctx->pc = 0x2d479cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d47a0: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x2d47a0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x2d47a4: 0x37390004  ori         $t9, $t9, 0x4
    ctx->pc = 0x2d47a4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)4);
    // 0x2d47a8: 0x3c181100  lui         $t8, 0x1100
    ctx->pc = 0x2d47a8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4352 << 16));
    // 0x2d47ac: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x2d47acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x2d47b0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x2d47b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d47b4: 0x139b7c  dsll32      $s3, $s3, 13
    ctx->pc = 0x2d47b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 13));
    // 0x2d47b8: 0x36738002  ori         $s3, $s3, 0x8002
    ctx->pc = 0x2d47b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32770);
    // 0x2d47bc: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x2d47bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d47c0: 0x240f0051  addiu       $t7, $zero, 0x51
    ctx->pc = 0x2d47c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2d47c4: 0x240e0053  addiu       $t6, $zero, 0x53
    ctx->pc = 0x2d47c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2d47c8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2d47c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2d47cc: 0x0  nop
    ctx->pc = 0x2d47ccu;
    // NOP
label_2d47d0:
    // 0x2d47d0: 0xfe390000  sd          $t9, 0x0($s1)
    ctx->pc = 0x2d47d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 25));
    // 0x2d47d4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2d47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d47d8: 0xae380008  sw          $t8, 0x8($s1)
    ctx->pc = 0x2d47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 24));
    // 0x2d47dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d47dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d47e0: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x2d47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
    // 0x2d47e4: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x2d47e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2d47e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d47e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d47ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d47ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d47f0: 0xfe300008  sd          $s0, 0x8($s1)
    ctx->pc = 0x2d47f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 16));
    // 0x2d47f4: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x2d47f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x2d47f8: 0xfe330000  sd          $s3, 0x0($s1)
    ctx->pc = 0x2d47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 19));
    // 0x2d47fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d4800: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4804: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x2d4804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2d4808: 0xfe2f0008  sd          $t7, 0x8($s1)
    ctx->pc = 0x2d4808u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 15));
    // 0x2d480c: 0xa9202a  slt         $a0, $a1, $t1
    ctx->pc = 0x2d480cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2d4810: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2d4810u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2d4814: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4818: 0xfe2e0008  sd          $t6, 0x8($s1)
    ctx->pc = 0x2d4818u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 14));
    // 0x2d481c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x2d481cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x2d4820: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4824: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x2d4824u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x2d4828: 0xfe2c0000  sd          $t4, 0x0($s1)
    ctx->pc = 0x2d4828u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 12));
    // 0x2d482c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d482cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4830: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d4830u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4834: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2d4834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2d4838: 0xae2b000c  sw          $t3, 0xC($s1)
    ctx->pc = 0x2d4838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 11));
    // 0x2d483c: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D483Cu;
    {
        const bool branch_taken_0x2d483c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D483Cu;
        // 0x2d4840: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d483c) {
            ctx->pc = 0x2D47D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d47d0;
        }
    }
    ctx->pc = 0x2D4844u;
label_2d4844:
    // 0x2d4844: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2d4844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2d4848: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d4848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d484c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d4850: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d4850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d4854: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d4854u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4858: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d4858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d485c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2d485cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d4860: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2d4860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2d4864: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d4864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d4868: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2d4868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2d486c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x2d486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x2d4870: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4874: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2d4874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d4878: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x2d4878u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x2d487c: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x2d487cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2d4880: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2d4880u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2d4884: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d4884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d4888: 0x3463000e  ori         $v1, $v1, 0xE
    ctx->pc = 0x2d4888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14);
    // 0x2d488c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d488cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4890: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2d4890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2d4894: 0xfe280008  sd          $t0, 0x8($s1)
    ctx->pc = 0x2d4894u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 8));
    // 0x2d4898: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x2d4898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    // 0x2d489c: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x2d489cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x2d48a0: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x2d48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x2d48a4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d48a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d48a8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d48a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d48ac: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2d48acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2d48b0: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x2d48b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x2d48b4: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d48b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d48b8: 0x240a0044  addiu       $t2, $zero, 0x44
    ctx->pc = 0x2d48b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2d48bc: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2d48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2d48c0: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x2d48c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2d48c4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d48c8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2d48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d48cc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d48ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d48d0: 0x3c0c0003  lui         $t4, 0x3
    ctx->pc = 0x2d48d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)3 << 16));
    // 0x2d48d4: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x2d48d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x2d48d8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x2d48d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x2d48dc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2d48dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d48e0: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x2d48e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x2d48e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d48e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d48e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d48ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48f0: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x2d48f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x2d48f4: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x2d48f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2d48f8: 0xfe280008  sd          $t0, 0x8($s1)
    ctx->pc = 0x2d48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 8));
    // 0x2d48fc: 0x14ad00  sll         $s5, $s4, 20
    ctx->pc = 0x2d48fcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 20));
    // 0x2d4900: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4904: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d4904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4908: 0xfe2a0000  sd          $t2, 0x0($s1)
    ctx->pc = 0x2d4908u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 10));
    // 0x2d490c: 0x24160800  addiu       $s6, $zero, 0x800
    ctx->pc = 0x2d490cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2d4910: 0xfe2b0008  sd          $t3, 0x8($s1)
    ctx->pc = 0x2d4910u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 11));
    // 0x2d4914: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4918: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x2d4918u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x2d491c: 0xfe2c0000  sd          $t4, 0x0($s1)
    ctx->pc = 0x2d491cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 12));
    // 0x2d4920: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4924: 0xfe290000  sd          $t1, 0x0($s1)
    ctx->pc = 0x2d4924u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 9));
    // 0x2d4928: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x2D4928u;
    SET_GPR_U32(ctx, 31, 0x2D4930u);
    ctx->pc = 0x2D492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4928u;
    // 0x2d492c: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x2D4928u, 0x2D4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4930u;
label_2d4930:
    // 0x2d4930: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4938: 0xc0c2750  jal         func_309D40
    ctx->pc = 0x2D4938u;
    SET_GPR_U32(ctx, 31, 0x2D4940u);
    ctx->pc = 0x2D493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4938u;
    // 0x2d493c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309D40u, 0x2D4938u, 0x2D4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4940u;
label_2d4940:
    // 0x2d4940: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2d4940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4944: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x2d4944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x2d4948: 0x1086b8  dsll        $s0, $s0, 26
    ctx->pc = 0x2d4948u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 26);
    // 0x2d494c: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x2d494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x2d4950: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x2d4950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x2d4954: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x2d4954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x2d4958: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d495c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2d495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d4960: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d4960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d4964: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x2d4964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x2d4968: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x2d4968u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x2d496c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d496cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4970: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d4970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d4974: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d4974u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4978: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d497c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d497cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4980: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d4980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d4984: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2d4984u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2d4988: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x2d4988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2d498c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x2d498cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x2d4990: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d4990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4994: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4998: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x2d4998u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x2d499c: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x2d499cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x2d49a0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d49a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d49a4: 0x0  nop
    ctx->pc = 0x2d49a4u;
    // NOP
label_2d49a8:
    // 0x2d49a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d49a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d49ac: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2D49ACu;
    SET_GPR_U32(ctx, 31, 0x2D49B4u);
    ctx->pc = 0x2D49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D49ACu;
    // 0x2d49b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2D49ACu, 0x2D49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49B4u;
label_2d49b4:
    // 0x2d49b4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2d49b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2d49b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d49bc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2d49bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d49c0: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2d49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2d49c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d49c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2d49c8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2d49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2d49cc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2d49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d49d0: 0x8c656b80  lw          $a1, 0x6B80($v1)
    ctx->pc = 0x2d49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x2d49d4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2d49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d49d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d49dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d49e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d49e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2d49e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d49e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d49e8: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x2d49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2d49ec: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x2d49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x2d49f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d49f4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d49f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d49f8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x2d49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x2d49fc: 0x1660ffea  bnez        $s3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D49FCu;
    {
        const bool branch_taken_0x2d49fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49FCu;
        // 0x2d4a00: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49fc) {
            ctx->pc = 0x2D49A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d49a8;
        }
    }
    ctx->pc = 0x2D4A04u;
    // 0x2d4a04: 0x3403855a  ori         $v1, $zero, 0x855A
    ctx->pc = 0x2d4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34138);
    // 0x2d4a08: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x2d4a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x2d4a0c: 0x34638005  ori         $v1, $v1, 0x8005
    ctx->pc = 0x2d4a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x2d4a10: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d4a14: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x2d4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x2d4a18: 0x3404c040  ori         $a0, $zero, 0xC040
    ctx->pc = 0x2d4a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49216);
    // 0x2d4a1c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x2d4a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x2d4a20: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2d4a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2d4a24: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4a2c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4a30: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d4a34: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x2d4a34u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x2d4a38: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2d4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d4a3c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x2d4a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x2d4a40: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2d4a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d4a44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4a48: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4a4c: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x2d4a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x2d4a50: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x2d4a50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x2d4a54: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x2d4a54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x2d4a58: 0x553825  or          $a3, $v0, $s5
    ctx->pc = 0x2d4a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x2d4a5c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4a60: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x2d4a60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x2d4a64: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2d4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d4a68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4a6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4a70: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2d4a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2d4a74: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2d4a74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2d4a78: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x2d4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x2d4a7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d4a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d4a80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4a84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4a88: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2d4a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d4a8c: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d4a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4a90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4a94: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2d4a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4a98: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x2d4a98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x2d4a9c: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x2d4a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x2d4aa0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4aa4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2d4aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4aa8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2d4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d4aac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4ab0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4ab4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2d4ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2d4ab8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2d4ab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2d4abc: 0xfe280008  sd          $t0, 0x8($s1)
    ctx->pc = 0x2d4abcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 8));
    // 0x2d4ac0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d4ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d4ac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4ac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4acc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2d4accu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d4ad0: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x2d4ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x2d4ad4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2d4ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4ad8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2d4ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4adc: 0xfe2a0000  sd          $t2, 0x0($s1)
    ctx->pc = 0x2d4adcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 10));
    // 0x2d4ae0: 0xae290008  sw          $t1, 0x8($s1)
    ctx->pc = 0x2d4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 9));
    // 0x2d4ae4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2d4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d4ae8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2d4ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4aec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2d4aecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4af0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d4af0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4af4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2d4af4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4af8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d4af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AFCu;
        // 0x2d4b00: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4B04u;
    // 0x2d4b04: 0x0  nop
    ctx->pc = 0x2d4b04u;
    // NOP
    ctx->pc = 0x2d4b08u;
}
