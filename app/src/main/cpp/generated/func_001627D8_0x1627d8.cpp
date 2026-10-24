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

// Function: func_001627D8
// Address: 0x1627d8 - 0x162b18
void func_001627D8_0x1627d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001627D8_0x1627d8");
#endif

    switch (ctx->pc) {
        case 0x1627fcu: goto label_1627fc;
        case 0x162814u: goto label_162814;
        case 0x162830u: goto label_162830;
        case 0x162840u: goto label_162840;
        case 0x162848u: goto label_162848;
        case 0x162858u: goto label_162858;
        case 0x162870u: goto label_162870;
        case 0x16287cu: goto label_16287c;
        case 0x162898u: goto label_162898;
        case 0x1628c0u: goto label_1628c0;
        case 0x162a58u: goto label_162a58;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a9cu: goto label_162a9c;
        case 0x162ab0u: goto label_162ab0;
        case 0x162ae0u: goto label_162ae0;
        case 0x162af4u: goto label_162af4;
        default: break;
    }

    ctx->pc = 0x1627d8u;

    // 0x1627d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1627d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1627dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1627dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1627e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1627e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1627e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1627e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1627e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1627e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1627ec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1627ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1627f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1627f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1627f4: 0xc058574  jal         func_1615D0
    ctx->pc = 0x1627F4u;
    SET_GPR_U32(ctx, 31, 0x1627FCu);
    ctx->pc = 0x1627F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1627F4u;
    // 0x1627f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x1627F4u, 0x1627FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627FCu;
label_1627fc:
    // 0x1627fc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1627fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x162800: 0xa6200134  sh          $zero, 0x134($s1)
    ctx->pc = 0x162800u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 0));
    // 0x162804: 0xa6200136  sh          $zero, 0x136($s1)
    ctx->pc = 0x162804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x162808: 0x24a5f430  addiu       $a1, $a1, -0xBD0
    ctx->pc = 0x162808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
    // 0x16280c: 0xc058540  jal         func_161500
    ctx->pc = 0x16280Cu;
    SET_GPR_U32(ctx, 31, 0x162814u);
    ctx->pc = 0x162810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16280Cu;
    // 0x162810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x16280Cu, 0x162814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162814u;
label_162814:
    // 0x162814: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x162814u;
    {
        const bool branch_taken_0x162814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162814u;
        // 0x162818: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162814) {
            ctx->pc = 0x162860u;
            goto label_162860;
        }
    }
    ctx->pc = 0x16281Cu;
    // 0x16281c: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x16281cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x162820: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x162820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x162824: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x162828: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x162828u;
    SET_GPR_U32(ctx, 31, 0x162830u);
    ctx->pc = 0x16282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162828u;
    // 0x16282c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x162828u, 0x162830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162830u;
label_162830:
    // 0x162830: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x162830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x162834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162838: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x162838u;
    SET_GPR_U32(ctx, 31, 0x162840u);
    ctx->pc = 0x16283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162838u;
    // 0x16283c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x162838u, 0x162840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162840u;
label_162840:
    // 0x162840: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x162840u;
    SET_GPR_U32(ctx, 31, 0x162848u);
    ctx->pc = 0x162844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162840u;
    // 0x162844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x162840u, 0x162848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162848u;
label_162848:
    // 0x162848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16284c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x162850: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x162850u;
    SET_GPR_U32(ctx, 31, 0x162858u);
    ctx->pc = 0x162854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162850u;
    // 0x162854: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x162850u, 0x162858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162858u;
label_162858:
    // 0x162858: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x162858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16285c: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x16285cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_162860:
    // 0x162860: 0x26330080  addiu       $s3, $s1, 0x80
    ctx->pc = 0x162860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x162864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162868: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x162868u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x16286c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x16286cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_162870:
    // 0x162870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x162870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162874: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x162874u;
    SET_GPR_U32(ctx, 31, 0x16287Cu);
    ctx->pc = 0x162878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162874u;
    // 0x162878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x162874u, 0x16287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16287Cu;
