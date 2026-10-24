#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0010DE70
// Address: 0x10de70 - 0x10e230
void func_0010DE70_0x10de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010DE70_0x10de70");
#endif

    switch (ctx->pc) {
        case 0x10de70u: goto label_10de70;
        case 0x10de74u: goto label_10de74;
        case 0x10de78u: goto label_10de78;
        case 0x10de7cu: goto label_10de7c;
        case 0x10de80u: goto label_10de80;
        case 0x10de84u: goto label_10de84;
        case 0x10de88u: goto label_10de88;
        case 0x10de8cu: goto label_10de8c;
        case 0x10de90u: goto label_10de90;
        case 0x10de94u: goto label_10de94;
        case 0x10de98u: goto label_10de98;
        case 0x10de9cu: goto label_10de9c;
        case 0x10dea0u: goto label_10dea0;
        case 0x10dea4u: goto label_10dea4;
        case 0x10dea8u: goto label_10dea8;
        case 0x10deacu: goto label_10deac;
        case 0x10deb0u: goto label_10deb0;
        case 0x10deb4u: goto label_10deb4;
        case 0x10deb8u: goto label_10deb8;
        case 0x10debcu: goto label_10debc;
        case 0x10dec0u: goto label_10dec0;
        case 0x10dec4u: goto label_10dec4;
        case 0x10dec8u: goto label_10dec8;
        case 0x10deccu: goto label_10decc;
        case 0x10ded0u: goto label_10ded0;
        case 0x10ded4u: goto label_10ded4;
        case 0x10ded8u: goto label_10ded8;
        case 0x10dedcu: goto label_10dedc;
        case 0x10dee0u: goto label_10dee0;
        case 0x10dee4u: goto label_10dee4;
        case 0x10dee8u: goto label_10dee8;
        case 0x10deecu: goto label_10deec;
        case 0x10def0u: goto label_10def0;
        case 0x10def4u: goto label_10def4;
        case 0x10def8u: goto label_10def8;
        case 0x10defcu: goto label_10defc;
        case 0x10df00u: goto label_10df00;
        case 0x10df04u: goto label_10df04;
        case 0x10df08u: goto label_10df08;
        case 0x10df0cu: goto label_10df0c;
        case 0x10df10u: goto label_10df10;
        case 0x10df14u: goto label_10df14;
        case 0x10df18u: goto label_10df18;
        case 0x10df1cu: goto label_10df1c;
        case 0x10df20u: goto label_10df20;
        case 0x10df24u: goto label_10df24;
        case 0x10df28u: goto label_10df28;
        case 0x10df2cu: goto label_10df2c;
        case 0x10df30u: goto label_10df30;
        case 0x10df34u: goto label_10df34;
        case 0x10df38u: goto label_10df38;
        case 0x10df3cu: goto label_10df3c;
        case 0x10df40u: goto label_10df40;
        case 0x10df44u: goto label_10df44;
        case 0x10df48u: goto label_10df48;
        case 0x10df4cu: goto label_10df4c;
        case 0x10df50u: goto label_10df50;
        case 0x10df54u: goto label_10df54;
        case 0x10df58u: goto label_10df58;
        case 0x10df5cu: goto label_10df5c;
        case 0x10df60u: goto label_10df60;
        case 0x10df64u: goto label_10df64;
        case 0x10df68u: goto label_10df68;
        case 0x10df6cu: goto label_10df6c;
        case 0x10df70u: goto label_10df70;
        case 0x10df74u: goto label_10df74;
        case 0x10df78u: goto label_10df78;
        case 0x10df7cu: goto label_10df7c;
        case 0x10df80u: goto label_10df80;
        case 0x10df84u: goto label_10df84;
        case 0x10df88u: goto label_10df88;
        case 0x10df8cu: goto label_10df8c;
        case 0x10df90u: goto label_10df90;
        case 0x10df94u: goto label_10df94;
        case 0x10df98u: goto label_10df98;
        case 0x10df9cu: goto label_10df9c;
        case 0x10dfa0u: goto label_10dfa0;
        case 0x10dfa4u: goto label_10dfa4;
        case 0x10dfa8u: goto label_10dfa8;
        case 0x10dfacu: goto label_10dfac;
        case 0x10dfb0u: goto label_10dfb0;
        case 0x10dfb4u: goto label_10dfb4;
        case 0x10dfb8u: goto label_10dfb8;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfc0u: goto label_10dfc0;
        case 0x10dfc4u: goto label_10dfc4;
        case 0x10dfc8u: goto label_10dfc8;
        case 0x10dfccu: goto label_10dfcc;
        case 0x10dfd0u: goto label_10dfd0;
        case 0x10dfd4u: goto label_10dfd4;
        case 0x10dfd8u: goto label_10dfd8;
        case 0x10dfdcu: goto label_10dfdc;
        case 0x10dfe0u: goto label_10dfe0;
        case 0x10dfe4u: goto label_10dfe4;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10dfecu: goto label_10dfec;
        case 0x10dff0u: goto label_10dff0;
        case 0x10dff4u: goto label_10dff4;
        case 0x10dff8u: goto label_10dff8;
        case 0x10dffcu: goto label_10dffc;
        case 0x10e000u: goto label_10e000;
        case 0x10e004u: goto label_10e004;
        case 0x10e008u: goto label_10e008;
        case 0x10e00cu: goto label_10e00c;
        case 0x10e010u: goto label_10e010;
        case 0x10e014u: goto label_10e014;
        case 0x10e018u: goto label_10e018;
        case 0x10e01cu: goto label_10e01c;
        case 0x10e020u: goto label_10e020;
        case 0x10e024u: goto label_10e024;
        case 0x10e028u: goto label_10e028;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e030u: goto label_10e030;
        case 0x10e034u: goto label_10e034;
        case 0x10e038u: goto label_10e038;
        case 0x10e03cu: goto label_10e03c;
        case 0x10e040u: goto label_10e040;
        case 0x10e044u: goto label_10e044;
        case 0x10e048u: goto label_10e048;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e050u: goto label_10e050;
        case 0x10e054u: goto label_10e054;
        case 0x10e058u: goto label_10e058;
        case 0x10e05cu: goto label_10e05c;
        case 0x10e060u: goto label_10e060;
        case 0x10e064u: goto label_10e064;
        case 0x10e068u: goto label_10e068;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e070u: goto label_10e070;
        case 0x10e074u: goto label_10e074;
        case 0x10e078u: goto label_10e078;
        case 0x10e07cu: goto label_10e07c;
        case 0x10e080u: goto label_10e080;
        case 0x10e084u: goto label_10e084;
        case 0x10e088u: goto label_10e088;
        case 0x10e08cu: goto label_10e08c;
        case 0x10e090u: goto label_10e090;
        case 0x10e094u: goto label_10e094;
        case 0x10e098u: goto label_10e098;
        case 0x10e09cu: goto label_10e09c;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0a4u: goto label_10e0a4;
        case 0x10e0a8u: goto label_10e0a8;
        case 0x10e0acu: goto label_10e0ac;
        case 0x10e0b0u: goto label_10e0b0;
        case 0x10e0b4u: goto label_10e0b4;
        case 0x10e0b8u: goto label_10e0b8;
        case 0x10e0bcu: goto label_10e0bc;
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0c4u: goto label_10e0c4;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e0ccu: goto label_10e0cc;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0d4u: goto label_10e0d4;
        case 0x10e0d8u: goto label_10e0d8;
        case 0x10e0dcu: goto label_10e0dc;
        case 0x10e0e0u: goto label_10e0e0;
        case 0x10e0e4u: goto label_10e0e4;
        case 0x10e0e8u: goto label_10e0e8;
        case 0x10e0ecu: goto label_10e0ec;
        case 0x10e0f0u: goto label_10e0f0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e0f8u: goto label_10e0f8;
        case 0x10e0fcu: goto label_10e0fc;
        case 0x10e100u: goto label_10e100;
        case 0x10e104u: goto label_10e104;
        case 0x10e108u: goto label_10e108;
        case 0x10e10cu: goto label_10e10c;
        case 0x10e110u: goto label_10e110;
        case 0x10e114u: goto label_10e114;
        case 0x10e118u: goto label_10e118;
        case 0x10e11cu: goto label_10e11c;
        case 0x10e120u: goto label_10e120;
        case 0x10e124u: goto label_10e124;
        case 0x10e128u: goto label_10e128;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e130u: goto label_10e130;
        case 0x10e134u: goto label_10e134;
        case 0x10e138u: goto label_10e138;
        case 0x10e13cu: goto label_10e13c;
        case 0x10e140u: goto label_10e140;
        case 0x10e144u: goto label_10e144;
        case 0x10e148u: goto label_10e148;
        case 0x10e14cu: goto label_10e14c;
        case 0x10e150u: goto label_10e150;
        case 0x10e154u: goto label_10e154;
        case 0x10e158u: goto label_10e158;
        case 0x10e15cu: goto label_10e15c;
        case 0x10e160u: goto label_10e160;
        case 0x10e164u: goto label_10e164;
        case 0x10e168u: goto label_10e168;
        case 0x10e16cu: goto label_10e16c;
        case 0x10e170u: goto label_10e170;
        case 0x10e174u: goto label_10e174;
        case 0x10e178u: goto label_10e178;
        case 0x10e17cu: goto label_10e17c;
        case 0x10e180u: goto label_10e180;
        case 0x10e184u: goto label_10e184;
        case 0x10e188u: goto label_10e188;
        case 0x10e18cu: goto label_10e18c;
        case 0x10e190u: goto label_10e190;
        case 0x10e194u: goto label_10e194;
        case 0x10e198u: goto label_10e198;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a0u: goto label_10e1a0;
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1acu: goto label_10e1ac;
        case 0x10e1b0u: goto label_10e1b0;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1b8u: goto label_10e1b8;
        case 0x10e1bcu: goto label_10e1bc;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1c4u: goto label_10e1c4;
        case 0x10e1c8u: goto label_10e1c8;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d0u: goto label_10e1d0;
        case 0x10e1d4u: goto label_10e1d4;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1dcu: goto label_10e1dc;
        case 0x10e1e0u: goto label_10e1e0;
        case 0x10e1e4u: goto label_10e1e4;
        case 0x10e1e8u: goto label_10e1e8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1f0u: goto label_10e1f0;
        case 0x10e1f4u: goto label_10e1f4;
        case 0x10e1f8u: goto label_10e1f8;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e200u: goto label_10e200;
        case 0x10e204u: goto label_10e204;
        case 0x10e208u: goto label_10e208;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e210u: goto label_10e210;
        case 0x10e214u: goto label_10e214;
        case 0x10e218u: goto label_10e218;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e220u: goto label_10e220;
        case 0x10e224u: goto label_10e224;
        case 0x10e228u: goto label_10e228;
        case 0x10e22cu: goto label_10e22c;
        default: break;
    }

    ctx->pc = 0x10de70u;

