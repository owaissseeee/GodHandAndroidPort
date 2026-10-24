#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_007997E8
// Address: 0x7997e8 - 0x799b38
void func_007997E8_0x7997e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007997E8_0x7997e8");
#endif

    switch (ctx->pc) {
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
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
        case 0x7999d8u: goto label_7999d8;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f0u: goto label_7999f0;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999f8u: goto label_7999f8;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a08u: goto label_799a08;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a10u: goto label_799a10;
        case 0x799a14u: goto label_799a14;
        case 0x799a18u: goto label_799a18;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a20u: goto label_799a20;
        case 0x799a24u: goto label_799a24;
        case 0x799a28u: goto label_799a28;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a30u: goto label_799a30;
        case 0x799a34u: goto label_799a34;
        case 0x799a38u: goto label_799a38;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a40u: goto label_799a40;
        case 0x799a44u: goto label_799a44;
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ab8u: goto label_799ab8;
        case 0x799abcu: goto label_799abc;
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ac8u: goto label_799ac8;
        case 0x799accu: goto label_799acc;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad4u: goto label_799ad4;
        case 0x799ad8u: goto label_799ad8;
        case 0x799adcu: goto label_799adc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae4u: goto label_799ae4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799aecu: goto label_799aec;
        case 0x799af0u: goto label_799af0;
        case 0x799af4u: goto label_799af4;
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        default: break;
    }

    ctx->pc = 0x7997e8u;

label_7997e8:
    // 0x7997e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_7997ec:
    // 0x7997ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7997f0:
    // 0x7997f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7997f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_7997f4:
    // 0x7997f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997f8:
    // 0x7997f8: 0x8c44a900  lw          $a0, -0x5700($v0)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945024)));
label_7997fc:
    // 0x7997fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799800:
    // 0x799800: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_799804:
    // 0x799804: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_799808:
    // 0x799808: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_79980c:
    // 0x79980c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_799810:
    // 0x799810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799814:
    // 0x799814: 0xc071f28  jal         func_1C7CA0
label_799818:
    if (ctx->pc == 0x799818u) {
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79981Cu;
        goto label_79981c;
    }
    ctx->pc = 0x799814u;
    SET_GPR_U32(ctx, 31, 0x79981Cu);
    ctx->pc = 0x799818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799814u;
    // 0x799818: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799820:
    // 0x799820: 0xc0b0e6c  jal         func_2C39B0
label_799824:
    if (ctx->pc == 0x799824u) {
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799828u;
        goto label_799828;
    }
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79982c:
    // 0x79982c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799830:
    // 0x799830: 0xc0b0fb6  jal         func_2C3ED8
label_799834:
    if (ctx->pc == 0x799834u) {
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x24a5a830  addiu       $a1, $a1, -0x57D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799838u;
        goto label_799838;
    }
    ctx->pc = 0x799830u;
    SET_GPR_U32(ctx, 31, 0x799838u);
    ctx->pc = 0x799834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799830u;
    // 0x799834: 0x24a5a830  addiu       $a1, $a1, -0x57D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799830u, 0x799838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0xc0b6dac  jal         func_2DB6B0
label_79983c:
    if (ctx->pc == 0x79983Cu) {
        ctx->pc = 0x799840u;
        goto label_799840;
    }
    ctx->pc = 0x799838u;
    SET_GPR_U32(ctx, 31, 0x799840u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799838u, 0x799840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0xc0b6dac  jal         func_2DB6B0
label_799844:
    if (ctx->pc == 0x799844u) {
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799848u;
        goto label_799848;
    }
    ctx->pc = 0x799840u;
    SET_GPR_U32(ctx, 31, 0x799848u);
    ctx->pc = 0x799844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799840u;
    // 0x799844: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799840u, 0x799848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79984c:
    // 0x79984c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799850:
    // 0x799850: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_799854:
    // 0x799854: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_799858:
    // 0x799858: 0xc0f809  jalr        $a2
label_79985c:
    if (ctx->pc == 0x79985Cu) {
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799860u;
        goto label_799860;
    }
    ctx->pc = 0x799858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799860u);
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799858u, 0x799860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799860u;
label_799860:
    // 0x799860: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_799864:
    // 0x799864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_799868:
    if (ctx->pc == 0x799868u) {
        ctx->pc = 0x79986Cu;
        goto label_79986c;
    }
    ctx->pc = 0x799864u;
    {
        const bool branch_taken_0x799864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799864) {
            ctx->pc = 0x799878u;
            goto label_799878;
        }
    }
    ctx->pc = 0x79986Cu;
