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

// Function: func_0013F5D0
// Address: 0x13f5d0 - 0x140638
void func_0013F5D0_0x13f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013F5D0_0x13f5d0");
#endif

    switch (ctx->pc) {
        case 0x13f634u: goto label_13f634;
        case 0x13f690u: goto label_13f690;
        case 0x13f730u: goto label_13f730;
        case 0x13f790u: goto label_13f790;
        case 0x13f7f0u: goto label_13f7f0;
        case 0x13f850u: goto label_13f850;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f928u: goto label_13f928;
        case 0x13f9a0u: goto label_13f9a0;
        case 0x13fa00u: goto label_13fa00;
        case 0x13fa60u: goto label_13fa60;
        case 0x13fac0u: goto label_13fac0;
        case 0x13fb20u: goto label_13fb20;
        case 0x13fb80u: goto label_13fb80;
        case 0x13fbf8u: goto label_13fbf8;
        case 0x13fc58u: goto label_13fc58;
        case 0x13fcb8u: goto label_13fcb8;
        case 0x13fd18u: goto label_13fd18;
        case 0x13fd78u: goto label_13fd78;
        case 0x13fdf0u: goto label_13fdf0;
        case 0x13fe50u: goto label_13fe50;
        case 0x13fedcu: goto label_13fedc;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ffe4u: goto label_13ffe4;
        case 0x1400acu: goto label_1400ac;
        case 0x1400ccu: goto label_1400cc;
        case 0x1400e0u: goto label_1400e0;
        case 0x140120u: goto label_140120;
        case 0x140130u: goto label_140130;
        case 0x140140u: goto label_140140;
        case 0x140258u: goto label_140258;
        case 0x140280u: goto label_140280;
        case 0x1402f8u: goto label_1402f8;
        case 0x14039cu: goto label_14039c;
        case 0x1403c0u: goto label_1403c0;
        case 0x1403e0u: goto label_1403e0;
        case 0x1403f8u: goto label_1403f8;
        case 0x140458u: goto label_140458;
        case 0x14049cu: goto label_14049c;
        case 0x1404bcu: goto label_1404bc;
        case 0x1404dcu: goto label_1404dc;
        case 0x1404f0u: goto label_1404f0;
        case 0x140508u: goto label_140508;
        case 0x140524u: goto label_140524;
        case 0x14054cu: goto label_14054c;
        case 0x140568u: goto label_140568;
        case 0x140578u: goto label_140578;
        case 0x140590u: goto label_140590;
        case 0x1405b0u: goto label_1405b0;
        case 0x1405ccu: goto label_1405cc;
        case 0x1405fcu: goto label_1405fc;
        default: break;
    }

    ctx->pc = 0x13f5d0u;

    // 0x13f5d0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x13f5d4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13f5d8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x13f5dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x13f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x13f5e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5e4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13f5e8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x13f5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x13f5ec: 0x24647a24  addiu       $a0, $v1, 0x7A24
    ctx->pc = 0x13f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x13f5f0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x13f5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x13f5f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13f5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13f5f8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x13f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x13f5fc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x13f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x13f600: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13f604: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x13f604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x13f608: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x13f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x13f60c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x13f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x13f610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f614: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x13f614u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x13f618: 0x144003f8  bnez        $v0, . + 4 + (0x3F8 << 2)
    ctx->pc = 0x13F618u;
    {
        const bool branch_taken_0x13f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F618u;
        // 0x13f61c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f618) {
            ctx->pc = 0x1405FCu;
            goto label_1405fc;
        }
    }
    ctx->pc = 0x13F620u;
    // 0x13f620: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f624: 0x44003f6  bltz        $v0, . + 4 + (0x3F6 << 2)
    ctx->pc = 0x13F624u;
    {
        const bool branch_taken_0x13f624 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F624u;
        // 0x13f628: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f624) {
            ctx->pc = 0x140600u;
            goto label_140600;
        }
    }
    ctx->pc = 0x13F62Cu;
    // 0x13f62c: 0xc050218  jal         func_140860
    ctx->pc = 0x13F62Cu;
    SET_GPR_U32(ctx, 31, 0x13F634u);
    ctx->pc = 0x13F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F62Cu;
    // 0x13f630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140860u, 0x13F62Cu, 0x13F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F634u;
label_13f634:
    // 0x13f634: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13f638: 0x104003f1  beqz        $v0, . + 4 + (0x3F1 << 2)
    ctx->pc = 0x13F638u;
    {
        const bool branch_taken_0x13f638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F638u;
        // 0x13f63c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f638) {
            ctx->pc = 0x140600u;
            goto label_140600;
        }
    }
    ctx->pc = 0x13F640u;
    // 0x13f640: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x13f640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x13f644: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x13f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x13f648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f650: 0x0  nop
    ctx->pc = 0x13f650u;
    // NOP
    // 0x13f654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13f654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13f658: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x13f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x13f65c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f660: 0x0  nop
    ctx->pc = 0x13f660u;
    // NOP
    // 0x13f664: 0x0  nop
    ctx->pc = 0x13f664u;
    // NOP
    // 0x13f668: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x13f668u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x13f66c: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x13f66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13f670: 0x0  nop
    ctx->pc = 0x13f670u;
    // NOP
    // 0x13f674: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x13F674u;
    {
        const bool branch_taken_0x13f674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13f674) {
            ctx->pc = 0x13F678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F674u;
            // 0x13f678: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F680u;
            goto label_13f680;
        }
    }
    ctx->pc = 0x13F67Cu;
    // 0x13f67c: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x13f67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
label_13f680:
    // 0x13f680: 0x1040034c  beqz        $v0, . + 4 + (0x34C << 2)
    ctx->pc = 0x13F680u;
    {
        const bool branch_taken_0x13f680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F680u;
        // 0x13f684: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f680) {
            ctx->pc = 0x1403B4u;
            goto label_1403b4;
        }
    }
    ctx->pc = 0x13F688u;
    // 0x13f688: 0x26220250  addiu       $v0, $s1, 0x250
    ctx->pc = 0x13f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x13f68c: 0x0  nop
    ctx->pc = 0x13f68cu;
    // NOP
