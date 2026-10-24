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

// Function: func_0031C5C0
// Address: 0x31c5c0 - 0x31c7e0
void func_0031C5C0_0x31c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C5C0_0x31c5c0");
#endif

    switch (ctx->pc) {
        case 0x31c5dcu: goto label_31c5dc;
        case 0x31c700u: goto label_31c700;
        case 0x31c794u: goto label_31c794;
        case 0x31c7a8u: goto label_31c7a8;
        case 0x31c7b0u: goto label_31c7b0;
        case 0x31c7c4u: goto label_31c7c4;
        default: break;
    }

    ctx->pc = 0x31c5c0u;

    // 0x31c5c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31c5c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31c5c8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31c5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31c5cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31c5d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x31c5d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x31C5D4u;
    SET_GPR_U32(ctx, 31, 0x31C5DCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x31C5D4u, 0x31C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5DCu;
label_31c5dc:
    // 0x31c5dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31c5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5e0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x31c5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x31c5e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31c5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31c5e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31c5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c5ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31c5f0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x31c5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x31c5f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31c5f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31c5f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31c5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c5fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x31c5fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c600: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31c600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x31c604: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x31c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x31c608: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31c60c: 0xc44205c4  lwc1        $f2, 0x5C4($v0)
    ctx->pc = 0x31c60cu;
    { uint32_t bits = FAST_READ32(0x747A64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31c610: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x31c610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x31c614: 0x8c460598  lw          $a2, 0x598($v0)
    ctx->pc = 0x31c614u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x747A38u));
    // 0x31c618: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x31c618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x31c61c: 0x8c4305e4  lw          $v1, 0x5E4($v0)
    ctx->pc = 0x31c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x31c620: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31c620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31c624: 0xc45405d0  lwc1        $f20, 0x5D0($v0)
    ctx->pc = 0x31c624u;
    { uint32_t bits = FAST_READ32(0x747A70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c628: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x31c628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x31c62c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x31c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x31c630: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x31c630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x31c634: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x31c634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31c638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31c63c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31c63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c640: 0xc44105c0  lwc1        $f1, 0x5C0($v0)
    ctx->pc = 0x31c640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c644: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x31c644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c648: 0xc44305c8  lwc1        $f3, 0x5C8($v0)
    ctx->pc = 0x31c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31c64c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x31c64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31c650: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31c650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31c654: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x31c654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x31c658: 0xac4305e4  sw          $v1, 0x5E4($v0)
    ctx->pc = 0x31c658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1508), GPR_U32(ctx, 3));
    // 0x31c65c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x31c65cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31c660: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x31c660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31c664: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x31c664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31c668: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x31C668u;
    {
        const bool branch_taken_0x31c668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C668u;
        // 0x31c66c: 0xac460598  sw          $a2, 0x598($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c668) {
            ctx->pc = 0x31C694u;
            goto label_31c694;
        }
    }
    ctx->pc = 0x31C670u;
    // 0x31c670: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x31c670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x31c674: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x31c674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x31c678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31c678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c67c: 0x0  nop
    ctx->pc = 0x31c67cu;
    // NOP
    // 0x31c680: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31c680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c684: 0x0  nop
    ctx->pc = 0x31c684u;
    // NOP
    // 0x31c688: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31C688u;
    {
        const bool branch_taken_0x31c688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C688u;
        // 0x31c68c: 0x252274a0  addiu       $v0, $t1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c688) {
            ctx->pc = 0x31C698u;
            goto label_31c698;
        }
    }
    ctx->pc = 0x31C690u;
    // 0x31c690: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31c690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31c694:
    // 0x31c694: 0x252274a0  addiu       $v0, $t1, 0x74A0
    ctx->pc = 0x31c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
