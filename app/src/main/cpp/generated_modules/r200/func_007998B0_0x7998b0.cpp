#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_007998B0
// Address: 0x7998b0 - 0x799c60
void func_007998B0_0x7998b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007998B0_0x7998b0");
#endif

    switch (ctx->pc) {
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
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        default: break;
    }

    ctx->pc = 0x7998b0u;

label_7998b0:
    // 0x7998b0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_7998b4:
    // 0x7998b4: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x7998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_7998b8:
    // 0x7998b8: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x7998b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_7998bc:
    // 0x7998bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7998bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7998c0:
    // 0x7998c0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x7998c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_7998c4:
    // 0x7998c4: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x7998c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_7998c8:
    // 0x7998c8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x7998c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_7998cc:
    // 0x7998cc: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x7998ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_7998d0:
    // 0x7998d0: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x7998d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_7998d4:
    // 0x7998d4: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x7998d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_7998d8:
    // 0x7998d8: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_7998dc:
    if (ctx->pc == 0x7998DCu) {
        ctx->pc = 0x7998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D8u;
        // 0x7998dc: 0xffbf00c0  sd          $ra, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998E0u;
        goto label_7998e0;
    }
    ctx->pc = 0x7998D8u;
    {
        const bool branch_taken_0x7998d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D8u;
        // 0x7998dc: 0xffbf00c0  sd          $ra, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d8) {
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x7998E0u;
label_7998e0:
    // 0x7998e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7998e4:
    // 0x7998e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7998e8:
    // 0x7998e8: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_7998ec:
    // 0x7998ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7998f0:
    // 0x7998f0: 0xc0b016c  jal         func_2C05B0
label_7998f4:
    if (ctx->pc == 0x7998F4u) {
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998F8u;
        goto label_7998f8;
    }
    ctx->pc = 0x7998F0u;
    SET_GPR_U32(ctx, 31, 0x7998F8u);
    ctx->pc = 0x7998F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F0u;
    // 0x7998f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7998F0u, 0x7998F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7998f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_7998fc:
    // 0x7998fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799900:
    // 0x799900: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799904:
    // 0x799904: 0x2452ea60  addiu       $s2, $v0, -0x15A0
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_799908:
    // 0x799908: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79990c:
    // 0x79990c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799910:
    // 0x799910: 0xc0b0a92  jal         func_2C2A48
label_799914:
    if (ctx->pc == 0x799914u) {
        ctx->pc = 0x799914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799910u;
        // 0x799914: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799918u;
        goto label_799918;
    }
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_79991c:
    // 0x79991c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799920:
    // 0x799920: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_799924:
    // 0x799924: 0x8c44aac0  lw          $a0, -0x5540($v0)
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945472)));
label_799928:
    // 0x799928: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79992c:
    // 0x79992c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799930:
    // 0x799930: 0x247164f0  addiu       $s1, $v1, 0x64F0
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
label_799934:
    // 0x799934: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x799934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_799938:
    // 0x799938: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79993c:
    // 0x79993c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799940:
    // 0x799940: 0xc0a4230  jal         func_2908C0
label_799944:
    if (ctx->pc == 0x799944u) {
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x26106ab0  addiu       $s0, $s0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799948u;
        goto label_799948;
    }
    ctx->pc = 0x799940u;
    SET_GPR_U32(ctx, 31, 0x799948u);
    ctx->pc = 0x799944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799940u;
    // 0x799944: 0x26106ab0  addiu       $s0, $s0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x799940u, 0x799948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_79994c:
    // 0x79994c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799950:
    // 0x799950: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_799954:
    // 0x799954: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799954u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_799958:
    // 0x799958: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79995c:
    // 0x79995c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799960:
    // 0x799960: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x799960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_799964:
    // 0x799964: 0xc0a54b4  jal         func_2952D0
