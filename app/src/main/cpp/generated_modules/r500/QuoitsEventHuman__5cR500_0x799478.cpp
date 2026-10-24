#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r500_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r500
{
// Function: QuoitsEventHuman__5cR500
// Address: 0x799478 - 0x799578
void QuoitsEventHuman__5cR500_0x799478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuoitsEventHuman__5cR500_0x799478");
#endif

    switch (ctx->pc) {
        case 0x7994a8u: goto label_7994a8;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994e0u: goto label_7994e0;
        case 0x799504u: goto label_799504;
        case 0x79950cu: goto label_79950c;
        case 0x79954cu: goto label_79954c;
        case 0x799558u: goto label_799558;
        default: break;
    }

    ctx->pc = 0x799478u;

    // 0x799478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79947c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799480: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799484: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x799488: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79948c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799494: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79949c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x7994a0: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7994a4: 0x0  nop
    ctx->pc = 0x7994a4u;
    // NOP
label_7994a8:
    // 0x7994a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7994ac: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x7994b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994B0u;
    {
        const bool branch_taken_0x7994b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b0) {
            ctx->pc = 0x7994CCu;
            goto label_7994cc;
        }
    }
    ctx->pc = 0x7994B8u;
    // 0x7994b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994bc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994BCu;
    SET_GPR_U32(ctx, 31, 0x7994C4u);
    ctx->pc = 0x7994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994BCu;
    // 0x7994c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994BCu, 0x7994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x7994C4u;
    {
        const bool branch_taken_0x7994c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0x8e038658  lw          $v1, -0x79A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c4) {
            ctx->pc = 0x7994A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994a8;
        }
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7994d0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7994d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7994d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x799504u;
            goto label_799504;
        }
    }
    ctx->pc = 0x7994DCu;
    // 0x7994dc: 0x0  nop
    ctx->pc = 0x7994dcu;
    // NOP
label_7994e0:
    // 0x7994e0: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x7994e4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x7994e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7994ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7994ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7994f0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x7994F0u;
    {
        const bool branch_taken_0x7994f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F0u;
        // 0x7994f4: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f0) {
            ctx->pc = 0x799524u;
            goto label_799524;
        }
    }
    ctx->pc = 0x7994F8u;
    // 0x7994f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79950Cu;
    {
        const bool branch_taken_0x79950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x8e248658  lw          $a0, -0x79A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79950c) {
            ctx->pc = 0x7994E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994e0;
        }
    }
    ctx->pc = 0x799514u;
    // 0x799514: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799518: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79951c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799520: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799524:
    // 0x799524: 0x8e228658  lw          $v0, -0x79A8($s1)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x799528: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79952c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799530: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799534: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799534u;
    {
        const bool branch_taken_0x799534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799534) {
            ctx->pc = 0x79954Cu;
            goto label_79954c;
        }
    }
    ctx->pc = 0x79953Cu;
    // 0x79953c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799540: 0x24a599d8  addiu       $a1, $a1, -0x6628
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941144));
    // 0x799544: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x799548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799544u;
    // 0x799548: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799550: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79955c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79955cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799560: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799564: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79956c: 0x3e00008  jr          $ra
    ctx->pc = 0x79956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79956Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799574u;
    // 0x799574: 0x0  nop
    ctx->pc = 0x799574u;
    // NOP
    ctx->pc = 0x799578u;
}
} // namespace gh_r500
