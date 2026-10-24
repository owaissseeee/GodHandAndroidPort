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

// Function: func_002294E0
// Address: 0x2294e0 - 0x2299c0
void func_002294E0_0x2294e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002294E0_0x2294e0");
#endif

    switch (ctx->pc) {
        case 0x229514u: goto label_229514;
        case 0x229548u: goto label_229548;
        case 0x229594u: goto label_229594;
        case 0x2295b8u: goto label_2295b8;
        case 0x2295e4u: goto label_2295e4;
        case 0x229604u: goto label_229604;
        case 0x229630u: goto label_229630;
        case 0x229658u: goto label_229658;
        case 0x229678u: goto label_229678;
        case 0x229680u: goto label_229680;
        case 0x2296a8u: goto label_2296a8;
        case 0x2296b4u: goto label_2296b4;
        case 0x2296c4u: goto label_2296c4;
        case 0x2296f0u: goto label_2296f0;
        case 0x22971cu: goto label_22971c;
        case 0x229760u: goto label_229760;
        case 0x2297e8u: goto label_2297e8;
        case 0x2297f4u: goto label_2297f4;
        case 0x229828u: goto label_229828;
        case 0x229838u: goto label_229838;
        case 0x229858u: goto label_229858;
        case 0x2298c4u: goto label_2298c4;
        case 0x2298d4u: goto label_2298d4;
        case 0x2298f4u: goto label_2298f4;
        case 0x229920u: goto label_229920;
        case 0x22993cu: goto label_22993c;
        case 0x22994cu: goto label_22994c;
        case 0x22995cu: goto label_22995c;
        default: break;
    }

    ctx->pc = 0x2294e0u;

    // 0x2294e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2294e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2294e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2294e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2294e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2294e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2294ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2294ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2294f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2294f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2294f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2294f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2294f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2294fc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2294fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x229500: 0xa242186a  sb          $v0, 0x186A($s2)
    ctx->pc = 0x229500u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x229504: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x229504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x229508: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x229508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22950c: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22950Cu;
    SET_GPR_U32(ctx, 31, 0x229514u);
    ctx->pc = 0x229510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22950Cu;
    // 0x229510: 0xae4316d4  sw          $v1, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22950Cu, 0x229514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229514u;
label_229514:
    // 0x229514: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x229514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x229518: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x229518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x22951c: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x22951Cu;
    {
        const bool branch_taken_0x22951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22951Cu;
        // 0x229520: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22951c) {
            ctx->pc = 0x229954u;
            goto label_229954;
        }
    }
    ctx->pc = 0x229524u;
    // 0x229524: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229528: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x229528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x22952c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229530: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229534: 0x800008  jr          $a0
    ctx->pc = 0x229534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22953Cu: goto label_22953c;
            case 0x2295F8u: goto label_2295f8;
            case 0x22963Cu: goto label_22963c;
            case 0x229650u: goto label_229650;
            case 0x2296BCu: goto label_2296bc;
            case 0x229744u: goto label_229744;
            case 0x2298CCu: goto label_2298cc;
            case 0x229934u: goto label_229934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229534u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22953Cu;
label_22953c:
    // 0x22953c: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x22953cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x229540: 0xc09d91a  jal         func_276468
    ctx->pc = 0x229540u;
    SET_GPR_U32(ctx, 31, 0x229548u);
    ctx->pc = 0x229544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229540u;
    // 0x229544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x229540u, 0x229548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229548u;
