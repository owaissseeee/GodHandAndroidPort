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

// Function: func_0025DE58
// Address: 0x25de58 - 0x25e248
void func_0025DE58_0x25de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025DE58_0x25de58");
#endif

    switch (ctx->pc) {
        case 0x25de58u: goto label_25de58;
        case 0x25de5cu: goto label_25de5c;
        case 0x25de60u: goto label_25de60;
        case 0x25de64u: goto label_25de64;
        case 0x25de68u: goto label_25de68;
        case 0x25de6cu: goto label_25de6c;
        case 0x25de70u: goto label_25de70;
        case 0x25de74u: goto label_25de74;
        case 0x25de78u: goto label_25de78;
        case 0x25de7cu: goto label_25de7c;
        case 0x25de80u: goto label_25de80;
        case 0x25de84u: goto label_25de84;
        case 0x25de88u: goto label_25de88;
        case 0x25de8cu: goto label_25de8c;
        case 0x25de90u: goto label_25de90;
        case 0x25de94u: goto label_25de94;
        case 0x25de98u: goto label_25de98;
        case 0x25de9cu: goto label_25de9c;
        case 0x25dea0u: goto label_25dea0;
        case 0x25dea4u: goto label_25dea4;
        case 0x25dea8u: goto label_25dea8;
        case 0x25deacu: goto label_25deac;
        case 0x25deb0u: goto label_25deb0;
        case 0x25deb4u: goto label_25deb4;
        case 0x25deb8u: goto label_25deb8;
        case 0x25debcu: goto label_25debc;
        case 0x25dec0u: goto label_25dec0;
        case 0x25dec4u: goto label_25dec4;
        case 0x25dec8u: goto label_25dec8;
        case 0x25deccu: goto label_25decc;
        case 0x25ded0u: goto label_25ded0;
        case 0x25ded4u: goto label_25ded4;
        case 0x25ded8u: goto label_25ded8;
        case 0x25dedcu: goto label_25dedc;
        case 0x25dee0u: goto label_25dee0;
        case 0x25dee4u: goto label_25dee4;
        case 0x25dee8u: goto label_25dee8;
        case 0x25deecu: goto label_25deec;
        case 0x25def0u: goto label_25def0;
        case 0x25def4u: goto label_25def4;
        case 0x25def8u: goto label_25def8;
        case 0x25defcu: goto label_25defc;
        case 0x25df00u: goto label_25df00;
        case 0x25df04u: goto label_25df04;
        case 0x25df08u: goto label_25df08;
        case 0x25df0cu: goto label_25df0c;
        case 0x25df10u: goto label_25df10;
        case 0x25df14u: goto label_25df14;
        case 0x25df18u: goto label_25df18;
        case 0x25df1cu: goto label_25df1c;
        case 0x25df20u: goto label_25df20;
        case 0x25df24u: goto label_25df24;
        case 0x25df28u: goto label_25df28;
        case 0x25df2cu: goto label_25df2c;
        case 0x25df30u: goto label_25df30;
        case 0x25df34u: goto label_25df34;
        case 0x25df38u: goto label_25df38;
        case 0x25df3cu: goto label_25df3c;
        case 0x25df40u: goto label_25df40;
        case 0x25df44u: goto label_25df44;
        case 0x25df48u: goto label_25df48;
        case 0x25df4cu: goto label_25df4c;
        case 0x25df50u: goto label_25df50;
        case 0x25df54u: goto label_25df54;
        case 0x25df58u: goto label_25df58;
        case 0x25df5cu: goto label_25df5c;
        case 0x25df60u: goto label_25df60;
        case 0x25df64u: goto label_25df64;
        case 0x25df68u: goto label_25df68;
        case 0x25df6cu: goto label_25df6c;
        case 0x25df70u: goto label_25df70;
        case 0x25df74u: goto label_25df74;
        case 0x25df78u: goto label_25df78;
        case 0x25df7cu: goto label_25df7c;
        case 0x25df80u: goto label_25df80;
        case 0x25df84u: goto label_25df84;
        case 0x25df88u: goto label_25df88;
        case 0x25df8cu: goto label_25df8c;
        case 0x25df90u: goto label_25df90;
        case 0x25df94u: goto label_25df94;
        case 0x25df98u: goto label_25df98;
        case 0x25df9cu: goto label_25df9c;
        case 0x25dfa0u: goto label_25dfa0;
        case 0x25dfa4u: goto label_25dfa4;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfacu: goto label_25dfac;
        case 0x25dfb0u: goto label_25dfb0;
        case 0x25dfb4u: goto label_25dfb4;
        case 0x25dfb8u: goto label_25dfb8;
        case 0x25dfbcu: goto label_25dfbc;
        case 0x25dfc0u: goto label_25dfc0;
        case 0x25dfc4u: goto label_25dfc4;
        case 0x25dfc8u: goto label_25dfc8;
        case 0x25dfccu: goto label_25dfcc;
        case 0x25dfd0u: goto label_25dfd0;
        case 0x25dfd4u: goto label_25dfd4;
        case 0x25dfd8u: goto label_25dfd8;
        case 0x25dfdcu: goto label_25dfdc;
        case 0x25dfe0u: goto label_25dfe0;
        case 0x25dfe4u: goto label_25dfe4;
        case 0x25dfe8u: goto label_25dfe8;
        case 0x25dfecu: goto label_25dfec;
        case 0x25dff0u: goto label_25dff0;
        case 0x25dff4u: goto label_25dff4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25dffcu: goto label_25dffc;
        case 0x25e000u: goto label_25e000;
        case 0x25e004u: goto label_25e004;
        case 0x25e008u: goto label_25e008;
        case 0x25e00cu: goto label_25e00c;
        case 0x25e010u: goto label_25e010;
        case 0x25e014u: goto label_25e014;
        case 0x25e018u: goto label_25e018;
        case 0x25e01cu: goto label_25e01c;
        case 0x25e020u: goto label_25e020;
        case 0x25e024u: goto label_25e024;
        case 0x25e028u: goto label_25e028;
        case 0x25e02cu: goto label_25e02c;
        case 0x25e030u: goto label_25e030;
        case 0x25e034u: goto label_25e034;
        case 0x25e038u: goto label_25e038;
        case 0x25e03cu: goto label_25e03c;
        case 0x25e040u: goto label_25e040;
        case 0x25e044u: goto label_25e044;
        case 0x25e048u: goto label_25e048;
        case 0x25e04cu: goto label_25e04c;
        case 0x25e050u: goto label_25e050;
        case 0x25e054u: goto label_25e054;
        case 0x25e058u: goto label_25e058;
        case 0x25e05cu: goto label_25e05c;
        case 0x25e060u: goto label_25e060;
        case 0x25e064u: goto label_25e064;
        case 0x25e068u: goto label_25e068;
        case 0x25e06cu: goto label_25e06c;
        case 0x25e070u: goto label_25e070;
        case 0x25e074u: goto label_25e074;
        case 0x25e078u: goto label_25e078;
        case 0x25e07cu: goto label_25e07c;
        case 0x25e080u: goto label_25e080;
        case 0x25e084u: goto label_25e084;
        case 0x25e088u: goto label_25e088;
        case 0x25e08cu: goto label_25e08c;
        case 0x25e090u: goto label_25e090;
        case 0x25e094u: goto label_25e094;
        case 0x25e098u: goto label_25e098;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e0a0u: goto label_25e0a0;
        case 0x25e0a4u: goto label_25e0a4;
        case 0x25e0a8u: goto label_25e0a8;
        case 0x25e0acu: goto label_25e0ac;
        case 0x25e0b0u: goto label_25e0b0;
        case 0x25e0b4u: goto label_25e0b4;
        case 0x25e0b8u: goto label_25e0b8;
        case 0x25e0bcu: goto label_25e0bc;
        case 0x25e0c0u: goto label_25e0c0;
        case 0x25e0c4u: goto label_25e0c4;
        case 0x25e0c8u: goto label_25e0c8;
        case 0x25e0ccu: goto label_25e0cc;
        case 0x25e0d0u: goto label_25e0d0;
        case 0x25e0d4u: goto label_25e0d4;
        case 0x25e0d8u: goto label_25e0d8;
        case 0x25e0dcu: goto label_25e0dc;
        case 0x25e0e0u: goto label_25e0e0;
        case 0x25e0e4u: goto label_25e0e4;
        case 0x25e0e8u: goto label_25e0e8;
        case 0x25e0ecu: goto label_25e0ec;
        case 0x25e0f0u: goto label_25e0f0;
        case 0x25e0f4u: goto label_25e0f4;
        case 0x25e0f8u: goto label_25e0f8;
        case 0x25e0fcu: goto label_25e0fc;
        case 0x25e100u: goto label_25e100;
        case 0x25e104u: goto label_25e104;
        case 0x25e108u: goto label_25e108;
        case 0x25e10cu: goto label_25e10c;
        case 0x25e110u: goto label_25e110;
        case 0x25e114u: goto label_25e114;
        case 0x25e118u: goto label_25e118;
        case 0x25e11cu: goto label_25e11c;
        case 0x25e120u: goto label_25e120;
        case 0x25e124u: goto label_25e124;
        case 0x25e128u: goto label_25e128;
        case 0x25e12cu: goto label_25e12c;
        case 0x25e130u: goto label_25e130;
        case 0x25e134u: goto label_25e134;
        case 0x25e138u: goto label_25e138;
        case 0x25e13cu: goto label_25e13c;
        case 0x25e140u: goto label_25e140;
        case 0x25e144u: goto label_25e144;
        case 0x25e148u: goto label_25e148;
        case 0x25e14cu: goto label_25e14c;
        case 0x25e150u: goto label_25e150;
        case 0x25e154u: goto label_25e154;
        case 0x25e158u: goto label_25e158;
        case 0x25e15cu: goto label_25e15c;
        case 0x25e160u: goto label_25e160;
        case 0x25e164u: goto label_25e164;
        case 0x25e168u: goto label_25e168;
        case 0x25e16cu: goto label_25e16c;
        case 0x25e170u: goto label_25e170;
        case 0x25e174u: goto label_25e174;
        case 0x25e178u: goto label_25e178;
        case 0x25e17cu: goto label_25e17c;
        case 0x25e180u: goto label_25e180;
        case 0x25e184u: goto label_25e184;
        case 0x25e188u: goto label_25e188;
        case 0x25e18cu: goto label_25e18c;
        case 0x25e190u: goto label_25e190;
        case 0x25e194u: goto label_25e194;
        case 0x25e198u: goto label_25e198;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1a0u: goto label_25e1a0;
        case 0x25e1a4u: goto label_25e1a4;
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        default: break;
    }

    ctx->pc = 0x25de58u;