label_79986c:
    // 0x79986c: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_799870:
    // 0x799870: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_799874:
    if (ctx->pc == 0x799874u) {
        ctx->pc = 0x799878u;
        goto label_799878;
    }
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799870) {
            ctx->pc = 0x799898u;
            goto label_799898;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0xc04ab18  jal         func_12AC60
label_79987c:
    if (ctx->pc == 0x79987Cu) {
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799880u;
        goto label_799880;
    }
    ctx->pc = 0x799878u;
    SET_GPR_U32(ctx, 31, 0x799880u);
    ctx->pc = 0x79987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799878u;
    // 0x79987c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC60u, 0x799878u, 0x799880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799880u;
label_799880:
    // 0x799880: 0xc04ae7c  jal         func_12B9F0
label_799884:
    if (ctx->pc == 0x799884u) {
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799888u;
        goto label_799888;
    }
    ctx->pc = 0x799880u;
    SET_GPR_U32(ctx, 31, 0x799888u);
    ctx->pc = 0x799884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799880u;
    // 0x799884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9F0u, 0x799880u, 0x799888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79988c:
    // 0x79988c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_799890:
    // 0x799890: 0xc0b56a8  jal         func_2D5AA0
label_799894:
    if (ctx->pc == 0x799894u) {
        ctx->pc = 0x799894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799890u;
        // 0x799894: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799898u;
        goto label_799898;
    }
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x799894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799890u;
    // 0x799894: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0xc0b6dac  jal         func_2DB6B0
label_79989c:
    if (ctx->pc == 0x79989Cu) {
        ctx->pc = 0x79989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799898u;
        // 0x79989c: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998A0u;
        goto label_7998a0;
    }
    ctx->pc = 0x799898u;
    SET_GPR_U32(ctx, 31, 0x7998A0u);
    ctx->pc = 0x79989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799898u;
    // 0x79989c: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799898u, 0x7998A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7998a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7998a4:
    // 0x7998a4: 0xc04b036  jal         func_12C0D8
label_7998a8:
    if (ctx->pc == 0x7998A8u) {
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x3c11005f  lui         $s1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998ACu;
        goto label_7998ac;
    }
    ctx->pc = 0x7998A4u;
    SET_GPR_U32(ctx, 31, 0x7998ACu);
    ctx->pc = 0x7998A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A4u;
    // 0x7998a8: 0x3c11005f  lui         $s1, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0D8u, 0x7998A4u, 0x7998ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0xc0b6dac  jal         func_2DB6B0
label_7998b0:
    if (ctx->pc == 0x7998B0u) {
        ctx->pc = 0x7998B4u;
        goto label_7998b4;
    }
    ctx->pc = 0x7998ACu;
    SET_GPR_U32(ctx, 31, 0x7998B4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7998ACu, 0x7998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x7998b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7998b8:
    // 0x7998b8: 0x8e47a900  lw          $a3, -0x5700($s2)
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945024)));
label_7998bc:
    // 0x7998bc: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