label_13f690:
    // 0x13f690: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x13f694: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x13f694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x13f698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f69c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f6a0: 0x10a0033e  beqz        $a1, . + 4 + (0x33E << 2)
    ctx->pc = 0x13F6A0u;
    {
        const bool branch_taken_0x13f6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6A0u;
        // 0x13f6a4: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6a0) {
            ctx->pc = 0x14039Cu;
            goto label_14039c;
        }
    }
    ctx->pc = 0x13F6A8u;
    // 0x13f6a8: 0x84a20548  lh          $v0, 0x548($a1)
    ctx->pc = 0x13f6a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1352)));
    // 0x13f6ac: 0x1040033b  beqz        $v0, . + 4 + (0x33B << 2)
    ctx->pc = 0x13F6ACu;
    {
        const bool branch_taken_0x13f6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6ACu;
        // 0x13f6b0: 0x2f11821  addu        $v1, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6ac) {
            ctx->pc = 0x14039Cu;
            goto label_14039c;
        }
    }
    ctx->pc = 0x13F6B4u;
    // 0x13f6b4: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x13f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x13f6b8: 0x4400338  bltz        $v0, . + 4 + (0x338 << 2)
    ctx->pc = 0x13F6B8u;
    {
        const bool branch_taken_0x13f6b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6B8u;
        // 0x13f6bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6b8) {
            ctx->pc = 0x14039Cu;
            goto label_14039c;
        }
    }
    ctx->pc = 0x13F6C0u;
    // 0x13f6c0: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x13f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x13f6c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13f6c8: 0x1eb100  sll         $s6, $fp, 4
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f6cc: 0x2635030c  addiu       $s5, $s1, 0x30C
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f6d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13f6d4: 0x26340308  addiu       $s4, $s1, 0x308
    ctx->pc = 0x13f6d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f6d8: 0x262302e8  addiu       $v1, $s1, 0x2E8
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x13f6dc: 0x26330314  addiu       $s3, $s1, 0x314
    ctx->pc = 0x13f6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f6e0: 0x26320310  addiu       $s2, $s1, 0x310
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13f6e4: 0x14400287  bnez        $v0, . + 4 + (0x287 << 2)
    ctx->pc = 0x13F6E4u;
    {
        const bool branch_taken_0x13f6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6E4u;
        // 0x13f6e8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6e4) {
            ctx->pc = 0x140104u;
            goto label_140104;
        }
    }
    ctx->pc = 0x13F6ECu;
    // 0x13f6ec: 0x8ca20564  lw          $v0, 0x564($a1)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
    // 0x13f6f0: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x13f6f4: 0x2c830072  sltiu       $v1, $a0, 0x72
    ctx->pc = 0x13f6f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
    // 0x13f6f8: 0x10600210  beqz        $v1, . + 4 + (0x210 << 2)
    ctx->pc = 0x13F6F8u;
    {
        const bool branch_taken_0x13f6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6F8u;
        // 0x13f6fc: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6f8) {
            ctx->pc = 0x13FF3Cu;
            goto label_13ff3c;
        }
    }
    ctx->pc = 0x13F700u;
    // 0x13f700: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13f700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f704: 0x2442e1b0  addiu       $v0, $v0, -0x1E50
    ctx->pc = 0x13f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
    // 0x13f708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f70c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f710: 0x800008  jr          $a0
    ctx->pc = 0x13F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F718u: goto label_13f718;
            case 0x13F778u: goto label_13f778;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F838u: goto label_13f838;
            case 0x13F898u: goto label_13f898;
            case 0x13F910u: goto label_13f910;
            case 0x13F988u: goto label_13f988;
            case 0x13F9E8u: goto label_13f9e8;
            case 0x13FA48u: goto label_13fa48;
            case 0x13FAA8u: goto label_13faa8;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB68u: goto label_13fb68;
            case 0x13FBE0u: goto label_13fbe0;
            case 0x13FC40u: goto label_13fc40;
            case 0x13FCA0u: goto label_13fca0;
            case 0x13FD00u: goto label_13fd00;
            case 0x13FD60u: goto label_13fd60;
            case 0x13FDD8u: goto label_13fdd8;
            case 0x13FE38u: goto label_13fe38;
            case 0x13FEB0u: goto label_13feb0;
            case 0x13FEC4u: goto label_13fec4;
            case 0x13FF3Cu: goto label_13ff3c;
            case 0x13FFCCu: goto label_13ffcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13F718u;
label_13f718:
    // 0x13f718: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f71c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f720: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f724: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x13f724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13f728: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F728u;
    SET_GPR_U32(ctx, 31, 0x13F730u);
    ctx->pc = 0x13F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F728u;
    // 0x13f72c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F728u, 0x13F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F730u;
