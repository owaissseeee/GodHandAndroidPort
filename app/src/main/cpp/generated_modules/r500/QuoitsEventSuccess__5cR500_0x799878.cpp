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
// Function: QuoitsEventSuccess__5cR500
// Address: 0x799878 - 0x7999d8
void QuoitsEventSuccess__5cR500_0x799878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuoitsEventSuccess__5cR500_0x799878");
#endif

    switch (ctx->pc) {
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        case 0x799900u: goto label_799900;
        case 0x799904u: goto label_799904;
        case 0x799908u: goto label_799908;
        case 0x79990cu: goto label_79990c;
        case 0x799910u: goto label_799910;
        case 0x799914u: goto label_799914;
        case 0x799918u: goto label_799918;
        case 0x79991cu: goto label_79991c;
        case 0x799920u: goto label_799920;
        case 0x799924u: goto label_799924;
        case 0x799928u: goto label_799928;
        case 0x79992cu: goto label_79992c;
        case 0x799930u: goto label_799930;
        case 0x799934u: goto label_799934;
        case 0x799938u: goto label_799938;
        case 0x79993cu: goto label_79993c;
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        default: break;
    }

    ctx->pc = 0x799878u;

label_799878:
    // 0x799878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_79987c:
    // 0x79987c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_799880:
    // 0x799880: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_799884:
    // 0x799884: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_799888:
    // 0x799888: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79988c:
    // 0x79988c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_799890:
    // 0x799890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799894:
    // 0x799894: 0xc0b0fa2  jal         func_2C3E88
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_7998a0:
    // 0x7998a0: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_7998a4:
    // 0x7998a4: 0xc0a58dc  jal         func_296370
label_7998a8:
    if (ctx->pc == 0x7998A8u) {
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998ACu;
        goto label_7998ac;
    }
    ctx->pc = 0x7998A4u;
    SET_GPR_U32(ctx, 31, 0x7998ACu);
    ctx->pc = 0x7998A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A4u;
    // 0x7998a8: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7998A4u, 0x7998ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_7998b0:
    // 0x7998b0: 0xc0b6cac  jal         func_2DB2B0
label_7998b4:
    if (ctx->pc == 0x7998B4u) {
        ctx->pc = 0x7998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B0u;
        // 0x7998b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B8u;
        goto label_7998b8;
    }
    ctx->pc = 0x7998B0u;
    SET_GPR_U32(ctx, 31, 0x7998B8u);
    ctx->pc = 0x7998B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B0u;
    // 0x7998b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7998B0u, 0x7998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7998bc:
    // 0x7998bc: 0xc0b6cac  jal         func_2DB2B0
label_7998c0:
    if (ctx->pc == 0x7998C0u) {
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C4u;
        goto label_7998c4;
    }
    ctx->pc = 0x7998BCu;
    SET_GPR_U32(ctx, 31, 0x7998C4u);
    ctx->pc = 0x7998C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998BCu;
    // 0x7998c0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7998BCu, 0x7998C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_7998c8:
    // 0x7998c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7998cc:
    // 0x7998cc: 0xc0a56ce  jal         func_295B38
label_7998d0:
    if (ctx->pc == 0x7998D0u) {
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D4u;
        goto label_7998d4;
    }
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x7998d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_7998d8:
    // 0x7998d8: 0x240403da  addiu       $a0, $zero, 0x3DA
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
label_7998dc:
    // 0x7998dc: 0xc0c3ea6  jal         func_30FA98
label_7998e0:
    if (ctx->pc == 0x7998E0u) {
        ctx->pc = 0x7998E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998DCu;
        // 0x7998e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998E4u;
        goto label_7998e4;
    }
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7998e8:
    // 0x7998e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_7998ec:
    // 0x7998ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7998f0:
    // 0x7998f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7998f4:
    // 0x7998f4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_7998f8:
    // 0x7998f8: 0xc0b0a92  jal         func_2C2A48
label_7998fc:
    if (ctx->pc == 0x7998FCu) {
        ctx->pc = 0x7998FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F8u;
        // 0x7998fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799900u;
        goto label_799900;
    }
    ctx->pc = 0x7998F8u;
    SET_GPR_U32(ctx, 31, 0x799900u);
    ctx->pc = 0x7998FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F8u;
    // 0x7998fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7998F8u, 0x799900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799900u;