label_31c698:
    // 0x31c698: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x31c698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31c69c: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x31c69cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x31c6a0: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31C6A0u;
    {
        const bool branch_taken_0x31c6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x31C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6A0u;
        // 0x31c6a4: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6a0) {
            ctx->pc = 0x31C710u;
            goto label_31c710;
        }
    }
    ctx->pc = 0x31C6A8u;
    // 0x31c6a8: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x31c6a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31c6ac: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x31c6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31c6b0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x31c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c6b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31c6b8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x31c6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x31c6bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31c6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c6c4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x31c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6c8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x31c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x31c6cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31c6ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31c6d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x31c6d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31c6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x31c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31c6dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x31c6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31c6e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x31c6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x31c6e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31c6e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6ec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x31c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x31c6f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31c6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6f4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x31c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x31c6f8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x31C6F8u;
    SET_GPR_U32(ctx, 31, 0x31C700u);
    ctx->pc = 0x31C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6F8u;
    // 0x31c6fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x31C6F8u, 0x31C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C700u;
label_31c700:
    // 0x31c700: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31C700u;
    {
        const bool branch_taken_0x31c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C700u;
        // 0x31c704: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c700) {
            ctx->pc = 0x31C70Cu;
            goto label_31c70c;
        }
    }
    ctx->pc = 0x31C708u;
    // 0x31c708: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x31c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_31c70c:
    // 0x31c70c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x31c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c710:
    // 0x31c710: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x31c710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x31c714: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x31c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x31c718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c71c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x31c71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x31c720: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x31c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c724: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x31c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x31c728: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x31c728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x31c72c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x31c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c730: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x31c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x31c734: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x31c734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x31c738: 0xe6340104  swc1        $f20, 0x104($s1)
    ctx->pc = 0x31c738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x31c73c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x31c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x31c740: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x31c740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x31c744: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x31c744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x31c748: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c74c: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x31c74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x31c750: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c754: 0xe6210494  swc1        $f1, 0x494($s1)
    ctx->pc = 0x31c754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1172), bits); }
    // 0x31c758: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c75c: 0xe6200498  swc1        $f0, 0x498($s1)
    ctx->pc = 0x31c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1176), bits); }
    // 0x31c760: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x31c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c764: 0xe62100b0  swc1        $f1, 0xB0($s1)
    ctx->pc = 0x31c764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x31c768: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x31c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c76c: 0xe62000b4  swc1        $f0, 0xB4($s1)
    ctx->pc = 0x31c76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x31c770: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x31c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c774: 0xe62100b8  swc1        $f1, 0xB8($s1)
    ctx->pc = 0x31c774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x31c778: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x31c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c77c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x31c77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x31c780: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c784: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x31c784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x31c788: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x31c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c78c: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x31C78Cu;
    SET_GPR_U32(ctx, 31, 0x31C794u);
    ctx->pc = 0x31C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C78Cu;
    // 0x31c790: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x31C78Cu, 0x31C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C794u;
label_31c794:
    // 0x31c794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c798: 0x92270140  lbu         $a3, 0x140($s1)
    ctx->pc = 0x31c798u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x31c79c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7a0: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x31C7A0u;
    SET_GPR_U32(ctx, 31, 0x31C7A8u);
    ctx->pc = 0x31C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7A0u;
    // 0x31c7a4: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x31C7A0u, 0x31C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7A8u;
label_31c7a8:
    // 0x31c7a8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x31C7A8u;
    SET_GPR_U32(ctx, 31, 0x31C7B0u);
    ctx->pc = 0x31C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7A8u;
    // 0x31c7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x31C7A8u, 0x31C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7B0u;
label_31c7b0:
    // 0x31c7b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x31c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x31c7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31c7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7b8: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x31c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x31c7bc: 0xc04e76e  jal         func_139DB8
    ctx->pc = 0x31C7BCu;
    SET_GPR_U32(ctx, 31, 0x31C7C4u);
    ctx->pc = 0x31C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7BCu;
    // 0x31c7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139DB8u, 0x31C7BCu, 0x31C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7C4u;
label_31c7c4:
    // 0x31c7c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31c7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c7c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31c7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c7cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c7d0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x31c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7D4u;
        // 0x31c7d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C7DCu;
    // 0x31c7dc: 0x0  nop
    ctx->pc = 0x31c7dcu;
    // NOP
    ctx->pc = 0x31c7e0u;
}