label_229548:
    // 0x229548: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22954c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22954cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229550: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x229550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22955c: 0x24030222  addiu       $v1, $zero, 0x222
    ctx->pc = 0x22955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    // 0x229560: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x229564: 0xe64105c8  swc1        $f1, 0x5C8($s2)
    ctx->pc = 0x229564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x229568: 0xe64005cc  swc1        $f0, 0x5CC($s2)
    ctx->pc = 0x229568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1484), bits); }
    // 0x22956c: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x22956cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x229570: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x229570u;
    {
        const bool branch_taken_0x229570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x229574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229570u;
        // 0x229574: 0xae4005c4  sw          $zero, 0x5C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229570) {
            ctx->pc = 0x22959Cu;
            goto label_22959c;
        }
    }
    ctx->pc = 0x229578u;
    // 0x229578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22957c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x22957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x229580: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x229580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x229584: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x229584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x229588: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22958c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22958Cu;
    SET_GPR_U32(ctx, 31, 0x229594u);
    ctx->pc = 0x229590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22958Cu;
    // 0x229590: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22958Cu, 0x229594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229594u;
label_229594:
    // 0x229594: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x229594u;
    {
        const bool branch_taken_0x229594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229594u;
        // 0x229598: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229594) {
            ctx->pc = 0x2295BCu;
            goto label_2295bc;
        }
    }
    ctx->pc = 0x22959Cu;
label_22959c:
    // 0x22959c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295a0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2295a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2295a4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2295a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2295a8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2295a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2295ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2295acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2295b0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2295B0u;
    SET_GPR_U32(ctx, 31, 0x2295B8u);
    ctx->pc = 0x2295B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295B0u;
    // 0x2295b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2295B0u, 0x2295B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295B8u;
label_2295b8:
    // 0x2295b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2295b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2295bc:
    // 0x2295bc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2295bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2295c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2295c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2295c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295c8: 0x8c451c50  lw          $a1, 0x1C50($v0)
    ctx->pc = 0x2295c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7248)));
    // 0x2295cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2295ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2295d0: 0x8c461c54  lw          $a2, 0x1C54($v0)
    ctx->pc = 0x2295d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7252)));
    // 0x2295d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2295d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2295d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2295dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2295DCu;
    SET_GPR_U32(ctx, 31, 0x2295E4u);
    ctx->pc = 0x2295E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295DCu;
    // 0x2295e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2295DCu, 0x2295E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2295E4u;
label_2295e4:
    // 0x2295e4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2295e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2295e8: 0xae4005fc  sw          $zero, 0x5FC($s2)
    ctx->pc = 0x2295e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 0));
    // 0x2295ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2295ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2295f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2295F0u;
    {
        const bool branch_taken_0x2295f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295F0u;
        // 0x2295f4: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295f0) {
            ctx->pc = 0x229650u;
            goto label_229650;
        }
    }
    ctx->pc = 0x2295F8u;
label_2295f8:
    // 0x2295f8: 0xa2401864  sb          $zero, 0x1864($s2)
    ctx->pc = 0x2295f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2295fc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2295FCu;
    SET_GPR_U32(ctx, 31, 0x229604u);
    ctx->pc = 0x229600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295FCu;
    // 0x229600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2295FCu, 0x229604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229604u;
label_229604:
    // 0x229604: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x229608: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x229608u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22960c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22960cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229614: 0x8c651c58  lw          $a1, 0x1C58($v1)
    ctx->pc = 0x229614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7256)));
    // 0x229618: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x229618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22961c: 0x8c661c5c  lw          $a2, 0x1C5C($v1)
    ctx->pc = 0x22961cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7260)));
    // 0x229620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x229620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229624: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x229624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x229628: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229628u;
    SET_GPR_U32(ctx, 31, 0x229630u);
    ctx->pc = 0x22962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229628u;
    // 0x22962c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229628u, 0x229630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229630u;
label_229630:
    // 0x229630: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x229630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x229634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229638: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229638u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22963c:
    // 0x22963c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x229640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229648: 0xa2421865  sb          $v0, 0x1865($s2)
    ctx->pc = 0x229648u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6245), (uint8_t)GPR_U32(ctx, 2));
    // 0x22964c: 0xe64017d4  swc1        $f0, 0x17D4($s2)
    ctx->pc = 0x22964cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6100), bits); }