label_13f730:
    // 0x13f730: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f734: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f738: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f73c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f740: 0x3c013ecf  lui         $at, 0x3ECF
    ctx->pc = 0x13f740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16079 << 16));
    // 0x13f744: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13f744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13f748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f74c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f750: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f754: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13f754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13f758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f75c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f760: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f764: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x13f764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x13f768: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x13f768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x13f76c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f770: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x13F770u;
    {
        const bool branch_taken_0x13f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F770u;
        // 0x13f774: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f770) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13F778u;
label_13f778:
    // 0x13f778: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f77c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f780: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f784: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x13f784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13f788: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F788u;
    SET_GPR_U32(ctx, 31, 0x13F790u);
    ctx->pc = 0x13F78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F788u;
    // 0x13f78c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F788u, 0x13F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F790u;
label_13f790:
    // 0x13f790: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f794: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f798: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f79c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f79cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f7a0: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x13f7a4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x13f7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x13f7a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f7ac: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f7b0: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f7b4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13f7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13f7b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f7bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f7c0: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f7c4: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x13f7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
    // 0x13f7c8: 0x3421645a  ori         $at, $at, 0x645A
    ctx->pc = 0x13f7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25690);
    // 0x13f7cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f7d0: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x13F7D0u;
    {
        const bool branch_taken_0x13f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7D0u;
        // 0x13f7d4: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7d0) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13F7D8u;
label_13f7d8:
    // 0x13f7d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f7dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f7e0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f7e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13f7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13f7e8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F7E8u;
    SET_GPR_U32(ctx, 31, 0x13F7F0u);
    ctx->pc = 0x13F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7E8u;
    // 0x13f7ec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F7E8u, 0x13F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7F0u;
label_13f7f0:
    // 0x13f7f0: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f7f4: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f7f8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f7fc: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f800: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x13f800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x13f804: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x13f804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x13f808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f80c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f810: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f814: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13f814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13f818: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f81c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f820: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f824: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x13f824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x13f828: 0x3421e76d  ori         $at, $at, 0xE76D
    ctx->pc = 0x13f828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59245);
    // 0x13f82c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f830: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x13F830u;
    {
        const bool branch_taken_0x13f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F830u;
        // 0x13f834: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f830) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13F838u;
label_13f838:
    // 0x13f838: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f83c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f840: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f844: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13f844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f848: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F848u;
    SET_GPR_U32(ctx, 31, 0x13F850u);
    ctx->pc = 0x13F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F848u;
    // 0x13f84c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F848u, 0x13F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F850u;
label_13f850:
    // 0x13f850: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f854: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f858: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f85c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f860: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x13f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x13f864: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13f864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13f868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f86c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f870: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f874: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13f874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13f878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f87c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f880: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f884: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13f884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x13f888: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x13f888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x13f88c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f890: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x13F890u;
    {
        const bool branch_taken_0x13f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F890u;
        // 0x13f894: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f890) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13F898u;
label_13f898:
    // 0x13f898: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f89c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f8a0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f8a4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x13f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f8a8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x13F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8A8u;
    // 0x13f8ac: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F8A8u, 0x13F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f8b4: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f8b8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f8bc: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f8c0: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x13f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x13f8c4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x13f8c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x13f8c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f8cc: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f8d0: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f8d4: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13f8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13f8d8: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13f8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13f8dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f8e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f8e4: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f8e8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13f8ec: 0x3c013e2f  lui         $at, 0x3E2F
    ctx->pc = 0x13f8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15919 << 16));
    // 0x13f8f0: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x13f8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x13f8f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f8f8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13f8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f8fc: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13f900: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13f900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13f904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f908: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x13F908u;
    {
        const bool branch_taken_0x13f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F908u;
        // 0x13f90c: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f908) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13F910u;
label_13f910:
    // 0x13f910: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f914: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f918: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f91c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x13f91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13f920: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F920u;
    SET_GPR_U32(ctx, 31, 0x13F928u);
    ctx->pc = 0x13F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F920u;
    // 0x13f924: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F920u, 0x13F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F928u;
label_13f928:
    // 0x13f928: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f92c: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f930: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f934: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f938: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x13f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x13f93c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x13f93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x13f940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f944: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f948: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f94c: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13f94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13f950: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13f950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13f954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f958: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f95c: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f960: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13f964: 0x3c013e2f  lui         $at, 0x3E2F
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15919 << 16));
    // 0x13f968: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x13f968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x13f96c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f970: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13f970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f974: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13f974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13f978: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13f978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13f97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f980: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x13F980u;
    {
        const bool branch_taken_0x13f980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F980u;
        // 0x13f984: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f980) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13F988u;
label_13f988:
    // 0x13f988: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f98c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f990: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f994: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x13f994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13f998: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F998u;
    SET_GPR_U32(ctx, 31, 0x13F9A0u);
    ctx->pc = 0x13F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F998u;
    // 0x13f99c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F998u, 0x13F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9A0u;
label_13f9a0:
    // 0x13f9a0: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13f9a4: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13f9a8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13f9ac: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13f9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13f9b0: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x13f9b4: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x13f9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x13f9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f9bc: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13f9c0: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13f9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13f9c4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13f9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13f9c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f9cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13f9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13f9d0: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13f9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13f9d4: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x13f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x13f9d8: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x13f9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x13f9dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13f9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13f9e0: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x13F9E0u;
    {
        const bool branch_taken_0x13f9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9E0u;
        // 0x13f9e4: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9e0) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13F9E8u;
label_13f9e8:
    // 0x13f9e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13f9ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13f9f0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13f9f4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13f9f8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13F9F8u;
    SET_GPR_U32(ctx, 31, 0x13FA00u);
    ctx->pc = 0x13F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9F8u;
    // 0x13f9fc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13F9F8u, 0x13FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA00u;
label_13fa00:
    // 0x13fa00: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fa04: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fa08: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fa0c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fa10: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x13fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x13fa14: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x13fa14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x13fa18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fa18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fa1c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fa20: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fa20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fa24: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fa28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fa2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fa30: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fa34: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x13fa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x13fa38: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x13fa38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x13fa3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fa40: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x13FA40u;
    {
        const bool branch_taken_0x13fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA40u;
        // 0x13fa44: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa40) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FA48u;
label_13fa48:
    // 0x13fa48: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fa4c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fa50: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fa54: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x13fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13fa58: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FA58u;
    SET_GPR_U32(ctx, 31, 0x13FA60u);
    ctx->pc = 0x13FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA58u;
    // 0x13fa5c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FA58u, 0x13FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA60u;
label_13fa60:
    // 0x13fa60: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fa64: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fa68: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fa6c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fa6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fa70: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x13fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x13fa74: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x13fa78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fa7c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fa80: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fa84: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fa88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fa8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fa90: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fa94: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
    // 0x13fa98: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x13fa98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x13fa9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fa9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13faa0: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x13FAA0u;
    {
        const bool branch_taken_0x13faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAA0u;
        // 0x13faa4: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13faa0) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FAA8u;
label_13faa8:
    // 0x13faa8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13faac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fab0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fab4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13fab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13fab8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FAB8u;
    SET_GPR_U32(ctx, 31, 0x13FAC0u);
    ctx->pc = 0x13FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FAB8u;
    // 0x13fabc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FAB8u, 0x13FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAC0u;
label_13fac0:
    // 0x13fac0: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fac4: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fac8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13facc: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13faccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fad0: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x13fad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x13fad4: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x13fad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x13fad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fadc: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fae0: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fae4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13faec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13faecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13faf0: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13faf4: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x13faf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x13faf8: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x13faf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x13fafc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fb00: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x13FB00u;
    {
        const bool branch_taken_0x13fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB00u;
        // 0x13fb04: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb00) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FB08u;
label_13fb08:
    // 0x13fb08: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fb0c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fb10: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fb14: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x13fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13fb18: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FB18u;
    SET_GPR_U32(ctx, 31, 0x13FB20u);
    ctx->pc = 0x13FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB18u;
    // 0x13fb1c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FB18u, 0x13FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB20u;
label_13fb20:
    // 0x13fb20: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fb24: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fb28: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fb2c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fb30: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x13fb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x13fb34: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x13fb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x13fb38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fb3c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fb40: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fb44: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fb48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fb4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fb50: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fb54: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x13fb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x13fb58: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x13fb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x13fb5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fb60: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x13FB60u;
    {
        const bool branch_taken_0x13fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB60u;
        // 0x13fb64: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb60) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FB68u;
label_13fb68:
    // 0x13fb68: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fb6c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fb70: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fb74: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x13fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13fb78: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FB78u;
    SET_GPR_U32(ctx, 31, 0x13FB80u);
    ctx->pc = 0x13FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB78u;
    // 0x13fb7c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FB78u, 0x13FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB80u;
label_13fb80:
    // 0x13fb80: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fb84: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fb88: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fb8c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fb90: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x13fb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x13fb94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x13fb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x13fb98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fb9c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fba0: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fba4: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13fba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13fba8: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13fba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13fbac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fbb0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fbb4: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fbb8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13fbbc: 0x3c013d6f  lui         $at, 0x3D6F
    ctx->pc = 0x13fbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15727 << 16));
    // 0x13fbc0: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x13fbc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x13fbc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fbc8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13fbc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fbcc: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13fbd0: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13fbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fbd8: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x13FBD8u;
    {
        const bool branch_taken_0x13fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBD8u;
        // 0x13fbdc: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbd8) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13FBE0u;
label_13fbe0:
    // 0x13fbe0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fbe4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fbe8: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fbec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13fbf0: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FBF0u;
    SET_GPR_U32(ctx, 31, 0x13FBF8u);
    ctx->pc = 0x13FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBF0u;
    // 0x13fbf4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FBF0u, 0x13FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBF8u;
label_13fbf8:
    // 0x13fbf8: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fbfc: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fc00: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fc04: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fc04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fc08: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x13fc0c: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x13fc0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x13fc10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fc14: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fc18: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fc1c: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fc20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fc24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fc28: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fc2c: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x13fc30: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x13fc30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x13fc34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fc38: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x13FC38u;
    {
        const bool branch_taken_0x13fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC38u;
        // 0x13fc3c: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc38) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FC40u;
label_13fc40:
    // 0x13fc40: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fc44: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fc48: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fc4c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x13fc50: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FC50u;
    SET_GPR_U32(ctx, 31, 0x13FC58u);
    ctx->pc = 0x13FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC50u;
    // 0x13fc54: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FC50u, 0x13FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC58u;
label_13fc58:
    // 0x13fc58: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fc5c: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fc60: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fc64: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fc68: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x13fc6c: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x13fc6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x13fc70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fc74: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fc78: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fc7c: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fc80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fc84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fc88: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fc8c: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x13fc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
    // 0x13fc90: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x13fc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x13fc94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fc98: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x13FC98u;
    {
        const bool branch_taken_0x13fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC98u;
        // 0x13fc9c: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc98) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FCA0u;
label_13fca0:
    // 0x13fca0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fca4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fca8: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fcac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x13fcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13fcb0: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FCB0u;
    SET_GPR_U32(ctx, 31, 0x13FCB8u);
    ctx->pc = 0x13FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCB0u;
    // 0x13fcb4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FCB0u, 0x13FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCB8u;
label_13fcb8:
    // 0x13fcb8: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fcbc: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fcc0: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fcc4: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fcc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fcc8: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x13fcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x13fccc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x13fcccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x13fcd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fcd4: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fcd8: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fcdc: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fce4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fce8: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fcec: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x13fcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x13fcf0: 0x3421e76d  ori         $at, $at, 0xE76D
    ctx->pc = 0x13fcf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59245);
    // 0x13fcf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fcf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fcf8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x13FCF8u;
    {
        const bool branch_taken_0x13fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCF8u;
        // 0x13fcfc: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcf8) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FD00u;
label_13fd00:
    // 0x13fd00: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fd04: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fd08: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fd0c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x13fd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13fd10: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FD10u;
    SET_GPR_U32(ctx, 31, 0x13FD18u);
    ctx->pc = 0x13FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD10u;
    // 0x13fd14: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FD10u, 0x13FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD18u;
label_13fd18:
    // 0x13fd18: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fd1c: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fd20: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fd24: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fd24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fd28: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x13fd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
    // 0x13fd2c: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x13fd2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
    // 0x13fd30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fd34: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fd38: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fd3c: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fd40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fd44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fd48: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fd4c: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x13fd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x13fd50: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x13fd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x13fd54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fd58: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x13FD58u;
    {
        const bool branch_taken_0x13fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD58u;
        // 0x13fd5c: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd58) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FD60u;
label_13fd60:
    // 0x13fd60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fd64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fd68: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fd6c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x13fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13fd70: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FD70u;
    SET_GPR_U32(ctx, 31, 0x13FD78u);
    ctx->pc = 0x13FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD70u;
    // 0x13fd74: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FD70u, 0x13FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD78u;
label_13fd78:
    // 0x13fd78: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fd7c: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fd80: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fd84: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fd88: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x13fd8c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x13fd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x13fd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fd94: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fd98: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fd9c: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13fd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13fda0: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13fda0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13fda4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fda8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fdac: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fdb0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13fdb4: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x13fdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
    // 0x13fdb8: 0x3421645a  ori         $at, $at, 0x645A
    ctx->pc = 0x13fdb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25690);
    // 0x13fdbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fdc0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13fdc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fdc4: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13fdc8: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13fdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13fdcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fdd0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x13FDD0u;
    {
        const bool branch_taken_0x13fdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDD0u;
        // 0x13fdd4: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdd0) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13FDD8u;
label_13fdd8:
    // 0x13fdd8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fddc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fde0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fde4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x13fde8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FDE8u;
    SET_GPR_U32(ctx, 31, 0x13FDF0u);
    ctx->pc = 0x13FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDE8u;
    // 0x13fdec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FDE8u, 0x13FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDF0u;
label_13fdf0:
    // 0x13fdf0: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fdf4: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fdf8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fdfc: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fe00: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x13fe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x13fe04: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13fe04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13fe08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fe08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fe0c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fe10: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fe10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fe14: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x13fe14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x13fe18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fe18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fe1c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fe20: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fe24: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13fe24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x13fe28: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x13fe28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x13fe2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fe2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fe30: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x13FE30u;
    {
        const bool branch_taken_0x13fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE30u;
        // 0x13fe34: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe30) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FE38u;
label_13fe38:
    // 0x13fe38: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fe3c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fe40: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fe44: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13fe48: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FE48u;
    SET_GPR_U32(ctx, 31, 0x13FE50u);
    ctx->pc = 0x13FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE48u;
    // 0x13fe4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FE48u, 0x13FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE50u;
label_13fe50:
    // 0x13fe50: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fe54: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fe58: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fe5c: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fe60: 0x3c013ecf  lui         $at, 0x3ECF
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16079 << 16));
    // 0x13fe64: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13fe64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13fe68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fe68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fe6c: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fe70: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fe70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13fe74: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13fe78: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13fe78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13fe7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13fe7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fe80: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fe84: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13fe88: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13fe8c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x13fe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x13fe90: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x13fe90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x13fe94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13fe94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fe98: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13fe98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13fe9c: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13fea0: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13fea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fea8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x13FEA8u;
    {
        const bool branch_taken_0x13fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEA8u;
        // 0x13feac: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fea8) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13FEB0u;
label_13feb0:
    // 0x13feb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13feb4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13feb8: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13febc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x13FEBCu;
    {
        const bool branch_taken_0x13febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEBCu;
        // 0x13fec0: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13febc) {
            ctx->pc = 0x13FFDCu;
            goto label_13ffdc;
        }
    }
    ctx->pc = 0x13FEC4u;
label_13fec4:
    // 0x13fec4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x13fec8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fecc: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13feccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x13fed0: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x13fed4: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FED4u;
    SET_GPR_U32(ctx, 31, 0x13FEDCu);
    ctx->pc = 0x13FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FED4u;
    // 0x13fed8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FED4u, 0x13FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEDCu;
label_13fedc:
    // 0x13fedc: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13fee0: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13fee4: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fee8: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13feec: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x13feecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x13fef0: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x13fef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x13fef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fef8: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13fefc: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13ff00: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13ff04: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13ff08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ff08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ff0c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13ff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13ff10: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13ff10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13ff14: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13ff18: 0x3c013f2c  lui         $at, 0x3F2C
    ctx->pc = 0x13ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16172 << 16));
    // 0x13ff1c: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x13ff1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x13ff20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ff20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ff24: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13ff24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13ff28: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13ff2c: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13ff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13ff30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ff30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ff34: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x13FF34u;
    {
        const bool branch_taken_0x13ff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF34u;
        // 0x13ff38: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff34) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13FF3Cu;
label_13ff3c:
    // 0x13ff3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ff40: 0x24050359  addiu       $a1, $zero, 0x359
    ctx->pc = 0x13ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
    // 0x13ff44: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x13ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13ff48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ff4c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x13ff4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x13ff50: 0x1465001f  bne         $v1, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13FF50u;
    {
        const bool branch_taken_0x13ff50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x13FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF50u;
        // 0x13ff54: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff50) {
            ctx->pc = 0x13FFD0u;
            goto label_13ffd0;
        }
    }
    ctx->pc = 0x13FF58u;
    // 0x13ff58: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13ff5c: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x13ff60: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x13ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13ff64: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FF64u;
    SET_GPR_U32(ctx, 31, 0x13FF6Cu);
    ctx->pc = 0x13FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF64u;
    // 0x13ff68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FF64u, 0x13FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF6Cu;
label_13ff6c:
    // 0x13ff6c: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13ff70: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13ff74: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13ff78: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13ff7c: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x13ff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x13ff80: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13ff80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13ff84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ff84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ff88: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x13ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x13ff8c: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x13ff8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x13ff90: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x13ff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x13ff94: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x13ff94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x13ff98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ff98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ff9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13ffa0: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x13ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x13ffa4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13ffa8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x13ffac: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x13ffacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x13ffb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ffb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ffb4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x13ffb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x13ffb8: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x13ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x13ffbc: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x13ffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x13ffc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ffc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ffc4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13FFC4u;
    {
        const bool branch_taken_0x13ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFC4u;
        // 0x13ffc8: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffc4) {
            ctx->pc = 0x14003Cu;
            goto label_14003c;
        }
    }
    ctx->pc = 0x13FFCCu;
label_13ffcc:
    // 0x13ffcc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_13ffd0:
    // 0x13ffd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13ffd4: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x13ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x13ffd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13ffdc:
    // 0x13ffdc: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x13FFDCu;
    SET_GPR_U32(ctx, 31, 0x13FFE4u);
    ctx->pc = 0x13FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFDCu;
    // 0x13ffe0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x13FFDCu, 0x13FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFE4u;
label_13ffe4:
    // 0x13ffe4: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x13ffe8: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x13ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x13ffec: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x13ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x13fff0: 0x2628030c  addiu       $t0, $s1, 0x30C
    ctx->pc = 0x13fff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 780));
    // 0x13fff4: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x13fff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x13fff8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x13fff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x13fffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140000: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x140004: 0x26270308  addiu       $a3, $s1, 0x308
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x140008: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x140008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x14000c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14000cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140010: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x140010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x140014: 0x26260314  addiu       $a2, $s1, 0x314
    ctx->pc = 0x140014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x140018: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x14001c: 0x3c013e2f  lui         $at, 0x3E2F
    ctx->pc = 0x14001cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15919 << 16));
    // 0x140020: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x140020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x140024: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x140024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_140028:
    // 0x140028: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x140028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14002c: 0x26250310  addiu       $a1, $s1, 0x310
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x140030: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x140030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x140034: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x140034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x140038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14003c:
    // 0x14003c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x14003cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x140040: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x140040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x140044: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x140044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x140048: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x140048u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14004c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x14004cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140050: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x140050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140054: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x140054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140058: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x140058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14005c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140060: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x140064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x140064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140068: 0x262302e8  addiu       $v1, $s1, 0x2E8
    ctx->pc = 0x140068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x14006c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x14006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x140070: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x140070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x140074: 0x8483054a  lh          $v1, 0x54A($a0)
    ctx->pc = 0x140074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x140078: 0x84820548  lh          $v0, 0x548($a0)
    ctx->pc = 0x140078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x14007c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14007cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140080: 0x0  nop
    ctx->pc = 0x140080u;
    // NOP
    // 0x140084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x140088: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14008c: 0x0  nop
    ctx->pc = 0x14008cu;
    // NOP
    // 0x140090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x140090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x140094: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x140094u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x140098: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x140098u;
    {
        const bool branch_taken_0x140098 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x14009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140098u;
        // 0x14009c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140098) {
            ctx->pc = 0x1400B4u;
            goto label_1400b4;
        }
    }
    ctx->pc = 0x1400A0u;
    // 0x1400a0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1400a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1400a4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1400A4u;
    SET_GPR_U32(ctx, 31, 0x1400ACu);
    ctx->pc = 0x1400A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400A4u;
    // 0x1400a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1400A4u, 0x1400ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400ACu;
