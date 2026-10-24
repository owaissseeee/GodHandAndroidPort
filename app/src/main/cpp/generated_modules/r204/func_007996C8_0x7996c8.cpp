#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_007996C8
// Address: 0x7996c8 - 0x799a48
void func_007996C8_0x7996c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007996C8_0x7996c8");
#endif

    switch (ctx->pc) {
        case 0x799738u: goto label_799738;
        case 0x79976cu: goto label_79976c;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997d8u: goto label_7997d8;
        case 0x799804u: goto label_799804;
        case 0x799818u: goto label_799818;
        case 0x79983cu: goto label_79983c;
        case 0x799848u: goto label_799848;
        case 0x799854u: goto label_799854;
        case 0x799888u: goto label_799888;
        case 0x799894u: goto label_799894;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998f8u: goto label_7998f8;
        case 0x799908u: goto label_799908;
        case 0x799918u: goto label_799918;
        case 0x799924u: goto label_799924;
        case 0x799930u: goto label_799930;
        case 0x79993cu: goto label_79993c;
        case 0x799944u: goto label_799944;
        case 0x799954u: goto label_799954;
        case 0x799968u: goto label_799968;
        case 0x799978u: goto label_799978;
        case 0x799990u: goto label_799990;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999f0u: goto label_7999f0;
        case 0x799a10u: goto label_799a10;
        case 0x799a20u: goto label_799a20;
        default: break;
    }

    ctx->pc = 0x7996c8u;

    // 0x7996c8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7996cc: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x7996d0: 0x8c43b000  lw          $v1, -0x5000($v0)
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79B000u));
    // 0x7996d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x7996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x7996dc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7996e0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x7996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x7996e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7996e8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x7996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x7996ec: 0x24494c58  addiu       $t1, $v0, 0x4C58
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7996f0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x7996f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x7996f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x7996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x7996fc: 0x24a8af28  addiu       $t0, $a1, -0x50D8
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    // 0x799700: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x799704: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799708: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x79970c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799710: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x799710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x799714: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799718: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x799718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x79971c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799724: 0x80a2af28  lb          $v0, -0x50D8($a1)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79AF28u));
    // 0x799728: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799728u;
    {
        const bool branch_taken_0x799728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799728u;
        // 0x79972c: 0x3c16007a  lui         $s6, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799728) {
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799730u;
    // 0x799730: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799734: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_799738:
    // 0x799738: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79973c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799740: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799744: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799748: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79974c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79974Cu;
    {
        const bool branch_taken_0x79974c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79974Cu;
        // 0x799750: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79974c) {
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799754u;
    // 0x799754: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799758: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799758u;
    {
        const bool branch_taken_0x799758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799758) {
            ctx->pc = 0x79975Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799758u;
            // 0x79975c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799738;
        }
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799764: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799764u;
    SET_GPR_U32(ctx, 31, 0x79976Cu);
    ctx->pc = 0x799768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799764u;
    // 0x799768: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799764u, 0x79976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799770: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799770u;
    {
        const bool branch_taken_0x799770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0x8222af20  lb          $v0, -0x50E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294946592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799770) {
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x799778u;
    // 0x799778: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79977c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799780: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799784: 0x8222af20  lb          $v0, -0x50E0($s1)
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294946592)));
label_799788:
    // 0x799788: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x79978c: 0x2623af20  addiu       $v1, $s1, -0x50E0
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946592));
    // 0x799790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799794: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799794u;
    {
        const bool branch_taken_0x799794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799794) {
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x79979Cu;
    // 0x79979c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79979cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997a4: 0x0  nop
    ctx->pc = 0x7997a4u;
    // NOP
label_7997a8:
    // 0x7997a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7997ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7997b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7997b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7997b8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7997bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7997BCu;
    {
        const bool branch_taken_0x7997bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997bc) {
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x7997C4u;
    // 0x7997c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7997C8u;
    {
        const bool branch_taken_0x7997c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997c8) {
            ctx->pc = 0x7997CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997C8u;
            // 0x7997cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997a8;
        }
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7997D0u;
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->pc = 0x7997D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D0u;
    // 0x7997d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7997D0u, 0x7997D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x7997F4u;
            goto label_7997f4;
        }
    }
    ctx->pc = 0x7997E4u;
    // 0x7997e4: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x7997e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7997e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7997ec: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7997ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x7997f0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_7997f4:
    // 0x7997f4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7997f8: 0x24516ab0  addiu       $s1, $v0, 0x6AB0
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    // 0x7997fc: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x7997FCu;
    SET_GPR_U32(ctx, 31, 0x799804u);
    ctx->pc = 0x799800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997FCu;
    // 0x799800: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x7997FCu, 0x799804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799804u;