label_799968:
    if (ctx->pc == 0x799968u) {
        ctx->pc = 0x799968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799964u;
        // 0x799968: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79996Cu;
        goto label_79996c;
    }
    ctx->pc = 0x799964u;
    SET_GPR_U32(ctx, 31, 0x79996Cu);
    ctx->pc = 0x799968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799964u;
    // 0x799968: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799964u, 0x79996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79996Cu;
label_79996c:
    // 0x79996c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79996cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799970:
    // 0x799970: 0xc0a54b4  jal         func_2952D0
label_799974:
    if (ctx->pc == 0x799974u) {
        ctx->pc = 0x799974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799970u;
        // 0x799974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799978u;
        goto label_799978;
    }
    ctx->pc = 0x799970u;
    SET_GPR_U32(ctx, 31, 0x799978u);
    ctx->pc = 0x799974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799970u;
    // 0x799974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799970u, 0x799978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799978u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79997c:
    // 0x79997c: 0xc0a54b4  jal         func_2952D0
label_799980:
    if (ctx->pc == 0x799980u) {
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799984u;
        goto label_799984;
    }
    ctx->pc = 0x79997Cu;
    SET_GPR_U32(ctx, 31, 0x799984u);
    ctx->pc = 0x799980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79997Cu;
    // 0x799980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79997Cu, 0x799984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_799988:
    // 0x799988: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_79998c:
    // 0x79998c: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x79998cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
label_799990:
    // 0x799990: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_799994:
    // 0x799994: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x799994u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_799998:
    // 0x799998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79999c:
    // 0x79999c: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x79999cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_7999a0:
    // 0x7999a0: 0xc0a54b4  jal         func_2952D0
label_7999a4:
    if (ctx->pc == 0x7999A4u) {
        ctx->pc = 0x7999A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A0u;
        // 0x7999a4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999A8u;
        goto label_7999a8;
    }
    ctx->pc = 0x7999A0u;
    SET_GPR_U32(ctx, 31, 0x7999A8u);
    ctx->pc = 0x7999A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A0u;
    // 0x7999a4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999A0u, 0x7999A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x7999a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_7999ac:
    // 0x7999ac: 0xc0a54b4  jal         func_2952D0
label_7999b0:
    if (ctx->pc == 0x7999B0u) {
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B4u;
        goto label_7999b4;
    }
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x93a50060  lbu         $a1, 0x60($sp)
    ctx->pc = 0x7999b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_7999b8:
    // 0x7999b8: 0xc0a54b4  jal         func_2952D0
label_7999bc:
    if (ctx->pc == 0x7999BCu) {
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C0u;
        goto label_7999c0;
    }
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_7999c4:
    // 0x7999c4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_7999c8:
    // 0x7999c8: 0xa3a30070  sb          $v1, 0x70($sp)
    ctx->pc = 0x7999c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 3));
label_7999cc:
    // 0x7999cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7999d0:
    // 0x7999d0: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x7999d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
label_7999d4:
    // 0x7999d4: 0xc0a54b4  jal         func_2952D0
label_7999d8:
    if (ctx->pc == 0x7999D8u) {
        ctx->pc = 0x7999D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D4u;
        // 0x7999d8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999DCu;
        goto label_7999dc;
    }
    ctx->pc = 0x7999D4u;
    SET_GPR_U32(ctx, 31, 0x7999DCu);
    ctx->pc = 0x7999D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D4u;
    // 0x7999d8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999D4u, 0x7999DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999DCu;
label_7999dc:
    // 0x7999dc: 0x93a50080  lbu         $a1, 0x80($sp)
    ctx->pc = 0x7999dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_7999e0:
    // 0x7999e0: 0xc0a54b4  jal         func_2952D0
label_7999e4:
    if (ctx->pc == 0x7999E4u) {
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E8u;
        goto label_7999e8;
    }
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x7999e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_7999ec:
    // 0x7999ec: 0xc0a421a  jal         func_290868