label_1400ac:
    // 0x1400ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1400ACu;
    {
        const bool branch_taken_0x1400ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1400B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1400ACu;
        // 0x1400b0: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1400ac) {
            ctx->pc = 0x1400D0u;
            goto label_1400d0;
        }
    }
    ctx->pc = 0x1400B4u;
label_1400b4:
    // 0x1400b4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1400b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1400b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1400b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400bc: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x1400bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1400c0: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1400c4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1400C4u;
    SET_GPR_U32(ctx, 31, 0x1400CCu);
    ctx->pc = 0x1400C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400C4u;
    // 0x1400c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1400C4u, 0x1400CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400CCu;
label_1400cc:
    // 0x1400cc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1400ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1400d0:
    // 0x1400d0: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x1400d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x1400d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1400d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1400D8u;
    SET_GPR_U32(ctx, 31, 0x1400E0u);
    ctx->pc = 0x1400DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400D8u;
    // 0x1400dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1400D8u, 0x1400E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400E0u;
label_1400e0:
    // 0x1400e0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1400e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1400e4: 0x2f11821  addu        $v1, $s7, $s1
    ctx->pc = 0x1400e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x1400e8: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x1400e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1400ec: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x1400ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x1400f0: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x1400f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1400f4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1400f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1400f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1400f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1400fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1400fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x140100: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x140100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_140104:
    // 0x140104: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x140104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x140108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14010c: 0x3d08018  mult        $s0, $fp, $s0
    ctx->pc = 0x14010cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x140110: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x140110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x140114: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x140114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x140118: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140118u;
    SET_GPR_U32(ctx, 31, 0x140120u);
    ctx->pc = 0x14011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140118u;
    // 0x14011c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140118u, 0x140120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140120u;
