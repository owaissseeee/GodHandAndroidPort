#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_00799780
// Address: 0x799780 - 0x799be8
void func_00799780_0x799780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799780_0x799780");
#endif

    switch (ctx->pc) {
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
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
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b70u: goto label_799b70;
        case 0x799b74u: goto label_799b74;
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        default: break;
    }

    ctx->pc = 0x799780u;

label_799780:
    // 0x799780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_799784:
    // 0x799784: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_799788:
    // 0x799788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_79978c:
    // 0x79978c: 0x8c62ae80  lw          $v0, -0x5180($v1)
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946432)));
label_799790:
    // 0x799790: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799794:
    // 0x799794: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_799798:
    // 0x799798: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_79979c:
    // 0x79979c: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
label_7997a0:
    if (ctx->pc == 0x7997A0u) {
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A4u;
        goto label_7997a4;
    }
    ctx->pc = 0x79979Cu;
    {
        const bool branch_taken_0x79979c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79979c) {
            ctx->pc = 0x799BCCu;
            goto label_799bcc;
        }
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_7997a8:
    // 0x7997a8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_7997ac:
    // 0x7997ac: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_7997b0:
    // 0x7997b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7997b4:
    // 0x7997b4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_7997b8:
    // 0x7997b8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_7997bc:
    if (ctx->pc == 0x7997BCu) {
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C0u;
        goto label_7997c0;
    }
    ctx->pc = 0x7997B8u;
    {
        const bool branch_taken_0x7997b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b8) {
            ctx->pc = 0x799884u;
            goto label_799884;
        }
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7997c4:
    // 0x7997c4: 0xc0c3ea6  jal         func_30FA98
label_7997c8:
    if (ctx->pc == 0x7997C8u) {
        ctx->pc = 0x7997C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C4u;
        // 0x7997c8: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997CCu;
        goto label_7997cc;
    }
    ctx->pc = 0x7997C4u;
    SET_GPR_U32(ctx, 31, 0x7997CCu);
    ctx->pc = 0x7997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C4u;
    // 0x7997c8: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7997C4u, 0x7997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7997d0:
    // 0x7997d0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x7997d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_7997d4:
    // 0x7997d4: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7997d8:
    // 0x7997d8: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_7997dc:
    // 0x7997dc: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_7997e0:
    if (ctx->pc == 0x7997E0u) {
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E4u;
        goto label_7997e4;
    }
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x799888u;
            goto label_799888;
        }
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_7997e8:
    // 0x7997e8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7997ec:
    // 0x7997ec: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7997f0:
    // 0x7997f0: 0x40f809  jalr        $v0
label_7997f4:
    if (ctx->pc == 0x7997F4u) {
        ctx->pc = 0x7997F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F0u;
        // 0x7997f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F8u;
        goto label_7997f8;
    }
    ctx->pc = 0x7997F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7997F8u);
        ctx->pc = 0x7997F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F0u;
        // 0x7997f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_7997fc:
    // 0x7997fc: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799800:
    // 0x799800: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799804:
    // 0x799804: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799808:
    // 0x799808: 0xc0b0a92  jal         func_2C2A48
label_79980c:
    if (ctx->pc == 0x79980Cu) {
        ctx->pc = 0x79980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799808u;
        // 0x79980c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799810u;
        goto label_799810;
    }
    ctx->pc = 0x799808u;
    SET_GPR_U32(ctx, 31, 0x799810u);
    ctx->pc = 0x79980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799808u;
    // 0x79980c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799808u, 0x799810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799814:
    // 0x799814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799818:
    // 0x799818: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_79981c:
    // 0x79981c: 0xc0b0a92  jal         func_2C2A48
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    SET_GPR_U32(ctx, 31, 0x799824u);
    ctx->pc = 0x799820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79981Cu;
    // 0x799820: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79981Cu, 0x799824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799828:
    // 0x799828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79982c:
    // 0x79982c: 0xc06d460  jal         func_1B5180
label_799830:
    if (ctx->pc == 0x799830u) {
        ctx->pc = 0x799830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79982Cu;
        // 0x799830: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799834u;
        goto label_799834;
    }
    ctx->pc = 0x79982Cu;
    SET_GPR_U32(ctx, 31, 0x799834u);
    ctx->pc = 0x799830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79982Cu;
    // 0x799830: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5180u, 0x79982Cu, 0x799834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799834u;