label_7998c0:
    if (ctx->pc == 0x7998C0u) {
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C4u;
        goto label_7998c4;
    }
    ctx->pc = 0x7998BCu;
    {
        const bool branch_taken_0x7998bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998bc) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_7998c8:
    // 0x7998c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_7998cc:
    if (ctx->pc == 0x7998CCu) {
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D0u;
        goto label_7998d0;
    }
    ctx->pc = 0x7998C8u;
    {
        const bool branch_taken_0x7998c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c8) {
            ctx->pc = 0x7998D8u;
            goto label_7998d8;
        }
    }
    ctx->pc = 0x7998D0u;
label_7998d0:
    // 0x7998d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_7998d4:
    if (ctx->pc == 0x7998D4u) {
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0xace8000c  sw          $t0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D8u;
        goto label_7998d8;
    }
    ctx->pc = 0x7998D0u;
    {
        const bool branch_taken_0x7998d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0xace8000c  sw          $t0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d0) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998D8u;
label_7998d8:
    // 0x7998d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7998dc:
    // 0x7998dc: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x7998dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_7998e0:
    // 0x7998e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7998e4:
    if (ctx->pc == 0x7998E4u) {
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998E8u;
        goto label_7998e8;
    }
    ctx->pc = 0x7998E0u;
    {
        const bool branch_taken_0x7998e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e0) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998E8u;
label_7998e8:
    // 0x7998e8: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_7998ec:
    // 0x7998ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7998f0:
    // 0x7998f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7998f4:
    // 0x7998f4: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_7998f8:
    if (ctx->pc == 0x7998F8u) {
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998FCu;
        goto label_7998fc;
    }
    ctx->pc = 0x7998F4u;
    {
        const bool branch_taken_0x7998f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f4) {
            ctx->pc = 0x7998DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x7998fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_799900:
    // 0x799900: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799904:
    // 0x799904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799908:
    // 0x799908: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79990c:
    // 0x79990c: 0xc0b0e48  jal         func_2C3920
label_799910:
    if (ctx->pc == 0x799910u) {
        ctx->pc = 0x799910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79990Cu;
        // 0x799910: 0x24a59588  addiu       $a1, $a1, -0x6A78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799914u;
        goto label_799914;
    }
    ctx->pc = 0x79990Cu;
    SET_GPR_U32(ctx, 31, 0x799914u);
    ctx->pc = 0x799910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79990Cu;
    // 0x799910: 0x24a59588  addiu       $a1, $a1, -0x6A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79990Cu, 0x799914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799914u;
label_799914:
    // 0x799914: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799918:
    // 0x799918: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79991c:
    // 0x79991c: 0xc0b56a8  jal         func_2D5AA0
label_799920:
    if (ctx->pc == 0x799920u) {
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799924u;
        goto label_799924;
    }
    ctx->pc = 0x79991Cu;
    SET_GPR_U32(ctx, 31, 0x799924u);
    ctx->pc = 0x799920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79991Cu;
    // 0x799920: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79991Cu, 0x799924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799924u;
label_799924:
    // 0x799924: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799928:
    // 0x799928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79992c:
    // 0x79992c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79992cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799930:
    // 0x799930: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_799934:
    // 0x799934: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799938:
    // 0x799938: 0x26047470  addiu       $a0, $s0, 0x7470
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29808));
label_79993c:
    // 0x79993c: 0xc0c1c82  jal         func_307208
label_799940:
    if (ctx->pc == 0x799940u) {
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799944u;
        goto label_799944;
    }
    ctx->pc = 0x79993Cu;
    SET_GPR_U32(ctx, 31, 0x799944u);
    ctx->pc = 0x799940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79993Cu;
    // 0x799940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799948:
    // 0x799948: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_79994c:
    // 0x79994c: 0xc0b56a8  jal         func_2D5AA0
label_799950:
    if (ctx->pc == 0x799950u) {
        ctx->pc = 0x799950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79994Cu;
        // 0x799950: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799954u;
        goto label_799954;
    }
    ctx->pc = 0x79994Cu;
    SET_GPR_U32(ctx, 31, 0x799954u);
    ctx->pc = 0x799950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79994Cu;
    // 0x799950: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79994Cu, 0x799954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0xc0b0f04  jal         func_2C3C10
