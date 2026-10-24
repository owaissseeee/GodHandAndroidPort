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

// Function: func_0012C540
// Address: 0x12c540 - 0x12c708
void func_0012C540_0x12c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C540_0x12c540");
#endif

    switch (ctx->pc) {
        case 0x12c594u: goto label_12c594;
        case 0x12c5bcu: goto label_12c5bc;
        case 0x12c5c8u: goto label_12c5c8;
        case 0x12c618u: goto label_12c618;
        case 0x12c65cu: goto label_12c65c;
        case 0x12c664u: goto label_12c664;
        case 0x12c66cu: goto label_12c66c;
        case 0x12c678u: goto label_12c678;
        case 0x12c680u: goto label_12c680;
        case 0x12c690u: goto label_12c690;
        case 0x12c6bcu: goto label_12c6bc;
        case 0x12c6c4u: goto label_12c6c4;
        case 0x12c6dcu: goto label_12c6dc;
        default: break;
    }

    ctx->pc = 0x12c540u;

    // 0x12c540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12c544: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x12c548: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x12c548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12c54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c550: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12c554: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12c55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c560: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12c564: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x12c568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c56c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12c56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c570: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x12c570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x12c574: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c578: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x12c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12c57c: 0x8c516a88  lw          $s1, 0x6A88($v0)
    ctx->pc = 0x12c57cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x586A88u));
    // 0x12c580: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x12c580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12c584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c588: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12c588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12c58c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x12C58Cu;
    SET_GPR_U32(ctx, 31, 0x12C594u);
    ctx->pc = 0x12C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C58Cu;
    // 0x12c590: 0xe614054c  swc1        $f20, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x12C58Cu, 0x12C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C594u;
label_12c594:
    // 0x12c594: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x12c598: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c59c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x12c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x12c5a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12c5a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12c5a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5a8: 0x240600d1  addiu       $a2, $zero, 0xD1
    ctx->pc = 0x12c5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x12c5ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12c5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12c5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x12C5B4u;
    SET_GPR_U32(ctx, 31, 0x12C5BCu);
    ctx->pc = 0x12C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5B4u;
    // 0x12c5b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x12C5B4u, 0x12C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5BCu;
label_12c5bc:
    // 0x12c5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5c0: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x12C5C0u;
    SET_GPR_U32(ctx, 31, 0x12C5C8u);
    ctx->pc = 0x12C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5C0u;
    // 0x12c5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x12C5C0u, 0x12C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5C8u;
label_12c5c8:
    // 0x12c5c8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C5C8u;
    {
        const bool branch_taken_0x12c5c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5C8u;
        // 0x12c5cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5c8) {
            ctx->pc = 0x12C5D8u;
            goto label_12c5d8;
        }
    }
    ctx->pc = 0x12C5D0u;
    // 0x12c5d0: 0x12420031  beq         $s2, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x12C5D0u;
    {
        const bool branch_taken_0x12c5d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12c5d0) {
            ctx->pc = 0x12C698u;
            goto label_12c698;
        }
    }
    ctx->pc = 0x12C5D8u;
label_12c5d8:
    // 0x12c5d8: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x12c5dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12c5e0: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x12c5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x12c5e4: 0x8e04068c  lw          $a0, 0x68C($s0)
    ctx->pc = 0x12c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
    // 0x12c5e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12c5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12c5ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C5ECu;
    {
        const bool branch_taken_0x12c5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5ECu;
        // 0x12c5f0: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5ec) {
            ctx->pc = 0x12C600u;
            goto label_12c600;
        }
    }
    ctx->pc = 0x12C5F4u;
    // 0x12c5f4: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x12c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x12c5f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12c5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12c5fc: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x12c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_12c600:
    // 0x12c600: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12c604: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x12c608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c60c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12c610: 0xc04b106  jal         func_12C418
    ctx->pc = 0x12C610u;
    SET_GPR_U32(ctx, 31, 0x12C618u);
    ctx->pc = 0x12C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C610u;
    // 0x12c614: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x12C610u, 0x12C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C618u;