label_16287c:
    // 0x16287c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16287cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x162880: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x162880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x162884: 0x2a42001c  slti        $v0, $s2, 0x1C
    ctx->pc = 0x162884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x162888: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x162888u;
    {
        const bool branch_taken_0x162888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162888u;
        // 0x16288c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162888) {
            ctx->pc = 0x162870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162870;
        }
    }
    ctx->pc = 0x162890u;
    // 0x162890: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162894: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x162894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_162898:
    // 0x162898: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x16289c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1628a0: 0x26849b70  addiu       $a0, $s4, -0x6490
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x1628a4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1628a8: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x1628a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1628ac: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1628b0: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1628b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1628b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1628b8: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1628B8u;
    SET_GPR_U32(ctx, 31, 0x1628C0u);
    ctx->pc = 0x1628BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628B8u;
    // 0x1628bc: 0xacc2002c  sw          $v0, 0x2C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1628B8u, 0x1628C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628C0u;
label_1628c0:
    // 0x1628c0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1628C0u;
    {
        const bool branch_taken_0x1628c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628C0u;
        // 0x1628c4: 0x2643ffff  addiu       $v1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628c0) {
            ctx->pc = 0x1629FCu;
            goto label_1629fc;
        }
    }
    ctx->pc = 0x1628C8u;
    // 0x1628c8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1628c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1628cc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1628CCu;
    {
        const bool branch_taken_0x1628cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628CCu;
        // 0x1628d0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628cc) {
            ctx->pc = 0x1629FCu;
            goto label_1629fc;
        }
    }
    ctx->pc = 0x1628D4u;
    // 0x1628d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1628d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1628d8: 0x2442f440  addiu       $v0, $v0, -0xBC0
    ctx->pc = 0x1628d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964288));
    // 0x1628dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1628e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1628e4: 0x800008  jr          $a0
    ctx->pc = 0x1628E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1628ECu: goto label_1628ec;
            case 0x16290Cu: goto label_16290c;
            case 0x16292Cu: goto label_16292c;
            case 0x16294Cu: goto label_16294c;
            case 0x16296Cu: goto label_16296c;
            case 0x1629A4u: goto label_1629a4;
            case 0x1629C4u: goto label_1629c4;
            case 0x1629E4u: goto label_1629e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1628E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1628ECu;
