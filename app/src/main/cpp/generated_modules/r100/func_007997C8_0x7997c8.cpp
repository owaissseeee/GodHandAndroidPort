#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_007997C8
// Address: 0x7997c8 - 0x799a30
void func_007997C8_0x7997c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007997C8_0x7997c8");
#endif

    switch (ctx->pc) {
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
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
        default: break;
    }

    ctx->pc = 0x7997c8u;

label_7997c8:
    // 0x7997c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7997cc:
    // 0x7997cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7997d0:
    // 0x7997d0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_7997d4:
    // 0x7997d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7997d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_7997d8:
    // 0x7997d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7997d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7997dc:
    // 0x7997dc: 0xc051c0a  jal         func_147028
label_7997e0:
    if (ctx->pc == 0x7997E0u) {
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E4u;
        goto label_7997e4;
    }
    ctx->pc = 0x7997DCu;
    SET_GPR_U32(ctx, 31, 0x7997E4u);
    ctx->pc = 0x7997E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997DCu;
    // 0x7997e0: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147028u, 0x7997DCu, 0x7997E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_7997e8:
    // 0x7997e8: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_7997ec:
    // 0x7997ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7997f0:
    // 0x7997f0: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_7997f4:
    // 0x7997f4: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_7997f8:
    // 0x7997f8: 0xc07fa28  jal         func_1FE8A0
label_7997fc:
    if (ctx->pc == 0x7997FCu) {
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799800u;
        goto label_799800;
    }
    ctx->pc = 0x7997F8u;
    SET_GPR_U32(ctx, 31, 0x799800u);
    ctx->pc = 0x7997FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F8u;
    // 0x7997fc: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x7997F8u, 0x799800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0x240403eb  addiu       $a0, $zero, 0x3EB
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_799804:
    // 0x799804: 0xc0c3ea6  jal         func_30FA98
label_799808:
    if (ctx->pc == 0x799808u) {
        ctx->pc = 0x799808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799804u;
        // 0x799808: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79980Cu;
        goto label_79980c;
    }
    ctx->pc = 0x799804u;
    SET_GPR_U32(ctx, 31, 0x79980Cu);
    ctx->pc = 0x799808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799804u;
    // 0x799808: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799804u, 0x79980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79980Cu;
label_79980c:
    // 0x79980c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799810:
    // 0x799810: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_799814:
    if (ctx->pc == 0x799814u) {
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x240403eb  addiu       $a0, $zero, 0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799818u;
        goto label_799818;
    }
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799810) {
            ctx->pc = 0x799814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799810u;
            // 0x799814: 0x240403eb  addiu       $a0, $zero, 0x3EB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799888u;
            goto label_799888;
        }
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79981c:
    // 0x79981c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799820:
    // 0x799820: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799824:
    // 0x799824: 0x40f809  jalr        $v0
label_799828:
    if (ctx->pc == 0x799828u) {
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79982Cu;
        goto label_79982c;
    }
    ctx->pc = 0x799824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79982Cu);
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799824u, 0x79982Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79982Cu;
label_79982c:
    // 0x79982c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799830:
    // 0x799830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799834:
    // 0x799834: 0x3c01c058  lui         $at, 0xC058
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49240 << 16));
label_799838:
    // 0x799838: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x799838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_79983c:
    // 0x79983c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79983cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799840:
    // 0x799840: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_799844:
    // 0x799844: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_799848:
    // 0x799848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79984c:
    // 0x79984c: 0x3c01418d  lui         $at, 0x418D
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16781 << 16));
label_799850:
    // 0x799850: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_799854:
    // 0x799854: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799858:
    // 0x799858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79985c:
    // 0x79985c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_799860:
    // 0x799860: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_799864:
    // 0x799864: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x799864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799868:
    // 0x799868: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79986c:
    // 0x79986c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79986cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799870:
    // 0x799870: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x799870u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799874:
    // 0x799874: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_799878:
    // 0x799878: 0x40f809  jalr        $v0