label_25de58:
    // 0x25de58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25de58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25de5c:
    // 0x25de5c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25de60:
    // 0x25de60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25de60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25de64:
    // 0x25de64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25de68:
    // 0x25de68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25de6c:
    // 0x25de6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25de70:
    // 0x25de70: 0xc0b6dac  jal         func_2DB6B0
label_25de74:
    if (ctx->pc == 0x25DE74u) {
        ctx->pc = 0x25DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE70u;
        // 0x25de74: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE78u;
        goto label_25de78;
    }
    ctx->pc = 0x25DE70u;
    SET_GPR_U32(ctx, 31, 0x25DE78u);
    ctx->pc = 0x25DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE70u;
    // 0x25de74: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25DE70u, 0x25DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE78u;
label_25de78:
    // 0x25de78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25de78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25de7c:
    // 0x25de7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25de80:
    // 0x25de80: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x25de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25de84:
    // 0x25de84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25de84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25de88:
    // 0x25de88: 0xc0560a2  jal         func_158288
label_25de8c:
    if (ctx->pc == 0x25DE8Cu) {
        ctx->pc = 0x25DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE88u;
        // 0x25de8c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE90u;
        goto label_25de90;
    }
    ctx->pc = 0x25DE88u;
    SET_GPR_U32(ctx, 31, 0x25DE90u);
    ctx->pc = 0x25DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE88u;
    // 0x25de8c: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25DE88u, 0x25DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE90u;