label_7999f0:
    if (ctx->pc == 0x7999F0u) {
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999F4u;
        goto label_7999f4;
    }
    ctx->pc = 0x7999ECu;
    SET_GPR_U32(ctx, 31, 0x7999F4u);
    ctx->pc = 0x7999F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ECu;
    // 0x7999f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7999ECu, 0x7999F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F4u;
label_7999f4:
    // 0x7999f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7999f8:
    if (ctx->pc == 0x7999F8u) {
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999FCu;
        goto label_7999fc;
    }
    ctx->pc = 0x7999F4u;
    {
        const bool branch_taken_0x7999f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f4) {
            ctx->pc = 0x799A04u;
            goto label_799a04;
        }
    }
    ctx->pc = 0x7999FCu;
label_7999fc:
    // 0x7999fc: 0xc0a240e  jal         func_289038
label_799a00:
    if (ctx->pc == 0x799A00u) {
        ctx->pc = 0x799A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999FCu;
        // 0x799a00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A04u;
        goto label_799a04;
    }
    ctx->pc = 0x7999FCu;
    SET_GPR_U32(ctx, 31, 0x799A04u);
    ctx->pc = 0x799A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999FCu;
    // 0x799a00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x7999FCu, 0x799A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A04u;
label_799a04:
    // 0x799a04: 0x93a50080  lbu         $a1, 0x80($sp)
    ctx->pc = 0x799a04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_799a08:
    // 0x799a08: 0xc0a421a  jal         func_290868
label_799a0c:
    if (ctx->pc == 0x799A0Cu) {
        ctx->pc = 0x799A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A08u;
        // 0x799a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A10u;
        goto label_799a10;
    }
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_799a14:
    if (ctx->pc == 0x799A14u) {
        ctx->pc = 0x799A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A10u;
        // 0x799a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A18u;
        goto label_799a18;
    }
    ctx->pc = 0x799A10u;
    {
        const bool branch_taken_0x799a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A10u;
        // 0x799a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a10) {
            ctx->pc = 0x799A20u;
            goto label_799a20;
        }
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0xc0a240e  jal         func_289038
label_799a1c:
    if (ctx->pc == 0x799A1Cu) {
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A20u;
        goto label_799a20;
    }
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0xc0a572a  jal         func_295CA8
label_799a24:
    if (ctx->pc == 0x799A24u) {
        ctx->pc = 0x799A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A20u;
        // 0x799a24: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A28u;
        goto label_799a28;
    }
    ctx->pc = 0x799A20u;
    SET_GPR_U32(ctx, 31, 0x799A28u);
    ctx->pc = 0x799A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A20u;
    // 0x799a24: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799A20u, 0x799A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_799a2c:
    if (ctx->pc == 0x799A2Cu) {
        ctx->pc = 0x799A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A28u;
        // 0x799a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A30u;
        goto label_799a30;
    }
    ctx->pc = 0x799A28u;
    {
        const bool branch_taken_0x799a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A28u;
        // 0x799a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a28) {
            ctx->pc = 0x799A40u;
            goto label_799a40;
        }
    }
    ctx->pc = 0x799A30u;
label_799a30:
    // 0x799a30: 0xc0b0a54  jal         func_2C2950
label_799a34:
    if (ctx->pc == 0x799A34u) {
        ctx->pc = 0x799A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A30u;
        // 0x799a34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A38u;
        goto label_799a38;
    }
    ctx->pc = 0x799A30u;
    SET_GPR_U32(ctx, 31, 0x799A38u);
    ctx->pc = 0x799A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A30u;
    // 0x799a34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799A30u, 0x799A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A38u;
label_799a38:
    // 0x799a38: 0x10000004  b           . + 4 + (0x4 << 2)
label_799a3c:
    if (ctx->pc == 0x799A3Cu) {
        ctx->pc = 0x799A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A38u;
        // 0x799a3c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A40u;
        goto label_799a40;
    }
    ctx->pc = 0x799A38u;
    {
        const bool branch_taken_0x799a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A38u;
        // 0x799a3c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a38) {
            ctx->pc = 0x799A4Cu;
            goto label_799a4c;
        }
    }
    ctx->pc = 0x799A40u;