label_799834:
    // 0x799834: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799838:
    // 0x799838: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_79983c:
    // 0x79983c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799840:
    // 0x799840: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799844:
    // 0x799844: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799848:
    // 0x799848: 0x60f809  jalr        $v1
label_79984c:
    if (ctx->pc == 0x79984Cu) {
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799850u;
        goto label_799850;
    }
    ctx->pc = 0x799848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799850u);
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799854:
    // 0x799854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799858:
    // 0x799858: 0xc06d464  jal         func_1B5190
label_79985c:
    if (ctx->pc == 0x79985Cu) {
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799860u;
        goto label_799860;
    }
    ctx->pc = 0x799858u;
    SET_GPR_U32(ctx, 31, 0x799860u);
    ctx->pc = 0x79985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799858u;
    // 0x79985c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5190u, 0x799858u, 0x799860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799860u;
label_799860:
    // 0x799860: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799864:
    // 0x799864: 0x240509c1  addiu       $a1, $zero, 0x9C1
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
label_799868:
    // 0x799868: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_79986c:
    // 0x79986c: 0x8c820600  lw          $v0, 0x600($a0)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
label_799870:
    // 0x799870: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_799874:
    // 0x799874: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x799874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
label_799878:
    // 0x799878: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_79987c:
    // 0x79987c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_799880:
    // 0x799880: 0xac450560  sw          $a1, 0x560($v0)
    ctx->pc = 0x799880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1376), GPR_U32(ctx, 5));
label_799884:
    // 0x799884: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799888:
    // 0x799888: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_79988c:
    // 0x79988c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799890:
    // 0x799890: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799894:
    // 0x799894: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799894) {
            ctx->pc = 0x799998u;
            goto label_799998;
        }
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7998a0:
    // 0x7998a0: 0xc0c3ea6  jal         func_30FA98
label_7998a4:
    if (ctx->pc == 0x7998A4u) {
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998A8u;
        goto label_7998a8;
    }
    ctx->pc = 0x7998A0u;
    SET_GPR_U32(ctx, 31, 0x7998A8u);
    ctx->pc = 0x7998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A0u;
    // 0x7998a4: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7998A0u, 0x7998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7998ac:
    // 0x7998ac: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x7998acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_7998b0:
    // 0x7998b0: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7998b4:
    // 0x7998b4: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_7998b8:
    // 0x7998b8: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
label_7998bc:
    if (ctx->pc == 0x7998BCu) {
        ctx->pc = 0x7998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B8u;
        // 0x7998bc: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C0u;
        goto label_7998c0;
    }
    ctx->pc = 0x7998B8u;
    {
        const bool branch_taken_0x7998b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B8u;
        // 0x7998bc: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b8) {
            ctx->pc = 0x799998u;
            goto label_799998;
        }
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_7998c4:
    // 0x7998c4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7998c8:
    // 0x7998c8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7998cc:
    // 0x7998cc: 0x40f809  jalr        $v0
label_7998d0:
    if (ctx->pc == 0x7998D0u) {
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D4u;
        goto label_7998d4;
    }
    ctx->pc = 0x7998CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7998D4u);
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7998d8:
    // 0x7998d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_7998dc:
    // 0x7998dc: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_7998e0:
    // 0x7998e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_7998e4:
    // 0x7998e4: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_7998e8:
    // 0x7998e8: 0xc0b0a92  jal         func_2C2A48
label_7998ec:
    if (ctx->pc == 0x7998ECu) {
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998F0u;
        goto label_7998f0;
    }
    ctx->pc = 0x7998E8u;
    SET_GPR_U32(ctx, 31, 0x7998F0u);
    ctx->pc = 0x7998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E8u;
    // 0x7998ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7998E8u, 0x7998F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7998f4:
    // 0x7998f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7998f8:
    // 0x7998f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_7998fc:
    // 0x7998fc: 0xc0b0a92  jal         func_2C2A48
label_799900:
    if (ctx->pc == 0x799900u) {
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799904u;
        goto label_799904;
    }
    ctx->pc = 0x7998FCu;
    SET_GPR_U32(ctx, 31, 0x799904u);
    ctx->pc = 0x799900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998FCu;
    // 0x799900: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7998FCu, 0x799904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799904u;
