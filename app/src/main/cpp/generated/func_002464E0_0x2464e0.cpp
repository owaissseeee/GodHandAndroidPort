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

// Function: func_002464E0
// Address: 0x2464e0 - 0x246698
void func_002464E0_0x2464e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002464E0_0x2464e0");
#endif

    switch (ctx->pc) {
        case 0x246570u: goto label_246570;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465b8u: goto label_2465b8;
        case 0x2465e0u: goto label_2465e0;
        case 0x2465ecu: goto label_2465ec;
        case 0x246600u: goto label_246600;
        case 0x24662cu: goto label_24662c;
        case 0x246648u: goto label_246648;
        case 0x246654u: goto label_246654;
        case 0x246660u: goto label_246660;
        case 0x24667cu: goto label_24667c;
        default: break;
    }

    ctx->pc = 0x2464e0u;

    // 0x2464e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2464e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2464e4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2464e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2464e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2464e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2464ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2464ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2464f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2464f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2464f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2464f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2464f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2464f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2464fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2464fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x246500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246508: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x246508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24650c: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x24650cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x246510: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x246510u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x246514: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x246514u;
    {
        const bool branch_taken_0x246514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x246518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246514u;
        // 0x246518: 0xa2430617  sb          $v1, 0x617($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246514) {
            ctx->pc = 0x2465B0u;
            goto label_2465b0;
        }
    }
    ctx->pc = 0x24651Cu;
    // 0x24651c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x24651cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x246520: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246520u;
    {
        const bool branch_taken_0x246520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246520) {
            ctx->pc = 0x246524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246520u;
            // 0x246524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246538u;
            goto label_246538;
        }
    }
    ctx->pc = 0x246528u;
    // 0x246528: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x246528u;
    {
        const bool branch_taken_0x246528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246528u;
        // 0x24652c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246528) {
            ctx->pc = 0x246550u;
            goto label_246550;
        }
    }
    ctx->pc = 0x246530u;
    // 0x246530: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x246530u;
    {
        const bool branch_taken_0x246530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246530u;
        // 0x246534: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246530) {
            ctx->pc = 0x246684u;
            goto label_246684;
        }
    }
    ctx->pc = 0x246538u;
label_246538:
    // 0x246538: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x246538u;
    {
        const bool branch_taken_0x246538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246538u;
        // 0x24653c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246538) {
            ctx->pc = 0x2465F4u;
            goto label_2465f4;
        }
    }
    ctx->pc = 0x246540u;
    // 0x246540: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x246540u;
    {
        const bool branch_taken_0x246540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x246544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246540u;
        // 0x246544: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246540) {
            ctx->pc = 0x246638u;
            goto label_246638;
        }
    }
    ctx->pc = 0x246548u;
    // 0x246548: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x246548u;
    {
        const bool branch_taken_0x246548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246548u;
        // 0x24654c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246548) {
            ctx->pc = 0x246684u;
            goto label_246684;
        }
    }
    ctx->pc = 0x246550u;
label_246550:
    // 0x246550: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x246550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x246554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246558: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x246558u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24655c: 0x8c502504  lw          $s0, 0x2504($v0)
    ctx->pc = 0x24655cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9476)));
    // 0x246560: 0x8c512508  lw          $s1, 0x2508($v0)
    ctx->pc = 0x246560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9480)));
    // 0x246564: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x246564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x246568: 0xc09d91a  jal         func_276468
    ctx->pc = 0x246568u;
    SET_GPR_U32(ctx, 31, 0x246570u);
    ctx->pc = 0x24656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246568u;
    // 0x24656c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x246568u, 0x246570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246570u;
label_246570:
    // 0x246570: 0x8e4416d0  lw          $a0, 0x16D0($s2)
    ctx->pc = 0x246570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x246574: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x246574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x246578: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x246578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24657c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24657cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x246580: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x246580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x246584: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246584u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246588: 0xae4416d0  sw          $a0, 0x16D0($s2)
    ctx->pc = 0x246588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 4));
    // 0x24658c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x246590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246598: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24659c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24659Cu;
    SET_GPR_U32(ctx, 31, 0x2465A4u);
    ctx->pc = 0x2465A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24659Cu;
    // 0x2465a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24659Cu, 0x2465A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465A4u;