label_799a40:
    // 0x799a40: 0xc0b0a7e  jal         func_2C29F8
label_799a44:
    if (ctx->pc == 0x799A44u) {
        ctx->pc = 0x799A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A40u;
        // 0x799a44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A48u;
        goto label_799a48;
    }
    ctx->pc = 0x799A40u;
    SET_GPR_U32(ctx, 31, 0x799A48u);
    ctx->pc = 0x799A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A40u;
    // 0x799a44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799A40u, 0x799A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A48u;
label_799a48:
    // 0x799a48: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_799a4c:
    // 0x799a4c: 0x26906ab0  addiu       $s0, $s4, 0x6AB0
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
label_799a50:
    // 0x799a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799a54:
    // 0x799a54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_799a58:
    // 0x799a58: 0xc0a54b4  jal         func_2952D0
label_799a5c:
    if (ctx->pc == 0x799A5Cu) {
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0xa3a20090  sb          $v0, 0x90($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A60u;
        goto label_799a60;
    }
    ctx->pc = 0x799A58u;
    SET_GPR_U32(ctx, 31, 0x799A60u);
    ctx->pc = 0x799A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A58u;
    // 0x799a5c: 0xa3a20090  sb          $v0, 0x90($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A58u, 0x799A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_799a64:
    // 0x799a64: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_799a68:
    // 0x799a68: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_799a6c:
    // 0x799a6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799a70:
    // 0x799a70: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_799a74:
    // 0x799a74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_799a78:
    if (ctx->pc == 0x799A78u) {
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A7Cu;
        goto label_799a7c;
    }
    ctx->pc = 0x799A74u;
    {
        const bool branch_taken_0x799a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a74) {
            ctx->pc = 0x799AB8u;
            goto label_799ab8;
        }
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_799a80:
    // 0x799a80: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_799a84:
    // 0x799a84: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x799a84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
label_799a88:
    // 0x799a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799a8c:
    // 0x799a8c: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x799a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
label_799a90:
    // 0x799a90: 0xc0a54b4  jal         func_2952D0
label_799a94:
    if (ctx->pc == 0x799A94u) {
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A98u;
        goto label_799a98;
    }
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x93a500b0  lbu         $a1, 0xB0($sp)
    ctx->pc = 0x799a98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_799a9c:
    // 0x799a9c: 0xc0a54b4  jal         func_2952D0
label_799aa0:
    if (ctx->pc == 0x799AA0u) {
        ctx->pc = 0x799AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A9Cu;
        // 0x799aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AA4u;
        goto label_799aa4;
    }
    ctx->pc = 0x799A9Cu;
    SET_GPR_U32(ctx, 31, 0x799AA4u);
    ctx->pc = 0x799AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A9Cu;
    // 0x799aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A9Cu, 0x799AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
label_799aa8:
    // 0x799aa8: 0xc0b0a7e  jal         func_2C29F8
label_799aac:
    if (ctx->pc == 0x799AACu) {
        ctx->pc = 0x799AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA8u;
        // 0x799aac: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AB0u;
        goto label_799ab0;
    }
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x10000005  b           . + 4 + (0x5 << 2)
label_799ab4:
    if (ctx->pc == 0x799AB4u) {
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x26b0ea60  addiu       $s0, $s5, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AB8u;
        goto label_799ab8;
    }
    ctx->pc = 0x799AB0u;
    {
        const bool branch_taken_0x799ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x26b0ea60  addiu       $s0, $s5, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab0) {
            ctx->pc = 0x799AC8u;
            goto label_799ac8;
        }
    }
    ctx->pc = 0x799AB8u;
label_799ab8:
    // 0x799ab8: 0x26a4ea60  addiu       $a0, $s5, -0x15A0
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
label_799abc:
    // 0x799abc: 0xc0b0a54  jal         func_2C2950
