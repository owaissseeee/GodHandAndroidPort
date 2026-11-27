#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_00799928
// Address: 0x799928 - 0x799a88
void func_00799928_0x799928(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799928_0x799928");
#endif

    if (__builtin_expect(ctx->pc != 0x799928u, 0)) {
        switch (ctx->pc) {
            case 0x799950u: goto label_799950;
            case 0x79995cu: goto label_79995c;
            case 0x799968u: goto label_799968;
            case 0x79997cu: goto label_79997c;
            case 0x79999cu: goto label_79999c;
            case 0x7999b0u: goto label_7999b0;
            case 0x7999c0u: goto label_7999c0;
            case 0x7999d4u: goto label_7999d4;
            case 0x7999e0u: goto label_7999e0;
            case 0x7999f0u: goto label_7999f0;
            case 0x799a18u: goto label_799a18;
            case 0x799a48u: goto label_799a48;
            case 0x799a5cu: goto label_799a5c;
            case 0x799a64u: goto label_799a64;
            case 0x799a70u: goto label_799a70;
            default: break;
        }
    }



    // 0x799928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79992c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799930: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799934: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799938: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79993c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799948: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x799950u);
    ctx->pc = 0x79994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799948u;
    // 0x79994c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799948u, 0x799950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799950:
    // 0x799950: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799954: 0xc1e6888  jal         func_79A220
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A220u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79995c:
    // 0x79995c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799960: 0xc1e6900  jal         func_79A400
    SET_GPR_U32(ctx, 31, 0x799968u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799960u;
    // 0x799964: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A400u, 0x799960u, 0x799968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799968:
    // 0x799968: 0x3c05007a  lui         $a1, 0x7A
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79996c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799970: 0x24a5a0b0  addiu       $a1, $a1, -0x5F50
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942896));
    // 0x799974: 0xc0b0e24  jal         func_2C3890
    SET_GPR_U32(ctx, 31, 0x79997Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799974u;
    // 0x799978: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_taskExec_2C3890_0x2c3890, 0x2C3890u, 0x79997Cu)) {
        return;
    }
label_79997c:
    // 0x79997c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799980: 0x3c020060  lui         $v0, 0x60
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799984: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799988: 0x2451ea60  addiu       $s1, $v0, -0x15A0
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79998c: 0x3a0302d  daddu       $a2, $sp, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799990: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799994: 0xc0b0a92  jal         func_2C2A48
    SET_GPR_U32(ctx, 31, 0x79999Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799994u;
    // 0x799998: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_getCenterPos_0x2c2a48, 0x2C2A48u, 0x79999Cu)) {
        return;
    }
label_79999c:
    // 0x79999c: 0x3c020058  lui         $v0, 0x58
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7999a0: 0x24050009  addiu       $a1, $zero, 0x9
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7999a4: 0x245064f0  addiu       $s0, $v0, 0x64F0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x7999a8: 0xc0a421a  jal         func_290868
    SET_GPR_U32(ctx, 31, 0x7999B0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A8u;
    // 0x7999ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_GetEm_0x290868, 0x290868u, 0x7999B0u)) {
        return;
    }
label_7999b0:
    // 0x7999b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999B0u;
    {
        const bool branch_taken_0x7999b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B0u;
        // 0x7999b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b0) {
            ctx->pc = 0x7999C0u;
            goto label_7999c0;
        }
    }
    // 0x7999b8: 0xc0a240e  jal         func_289038
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEma2_SetEscPos_0x289038, 0x289038u, 0x7999C0u)) {
        return;
    }
label_7999c0:
    // 0x7999c0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7999c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999c4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c8: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7999cc: 0xc0b0a92  jal         func_2C2A48
    SET_GPR_U32(ctx, 31, 0x7999D4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999CCu;
    // 0x7999d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_getCenterPos_0x2c2a48, 0x2C2A48u, 0x7999D4u)) {
        return;
    }
label_7999d4:
    // 0x7999d4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999d8: 0xc0a421a  jal         func_290868
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmManage_GetEm_0x290868, 0x290868u, 0x7999E0u)) {
        return;
    }
label_7999e0:
    // 0x7999e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999E0u;
    {
        const bool branch_taken_0x7999e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e0) {
            ctx->pc = 0x7999F0u;
            goto label_7999f0;
        }
    }
    // 0x7999e8: 0xc0a240e  jal         func_289038
    SET_GPR_U32(ctx, 31, 0x7999F0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E8u;
    // 0x7999ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEma2_SetEscPos_0x289038, 0x289038u, 0x7999F0u)) {
        return;
    }
label_7999f0:
    // 0x7999f0: 0x3c02007a  lui         $v0, 0x7A
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7999f4: 0x3c030075  lui         $v1, 0x75
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7999f8: 0x8044abb0  lb          $a0, -0x5450($v0)
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABB0u));
    // 0x7999fc: 0x2446abb0  addiu       $a2, $v0, -0x5450
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
    // 0x799a00: 0x24684c58  addiu       $t0, $v1, 0x4C58
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799a04: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a08: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799A08u;
    {
        const bool branch_taken_0x799a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A08u;
        // 0x799a0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a08) {
            ctx->pc = 0x799A40u;
            goto label_799a40;
        }
    }
    // 0x799a10: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a14: 0x0  nop
    // NOP
label_799a18:
    // 0x799a18: 0x720c0  sll         $a0, $a3, 3
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799a1c: 0x24e70001  addiu       $a3, $a3, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799a20: 0x24c60001  addiu       $a2, $a2, 0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799a24: 0x821014  dsllv       $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799a28: 0x28e30008  slti        $v1, $a3, 0x8
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A2Cu;
    {
        const bool branch_taken_0x799a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a2c) {
            ctx->pc = 0x799A40u;
            goto label_799a40;
        }
    }
    // 0x799a34: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a38: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A38u;
    {
        const bool branch_taken_0x799a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a38) {
            ctx->pc = 0x799A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A38u;
            // 0x799a3c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a18;
        }
    }
label_799a40:
    // 0x799a40: 0xc053f66  jal         func_14FD98
    SET_GPR_U32(ctx, 31, 0x799A48u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A40u;
    // 0x799a44: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->callDirectStatic(rdram, ctx, &cObjBaseArray_SearchOM_0x14fd98, 0x14FD98u, 0x799A48u)) {
        return;
    }
label_799a48:
    // 0x799a48: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a4c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799A4Cu;
    {
        const bool branch_taken_0x799a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A4Cu;
        // 0x799a50: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a4c) {
            ctx->pc = 0x799A68u;
            goto label_799a68;
        }
    }
    // 0x799a54: 0xc06b672  jal         func_1AD9C8
    SET_GPR_U32(ctx, 31, 0x799A5Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A54u;
    // 0x799a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD9C8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cOm5a_setCloseFix_0x1ad9c8, 0x1AD9C8u, 0x799A5Cu)) {
        return;
    }
label_799a5c:
    // 0x799a5c: 0xc06b6be  jal         func_1ADAF8
    SET_GPR_U32(ctx, 31, 0x799A64u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A5Cu;
    // 0x799a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAF8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cOm5a_setFaceClose_0x1adaf8, 0x1ADAF8u, 0x799A64u)) {
        return;
    }
label_799a64:
    // 0x799a64: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799a68:
    // 0x799a68: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799A70u)) {
        return;
    }
label_799a70:
    // 0x799a70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799a74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799a78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a80: 0x3e00008  jr          $ra
    ctx->pc = 0x799A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A88u;
}
} // namespace gh_r304