label_229650:
    // 0x229650: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229650u;
    SET_GPR_U32(ctx, 31, 0x229658u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229650u, 0x229658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229658u;
label_229658:
    // 0x229658: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x229658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22965c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229660: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x229660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x229664: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x229664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x229668: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22966c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22966cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x229670: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x229670u;
    SET_GPR_U32(ctx, 31, 0x229678u);
    ctx->pc = 0x229674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229670u;
    // 0x229674: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x229670u, 0x229678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229678u;
label_229678:
    // 0x229678: 0xc055f06  jal         func_157C18
    ctx->pc = 0x229678u;
    SET_GPR_U32(ctx, 31, 0x229680u);
    ctx->pc = 0x22967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229678u;
    // 0x22967c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x229678u, 0x229680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229680u;
label_229680:
    // 0x229680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229680u;
    {
        const bool branch_taken_0x229680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229680) {
            ctx->pc = 0x229694u;
            goto label_229694;
        }
    }
    ctx->pc = 0x229688u;
    // 0x229688: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x229688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x22968c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229690: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229690u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_229694:
    // 0x229694: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229698: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22969c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2296A0u;
    SET_GPR_U32(ctx, 31, 0x2296A8u);
    ctx->pc = 0x2296A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296A0u;
    // 0x2296a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2296A0u, 0x2296A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296A8u;
label_2296a8:
    // 0x2296a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2296a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2296ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2296ACu;
    SET_GPR_U32(ctx, 31, 0x2296B4u);
    ctx->pc = 0x2296B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296ACu;
    // 0x2296b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2296ACu, 0x2296B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296B4u;
label_2296b4:
    // 0x2296b4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2296B4u;
    {
        const bool branch_taken_0x2296b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296b4) {
            ctx->pc = 0x229954u;
            goto label_229954;
        }
    }
    ctx->pc = 0x2296BCu;
label_2296bc:
    // 0x2296bc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2296BCu;
    SET_GPR_U32(ctx, 31, 0x2296C4u);
    ctx->pc = 0x2296C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296BCu;
    // 0x2296c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2296BCu, 0x2296C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296C4u;
label_2296c4:
    // 0x2296c4: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x2296c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2296c8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2296c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2296cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2296ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2296d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2296d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296d4: 0x8c651c60  lw          $a1, 0x1C60($v1)
    ctx->pc = 0x2296d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7264)));
    // 0x2296d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2296dc: 0x8c661c64  lw          $a2, 0x1C64($v1)
    ctx->pc = 0x2296dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7268)));
    // 0x2296e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2296e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2296e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2296e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2296E8u;
    SET_GPR_U32(ctx, 31, 0x2296F0u);
    ctx->pc = 0x2296ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296E8u;
    // 0x2296ec: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2296E8u, 0x2296F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296F0u;
label_2296f0:
    // 0x2296f0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2296f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2296f4: 0x24020221  addiu       $v0, $zero, 0x221
    ctx->pc = 0x2296f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x2296f8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2296F8u;
    {
        const bool branch_taken_0x2296f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2296f8) {
            ctx->pc = 0x2296FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296F8u;
            // 0x2296fc: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229720u;
            goto label_229720;
        }
    }
    ctx->pc = 0x229700u;
    // 0x229700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229704: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x229704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x229708: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x229708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x22970c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22970cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229710: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x229710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229714: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x229714u;
    SET_GPR_U32(ctx, 31, 0x22971Cu);
    ctx->pc = 0x229718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229714u;
    // 0x229718: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x229714u, 0x22971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22971Cu;
label_22971c:
    // 0x22971c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x22971cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_229720:
    // 0x229720: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x229724: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x229724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x229728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22972c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229730: 0xae4005f4  sw          $zero, 0x5F4($s2)
    ctx->pc = 0x229730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
    // 0x229734: 0xe64005d8  swc1        $f0, 0x5D8($s2)
    ctx->pc = 0x229734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1496), bits); }
    // 0x229738: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229738u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22973c: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x22973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x229740: 0xe64005d4  swc1        $f0, 0x5D4($s2)
    ctx->pc = 0x229740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1492), bits); }