label_799958:
    if (ctx->pc == 0x799958u) {
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79995Cu;
        goto label_79995c;
    }
    ctx->pc = 0x799954u;
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->pc = 0x799958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x8e258658  lw          $a1, -0x79A8($s1)
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_799960:
    // 0x799960: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_799964:
    // 0x799964: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_799968:
    // 0x799968: 0x4600051  bltz        $v1, . + 4 + (0x51 << 2)
label_79996c:
    if (ctx->pc == 0x79996Cu) {
        ctx->pc = 0x79996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799968u;
        // 0x79996c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799970u;
        goto label_799970;
    }
    ctx->pc = 0x799968u;
    {
        const bool branch_taken_0x799968 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799968u;
        // 0x79996c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799968) {
            ctx->pc = 0x799AB0u;
            goto label_799ab0;
        }
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_799974:
    // 0x799974: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x799974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_799978:
    // 0x799978: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79997c:
    // 0x79997c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799980:
    // 0x799980: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_799984:
    // 0x799984: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x799984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_799988:
    // 0x799988: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79998c:
    // 0x79998c: 0x3c0141c1  lui         $at, 0x41C1
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16833 << 16));
label_799990:
    // 0x799990: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_799994:
    // 0x799994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799998:
    // 0x799998: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
label_79999c:
    // 0x79999c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7999a0:
    // 0x7999a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7999a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7999a4:
    // 0x7999a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7999a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7999a8:
    // 0x7999a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x7999a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_7999ac:
    // 0x7999ac: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7999b0:
    // 0x7999b0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x7999b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_7999b4:
    // 0x7999b4: 0x24110102  addiu       $s1, $zero, 0x102
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_7999b8:
    // 0x7999b8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x7999b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7999bc:
    // 0x7999bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7999bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7999c0:
    // 0x7999c0: 0xc1e6986  jal         func_79A618
label_7999c4:
    if (ctx->pc == 0x7999C4u) {
        ctx->pc = 0x7999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C0u;
        // 0x7999c4: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C8u;
        goto label_7999c8;
    }
    ctx->pc = 0x7999C0u;
    SET_GPR_U32(ctx, 31, 0x7999C8u);
    ctx->pc = 0x7999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C0u;
    // 0x7999c4: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A618u, 0x7999C0u, 0x7999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C8u;
label_7999c8:
    // 0x7999c8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_7999cc:
    // 0x7999cc: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x7999ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_7999d0:
    // 0x7999d0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_7999d4:
    // 0x7999d4: 0xa4710008  sh          $s1, 0x8($v1)
    ctx->pc = 0x7999d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 17));
label_7999d8:
    // 0x7999d8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_7999dc:
    // 0x7999dc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_7999e0:
    // 0x7999e0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_7999e4:
    if (ctx->pc == 0x7999E4u) {
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E8u;
        goto label_7999e8;
    }
    ctx->pc = 0x7999E0u;
    {
        const bool branch_taken_0x7999e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e0) {
            ctx->pc = 0x7999FCu;
            goto label_7999fc;
        }
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x7999e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_7999ec:
    // 0x7999ec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x7999ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7999f0:
    // 0x7999f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7999f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_7999f4:
    // 0x7999f4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7999f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7999f8:
    // 0x7999f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7999f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_7999fc:
    // 0x7999fc: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_799a00:
    // 0x799a00: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799a04:
    // 0x799a04: 0x3c01c048  lui         $at, 0xC048
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49224 << 16));
label_799a08:
    // 0x799a08: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x799a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_799a0c:
    // 0x799a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799a10:
    // 0x799a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799a14:
    // 0x799a14: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x799a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_799a18:
    // 0x799a18: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_799a1c:
    // 0x799a1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799a20:
    // 0x799a20: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_799a24:
    // 0x799a24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_799a28:
    // 0x799a28: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_799a2c:
    // 0x799a2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_799a30:
    // 0x799a30: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x799a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_799a34:
    // 0x799a34: 0xc1e6996  jal         func_79A658