label_79987c:
    if (ctx->pc == 0x79987Cu) {
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799880u;
        goto label_799880;
    }
    ctx->pc = 0x799878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799880u);
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799878u, 0x799880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799880u;
label_799880:
    // 0x799880: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x799880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
label_799884:
    // 0x799884: 0x240403eb  addiu       $a0, $zero, 0x3EB
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_799888:
    // 0x799888: 0xc0c3ea6  jal         func_30FA98
label_79988c:
    if (ctx->pc == 0x79988Cu) {
        ctx->pc = 0x79988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799888u;
        // 0x79988c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799890u;
        goto label_799890;
    }
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799894:
    // 0x799894: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x240403eb  addiu       $a0, $zero, 0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799894) {
            ctx->pc = 0x799898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799894u;
            // 0x799898: 0x240403eb  addiu       $a0, $zero, 0x3EB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799910u;
            goto label_799910;
        }
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7998a0:
    // 0x7998a0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7998a4:
    // 0x7998a4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7998a8:
    // 0x7998a8: 0x40f809  jalr        $v0
label_7998ac:
    if (ctx->pc == 0x7998ACu) {
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B0u;
        goto label_7998b0;
    }
    ctx->pc = 0x7998A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7998B0u);
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7998b4:
    // 0x7998b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7998b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7998b8:
    // 0x7998b8: 0x3c01c170  lui         $at, 0xC170
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49520 << 16));
label_7998bc:
    // 0x7998bc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x7998bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_7998c0:
    // 0x7998c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7998c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7998c4:
    // 0x7998c4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_7998c8:
    // 0x7998c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_7998cc:
    // 0x7998cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7998ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7998d0:
    // 0x7998d0: 0x3c01c0f2  lui         $at, 0xC0F2
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49394 << 16));
label_7998d4:
    // 0x7998d4: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_7998d8:
    // 0x7998d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7998d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7998dc:
    // 0x7998dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7998e0:
    // 0x7998e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7998e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_7998e4:
    // 0x7998e4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_7998e8:
    // 0x7998e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7998e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_7998ec:
    // 0x7998ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7998ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7998f0:
    // 0x7998f0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x7998f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7998f4:
    // 0x7998f4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x7998f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7998f8:
    // 0x7998f8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_7998fc:
    // 0x7998fc: 0x40f809  jalr        $v0
label_799900:
    if (ctx->pc == 0x799900u) {
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799904u;
        goto label_799904;
    }
    ctx->pc = 0x7998FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799904u);
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998FCu, 0x799904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799904u;
label_799904:
    // 0x799904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799908:
    // 0x799908: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x799908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_79990c:
    // 0x79990c: 0x240403eb  addiu       $a0, $zero, 0x3EB
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_799910:
    // 0x799910: 0xc0c3ea6  jal         func_30FA98
label_799914:
    if (ctx->pc == 0x799914u) {
        ctx->pc = 0x799914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799910u;
        // 0x799914: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799918u;
        goto label_799918;
    }
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79991c:
    // 0x79991c: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_799920:
    if (ctx->pc == 0x799920u) {
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x240403eb  addiu       $a0, $zero, 0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799924u;
        goto label_799924;
    }
    ctx->pc = 0x79991Cu;
    {
        const bool branch_taken_0x79991c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79991c) {
            ctx->pc = 0x799920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79991Cu;
            // 0x799920: 0x240403eb  addiu       $a0, $zero, 0x3EB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799998u;
            goto label_799998;
        }
    }
    ctx->pc = 0x799924u;
label_799924:
    // 0x799924: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799928:
    // 0x799928: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79992c:
    // 0x79992c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799930:
    // 0x799930: 0x40f809  jalr        $v0
label_799934:
    if (ctx->pc == 0x799934u) {
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799938u;
        goto label_799938;
    }
    ctx->pc = 0x799930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799938u);
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79993c:
    // 0x79993c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799940:
    // 0x799940: 0x3c01bf94  lui         $at, 0xBF94
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49044 << 16));
label_799944:
    // 0x799944: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x799944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_799948:
    // 0x799948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79994c:
    // 0x79994c: 0x3c014007  lui         $at, 0x4007
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16391 << 16));
label_799950:
    // 0x799950: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_799954:
    // 0x799954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799958:
    // 0x799958: 0x3c01c210  lui         $at, 0xC210
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49680 << 16));
label_79995c:
    // 0x79995c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
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
    // 0x79996c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_799970:
    // 0x799970: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x799970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799974:
    // 0x799974: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_799978:
    // 0x799978: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x799978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79997c:
    // 0x79997c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x79997cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799980:
    // 0x799980: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_799984:
    // 0x799984: 0x40f809  jalr        $v0