label_10de70:
    // 0x10de70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10de74:
    // 0x10de74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10de78:
    // 0x10de78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10de7c:
    // 0x10de7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10de7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10de80:
    // 0x10de80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10de80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10de84:
    // 0x10de84: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10de84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10de88:
    // 0x10de88: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x10de88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_10de8c:
    // 0x10de8c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_10de90:
    if (ctx->pc == 0x10DE90u) {
        ctx->pc = 0x10DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE8Cu;
        // 0x10de90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE94u;
        goto label_10de94;
    }
    ctx->pc = 0x10DE8Cu;
    {
        const bool branch_taken_0x10de8c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE8Cu;
        // 0x10de90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de8c) {
            ctx->pc = 0x10DE9Cu;
            goto label_10de9c;
        }
    }
    ctx->pc = 0x10DE94u;
label_10de94:
    // 0x10de94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10de98:
    // 0x10de98: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x10de98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_10de9c:
    // 0x10de9c: 0xc042cba  jal         func_10B2E8
label_10dea0:
    if (ctx->pc == 0x10DEA0u) {
        ctx->pc = 0x10DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE9Cu;
        // 0x10dea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEA4u;
        goto label_10dea4;
    }
    ctx->pc = 0x10DE9Cu;
    SET_GPR_U32(ctx, 31, 0x10DEA4u);
    ctx->pc = 0x10DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE9Cu;
    // 0x10dea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x10DE9Cu, 0x10DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEA4u;
