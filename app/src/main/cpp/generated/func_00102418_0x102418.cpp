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

// Function: func_00102418
// Address: 0x102418 - 0x102728
void func_00102418_0x102418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102418_0x102418");
#endif

    switch (ctx->pc) {
        case 0x102438u: goto label_102438;
        case 0x10247cu: goto label_10247c;
        case 0x1024e4u: goto label_1024e4;
        case 0x1024f8u: goto label_1024f8;
        case 0x102530u: goto label_102530;
        case 0x102560u: goto label_102560;
        case 0x1025e0u: goto label_1025e0;
        case 0x102614u: goto label_102614;
        case 0x102624u: goto label_102624;
        case 0x10264cu: goto label_10264c;
        case 0x102670u: goto label_102670;
        case 0x102680u: goto label_102680;
        case 0x1026a8u: goto label_1026a8;
        case 0x1026c4u: goto label_1026c4;
        case 0x1026ecu: goto label_1026ec;
        default: break;
    }

    ctx->pc = 0x102418u;

    // 0x102418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x102418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10241c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x102420: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x102420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x102424: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x102424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x102428: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x102428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10242c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102430: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x102430u;
    SET_GPR_U32(ctx, 31, 0x102438u);
    ctx->pc = 0x102434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102430u;
    // 0x102434: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x102430u, 0x102438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102438u;
label_102438:
    // 0x102438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x102438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10243c: 0x8e2214b0  lw          $v0, 0x14B0($s1)
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
    // 0x102440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102444: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x102444u;
    {
        const bool branch_taken_0x102444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102444u;
        // 0x102448: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102444) {
            ctx->pc = 0x102710u;
            goto label_102710;
        }
    }
    ctx->pc = 0x10244Cu;
    // 0x10244c: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x10244cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
    // 0x102450: 0x5840000e  blezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x102450u;
    {
        const bool branch_taken_0x102450 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x102450) {
            ctx->pc = 0x102454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102450u;
            // 0x102454: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10248Cu;
            goto label_10248c;
        }
    }
    ctx->pc = 0x102458u;
    // 0x102458: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x102458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x10245c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10245Cu;
    {
        const bool branch_taken_0x10245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10245c) {
            ctx->pc = 0x102460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10245Cu;
            // 0x102460: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10248Cu;
            goto label_10248c;
        }
    }
    ctx->pc = 0x102464u;
    // 0x102464: 0x8e2214b4  lw          $v0, 0x14B4($s1)
    ctx->pc = 0x102464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5300)));
    // 0x102468: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102468u;
    {
        const bool branch_taken_0x102468 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x102468) {
            ctx->pc = 0x10246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102468u;
            // 0x10246c: 0x8e2214b0  lw          $v0, 0x14B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10248Cu;
            goto label_10248c;
        }
    }
    ctx->pc = 0x102470u;
    // 0x102470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x102470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102474: 0xc04b150  jal         func_12C540
    ctx->pc = 0x102474u;
    SET_GPR_U32(ctx, 31, 0x10247Cu);
    ctx->pc = 0x102478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102474u;
    // 0x102478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C540u, 0x102474u, 0x10247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10247Cu;
label_10247c:
    // 0x10247c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x102480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102484: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x102484u;
    {
        const bool branch_taken_0x102484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102484u;
        // 0x102488: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102484) {
            ctx->pc = 0x10270Cu;
            goto label_10270c;
        }
    }
    ctx->pc = 0x10248Cu;