label_229744:
    // 0x229744: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x229748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22974c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229750: 0xa2421865  sb          $v0, 0x1865($s2)
    ctx->pc = 0x229750u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6245), (uint8_t)GPR_U32(ctx, 2));
    // 0x229754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229758: 0xc055f06  jal         func_157C18
    ctx->pc = 0x229758u;
    SET_GPR_U32(ctx, 31, 0x229760u);
    ctx->pc = 0x22975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229758u;
    // 0x22975c: 0xe64017d4  swc1        $f0, 0x17D4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x229758u, 0x229760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229760u;
label_229760:
    // 0x229760: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x229760u;
    {
        const bool branch_taken_0x229760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229760) {
            ctx->pc = 0x229764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229760u;
            // 0x229764: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x229788u;
            goto label_229788;
        }
    }
    ctx->pc = 0x229768u;
    // 0x229768: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x229768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x22976c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229770: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229770u;
    {
        const bool branch_taken_0x229770 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x229774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229770u;
        // 0x229774: 0xae4205f0  sw          $v0, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229770) {
            ctx->pc = 0x229784u;
            goto label_229784;
        }
    }
    ctx->pc = 0x229778u;
    // 0x229778: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22977c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x22977Cu;
    {
        const bool branch_taken_0x22977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22977Cu;
        // 0x229780: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22977c) {
            ctx->pc = 0x229954u;
            goto label_229954;
        }
    }
    ctx->pc = 0x229784u;
label_229784:
    // 0x229784: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x229784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229788:
    // 0x229788: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x229788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22978c: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x22978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x229790: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x229790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229794: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x229794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x229798: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x229798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22979c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22979cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2297a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2297a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2297a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2297a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2297a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2297a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2297ac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2297acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2297b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2297b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2297b4: 0x26420330  addiu       $v0, $s2, 0x330
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x2297b8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2297B8u;
    {
        const bool branch_taken_0x2297b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2297BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297B8u;
        // 0x2297bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297b8) {
            ctx->pc = 0x2297D4u;
            goto label_2297d4;
        }
    }
    ctx->pc = 0x2297C0u;
    // 0x2297c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2297c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2297c4: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x2297c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x2297c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2297c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2297cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2297ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2297d0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2297d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2297d4:
    // 0x2297d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2297d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2297d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2297d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2297dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2297dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2297E0u;
    SET_GPR_U32(ctx, 31, 0x2297E8u);
    ctx->pc = 0x2297E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297E0u;
    // 0x2297e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2297E0u, 0x2297E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297E8u;
label_2297e8:
    // 0x2297e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2297e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2297ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2297ECu;
    SET_GPR_U32(ctx, 31, 0x2297F4u);
    ctx->pc = 0x2297F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297ECu;
    // 0x2297f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2297ECu, 0x2297F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2297F4u;
label_2297f4:
    // 0x2297f4: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x2297f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x2297f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2297f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2297fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2297FCu;
    {
        const bool branch_taken_0x2297fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297FCu;
        // 0x229800: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297fc) {
            ctx->pc = 0x229808u;
            goto label_229808;
        }
    }
    ctx->pc = 0x229804u;
    // 0x229804: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_229808:
    // 0x229808: 0x92421864  lbu         $v0, 0x1864($s2)
    ctx->pc = 0x229808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6244)));
    // 0x22980c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22980Cu;
    {
        const bool branch_taken_0x22980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22980Cu;
        // 0x229810: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22980c) {
            ctx->pc = 0x229818u;
            goto label_229818;
        }
    }
    ctx->pc = 0x229814u;
    // 0x229814: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_229818:
    // 0x229818: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x229818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x22981c: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x22981cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x229820: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x229820u;
    SET_GPR_U32(ctx, 31, 0x229828u);
    ctx->pc = 0x229824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229820u;
    // 0x229824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x229820u, 0x229828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229828u;