label_25de90:
    // 0x25de90: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25de90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25de94:
    // 0x25de94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25de94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25de98:
    // 0x25de98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25de98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25de9c:
    // 0x25de9c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25dea0:
    // 0x25dea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25dea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dea4:
    // 0x25dea4: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25dea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25dea8:
    // 0x25dea8: 0xc04d476  jal         func_1351D8
label_25deac:
    if (ctx->pc == 0x25DEACu) {
        ctx->pc = 0x25DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEA8u;
        // 0x25deac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEB0u;
        goto label_25deb0;
    }
    ctx->pc = 0x25DEA8u;
    SET_GPR_U32(ctx, 31, 0x25DEB0u);
    ctx->pc = 0x25DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DEA8u;
    // 0x25deac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25DEA8u, 0x25DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEB0u;
label_25deb0:
    // 0x25deb0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25deb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25deb4:
    // 0x25deb4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25deb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_25deb8:
    // 0x25deb8: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_25debc:
    if (ctx->pc == 0x25DEBCu) {
        ctx->pc = 0x25DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEB8u;
        // 0x25debc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEC0u;
        goto label_25dec0;
    }
    ctx->pc = 0x25DEB8u;
    {
        const bool branch_taken_0x25deb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEB8u;
        // 0x25debc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25deb8) {
            ctx->pc = 0x25E22Cu;
            goto label_25e22c;
        }
    }
    ctx->pc = 0x25DEC0u;
label_25dec0:
    // 0x25dec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25dec4:
    // 0x25dec4: 0x24423a80  addiu       $v0, $v0, 0x3A80
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
label_25dec8:
    // 0x25dec8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25decc:
    // 0x25decc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25deccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ded0:
    // 0x25ded0: 0x800008  jr          $a0
label_25ded4:
    if (ctx->pc == 0x25DED4u) {
        ctx->pc = 0x25DED8u;
        goto label_25ded8;
    }
    ctx->pc = 0x25DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25DED8u: goto label_25ded8;
            case 0x25DF34u: goto label_25df34;
            case 0x25DF90u: goto label_25df90;
            case 0x25DFF4u: goto label_25dff4;
            case 0x25E060u: goto label_25e060;
            case 0x25E0C4u: goto label_25e0c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25DED8u;
label_25ded8:
    // 0x25ded8: 0xc09ac7a  jal         func_26B1E8
label_25dedc:
    if (ctx->pc == 0x25DEDCu) {
        ctx->pc = 0x25DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DED8u;
        // 0x25dedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEE0u;
        goto label_25dee0;
    }
    ctx->pc = 0x25DED8u;
    SET_GPR_U32(ctx, 31, 0x25DEE0u);
    ctx->pc = 0x25DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DED8u;
    // 0x25dedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25DED8u, 0x25DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEE0u;
label_25dee0:
    // 0x25dee0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25dee4:
    // 0x25dee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dee8:
    // 0x25dee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25dee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25deec:
    // 0x25deec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25deecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25def0:
    // 0x25def0: 0x8c4539a0  lw          $a1, 0x39A0($v0)
    ctx->pc = 0x25def0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14752)));
label_25def4:
    // 0x25def4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25def4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25def8:
    // 0x25def8: 0x8c4639a4  lw          $a2, 0x39A4($v0)
    ctx->pc = 0x25def8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14756)));
label_25defc:
    // 0x25defc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25defcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25df00:
    // 0x25df00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25df04:
    // 0x25df04: 0xc0aa15e  jal         func_2A8578