label_10dea4:
    // 0x10dea4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_10dea8:
    if (ctx->pc == 0x10DEA8u) {
        ctx->pc = 0x10DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEA4u;
        // 0x10dea8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEACu;
        goto label_10deac;
    }
    ctx->pc = 0x10DEA4u;
    {
        const bool branch_taken_0x10dea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dea4) {
            ctx->pc = 0x10DEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DEA4u;
            // 0x10dea8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEC8u;
            goto label_10dec8;
        }
    }
    ctx->pc = 0x10DEACu;
label_10deac:
    // 0x10deac: 0x8e2215bc  lw          $v0, 0x15BC($s1)
    ctx->pc = 0x10deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
label_10deb0:
    // 0x10deb0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x10deb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_10deb4:
    // 0x10deb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_10deb8:
    if (ctx->pc == 0x10DEB8u) {
        ctx->pc = 0x10DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEB4u;
        // 0x10deb8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEBCu;
        goto label_10debc;
    }
    ctx->pc = 0x10DEB4u;
    {
        const bool branch_taken_0x10deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10deb4) {
            ctx->pc = 0x10DEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DEB4u;
            // 0x10deb8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEC8u;
            goto label_10dec8;
        }
    }
    ctx->pc = 0x10DEBCu;
label_10debc:
    // 0x10debc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10dec0:
    // 0x10dec0: 0xae2215bc  sw          $v0, 0x15BC($s1)
    ctx->pc = 0x10dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 2));
label_10dec4:
    // 0x10dec4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10dec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10dec8:
    // 0x10dec8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_10decc:
    if (ctx->pc == 0x10DECCu) {
        ctx->pc = 0x10DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC8u;
        // 0x10decc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DED0u;
        goto label_10ded0;
    }
    ctx->pc = 0x10DEC8u;
    {
        const bool branch_taken_0x10dec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC8u;
        // 0x10decc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dec8) {
            ctx->pc = 0x10DEE0u;
            goto label_10dee0;
        }
    }
    ctx->pc = 0x10DED0u;
label_10ded0:
    // 0x10ded0: 0x50620080  beql        $v1, $v0, . + 4 + (0x80 << 2)
label_10ded4:
    if (ctx->pc == 0x10DED4u) {
        ctx->pc = 0x10DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED0u;
        // 0x10ded4: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DED8u;
        goto label_10ded8;
    }
    ctx->pc = 0x10DED0u;
    {
        const bool branch_taken_0x10ded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ded0) {
            ctx->pc = 0x10DED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DED0u;
            // 0x10ded4: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E0D4u;
            goto label_10e0d4;
        }
    }
    ctx->pc = 0x10DED8u;
label_10ded8:
    // 0x10ded8: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_10dedc:
    if (ctx->pc == 0x10DEDCu) {
        ctx->pc = 0x10DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED8u;
        // 0x10dedc: 0x8e2215bc  lw          $v0, 0x15BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEE0u;
        goto label_10dee0;
    }
    ctx->pc = 0x10DED8u;
    {
        const bool branch_taken_0x10ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED8u;
        // 0x10dedc: 0x8e2215bc  lw          $v0, 0x15BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ded8) {
            ctx->pc = 0x10E1E4u;
            goto label_10e1e4;
        }
    }
    ctx->pc = 0x10DEE0u;