label_799904:
    // 0x799904: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799908:
    // 0x799908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79990c:
    // 0x79990c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_799910:
    // 0x799910: 0xc0b0a92  jal         func_2C2A48
label_799914:
    if (ctx->pc == 0x799914u) {
        ctx->pc = 0x799914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799910u;
        // 0x799914: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799918u;
        goto label_799918;
    }
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_79991c:
    // 0x79991c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_799920:
    // 0x799920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799924:
    // 0x799924: 0xc0b0a92  jal         func_2C2A48
label_799928:
    if (ctx->pc == 0x799928u) {
        ctx->pc = 0x799928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799924u;
        // 0x799928: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79992Cu;
        goto label_79992c;
    }
    ctx->pc = 0x799924u;
    SET_GPR_U32(ctx, 31, 0x79992Cu);
    ctx->pc = 0x799928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799924u;
    // 0x799928: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799924u, 0x79992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79992Cu;
label_79992c:
    // 0x79992c: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799930:
    // 0x799930: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799934:
    // 0x799934: 0x8ca40070  lw          $a0, 0x70($a1)
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_799938:
    // 0x799938: 0xc06d460  jal         func_1B5180
label_79993c:
    if (ctx->pc == 0x79993Cu) {
        ctx->pc = 0x79993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799938u;
        // 0x79993c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799940u;
        goto label_799940;
    }
    ctx->pc = 0x799938u;
    SET_GPR_U32(ctx, 31, 0x799940u);
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5180u, 0x799938u, 0x799940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799944:
    // 0x799944: 0x8ca60070  lw          $a2, 0x70($a1)
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_799948:
    // 0x799948: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_79994c:
    // 0x79994c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799950:
    // 0x799950: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799954:
    // 0x799954: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799958:
    // 0x799958: 0x60f809  jalr        $v1
label_79995c:
    if (ctx->pc == 0x79995Cu) {
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799960u;
        goto label_799960;
    }
    ctx->pc = 0x799958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799960u);
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799958u, 0x799960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799960u;
label_799960:
    // 0x799960: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799964:
    // 0x799964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799968:
    // 0x799968: 0xc06d464  jal         func_1B5190
label_79996c:
    if (ctx->pc == 0x79996Cu) {
        ctx->pc = 0x79996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799968u;
        // 0x79996c: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799970u;
        goto label_799970;
    }
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5190u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799974:
    // 0x799974: 0x240509c1  addiu       $a1, $zero, 0x9C1
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
label_799978:
    // 0x799978: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_79997c:
    // 0x79997c: 0x8c820600  lw          $v0, 0x600($a0)
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
label_799980:
    // 0x799980: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_799984:
    // 0x799984: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x799984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
label_799988:
    // 0x799988: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_79998c:
    // 0x79998c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_799990:
    // 0x799990: 0xac450560  sw          $a1, 0x560($v0)
    ctx->pc = 0x799990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1376), GPR_U32(ctx, 5));
label_799994:
    // 0x799994: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799998:
    // 0x799998: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_79999c:
    // 0x79999c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7999a0:
    // 0x7999a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_7999a4:
    // 0x7999a4: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_7999a8:
    if (ctx->pc == 0x7999A8u) {
        ctx->pc = 0x7999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A4u;
        // 0x7999a8: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999ACu;
        goto label_7999ac;
    }
    ctx->pc = 0x7999A4u;
    {
        const bool branch_taken_0x7999a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A4u;
        // 0x7999a8: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a4) {
            ctx->pc = 0x799AA8u;
            goto label_799aa8;
        }
    }
    ctx->pc = 0x7999ACu;
label_7999ac:
    // 0x7999ac: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7999acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7999b0:
    // 0x7999b0: 0xc0c3ea6  jal         func_30FA98
label_7999b4:
    if (ctx->pc == 0x7999B4u) {
        ctx->pc = 0x7999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B0u;
        // 0x7999b4: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B8u;
        goto label_7999b8;
    }
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7999bc:
    // 0x7999bc: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x7999bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_7999c0:
    // 0x7999c0: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7999c4:
    // 0x7999c4: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_7999c8:
    // 0x7999c8: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
label_7999cc:
    if (ctx->pc == 0x7999CCu) {
        ctx->pc = 0x7999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C8u;
        // 0x7999cc: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D0u;
        goto label_7999d0;
    }
    ctx->pc = 0x7999C8u;
    {
        const bool branch_taken_0x7999c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C8u;
        // 0x7999cc: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c8) {
            ctx->pc = 0x799AA8u;
            goto label_799aa8;
        }
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_7999d4:
    // 0x7999d4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7999d8:
    // 0x7999d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7999dc:
    // 0x7999dc: 0x40f809  jalr        $v0