label_25df08:
    if (ctx->pc == 0x25DF08u) {
        ctx->pc = 0x25DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF04u;
        // 0x25df08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF0Cu;
        goto label_25df0c;
    }
    ctx->pc = 0x25DF04u;
    SET_GPR_U32(ctx, 31, 0x25DF0Cu);
    ctx->pc = 0x25DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF04u;
    // 0x25df08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25DF04u, 0x25DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF0Cu;
label_25df0c:
    // 0x25df0c: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x25df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_25df10:
    // 0x25df10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25df14:
    if (ctx->pc == 0x25DF14u) {
        ctx->pc = 0x25DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF10u;
        // 0x25df14: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF18u;
        goto label_25df18;
    }
    ctx->pc = 0x25DF10u;
    {
        const bool branch_taken_0x25df10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25df10) {
            ctx->pc = 0x25DF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DF10u;
            // 0x25df14: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DF24u;
            goto label_25df24;
        }
    }
    ctx->pc = 0x25DF18u;
label_25df18:
    // 0x25df18: 0xc09fa94  jal         func_27EA50
label_25df1c:
    if (ctx->pc == 0x25DF1Cu) {
        ctx->pc = 0x25DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF18u;
        // 0x25df1c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF20u;
        goto label_25df20;
    }
    ctx->pc = 0x25DF18u;
    SET_GPR_U32(ctx, 31, 0x25DF20u);
    ctx->pc = 0x25DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF18u;
    // 0x25df1c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x25DF18u, 0x25DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF20u;
label_25df20:
    // 0x25df20: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25df20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25df24:
    // 0x25df24: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25df24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25df28:
    // 0x25df28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25df2c:
    // 0x25df2c: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x25df2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
label_25df30:
    // 0x25df30: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25df30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25df34:
    // 0x25df34: 0x26430550  addiu       $v1, $s2, 0x550
    ctx->pc = 0x25df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
label_25df38:
    // 0x25df38: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25df3c:
    // 0x25df3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25df3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25df40:
    // 0x25df40: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25df40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25df44:
    // 0x25df44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25df44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25df48:
    // 0x25df48: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25df48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25df4c:
    // 0x25df4c: 0xc055f06  jal         func_157C18
label_25df50:
    if (ctx->pc == 0x25DF50u) {
        ctx->pc = 0x25DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF4Cu;
        // 0x25df50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF54u;
        goto label_25df54;
    }
    ctx->pc = 0x25DF4Cu;
    SET_GPR_U32(ctx, 31, 0x25DF54u);
    ctx->pc = 0x25DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF4Cu;
    // 0x25df50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25DF4Cu, 0x25DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF54u;
label_25df54:
    // 0x25df54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25df58:
    if (ctx->pc == 0x25DF58u) {
        ctx->pc = 0x25DF5Cu;
        goto label_25df5c;
    }
    ctx->pc = 0x25DF54u;
    {
        const bool branch_taken_0x25df54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25df54) {
            ctx->pc = 0x25DF68u;
            goto label_25df68;
        }
    }
    ctx->pc = 0x25DF5Cu;
label_25df5c:
    // 0x25df5c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25df5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25df60:
    // 0x25df60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25df64:
    // 0x25df64: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25df64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25df68:
    // 0x25df68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25df68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25df6c:
    // 0x25df6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25df6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25df70:
    // 0x25df70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25df74:
    // 0x25df74: 0xc053e7c  jal         func_14F9F0
label_25df78:
    if (ctx->pc == 0x25DF78u) {
        ctx->pc = 0x25DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF74u;
        // 0x25df78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF7Cu;
        goto label_25df7c;
    }
    ctx->pc = 0x25DF74u;
    SET_GPR_U32(ctx, 31, 0x25DF7Cu);
    ctx->pc = 0x25DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF74u;
    // 0x25df78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25DF74u, 0x25DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF7Cu;
label_25df7c:
    // 0x25df7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25df7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25df80:
    // 0x25df80: 0xc053e4a  jal         func_14F928
label_25df84:
    if (ctx->pc == 0x25DF84u) {
        ctx->pc = 0x25DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF80u;
        // 0x25df84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF88u;
        goto label_25df88;
    }
    ctx->pc = 0x25DF80u;
    SET_GPR_U32(ctx, 31, 0x25DF88u);
    ctx->pc = 0x25DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF80u;
    // 0x25df84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25DF80u, 0x25DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF88u;
label_25df88:
    // 0x25df88: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_25df8c:
    if (ctx->pc == 0x25DF8Cu) {
        ctx->pc = 0x25DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF88u;
        // 0x25df8c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF90u;
        goto label_25df90;
    }
    ctx->pc = 0x25DF88u;
    {
        const bool branch_taken_0x25df88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF88u;
        // 0x25df8c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df88) {
            ctx->pc = 0x25E230u;
            goto label_25e230;
        }
    }
    ctx->pc = 0x25DF90u;
label_25df90:
    // 0x25df90: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25df90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25df94:
    // 0x25df94: 0xc09ac7a  jal         func_26B1E8
