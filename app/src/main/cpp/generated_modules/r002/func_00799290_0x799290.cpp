#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r002_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r002
{
// Function: func_00799290
// Address: 0x799290 - 0x799420
void func_00799290_0x799290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799290_0x799290");
#endif

    switch (ctx->pc) {
        case 0x7992bcu: goto label_7992bc;
        case 0x7992dcu: goto label_7992dc;
        case 0x799300u: goto label_799300;
        case 0x799310u: goto label_799310;
        case 0x799320u: goto label_799320;
        case 0x799328u: goto label_799328;
        case 0x799348u: goto label_799348;
        case 0x799358u: goto label_799358;
        case 0x799368u: goto label_799368;
        case 0x799370u: goto label_799370;
        case 0x799390u: goto label_799390;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993f8u: goto label_7993f8;
        case 0x799404u: goto label_799404;
        default: break;
    }

    ctx->pc = 0x799290u;

    // 0x799290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799294: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799298: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79929c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7992a0: 0x24516af0  addiu       $s1, $v0, 0x6AF0
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x7992a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7992a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992b0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B28u));
    // 0x7992b4: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7992B4u;
    SET_GPR_U32(ctx, 31, 0x7992BCu);
    ctx->pc = 0x7992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B4u;
    // 0x7992b8: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7992B4u, 0x7992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x7992c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7992c4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x7992c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x7992c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7992d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7992d4: 0xc1e656c  jal         func_7995B0
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995B0u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x7992e8: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x7992e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x7992ec: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x7992ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7992f0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x7992F0u;
    {
        const bool branch_taken_0x7992f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7992F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F0u;
        // 0x7992f4: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f0) {
            ctx->pc = 0x7993F8u;
            goto label_7993f8;
        }
    }
    ctx->pc = 0x7992F8u;
    // 0x7992f8: 0xc1e6566  jal         func_799598
    ctx->pc = 0x7992F8u;
    SET_GPR_U32(ctx, 31, 0x799300u);
    ctx->pc = 0x7992FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F8u;
    // 0x7992fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799598u, 0x7992F8u, 0x799300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x799300u;
    {
        const bool branch_taken_0x799300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799300) {
            ctx->pc = 0x799350u;
            goto label_799350;
        }
    }
    ctx->pc = 0x799308u;
    // 0x799308: 0xc1e6562  jal         func_799588
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799588u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799318: 0xc1e6556  jal         func_799558
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799558u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0xc1e6552  jal         func_799548
    ctx->pc = 0x799320u;
    SET_GPR_U32(ctx, 31, 0x799328u);
    ctx->pc = 0x799324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799320u;
    // 0x799324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799548u, 0x799320u, 0x799328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79932c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x799330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x799334: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79933c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799340: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799348u;
    {
        const bool branch_taken_0x799348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799348u;
        // 0x79934c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799348) {
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0xc1e6562  jal         func_799588
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799588u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799360: 0xc1e6556  jal         func_799558
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799558u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0xc1e6552  jal         func_799548
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799548u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x799378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x79937c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799388: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799390) {
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0xc1e6566  jal         func_799598
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799598u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7993A0u;
    {
        const bool branch_taken_0x7993a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A0u;
        // 0x7993a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a0) {
            ctx->pc = 0x7993D4u;
            goto label_7993d4;
        }
    }
    ctx->pc = 0x7993A8u;
    // 0x7993a8: 0xc1e655e  jal         func_799578
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799578u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993b8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7993bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993c4: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x7993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C4u;
    // 0x7993c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7993CCu;
    {
        const bool branch_taken_0x7993cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993cc) {
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0xc1e655e  jal         func_799578
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799578u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993e0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7993e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993f0: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7993fc:
    // 0x7993fc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7993FCu;
    SET_GPR_U32(ctx, 31, 0x799404u);
    ctx->pc = 0x799400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993FCu;
    // 0x799400: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7993FCu, 0x799404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799408: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79940c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79940cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799414: 0x3e00008  jr          $ra
    ctx->pc = 0x799414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799414u;
        // 0x799418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79941Cu;
    // 0x79941c: 0x0  nop
    ctx->pc = 0x79941cu;
    // NOP
    ctx->pc = 0x799420u;
}
} // namespace gh_r002