label_2465a4:
    // 0x2465a4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2465a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2465a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2465a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2465ac: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2465acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2465b0:
    // 0x2465b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2465B0u;
    SET_GPR_U32(ctx, 31, 0x2465B8u);
    ctx->pc = 0x2465B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465B0u;
    // 0x2465b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2465B0u, 0x2465B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465B8u;
label_2465b8:
    // 0x2465b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2465B8u;
    {
        const bool branch_taken_0x2465b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465b8) {
            ctx->pc = 0x2465CCu;
            goto label_2465cc;
        }
    }
    ctx->pc = 0x2465C0u;
    // 0x2465c0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2465c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2465c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2465c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2465c8: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2465c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2465cc:
    // 0x2465cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2465d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2465d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2465d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2465d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2465D8u;
    SET_GPR_U32(ctx, 31, 0x2465E0u);
    ctx->pc = 0x2465DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465D8u;
    // 0x2465dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2465D8u, 0x2465E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465E0u;
label_2465e0:
    // 0x2465e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2465e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2465e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2465E4u;
    SET_GPR_U32(ctx, 31, 0x2465ECu);
    ctx->pc = 0x2465E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465E4u;
    // 0x2465e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2465E4u, 0x2465ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465ECu;
label_2465ec:
    // 0x2465ec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2465ECu;
    {
        const bool branch_taken_0x2465ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2465ECu;
        // 0x2465f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465ec) {
            ctx->pc = 0x246680u;
            goto label_246680;
        }
    }
    ctx->pc = 0x2465F4u;
label_2465f4:
    // 0x2465f4: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x2465f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2465f8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2465F8u;
    SET_GPR_U32(ctx, 31, 0x246600u);
    ctx->pc = 0x2465FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2465F8u;
    // 0x2465fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2465F8u, 0x246600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246600u;
label_246600:
    // 0x246600: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x246600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x246604: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x246604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x246608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24660c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246610: 0x8c6524ec  lw          $a1, 0x24EC($v1)
    ctx->pc = 0x246610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9452)));
    // 0x246614: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x246614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x246618: 0x8c6624f0  lw          $a2, 0x24F0($v1)
    ctx->pc = 0x246618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9456)));
    // 0x24661c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24661cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246620: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x246624: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x246624u;
    SET_GPR_U32(ctx, 31, 0x24662Cu);
    ctx->pc = 0x246628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246624u;
    // 0x246628: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x246624u, 0x24662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24662Cu;
label_24662c:
    // 0x24662c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24662cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x246630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246634: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x246634u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_246638:
    // 0x246638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24663c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24663cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x246640: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246640u;
    SET_GPR_U32(ctx, 31, 0x246648u);
    ctx->pc = 0x246644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246640u;
    // 0x246644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246640u, 0x246648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246648u;
label_246648:
    // 0x246648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x246648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24664c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24664Cu;
    SET_GPR_U32(ctx, 31, 0x246654u);
    ctx->pc = 0x246650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24664Cu;
    // 0x246650: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24664Cu, 0x246654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246654u;
label_246654:
    // 0x246654: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x246654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x246658: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x246658u;
    SET_GPR_U32(ctx, 31, 0x246660u);
    ctx->pc = 0x24665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246658u;
    // 0x24665c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x246658u, 0x246660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246660u;
label_246660:
    // 0x246660: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x246660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x246664: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x246664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x246668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x246668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24666c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24666Cu;
    {
        const bool branch_taken_0x24666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24666Cu;
        // 0x246670: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24666c) {
            ctx->pc = 0x246680u;
            goto label_246680;
        }
    }
    ctx->pc = 0x246674u;
    // 0x246674: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x246674u;
    SET_GPR_U32(ctx, 31, 0x24667Cu);
    ctx->pc = 0x246678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246674u;
    // 0x246678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x246674u, 0x24667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24667Cu;
label_24667c:
    // 0x24667c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24667cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_246680:
    // 0x246680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x246680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_246684:
    // 0x246684: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x246684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24668c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x24668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x246690: 0x3e00008  jr          $ra
    ctx->pc = 0x246690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246690u;
        // 0x246694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246698u;
}