label_10248c:
    // 0x10248c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10248cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102490: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x102490u;
    {
        const bool branch_taken_0x102490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102490u;
        // 0x102494: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102490) {
            ctx->pc = 0x102710u;
            goto label_102710;
        }
    }
    ctx->pc = 0x102498u;
    // 0x102498: 0x8e2305b0  lw          $v1, 0x5B0($s1)
    ctx->pc = 0x102498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x10249c: 0x5060009d  beql        $v1, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x10249Cu;
    {
        const bool branch_taken_0x10249c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10249c) {
            ctx->pc = 0x1024A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10249Cu;
            // 0x1024a0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102714u;
            goto label_102714;
        }
    }
    ctx->pc = 0x1024A4u;
    // 0x1024a4: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x1024a4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1024a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1024a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1024ac: 0x50400099  beql        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x1024ACu;
    {
        const bool branch_taken_0x1024ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1024ac) {
            ctx->pc = 0x1024B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1024ACu;
            // 0x1024b0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102714u;
            goto label_102714;
        }
    }
    ctx->pc = 0x1024B4u;
    // 0x1024b4: 0xc621054c  lwc1        $f1, 0x54C($s1)
    ctx->pc = 0x1024b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1024b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1024b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1024bc: 0x0  nop
    ctx->pc = 0x1024bcu;
    // NOP
    // 0x1024c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1024c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1024c4: 0x0  nop
    ctx->pc = 0x1024c4u;
    // NOP
    // 0x1024c8: 0x45030092  bc1tl       . + 4 + (0x92 << 2)
    ctx->pc = 0x1024C8u;
    {
        const bool branch_taken_0x1024c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1024c8) {
            ctx->pc = 0x1024CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1024C8u;
            // 0x1024cc: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102714u;
            goto label_102714;
        }
    }
    ctx->pc = 0x1024D0u;
    // 0x1024d0: 0x8c70004c  lw          $s0, 0x4C($v1)
    ctx->pc = 0x1024d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1024d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1024d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024d8: 0x8c720034  lw          $s2, 0x34($v1)
    ctx->pc = 0x1024d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1024dc: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x1024DCu;
    SET_GPR_U32(ctx, 31, 0x1024E4u);
    ctx->pc = 0x1024E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024DCu;
    // 0x1024e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x1024DCu, 0x1024E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024E4u;
label_1024e4:
    // 0x1024e4: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1024E4u;
    {
        const bool branch_taken_0x1024e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1024E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024E4u;
        // 0x1024e8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e4) {
            ctx->pc = 0x1024F8u;
            goto label_1024f8;
        }
    }
    ctx->pc = 0x1024ECu;
    // 0x1024ec: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1024ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1024f0: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1024F0u;
    SET_GPR_U32(ctx, 31, 0x1024F8u);
    ctx->pc = 0x1024F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024F0u;
    // 0x1024f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1024F0u, 0x1024F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024F8u;
label_1024f8:
    // 0x1024f8: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x1024f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x1024fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1024fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102500: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x102504: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x102504u;
    {
        const bool branch_taken_0x102504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x102508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102504u;
        // 0x102508: 0x84460044  lh          $a2, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102504) {
            ctx->pc = 0x102538u;
            goto label_102538;
        }
    }
    ctx->pc = 0x10250Cu;
    // 0x10250c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x102510: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x102510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102514: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x102514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x102518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10251c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10251cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102520: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x102520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102524: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x102524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102528: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x102528u;
    SET_GPR_U32(ctx, 31, 0x102530u);
    ctx->pc = 0x10252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102528u;
    // 0x10252c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x102528u, 0x102530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102530u;
label_102530:
    // 0x102530: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102530u;
    {
        const bool branch_taken_0x102530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102530u;
        // 0x102534: 0x8e2205b0  lw          $v0, 0x5B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102530) {
            ctx->pc = 0x102564u;
            goto label_102564;
        }
    }
    ctx->pc = 0x102538u;
label_102538:
    // 0x102538: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x102538u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x10253c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102540: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x102540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x102544: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x102544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x102548: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x102548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10254c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10254cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102550: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102554: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102558: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x102558u;
    SET_GPR_U32(ctx, 31, 0x102560u);
    ctx->pc = 0x10255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102558u;
    // 0x10255c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x102558u, 0x102560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102560u;
label_102560:
    // 0x102560: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x102560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