label_7999e0:
    if (ctx->pc == 0x7999E0u) {
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E4u;
        goto label_7999e4;
    }
    ctx->pc = 0x7999DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7999E4u);
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999DCu, 0x7999E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7999E4u;
label_7999e4:
    // 0x7999e4: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_7999e8:
    // 0x7999e8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_7999ec:
    // 0x7999ec: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_7999f0:
    // 0x7999f0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_7999f4:
    // 0x7999f4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_7999f8:
    // 0x7999f8: 0xc0b0a92  jal         func_2C2A48
label_7999fc:
    if (ctx->pc == 0x7999FCu) {
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A00u;
        goto label_799a00;
    }
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a04:
    // 0x799a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799a08:
    // 0x799a08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799a0c:
    // 0x799a0c: 0xc0b0a92  jal         func_2C2A48
label_799a10:
    if (ctx->pc == 0x799A10u) {
        ctx->pc = 0x799A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A0Cu;
        // 0x799a10: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A14u;
        goto label_799a14;
    }
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a18:
    // 0x799a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799a1c:
    // 0x799a1c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_799a20:
    // 0x799a20: 0xc0b0a92  jal         func_2C2A48
label_799a24:
    if (ctx->pc == 0x799A24u) {
        ctx->pc = 0x799A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A20u;
        // 0x799a24: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A28u;
        goto label_799a28;
    }
    ctx->pc = 0x799A20u;
    SET_GPR_U32(ctx, 31, 0x799A28u);
    ctx->pc = 0x799A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A20u;
    // 0x799a24: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799A20u, 0x799A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a2c:
    // 0x799a2c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_799a30:
    // 0x799a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799a34:
    // 0x799a34: 0xc0b0a92  jal         func_2C2A48
label_799a38:
    if (ctx->pc == 0x799A38u) {
        ctx->pc = 0x799A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A34u;
        // 0x799a38: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A3Cu;
        goto label_799a3c;
    }
    ctx->pc = 0x799A34u;
    SET_GPR_U32(ctx, 31, 0x799A3Cu);
    ctx->pc = 0x799A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A34u;
    // 0x799a38: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799A34u, 0x799A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a40:
    // 0x799a40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799a44:
    // 0x799a44: 0x8ca400c0  lw          $a0, 0xC0($a1)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_799a48:
    // 0x799a48: 0xc06d460  jal         func_1B5180
label_799a4c:
    if (ctx->pc == 0x799A4Cu) {
        ctx->pc = 0x799A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A48u;
        // 0x799a4c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A50u;
        goto label_799a50;
    }
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5180u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a54:
    // 0x799a54: 0x8ca600c0  lw          $a2, 0xC0($a1)
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_799a58:
    // 0x799a58: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_799a5c:
    // 0x799a5c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799a60:
    // 0x799a60: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799a64:
    // 0x799a64: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799a68:
    // 0x799a68: 0x60f809  jalr        $v1
label_799a6c:
    if (ctx->pc == 0x799A6Cu) {
        ctx->pc = 0x799A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A68u;
        // 0x799a6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A70u;
        goto label_799a70;
    }
    ctx->pc = 0x799A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799A70u);
        ctx->pc = 0x799A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A68u;
        // 0x799a6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a74:
    // 0x799a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a78:
    // 0x799a78: 0xc06d464  jal         func_1B5190
label_799a7c:
    if (ctx->pc == 0x799A7Cu) {
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x8c4400c0  lw          $a0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A80u;
        goto label_799a80;
    }
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x8c4400c0  lw          $a0, 0xC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5190u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a84:
    // 0x799a84: 0x240509c1  addiu       $a1, $zero, 0x9C1
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
label_799a88:
    // 0x799a88: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_799a8c:
    // 0x799a8c: 0x8c820600  lw          $v0, 0x600($a0)
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
label_799a90:
    // 0x799a90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_799a94:
    // 0x799a94: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x799a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
label_799a98:
    // 0x799a98: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799a9c:
    // 0x799a9c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_799aa0:
    // 0x799aa0: 0xac450560  sw          $a1, 0x560($v0)
    ctx->pc = 0x799aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1376), GPR_U32(ctx, 5));