label_10dee0:
    // 0x10dee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dee4:
    // 0x10dee4: 0xc049150  jal         func_124540
label_10dee8:
    if (ctx->pc == 0x10DEE8u) {
        ctx->pc = 0x10DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEE4u;
        // 0x10dee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEECu;
        goto label_10deec;
    }
    ctx->pc = 0x10DEE4u;
    SET_GPR_U32(ctx, 31, 0x10DEECu);
    ctx->pc = 0x10DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEE4u;
    // 0x10dee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10DEE4u, 0x10DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEECu;
label_10deec:
    // 0x10deec: 0x82230648  lb          $v1, 0x648($s1)
    ctx->pc = 0x10deecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_10def0:
    // 0x10def0: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10def0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10def4:
    // 0x10def4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_10def8:
    if (ctx->pc == 0x10DEF8u) {
        ctx->pc = 0x10DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEF4u;
        // 0x10def8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEFCu;
        goto label_10defc;
    }
    ctx->pc = 0x10DEF4u;
    {
        const bool branch_taken_0x10def4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x10DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEF4u;
        // 0x10def8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10def4) {
            ctx->pc = 0x10DF04u;
            goto label_10df04;
        }
    }
    ctx->pc = 0x10DEFCu;
label_10defc:
    // 0x10defc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10df00:
    // 0x10df00: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10df00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10df04:
    // 0x10df04: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x10df04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_10df08:
    // 0x10df08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10df0c:
    // 0x10df0c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_10df10:
    if (ctx->pc == 0x10DF10u) {
        ctx->pc = 0x10DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF0Cu;
        // 0x10df10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF14u;
        goto label_10df14;
    }
    ctx->pc = 0x10DF0Cu;
    {
        const bool branch_taken_0x10df0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF0Cu;
        // 0x10df10: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df0c) {
            ctx->pc = 0x10DF94u;
            goto label_10df94;
        }
    }
    ctx->pc = 0x10DF14u;
label_10df14:
    // 0x10df14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10df18:
    if (ctx->pc == 0x10DF18u) {
        ctx->pc = 0x10DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF14u;
        // 0x10df18: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF1Cu;
        goto label_10df1c;
    }
    ctx->pc = 0x10DF14u;
    {
        const bool branch_taken_0x10df14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF14u;
        // 0x10df18: 0xc6200600  lwc1        $f0, 0x600($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df14) {
            ctx->pc = 0x10DF28u;
            goto label_10df28;
        }
    }
    ctx->pc = 0x10DF1Cu;
label_10df1c:
    // 0x10df1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10df20:
    // 0x10df20: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_10df24:
    if (ctx->pc == 0x10DF24u) {
        ctx->pc = 0x10DF28u;
        goto label_10df28;
    }
    ctx->pc = 0x10DF20u;
    {
        const bool branch_taken_0x10df20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10df20) {
            ctx->pc = 0x10E004u;
            goto label_10e004;
        }
    }
    ctx->pc = 0x10DF28u;
label_10df28:
    // 0x10df28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10df2c:
    // 0x10df2c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x10df2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_10df30:
    // 0x10df30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10df30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10df34:
    // 0x10df34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10df34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10df38:
    // 0x10df38: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x10df38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10df3c:
    // 0x10df3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10df3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df40:
    // 0x10df40: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10df40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10df44:
    // 0x10df44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10df44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10df48:
    // 0x10df48: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10df48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10df4c:
    // 0x10df4c: 0xc042902  jal         func_10A408
label_10df50:
    if (ctx->pc == 0x10DF50u) {
        ctx->pc = 0x10DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF4Cu;
        // 0x10df50: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF54u;
        goto label_10df54;
    }
    ctx->pc = 0x10DF4Cu;
    SET_GPR_U32(ctx, 31, 0x10DF54u);
    ctx->pc = 0x10DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF4Cu;
    // 0x10df50: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10DF4Cu, 0x10DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF54u;
label_10df54:
    // 0x10df54: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10df58:
    // 0x10df58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10df5c:
    // 0x10df5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10df60:
    // 0x10df60: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x10df60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10df64:
    // 0x10df64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10df64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10df68:
    // 0x10df68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10df68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df6c:
    // 0x10df6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10df6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10df70:
    // 0x10df70: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10df70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10df74:
    // 0x10df74: 0xc042908  jal         func_10A420
label_10df78:
    if (ctx->pc == 0x10DF78u) {
        ctx->pc = 0x10DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF74u;
        // 0x10df78: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF7Cu;
        goto label_10df7c;
    }
    ctx->pc = 0x10DF74u;
    SET_GPR_U32(ctx, 31, 0x10DF7Cu);
    ctx->pc = 0x10DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF74u;
    // 0x10df78: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10DF74u, 0x10DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF7Cu;
label_10df7c:
    // 0x10df7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10df80:
    // 0x10df80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_10df84:
    // 0x10df84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10df84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10df88:
    // 0x10df88: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x10df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
