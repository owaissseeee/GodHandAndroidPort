#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: func_007992C8
// Address: 0x7992c8 - 0x799458
void func_007992C8_0x7992c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007992C8_0x7992c8");
#endif

    switch (ctx->pc) {
        case 0x7992f4u: goto label_7992f4;
        case 0x799314u: goto label_799314;
        case 0x799338u: goto label_799338;
        case 0x799348u: goto label_799348;
        case 0x799358u: goto label_799358;
        case 0x799360u: goto label_799360;
        case 0x799380u: goto label_799380;
        case 0x799390u: goto label_799390;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993e8u: goto label_7993e8;
        case 0x799404u: goto label_799404;
        case 0x799414u: goto label_799414;
        case 0x799430u: goto label_799430;
        case 0x79943cu: goto label_79943c;
        default: break;
    }

    ctx->pc = 0x7992c8u;

    // 0x7992c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7992cc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7992d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7992d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7992d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7992d8: 0x24516af0  addiu       $s1, $v0, 0x6AF0
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x7992dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7992dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7992e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992e8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B28u));
    // 0x7992ec: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7992ECu;
    SET_GPR_U32(ctx, 31, 0x7992F4u);
    ctx->pc = 0x7992F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ECu;
    // 0x7992f0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7992ECu, 0x7992F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F4u;
label_7992f4:
    // 0x7992f4: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x7992f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7992fc: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x799300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79930c: 0xc1e6658  jal         func_799960
    ctx->pc = 0x79930Cu;
    SET_GPR_U32(ctx, 31, 0x799314u);
    ctx->pc = 0x799310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79930Cu;
    // 0x799310: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799960u, 0x79930Cu, 0x799314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799314u;
label_799314:
    // 0x799314: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x7993D0u;
            goto label_7993d0;
        }
    }
    ctx->pc = 0x79931Cu;
    // 0x79931c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x799320: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x799320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x799324: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x799324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x799328: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x799328u;
    {
        const bool branch_taken_0x799328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799328u;
        // 0x79932c: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799328) {
            ctx->pc = 0x799430u;
            goto label_799430;
        }
    }
    ctx->pc = 0x799330u;
    // 0x799330: 0xc1e6652  jal         func_799948
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799948u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799338) {
            ctx->pc = 0x799388u;
            goto label_799388;
        }
    }
    ctx->pc = 0x799340u;
    // 0x799340: 0xc1e664e  jal         func_799938
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799938u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0xc1e6642  jal         func_799908
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799908u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0xc1e663e  jal         func_7998F8
    ctx->pc = 0x799358u;
    SET_GPR_U32(ctx, 31, 0x799360u);
    ctx->pc = 0x79935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799358u;
    // 0x79935c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7998F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7998F8u, 0x799358u, 0x799360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x799368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x79936c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799378u;
    SET_GPR_U32(ctx, 31, 0x799380u);
    ctx->pc = 0x79937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799378u;
    // 0x79937c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799378u, 0x799380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799380u;
    {
        const bool branch_taken_0x799380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799380u;
        // 0x799384: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799380) {
            ctx->pc = 0x799434u;
            goto label_799434;
        }
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0xc1e664e  jal         func_799938
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799938u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799398: 0xc1e6642  jal         func_799908
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799908u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0xc1e663e  jal         func_7998F8
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7998F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7998F8u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7993ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x7993b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x7993b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c0: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7993C0u;
    SET_GPR_U32(ctx, 31, 0x7993C8u);
    ctx->pc = 0x7993C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C0u;
    // 0x7993c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7993C0u, 0x7993C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x799434u;
            goto label_799434;
        }
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0xc1e6652  jal         func_799948
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799948u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7993D8u;
    {
        const bool branch_taken_0x7993d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d8) {
            ctx->pc = 0x79940Cu;
            goto label_79940c;
        }
    }
    ctx->pc = 0x7993E0u;
    // 0x7993e0: 0xc1e664a  jal         func_799928
    ctx->pc = 0x7993E0u;
    SET_GPR_U32(ctx, 31, 0x7993E8u);
    ctx->pc = 0x7993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E0u;
    // 0x7993e4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799928u, 0x7993E0u, 0x7993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ec: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7993f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993fc: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x7993FCu;
    SET_GPR_U32(ctx, 31, 0x799404u);
    ctx->pc = 0x799400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993FCu;
    // 0x799400: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x7993FCu, 0x799404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x799404u;
    {
        const bool branch_taken_0x799404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799404) {
            ctx->pc = 0x799434u;
            goto label_799434;
        }
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0xc1e664a  jal         func_799928
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799928u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799418: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79941c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799420: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799424: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799428: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x799428u;
    SET_GPR_U32(ctx, 31, 0x799430u);
    ctx->pc = 0x79942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799428u;
    // 0x79942c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x799428u, 0x799430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799430u;
label_799430:
    // 0x799430: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799434:
    // 0x799434: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79943cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799440: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79944c: 0x3e00008  jr          $ra
    ctx->pc = 0x79944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x0  nop
    ctx->pc = 0x799454u;
    // NOP
    ctx->pc = 0x799458u;
}
} // namespace gh_r003
