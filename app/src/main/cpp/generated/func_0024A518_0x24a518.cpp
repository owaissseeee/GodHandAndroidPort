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

// Function: func_0024A518
// Address: 0x24a518 - 0x24a768
void func_0024A518_0x24a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024A518_0x24a518");
#endif

    switch (ctx->pc) {
        case 0x24a588u: goto label_24a588;
        case 0x24a5b4u: goto label_24a5b4;
        case 0x24a5c8u: goto label_24a5c8;
        case 0x24a5dcu: goto label_24a5dc;
        case 0x24a5f8u: goto label_24a5f8;
        case 0x24a604u: goto label_24a604;
        case 0x24a610u: goto label_24a610;
        case 0x24a648u: goto label_24a648;
        case 0x24a674u: goto label_24a674;
        case 0x24a688u: goto label_24a688;
        case 0x24a69cu: goto label_24a69c;
        case 0x24a6fcu: goto label_24a6fc;
        case 0x24a714u: goto label_24a714;
        case 0x24a734u: goto label_24a734;
        case 0x24a748u: goto label_24a748;
        case 0x24a754u: goto label_24a754;
        default: break;
    }

    ctx->pc = 0x24a518u;

    // 0x24a518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a51c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x24a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x24a520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24a520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24a524: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x24a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x24a528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a530: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24a530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24a534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24a534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a538: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x24a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24a53c: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x24a53cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24a544: 0x10a40028  beq         $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24A544u;
    {
        const bool branch_taken_0x24a544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x24A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A544u;
        // 0x24a548: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a544) {
            ctx->pc = 0x24A5E8u;
            goto label_24a5e8;
        }
    }
    ctx->pc = 0x24A54Cu;
    // 0x24a54c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x24a54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24a550: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A550u;
    {
        const bool branch_taken_0x24a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a550) {
            ctx->pc = 0x24A554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A550u;
            // 0x24a554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A568u;
            goto label_24a568;
        }
    }
    ctx->pc = 0x24A558u;
    // 0x24a558: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A558u;
    {
        const bool branch_taken_0x24a558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a558) {
            ctx->pc = 0x24A55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A558u;
            // 0x24a55c: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A560u;
    // 0x24a560: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x24A560u;
    {
        const bool branch_taken_0x24a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A560u;
        // 0x24a564: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a560) {
            ctx->pc = 0x24A758u;
            goto label_24a758;
        }
    }
    ctx->pc = 0x24A568u;
label_24a568:
    // 0x24a568: 0x10a20034  beq         $a1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x24A568u;
    {
        const bool branch_taken_0x24a568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A568u;
        // 0x24a56c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a568) {
            ctx->pc = 0x24A63Cu;
            goto label_24a63c;
        }
    }
    ctx->pc = 0x24A570u;
    // 0x24a570: 0x50a20051  beql        $a1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x24A570u;
    {
        const bool branch_taken_0x24a570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a570) {
            ctx->pc = 0x24A574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A570u;
            // 0x24a574: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A6B8u;
            goto label_24a6b8;
        }
    }
    ctx->pc = 0x24A578u;
    // 0x24a578: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x24A578u;
    {
        const bool branch_taken_0x24a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A578u;
        // 0x24a57c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a578) {
            ctx->pc = 0x24A758u;
            goto label_24a758;
        }
    }
    ctx->pc = 0x24A580u;
label_24a580:
    // 0x24a580: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24A580u;
    SET_GPR_U32(ctx, 31, 0x24A588u);
    ctx->pc = 0x24A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A580u;
    // 0x24a584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24A580u, 0x24A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A588u;
label_24a588:
    // 0x24a588: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24a58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24a590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a594: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24a594u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24a598: 0x8c653d7c  lw          $a1, 0x3D7C($v1)
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15740)));
    // 0x24a59c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24a59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a5a0: 0x8c663d80  lw          $a2, 0x3D80($v1)
    ctx->pc = 0x24a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15744)));
    // 0x24a5a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24a5a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a5ac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24A5ACu;
    SET_GPR_U32(ctx, 31, 0x24A5B4u);
    ctx->pc = 0x24A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5ACu;
    // 0x24a5b0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24A5ACu, 0x24A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5B4u;