label_10df8c:
    // 0x10df8c: 0x10000039  b           . + 4 + (0x39 << 2)
label_10df90:
    if (ctx->pc == 0x10DF90u) {
        ctx->pc = 0x10DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF8Cu;
        // 0x10df90: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF94u;
        goto label_10df94;
    }
    ctx->pc = 0x10DF8Cu;
    {
        const bool branch_taken_0x10df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF8Cu;
        // 0x10df90: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df8c) {
            ctx->pc = 0x10E074u;
            goto label_10e074;
        }
    }
    ctx->pc = 0x10DF94u;
label_10df94:
    // 0x10df94: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10df98:
    // 0x10df98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10df9c:
    // 0x10df9c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10df9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_10dfa0:
    // 0x10dfa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10dfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10dfa4:
    // 0x10dfa4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10dfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10dfa8:
    // 0x10dfa8: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x10dfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10dfac:
    // 0x10dfac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dfacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dfb0:
    // 0x10dfb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10dfb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10dfb4:
    // 0x10dfb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10dfb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10dfb8:
    // 0x10dfb8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10dfb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10dfbc:
    // 0x10dfbc: 0xc042902  jal         func_10A408
label_10dfc0:
    if (ctx->pc == 0x10DFC0u) {
        ctx->pc = 0x10DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFBCu;
        // 0x10dfc0: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFC4u;
        goto label_10dfc4;
    }
    ctx->pc = 0x10DFBCu;
    SET_GPR_U32(ctx, 31, 0x10DFC4u);
    ctx->pc = 0x10DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFBCu;
    // 0x10dfc0: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10DFBCu, 0x10DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFC4u;
label_10dfc4:
    // 0x10dfc4: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10dfc8:
    // 0x10dfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dfcc:
    // 0x10dfcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10dfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10dfd0:
    // 0x10dfd0: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x10dfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_10dfd4:
    // 0x10dfd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10dfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10dfd8:
    // 0x10dfd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dfd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dfdc:
    // 0x10dfdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10dfdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10dfe0:
    // 0x10dfe0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10dfe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10dfe4:
    // 0x10dfe4: 0xc042908  jal         func_10A420
label_10dfe8:
    if (ctx->pc == 0x10DFE8u) {
        ctx->pc = 0x10DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFE4u;
        // 0x10dfe8: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFECu;
        goto label_10dfec;
    }
    ctx->pc = 0x10DFE4u;
    SET_GPR_U32(ctx, 31, 0x10DFECu);
    ctx->pc = 0x10DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFE4u;
    // 0x10dfe8: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10DFE4u, 0x10DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFECu;
label_10dfec:
    // 0x10dfec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10dff0:
    // 0x10dff0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_10dff4:
    // 0x10dff4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10dff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10dff8:
    // 0x10dff8: 0x8c43061c  lw          $v1, 0x61C($v0)
    ctx->pc = 0x10dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1564)));
label_10dffc:
    // 0x10dffc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_10e000:
    if (ctx->pc == 0x10E000u) {
        ctx->pc = 0x10E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFFCu;
        // 0x10e000: 0x8c440624  lw          $a0, 0x624($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E004u;
        goto label_10e004;
    }
    ctx->pc = 0x10DFFCu;
    {
        const bool branch_taken_0x10dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFFCu;
        // 0x10e000: 0x8c440624  lw          $a0, 0x624($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dffc) {
            ctx->pc = 0x10E074u;
            goto label_10e074;
        }
    }
    ctx->pc = 0x10E004u;
label_10e004:
    // 0x10e004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e008:
    // 0x10e008: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10e008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_10e00c:
    // 0x10e00c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10e00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10e010:
    // 0x10e010: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10e010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10e014:
    // 0x10e014: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x10e014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_10e018:
    // 0x10e018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e01c:
    // 0x10e01c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10e01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10e020:
    // 0x10e020: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10e020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10e024:
    // 0x10e024: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10e024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10e028:
    // 0x10e028: 0xc042902  jal         func_10A408
label_10e02c:
    if (ctx->pc == 0x10E02Cu) {
        ctx->pc = 0x10E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E028u;
        // 0x10e02c: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E030u;
        goto label_10e030;
    }
    ctx->pc = 0x10E028u;
    SET_GPR_U32(ctx, 31, 0x10E030u);
    ctx->pc = 0x10E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E028u;
    // 0x10e02c: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10E028u, 0x10E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E030u;
label_10e030:
    // 0x10e030: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e034:
    // 0x10e034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e038:
    // 0x10e038: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10e03c:
    // 0x10e03c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x10e03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_10e040:
    // 0x10e040: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10e040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10e044:
    // 0x10e044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e048:
    // 0x10e048: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10e048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10e04c:
    // 0x10e04c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10e04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10e050:
    // 0x10e050: 0xc042908  jal         func_10A420
label_10e054:
    if (ctx->pc == 0x10E054u) {
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E058u;
        goto label_10e058;
    }
    ctx->pc = 0x10E050u;
    SET_GPR_U32(ctx, 31, 0x10E058u);
    ctx->pc = 0x10E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E050u;
    // 0x10e054: 0x24090077  addiu       $t1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10E050u, 0x10E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E058u;