label_799804:
    // 0x799804: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x799808: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x79980c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79980cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799810: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799810u;
    SET_GPR_U32(ctx, 31, 0x799818u);
    ctx->pc = 0x799814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799810u;
    // 0x799814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799810u, 0x799818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79981c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799820: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x799820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x799824: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799828: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799828u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79982c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799830: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799834: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799834u;
    SET_GPR_U32(ctx, 31, 0x79983Cu);
    ctx->pc = 0x799838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799834u;
    // 0x799838: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799834u, 0x79983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79983cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799840: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799840u;
    SET_GPR_U32(ctx, 31, 0x799848u);
    ctx->pc = 0x799844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799840u;
    // 0x799844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799840u, 0x799848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79984c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79984Cu;
    SET_GPR_U32(ctx, 31, 0x799854u);
    ctx->pc = 0x799850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79984Cu;
    // 0x799850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79984Cu, 0x799854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799854u;
label_799854:
    // 0x799854: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799858: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x79985c: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799860: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799864: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799868: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x799868u;
    {
        const bool branch_taken_0x799868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799868u;
        // 0x79986c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799868) {
            ctx->pc = 0x7998A8u;
            goto label_7998a8;
        }
    }
    ctx->pc = 0x799870u;
    // 0x799870: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799874: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x799874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x799878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79987c: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x79987cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x799880: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799880u;
    SET_GPR_U32(ctx, 31, 0x799888u);
    ctx->pc = 0x799884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799880u;
    // 0x799884: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799880u, 0x799888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x799888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79988c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79988Cu;
    SET_GPR_U32(ctx, 31, 0x799894u);
    ctx->pc = 0x799890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79988Cu;
    // 0x799890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79988Cu, 0x799894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799894u;
label_799894:
    // 0x799894: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799898: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799898u;
    SET_GPR_U32(ctx, 31, 0x7998A0u);
    ctx->pc = 0x79989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799898u;
    // 0x79989c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799898u, 0x7998A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x7998A0u;
    {
        const bool branch_taken_0x7998a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a0) {
            ctx->pc = 0x7998E8u;
            goto label_7998e8;
        }
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x2611ea60  addiu       $s1, $s0, -0x15A0
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7998ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7998b0: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7998B0u;
    SET_GPR_U32(ctx, 31, 0x7998B8u);
    ctx->pc = 0x7998B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B0u;
    // 0x7998b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7998B0u, 0x7998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7998B8u;
    SET_GPR_U32(ctx, 31, 0x7998C0u);
    ctx->pc = 0x7998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B8u;
    // 0x7998bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998B8u, 0x7998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x7998C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998C0u;
            // 0x7998c4: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998E8u;
            goto label_7998e8;
        }
    }
    ctx->pc = 0x7998C8u;
    // 0x7998c8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7998C8u;
    SET_GPR_U32(ctx, 31, 0x7998D0u);
    ctx->pc = 0x7998CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C8u;
    // 0x7998cc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998C8u, 0x7998D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D0u;
label_7998d0:
    // 0x7998d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7998D0u;
    {
        const bool branch_taken_0x7998d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998d0) {
            ctx->pc = 0x7998D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998D0u;
            // 0x7998d4: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998E8u;
            goto label_7998e8;
        }
    }
    ctx->pc = 0x7998D8u;
    // 0x7998d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998dc: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_7998e8:
    // 0x7998e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7998ec: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x7998f0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7998F0u;
    SET_GPR_U32(ctx, 31, 0x7998F8u);
    ctx->pc = 0x7998F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F0u;
    // 0x7998f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7998F0u, 0x7998F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7998fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799900: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799900u;
    SET_GPR_U32(ctx, 31, 0x799908u);
    ctx->pc = 0x799904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799900u;
    // 0x799904: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799900u, 0x799908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x3652fffd  ori         $s2, $s2, 0xFFFD
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65533);
    // 0x79990c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799910: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79991c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79991Cu;
    SET_GPR_U32(ctx, 31, 0x799924u);
    ctx->pc = 0x799920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79991Cu;
    // 0x799920: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79991Cu, 0x799924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799924u;