label_799aa4:
    // 0x799aa4: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799aa8:
    // 0x799aa8: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_799aac:
    // 0x799aac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799ab0:
    // 0x799ab0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799ab4:
    // 0x799ab4: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_799ab8:
    if (ctx->pc == 0x799AB8u) {
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ABCu;
        goto label_799abc;
    }
    ctx->pc = 0x799AB4u;
    {
        const bool branch_taken_0x799ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab4) {
            ctx->pc = 0x799BB8u;
            goto label_799bb8;
        }
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799ac0:
    // 0x799ac0: 0xc0c3ea6  jal         func_30FA98
label_799ac4:
    if (ctx->pc == 0x799AC4u) {
        ctx->pc = 0x799AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC0u;
        // 0x799ac4: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AC8u;
        goto label_799ac8;
    }
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x240403b3  addiu       $a0, $zero, 0x3B3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799acc:
    // 0x799acc: 0xac620110  sw          $v0, 0x110($v1)
    ctx->pc = 0x799accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
label_799ad0:
    // 0x799ad0: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799ad4:
    // 0x799ad4: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_799ad8:
    // 0x799ad8: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
label_799adc:
    if (ctx->pc == 0x799ADCu) {
        ctx->pc = 0x799ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD8u;
        // 0x799adc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AE0u;
        goto label_799ae0;
    }
    ctx->pc = 0x799AD8u;
    {
        const bool branch_taken_0x799ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD8u;
        // 0x799adc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad8) {
            ctx->pc = 0x799BB8u;
            goto label_799bb8;
        }
    }
    ctx->pc = 0x799AE0u;
label_799ae0:
    // 0x799ae0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799ae4:
    // 0x799ae4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799ae8:
    // 0x799ae8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799aec:
    // 0x799aec: 0x40f809  jalr        $v0
label_799af0:
    if (ctx->pc == 0x799AF0u) {
        ctx->pc = 0x799AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AECu;
        // 0x799af0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AF4u;
        goto label_799af4;
    }
    ctx->pc = 0x799AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799AF4u);
        ctx->pc = 0x799AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AECu;
        // 0x799af0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AECu, 0x799AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799AF4u;
label_799af4:
    // 0x799af4: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799af8:
    // 0x799af8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_799afc:
    // 0x799afc: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799b00:
    // 0x799b00: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_799b04:
    // 0x799b04: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_799b08:
    // 0x799b08: 0xc0b0a92  jal         func_2C2A48
label_799b0c:
    if (ctx->pc == 0x799B0Cu) {
        ctx->pc = 0x799B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B08u;
        // 0x799b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B10u;
        goto label_799b10;
    }
    ctx->pc = 0x799B08u;
    SET_GPR_U32(ctx, 31, 0x799B10u);
    ctx->pc = 0x799B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B08u;
    // 0x799b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799B08u, 0x799B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B10u;
label_799b10:
    // 0x799b10: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b14:
    // 0x799b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799b18:
    // 0x799b18: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_799b1c:
    // 0x799b1c: 0xc0b0a92  jal         func_2C2A48
label_799b20:
    if (ctx->pc == 0x799B20u) {
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B24u;
        goto label_799b24;
    }
    ctx->pc = 0x799B1Cu;
    SET_GPR_U32(ctx, 31, 0x799B24u);
    ctx->pc = 0x799B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B1Cu;
    // 0x799b20: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799B1Cu, 0x799B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b28:
    // 0x799b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799b2c:
    // 0x799b2c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_799b30:
    // 0x799b30: 0xc0b0a92  jal         func_2C2A48
label_799b34:
    if (ctx->pc == 0x799B34u) {
        ctx->pc = 0x799B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B30u;
        // 0x799b34: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B38u;
        goto label_799b38;
    }
    ctx->pc = 0x799B30u;
    SET_GPR_U32(ctx, 31, 0x799B38u);
    ctx->pc = 0x799B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B30u;
    // 0x799b34: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799B30u, 0x799B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B38u;
label_799b38:
    // 0x799b38: 0x8e26ae80  lw          $a2, -0x5180($s1)
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b3c:
    // 0x799b3c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_799b40:
    // 0x799b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799b44:
    // 0x799b44: 0xc0b0a92  jal         func_2C2A48