label_799ac0:
    if (ctx->pc == 0x799AC0u) {
        ctx->pc = 0x799AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ABCu;
        // 0x799ac0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AC4u;
        goto label_799ac4;
    }
    ctx->pc = 0x799ABCu;
    SET_GPR_U32(ctx, 31, 0x799AC4u);
    ctx->pc = 0x799AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ABCu;
    // 0x799ac0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799ABCu, 0x799AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC4u;
label_799ac4:
    // 0x799ac4: 0x26b0ea60  addiu       $s0, $s5, -0x15A0
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
label_799ac8:
    // 0x799ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799acc:
    // 0x799acc: 0xc0b0a7e  jal         func_2C29F8
label_799ad0:
    if (ctx->pc == 0x799AD0u) {
        ctx->pc = 0x799AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ACCu;
        // 0x799ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AD4u;
        goto label_799ad4;
    }
    ctx->pc = 0x799ACCu;
    SET_GPR_U32(ctx, 31, 0x799AD4u);
    ctx->pc = 0x799AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ACCu;
    // 0x799ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799ACCu, 0x799AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD4u;
label_799ad4:
    // 0x799ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ad8:
    // 0x799ad8: 0xc0b0a7e  jal         func_2C29F8
label_799adc:
    if (ctx->pc == 0x799ADCu) {
        ctx->pc = 0x799ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD8u;
        // 0x799adc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AE0u;
        goto label_799ae0;
    }
    ctx->pc = 0x799AD8u;
    SET_GPR_U32(ctx, 31, 0x799AE0u);
    ctx->pc = 0x799ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD8u;
    // 0x799adc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799AD8u, 0x799AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE0u;
label_799ae0:
    // 0x799ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ae4:
    // 0x799ae4: 0xc0b0a7e  jal         func_2C29F8
label_799ae8:
    if (ctx->pc == 0x799AE8u) {
        ctx->pc = 0x799AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE4u;
        // 0x799ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AECu;
        goto label_799aec;
    }
    ctx->pc = 0x799AE4u;
    SET_GPR_U32(ctx, 31, 0x799AECu);
    ctx->pc = 0x799AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE4u;
    // 0x799ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799AE4u, 0x799AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AECu;
label_799aec:
    // 0x799aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799af0:
    // 0x799af0: 0xc0b0a7e  jal         func_2C29F8
label_799af4:
    if (ctx->pc == 0x799AF4u) {
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AF8u;
        goto label_799af8;
    }
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_799afc:
    // 0x799afc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_799b00:
    // 0x799b00: 0x8c837a8c  lw          $v1, 0x7A8C($a0)
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31372)));
label_799b04:
    // 0x799b04: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_799b08:
    // 0x799b08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_799b0c:
    // 0x799b0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x799b0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799b10:
    // 0x799b10: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_799b14:
    // 0x799b14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799b18:
    // 0x799b18: 0x16600028  bnez        $s3, . + 4 + (0x28 << 2)
label_799b1c:
    if (ctx->pc == 0x799B1Cu) {
        ctx->pc = 0x799B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B18u;
        // 0x799b1c: 0xac837a8c  sw          $v1, 0x7A8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B20u;
        goto label_799b20;
    }
    ctx->pc = 0x799B18u;
    {
        const bool branch_taken_0x799b18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B18u;
        // 0x799b1c: 0xac837a8c  sw          $v1, 0x7A8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b18) {
            ctx->pc = 0x799BBCu;
            goto label_799bbc;
        }
    }
    ctx->pc = 0x799B20u;
label_799b20:
    // 0x799b20: 0x8ef0aac0  lw          $s0, -0x5540($s7)
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945472)));
label_799b24:
    // 0x799b24: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799b28:
    // 0x799b28: 0x240403bd  addiu       $a0, $zero, 0x3BD
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 957));
label_799b2c:
    // 0x799b2c: 0xc0c3ea6  jal         func_30FA98