label_10e058:
    // 0x10e058: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10e05c:
    // 0x10e05c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x10e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_10e060:
    // 0x10e060: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x10e060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_10e064:
    // 0x10e064: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10e064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e068:
    // 0x10e068: 0x8c430838  lw          $v1, 0x838($v0)
    ctx->pc = 0x10e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2104)));
label_10e06c:
    // 0x10e06c: 0x8c44083c  lw          $a0, 0x83C($v0)
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
label_10e070:
    // 0x10e070: 0xa2251603  sb          $a1, 0x1603($s1)
    ctx->pc = 0x10e070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 5));
label_10e074:
    // 0x10e074: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10e074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e078:
    // 0x10e078: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10e078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10e07c:
    // 0x10e07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e080:
    // 0x10e080: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10e084:
    // 0x10e084: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x10e084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_10e088:
    // 0x10e088: 0xc0aa15e  jal         func_2A8578
label_10e08c:
    if (ctx->pc == 0x10E08Cu) {
        ctx->pc = 0x10E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E088u;
        // 0x10e08c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E090u;
        goto label_10e090;
    }
    ctx->pc = 0x10E088u;
    SET_GPR_U32(ctx, 31, 0x10E090u);
    ctx->pc = 0x10E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E088u;
    // 0x10e08c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10E088u, 0x10E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E090u;
label_10e090:
    // 0x10e090: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10e090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10e094:
    // 0x10e094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e098:
    // 0x10e098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e09c:
    // 0x10e09c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e0a0:
    // 0x10e0a0: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x10e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_10e0a4:
    // 0x10e0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e0a8:
    // 0x10e0a8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10e0ac:
    // 0x10e0ac: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10e0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10e0b0:
    // 0x10e0b0: 0xae2515b8  sw          $a1, 0x15B8($s1)
    ctx->pc = 0x10e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 5));
label_10e0b4:
    // 0x10e0b4: 0xae2415bc  sw          $a0, 0x15BC($s1)
    ctx->pc = 0x10e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 4));
label_10e0b8:
    // 0x10e0b8: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x10e0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
label_10e0bc:
    // 0x10e0bc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10e0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10e0c0:
    // 0x10e0c0: 0xae2015c4  sw          $zero, 0x15C4($s1)
    ctx->pc = 0x10e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5572), GPR_U32(ctx, 0));
label_10e0c4:
    // 0x10e0c4: 0xae2515b0  sw          $a1, 0x15B0($s1)
    ctx->pc = 0x10e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 5));
label_10e0c8:
    // 0x10e0c8: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x10e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_10e0cc:
    // 0x10e0cc: 0xae201588  sw          $zero, 0x1588($s1)
    ctx->pc = 0x10e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5512), GPR_U32(ctx, 0));
label_10e0d0:
    // 0x10e0d0: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x10e0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_10e0d4:
    // 0x10e0d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10e0d8:
    if (ctx->pc == 0x10E0D8u) {
        ctx->pc = 0x10E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D4u;
        // 0x10e0d8: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0DCu;
        goto label_10e0dc;
    }
    ctx->pc = 0x10E0D4u;
    {
        const bool branch_taken_0x10e0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0D4u;
        // 0x10e0d8: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0d4) {
            ctx->pc = 0x10E0F8u;
            goto label_10e0f8;
        }
    }
    ctx->pc = 0x10E0DCu;
label_10e0dc:
    // 0x10e0dc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10e0e0:
    // 0x10e0e0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x10e0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_10e0e4:
    // 0x10e0e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10e0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_10e0e8:
    // 0x10e0e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10e0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e0ec:
    // 0x10e0ec: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x10e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_10e0f0:
    // 0x10e0f0: 0xc04939a  jal         func_124E68
label_10e0f4:
    if (ctx->pc == 0x10E0F4u) {
        ctx->pc = 0x10E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0F0u;
        // 0x10e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0F8u;
        goto label_10e0f8;
    }
    ctx->pc = 0x10E0F0u;
    SET_GPR_U32(ctx, 31, 0x10E0F8u);
    ctx->pc = 0x10E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0F0u;
    // 0x10e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10E0F0u, 0x10E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0F8u;
label_10e0f8:
    // 0x10e0f8: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e0fc:
    // 0x10e0fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10e100:
    if (ctx->pc == 0x10E100u) {
        ctx->pc = 0x10E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0FCu;
        // 0x10e100: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E104u;
        goto label_10e104;
    }
    ctx->pc = 0x10E0FCu;
    {
        const bool branch_taken_0x10e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0FCu;
        // 0x10e100: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0fc) {
            ctx->pc = 0x10E108u;
            goto label_10e108;
        }
    }
    ctx->pc = 0x10E104u;
label_10e104:
    // 0x10e104: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10e104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10e108:
    // 0x10e108: 0xc055f06  jal         func_157C18
label_10e10c:
    if (ctx->pc == 0x10E10Cu) {
        ctx->pc = 0x10E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E108u;
        // 0x10e10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E110u;
        goto label_10e110;
    }
    ctx->pc = 0x10E108u;
    SET_GPR_U32(ctx, 31, 0x10E110u);
    ctx->pc = 0x10E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E108u;
    // 0x10e10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10E108u, 0x10E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E110u;