label_24a5b4:
    // 0x24a5b4: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24a5b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A5B8u;
    {
        const bool branch_taken_0x24a5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5B8u;
        // 0x24a5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5b8) {
            ctx->pc = 0x24A5C8u;
            goto label_24a5c8;
        }
    }
    ctx->pc = 0x24A5C0u;
    // 0x24a5c0: 0xc0a04aa  jal         func_2812A8
    ctx->pc = 0x24A5C0u;
    SET_GPR_U32(ctx, 31, 0x24A5C8u);
    ctx->pc = 0x24A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5C0u;
    // 0x24a5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A8u, 0x24A5C0u, 0x24A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5C8u;
label_24a5c8:
    // 0x24a5c8: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x24a5cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A5CCu;
    {
        const bool branch_taken_0x24a5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5CCu;
        // 0x24a5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5cc) {
            ctx->pc = 0x24A5DCu;
            goto label_24a5dc;
        }
    }
    ctx->pc = 0x24A5D4u;
    // 0x24a5d4: 0xc0a0c72  jal         func_2831C8
    ctx->pc = 0x24A5D4u;
    SET_GPR_U32(ctx, 31, 0x24A5DCu);
    ctx->pc = 0x24A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5D4u;
    // 0x24a5d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831C8u, 0x24A5D4u, 0x24A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5DCu;
label_24a5dc:
    // 0x24a5dc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24a5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a5e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a5e4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24a5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24a5e8:
    // 0x24a5e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a5ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24a5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24a5f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24A5F0u;
    SET_GPR_U32(ctx, 31, 0x24A5F8u);
    ctx->pc = 0x24A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5F0u;
    // 0x24a5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24A5F0u, 0x24A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5F8u;
label_24a5f8:
    // 0x24a5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5fc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24A5FCu;
    SET_GPR_U32(ctx, 31, 0x24A604u);
    ctx->pc = 0x24A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5FCu;
    // 0x24a600: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24A5FCu, 0x24A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A604u;
label_24a604:
    // 0x24a604: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24a604u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24a608: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24A608u;
    SET_GPR_U32(ctx, 31, 0x24A610u);
    ctx->pc = 0x24A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A608u;
    // 0x24a60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24A608u, 0x24A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A610u;
label_24a610:
    // 0x24a610: 0xc601176c  lwc1        $f1, 0x176C($s0)
    ctx->pc = 0x24a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a618: 0x0  nop
    ctx->pc = 0x24a618u;
    // NOP
    // 0x24a61c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24a61cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a620: 0x0  nop
    ctx->pc = 0x24a620u;
    // NOP
    // 0x24a624: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x24A624u;
    {
        const bool branch_taken_0x24a624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a624) {
            ctx->pc = 0x24A628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A624u;
            // 0x24a628: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A758u;
            goto label_24a758;
        }
    }
    ctx->pc = 0x24A62Cu;
    // 0x24a62c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24a62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a634: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x24A634u;
    {
        const bool branch_taken_0x24a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A634u;
        // 0x24a638: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a634) {
            ctx->pc = 0x24A754u;
            goto label_24a754;
        }
    }
    ctx->pc = 0x24A63Cu;
label_24a63c:
    // 0x24a63c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24a63cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a640: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24A640u;
    SET_GPR_U32(ctx, 31, 0x24A648u);
    ctx->pc = 0x24A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A640u;
    // 0x24a644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24A640u, 0x24A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A648u;
label_24a648:
    // 0x24a648: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24a64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24a650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a654: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24a654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24a658: 0x8c653d84  lw          $a1, 0x3D84($v1)
    ctx->pc = 0x24a658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15748)));
    // 0x24a65c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a660: 0x8c663d88  lw          $a2, 0x3D88($v1)
    ctx->pc = 0x24a660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15752)));
    // 0x24a664: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24a664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a668: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a66c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24A66Cu;
    SET_GPR_U32(ctx, 31, 0x24A674u);
    ctx->pc = 0x24A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A66Cu;
    // 0x24a670: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24A66Cu, 0x24A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A674u;