label_229828:
    // 0x229828: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x229828u;
    {
        const bool branch_taken_0x229828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229828u;
        // 0x22982c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229828) {
            ctx->pc = 0x229840u;
            goto label_229840;
        }
    }
    ctx->pc = 0x229830u;
    // 0x229830: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x229830u;
    SET_GPR_U32(ctx, 31, 0x229838u);
    ctx->pc = 0x229834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229830u;
    // 0x229834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x229830u, 0x229838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229838u;
label_229838:
    // 0x229838: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x229838u;
    {
        const bool branch_taken_0x229838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229838u;
        // 0x22983c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229838) {
            ctx->pc = 0x229844u;
            goto label_229844;
        }
    }
    ctx->pc = 0x229840u;
label_229840:
    // 0x229840: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229840u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_229844:
    // 0x229844: 0x265005d0  addiu       $s0, $s2, 0x5D0
    ctx->pc = 0x229844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x229848: 0x26510490  addiu       $s1, $s2, 0x490
    ctx->pc = 0x229848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x22984c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229850: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x229850u;
    SET_GPR_U32(ctx, 31, 0x229858u);
    ctx->pc = 0x229854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229850u;
    // 0x229854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x229850u, 0x229858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229858u;
label_229858:
    // 0x229858: 0xc64105c8  lwc1        $f1, 0x5C8($s2)
    ctx->pc = 0x229858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22985c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x229860: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x229860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x229864: 0x0  nop
    ctx->pc = 0x229864u;
    // NOP
    // 0x229868: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x229868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x22986c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x22986cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x229870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229874: 0x0  nop
    ctx->pc = 0x229874u;
    // NOP
    // 0x229878: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x229878u;
    {
        const bool branch_taken_0x229878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229878) {
            ctx->pc = 0x22987Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229878u;
            // 0x22987c: 0xae4005f4  sw          $zero, 0x5F4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22989Cu;
            goto label_22989c;
        }
    }
    ctx->pc = 0x229880u;
    // 0x229880: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x229880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x229884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229888: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x229888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22988c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22988Cu;
    {
        const bool branch_taken_0x22988c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22988Cu;
        // 0x229890: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22988c) {
            ctx->pc = 0x22989Cu;
            goto label_22989c;
        }
    }
    ctx->pc = 0x229894u;
    // 0x229894: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x229898: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229898u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_22989c:
    // 0x22989c: 0x12110007  beq         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22989Cu;
    {
        const bool branch_taken_0x22989c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2298A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22989Cu;
        // 0x2298a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22989c) {
            ctx->pc = 0x2298BCu;
            goto label_2298bc;
        }
    }
    ctx->pc = 0x2298A4u;
    // 0x2298a4: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x2298a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2298a8: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x2298a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x2298ac: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2298acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298b0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2298b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2298b4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2298b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2298b8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2298b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2298bc:
    // 0x2298bc: 0xc0989d4  jal         func_262750
    ctx->pc = 0x2298BCu;
    SET_GPR_U32(ctx, 31, 0x2298C4u);
    ctx->pc = 0x2298C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298BCu;
    // 0x2298c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x2298BCu, 0x2298C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298C4u;
label_2298c4:
    // 0x2298c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2298C4u;
    {
        const bool branch_taken_0x2298c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2298c4) {
            ctx->pc = 0x229954u;
            goto label_229954;
        }
    }
    ctx->pc = 0x2298CCu;
label_2298cc:
    // 0x2298cc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2298CCu;
    SET_GPR_U32(ctx, 31, 0x2298D4u);
    ctx->pc = 0x2298D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298CCu;
    // 0x2298d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2298CCu, 0x2298D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298D4u;
label_2298d4:
    // 0x2298d4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2298d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2298d8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2298dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2298dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2298e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2298e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298e4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x2298e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2298e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2298e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2298ec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2298ECu;
    SET_GPR_U32(ctx, 31, 0x2298F4u);
    ctx->pc = 0x2298F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298ECu;
    // 0x2298f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2298ECu, 0x2298F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298F4u;