label_140120:
    // 0x140120: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x140120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x140124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140128: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140128u;
    SET_GPR_U32(ctx, 31, 0x140130u);
    ctx->pc = 0x14012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140128u;
    // 0x14012c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140128u, 0x140130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140130u;
label_140130:
    // 0x140130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140134: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x140134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140138: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140138u;
    SET_GPR_U32(ctx, 31, 0x140140u);
    ctx->pc = 0x14013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140138u;
    // 0x14013c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140138u, 0x140140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140140u;
label_140140:
    // 0x140140: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x140140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x140144: 0x2961821  addu        $v1, $s4, $s6
    ctx->pc = 0x140144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x140148: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x140148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14014c: 0x2b62021  addu        $a0, $s5, $s6
    ctx->pc = 0x14014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x140150: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x140150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140154: 0x2562821  addu        $a1, $s2, $s6
    ctx->pc = 0x140154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x140158: 0x2763021  addu        $a2, $s3, $s6
    ctx->pc = 0x140158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x14015c: 0x2f13821  addu        $a3, $s7, $s1
    ctx->pc = 0x14015cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x140160: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x140160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x140164: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x140164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140168: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x140168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14016c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x14016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x140170: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x140170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x140174: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x140174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140178: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x140178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x14017c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140180: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x140180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x140184: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x140184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x140188: 0x8ce300a8  lw          $v1, 0xA8($a3)
    ctx->pc = 0x140188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 168)));
    // 0x14018c: 0x4610012  bgez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14018Cu;
    {
        const bool branch_taken_0x14018c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x140190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14018Cu;
        // 0x140190: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14018c) {
            ctx->pc = 0x1401D8u;
            goto label_1401d8;
        }
    }
    ctx->pc = 0x140194u;
    // 0x140194: 0x262202c0  addiu       $v0, $s1, 0x2C0
    ctx->pc = 0x140194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x140198: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x140198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x14019c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x14019cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1401a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1401a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1401a4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1401a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1401a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1401a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1401ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1401acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1401b0: 0x0  nop
    ctx->pc = 0x1401b0u;
    // NOP
    // 0x1401b4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1401B4u;
    {
        const bool branch_taken_0x1401b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1401b4) {
            ctx->pc = 0x1401B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1401B4u;
            // 0x1401b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1401D4u;
            goto label_1401d4;
        }
    }
    ctx->pc = 0x1401BCu;
    // 0x1401bc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1401bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1401c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1401c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1401c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1401c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1401c8: 0x0  nop
    ctx->pc = 0x1401c8u;
    // NOP
    // 0x1401cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1401ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1401d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1401d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1401d4:
    // 0x1401d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1401d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1401d8:
    // 0x1401d8: 0x1e9040  sll         $s2, $fp, 1
    ctx->pc = 0x1401d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1401dc: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x1401dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1401e0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1401e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1401e4: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x1401e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1401e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1401e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1401ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1401ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1401f0: 0x84820548  lh          $v0, 0x548($a0)
    ctx->pc = 0x1401f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x1401f4: 0x8483054a  lh          $v1, 0x54A($a0)
    ctx->pc = 0x1401f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x1401f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1401f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1401fc: 0x0  nop
    ctx->pc = 0x1401fcu;
    // NOP
    // 0x140200: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x140200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x140204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x140204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140208: 0x0  nop
    ctx->pc = 0x140208u;
    // NOP
    // 0x14020c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14020cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x140210: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x140210u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x140214: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x140214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140218: 0x0  nop
    ctx->pc = 0x140218u;
    // NOP
    // 0x14021c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x14021Cu;
    {
        const bool branch_taken_0x14021c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14021Cu;
        // 0x140220: 0x263002fc  addiu       $s0, $s1, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14021c) {
            ctx->pc = 0x140258u;
            goto label_140258;
        }
    }
    ctx->pc = 0x140224u;
    // 0x140224: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x140224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x140228: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x140228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14022c: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x14022cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x140230: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x140234: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x140234u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x140238: 0x8e25035c  lw          $a1, 0x35C($s1)
    ctx->pc = 0x140238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x14023c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x14023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x140240: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x140244: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140244u;
    {
        const bool branch_taken_0x140244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x140248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140244u;
        // 0x140248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140244) {
            ctx->pc = 0x140258u;
            goto label_140258;
        }
    }
    ctx->pc = 0x14024Cu;
    // 0x14024c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14024cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140250: 0xc0501c6  jal         func_140718
    ctx->pc = 0x140250u;
    SET_GPR_U32(ctx, 31, 0x140258u);
    ctx->pc = 0x140254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140250u;
    // 0x140254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140718u, 0x140250u, 0x140258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140258u;