label_25df98:
    if (ctx->pc == 0x25DF98u) {
        ctx->pc = 0x25DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF94u;
        // 0x25df98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF9Cu;
        goto label_25df9c;
    }
    ctx->pc = 0x25DF94u;
    SET_GPR_U32(ctx, 31, 0x25DF9Cu);
    ctx->pc = 0x25DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF94u;
    // 0x25df98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25DF94u, 0x25DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF9Cu;
label_25df9c:
    // 0x25df9c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25dfa0:
    // 0x25dfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dfa4:
    // 0x25dfa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25dfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dfa8:
    // 0x25dfa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25dfa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25dfac:
    // 0x25dfac: 0x8c4539a8  lw          $a1, 0x39A8($v0)
    ctx->pc = 0x25dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14760)));
label_25dfb0:
    // 0x25dfb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25dfb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dfb4:
    // 0x25dfb4: 0x8c4639ac  lw          $a2, 0x39AC($v0)
    ctx->pc = 0x25dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14764)));
label_25dfb8:
    // 0x25dfb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25dfb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dfbc:
    // 0x25dfbc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25dfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25dfc0:
    // 0x25dfc0: 0xc0aa15e  jal         func_2A8578
label_25dfc4:
    if (ctx->pc == 0x25DFC4u) {
        ctx->pc = 0x25DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFC0u;
        // 0x25dfc4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFC8u;
        goto label_25dfc8;
    }
    ctx->pc = 0x25DFC0u;
    SET_GPR_U32(ctx, 31, 0x25DFC8u);
    ctx->pc = 0x25DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFC0u;
    // 0x25dfc4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25DFC0u, 0x25DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFC8u;
label_25dfc8:
    // 0x25dfc8: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x25dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_25dfcc:
    // 0x25dfcc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25dfd0:
    if (ctx->pc == 0x25DFD0u) {
        ctx->pc = 0x25DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFCCu;
        // 0x25dfd0: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFD4u;
        goto label_25dfd4;
    }
    ctx->pc = 0x25DFCCu;
    {
        const bool branch_taken_0x25dfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dfcc) {
            ctx->pc = 0x25DFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DFCCu;
            // 0x25dfd0: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DFE0u;
            goto label_25dfe0;
        }
    }
    ctx->pc = 0x25DFD4u;
label_25dfd4:
    // 0x25dfd4: 0xc09fa94  jal         func_27EA50
label_25dfd8:
    if (ctx->pc == 0x25DFD8u) {
        ctx->pc = 0x25DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFD4u;
        // 0x25dfd8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFDCu;
        goto label_25dfdc;
    }
    ctx->pc = 0x25DFD4u;
    SET_GPR_U32(ctx, 31, 0x25DFDCu);
    ctx->pc = 0x25DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFD4u;
    // 0x25dfd8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x25DFD4u, 0x25DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFDCu;
label_25dfdc:
    // 0x25dfdc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25dfdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25dfe0:
    // 0x25dfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25dfe4:
    // 0x25dfe4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x25dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_25dfe8:
    // 0x25dfe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25dfec:
    // 0x25dfec: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x25dfecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_25dff0:
    // 0x25dff0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x25dff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_25dff4:
    // 0x25dff4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25dff8:
    // 0x25dff8: 0x26420550  addiu       $v0, $s2, 0x550
    ctx->pc = 0x25dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
label_25dffc:
    // 0x25dffc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25dffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25e000:
    // 0x25e000: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x25e000u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25e004:
    // 0x25e004: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25e004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25e008:
    // 0x25e008: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25e008u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25e00c:
    // 0x25e00c: 0xc055f06  jal         func_157C18
label_25e010:
    if (ctx->pc == 0x25E010u) {
        ctx->pc = 0x25E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E00Cu;
        // 0x25e010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E014u;
        goto label_25e014;
    }
    ctx->pc = 0x25E00Cu;
    SET_GPR_U32(ctx, 31, 0x25E014u);
    ctx->pc = 0x25E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E00Cu;
    // 0x25e010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25E00Cu, 0x25E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E014u;
label_25e014:
    // 0x25e014: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25e018:
    if (ctx->pc == 0x25E018u) {
        ctx->pc = 0x25E01Cu;
        goto label_25e01c;
    }
    ctx->pc = 0x25E014u;
    {
        const bool branch_taken_0x25e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e014) {
            ctx->pc = 0x25E034u;
            goto label_25e034;
        }
    }
    ctx->pc = 0x25E01Cu;
label_25e01c:
    // 0x25e01c: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x25e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e020:
    // 0x25e020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e024:
    // 0x25e024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e028:
    // 0x25e028: 0x0  nop
    ctx->pc = 0x25e028u;
    // NOP
label_25e02c:
    // 0x25e02c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e030:
    // 0x25e030: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x25e030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_25e034:
    // 0x25e034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e038:
    // 0x25e038: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25e038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e03c:
    // 0x25e03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e040:
    // 0x25e040: 0xc053e7c  jal         func_14F9F0
label_25e044:
    if (ctx->pc == 0x25E044u) {
        ctx->pc = 0x25E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E040u;
        // 0x25e044: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E048u;
        goto label_25e048;
    }
    ctx->pc = 0x25E040u;
    SET_GPR_U32(ctx, 31, 0x25E048u);
    ctx->pc = 0x25E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E040u;
    // 0x25e044: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25E040u, 0x25E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E048u;