label_24a674:
    // 0x24a674: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24a674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24a678: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A678u;
    {
        const bool branch_taken_0x24a678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A678u;
        // 0x24a67c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a678) {
            ctx->pc = 0x24A688u;
            goto label_24a688;
        }
    }
    ctx->pc = 0x24A680u;
    // 0x24a680: 0xc0a04aa  jal         func_2812A8
    ctx->pc = 0x24A680u;
    SET_GPR_U32(ctx, 31, 0x24A688u);
    ctx->pc = 0x24A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A680u;
    // 0x24a684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812A8u, 0x24A680u, 0x24A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A688u;
label_24a688:
    // 0x24a688: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x24a68c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A68Cu;
    {
        const bool branch_taken_0x24a68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A68Cu;
        // 0x24a690: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a68c) {
            ctx->pc = 0x24A69Cu;
            goto label_24a69c;
        }
    }
    ctx->pc = 0x24A694u;
    // 0x24a694: 0xc0a0c72  jal         func_2831C8
    ctx->pc = 0x24A694u;
    SET_GPR_U32(ctx, 31, 0x24A69Cu);
    ctx->pc = 0x24A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A694u;
    // 0x24a698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831C8u, 0x24A694u, 0x24A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A69Cu;
label_24a69c:
    // 0x24a69c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24a69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24a6a0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x24a6a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24a6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24a6ac: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x24a6b0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24a6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24a6b4: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x24a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a6b8:
    // 0x24a6b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a6b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a6bc: 0x0  nop
    ctx->pc = 0x24a6bcu;
    // NOP
    // 0x24a6c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24a6c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a6c4: 0x0  nop
    ctx->pc = 0x24a6c4u;
    // NOP
    // 0x24a6c8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x24A6C8u;
    {
        const bool branch_taken_0x24a6c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a6c8) {
            ctx->pc = 0x24A6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A6C8u;
            // 0x24a6cc: 0x8e0316d0  lw          $v1, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A6E0u;
            goto label_24a6e0;
        }
    }
    ctx->pc = 0x24A6D0u;
    // 0x24a6d0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a6d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24a6d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a6d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A6D8u;
    {
        const bool branch_taken_0x24a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6D8u;
        // 0x24a6dc: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6d8) {
            ctx->pc = 0x24A6F0u;
            goto label_24a6f0;
        }
    }
    ctx->pc = 0x24A6E0u;
label_24a6e0:
    // 0x24a6e0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x24a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x24a6e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24a6e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24a6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24a6ec: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x24a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
label_24a6f0:
    // 0x24a6f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24a6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a6f4: 0xc092578  jal         func_2495E0
    ctx->pc = 0x24A6F4u;
    SET_GPR_U32(ctx, 31, 0x24A6FCu);
    ctx->pc = 0x24A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6F4u;
    // 0x24a6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2495E0u, 0x24A6F4u, 0x24A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6FCu;
label_24a6fc:
    // 0x24a6fc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24a700: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24a700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24a704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24a70c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24A70Cu;
    SET_GPR_U32(ctx, 31, 0x24A714u);
    ctx->pc = 0x24A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A70Cu;
    // 0x24a710: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24A70Cu, 0x24A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A714u;
label_24a714:
    // 0x24a714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A714u;
    {
        const bool branch_taken_0x24a714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A714u;
        // 0x24a718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a714) {
            ctx->pc = 0x24A734u;
            goto label_24a734;
        }
    }
    ctx->pc = 0x24A71Cu;
    // 0x24a71c: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x24a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24a720: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x24a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x24a724: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24a724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24a728: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24a728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24a72c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24A72Cu;
    SET_GPR_U32(ctx, 31, 0x24A734u);
    ctx->pc = 0x24A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A72Cu;
    // 0x24a730: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24A72Cu, 0x24A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A734u;
label_24a734:
    // 0x24a734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a738: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24a738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24a73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a740: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24A740u;
    SET_GPR_U32(ctx, 31, 0x24A748u);
    ctx->pc = 0x24A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A740u;
    // 0x24a744: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24A740u, 0x24A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A748u;
label_24a748:
    // 0x24a748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a74c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24A74Cu;
    SET_GPR_U32(ctx, 31, 0x24A754u);
    ctx->pc = 0x24A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A74Cu;
    // 0x24a750: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24A74Cu, 0x24A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A754u;
label_24a754:
    // 0x24a754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24a754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24a758:
    // 0x24a758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a75c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a760: 0x3e00008  jr          $ra
    ctx->pc = 0x24A760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A760u;
        // 0x24a764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A768u;
}