label_1628ec:
    // 0x1628ec: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x1628ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1628f0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1628f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1628f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1628f8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1628f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1628fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1628fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162900: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162904: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x162904u;
    {
        const bool branch_taken_0x162904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162904u;
        // 0x162908: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162904) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x16290Cu;
label_16290c:
    // 0x16290c: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x162910: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162918: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16291c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162920: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162924: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x162924u;
    {
        const bool branch_taken_0x162924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162924u;
        // 0x162928: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162924) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x16292Cu;
label_16292c:
    // 0x16292c: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x162930: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162938: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16293c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16293cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162940: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162944: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x162944u;
    {
        const bool branch_taken_0x162944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162944u;
        // 0x162948: 0x8e2400ac  lw          $a0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162944) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x16294Cu;
label_16294c:
    // 0x16294c: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x16294cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162950: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x162950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x162954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x162954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x162958: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16295c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x162960: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x162960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x162964: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x162964u;
    {
        const bool branch_taken_0x162964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162964u;
        // 0x162968: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162964) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x16296Cu;
label_16296c:
    // 0x16296c: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x16296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x162970: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x162974: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x162974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x162978: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16297c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x162980: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x162980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x162984: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x162984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x162988: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x162988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16298c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x162990: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x162990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x162994: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x162998: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16299c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16299Cu;
    {
        const bool branch_taken_0x16299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16299Cu;
        // 0x1629a0: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16299c) {
            ctx->pc = 0x1629F8u;
            goto label_1629f8;
        }
    }
    ctx->pc = 0x1629A4u;
label_1629a4:
    // 0x1629a4: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1629a8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1629ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1629acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1629b0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1629b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1629b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1629b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1629b8: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1629b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1629bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1629BCu;
    {
        const bool branch_taken_0x1629bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629BCu;
        // 0x1629c0: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629bc) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x1629C4u;
label_1629c4:
    // 0x1629c4: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1629c8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1629c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1629cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1629ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1629d0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1629d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1629d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1629d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1629d8: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1629d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1629dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1629DCu;
    {
        const bool branch_taken_0x1629dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629DCu;
        // 0x1629e0: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629dc) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x1629E4u;
label_1629e4:
    // 0x1629e4: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x1629e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1629e8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1629e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1629ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1629ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1629f0:
    // 0x1629f0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1629f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1629f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1629f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1629f8:
    // 0x1629f8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1629f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_1629fc:
    // 0x1629fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1629fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x162a00: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x162a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x162a04: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x162A04u;
    {
        const bool branch_taken_0x162a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A04u;
        // 0x162a08: 0x26430008  addiu       $v1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a04) {
            ctx->pc = 0x162898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162898;
        }
    }
    ctx->pc = 0x162A0Cu;
    // 0x162a0c: 0x92230064  lbu         $v1, 0x64($s1)
    ctx->pc = 0x162a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x162a10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162a14: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x162A14u;
    {
        const bool branch_taken_0x162a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x162A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A14u;
        // 0x162a18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a14) {
            ctx->pc = 0x162A60u;
            goto label_162a60;
        }
    }
    ctx->pc = 0x162A1Cu;
    // 0x162a1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162A1Cu;
    {
        const bool branch_taken_0x162a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a1c) {
            ctx->pc = 0x162A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162A1Cu;
            // 0x162a20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162A34u;
            goto label_162a34;
        }
    }
    ctx->pc = 0x162A24u;
    // 0x162a24: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162A24u;
    {
        const bool branch_taken_0x162a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A24u;
        // 0x162a28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a24) {
            ctx->pc = 0x162A4Cu;
            goto label_162a4c;
        }
    }
    ctx->pc = 0x162A2Cu;
    // 0x162a2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x162A2Cu;
    {
        const bool branch_taken_0x162a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A2Cu;
        // 0x162a30: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a2c) {
            ctx->pc = 0x162AFCu;
            goto label_162afc;
        }
    }
    ctx->pc = 0x162A34u;
label_162a34:
    // 0x162a34: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x162A34u;
    {
        const bool branch_taken_0x162a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A34u;
        // 0x162a38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a34) {
            ctx->pc = 0x162A74u;
            goto label_162a74;
        }
    }
    ctx->pc = 0x162A3Cu;
    // 0x162a3c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x162A3Cu;
    {
        const bool branch_taken_0x162a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A3Cu;
        // 0x162a40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a3c) {
            ctx->pc = 0x162AB8u;
            goto label_162ab8;
        }
    }
    ctx->pc = 0x162A44u;
    // 0x162a44: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x162A44u;
    {
        const bool branch_taken_0x162a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A44u;
        // 0x162a48: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a44) {
            ctx->pc = 0x162AFCu;
            goto label_162afc;
        }
    }
    ctx->pc = 0x162A4Cu;
label_162a4c:
    // 0x162a4c: 0xa6200130  sh          $zero, 0x130($s1)
    ctx->pc = 0x162a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x162a50: 0xc058ac6  jal         func_162B18
    ctx->pc = 0x162A50u;
    SET_GPR_U32(ctx, 31, 0x162A58u);
    ctx->pc = 0x162A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A50u;
    // 0x162a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162B18u, 0x162A50u, 0x162A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A58u;
label_162a58:
    // 0x162a58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x162A58u;
    {
        const bool branch_taken_0x162a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A58u;
        // 0x162a5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a58) {
            ctx->pc = 0x162AF8u;
            goto label_162af8;
        }
    }
    ctx->pc = 0x162A60u;
label_162a60:
    // 0x162a60: 0xa6200130  sh          $zero, 0x130($s1)
    ctx->pc = 0x162a60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x162a64: 0xc058b26  jal         func_162C98
    ctx->pc = 0x162A64u;
    SET_GPR_U32(ctx, 31, 0x162A6Cu);
    ctx->pc = 0x162A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A64u;
    // 0x162a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C98u, 0x162A64u, 0x162A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A6Cu;