label_12c618:
    // 0x12c618: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x12c61c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c620: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x12c620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12c624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c628: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x12c628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c62c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12c62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c630: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x12c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x12c634: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12c634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c638: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x12c638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c640: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x12c640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c644: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12c644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12c648: 0x8c4506f8  lw          $a1, 0x6F8($v0)
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1784)));
    // 0x12c64c: 0x8c4606fc  lw          $a2, 0x6FC($v0)
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1788)));
    // 0x12c650: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12c654: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x12C654u;
    SET_GPR_U32(ctx, 31, 0x12C65Cu);
    ctx->pc = 0x12C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C654u;
    // 0x12c658: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x12C654u, 0x12C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C65Cu;
label_12c65c:
    // 0x12c65c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12C65Cu;
    SET_GPR_U32(ctx, 31, 0x12C664u);
    ctx->pc = 0x12C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C65Cu;
    // 0x12c660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12C65Cu, 0x12C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C664u;
label_12c664:
    // 0x12c664: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x12C664u;
    SET_GPR_U32(ctx, 31, 0x12C66Cu);
    ctx->pc = 0x12C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C664u;
    // 0x12c668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x12C664u, 0x12C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C66Cu;
label_12c66c:
    // 0x12c66c: 0x26040448  addiu       $a0, $s0, 0x448
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    // 0x12c670: 0xc054a88  jal         func_152A20
    ctx->pc = 0x12C670u;
    SET_GPR_U32(ctx, 31, 0x12C678u);
    ctx->pc = 0x12C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C670u;
    // 0x12c674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x12C670u, 0x12C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C678u;
label_12c678:
    // 0x12c678: 0xc05280e  jal         func_14A038
    ctx->pc = 0x12C678u;
    SET_GPR_U32(ctx, 31, 0x12C680u);
    ctx->pc = 0x12C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C678u;
    // 0x12c67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x12C678u, 0x12C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C680u;
label_12c680:
    // 0x12c680: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C680u;
        // 0x12c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C6E0u;
            goto label_12c6e0;
        }
    }
    ctx->pc = 0x12C688u;
    // 0x12c688: 0xc040dd8  jal         func_103760
    ctx->pc = 0x12C688u;
    SET_GPR_U32(ctx, 31, 0x12C690u);
    ctx->pc = 0x12C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C688u;
    // 0x12c68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103760u, 0x12C688u, 0x12C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C690u;
label_12c690:
    // 0x12c690: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12C690u;
    {
        const bool branch_taken_0x12c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C690u;
        // 0x12c694: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c690) {
            ctx->pc = 0x12C6E4u;
            goto label_12c6e4;
        }
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C698u;
    {
        const bool branch_taken_0x12c698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C698u;
        // 0x12c69c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c698) {
            ctx->pc = 0x12C6E0u;
            goto label_12c6e0;
        }
    }
    ctx->pc = 0x12C6A0u;
    // 0x12c6a0: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x12c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12c6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12c6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6b4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x12C6B4u;
    SET_GPR_U32(ctx, 31, 0x12C6BCu);
    ctx->pc = 0x12C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6B4u;
    // 0x12c6b8: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x12C6B4u, 0x12C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6BCu;
label_12c6bc:
    // 0x12c6bc: 0xc0499dc  jal         func_126770
    ctx->pc = 0x12C6BCu;
    SET_GPR_U32(ctx, 31, 0x12C6C4u);
    ctx->pc = 0x12C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6BCu;
    // 0x12c6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x12C6BCu, 0x12C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6C4u;
label_12c6c4:
    // 0x12c6c4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x12c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x12c6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c6d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12c6d4: 0xc040dd8  jal         func_103760
    ctx->pc = 0x12C6D4u;
    SET_GPR_U32(ctx, 31, 0x12C6DCu);
    ctx->pc = 0x12C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6D4u;
    // 0x12c6d8: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103760u, 0x12C6D4u, 0x12C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6DCu;
label_12c6dc:
    // 0x12c6dc: 0xe634054c  swc1        $f20, 0x54C($s1)
    ctx->pc = 0x12c6dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_12c6e0:
    // 0x12c6e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12c6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12c6e4:
    // 0x12c6e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12c6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c6e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12c6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c6f0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x12c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12c6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6F4u;
        // 0x12c6f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C6FCu;
    // 0x12c6fc: 0x0  nop
    ctx->pc = 0x12c6fcu;
    // NOP
    // 0x12c700: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x12c700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c704: 0x0  nop
    ctx->pc = 0x12c704u;
    // NOP
    ctx->pc = 0x12c708u;
}