label_102564:
    // 0x102564: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x102564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x102568: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x10256c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x10256Cu;
    {
        const bool branch_taken_0x10256c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x102570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10256Cu;
        // 0x102570: 0x2882004c  slti        $v0, $a0, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)76) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10256c) {
            ctx->pc = 0x1025F4u;
            goto label_1025f4;
        }
    }
    ctx->pc = 0x102574u;
    // 0x102574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102574u;
    {
        const bool branch_taken_0x102574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102574u;
        // 0x102578: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102574) {
            ctx->pc = 0x10258Cu;
            goto label_10258c;
        }
    }
    ctx->pc = 0x10257Cu;
    // 0x10257c: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10257Cu;
    {
        const bool branch_taken_0x10257c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x102580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10257Cu;
        // 0x102580: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10257c) {
            ctx->pc = 0x1025E8u;
            goto label_1025e8;
        }
    }
    ctx->pc = 0x102584u;
    // 0x102584: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x102584u;
    {
        const bool branch_taken_0x102584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102584u;
        // 0x102588: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102584) {
            ctx->pc = 0x10259Cu;
            goto label_10259c;
        }
    }
    ctx->pc = 0x10258Cu;
label_10258c:
    // 0x10258c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x102590: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x102590u;
    {
        const bool branch_taken_0x102590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x102594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102590u;
        // 0x102594: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102590) {
            ctx->pc = 0x102654u;
            goto label_102654;
        }
    }
    ctx->pc = 0x102598u;
    // 0x102598: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x102598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_10259c:
    // 0x10259c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1025a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1025a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1025a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1025A4u;
    {
        const bool branch_taken_0x1025a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025A4u;
        // 0x1025a8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025a4) {
            ctx->pc = 0x1025B8u;
            goto label_1025b8;
        }
    }
    ctx->pc = 0x1025ACu;
    // 0x1025ac: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1025acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1025b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1025B0u;
    {
        const bool branch_taken_0x1025b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025B0u;
        // 0x1025b4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025b0) {
            ctx->pc = 0x1025BCu;
            goto label_1025bc;
        }
    }
    ctx->pc = 0x1025B8u;