label_799b30:
    if (ctx->pc == 0x799B30u) {
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B34u;
        goto label_799b34;
    }
    ctx->pc = 0x799B2Cu;
    SET_GPR_U32(ctx, 31, 0x799B34u);
    ctx->pc = 0x799B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B2Cu;
    // 0x799b30: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799B2Cu, 0x799B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_799b38:
    // 0x799b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b3c:
    // 0x799b3c: 0x2672aaa0  addiu       $s2, $s3, -0x5560
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945440));
label_799b40:
    // 0x799b40: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_799b44:
    if (ctx->pc == 0x799B44u) {
        ctx->pc = 0x799B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B40u;
        // 0x799b44: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B48u;
        goto label_799b48;
    }
    ctx->pc = 0x799B40u;
    {
        const bool branch_taken_0x799b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B40u;
        // 0x799b44: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b40) {
            ctx->pc = 0x799B94u;
            goto label_799b94;
        }
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799b4c:
    // 0x799b4c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799b50:
    // 0x799b50: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799b54:
    // 0x799b54: 0x40f809  jalr        $v0
label_799b58:
    if (ctx->pc == 0x799B58u) {
        ctx->pc = 0x799B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B54u;
        // 0x799b58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B5Cu;
        goto label_799b5c;
    }
    ctx->pc = 0x799B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799B5Cu);
        ctx->pc = 0x799B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B54u;
        // 0x799b58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B54u, 0x799B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799B5Cu;
label_799b5c:
    // 0x799b5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_799b60:
    // 0x799b60: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_799b64:
    // 0x799b64: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_799b68:
    if (ctx->pc == 0x799B68u) {
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0xc660aaa0  lwc1        $f0, -0x5560($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294945440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B6Cu;
        goto label_799b6c;
    }
    ctx->pc = 0x799B64u;
    {
        const bool branch_taken_0x799b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0xc660aaa0  lwc1        $f0, -0x5560($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294945440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b64) {
            ctx->pc = 0x799B80u;
            goto label_799b80;
        }
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_799b70:
    // 0x799b70: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x799b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799b74:
    // 0x799b74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799b78:
    // 0x799b78: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x799b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799b7c:
    // 0x799b7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799b80:
    // 0x799b80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_799b84:
    // 0x799b84: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x799b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_799b88:
    // 0x799b88: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_799b8c:
    // 0x799b8c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_799b90:
    // 0x799b90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_799b94:
    // 0x799b94: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_799b98:
    // 0x799b98: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_799b9c:
    // 0x799b9c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x799b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_799ba0:
    // 0x799ba0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_799ba4:
    // 0x799ba4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x799ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_799ba8:
    // 0x799ba8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_799bac:
    // 0x799bac: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x799bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_799bb0:
    // 0x799bb0: 0x8e827a8c  lw          $v0, 0x7A8C($s4)
    ctx->pc = 0x799bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31372)));
label_799bb4:
    // 0x799bb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_799bb8:
    // 0x799bb8: 0xae827a8c  sw          $v0, 0x7A8C($s4)
    ctx->pc = 0x799bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 31372), GPR_U32(ctx, 2));
label_799bbc:
    // 0x799bbc: 0x26b0ea60  addiu       $s0, $s5, -0x15A0
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961760));
label_799bc0:
    // 0x799bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799bc4:
    // 0x799bc4: 0xc0b0ab8  jal         func_2C2AE0
label_799bc8:
    if (ctx->pc == 0x799BC8u) {
        ctx->pc = 0x799BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC4u;
        // 0x799bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BCCu;
        goto label_799bcc;
    }
    ctx->pc = 0x799BC4u;
    SET_GPR_U32(ctx, 31, 0x799BCCu);
    ctx->pc = 0x799BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC4u;
    // 0x799bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799BC4u, 0x799BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BCCu;
label_799bcc:
    // 0x799bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799bd0:
    // 0x799bd0: 0xc0b0a68  jal         func_2C29A0