label_799900:
    // 0x799900: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_799904:
    if (ctx->pc == 0x799904u) {
        ctx->pc = 0x799908u;
        goto label_799908;
    }
    ctx->pc = 0x799900u;
    {
        const bool branch_taken_0x799900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799900) {
            ctx->pc = 0x79993Cu;
            goto label_79993c;
        }
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79990c:
    // 0x79990c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799910:
    // 0x799910: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799914:
    // 0x799914: 0x40f809  jalr        $v0
label_799918:
    if (ctx->pc == 0x799918u) {
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79991Cu;
        goto label_79991c;
    }
    ctx->pc = 0x799914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79991Cu);
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799914u, 0x79991Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79991Cu;
label_79991c:
    // 0x79991c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799920:
    // 0x799920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799924:
    // 0x799924: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_799928:
    // 0x799928: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79992c:
    // 0x79992c: 0xc0f809  jalr        $a2
label_799930:
    if (ctx->pc == 0x799930u) {
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799934u;
        goto label_799934;
    }
    ctx->pc = 0x79992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799934u);
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79992Cu, 0x799934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799934u;
label_799934:
    // 0x799934: 0x24020911  addiu       $v0, $zero, 0x911
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2321));
label_799938:
    // 0x799938: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x799938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_79993c:
    // 0x79993c: 0x3c01c11a  lui         $at, 0xC11A
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49434 << 16));
label_799940:
    // 0x799940: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x799940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_799944:
    // 0x799944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799948:
    // 0x799948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79994c:
    // 0x79994c: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_799950:
    // 0x799950: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_799954:
    // 0x799954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799958:
    // 0x799958: 0x3c01c218  lui         $at, 0xC218
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49688 << 16));
label_79995c:
    // 0x79995c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_799960:
    // 0x799960: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799964:
    // 0x799964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799968:
    // 0x799968: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79996c:
    // 0x79996c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x79996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_799970:
    // 0x799970: 0x3c013fbd  lui         $at, 0x3FBD
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16317 << 16));
label_799974:
    // 0x799974: 0x3421e44e  ori         $at, $at, 0xE44E
    ctx->pc = 0x799974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58446);
label_799978:
    // 0x799978: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79997c:
    // 0x79997c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x79997cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_799980:
    // 0x799980: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x799980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_799984:
    // 0x799984: 0xc0c71f8  jal         func_31C7E0
label_799988:
    if (ctx->pc == 0x799988u) {
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79998Cu;
        goto label_79998c;
    }
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C7E0u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0xc0b6dac  jal         func_2DB6B0
label_799990:
    if (ctx->pc == 0x799990u) {
        ctx->pc = 0x799994u;
        goto label_799994;
    }
    ctx->pc = 0x79998Cu;
    SET_GPR_U32(ctx, 31, 0x799994u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79998Cu, 0x799994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0xc04b106  jal         func_12C418
label_799998:
    if (ctx->pc == 0x799998u) {
        ctx->pc = 0x799998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799994u;
        // 0x799998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79999Cu;
        goto label_79999c;
    }
    ctx->pc = 0x799994u;
    SET_GPR_U32(ctx, 31, 0x79999Cu);
    ctx->pc = 0x799998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799994u;
    // 0x799998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x799994u, 0x79999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79999Cu;
label_79999c:
    // 0x79999c: 0xc0b6dac  jal         func_2DB6B0
label_7999a0:
    if (ctx->pc == 0x7999A0u) {
        ctx->pc = 0x7999A4u;
        goto label_7999a4;
    }
    ctx->pc = 0x79999Cu;
    SET_GPR_U32(ctx, 31, 0x7999A4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79999Cu, 0x7999A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A4u;
label_7999a4:
    // 0x7999a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7999a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7999a8:
    // 0x7999a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999ac:
    // 0x7999ac: 0xc0493d8  jal         func_124F60
label_7999b0:
    if (ctx->pc == 0x7999B0u) {
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B4u;
        goto label_7999b4;
    }
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7999b8:
    // 0x7999b8: 0xc0b5692  jal         func_2D5A48
label_7999bc:
    if (ctx->pc == 0x7999BCu) {
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C0u;
        goto label_7999c0;
    }
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7999c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7999c4:
    // 0x7999c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7999c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7999c8:
    // 0x7999c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7999c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7999cc:
    // 0x7999cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7999d0:
    // 0x7999d0: 0x3e00008  jr          $ra
label_7999d4:
    if (ctx->pc == 0x7999D4u) {
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D8u;
        goto label_fallthrough_0x7999d0;
    }
    ctx->pc = 0x7999D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7999d0:
    ctx->pc = 0x7999D8u;
}
} // namespace gh_r500