label_1025b8:
    // 0x1025b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1025b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1025bc:
    // 0x1025bc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1025BCu;
    {
        const bool branch_taken_0x1025bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025BCu;
        // 0x1025c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025bc) {
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x1025C4u;
    // 0x1025c4: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x1025c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1025c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1025cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1025ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1025d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1025d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1025d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1025d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025d8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1025D8u;
    SET_GPR_U32(ctx, 31, 0x1025E0u);
    ctx->pc = 0x1025DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025D8u;
    // 0x1025dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1025D8u, 0x1025E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025E0u;
label_1025e0:
    // 0x1025e0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1025E0u;
    {
        const bool branch_taken_0x1025e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1025e0) {
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x1025E8u;
label_1025e8:
    // 0x1025e8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1025e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1025ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1025ECu;
    {
        const bool branch_taken_0x1025ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025ECu;
        // 0x1025f0: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025ec) {
            ctx->pc = 0x102600u;
            goto label_102600;
        }
    }
    ctx->pc = 0x1025F4u;
label_1025f4:
    // 0x1025f4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1025f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1025f8: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x1025f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1025fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1025fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_102600:
    // 0x102600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102608: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10260c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x10260Cu;
    SET_GPR_U32(ctx, 31, 0x102614u);
    ctx->pc = 0x102610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10260Cu;
    // 0x102610: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10260Cu, 0x102614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102614u;
label_102614:
    // 0x102614: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x102614u;
    {
        const bool branch_taken_0x102614 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x102618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102614u;
        // 0x102618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102614) {
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x10261Cu;
    // 0x10261c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x10261Cu;
    SET_GPR_U32(ctx, 31, 0x102624u);
    ctx->pc = 0x102620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10261Cu;
    // 0x102620: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x10261Cu, 0x102624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102624u;
label_102624:
    // 0x102624: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x102624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x102628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10262c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10262cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x102630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x102630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102634: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x102634u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x102638: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x102638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10263c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102640: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102644: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x102644u;
    SET_GPR_U32(ctx, 31, 0x10264Cu);
    ctx->pc = 0x102648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102644u;
    // 0x102648: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x102644u, 0x10264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10264Cu;
label_10264c:
    // 0x10264c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x10264Cu;
    {
        const bool branch_taken_0x10264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10264c) {
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x102654u;
label_102654:
    // 0x102654: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x102654u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x102658: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10265c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10265cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102664: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x102664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102668: 0xc0c194a  jal         func_306528
    ctx->pc = 0x102668u;
    SET_GPR_U32(ctx, 31, 0x102670u);
    ctx->pc = 0x10266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102668u;
    // 0x10266c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x102668u, 0x102670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102670u;
label_102670:
    // 0x102670: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x102670u;
    {
        const bool branch_taken_0x102670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x102674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102670u;
        // 0x102674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102670) {
            ctx->pc = 0x1026A8u;
            goto label_1026a8;
        }
    }
    ctx->pc = 0x102678u;
    // 0x102678: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x102678u;
    SET_GPR_U32(ctx, 31, 0x102680u);
    ctx->pc = 0x10267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102678u;
    // 0x10267c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x102678u, 0x102680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102680u;
label_102680:
    // 0x102680: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x102684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102688: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10268c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102690: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x102690u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x102694: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x102694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102698: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x102698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10269c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10269cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026a0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1026A0u;
    SET_GPR_U32(ctx, 31, 0x1026A8u);
    ctx->pc = 0x1026A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026A0u;
    // 0x1026a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1026A0u, 0x1026A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026A8u;
label_1026a8:
    // 0x1026a8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1026a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1026ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1026acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1026b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1026b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1026b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1026b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026bc: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1026BCu;
    SET_GPR_U32(ctx, 31, 0x1026C4u);
    ctx->pc = 0x1026C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026BCu;
    // 0x1026c0: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1026BCu, 0x1026C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026C4u;
label_1026c4:
    // 0x1026c4: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x1026c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x1026c8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1026c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1026cc: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x1026ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x1026d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1026D0u;
    {
        const bool branch_taken_0x1026d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026D0u;
        // 0x1026d4: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026d0) {
            ctx->pc = 0x1026E0u;
            goto label_1026e0;
        }
    }
    ctx->pc = 0x1026D8u;
    // 0x1026d8: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1026D8u;
    {
        const bool branch_taken_0x1026d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1026d8) {
            ctx->pc = 0x1026DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1026D8u;
            // 0x1026dc: 0x8662054a  lh          $v0, 0x54A($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026F0u;
            goto label_1026f0;
        }
    }
    ctx->pc = 0x1026E0u;
label_1026e0:
    // 0x1026e0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1026e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1026e4: 0xc0a4c34  jal         func_2930D0
    ctx->pc = 0x1026E4u;
    SET_GPR_U32(ctx, 31, 0x1026ECu);
    ctx->pc = 0x1026E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026E4u;
    // 0x1026e8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930D0u, 0x1026E4u, 0x1026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026ECu;
label_1026ec:
    // 0x1026ec: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x1026ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
label_1026f0:
    // 0x1026f0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1026F0u;
    {
        const bool branch_taken_0x1026f0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1026F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026F0u;
        // 0x1026f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026f0) {
            ctx->pc = 0x1026FCu;
            goto label_1026fc;
        }
    }
    ctx->pc = 0x1026F8u;
    // 0x1026f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1026fc:
    // 0x1026fc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1026fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x102700: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x102700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x102704: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x102704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x102708: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x102708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10270c:
    // 0x10270c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10270cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_102710:
    // 0x102710: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x102710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_102714:
    // 0x102714: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x102714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102718: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x102718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10271c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10271cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102720: 0x3e00008  jr          $ra
    ctx->pc = 0x102720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102720u;
        // 0x102724: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102728u;
}