label_25e048:
    // 0x25e048: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25e048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25e04c:
    // 0x25e04c: 0xc053e4a  jal         func_14F928
label_25e050:
    if (ctx->pc == 0x25E050u) {
        ctx->pc = 0x25E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E04Cu;
        // 0x25e050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E054u;
        goto label_25e054;
    }
    ctx->pc = 0x25E04Cu;
    SET_GPR_U32(ctx, 31, 0x25E054u);
    ctx->pc = 0x25E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E04Cu;
    // 0x25e050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25E04Cu, 0x25E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E054u;
label_25e054:
    // 0x25e054: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x25e054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_25e058:
    // 0x25e058: 0x10000074  b           . + 4 + (0x74 << 2)
label_25e05c:
    if (ctx->pc == 0x25E05Cu) {
        ctx->pc = 0x25E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E058u;
        // 0x25e05c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E060u;
        goto label_25e060;
    }
    ctx->pc = 0x25E058u;
    {
        const bool branch_taken_0x25e058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E058u;
        // 0x25e05c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e058) {
            ctx->pc = 0x25E22Cu;
            goto label_25e22c;
        }
    }
    ctx->pc = 0x25E060u;
label_25e060:
    // 0x25e060: 0xc09ac7a  jal         func_26B1E8
label_25e064:
    if (ctx->pc == 0x25E064u) {
        ctx->pc = 0x25E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E060u;
        // 0x25e064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E068u;
        goto label_25e068;
    }
    ctx->pc = 0x25E060u;
    SET_GPR_U32(ctx, 31, 0x25E068u);
    ctx->pc = 0x25E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E060u;
    // 0x25e064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25E060u, 0x25E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E068u;
label_25e068:
    // 0x25e068: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25e06c:
    // 0x25e06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e070:
    // 0x25e070: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25e070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e074:
    // 0x25e074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e078:
    // 0x25e078: 0x8c4539b0  lw          $a1, 0x39B0($v0)
    ctx->pc = 0x25e078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14768)));
label_25e07c:
    // 0x25e07c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e080:
    // 0x25e080: 0x8c4639b4  lw          $a2, 0x39B4($v0)
    ctx->pc = 0x25e080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14772)));
label_25e084:
    // 0x25e084: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25e084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e088:
    // 0x25e088: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25e088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25e08c:
    // 0x25e08c: 0xc0aa15e  jal         func_2A8578
label_25e090:
    if (ctx->pc == 0x25E090u) {
        ctx->pc = 0x25E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E08Cu;
        // 0x25e090: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E094u;
        goto label_25e094;
    }
    ctx->pc = 0x25E08Cu;
    SET_GPR_U32(ctx, 31, 0x25E094u);
    ctx->pc = 0x25E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E08Cu;
    // 0x25e090: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25E08Cu, 0x25E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E094u;
label_25e094:
    // 0x25e094: 0x8e040744  lw          $a0, 0x744($s0)
    ctx->pc = 0x25e094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1860)));
label_25e098:
    // 0x25e098: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e09c:
    if (ctx->pc == 0x25E09Cu) {
        ctx->pc = 0x25E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E098u;
        // 0x25e09c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0A0u;
        goto label_25e0a0;
    }
    ctx->pc = 0x25E098u;
    {
        const bool branch_taken_0x25e098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e098) {
            ctx->pc = 0x25E09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E098u;
            // 0x25e09c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E0ACu;
            goto label_25e0ac;
        }
    }
    ctx->pc = 0x25E0A0u;
label_25e0a0:
    // 0x25e0a0: 0xc09fa94  jal         func_27EA50
label_25e0a4:
    if (ctx->pc == 0x25E0A4u) {
        ctx->pc = 0x25E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0A0u;
        // 0x25e0a4: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0A8u;
        goto label_25e0a8;
    }
    ctx->pc = 0x25E0A0u;
    SET_GPR_U32(ctx, 31, 0x25E0A8u);
    ctx->pc = 0x25E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0A0u;
    // 0x25e0a4: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x25E0A0u, 0x25E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0A8u;
label_25e0a8:
    // 0x25e0a8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25e0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25e0ac:
    // 0x25e0ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e0b0:
    // 0x25e0b0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25e0b4:
    // 0x25e0b4: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25e0b8:
    // 0x25e0b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25e0bc:
    // 0x25e0bc: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x25e0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_25e0c0:
    // 0x25e0c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25e0c4:
    // 0x25e0c4: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25e0c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25e0c8:
    // 0x25e0c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25e0cc:
    if (ctx->pc == 0x25E0CCu) {
        ctx->pc = 0x25E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0C8u;
        // 0x25e0cc: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0D0u;
        goto label_25e0d0;
    }
    ctx->pc = 0x25E0C8u;
    {
        const bool branch_taken_0x25e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0C8u;
        // 0x25e0cc: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0c8) {
            ctx->pc = 0x25E0F0u;
            goto label_25e0f0;
        }
    }
    ctx->pc = 0x25E0D0u;
label_25e0d0:
    // 0x25e0d0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25e0d4:
    // 0x25e0d4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25e0d8:
    // 0x25e0d8: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25e0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25e0dc:
    // 0x25e0dc: 0x26430550  addiu       $v1, $s2, 0x550
    ctx->pc = 0x25e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