label_140258:
    // 0x140258: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x140258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x14025c: 0x8e23035c  lw          $v1, 0x35C($s1)
    ctx->pc = 0x14025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x140260: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x140260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x140264: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x140268: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x140268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14026c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14026Cu;
    {
        const bool branch_taken_0x14026c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x140270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14026Cu;
        // 0x140270: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14026c) {
            ctx->pc = 0x140290u;
            goto label_140290;
        }
    }
    ctx->pc = 0x140274u;
    // 0x140274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140278: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140278u;
    SET_GPR_U32(ctx, 31, 0x140280u);
    ctx->pc = 0x14027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140278u;
    // 0x14027c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140278u, 0x140280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140280u;
label_140280:
    // 0x140280: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x140284: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x140284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x140288: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x140288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x14028c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_140290:
    // 0x140290: 0x262202d4  addiu       $v0, $s1, 0x2D4
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
    // 0x140294: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x140294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x140298: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x140298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14029c: 0xe4740040  swc1        $f20, 0x40($v1)
    ctx->pc = 0x14029cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1402a0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1402a4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1402a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1402a8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1402a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1402ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1402acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1402b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1402B0u;
    {
        const bool branch_taken_0x1402b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1402B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402B0u;
        // 0x1402b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402b0) {
            ctx->pc = 0x1402DCu;
            goto label_1402dc;
        }
    }
    ctx->pc = 0x1402B8u;
    // 0x1402b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1402b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1402bc: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1402bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1402c0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1402c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1402c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1402c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1402c8: 0x46140041  sub.s       $f1, $f0, $f20
    ctx->pc = 0x1402c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1402cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1402ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1402d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1402d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1402d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1402D4u;
    {
        const bool branch_taken_0x1402d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1402D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402D4u;
        // 0x1402d8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402d4) {
            ctx->pc = 0x1402E0u;
            goto label_1402e0;
        }
    }
    ctx->pc = 0x1402DCu;