label_799a38:
    if (ctx->pc == 0x799A38u) {
        ctx->pc = 0x799A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A34u;
        // 0x799a38: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A3Cu;
        goto label_799a3c;
    }
    ctx->pc = 0x799A34u;
    SET_GPR_U32(ctx, 31, 0x799A3Cu);
    ctx->pc = 0x799A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A34u;
    // 0x799a38: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A658u, 0x799A34u, 0x799A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_799a40:
    if (ctx->pc == 0x799A40u) {
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A44u;
        goto label_799a44;
    }
    ctx->pc = 0x799A3Cu;
    {
        const bool branch_taken_0x799a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a3c) {
            ctx->pc = 0x799B0Cu;
            goto label_799b0c;
        }
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x799a44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
label_799a48:
    // 0x799a48: 0x10700031  beq         $v1, $s0, . + 4 + (0x31 << 2)
label_799a4c:
    if (ctx->pc == 0x799A4Cu) {
        ctx->pc = 0x799A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A48u;
        // 0x799a4c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A50u;
        goto label_799a50;
    }
    ctx->pc = 0x799A48u;
    {
        const bool branch_taken_0x799a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x799A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A48u;
        // 0x799a4c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a48) {
            ctx->pc = 0x799B10u;
            goto label_799b10;
        }
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0xc1e6990  jal         func_79A640
label_799a54:
    if (ctx->pc == 0x799A54u) {
        ctx->pc = 0x799A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A50u;
        // 0x799a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A58u;
        goto label_799a58;
    }
    ctx->pc = 0x799A50u;
    SET_GPR_U32(ctx, 31, 0x799A58u);
    ctx->pc = 0x799A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A50u;
    // 0x799a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A640u, 0x799A50u, 0x799A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A58u;
label_799a58:
    // 0x799a58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_799a5c:
    if (ctx->pc == 0x799A5Cu) {
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A60u;
        goto label_799a60;
    }
    ctx->pc = 0x799A58u;
    {
        const bool branch_taken_0x799a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a58) {
            ctx->pc = 0x799A88u;
            goto label_799a88;
        }
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799a64:
    // 0x799a64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x799a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799a68:
    // 0x799a68: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
label_799a6c:
    // 0x799a6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799a70:
    // 0x799a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a74:
    // 0x799a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a78:
    // 0x799a78: 0xc0b1152  jal         func_2C4548
label_799a7c:
    if (ctx->pc == 0x799A7Cu) {
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A80u;
        goto label_799a80;
    }
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x10000023  b           . + 4 + (0x23 << 2)
label_799a84:
    if (ctx->pc == 0x799A84u) {
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A88u;
        goto label_799a88;
    }
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799B10u;
            goto label_799b10;
        }
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799a8c:
    // 0x799a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x799a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799a90:
    // 0x799a90: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
label_799a94:
    // 0x799a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799a98:
    // 0x799a98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a9c:
    // 0x799a9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799aa0:
    // 0x799aa0: 0xc0b1152  jal         func_2C4548
label_799aa4:
    if (ctx->pc == 0x799AA4u) {
        ctx->pc = 0x799AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA0u;
        // 0x799aa4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AA8u;
        goto label_799aa8;
    }
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x10000019  b           . + 4 + (0x19 << 2)
label_799aac:
    if (ctx->pc == 0x799AACu) {
        ctx->pc = 0x799AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA8u;
        // 0x799aac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AB0u;
        goto label_799ab0;
    }
    ctx->pc = 0x799AA8u;
    {
        const bool branch_taken_0x799aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA8u;
        // 0x799aac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa8) {
            ctx->pc = 0x799B10u;
            goto label_799b10;
        }
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_799ab4:
    // 0x799ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ab8:
    // 0x799ab8: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799abc:
    // 0x799abc: 0xc0b0ab8  jal         func_2C2AE0