label_2298f4:
    // 0x2298f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2298f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2298f8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2298f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2298fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x229900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229904: 0x8c451c68  lw          $a1, 0x1C68($v0)
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7272)));
    // 0x229908: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22990c: 0x8c461c6c  lw          $a2, 0x1C6C($v0)
    ctx->pc = 0x22990cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7276)));
    // 0x229910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x229910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229914: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x229914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229918: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229918u;
    SET_GPR_U32(ctx, 31, 0x229920u);
    ctx->pc = 0x22991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229918u;
    // 0x22991c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229918u, 0x229920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229920u;
label_229920:
    // 0x229920: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x229920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x229924: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x229924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x229928: 0xae4305f0  sw          $v1, 0x5F0($s2)
    ctx->pc = 0x229928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
    // 0x22992c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229930: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x229930u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_229934:
    // 0x229934: 0xc055f06  jal         func_157C18
    ctx->pc = 0x229934u;
    SET_GPR_U32(ctx, 31, 0x22993Cu);
    ctx->pc = 0x229938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229934u;
    // 0x229938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x229934u, 0x22993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22993Cu;
label_22993c:
    // 0x22993c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22993Cu;
    {
        const bool branch_taken_0x22993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22993c) {
            ctx->pc = 0x229954u;
            goto label_229954;
        }
    }
    ctx->pc = 0x229944u;
    // 0x229944: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x229944u;
    SET_GPR_U32(ctx, 31, 0x22994Cu);
    ctx->pc = 0x229948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229944u;
    // 0x229948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x229944u, 0x22994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22994Cu;
label_22994c:
    // 0x22994c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22994Cu;
    {
        const bool branch_taken_0x22994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22994Cu;
        // 0x229950: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22994c) {
            ctx->pc = 0x2299A4u;
            goto label_2299a4;
        }
    }
    ctx->pc = 0x229954u;
label_229954:
    // 0x229954: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x229954u;
    SET_GPR_U32(ctx, 31, 0x22995Cu);
    ctx->pc = 0x229958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229954u;
    // 0x229958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x229954u, 0x22995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22995Cu;
label_22995c:
    // 0x22995c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x22995cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x229960: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x229960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x229964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229964u;
    {
        const bool branch_taken_0x229964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229964u;
        // 0x229968: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229964) {
            ctx->pc = 0x229984u;
            goto label_229984;
        }
    }
    ctx->pc = 0x22996Cu;
    // 0x22996c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x22996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x229970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229974: 0xae4316f8  sw          $v1, 0x16F8($s2)
    ctx->pc = 0x229974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5880), GPR_U32(ctx, 3));
    // 0x229978: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x229978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x22997c: 0xae4405fc  sw          $a0, 0x5FC($s2)
    ctx->pc = 0x22997cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 4));
    // 0x229980: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x229980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_229984:
    // 0x229984: 0x8e4205fc  lw          $v0, 0x5FC($s2)
    ctx->pc = 0x229984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1532)));
    // 0x229988: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229988u;
    {
        const bool branch_taken_0x229988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229988u;
        // 0x22998c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229988) {
            ctx->pc = 0x2299A4u;
            goto label_2299a4;
        }
    }
    ctx->pc = 0x229990u;
    // 0x229990: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x229994: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x229994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x229998: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x229998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22999c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2299a0: 0xae4316d4  sw          $v1, 0x16D4($s2)
    ctx->pc = 0x2299a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
label_2299a4:
    // 0x2299a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2299a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2299a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2299a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2299ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2299acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2299b0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2299b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2299b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2299B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2299B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299B4u;
        // 0x2299b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2299B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2299BCu;
    // 0x2299bc: 0x0  nop
    ctx->pc = 0x2299bcu;
    // NOP
    ctx->pc = 0x2299c0u;
}