label_799924:
    // 0x799924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799928: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799928u;
    SET_GPR_U32(ctx, 31, 0x799930u);
    ctx->pc = 0x79992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799928u;
    // 0x79992c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799928u, 0x799930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799930u;
label_799930:
    // 0x799930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799934: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799934u;
    SET_GPR_U32(ctx, 31, 0x79993Cu);
    ctx->pc = 0x799938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799934u;
    // 0x799938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799934u, 0x79993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79993Cu;
label_79993c:
    // 0x79993c: 0xc1e6b16  jal         func_79AC58
    ctx->pc = 0x79993Cu;
    SET_GPR_U32(ctx, 31, 0x799944u);
    ctx->pc = 0x79AC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC58u, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79994c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79994Cu;
    SET_GPR_U32(ctx, 31, 0x799954u);
    ctx->pc = 0x799950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79994Cu;
    // 0x799950: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79994Cu, 0x799954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799958: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79995c: 0x24544c58  addiu       $s4, $v0, 0x4C58
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799960: 0x26c5af30  addiu       $a1, $s6, -0x50D0
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946608));
    // 0x799964: 0x0  nop
    ctx->pc = 0x799964u;
    // NOP
label_799968:
    // 0x799968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79996c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799970: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x799970u;
    SET_GPR_U32(ctx, 31, 0x799978u);
    ctx->pc = 0x799974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799970u;
    // 0x799974: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x799970u, 0x799978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79997c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79997cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799980: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799980u;
    {
        const bool branch_taken_0x799980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799980u;
        // 0x799984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799980) {
            ctx->pc = 0x7999B8u;
            goto label_7999b8;
        }
    }
    ctx->pc = 0x799988u;
    // 0x799988: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79998c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799990:
    // 0x799990: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799994: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79999c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7999a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7999a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7999A4u;
    {
        const bool branch_taken_0x7999a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A4u;
        // 0x7999a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a4) {
            ctx->pc = 0x7999B8u;
            goto label_7999b8;
        }
    }
    ctx->pc = 0x7999ACu;
    // 0x7999ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7999b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7999B0u;
    {
        const bool branch_taken_0x7999b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999b0) {
            ctx->pc = 0x7999B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999B0u;
            // 0x7999b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799990;
        }
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7999c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C4u;
        // 0x7999c8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999D8u;
            goto label_7999d8;
        }
    }
    ctx->pc = 0x7999CCu;
    // 0x7999cc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x7999d0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x7999d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x7999d4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7999d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_7999d8:
    // 0x7999d8: 0x2a22001d  slti        $v0, $s1, 0x1D
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x7999dc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x7999DCu;
    {
        const bool branch_taken_0x7999dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0x26c5af30  addiu       $a1, $s6, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999dc) {
            ctx->pc = 0x799968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799968;
        }
    }
    ctx->pc = 0x7999E4u;
    // 0x7999e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7999e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7999E8u;
    SET_GPR_U32(ctx, 31, 0x7999F0u);
    ctx->pc = 0x7999ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E8u;
    // 0x7999ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7999E8u, 0x7999F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F0u;
label_7999f0:
    // 0x7999f0: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x7999F0u;
    {
        const bool branch_taken_0x7999f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F0u;
        // 0x7999f4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f0) {
            ctx->pc = 0x799A14u;
            goto label_799a14;
        }
    }
    ctx->pc = 0x7999F8u;
    // 0x7999f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7999fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a00: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a08: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799a14:
    // 0x799a14: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799a18: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799a24: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x799a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799a28: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x799a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799a2c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x799a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799a30: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x799a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799a34: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x799a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799a38: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x799a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799a3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799a40: 0x3e00008  jr          $ra
    ctx->pc = 0x799A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A40u;
        // 0x799a44: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A48u;
}
} // namespace gh_r204