label_10e110:
    // 0x10e110: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10e114:
    if (ctx->pc == 0x10E114u) {
        ctx->pc = 0x10E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E110u;
        // 0x10e114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E118u;
        goto label_10e118;
    }
    ctx->pc = 0x10E110u;
    {
        const bool branch_taken_0x10e110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E110u;
        // 0x10e114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e110) {
            ctx->pc = 0x10E134u;
            goto label_10e134;
        }
    }
    ctx->pc = 0x10E118u;
label_10e118:
    // 0x10e118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e11c:
    // 0x10e11c: 0xc0493d8  jal         func_124F60
label_10e120:
    if (ctx->pc == 0x10E120u) {
        ctx->pc = 0x10E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E11Cu;
        // 0x10e120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E124u;
        goto label_10e124;
    }
    ctx->pc = 0x10E11Cu;
    SET_GPR_U32(ctx, 31, 0x10E124u);
    ctx->pc = 0x10E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E11Cu;
    // 0x10e120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10E11Cu, 0x10E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E124u;
label_10e124:
    // 0x10e124: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10e124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10e128:
    // 0x10e128: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10e128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_10e12c:
    // 0x10e12c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10e12cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10e130:
    // 0x10e130: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10e130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10e134:
    // 0x10e134: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10e134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e138:
    // 0x10e138: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
label_10e13c:
    if (ctx->pc == 0x10E13Cu) {
        ctx->pc = 0x10E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E138u;
        // 0x10e13c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E140u;
        goto label_10e140;
    }
    ctx->pc = 0x10E138u;
    {
        const bool branch_taken_0x10e138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e138) {
            ctx->pc = 0x10E13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E138u;
            // 0x10e13c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E19Cu;
            goto label_10e19c;
        }
    }
    ctx->pc = 0x10E140u;
label_10e140:
    // 0x10e140: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x10e140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_10e144:
    // 0x10e144: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_10e148:
    if (ctx->pc == 0x10E148u) {
        ctx->pc = 0x10E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E144u;
        // 0x10e148: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E14Cu;
        goto label_10e14c;
    }
    ctx->pc = 0x10E144u;
    {
        const bool branch_taken_0x10e144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e144) {
            ctx->pc = 0x10E148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E144u;
            // 0x10e148: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E19Cu;
            goto label_10e19c;
        }
    }
    ctx->pc = 0x10E14Cu;
label_10e14c:
    // 0x10e14c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10e150:
    // 0x10e150: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10e150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10e154:
    // 0x10e154: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10e154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10e158:
    // 0x10e158: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10e15c:
    // 0x10e15c: 0x40f809  jalr        $v0
label_10e160:
    if (ctx->pc == 0x10E160u) {
        ctx->pc = 0x10E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E15Cu;
        // 0x10e160: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E164u;
        goto label_10e164;
    }
    ctx->pc = 0x10E15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E164u);
        ctx->pc = 0x10E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E15Cu;
        // 0x10e160: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E15Cu, 0x10E164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E164u;
label_10e164:
    // 0x10e164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e168:
    // 0x10e168: 0xc07dfac  jal         func_1F7EB0
label_10e16c:
    if (ctx->pc == 0x10E16Cu) {
        ctx->pc = 0x10E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E168u;
        // 0x10e16c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E170u;
        goto label_10e170;
    }
    ctx->pc = 0x10E168u;
    SET_GPR_U32(ctx, 31, 0x10E170u);
    ctx->pc = 0x10E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E168u;
    // 0x10e16c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x10E168u, 0x10E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E170u;
label_10e170:
    // 0x10e170: 0x3c013ffa  lui         $at, 0x3FFA
    ctx->pc = 0x10e170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16378 << 16));
label_10e174:
    // 0x10e174: 0x3421e147  ori         $at, $at, 0xE147
    ctx->pc = 0x10e174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57671);
label_10e178:
    // 0x10e178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e17c:
    // 0x10e17c: 0x0  nop
    ctx->pc = 0x10e17cu;
    // NOP
label_10e180:
    // 0x10e180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e184:
    // 0x10e184: 0x0  nop
    ctx->pc = 0x10e184u;
    // NOP
label_10e188:
    // 0x10e188: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_10e18c:
    if (ctx->pc == 0x10E18Cu) {
        ctx->pc = 0x10E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E188u;
        // 0x10e18c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E190u;
        goto label_10e190;
    }
    ctx->pc = 0x10E188u;
    {
        const bool branch_taken_0x10e188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e188) {
            ctx->pc = 0x10E18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E188u;
            // 0x10e18c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E19Cu;
            goto label_10e19c;
        }
    }
    ctx->pc = 0x10E190u;
label_10e190:
    // 0x10e190: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x10e190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_10e194:
    // 0x10e194: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x10e194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_10e198:
    // 0x10e198: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10e198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10e19c:
    // 0x10e19c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x10e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_10e1a0:
    // 0x10e1a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10e1a4:
    if (ctx->pc == 0x10E1A4u) {
        ctx->pc = 0x10E1A8u;
        goto label_10e1a8;
    }
    ctx->pc = 0x10E1A0u;
    {
        const bool branch_taken_0x10e1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1a0) {
            ctx->pc = 0x10E1C0u;
            goto label_10e1c0;
        }
    }
    ctx->pc = 0x10E1A8u;
