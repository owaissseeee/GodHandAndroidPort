#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: func_00799708
// Address: 0x799708 - 0x799908
void func_00799708_0x799708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799708_0x799708");
#endif

    switch (ctx->pc) {
        case 0x799758u: goto label_799758;
        case 0x799764u: goto label_799764;
        case 0x799774u: goto label_799774;
        case 0x79978cu: goto label_79978c;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997fcu: goto label_7997fc;
        case 0x799814u: goto label_799814;
        case 0x799820u: goto label_799820;
        case 0x799838u: goto label_799838;
        case 0x799850u: goto label_799850;
        case 0x799858u: goto label_799858;
        case 0x799864u: goto label_799864;
        case 0x79986cu: goto label_79986c;
        case 0x799874u: goto label_799874;
        case 0x79987cu: goto label_79987c;
        case 0x799898u: goto label_799898;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998d4u: goto label_7998d4;
        default: break;
    }

    ctx->pc = 0x799708u;

    // 0x799708: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x79970c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x799710: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x799714: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799718: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x79971c: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x799720: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x799724: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799728: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x79972c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799730: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x799734: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x799738: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x799738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x79973c: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799740: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x799740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x799744: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x799748: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x799748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x79974c: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x799750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799750u;
    {
        const bool branch_taken_0x799750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799750) {
            ctx->pc = 0x799764u;
            goto label_799764;
        }
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79975c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79975Cu;
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->pc = 0x799760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79975Cu, 0x799764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x799768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79976c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79976Cu;
    SET_GPR_U32(ctx, 31, 0x799774u);
    ctx->pc = 0x799770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79976Cu;
    // 0x799770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79976Cu, 0x799774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799778: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799778u;
    {
        const bool branch_taken_0x799778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799778) {
            ctx->pc = 0x799758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799758;
        }
    }
    ctx->pc = 0x799780u;
    // 0x799780: 0x265064f0  addiu       $s0, $s2, 0x64F0
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    // 0x799784: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x799788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799784u;
    // 0x799788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79978Cu;
    {
        const bool branch_taken_0x79978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79978Cu;
        // 0x799790: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79978c) {
            ctx->pc = 0x799758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799758;
        }
    }
    ctx->pc = 0x799794u;
    // 0x799794: 0x8e020514  lw          $v0, 0x514($s0)
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1300)));
    // 0x799798: 0x1c40ffef  bgtz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x799798u;
    {
        const bool branch_taken_0x799798 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799798) {
            ctx->pc = 0x799758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799758;
        }
    }
    ctx->pc = 0x7997A0u;
    // 0x7997a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997a4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7997a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7997a8: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7997A8u;
    SET_GPR_U32(ctx, 31, 0x7997B0u);
    ctx->pc = 0x7997ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A8u;
    // 0x7997ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7997A8u, 0x7997B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B0u;
label_7997b0:
    // 0x7997b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7997B0u;
    {
        const bool branch_taken_0x7997b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7997b0) {
            ctx->pc = 0x7997B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997B0u;
            // 0x7997b4: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997B8u;
    // 0x7997b8: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x7997bc: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7997BCu;
    {
        const bool branch_taken_0x7997bc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997bc) {
            ctx->pc = 0x7997E4u;
            goto label_7997e4;
        }
    }
    ctx->pc = 0x7997C4u;
    // 0x7997c4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7997c8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7997C8u;
    SET_GPR_U32(ctx, 31, 0x7997D0u);
    ctx->pc = 0x7997CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C8u;
    // 0x7997cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7997D0u;
    {
        const bool branch_taken_0x7997d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D0u;
        // 0x7997d4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997d0) {
            ctx->pc = 0x7997E4u;
            goto label_7997e4;
        }
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7997D8u;
    SET_GPR_U32(ctx, 31, 0x7997E0u);
    ctx->pc = 0x7997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D8u;
    // 0x7997dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7997D8u, 0x7997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7997e4:
    // 0x7997e4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7997E4u;
    SET_GPR_U32(ctx, 31, 0x7997ECu);
    ctx->pc = 0x7997E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E4u;
    // 0x7997e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7997E4u, 0x7997ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ECu;
label_7997ec:
    // 0x7997ec: 0x264464f0  addiu       $a0, $s2, 0x64F0
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    // 0x7997f0: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x7997f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x7997f4: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7997F4u;
    SET_GPR_U32(ctx, 31, 0x7997FCu);
    ctx->pc = 0x7997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F4u;
    // 0x7997f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7997F4u, 0x7997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799800: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799800u;
    {
        const bool branch_taken_0x799800 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x799800) {
            ctx->pc = 0x799804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799800u;
            // 0x799804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799818u;
            goto label_799818;
        }
    }
    ctx->pc = 0x799808u;
    // 0x799808: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79980c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799818:
    // 0x799818: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799818u;
    SET_GPR_U32(ctx, 31, 0x799820u);
    ctx->pc = 0x79981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799818u;
    // 0x79981c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799818u, 0x799820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799824: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799828: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
    // 0x79982c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799830: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799830u;
    SET_GPR_U32(ctx, 31, 0x799838u);
    ctx->pc = 0x799834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799830u;
    // 0x799834: 0x26f06ab0  addiu       $s0, $s7, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799830u, 0x799838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79983c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799840: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799844: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799848: 0xc0a5682  jal         func_295A08
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295A08u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0xc09d472  jal         func_2751C8
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x799854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799850u;
    // 0x799854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751C8u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79985c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79985Cu;
    SET_GPR_U32(ctx, 31, 0x799864u);
    ctx->pc = 0x799860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79985Cu;
    // 0x799860: 0x27c59eb8  addiu       $a1, $fp, -0x6148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79985Cu, 0x799864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799864u;
    SET_GPR_U32(ctx, 31, 0x79986Cu);
    ctx->pc = 0x799868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799864u;
    // 0x799868: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799864u, 0x79986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79986Cu;
label_79986c:
    // 0x79986c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79986Cu;
    SET_GPR_U32(ctx, 31, 0x799874u);
    ctx->pc = 0x799870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79986Cu;
    // 0x799870: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79986Cu, 0x799874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0xc1e668c  jal         func_799A30
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A30u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799884: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x799884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x799888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79988c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79988cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799890: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x799894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799890u;
    // 0x799894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79989c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79989Cu;
    SET_GPR_U32(ctx, 31, 0x7998A4u);
    ctx->pc = 0x7998A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79989Cu;
    // 0x7998a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79989Cu, 0x7998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7998A4u;
    SET_GPR_U32(ctx, 31, 0x7998ACu);
    ctx->pc = 0x7998A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A4u;
    // 0x7998a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7998A4u, 0x7998ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7998ACu;
    SET_GPR_U32(ctx, 31, 0x7998B4u);
    ctx->pc = 0x7998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ACu;
    // 0x7998b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7998ACu, 0x7998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998b8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7998bc: 0x24459908  addiu       $a1, $v0, -0x66F8
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940936));
    // 0x7998c0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7998C0u;
    SET_GPR_U32(ctx, 31, 0x7998C8u);
    ctx->pc = 0x7998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C0u;
    // 0x7998c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7998C0u, 0x7998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998cc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x7998d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x7998d8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x7998d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7998dc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x7998dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7998e0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x7998e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7998e4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x7998e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7998e8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x7998e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7998ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x7998ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7998f0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x7998f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7998f4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x7998f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7998f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7998f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7998FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799904u;
    // 0x799904: 0x0  nop
    ctx->pc = 0x799904u;
    // NOP
    ctx->pc = 0x799908u;
}
} // namespace gh_r302
