#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_00799760
// Address: 0x799760 - 0x7998f8
void func_00799760_0x799760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799760_0x799760");
#endif

    switch (ctx->pc) {
        case 0x799798u: goto label_799798;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997f8u: goto label_7997f8;
        case 0x799804u: goto label_799804;
        case 0x799814u: goto label_799814;
        case 0x799828u: goto label_799828;
        case 0x799834u: goto label_799834;
        case 0x799854u: goto label_799854;
        case 0x799874u: goto label_799874;
        case 0x799880u: goto label_799880;
        case 0x79988cu: goto label_79988c;
        case 0x799898u: goto label_799898;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998d4u: goto label_7998d4;
        default: break;
    }

    ctx->pc = 0x799760u;

    // 0x799760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799764: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799768: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79976c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799770: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799774: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79977c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799780: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x799784: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x799788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79978c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79978Cu;
    {
        const bool branch_taken_0x79978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79978Cu;
        // 0x799790: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79978c) {
            ctx->pc = 0x7997A8u;
            goto label_7997a8;
        }
    }
    ctx->pc = 0x799794u;
    // 0x799794: 0x0  nop
    ctx->pc = 0x799794u;
    // NOP
label_799798:
    // 0x799798: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79979c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997a0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997A0u;
    SET_GPR_U32(ctx, 31, 0x7997A8u);
    ctx->pc = 0x7997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A0u;
    // 0x7997a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997A0u, 0x7997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A8u;
label_7997a8:
    // 0x7997a8: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7997ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7997b0: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7997B0u;
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->pc = 0x7997B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7997B0u, 0x7997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7997B8u;
    {
        const bool branch_taken_0x7997b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x2644ee00  addiu       $a0, $s2, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b8) {
            ctx->pc = 0x799798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799798;
        }
    }
    ctx->pc = 0x7997C0u;
    // 0x7997c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7997c4: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x7997c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7997cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7997d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7997D4u;
    SET_GPR_U32(ctx, 31, 0x7997DCu);
    ctx->pc = 0x7997D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D4u;
    // 0x7997d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7997D4u, 0x7997DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997DCu;
label_7997dc:
    // 0x7997dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x7997F8u;
            goto label_7997f8;
        }
    }
    ctx->pc = 0x7997E4u;
    // 0x7997e4: 0x0  nop
    ctx->pc = 0x7997e4u;
    // NOP
label_7997e8:
    // 0x7997e8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7997ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997f0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997F0u;
    SET_GPR_U32(ctx, 31, 0x7997F8u);
    ctx->pc = 0x7997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F0u;
    // 0x7997f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x7997fc: 0xc0b2f3c  jal         func_2CBCF0
    ctx->pc = 0x7997FCu;
    SET_GPR_U32(ctx, 31, 0x799804u);
    ctx->pc = 0x799800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997FCu;
    // 0x799800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCF0u, 0x7997FCu, 0x799804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799804u;
label_799804:
    // 0x799804: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799804u;
    {
        const bool branch_taken_0x799804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799804u;
        // 0x799808: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799804) {
            ctx->pc = 0x7997E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997e8;
        }
    }
    ctx->pc = 0x79980Cu;
    // 0x79980c: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x2650ee00  addiu       $s0, $s2, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799818: 0x26646ab0  addiu       $a0, $s3, 0x6AB0
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
    // 0x79981c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79981cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799820: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79982c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79982Cu;
    SET_GPR_U32(ctx, 31, 0x799834u);
    ctx->pc = 0x799830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79982Cu;
    // 0x799830: 0x240503c2  addiu       $a1, $zero, 0x3C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 962));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79982Cu, 0x799834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799834u;
label_799834:
    // 0x799834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799838: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79983c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x799840: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799844: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79984c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79984Cu;
    SET_GPR_U32(ctx, 31, 0x799854u);
    ctx->pc = 0x799850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79984Cu;
    // 0x799850: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79984Cu, 0x799854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799854u;
label_799854:
    // 0x799854: 0x240600c1  addiu       $a2, $zero, 0xC1
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x799858: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79985c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799864: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79986c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79986Cu;
    SET_GPR_U32(ctx, 31, 0x799874u);
    ctx->pc = 0x799870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79986Cu;
    // 0x799870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79986Cu, 0x799874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799878: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799878u;
    SET_GPR_U32(ctx, 31, 0x799880u);
    ctx->pc = 0x79987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799878u;
    // 0x79987c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799878u, 0x799880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799880u;
label_799880:
    // 0x799880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799890: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x799894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799890u;
    // 0x799894: 0x2685b470  addiu       $a1, $s4, -0x4B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799898u;
    SET_GPR_U32(ctx, 31, 0x7998A0u);
    ctx->pc = 0x79989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799898u;
    // 0x79989c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799898u, 0x7998A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7998A0u;
    SET_GPR_U32(ctx, 31, 0x7998A8u);
    ctx->pc = 0x7998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A0u;
    // 0x7998a4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7998A0u, 0x7998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7998A8u;
    {
        const bool branch_taken_0x7998a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7998a8) {
            ctx->pc = 0x7998BCu;
            goto label_7998bc;
        }
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7998B4u;
    SET_GPR_U32(ctx, 31, 0x7998BCu);
    ctx->pc = 0x7998B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B4u;
    // 0x7998b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7998B4u, 0x7998BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998BCu;
label_7998bc:
    // 0x7998bc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7998BCu;
    SET_GPR_U32(ctx, 31, 0x7998C4u);
    ctx->pc = 0x7998C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998BCu;
    // 0x7998c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998BCu, 0x7998C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7998C4u;
    {
        const bool branch_taken_0x7998c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C4u;
        // 0x7998c8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c4) {
            ctx->pc = 0x7998B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998b0;
        }
    }
    ctx->pc = 0x7998CCu;
    // 0x7998cc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7998d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7998d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7998d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7998dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7998dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7998e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7998e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7998e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7998ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7998ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ECu;
        // 0x7998f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998F4u;
    // 0x7998f4: 0x0  nop
    ctx->pc = 0x7998f4u;
    // NOP
    ctx->pc = 0x7998f8u;
}
} // namespace gh_r604