label_799ac0:
    if (ctx->pc == 0x799AC0u) {
        ctx->pc = 0x799AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ABCu;
        // 0x799ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AC4u;
        goto label_799ac4;
    }
    ctx->pc = 0x799ABCu;
    SET_GPR_U32(ctx, 31, 0x799AC4u);
    ctx->pc = 0x799AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ABCu;
    // 0x799ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799ABCu, 0x799AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC4u;
label_799ac4:
    // 0x799ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ac8:
    // 0x799ac8: 0xc0b0a02  jal         func_2C2808
label_799acc:
    if (ctx->pc == 0x799ACCu) {
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AD0u;
        goto label_799ad0;
    }
    ctx->pc = 0x799AC8u;
    SET_GPR_U32(ctx, 31, 0x799AD0u);
    ctx->pc = 0x799ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC8u;
    // 0x799acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x799AC8u, 0x799AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ad4:
    // 0x799ad4: 0xc0b0ab8  jal         func_2C2AE0
label_799ad8:
    if (ctx->pc == 0x799AD8u) {
        ctx->pc = 0x799AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD4u;
        // 0x799ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ADCu;
        goto label_799adc;
    }
    ctx->pc = 0x799AD4u;
    SET_GPR_U32(ctx, 31, 0x799ADCu);
    ctx->pc = 0x799AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD4u;
    // 0x799ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799AD4u, 0x799ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ADCu;
label_799adc:
    // 0x799adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ae0:
    // 0x799ae0: 0xc0b0a1c  jal         func_2C2870
label_799ae4:
    if (ctx->pc == 0x799AE4u) {
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AE8u;
        goto label_799ae8;
    }
    ctx->pc = 0x799AE0u;
    SET_GPR_U32(ctx, 31, 0x799AE8u);
    ctx->pc = 0x799AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE0u;
    // 0x799ae4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x799AE0u, 0x799AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799aec:
    // 0x799aec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799af0:
    // 0x799af0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_799af4:
    // 0x799af4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_799af8:
    // 0x799af8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799afc:
    // 0x799afc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799b00:
    // 0x799b00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799b04:
    // 0x799b04: 0xc0b2e28  jal         func_2CB8A0
label_799b08:
    if (ctx->pc == 0x799B08u) {
        ctx->pc = 0x799B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B04u;
        // 0x799b08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B0Cu;
        goto label_799b0c;
    }
    ctx->pc = 0x799B04u;
    SET_GPR_U32(ctx, 31, 0x799B0Cu);
    ctx->pc = 0x799B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B04u;
    // 0x799b08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B04u, 0x799B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799b10:
    // 0x799b10: 0xc0b5692  jal         func_2D5A48
label_799b14:
    if (ctx->pc == 0x799B14u) {
        ctx->pc = 0x799B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B10u;
        // 0x799b14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B18u;
        goto label_799b18;
    }
    ctx->pc = 0x799B10u;
    SET_GPR_U32(ctx, 31, 0x799B18u);
    ctx->pc = 0x799B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B10u;
    // 0x799b14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799B10u, 0x799B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799b1c:
    // 0x799b1c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799b20:
    // 0x799b20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799b24:
    // 0x799b24: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799b28:
    // 0x799b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799b2c:
    // 0x799b2c: 0x3e00008  jr          $ra
label_799b30:
    if (ctx->pc == 0x799B30u) {
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B34u;
        goto label_799b34;
    }
    ctx->pc = 0x799B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x0  nop
    ctx->pc = 0x799b34u;
    // NOP
    ctx->pc = 0x799b38u;
}
} // namespace gh_r105