label_799bd4:
    if (ctx->pc == 0x799BD4u) {
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD8u;
        goto label_799bd8;
    }
    ctx->pc = 0x799BD0u;
    SET_GPR_U32(ctx, 31, 0x799BD8u);
    ctx->pc = 0x799BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD0u;
    // 0x799bd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799BD0u, 0x799BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0x8ec38658  lw          $v1, -0x79A8($s6)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
label_799bdc:
    // 0x799bdc: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_799be0:
    // 0x799be0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799be4:
    // 0x799be4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_799be8:
    // 0x799be8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_799bec:
    if (ctx->pc == 0x799BECu) {
        ctx->pc = 0x799BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE8u;
        // 0x799bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF0u;
        goto label_799bf0;
    }
    ctx->pc = 0x799BE8u;
    {
        const bool branch_taken_0x799be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE8u;
        // 0x799bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be8) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0xc0b0ab8  jal         func_2C2AE0
label_799bf4:
    if (ctx->pc == 0x799BF4u) {
        ctx->pc = 0x799BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF0u;
        // 0x799bf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF8u;
        goto label_799bf8;
    }
    ctx->pc = 0x799BF0u;
    SET_GPR_U32(ctx, 31, 0x799BF8u);
    ctx->pc = 0x799BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF0u;
    // 0x799bf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799BF0u, 0x799BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF8u;
label_799bf8:
    // 0x799bf8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799bfc:
    // 0x799bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799c00:
    // 0x799c00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799c04:
    // 0x799c04: 0x24e7a3c0  addiu       $a3, $a3, -0x5C40
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943680));
label_799c08:
    // 0x799c08: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799c0c:
    // 0x799c0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799c0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c10:
    // 0x799c10: 0xc0b09d4  jal         func_2C2750
label_799c14:
    if (ctx->pc == 0x799C14u) {
        ctx->pc = 0x799C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C10u;
        // 0x799c14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C18u;
        goto label_799c18;
    }
    ctx->pc = 0x799C10u;
    SET_GPR_U32(ctx, 31, 0x799C18u);
    ctx->pc = 0x799C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C10u;
    // 0x799c14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x799C10u, 0x799C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C18u;
label_799c18:
    // 0x799c18: 0xc1e697e  jal         func_79A5F8
label_799c1c:
    if (ctx->pc == 0x799C1Cu) {
        ctx->pc = 0x799C20u;
        goto label_799c20;
    }
    ctx->pc = 0x799C18u;
    SET_GPR_U32(ctx, 31, 0x799C20u);
    ctx->pc = 0x79A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5F8u, 0x799C18u, 0x799C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799c24:
    // 0x799c24: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_799c28:
    // 0x799c28: 0xc0b5692  jal         func_2D5A48
label_799c2c:
    if (ctx->pc == 0x799C2Cu) {
        ctx->pc = 0x799C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C28u;
        // 0x799c2c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C30u;
        goto label_799c30;
    }
    ctx->pc = 0x799C28u;
    SET_GPR_U32(ctx, 31, 0x799C30u);
    ctx->pc = 0x799C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C28u;
    // 0x799c2c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C28u, 0x799C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C30u;
label_799c30:
    // 0x799c30: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x799c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_799c34:
    // 0x799c34: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x799c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_799c38:
    // 0x799c38: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x799c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_799c3c:
    // 0x799c3c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x799c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_799c40:
    // 0x799c40: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x799c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_799c44:
    // 0x799c44: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x799c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_799c48:
    // 0x799c48: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x799c48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_799c4c:
    // 0x799c4c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x799c4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_799c50:
    // 0x799c50: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x799c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_799c54:
    // 0x799c54: 0x3e00008  jr          $ra
label_799c58:
    if (ctx->pc == 0x799C58u) {
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C5Cu;
        goto label_799c5c;
    }
    ctx->pc = 0x799C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C5Cu;
label_799c5c:
    // 0x799c5c: 0x0  nop
    ctx->pc = 0x799c5cu;
    // NOP
    ctx->pc = 0x799c60u;
}
} // namespace gh_r200