label_25e0e0:
    // 0x25e0e0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25e0e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25e0e4:
    // 0x25e0e4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25e0e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25e0e8:
    // 0x25e0e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25e0e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25e0ec:
    // 0x25e0ec: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25e0f0:
    // 0x25e0f0: 0xc055f06  jal         func_157C18
label_25e0f4:
    if (ctx->pc == 0x25E0F4u) {
        ctx->pc = 0x25E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0F0u;
        // 0x25e0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0F8u;
        goto label_25e0f8;
    }
    ctx->pc = 0x25E0F0u;
    SET_GPR_U32(ctx, 31, 0x25E0F8u);
    ctx->pc = 0x25E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0F0u;
    // 0x25e0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25E0F0u, 0x25E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0F8u;
label_25e0f8:
    // 0x25e0f8: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_25e0fc:
    if (ctx->pc == 0x25E0FCu) {
        ctx->pc = 0x25E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0F8u;
        // 0x25e0fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E100u;
        goto label_25e100;
    }
    ctx->pc = 0x25E0F8u;
    {
        const bool branch_taken_0x25e0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0F8u;
        // 0x25e0fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0f8) {
            ctx->pc = 0x25E20Cu;
            goto label_25e20c;
        }
    }
    ctx->pc = 0x25E100u;
label_25e100:
    // 0x25e100: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x25e100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_25e104:
    // 0x25e104: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25e104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25e108:
    // 0x25e108: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25e10c:
    if (ctx->pc == 0x25E10Cu) {
        ctx->pc = 0x25E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E108u;
        // 0x25e10c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E110u;
        goto label_25e110;
    }
    ctx->pc = 0x25E108u;
    {
        const bool branch_taken_0x25e108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E108u;
        // 0x25e10c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e108) {
            ctx->pc = 0x25E11Cu;
            goto label_25e11c;
        }
    }
    ctx->pc = 0x25E110u;
label_25e110:
    // 0x25e110: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x25e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_25e114:
    // 0x25e114: 0x10000002  b           . + 4 + (0x2 << 2)
label_25e118:
    if (ctx->pc == 0x25E118u) {
        ctx->pc = 0x25E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E114u;
        // 0x25e118: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E11Cu;
        goto label_25e11c;
    }
    ctx->pc = 0x25E114u;
    {
        const bool branch_taken_0x25e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E114u;
        // 0x25e118: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e114) {
            ctx->pc = 0x25E120u;
            goto label_25e120;
        }
    }
    ctx->pc = 0x25E11Cu;
label_25e11c:
    // 0x25e11c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25e11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e120:
    // 0x25e120: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_25e124:
    if (ctx->pc == 0x25E124u) {
        ctx->pc = 0x25E128u;
        goto label_25e128;
    }
    ctx->pc = 0x25E120u;
    {
        const bool branch_taken_0x25e120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e120) {
            ctx->pc = 0x25E1A4u;
            goto label_25e1a4;
        }
    }
    ctx->pc = 0x25E128u;
label_25e128:
    // 0x25e128: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x25e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_25e12c:
    // 0x25e12c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25e12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25e130:
    // 0x25e130: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25e130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25e134:
    // 0x25e134: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25e134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e138:
    // 0x25e138: 0xc0c7408  jal         func_31D020
