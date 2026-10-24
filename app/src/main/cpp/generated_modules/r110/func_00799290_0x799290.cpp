#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r110_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r110
{
// Function: func_00799290
// Address: 0x799290 - 0x799450
void func_00799290_0x799290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799290_0x799290");
#endif

    switch (ctx->pc) {
        case 0x7992d8u: goto label_7992d8;
        case 0x79930cu: goto label_79930c;
        case 0x799330u: goto label_799330;
        case 0x799340u: goto label_799340;
        case 0x799350u: goto label_799350;
        case 0x799358u: goto label_799358;
        case 0x799378u: goto label_799378;
        case 0x799388u: goto label_799388;
        case 0x799398u: goto label_799398;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993fcu: goto label_7993fc;
        case 0x79940cu: goto label_79940c;
        case 0x799428u: goto label_799428;
        case 0x799434u: goto label_799434;
        default: break;
    }

    ctx->pc = 0x799290u;

    // 0x799290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799294: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x799298: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79929c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x7992a0: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x7992a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7992a8: 0x8e027a24  lw          $v0, 0x7A24($s0)
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x7992ac: 0x24716af0  addiu       $s1, $v1, 0x6AF0
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
    // 0x7992b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7992b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7992b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7992bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c4: 0xae027a24  sw          $v0, 0x7A24($s0)
    ctx->pc = 0x7992c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
    // 0x7992c8: 0x26127a24  addiu       $s2, $s0, 0x7A24
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 31268));
    // 0x7992cc: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x586B28u));
    // 0x7992d0: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7992D0u;
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->pc = 0x7992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7992D0u, 0x7992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x8e047a24  lw          $a0, 0x7A24($s0)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31268)));
    // 0x7992dc: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x7992e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7992e4: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x7992e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7992ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7992f0: 0xae047a24  sw          $a0, 0x7A24($s0)
    ctx->pc = 0x7992f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31268), GPR_U32(ctx, 4));
    // 0x7992f4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x7992f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799300: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799304: 0xc1e6578  jal         func_7995E0
    ctx->pc = 0x799304u;
    SET_GPR_U32(ctx, 31, 0x79930Cu);
    ctx->pc = 0x799308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799304u;
    // 0x799308: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995E0u, 0x799304u, 0x79930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79930c) {
            ctx->pc = 0x7993C8u;
            goto label_7993c8;
        }
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x799318: 0x9643002c  lhu         $v1, 0x2C($s2)
    ctx->pc = 0x799318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x79931c: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x79931cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x799320: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799320) {
            ctx->pc = 0x799428u;
            goto label_799428;
        }
    }
    ctx->pc = 0x799328u;
    // 0x799328: 0xc1e6572  jal         func_7995C8
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995C8u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799330) {
            ctx->pc = 0x799380u;
            goto label_799380;
        }
    }
    ctx->pc = 0x799338u;
    // 0x799338: 0xc1e656e  jal         func_7995B8
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995B8u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799348: 0xc1e6562  jal         func_799588
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799588u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0xc1e655e  jal         func_799578
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799578u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79935c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799360: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x799360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x799364: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79936c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799370: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799370u;
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799370u, 0x799378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799378) {
            ctx->pc = 0x79942Cu;
            goto label_79942c;
        }
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0xc1e656e  jal         func_7995B8
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995B8u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79938c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799390: 0xc1e6562  jal         func_799588
    ctx->pc = 0x799390u;
    SET_GPR_U32(ctx, 31, 0x799398u);
    ctx->pc = 0x799394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799390u;
    // 0x799394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799588u, 0x799390u, 0x799398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0xc1e655e  jal         func_799578
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799578u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7993a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x7993a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x7993ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x79942Cu;
            goto label_79942c;
        }
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0xc1e6572  jal         func_7995C8
    ctx->pc = 0x7993C8u;
    SET_GPR_U32(ctx, 31, 0x7993D0u);
    ctx->pc = 0x7993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C8u;
    // 0x7993cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995C8u, 0x7993C8u, 0x7993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x799404u;
            goto label_799404;
        }
    }
    ctx->pc = 0x7993D8u;
    // 0x7993d8: 0xc1e656a  jal         func_7995A8
    ctx->pc = 0x7993D8u;
    SET_GPR_U32(ctx, 31, 0x7993E0u);
    ctx->pc = 0x7993DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D8u;
    // 0x7993dc: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995A8u, 0x7993D8u, 0x7993E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993e8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7993ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993f4: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x7993F4u;
    SET_GPR_U32(ctx, 31, 0x7993FCu);
    ctx->pc = 0x7993F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F4u;
    // 0x7993f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7993FCu;
    {
        const bool branch_taken_0x7993fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993fc) {
            ctx->pc = 0x79942Cu;
            goto label_79942c;
        }
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0xc1e656a  jal         func_7995A8
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995A8u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799410: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x799414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799418: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79941c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799420: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79942c:
    // 0x79942c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x799430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799438: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79943c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79943cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799440: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799448: 0x3e00008  jr          $ra
    ctx->pc = 0x799448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799448u;
        // 0x79944c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799450u;
}
} // namespace gh_r110