label_1402dc:
    // 0x1402dc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1402dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1402e0:
    // 0x1402e0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1402e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1402e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1402e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402ec: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1402f0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1402F0u;
    SET_GPR_U32(ctx, 31, 0x1402F8u);
    ctx->pc = 0x1402F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402F0u;
    // 0x1402f4: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1402F0u, 0x1402F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402F8u;
label_1402f8:
    // 0x1402f8: 0x449e1800  mtc1        $fp, $f3
    ctx->pc = 0x1402f8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1402fc: 0x0  nop
    ctx->pc = 0x1402fcu;
    // NOP
    // 0x140300: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x140300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x140304: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x140304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x140308: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x14030c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x14030cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x140310: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x140310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x140314: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x140314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140318: 0x4603a902  mul.s       $f4, $f21, $f3
    ctx->pc = 0x140318u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x14031c: 0xc4820274  lwc1        $f2, 0x274($a0)
    ctx->pc = 0x14031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140320: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x140320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x140324: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x140324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x140328: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x140328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x14032c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14032cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140330: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x140330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x140334: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140338: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x140338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x14033c: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x14033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x140340: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x140340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x140344: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x140344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x140348: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x140348u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x14034c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14034cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x140350: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x140350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x140354: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x140354u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x140358: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x140358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x14035c: 0xe4430038  swc1        $f3, 0x38($v0)
    ctx->pc = 0x14035cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x140360: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x140360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140364: 0xc4800274  lwc1        $f0, 0x274($a0)
    ctx->pc = 0x140364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140368: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x140368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x14036c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x14036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x140370: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140370u;
    {
        const bool branch_taken_0x140370 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x140370) {
            ctx->pc = 0x140374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140370u;
            // 0x140374: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14038Cu;
            goto label_14038c;
        }
    }
    ctx->pc = 0x140378u;
    // 0x140378: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x14037c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14037cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140380: 0x0  nop
    ctx->pc = 0x140380u;
    // NOP
    // 0x140384: 0xe4800274  swc1        $f0, 0x274($a0)
    ctx->pc = 0x140384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x140388: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14038c:
    // 0x14038c: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x14038cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x140390: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x140390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x140394: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x140394u;
    SET_GPR_U32(ctx, 31, 0x14039Cu);
    ctx->pc = 0x140398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140394u;
    // 0x140398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x140394u, 0x14039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14039Cu;
label_14039c:
    // 0x14039c: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x14039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1403a0: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x1403a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
    // 0x1403a4: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x1403a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1403a8: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1403a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1403ac: 0x1440fcb8  bnez        $v0, . + 4 + (-0x348 << 2)
    ctx->pc = 0x1403ACu;
    {
        const bool branch_taken_0x1403ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1403B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403ACu;
        // 0x1403b0: 0x26220250  addiu       $v0, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403ac) {
            ctx->pc = 0x13F690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f690;
        }
    }
    ctx->pc = 0x1403B4u;
label_1403b4:
    // 0x1403b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1403b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403b8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1403B8u;
    SET_GPR_U32(ctx, 31, 0x1403C0u);
    ctx->pc = 0x1403BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1403B8u;
    // 0x1403bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1403B8u, 0x1403C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403C0u;
label_1403c0:
    // 0x1403c0: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1403c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1403c4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1403c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1403c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1403c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1403cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1403ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403d0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1403d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1403d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1403d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403d8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1403D8u;
    SET_GPR_U32(ctx, 31, 0x1403E0u);
    ctx->pc = 0x1403DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1403D8u;
    // 0x1403dc: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1403D8u, 0x1403E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403E0u;
label_1403e0:
    // 0x1403e0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1403e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1403e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1403e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1403e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1403ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1403ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403f0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1403F0u;
    SET_GPR_U32(ctx, 31, 0x1403F8u);
    ctx->pc = 0x1403F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1403F0u;
    // 0x1403f4: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1403F0u, 0x1403F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1403F8u;
label_1403f8:
    // 0x1403f8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1403f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1403fc: 0x8e240250  lw          $a0, 0x250($s1)
    ctx->pc = 0x1403fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x140400: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x140400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140404: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x140404u;
    {
        const bool branch_taken_0x140404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140404u;
        // 0x140408: 0xe6200098  swc1        $f0, 0x98($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140404) {
            ctx->pc = 0x140488u;
            goto label_140488;
        }
    }
    ctx->pc = 0x14040Cu;
    // 0x14040c: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x14040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x140410: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x140410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x140414: 0x2c830071  sltiu       $v1, $a0, 0x71
    ctx->pc = 0x140414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)113) ? 1 : 0);
    // 0x140418: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140418u;
    {
        const bool branch_taken_0x140418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140418u;
        // 0x14041c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140418) {
            ctx->pc = 0x140438u;
            goto label_140438;
        }
    }
    ctx->pc = 0x140420u;
    // 0x140420: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x140420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140424: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
    // 0x140428: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14042c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14042cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140430: 0x800008  jr          $a0
    ctx->pc = 0x140430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140438u: goto label_140438;
            case 0x140488u: goto label_140488;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140430u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x140438u;
label_140438:
    // 0x140438: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x140438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x14043c: 0x24040359  addiu       $a0, $zero, 0x359
    ctx->pc = 0x14043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
    // 0x140440: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x140440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x140444: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x140444u;
    {
        const bool branch_taken_0x140444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x140444) {
            ctx->pc = 0x140448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140444u;
            // 0x140448: 0x92220358  lbu         $v0, 0x358($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14048Cu;
            goto label_14048c;
        }
    }
    ctx->pc = 0x14044Cu;
    // 0x14044c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140450: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140450u;
    SET_GPR_U32(ctx, 31, 0x140458u);
    ctx->pc = 0x140454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140450u;
    // 0x140454: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140450u, 0x140458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140458u;
label_140458:
    // 0x140458: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x14045c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x14045cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x140460: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x140460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x140464: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x140464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140468: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14046c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x14046cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x140470: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x140470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140474: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x140474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140478: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x140478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14047c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x14047cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x140480: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x140480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x140484: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x140484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_140488:
    // 0x140488: 0x92220358  lbu         $v0, 0x358($s1)
    ctx->pc = 0x140488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 856)));
label_14048c:
    // 0x14048c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14048Cu;
    {
        const bool branch_taken_0x14048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14048Cu;
        // 0x140490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14048c) {
            ctx->pc = 0x14051Cu;
            goto label_14051c;
        }
    }
    ctx->pc = 0x140494u;
    // 0x140494: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140494u;
    SET_GPR_U32(ctx, 31, 0x14049Cu);
    ctx->pc = 0x140498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140494u;
    // 0x140498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140494u, 0x14049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14049Cu;
