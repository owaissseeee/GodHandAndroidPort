#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_00799748
// Address: 0x799748 - 0x7998f0
void func_00799748_0x799748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799748_0x799748");
#endif

    switch (ctx->pc) {
        case 0x799798u: goto label_799798;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997f0u: goto label_7997f0;
        case 0x799820u: goto label_799820;
        case 0x799848u: goto label_799848;
        case 0x799878u: goto label_799878;
        case 0x79988cu: goto label_79988c;
        case 0x79989cu: goto label_79989c;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998d0u: goto label_7998d0;
        default: break;
    }

    ctx->pc = 0x799748u;

    // 0x799748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79974c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799750: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799754: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799758: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79975c: 0x2446a5a0  addiu       $a2, $v0, -0x5A60
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
    // 0x799760: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799764: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799768: 0x8044a5a0  lb          $a0, -0x5A60($v0)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A5A0u));
    // 0x79976c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799770: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799778: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79977c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799784: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799788: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799788u;
    {
        const bool branch_taken_0x799788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799788u;
        // 0x79978c: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799788) {
            ctx->pc = 0x7997C0u;
            goto label_7997c0;
        }
    }
    ctx->pc = 0x799790u;
    // 0x799790: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799794: 0x0  nop
    ctx->pc = 0x799794u;
    // NOP
label_799798:
    // 0x799798: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79979c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7997a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7997a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7997a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7997a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7997ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7997ACu;
    {
        const bool branch_taken_0x7997ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ACu;
        // 0x7997b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997ac) {
            ctx->pc = 0x7997C0u;
            goto label_7997c0;
        }
    }
    ctx->pc = 0x7997B4u;
    // 0x7997b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7997B8u;
    {
        const bool branch_taken_0x7997b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997b8) {
            ctx->pc = 0x7997BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997B8u;
            // 0x7997bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799798;
        }
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7997C0u;
    SET_GPR_U32(ctx, 31, 0x7997C8u);
    ctx->pc = 0x7997C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C0u;
    // 0x7997c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7997C0u, 0x7997C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C8u;
label_7997c8:
    // 0x7997c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997cc: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x7997d0: 0x8202a5a8  lb          $v0, -0x5A58($s0)
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294944168)));
    // 0x7997d4: 0x2603a5a8  addiu       $v1, $s0, -0x5A58
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944168));
    // 0x7997d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x799818u;
            goto label_799818;
        }
    }
    ctx->pc = 0x7997E4u;
    // 0x7997e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7997e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997e8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997ec: 0x0  nop
    ctx->pc = 0x7997ecu;
    // NOP
label_7997f0:
    // 0x7997f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7997f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7997f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7997fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799800: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799804: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799804u;
    {
        const bool branch_taken_0x799804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799804u;
        // 0x799808: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799804) {
            ctx->pc = 0x799818u;
            goto label_799818;
        }
    }
    ctx->pc = 0x79980Cu;
    // 0x79980c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799810: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799810) {
            ctx->pc = 0x799814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799810u;
            // 0x799814: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997f0;
        }
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799824: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x799828: 0x8262a5b0  lb          $v0, -0x5A50($s3)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294944176)));
    // 0x79982c: 0x2663a5b0  addiu       $v1, $s3, -0x5A50
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944176));
    // 0x799830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799834: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799834u;
    {
        const bool branch_taken_0x799834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799834) {
            ctx->pc = 0x799870u;
            goto label_799870;
        }
    }
    ctx->pc = 0x79983Cu;
    // 0x79983c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799840: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799844: 0x0  nop
    ctx->pc = 0x799844u;
    // NOP
label_799848:
    // 0x799848: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79984c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799850: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799854: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799858: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79985c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79985c) {
            ctx->pc = 0x799870u;
            goto label_799870;
        }
    }
    ctx->pc = 0x799864u;
    // 0x799864: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799868: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799868u;
    {
        const bool branch_taken_0x799868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799868) {
            ctx->pc = 0x79986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799868u;
            // 0x79986c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799848;
        }
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799870u;
    SET_GPR_U32(ctx, 31, 0x799878u);
    ctx->pc = 0x799874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799870u;
    // 0x799874: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799870u, 0x799878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x799878u;
    {
        const bool branch_taken_0x799878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799878) {
            ctx->pc = 0x79988Cu;
            goto label_79988c;
        }
    }
    ctx->pc = 0x799880u;
    // 0x799880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0xc06d9a0  jal         func_1B6680
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6680u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79988Cu;
    {
        const bool branch_taken_0x79988c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79988Cu;
        // 0x799890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79988c) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799894u;
    // 0x799894: 0xc06d9a0  jal         func_1B6680
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6680u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79989c) {
            ctx->pc = 0x7998A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79989Cu;
            // 0x7998a0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998B4u;
            goto label_7998b4;
        }
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a8: 0xc06d9a0  jal         func_1B6680
    ctx->pc = 0x7998A8u;
    SET_GPR_U32(ctx, 31, 0x7998B0u);
    ctx->pc = 0x7998ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A8u;
    // 0x7998ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6680u, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_7998b4:
    // 0x7998b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998b8: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7998B8u;
    SET_GPR_U32(ctx, 31, 0x7998C0u);
    ctx->pc = 0x7998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B8u;
    // 0x7998bc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7998B8u, 0x7998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7998c4: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7998c8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998C8u;
    SET_GPR_U32(ctx, 31, 0x7998D0u);
    ctx->pc = 0x7998CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C8u;
    // 0x7998cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998C8u, 0x7998D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D0u;
label_7998d0:
    // 0x7998d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7998d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7998d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7998d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7998d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998dc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7998dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7998e0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7998e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7998e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7998e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7998E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998F0u;
}
} // namespace gh_r205