label_162a6c:
    // 0x162a6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x162A6Cu;
    {
        const bool branch_taken_0x162a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A6Cu;
        // 0x162a70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a6c) {
            ctx->pc = 0x162AF8u;
            goto label_162af8;
        }
    }
    ctx->pc = 0x162A74u;
label_162a74:
    // 0x162a74: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x162a78: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x162a78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x162a7c: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x162a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x162a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162a84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x162A84u;
    {
        const bool branch_taken_0x162a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A84u;
        // 0x162a88: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a84) {
            ctx->pc = 0x162AA4u;
            goto label_162aa4;
        }
    }
    ctx->pc = 0x162A8Cu;
    // 0x162a8c: 0xa6240130  sh          $a0, 0x130($s1)
    ctx->pc = 0x162a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x162a90: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x162a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    // 0x162a94: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x162A94u;
    SET_GPR_U32(ctx, 31, 0x162A9Cu);
    ctx->pc = 0x162A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A94u;
    // 0x162a98: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x162A94u, 0x162A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A9Cu;
label_162a9c:
    // 0x162a9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162A9Cu;
    {
        const bool branch_taken_0x162a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a9c) {
            ctx->pc = 0x162AA8u;
            goto label_162aa8;
        }
    }
    ctx->pc = 0x162AA4u;
label_162aa4:
    // 0x162aa4: 0xa6200130  sh          $zero, 0x130($s1)
    ctx->pc = 0x162aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 0));
label_162aa8:
    // 0x162aa8: 0xc058c3a  jal         func_1630E8
    ctx->pc = 0x162AA8u;
    SET_GPR_U32(ctx, 31, 0x162AB0u);
    ctx->pc = 0x162AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AA8u;
    // 0x162aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1630E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E8u, 0x162AA8u, 0x162AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AB0u;
label_162ab0:
    // 0x162ab0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x162AB0u;
    {
        const bool branch_taken_0x162ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AB0u;
        // 0x162ab4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ab0) {
            ctx->pc = 0x162AF8u;
            goto label_162af8;
        }
    }
    ctx->pc = 0x162AB8u;
label_162ab8:
    // 0x162ab8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x162ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x162abc: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x162abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x162ac0: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x162ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x162ac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162ac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x162AC8u;
    {
        const bool branch_taken_0x162ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AC8u;
        // 0x162acc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ac8) {
            ctx->pc = 0x162AE8u;
            goto label_162ae8;
        }
    }
    ctx->pc = 0x162AD0u;
    // 0x162ad0: 0xa6240130  sh          $a0, 0x130($s1)
    ctx->pc = 0x162ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x162ad4: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x162ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    // 0x162ad8: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x162AD8u;
    SET_GPR_U32(ctx, 31, 0x162AE0u);
    ctx->pc = 0x162ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AD8u;
    // 0x162adc: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x162AD8u, 0x162AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AE0u;
label_162ae0:
    // 0x162ae0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162AE0u;
    {
        const bool branch_taken_0x162ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ae0) {
            ctx->pc = 0x162AECu;
            goto label_162aec;
        }
    }
    ctx->pc = 0x162AE8u;
label_162ae8:
    // 0x162ae8: 0xa6200130  sh          $zero, 0x130($s1)
    ctx->pc = 0x162ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 0));
label_162aec:
    // 0x162aec: 0xc058c3a  jal         func_1630E8
    ctx->pc = 0x162AECu;
    SET_GPR_U32(ctx, 31, 0x162AF4u);
    ctx->pc = 0x162AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AECu;
    // 0x162af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1630E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E8u, 0x162AECu, 0x162AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AF4u;
label_162af4:
    // 0x162af4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x162af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_162af8:
    // 0x162af8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x162af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_162afc:
    // 0x162afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x162afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162b00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x162b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x162b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x162B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B0Cu;
        // 0x162b10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162B14u;
    // 0x162b14: 0x0  nop
    ctx->pc = 0x162b14u;
    // NOP
    ctx->pc = 0x162b18u;
}