label_14049c:
    // 0x14049c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1404a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1404a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1404a4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1404a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1404a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1404a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1404acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1404b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1404b4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1404B4u;
    SET_GPR_U32(ctx, 31, 0x1404BCu);
    ctx->pc = 0x1404B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404B4u;
    // 0x1404b8: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1404B4u, 0x1404BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404BCu;
label_1404bc:
    // 0x1404bc: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1404bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1404c0: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1404c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1404c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1404c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1404c8: 0x0  nop
    ctx->pc = 0x1404c8u;
    // NOP
    // 0x1404cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1404CCu;
    {
        const bool branch_taken_0x1404cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404CCu;
        // 0x1404d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404cc) {
            ctx->pc = 0x1404E4u;
            goto label_1404e4;
        }
    }
    ctx->pc = 0x1404D4u;
    // 0x1404d4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1404D4u;
    SET_GPR_U32(ctx, 31, 0x1404DCu);
    ctx->pc = 0x1404D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404D4u;
    // 0x1404d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1404D4u, 0x1404DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404DCu;
label_1404dc:
    // 0x1404dc: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x1404dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1404e0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1404e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1404e4:
    // 0x1404e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1404e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404e8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1404E8u;
    SET_GPR_U32(ctx, 31, 0x1404F0u);
    ctx->pc = 0x1404ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404E8u;
    // 0x1404ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1404E8u, 0x1404F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404F0u;
label_1404f0:
    // 0x1404f0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1404f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1404f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1404f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1404f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404fc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1404fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x140500: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140500u;
    SET_GPR_U32(ctx, 31, 0x140508u);
    ctx->pc = 0x140504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140500u;
    // 0x140504: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140500u, 0x140508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140508u;
label_140508:
    // 0x140508: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x140508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14050c: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x14050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140510: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x140510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140514: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140514u;
    {
        const bool branch_taken_0x140514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140514) {
            ctx->pc = 0x14059Cu;
            goto label_14059c;
        }
    }
    ctx->pc = 0x14051Cu;
label_14051c:
    // 0x14051c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x14051Cu;
    SET_GPR_U32(ctx, 31, 0x140524u);
    ctx->pc = 0x140520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14051Cu;
    // 0x140520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x14051Cu, 0x140524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140524u;
label_140524:
    // 0x140524: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x140528: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x140528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14052c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x14052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140538: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x140538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x14053c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14053cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x140540: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x140540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x140544: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140544u;
    SET_GPR_U32(ctx, 31, 0x14054Cu);
    ctx->pc = 0x140548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140544u;
    // 0x140548: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140544u, 0x14054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14054Cu;
label_14054c:
    // 0x14054c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x14054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140550: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x140550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140554: 0x0  nop
    ctx->pc = 0x140554u;
    // NOP
    // 0x140558: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x140558u;
    {
        const bool branch_taken_0x140558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140558u;
        // 0x14055c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140558) {
            ctx->pc = 0x14056Cu;
            goto label_14056c;
        }
    }
    ctx->pc = 0x140560u;
    // 0x140560: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140560u;
    SET_GPR_U32(ctx, 31, 0x140568u);
    ctx->pc = 0x140564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140560u;
    // 0x140564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140560u, 0x140568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140568u;
label_140568:
    // 0x140568: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x140568u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_14056c:
    // 0x14056c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14056cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140570: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140570u;
    SET_GPR_U32(ctx, 31, 0x140578u);
    ctx->pc = 0x140574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140570u;
    // 0x140574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140570u, 0x140578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140578u;
label_140578:
    // 0x140578: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x140578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14057c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140584: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x140584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x140588: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x140588u;
    SET_GPR_U32(ctx, 31, 0x140590u);
    ctx->pc = 0x14058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140588u;
    // 0x14058c: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x140588u, 0x140590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140590u;
label_140590:
    // 0x140590: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x140590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140594: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x140594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140598: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x140598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14059c:
    // 0x14059c: 0x0  nop
    ctx->pc = 0x14059cu;
    // NOP
    // 0x1405a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1405A0u;
    {
        const bool branch_taken_0x1405a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1405A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405A0u;
        // 0x1405a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405a0) {
            ctx->pc = 0x1405B8u;
            goto label_1405b8;
        }
    }
    ctx->pc = 0x1405A8u;
    // 0x1405a8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1405A8u;
    SET_GPR_U32(ctx, 31, 0x1405B0u);
    ctx->pc = 0x1405ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405A8u;
    // 0x1405ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1405A8u, 0x1405B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405B0u;
label_1405b0:
    // 0x1405b0: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x1405b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1405b4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1405b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1405b8:
    // 0x1405b8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1405b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1405bc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1405BCu;
    {
        const bool branch_taken_0x1405bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405BCu;
        // 0x1405c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405bc) {
            ctx->pc = 0x1405DCu;
            goto label_1405dc;
        }
    }
    ctx->pc = 0x1405C4u;
    // 0x1405c4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1405C4u;
    SET_GPR_U32(ctx, 31, 0x1405CCu);
    ctx->pc = 0x1405C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405C4u;
    // 0x1405c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1405C4u, 0x1405CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405CCu;
label_1405cc:
    // 0x1405cc: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x1405ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x1405d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1405d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1405d4: 0x0  nop
    ctx->pc = 0x1405d4u;
    // NOP
    // 0x1405d8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1405d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1405dc:
    // 0x1405dc: 0x92220384  lbu         $v0, 0x384($s1)
    ctx->pc = 0x1405dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x1405e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1405e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1405e4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1405e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1405e8: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1405E8u;
    {
        const bool branch_taken_0x1405e8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1405ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405E8u;
        // 0x1405ec: 0xa2220384  sb          $v0, 0x384($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 900), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405e8) {
            ctx->pc = 0x1405F4u;
            goto label_1405f4;
        }
    }
    ctx->pc = 0x1405F0u;
    // 0x1405f0: 0xa2200384  sb          $zero, 0x384($s1)
    ctx->pc = 0x1405f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 900), (uint8_t)GPR_U32(ctx, 0));
label_1405f4:
    // 0x1405f4: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1405F4u;
    SET_GPR_U32(ctx, 31, 0x1405FCu);
    ctx->pc = 0x1405F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405F4u;
    // 0x1405f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1405F4u, 0x1405FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405FCu;
label_1405fc:
    // 0x1405fc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1405fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_140600:
    // 0x140600: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x140600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x140604: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x140604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140608: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x140608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14060c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x14060cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140610: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x140610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140614: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x140614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140618: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x140618u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14061c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x14061cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x140620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140624: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x140624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x140628: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x140628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14062c: 0x3e00008  jr          $ra
    ctx->pc = 0x14062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14062Cu;
        // 0x140630: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140634u;
    // 0x140634: 0x0  nop
    ctx->pc = 0x140634u;
    // NOP
    ctx->pc = 0x140638u;
}