label_799988:
    if (ctx->pc == 0x799988u) {
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79998Cu;
        goto label_79998c;
    }
    ctx->pc = 0x799984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79998Cu);
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799990:
    // 0x799990: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x799990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_799994:
    // 0x799994: 0x240403eb  addiu       $a0, $zero, 0x3EB
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_799998:
    // 0x799998: 0xc0c3ea6  jal         func_30FA98
label_79999c:
    if (ctx->pc == 0x79999Cu) {
        ctx->pc = 0x79999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799998u;
        // 0x79999c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999A0u;
        goto label_7999a0;
    }
    ctx->pc = 0x799998u;
    SET_GPR_U32(ctx, 31, 0x7999A0u);
    ctx->pc = 0x79999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799998u;
    // 0x79999c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799998u, 0x7999A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7999a4:
    // 0x7999a4: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_7999a8:
    if (ctx->pc == 0x7999A8u) {
        ctx->pc = 0x7999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A4u;
        // 0x7999a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999ACu;
        goto label_7999ac;
    }
    ctx->pc = 0x7999A4u;
    {
        const bool branch_taken_0x7999a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7999a4) {
            ctx->pc = 0x7999A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999A4u;
            // 0x7999a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A20u;
            goto label_799a20;
        }
    }
    ctx->pc = 0x7999ACu;
label_7999ac:
    // 0x7999ac: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7999b0:
    // 0x7999b0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7999b4:
    // 0x7999b4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7999b8:
    // 0x7999b8: 0x40f809  jalr        $v0
label_7999bc:
    if (ctx->pc == 0x7999BCu) {
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C0u;
        goto label_7999c0;
    }
    ctx->pc = 0x7999B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7999C0u);
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7999c4:
    // 0x7999c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7999c8:
    // 0x7999c8: 0x3c01410c  lui         $at, 0x410C
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16652 << 16));
label_7999cc:
    // 0x7999cc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_7999d0:
    // 0x7999d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7999d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7999d4:
    // 0x7999d4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_7999d8:
    // 0x7999d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_7999dc:
    // 0x7999dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7999dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7999e0:
    // 0x7999e0: 0x3c01c1cf  lui         $at, 0xC1CF
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49615 << 16));
label_7999e4:
    // 0x7999e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7999e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_7999e8:
    // 0x7999e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7999e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7999ec:
    // 0x7999ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7999f0:
    // 0x7999f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7999f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_7999f4:
    // 0x7999f4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_7999f8:
    // 0x7999f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7999f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_7999fc:
    // 0x7999fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7999fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_799a00:
    // 0x799a00: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x799a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799a04:
    // 0x799a04: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x799a04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799a08:
    // 0x799a08: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_799a0c:
    // 0x799a0c: 0x40f809  jalr        $v0
label_799a10:
    if (ctx->pc == 0x799A10u) {
        ctx->pc = 0x799A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A0Cu;
        // 0x799a10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A14u;
        goto label_799a14;
    }
    ctx->pc = 0x799A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799A14u);
        ctx->pc = 0x799A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A0Cu;
        // 0x799a10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799a18:
    // 0x799a18: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x799a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_799a1c:
    // 0x799a1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799a20:
    // 0x799a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799a24:
    // 0x799a24: 0x3e00008  jr          $ra
label_799a28:
    if (ctx->pc == 0x799A28u) {
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A2Cu;
        goto label_799a2c;
    }
    ctx->pc = 0x799A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x0  nop
    ctx->pc = 0x799a2cu;
    // NOP
    ctx->pc = 0x799a30u;
}
} // namespace gh_r100