label_25e13c:
    if (ctx->pc == 0x25E13Cu) {
        ctx->pc = 0x25E140u;
        goto label_25e140;
    }
    ctx->pc = 0x25E138u;
    SET_GPR_U32(ctx, 31, 0x25E140u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25E138u, 0x25E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E140u;
label_25e140:
    // 0x25e140: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25e144:
    // 0x25e144: 0xc0c7408  jal         func_31D020
label_25e148:
    if (ctx->pc == 0x25E148u) {
        ctx->pc = 0x25E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E144u;
        // 0x25e148: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E14Cu;
        goto label_25e14c;
    }
    ctx->pc = 0x25E144u;
    SET_GPR_U32(ctx, 31, 0x25E14Cu);
    ctx->pc = 0x25E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E144u;
    // 0x25e148: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25E144u, 0x25E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E14Cu;
label_25e14c:
    // 0x25e14c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25e150:
    // 0x25e150: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x25e150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_25e154:
    // 0x25e154: 0xc0c7400  jal         func_31D000
label_25e158:
    if (ctx->pc == 0x25E158u) {
        ctx->pc = 0x25E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E154u;
        // 0x25e158: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E15Cu;
        goto label_25e15c;
    }
    ctx->pc = 0x25E154u;
    SET_GPR_U32(ctx, 31, 0x25E15Cu);
    ctx->pc = 0x25E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E154u;
    // 0x25e158: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x25E154u, 0x25E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E15Cu;
label_25e15c:
    // 0x25e15c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25e160:
    // 0x25e160: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25e164:
    // 0x25e164: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25e164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25e168:
    // 0x25e168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e16c:
    // 0x25e16c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25e170:
    // 0x25e170: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_25e174:
    // 0x25e174: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25e174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e178:
    // 0x25e178: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e17c:
    // 0x25e17c: 0xc0c28ac  jal         func_30A2B0
label_25e180:
    if (ctx->pc == 0x25E180u) {
        ctx->pc = 0x25E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E17Cu;
        // 0x25e180: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E184u;
        goto label_25e184;
    }
    ctx->pc = 0x25E17Cu;
    SET_GPR_U32(ctx, 31, 0x25E184u);
    ctx->pc = 0x25E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E17Cu;
    // 0x25e180: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x25E17Cu, 0x25E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E184u;
label_25e184:
    // 0x25e184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e188:
    // 0x25e188: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e18c:
    // 0x25e18c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e190:
    // 0x25e190: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_25e194:
    // 0x25e194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e198:
    // 0x25e198: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x25e198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25e19c:
    // 0x25e19c: 0xc0c1a0e  jal         func_306838
label_25e1a0:
    if (ctx->pc == 0x25E1A0u) {
        ctx->pc = 0x25E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E19Cu;
        // 0x25e1a0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1A4u;
        goto label_25e1a4;
    }
    ctx->pc = 0x25E19Cu;
    SET_GPR_U32(ctx, 31, 0x25E1A4u);
    ctx->pc = 0x25E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E19Cu;
    // 0x25e1a0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x25E19Cu, 0x25E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1A4u;
label_25e1a4:
    // 0x25e1a4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25e1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_25e1a8:
    // 0x25e1a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e1ac:
    // 0x25e1ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25e1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e1b0:
    // 0x25e1b0: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x25e1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e1b4:
    // 0x25e1b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e1b8:
    // 0x25e1b8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25e1bc:
    // 0x25e1bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e1c0:
    // 0x25e1c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25e1c4:
    // 0x25e1c4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25e1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25e1c8:
    // 0x25e1c8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25e1cc:
    // 0x25e1cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_25e1d0:
    // 0x25e1d0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x25e1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_25e1d4:
    // 0x25e1d4: 0x40f809  jalr        $v0
label_25e1d8:
    if (ctx->pc == 0x25E1D8u) {
        ctx->pc = 0x25E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1D4u;
        // 0x25e1d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1DCu;
        goto label_25e1dc;
    }
    ctx->pc = 0x25E1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E1DCu);
        ctx->pc = 0x25E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1D4u;
        // 0x25e1d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E1D4u, 0x25E1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E1DCu;
label_25e1dc:
    // 0x25e1dc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25e1e0:
    // 0x25e1e0: 0xc60c0600  lwc1        $f12, 0x600($s0)
    ctx->pc = 0x25e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25e1e4:
    // 0x25e1e4: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25e1e8:
    // 0x25e1e8: 0xc0aa65e  jal         func_2A9978
label_25e1ec:
    if (ctx->pc == 0x25E1ECu) {
        ctx->pc = 0x25E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1E8u;
        // 0x25e1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1F0u;
        goto label_25e1f0;
    }
    ctx->pc = 0x25E1E8u;
    SET_GPR_U32(ctx, 31, 0x25E1F0u);
    ctx->pc = 0x25E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1E8u;
    // 0x25e1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25E1E8u, 0x25E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1F0u;
label_25e1f0:
    // 0x25e1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e1f4:
    // 0x25e1f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25e1f8:
    // 0x25e1f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25e1fc:
    // 0x25e1fc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25e1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25e200:
    // 0x25e200: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25e200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25e204:
    // 0x25e204: 0xa20402f7  sb          $a0, 0x2F7($s0)
    ctx->pc = 0x25e204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 4));
label_25e208:
    // 0x25e208: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x25e208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_25e20c:
    // 0x25e20c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e210:
    // 0x25e210: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25e210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e214:
    // 0x25e214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e218:
    // 0x25e218: 0xc053e7c  jal         func_14F9F0
label_25e21c:
    if (ctx->pc == 0x25E21Cu) {
        ctx->pc = 0x25E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E218u;
        // 0x25e21c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E220u;
        goto label_25e220;
    }
    ctx->pc = 0x25E218u;
    SET_GPR_U32(ctx, 31, 0x25E220u);
    ctx->pc = 0x25E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E218u;
    // 0x25e21c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25E218u, 0x25E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E220u;
label_25e220:
    // 0x25e220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e224:
    // 0x25e224: 0xc053e4a  jal         func_14F928
label_25e228:
    if (ctx->pc == 0x25E228u) {
        ctx->pc = 0x25E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E224u;
        // 0x25e228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E22Cu;
        goto label_25e22c;
    }
    ctx->pc = 0x25E224u;
    SET_GPR_U32(ctx, 31, 0x25E22Cu);
    ctx->pc = 0x25E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E224u;
    // 0x25e228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25E224u, 0x25E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E22Cu;
label_25e22c:
    // 0x25e22c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25e22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25e230:
    // 0x25e230: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25e230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25e234:
    // 0x25e234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25e234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25e238:
    // 0x25e238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e23c:
    // 0x25e23c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25e240:
    // 0x25e240: 0x3e00008  jr          $ra
label_25e244:
    if (ctx->pc == 0x25E244u) {
        ctx->pc = 0x25E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E240u;
        // 0x25e244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E248u;
        goto label_fallthrough_0x25e240;
    }
    ctx->pc = 0x25E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E240u;
        // 0x25e244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e240:
    ctx->pc = 0x25E248u;
}