label_799b48:
    if (ctx->pc == 0x799B48u) {
        ctx->pc = 0x799B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B44u;
        // 0x799b48: 0x24c60100  addiu       $a2, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B4Cu;
        goto label_799b4c;
    }
    ctx->pc = 0x799B44u;
    SET_GPR_U32(ctx, 31, 0x799B4Cu);
    ctx->pc = 0x799B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B44u;
    // 0x799b48: 0x24c60100  addiu       $a2, $a2, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799B44u, 0x799B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b50:
    // 0x799b50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799b54:
    // 0x799b54: 0x8ca40110  lw          $a0, 0x110($a1)
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
label_799b58:
    // 0x799b58: 0xc06d460  jal         func_1B5180
label_799b5c:
    if (ctx->pc == 0x799B5Cu) {
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B60u;
        goto label_799b60;
    }
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5180u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x8e25ae80  lw          $a1, -0x5180($s1)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b64:
    // 0x799b64: 0x8ca60110  lw          $a2, 0x110($a1)
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
label_799b68:
    // 0x799b68: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_799b6c:
    // 0x799b6c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799b70:
    // 0x799b70: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799b74:
    // 0x799b74: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799b78:
    // 0x799b78: 0x60f809  jalr        $v1
label_799b7c:
    if (ctx->pc == 0x799B7Cu) {
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B80u;
        goto label_799b80;
    }
    ctx->pc = 0x799B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799B80u);
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B78u, 0x799B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799B80u;
label_799b80:
    // 0x799b80: 0x8e22ae80  lw          $v0, -0x5180($s1)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b84:
    // 0x799b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799b88:
    // 0x799b88: 0xc06d464  jal         func_1B5190
label_799b8c:
    if (ctx->pc == 0x799B8Cu) {
        ctx->pc = 0x799B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B88u;
        // 0x799b8c: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B90u;
        goto label_799b90;
    }
    ctx->pc = 0x799B88u;
    SET_GPR_U32(ctx, 31, 0x799B90u);
    ctx->pc = 0x799B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B88u;
    // 0x799b8c: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5190u, 0x799B88u, 0x799B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B90u;
label_799b90:
    // 0x799b90: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799b94:
    // 0x799b94: 0x240509c1  addiu       $a1, $zero, 0x9C1
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
label_799b98:
    // 0x799b98: 0x8c640110  lw          $a0, 0x110($v1)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_799b9c:
    // 0x799b9c: 0x8c820600  lw          $v0, 0x600($a0)
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
label_799ba0:
    // 0x799ba0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_799ba4:
    // 0x799ba4: 0xac820600  sw          $v0, 0x600($a0)
    ctx->pc = 0x799ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 2));
label_799ba8:
    // 0x799ba8: 0x8e23ae80  lw          $v1, -0x5180($s1)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946432)));
label_799bac:
    // 0x799bac: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_799bb0:
    // 0x799bb0: 0xac450560  sw          $a1, 0x560($v0)
    ctx->pc = 0x799bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1376), GPR_U32(ctx, 5));
label_799bb4:
    // 0x799bb4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799bb8:
    // 0x799bb8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799bbc:
    // 0x799bbc: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_799bc0:
    // 0x799bc0: 0x24a59be8  addiu       $a1, $a1, -0x6418
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941672));
label_799bc4:
    // 0x799bc4: 0xc0b0e24  jal         func_2C3890
label_799bc8:
    if (ctx->pc == 0x799BC8u) {
        ctx->pc = 0x799BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC4u;
        // 0x799bc8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BCCu;
        goto label_799bcc;
    }
    ctx->pc = 0x799BC4u;
    SET_GPR_U32(ctx, 31, 0x799BCCu);
    ctx->pc = 0x799BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC4u;
    // 0x799bc8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799BC4u, 0x799BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BCCu;
label_799bcc:
    // 0x799bcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799bd0:
    // 0x799bd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799bd4:
    // 0x799bd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799bd8:
    // 0x799bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799bdc:
    // 0x799bdc: 0x3e00008  jr          $ra
label_799be0:
    if (ctx->pc == 0x799BE0u) {
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE4u;
        goto label_799be4;
    }
    ctx->pc = 0x799BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x0  nop
    ctx->pc = 0x799be4u;
    // NOP
    ctx->pc = 0x799be8u;
}
} // namespace gh_r300