label_10e1a8:
    // 0x10e1a8: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x10e1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e1ac:
    // 0x10e1ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_10e1b0:
    // 0x10e1b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e1b4:
    // 0x10e1b4: 0x0  nop
    ctx->pc = 0x10e1b4u;
    // NOP
label_10e1b8:
    // 0x10e1b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10e1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10e1bc:
    // 0x10e1bc: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x10e1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_10e1c0:
    // 0x10e1c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e1c4:
    // 0x10e1c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10e1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10e1c8:
    // 0x10e1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e1cc:
    // 0x10e1cc: 0xc053e7c  jal         func_14F9F0
label_10e1d0:
    if (ctx->pc == 0x10E1D0u) {
        ctx->pc = 0x10E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1CCu;
        // 0x10e1d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1D4u;
        goto label_10e1d4;
    }
    ctx->pc = 0x10E1CCu;
    SET_GPR_U32(ctx, 31, 0x10E1D4u);
    ctx->pc = 0x10E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1CCu;
    // 0x10e1d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10E1CCu, 0x10E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1D4u;
label_10e1d4:
    // 0x10e1d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10e1d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10e1d8:
    // 0x10e1d8: 0xc053e4a  jal         func_14F928
label_10e1dc:
    if (ctx->pc == 0x10E1DCu) {
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1E0u;
        goto label_10e1e0;
    }
    ctx->pc = 0x10E1D8u;
    SET_GPR_U32(ctx, 31, 0x10E1E0u);
    ctx->pc = 0x10E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1D8u;
    // 0x10e1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10E1D8u, 0x10E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1E0u;
label_10e1e0:
    // 0x10e1e0: 0x8e2215bc  lw          $v0, 0x15BC($s1)
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5564)));
label_10e1e4:
    // 0x10e1e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_10e1e8:
    if (ctx->pc == 0x10E1E8u) {
        ctx->pc = 0x10E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1E4u;
        // 0x10e1e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1ECu;
        goto label_10e1ec;
    }
    ctx->pc = 0x10E1E4u;
    {
        const bool branch_taken_0x10e1e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1E4u;
        // 0x10e1e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1e4) {
            ctx->pc = 0x10E1F8u;
            goto label_10e1f8;
        }
    }
    ctx->pc = 0x10E1ECu;
label_10e1ec:
    // 0x10e1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e1f0:
    // 0x10e1f0: 0xc04290e  jal         func_10A438
label_10e1f4:
    if (ctx->pc == 0x10E1F4u) {
        ctx->pc = 0x10E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1F0u;
        // 0x10e1f4: 0xae2215bc  sw          $v0, 0x15BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1F8u;
        goto label_10e1f8;
    }
    ctx->pc = 0x10E1F0u;
    SET_GPR_U32(ctx, 31, 0x10E1F8u);
    ctx->pc = 0x10E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1F0u;
    // 0x10e1f4: 0xae2215bc  sw          $v0, 0x15BC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10E1F0u, 0x10E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1F8u;
label_10e1f8:
    // 0x10e1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e1fc:
    // 0x10e1fc: 0xc048e4e  jal         func_123938
label_10e200:
    if (ctx->pc == 0x10E200u) {
        ctx->pc = 0x10E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1FCu;
        // 0x10e200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E204u;
        goto label_10e204;
    }
    ctx->pc = 0x10E1FCu;
    SET_GPR_U32(ctx, 31, 0x10E204u);
    ctx->pc = 0x10E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1FCu;
    // 0x10e200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10E1FCu, 0x10E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E204u;
label_10e204:
    // 0x10e204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e208:
    if (ctx->pc == 0x10E208u) {
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E204u;
        // 0x10e208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E20Cu;
        goto label_10e20c;
    }
    ctx->pc = 0x10E204u;
    {
        const bool branch_taken_0x10e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E204u;
        // 0x10e208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e204) {
            ctx->pc = 0x10E218u;
            goto label_10e218;
        }
    }
    ctx->pc = 0x10E20Cu;
label_10e20c:
    // 0x10e20c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e210:
    // 0x10e210: 0xc0493d8  jal         func_124F60
label_10e214:
    if (ctx->pc == 0x10E214u) {
        ctx->pc = 0x10E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E210u;
        // 0x10e214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E218u;
        goto label_10e218;
    }
    ctx->pc = 0x10E210u;
    SET_GPR_U32(ctx, 31, 0x10E218u);
    ctx->pc = 0x10E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E210u;
    // 0x10e214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10E210u, 0x10E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E218u;
label_10e218:
    // 0x10e218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10e218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e21c:
    // 0x10e21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e220:
    // 0x10e220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e224:
    // 0x10e224: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10e228:
    // 0x10e228: 0x3e00008  jr          $ra
label_10e22c:
    if (ctx->pc == 0x10E22Cu) {
        ctx->pc = 0x10E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E228u;
        // 0x10e22c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E230u;
        goto label_fallthrough_0x10e228;
    }
    ctx->pc = 0x10E228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E228u;
        // 0x10e22c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e228:
    ctx->pc = 0x10E230u;
}
