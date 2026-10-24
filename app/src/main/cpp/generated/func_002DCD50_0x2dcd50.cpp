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

// Function: func_002DCD50
// Address: 0x2dcd50 - 0x2dd270
void func_002DCD50_0x2dcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DCD50_0x2dcd50");
#endif

    switch (ctx->pc) {
        case 0x2dcd50u: goto label_2dcd50;
        case 0x2dcd54u: goto label_2dcd54;
        case 0x2dcd58u: goto label_2dcd58;
        case 0x2dcd5cu: goto label_2dcd5c;
        case 0x2dcd60u: goto label_2dcd60;
        case 0x2dcd64u: goto label_2dcd64;
        case 0x2dcd68u: goto label_2dcd68;
        case 0x2dcd6cu: goto label_2dcd6c;
        case 0x2dcd70u: goto label_2dcd70;
        case 0x2dcd74u: goto label_2dcd74;
        case 0x2dcd78u: goto label_2dcd78;
        case 0x2dcd7cu: goto label_2dcd7c;
        case 0x2dcd80u: goto label_2dcd80;
        case 0x2dcd84u: goto label_2dcd84;
        case 0x2dcd88u: goto label_2dcd88;
        case 0x2dcd8cu: goto label_2dcd8c;
        case 0x2dcd90u: goto label_2dcd90;
        case 0x2dcd94u: goto label_2dcd94;
        case 0x2dcd98u: goto label_2dcd98;
        case 0x2dcd9cu: goto label_2dcd9c;
        case 0x2dcda0u: goto label_2dcda0;
        case 0x2dcda4u: goto label_2dcda4;
        case 0x2dcda8u: goto label_2dcda8;
        case 0x2dcdacu: goto label_2dcdac;
        case 0x2dcdb0u: goto label_2dcdb0;
        case 0x2dcdb4u: goto label_2dcdb4;
        case 0x2dcdb8u: goto label_2dcdb8;
        case 0x2dcdbcu: goto label_2dcdbc;
        case 0x2dcdc0u: goto label_2dcdc0;
        case 0x2dcdc4u: goto label_2dcdc4;
        case 0x2dcdc8u: goto label_2dcdc8;
        case 0x2dcdccu: goto label_2dcdcc;
        case 0x2dcdd0u: goto label_2dcdd0;
        case 0x2dcdd4u: goto label_2dcdd4;
        case 0x2dcdd8u: goto label_2dcdd8;
        case 0x2dcddcu: goto label_2dcddc;
        case 0x2dcde0u: goto label_2dcde0;
        case 0x2dcde4u: goto label_2dcde4;
        case 0x2dcde8u: goto label_2dcde8;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dcdf0u: goto label_2dcdf0;
        case 0x2dcdf4u: goto label_2dcdf4;
        case 0x2dcdf8u: goto label_2dcdf8;
        case 0x2dcdfcu: goto label_2dcdfc;
        case 0x2dce00u: goto label_2dce00;
        case 0x2dce04u: goto label_2dce04;
        case 0x2dce08u: goto label_2dce08;
        case 0x2dce0cu: goto label_2dce0c;
        case 0x2dce10u: goto label_2dce10;
        case 0x2dce14u: goto label_2dce14;
        case 0x2dce18u: goto label_2dce18;
        case 0x2dce1cu: goto label_2dce1c;
        case 0x2dce20u: goto label_2dce20;
        case 0x2dce24u: goto label_2dce24;
        case 0x2dce28u: goto label_2dce28;
        case 0x2dce2cu: goto label_2dce2c;
        case 0x2dce30u: goto label_2dce30;
        case 0x2dce34u: goto label_2dce34;
        case 0x2dce38u: goto label_2dce38;
        case 0x2dce3cu: goto label_2dce3c;
        case 0x2dce40u: goto label_2dce40;
        case 0x2dce44u: goto label_2dce44;
        case 0x2dce48u: goto label_2dce48;
        case 0x2dce4cu: goto label_2dce4c;
        case 0x2dce50u: goto label_2dce50;
        case 0x2dce54u: goto label_2dce54;
        case 0x2dce58u: goto label_2dce58;
        case 0x2dce5cu: goto label_2dce5c;
        case 0x2dce60u: goto label_2dce60;
        case 0x2dce64u: goto label_2dce64;
        case 0x2dce68u: goto label_2dce68;
        case 0x2dce6cu: goto label_2dce6c;
        case 0x2dce70u: goto label_2dce70;
        case 0x2dce74u: goto label_2dce74;
        case 0x2dce78u: goto label_2dce78;
        case 0x2dce7cu: goto label_2dce7c;
        case 0x2dce80u: goto label_2dce80;
        case 0x2dce84u: goto label_2dce84;
        case 0x2dce88u: goto label_2dce88;
        case 0x2dce8cu: goto label_2dce8c;
        case 0x2dce90u: goto label_2dce90;
        case 0x2dce94u: goto label_2dce94;
        case 0x2dce98u: goto label_2dce98;
        case 0x2dce9cu: goto label_2dce9c;
        case 0x2dcea0u: goto label_2dcea0;
        case 0x2dcea4u: goto label_2dcea4;
        case 0x2dcea8u: goto label_2dcea8;
        case 0x2dceacu: goto label_2dceac;
        case 0x2dceb0u: goto label_2dceb0;
        case 0x2dceb4u: goto label_2dceb4;
        case 0x2dceb8u: goto label_2dceb8;
        case 0x2dcebcu: goto label_2dcebc;
        case 0x2dcec0u: goto label_2dcec0;
        case 0x2dcec4u: goto label_2dcec4;
        case 0x2dcec8u: goto label_2dcec8;
        case 0x2dceccu: goto label_2dcecc;
        case 0x2dced0u: goto label_2dced0;
        case 0x2dced4u: goto label_2dced4;
        case 0x2dced8u: goto label_2dced8;
        case 0x2dcedcu: goto label_2dcedc;
        case 0x2dcee0u: goto label_2dcee0;
        case 0x2dcee4u: goto label_2dcee4;
        case 0x2dcee8u: goto label_2dcee8;
        case 0x2dceecu: goto label_2dceec;
        case 0x2dcef0u: goto label_2dcef0;
        case 0x2dcef4u: goto label_2dcef4;
        case 0x2dcef8u: goto label_2dcef8;
        case 0x2dcefcu: goto label_2dcefc;
        case 0x2dcf00u: goto label_2dcf00;
        case 0x2dcf04u: goto label_2dcf04;
        case 0x2dcf08u: goto label_2dcf08;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf10u: goto label_2dcf10;
        case 0x2dcf14u: goto label_2dcf14;
        case 0x2dcf18u: goto label_2dcf18;
        case 0x2dcf1cu: goto label_2dcf1c;
        case 0x2dcf20u: goto label_2dcf20;
        case 0x2dcf24u: goto label_2dcf24;
        case 0x2dcf28u: goto label_2dcf28;
        case 0x2dcf2cu: goto label_2dcf2c;
        case 0x2dcf30u: goto label_2dcf30;
        case 0x2dcf34u: goto label_2dcf34;
        case 0x2dcf38u: goto label_2dcf38;
        case 0x2dcf3cu: goto label_2dcf3c;
        case 0x2dcf40u: goto label_2dcf40;
        case 0x2dcf44u: goto label_2dcf44;
        case 0x2dcf48u: goto label_2dcf48;
        case 0x2dcf4cu: goto label_2dcf4c;
        case 0x2dcf50u: goto label_2dcf50;
        case 0x2dcf54u: goto label_2dcf54;
        case 0x2dcf58u: goto label_2dcf58;
        case 0x2dcf5cu: goto label_2dcf5c;
        case 0x2dcf60u: goto label_2dcf60;
        case 0x2dcf64u: goto label_2dcf64;
        case 0x2dcf68u: goto label_2dcf68;
        case 0x2dcf6cu: goto label_2dcf6c;
        case 0x2dcf70u: goto label_2dcf70;
        case 0x2dcf74u: goto label_2dcf74;
        case 0x2dcf78u: goto label_2dcf78;
        case 0x2dcf7cu: goto label_2dcf7c;
        case 0x2dcf80u: goto label_2dcf80;
        case 0x2dcf84u: goto label_2dcf84;
        case 0x2dcf88u: goto label_2dcf88;
        case 0x2dcf8cu: goto label_2dcf8c;
        case 0x2dcf90u: goto label_2dcf90;
        case 0x2dcf94u: goto label_2dcf94;
        case 0x2dcf98u: goto label_2dcf98;
        case 0x2dcf9cu: goto label_2dcf9c;
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfa4u: goto label_2dcfa4;
        case 0x2dcfa8u: goto label_2dcfa8;
        case 0x2dcfacu: goto label_2dcfac;
        case 0x2dcfb0u: goto label_2dcfb0;
        case 0x2dcfb4u: goto label_2dcfb4;
        case 0x2dcfb8u: goto label_2dcfb8;
        case 0x2dcfbcu: goto label_2dcfbc;
        case 0x2dcfc0u: goto label_2dcfc0;
        case 0x2dcfc4u: goto label_2dcfc4;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dcfccu: goto label_2dcfcc;
        case 0x2dcfd0u: goto label_2dcfd0;
        case 0x2dcfd4u: goto label_2dcfd4;
        case 0x2dcfd8u: goto label_2dcfd8;
        case 0x2dcfdcu: goto label_2dcfdc;
        case 0x2dcfe0u: goto label_2dcfe0;
        case 0x2dcfe4u: goto label_2dcfe4;
        case 0x2dcfe8u: goto label_2dcfe8;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dcff0u: goto label_2dcff0;
        case 0x2dcff4u: goto label_2dcff4;
        case 0x2dcff8u: goto label_2dcff8;
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd000u: goto label_2dd000;
        case 0x2dd004u: goto label_2dd004;
        case 0x2dd008u: goto label_2dd008;
        case 0x2dd00cu: goto label_2dd00c;
        case 0x2dd010u: goto label_2dd010;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd018u: goto label_2dd018;
        case 0x2dd01cu: goto label_2dd01c;
        case 0x2dd020u: goto label_2dd020;
        case 0x2dd024u: goto label_2dd024;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd02cu: goto label_2dd02c;
        case 0x2dd030u: goto label_2dd030;
        case 0x2dd034u: goto label_2dd034;
        case 0x2dd038u: goto label_2dd038;
        case 0x2dd03cu: goto label_2dd03c;
        case 0x2dd040u: goto label_2dd040;
        case 0x2dd044u: goto label_2dd044;
        case 0x2dd048u: goto label_2dd048;
        case 0x2dd04cu: goto label_2dd04c;
        case 0x2dd050u: goto label_2dd050;
        case 0x2dd054u: goto label_2dd054;
        case 0x2dd058u: goto label_2dd058;
        case 0x2dd05cu: goto label_2dd05c;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd064u: goto label_2dd064;
        case 0x2dd068u: goto label_2dd068;
        case 0x2dd06cu: goto label_2dd06c;
        case 0x2dd070u: goto label_2dd070;
        case 0x2dd074u: goto label_2dd074;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd084u: goto label_2dd084;
        case 0x2dd088u: goto label_2dd088;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd094u: goto label_2dd094;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd09cu: goto label_2dd09c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0a4u: goto label_2dd0a4;
        case 0x2dd0a8u: goto label_2dd0a8;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0b0u: goto label_2dd0b0;
        case 0x2dd0b4u: goto label_2dd0b4;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0bcu: goto label_2dd0bc;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0c4u: goto label_2dd0c4;
        case 0x2dd0c8u: goto label_2dd0c8;
        case 0x2dd0ccu: goto label_2dd0cc;
        case 0x2dd0d0u: goto label_2dd0d0;
        case 0x2dd0d4u: goto label_2dd0d4;
        case 0x2dd0d8u: goto label_2dd0d8;
        case 0x2dd0dcu: goto label_2dd0dc;
        case 0x2dd0e0u: goto label_2dd0e0;
        case 0x2dd0e4u: goto label_2dd0e4;
        case 0x2dd0e8u: goto label_2dd0e8;
        case 0x2dd0ecu: goto label_2dd0ec;
        case 0x2dd0f0u: goto label_2dd0f0;
        case 0x2dd0f4u: goto label_2dd0f4;
        case 0x2dd0f8u: goto label_2dd0f8;
        case 0x2dd0fcu: goto label_2dd0fc;
        case 0x2dd100u: goto label_2dd100;
        case 0x2dd104u: goto label_2dd104;
        case 0x2dd108u: goto label_2dd108;
        case 0x2dd10cu: goto label_2dd10c;
        case 0x2dd110u: goto label_2dd110;
        case 0x2dd114u: goto label_2dd114;
        case 0x2dd118u: goto label_2dd118;
        case 0x2dd11cu: goto label_2dd11c;
        case 0x2dd120u: goto label_2dd120;
        case 0x2dd124u: goto label_2dd124;
        case 0x2dd128u: goto label_2dd128;
        case 0x2dd12cu: goto label_2dd12c;
        case 0x2dd130u: goto label_2dd130;
        case 0x2dd134u: goto label_2dd134;
        case 0x2dd138u: goto label_2dd138;
        case 0x2dd13cu: goto label_2dd13c;
        case 0x2dd140u: goto label_2dd140;
        case 0x2dd144u: goto label_2dd144;
        case 0x2dd148u: goto label_2dd148;
        case 0x2dd14cu: goto label_2dd14c;
        case 0x2dd150u: goto label_2dd150;
        case 0x2dd154u: goto label_2dd154;
        case 0x2dd158u: goto label_2dd158;
        case 0x2dd15cu: goto label_2dd15c;
        case 0x2dd160u: goto label_2dd160;
        case 0x2dd164u: goto label_2dd164;
        case 0x2dd168u: goto label_2dd168;
        case 0x2dd16cu: goto label_2dd16c;
        case 0x2dd170u: goto label_2dd170;
        case 0x2dd174u: goto label_2dd174;
        case 0x2dd178u: goto label_2dd178;
        case 0x2dd17cu: goto label_2dd17c;
        case 0x2dd180u: goto label_2dd180;
        case 0x2dd184u: goto label_2dd184;
        case 0x2dd188u: goto label_2dd188;
        case 0x2dd18cu: goto label_2dd18c;
        case 0x2dd190u: goto label_2dd190;
        case 0x2dd194u: goto label_2dd194;
        case 0x2dd198u: goto label_2dd198;
        case 0x2dd19cu: goto label_2dd19c;
        case 0x2dd1a0u: goto label_2dd1a0;
        case 0x2dd1a4u: goto label_2dd1a4;
        case 0x2dd1a8u: goto label_2dd1a8;
        case 0x2dd1acu: goto label_2dd1ac;
        case 0x2dd1b0u: goto label_2dd1b0;
        case 0x2dd1b4u: goto label_2dd1b4;
        case 0x2dd1b8u: goto label_2dd1b8;
        case 0x2dd1bcu: goto label_2dd1bc;
        case 0x2dd1c0u: goto label_2dd1c0;
        case 0x2dd1c4u: goto label_2dd1c4;
        case 0x2dd1c8u: goto label_2dd1c8;
        case 0x2dd1ccu: goto label_2dd1cc;
        case 0x2dd1d0u: goto label_2dd1d0;
        case 0x2dd1d4u: goto label_2dd1d4;
        case 0x2dd1d8u: goto label_2dd1d8;
        case 0x2dd1dcu: goto label_2dd1dc;
        case 0x2dd1e0u: goto label_2dd1e0;
        case 0x2dd1e4u: goto label_2dd1e4;
        case 0x2dd1e8u: goto label_2dd1e8;
        case 0x2dd1ecu: goto label_2dd1ec;
        case 0x2dd1f0u: goto label_2dd1f0;
        case 0x2dd1f4u: goto label_2dd1f4;
        case 0x2dd1f8u: goto label_2dd1f8;
        case 0x2dd1fcu: goto label_2dd1fc;
        case 0x2dd200u: goto label_2dd200;
        case 0x2dd204u: goto label_2dd204;
        case 0x2dd208u: goto label_2dd208;
        case 0x2dd20cu: goto label_2dd20c;
        case 0x2dd210u: goto label_2dd210;
        case 0x2dd214u: goto label_2dd214;
        case 0x2dd218u: goto label_2dd218;
        case 0x2dd21cu: goto label_2dd21c;
        case 0x2dd220u: goto label_2dd220;
        case 0x2dd224u: goto label_2dd224;
        case 0x2dd228u: goto label_2dd228;
        case 0x2dd22cu: goto label_2dd22c;
        case 0x2dd230u: goto label_2dd230;
        case 0x2dd234u: goto label_2dd234;
        case 0x2dd238u: goto label_2dd238;
        case 0x2dd23cu: goto label_2dd23c;
        case 0x2dd240u: goto label_2dd240;
        case 0x2dd244u: goto label_2dd244;
        case 0x2dd248u: goto label_2dd248;
        case 0x2dd24cu: goto label_2dd24c;
        case 0x2dd250u: goto label_2dd250;
        case 0x2dd254u: goto label_2dd254;
        case 0x2dd258u: goto label_2dd258;
        case 0x2dd25cu: goto label_2dd25c;
        case 0x2dd260u: goto label_2dd260;
        case 0x2dd264u: goto label_2dd264;
        case 0x2dd268u: goto label_2dd268;
        case 0x2dd26cu: goto label_2dd26c;
        default: break;
    }

    ctx->pc = 0x2dcd50u;

label_2dcd50:
    // 0x2dcd50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dcd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2dcd54:
    // 0x2dcd54: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2dcd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2dcd58:
    // 0x2dcd58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2dcd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2dcd5c:
    // 0x2dcd5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcd5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd60:
    // 0x2dcd60: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2dcd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2dcd64:
    // 0x2dcd64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dcd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2dcd68:
    // 0x2dcd68: 0xc0b6dac  jal         func_2DB6B0
label_2dcd6c:
    if (ctx->pc == 0x2DCD6Cu) {
        ctx->pc = 0x2DCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD68u;
        // 0x2dcd6c: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD70u;
        goto label_2dcd70;
    }
    ctx->pc = 0x2DCD68u;
    SET_GPR_U32(ctx, 31, 0x2DCD70u);
    ctx->pc = 0x2DCD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD68u;
    // 0x2dcd6c: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DCD68u, 0x2DCD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD70u;
label_2dcd70:
    // 0x2dcd70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dcd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd74:
    // 0x2dcd74: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2dcd78:
    // 0x2dcd78: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x2dcd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_2dcd7c:
    // 0x2dcd7c: 0xc0a4c40  jal         func_293100
label_2dcd80:
    if (ctx->pc == 0x2DCD80u) {
        ctx->pc = 0x2DCD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD7Cu;
        // 0x2dcd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD84u;
        goto label_2dcd84;
    }
    ctx->pc = 0x2DCD7Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD84u);
    ctx->pc = 0x2DCD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD7Cu;
    // 0x2dcd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DCD7Cu, 0x2DCD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD84u;
label_2dcd84:
    // 0x2dcd84: 0x54400134  bnel        $v0, $zero, . + 4 + (0x134 << 2)
label_2dcd88:
    if (ctx->pc == 0x2DCD88u) {
        ctx->pc = 0x2DCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD84u;
        // 0x2dcd88: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD8Cu;
        goto label_2dcd8c;
    }
    ctx->pc = 0x2DCD84u;
    {
        const bool branch_taken_0x2dcd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd84) {
            ctx->pc = 0x2DCD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD84u;
            // 0x2dcd88: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCD8Cu;
label_2dcd8c:
    // 0x2dcd8c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_2dcd90:
    // 0x2dcd90: 0x58400131  blezl       $v0, . + 4 + (0x131 << 2)
label_2dcd94:
    if (ctx->pc == 0x2DCD94u) {
        ctx->pc = 0x2DCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD90u;
        // 0x2dcd94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCD98u;
        goto label_2dcd98;
    }
    ctx->pc = 0x2DCD90u;
    {
        const bool branch_taken_0x2dcd90 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dcd90) {
            ctx->pc = 0x2DCD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD90u;
            // 0x2dcd94: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCD98u;
label_2dcd98:
    // 0x2dcd98: 0xc042da6  jal         func_10B698
label_2dcd9c:
    if (ctx->pc == 0x2DCD9Cu) {
        ctx->pc = 0x2DCD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD98u;
        // 0x2dcd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDA0u;
        goto label_2dcda0;
    }
    ctx->pc = 0x2DCD98u;
    SET_GPR_U32(ctx, 31, 0x2DCDA0u);
    ctx->pc = 0x2DCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD98u;
    // 0x2dcd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DCD98u, 0x2DCDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDA0u;
label_2dcda0:
    // 0x2dcda0: 0x5440012d  bnel        $v0, $zero, . + 4 + (0x12D << 2)
label_2dcda4:
    if (ctx->pc == 0x2DCDA4u) {
        ctx->pc = 0x2DCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDA0u;
        // 0x2dcda4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDA8u;
        goto label_2dcda8;
    }
    ctx->pc = 0x2DCDA0u;
    {
        const bool branch_taken_0x2dcda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcda0) {
            ctx->pc = 0x2DCDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCDA0u;
            // 0x2dcda4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCDA8u;
label_2dcda8:
    // 0x2dcda8: 0x8e020514  lw          $v0, 0x514($s0)
    ctx->pc = 0x2dcda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1300)));
label_2dcdac:
    // 0x2dcdac: 0x5c40012a  bgtzl       $v0, . + 4 + (0x12A << 2)
label_2dcdb0:
    if (ctx->pc == 0x2DCDB0u) {
        ctx->pc = 0x2DCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDACu;
        // 0x2dcdb0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDB4u;
        goto label_2dcdb4;
    }
    ctx->pc = 0x2DCDACu;
    {
        const bool branch_taken_0x2dcdac = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2dcdac) {
            ctx->pc = 0x2DCDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCDACu;
            // 0x2dcdb0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCDB4u;
label_2dcdb4:
    // 0x2dcdb4: 0xc0a4c40  jal         func_293100
label_2dcdb8:
    if (ctx->pc == 0x2DCDB8u) {
        ctx->pc = 0x2DCDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDB4u;
        // 0x2dcdb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDBCu;
        goto label_2dcdbc;
    }
    ctx->pc = 0x2DCDB4u;
    SET_GPR_U32(ctx, 31, 0x2DCDBCu);
    ctx->pc = 0x2DCDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDB4u;
    // 0x2dcdb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DCDB4u, 0x2DCDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDBCu;
label_2dcdbc:
    // 0x2dcdbc: 0x54400126  bnel        $v0, $zero, . + 4 + (0x126 << 2)
label_2dcdc0:
    if (ctx->pc == 0x2DCDC0u) {
        ctx->pc = 0x2DCDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDBCu;
        // 0x2dcdc0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDC4u;
        goto label_2dcdc4;
    }
    ctx->pc = 0x2DCDBCu;
    {
        const bool branch_taken_0x2dcdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdbc) {
            ctx->pc = 0x2DCDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCDBCu;
            // 0x2dcdc0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCDC4u;
label_2dcdc4:
    // 0x2dcdc4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2dcdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2dcdc8:
    // 0x2dcdc8: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x2dcdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
label_2dcdcc:
    // 0x2dcdcc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2dcdd0:
    if (ctx->pc == 0x2DCDD0u) {
        ctx->pc = 0x2DCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDCCu;
        // 0x2dcdd0: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDD4u;
        goto label_2dcdd4;
    }
    ctx->pc = 0x2DCDCCu;
    {
        const bool branch_taken_0x2dcdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdcc) {
            ctx->pc = 0x2DCDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCDCCu;
            // 0x2dcdd0: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCDECu;
            goto label_2dcdec;
        }
    }
    ctx->pc = 0x2DCDD4u;
label_2dcdd4:
    // 0x2dcdd4: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2dcdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_2dcdd8:
    // 0x2dcdd8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2dcddc:
    if (ctx->pc == 0x2DCDDCu) {
        ctx->pc = 0x2DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDD8u;
        // 0x2dcddc: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDE0u;
        goto label_2dcde0;
    }
    ctx->pc = 0x2DCDD8u;
    {
        const bool branch_taken_0x2dcdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdd8) {
            ctx->pc = 0x2DCDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCDD8u;
            // 0x2dcddc: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCE0Cu;
            goto label_2dce0c;
        }
    }
    ctx->pc = 0x2DCDE0u;
label_2dcde0:
    // 0x2dcde0: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_2dcde4:
    // 0x2dcde4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2dcde8:
    if (ctx->pc == 0x2DCDE8u) {
        ctx->pc = 0x2DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDE4u;
        // 0x2dcde8: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDECu;
        goto label_2dcdec;
    }
    ctx->pc = 0x2DCDE4u;
    {
        const bool branch_taken_0x2dcde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDE4u;
        // 0x2dcde8: 0x92220620  lbu         $v0, 0x620($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcde4) {
            ctx->pc = 0x2DCE2Cu;
            goto label_2dce2c;
        }
    }
    ctx->pc = 0x2DCDECu;
label_2dcdec:
    // 0x2dcdec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2dcdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2dcdf0:
    // 0x2dcdf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dcdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dcdf4:
    // 0x2dcdf4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2dcdf8:
    if (ctx->pc == 0x2DCDF8u) {
        ctx->pc = 0x2DCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDF4u;
        // 0x2dcdf8: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCDFCu;
        goto label_2dcdfc;
    }
    ctx->pc = 0x2DCDF4u;
    {
        const bool branch_taken_0x2dcdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDF4u;
        // 0x2dcdf8: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdf4) {
            ctx->pc = 0x2DCE44u;
            goto label_2dce44;
        }
    }
    ctx->pc = 0x2DCDFCu;
label_2dcdfc:
    // 0x2dcdfc: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2dcdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2dce00:
    // 0x2dce00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dce00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dce04:
    // 0x2dce04: 0x10000010  b           . + 4 + (0x10 << 2)
label_2dce08:
    if (ctx->pc == 0x2DCE08u) {
        ctx->pc = 0x2DCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE04u;
        // 0x2dce08: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE0Cu;
        goto label_2dce0c;
    }
    ctx->pc = 0x2DCE04u;
    {
        const bool branch_taken_0x2dce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE04u;
        // 0x2dce08: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce04) {
            ctx->pc = 0x2DCE48u;
            goto label_2dce48;
        }
    }
    ctx->pc = 0x2DCE0Cu;
label_2dce0c:
    // 0x2dce0c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dce0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2dce10:
    // 0x2dce10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dce10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dce14:
    // 0x2dce14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2dce18:
    if (ctx->pc == 0x2DCE18u) {
        ctx->pc = 0x2DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE14u;
        // 0x2dce18: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE1Cu;
        goto label_2dce1c;
    }
    ctx->pc = 0x2DCE14u;
    {
        const bool branch_taken_0x2dce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE14u;
        // 0x2dce18: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce14) {
            ctx->pc = 0x2DCE44u;
            goto label_2dce44;
        }
    }
    ctx->pc = 0x2DCE1Cu;
label_2dce1c:
    // 0x2dce1c: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2dce1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
label_2dce20:
    // 0x2dce20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dce20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dce24:
    // 0x2dce24: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dce28:
    if (ctx->pc == 0x2DCE28u) {
        ctx->pc = 0x2DCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE24u;
        // 0x2dce28: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE2Cu;
        goto label_2dce2c;
    }
    ctx->pc = 0x2DCE24u;
    {
        const bool branch_taken_0x2dce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE24u;
        // 0x2dce28: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce24) {
            ctx->pc = 0x2DCE48u;
            goto label_2dce48;
        }
    }
    ctx->pc = 0x2DCE2Cu;
label_2dce2c:
    // 0x2dce2c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2dce2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2dce30:
    // 0x2dce30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dce30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dce34:
    // 0x2dce34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2dce38:
    if (ctx->pc == 0x2DCE38u) {
        ctx->pc = 0x2DCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE34u;
        // 0x2dce38: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE3Cu;
        goto label_2dce3c;
    }
    ctx->pc = 0x2DCE34u;
    {
        const bool branch_taken_0x2dce34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE34u;
        // 0x2dce38: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce34) {
            ctx->pc = 0x2DCE44u;
            goto label_2dce44;
        }
    }
    ctx->pc = 0x2DCE3Cu;
label_2dce3c:
    // 0x2dce3c: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x2dce3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_2dce40:
    // 0x2dce40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dce44:
    // 0x2dce44: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2dce44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2dce48:
    // 0x2dce48: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2dce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2dce4c:
    // 0x2dce4c: 0x40f809  jalr        $v0
label_2dce50:
    if (ctx->pc == 0x2DCE50u) {
        ctx->pc = 0x2DCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE4Cu;
        // 0x2dce50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE54u;
        goto label_2dce54;
    }
    ctx->pc = 0x2DCE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCE54u);
        ctx->pc = 0x2DCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE4Cu;
        // 0x2dce50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE4Cu, 0x2DCE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCE54u;
label_2dce54:
    // 0x2dce54: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x2dce54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2dce58:
    // 0x2dce58: 0xc07dfac  jal         func_1F7EB0
label_2dce5c:
    if (ctx->pc == 0x2DCE5Cu) {
        ctx->pc = 0x2DCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE58u;
        // 0x2dce5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE60u;
        goto label_2dce60;
    }
    ctx->pc = 0x2DCE58u;
    SET_GPR_U32(ctx, 31, 0x2DCE60u);
    ctx->pc = 0x2DCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE58u;
    // 0x2dce5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2DCE58u, 0x2DCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE60u;
label_2dce60:
    // 0x2dce60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2dce60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dce64:
    // 0x2dce64: 0x0  nop
    ctx->pc = 0x2dce64u;
    // NOP
label_2dce68:
    // 0x2dce68: 0x450100fb  bc1t        . + 4 + (0xFB << 2)
label_2dce6c:
    if (ctx->pc == 0x2DCE6Cu) {
        ctx->pc = 0x2DCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE68u;
        // 0x2dce6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE70u;
        goto label_2dce70;
    }
    ctx->pc = 0x2DCE68u;
    {
        const bool branch_taken_0x2dce68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE68u;
        // 0x2dce6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce68) {
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCE70u;
label_2dce70:
    // 0x2dce70: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2dce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2dce74:
    // 0x2dce74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dce74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dce78:
    // 0x2dce78: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2dce78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2dce7c:
    // 0x2dce7c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2dce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2dce80:
    // 0x2dce80: 0x40f809  jalr        $v0
label_2dce84:
    if (ctx->pc == 0x2DCE84u) {
        ctx->pc = 0x2DCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE80u;
        // 0x2dce84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE88u;
        goto label_2dce88;
    }
    ctx->pc = 0x2DCE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCE88u);
        ctx->pc = 0x2DCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE80u;
        // 0x2dce84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE80u, 0x2DCE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCE88u;
label_2dce88:
    // 0x2dce88: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2dce8c:
    // 0x2dce8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2dce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dce90:
    // 0x2dce90: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2dce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dce94:
    // 0x2dce94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dce94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2dce98:
    // 0x2dce98: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dce98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dce9c:
    // 0x2dce9c: 0x0  nop
    ctx->pc = 0x2dce9cu;
    // NOP
label_2dcea0:
    // 0x2dcea0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dcea4:
    if (ctx->pc == 0x2DCEA4u) {
        ctx->pc = 0x2DCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEA0u;
        // 0x2dcea4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEA8u;
        goto label_2dcea8;
    }
    ctx->pc = 0x2DCEA0u;
    {
        const bool branch_taken_0x2dcea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEA0u;
        // 0x2dcea4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcea0) {
            ctx->pc = 0x2DCEACu;
            goto label_2dceac;
        }
    }
    ctx->pc = 0x2DCEA8u;
label_2dcea8:
    // 0x2dcea8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2dcea8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2dceac:
    // 0x2dceac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2dceb0:
    // 0x2dceb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dceb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dceb4:
    // 0x2dceb4: 0x0  nop
    ctx->pc = 0x2dceb4u;
    // NOP
label_2dceb8:
    // 0x2dceb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dceb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcebc:
    // 0x2dcebc: 0x0  nop
    ctx->pc = 0x2dcebcu;
    // NOP
label_2dcec0:
    // 0x2dcec0: 0x450300e5  bc1tl       . + 4 + (0xE5 << 2)
label_2dcec4:
    if (ctx->pc == 0x2DCEC4u) {
        ctx->pc = 0x2DCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEC0u;
        // 0x2dcec4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEC8u;
        goto label_2dcec8;
    }
    ctx->pc = 0x2DCEC0u;
    {
        const bool branch_taken_0x2dcec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcec0) {
            ctx->pc = 0x2DCEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCEC0u;
            // 0x2dcec4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCEC8u;
label_2dcec8:
    // 0x2dcec8: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2dcec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2dcecc:
    // 0x2dcecc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2dceccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2dced0:
    // 0x2dced0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2dced4:
    // 0x2dced4: 0x40f809  jalr        $v0
label_2dced8:
    if (ctx->pc == 0x2DCED8u) {
        ctx->pc = 0x2DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCED4u;
        // 0x2dced8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEDCu;
        goto label_2dcedc;
    }
    ctx->pc = 0x2DCED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCEDCu);
        ctx->pc = 0x2DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCED4u;
        // 0x2dced8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCED4u, 0x2DCEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCEDCu;
label_2dcedc:
    // 0x2dcedc: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2dcedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcee0:
    // 0x2dcee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcee4:
    // 0x2dcee4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2dcee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2dcee8:
    // 0x2dcee8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dcee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2dceec:
    // 0x2dceec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dceecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dcef0:
    // 0x2dcef0: 0xc0b680e  jal         func_2DA038
label_2dcef4:
    if (ctx->pc == 0x2DCEF4u) {
        ctx->pc = 0x2DCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEF0u;
        // 0x2dcef4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEF8u;
        goto label_2dcef8;
    }
    ctx->pc = 0x2DCEF0u;
    SET_GPR_U32(ctx, 31, 0x2DCEF8u);
    ctx->pc = 0x2DCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEF0u;
    // 0x2dcef4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2DCEF0u, 0x2DCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEF8u;
label_2dcef8:
    // 0x2dcef8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dcef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcefc:
    // 0x2dcefc: 0x0  nop
    ctx->pc = 0x2dcefcu;
    // NOP
label_2dcf00:
    // 0x2dcf00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dcf04:
    if (ctx->pc == 0x2DCF04u) {
        ctx->pc = 0x2DCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF00u;
        // 0x2dcf04: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF08u;
        goto label_2dcf08;
    }
    ctx->pc = 0x2DCF00u;
    {
        const bool branch_taken_0x2dcf00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF00u;
        // 0x2dcf04: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf00) {
            ctx->pc = 0x2DCF0Cu;
            goto label_2dcf0c;
        }
    }
    ctx->pc = 0x2DCF08u;
label_2dcf08:
    // 0x2dcf08: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2dcf08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2dcf0c:
    // 0x2dcf0c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2dcf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2dcf10:
    // 0x2dcf10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dcf10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2dcf14:
    // 0x2dcf14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dcf14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dcf18:
    // 0x2dcf18: 0x0  nop
    ctx->pc = 0x2dcf18u;
    // NOP
label_2dcf1c:
    // 0x2dcf1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dcf1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcf20:
    // 0x2dcf20: 0x0  nop
    ctx->pc = 0x2dcf20u;
    // NOP
label_2dcf24:
    // 0x2dcf24: 0x450100cc  bc1t        . + 4 + (0xCC << 2)
label_2dcf28:
    if (ctx->pc == 0x2DCF28u) {
        ctx->pc = 0x2DCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF24u;
        // 0x2dcf28: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF2Cu;
        goto label_2dcf2c;
    }
    ctx->pc = 0x2DCF24u;
    {
        const bool branch_taken_0x2dcf24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF24u;
        // 0x2dcf28: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf24) {
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DCF2Cu;
label_2dcf2c:
    // 0x2dcf2c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2dcf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_2dcf30:
    // 0x2dcf30: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2dcf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_2dcf34:
    // 0x2dcf34: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2dcf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2dcf38:
    // 0x2dcf38: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2dcf38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_2dcf3c:
    // 0x2dcf3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dcf40:
    if (ctx->pc == 0x2DCF40u) {
        ctx->pc = 0x2DCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF3Cu;
        // 0x2dcf40: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF44u;
        goto label_2dcf44;
    }
    ctx->pc = 0x2DCF3Cu;
    {
        const bool branch_taken_0x2dcf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF3Cu;
        // 0x2dcf40: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf3c) {
            ctx->pc = 0x2DCF54u;
            goto label_2dcf54;
        }
    }
    ctx->pc = 0x2DCF44u;
label_2dcf44:
    // 0x2dcf44: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2dcf48:
    if (ctx->pc == 0x2DCF48u) {
        ctx->pc = 0x2DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF44u;
        // 0x2dcf48: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF4Cu;
        goto label_2dcf4c;
    }
    ctx->pc = 0x2DCF44u;
    {
        const bool branch_taken_0x2dcf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF44u;
        // 0x2dcf48: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf44) {
            ctx->pc = 0x2DD01Cu;
            goto label_2dd01c;
        }
    }
    ctx->pc = 0x2DCF4Cu;
label_2dcf4c:
    // 0x2dcf4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2dcf50:
    if (ctx->pc == 0x2DCF50u) {
        ctx->pc = 0x2DCF54u;
        goto label_2dcf54;
    }
    ctx->pc = 0x2DCF4Cu;
    {
        const bool branch_taken_0x2dcf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf4c) {
            ctx->pc = 0x2DCF58u;
            goto label_2dcf58;
        }
    }
    ctx->pc = 0x2DCF54u;
label_2dcf54:
    // 0x2dcf54: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2dcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_2dcf58:
    // 0x2dcf58: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_2dcf5c:
    if (ctx->pc == 0x2DCF5Cu) {
        ctx->pc = 0x2DCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF58u;
        // 0x2dcf5c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF60u;
        goto label_2dcf60;
    }
    ctx->pc = 0x2DCF58u;
    {
        const bool branch_taken_0x2dcf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF58u;
        // 0x2dcf5c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf58) {
            ctx->pc = 0x2DD01Cu;
            goto label_2dd01c;
        }
    }
    ctx->pc = 0x2DCF60u;
label_2dcf60:
    // 0x2dcf60: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2dcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2dcf64:
    // 0x2dcf64: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
label_2dcf68:
    if (ctx->pc == 0x2DCF68u) {
        ctx->pc = 0x2DCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF64u;
        // 0x2dcf68: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF6Cu;
        goto label_2dcf6c;
    }
    ctx->pc = 0x2DCF64u;
    {
        const bool branch_taken_0x2dcf64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dcf64) {
            ctx->pc = 0x2DCF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCF64u;
            // 0x2dcf68: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCF88u;
            goto label_2dcf88;
        }
    }
    ctx->pc = 0x2DCF6Cu;
label_2dcf6c:
    // 0x2dcf6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dcf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcf70:
    // 0x2dcf70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dcf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2dcf74:
    // 0x2dcf74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2dcf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dcf78:
    // 0x2dcf78: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2dcf78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2dcf7c:
    // 0x2dcf7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dcf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcf80:
    // 0x2dcf80: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2dcf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2dcf84:
    // 0x2dcf84: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2dcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2dcf88:
    // 0x2dcf88: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2dcf88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2dcf8c:
    // 0x2dcf8c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2dcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2dcf90:
    // 0x2dcf90: 0x40f809  jalr        $v0
label_2dcf94:
    if (ctx->pc == 0x2DCF94u) {
        ctx->pc = 0x2DCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF90u;
        // 0x2dcf94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF98u;
        goto label_2dcf98;
    }
    ctx->pc = 0x2DCF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCF98u);
        ctx->pc = 0x2DCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF90u;
        // 0x2dcf94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF90u, 0x2DCF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCF98u;
label_2dcf98:
    // 0x2dcf98: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2dcf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2dcf9c:
    // 0x2dcf9c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_2dcfa0:
    if (ctx->pc == 0x2DCFA0u) {
        ctx->pc = 0x2DCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF9Cu;
        // 0x2dcfa0: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFA4u;
        goto label_2dcfa4;
    }
    ctx->pc = 0x2DCF9Cu;
    {
        const bool branch_taken_0x2dcf9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF9Cu;
        // 0x2dcfa0: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf9c) {
            ctx->pc = 0x2DCFC0u;
            goto label_2dcfc0;
        }
    }
    ctx->pc = 0x2DCFA4u;
label_2dcfa4:
    // 0x2dcfa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dcfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcfa8:
    // 0x2dcfa8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2dcfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2dcfac:
    // 0x2dcfac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2dcfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dcfb0:
    // 0x2dcfb0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2dcfb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2dcfb4:
    // 0x2dcfb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dcfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcfb8:
    // 0x2dcfb8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2dcfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2dcfbc:
    // 0x2dcfbc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2dcfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dcfc0:
    // 0x2dcfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcfc4:
    // 0x2dcfc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dcfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2dcfc8:
    // 0x2dcfc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dcfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2dcfcc:
    // 0x2dcfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfd0:
    // 0x2dcfd0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2dcfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcfd4:
    // 0x2dcfd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dcfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfd8:
    // 0x2dcfd8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2dcfd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2dcfdc:
    // 0x2dcfdc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2dcfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2dcfe0:
    // 0x2dcfe0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2dcfe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2dcfe4:
    // 0x2dcfe4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2dcfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2dcfe8:
    // 0x2dcfe8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2dcfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2dcfec:
    // 0x2dcfec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dcfecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcff0:
    // 0x2dcff0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2dcff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2dcff4:
    // 0x2dcff4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2dcff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dcff8:
    // 0x2dcff8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2dcff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2dcffc:
    // 0x2dcffc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dcffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd000:
    // 0x2dd000: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2dd000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2dd004:
    // 0x2dd004: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2dd004u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd008:
    // 0x2dd008: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2dd008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2dd00c:
    // 0x2dd00c: 0xc04c784  jal         func_131E10
label_2dd010:
    if (ctx->pc == 0x2DD010u) {
        ctx->pc = 0x2DD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD00Cu;
        // 0x2dd010: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD014u;
        goto label_2dd014;
    }
    ctx->pc = 0x2DD00Cu;
    SET_GPR_U32(ctx, 31, 0x2DD014u);
    ctx->pc = 0x2DD010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD00Cu;
    // 0x2dd010: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2DD00Cu, 0x2DD014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD014u;
label_2dd014:
    // 0x2dd014: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_2dd018:
    if (ctx->pc == 0x2DD018u) {
        ctx->pc = 0x2DD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD014u;
        // 0x2dd018: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD01Cu;
        goto label_2dd01c;
    }
    ctx->pc = 0x2DD014u;
    {
        const bool branch_taken_0x2dd014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD014u;
        // 0x2dd018: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd014) {
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DD01Cu;
label_2dd01c:
    // 0x2dd01c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2dd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2dd020:
    // 0x2dd020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd024:
    // 0x2dd024: 0xa2230620  sb          $v1, 0x620($s1)
    ctx->pc = 0x2dd024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1568), (uint8_t)GPR_U32(ctx, 3));
label_2dd028:
    // 0x2dd028: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x2dd028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
label_2dd02c:
    // 0x2dd02c: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x2dd02cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
label_2dd030:
    // 0x2dd030: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2dd034:
    if (ctx->pc == 0x2DD034u) {
        ctx->pc = 0x2DD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD030u;
        // 0x2dd034: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD038u;
        goto label_2dd038;
    }
    ctx->pc = 0x2DD030u;
    {
        const bool branch_taken_0x2dd030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD030u;
        // 0x2dd034: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd030) {
            ctx->pc = 0x2DD050u;
            goto label_2dd050;
        }
    }
    ctx->pc = 0x2DD038u;
label_2dd038:
    // 0x2dd038: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2dd038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2dd03c:
    // 0x2dd03c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2dd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2dd040:
    // 0x2dd040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dd040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dd044:
    // 0x2dd044: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dd044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dd048:
    // 0x2dd048: 0x800008  jr          $a0
label_2dd04c:
    if (ctx->pc == 0x2DD04Cu) {
        ctx->pc = 0x2DD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD048u;
        // 0x2dd04c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD050u;
        goto label_2dd050;
    }
    ctx->pc = 0x2DD048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x2DD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD048u;
        // 0x2dd04c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DD050u: goto label_2dd050;
            case 0x2DD070u: goto label_2dd070;
            case 0x2DD090u: goto label_2dd090;
            case 0x2DD0B0u: goto label_2dd0b0;
            case 0x2DD118u: goto label_2dd118;
            case 0x2DD128u: goto label_2dd128;
            case 0x2DD148u: goto label_2dd148;
            case 0x2DD168u: goto label_2dd168;
            case 0x2DD17Cu: goto label_2dd17c;
            case 0x2DD1C0u: goto label_2dd1c0;
            case 0x2DD1D4u: goto label_2dd1d4;
            case 0x2DD1E8u: goto label_2dd1e8;
            case 0x2DD1FCu: goto label_2dd1fc;
            case 0x2DD22Cu: goto label_2dd22c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD048u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DD050u;
label_2dd050:
    // 0x2dd050: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd054:
    // 0x2dd054: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd058:
    // 0x2dd058: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd05c:
    // 0x2dd05c: 0x2508d300  addiu       $t0, $t0, -0x2D00
    ctx->pc = 0x2dd05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955776));
label_2dd060:
    // 0x2dd060: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd064:
    // 0x2dd064: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd068:
    // 0x2dd068: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2dd06c:
    if (ctx->pc == 0x2DD06Cu) {
        ctx->pc = 0x2DD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD068u;
        // 0x2dd06c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD070u;
        goto label_2dd070;
    }
    ctx->pc = 0x2DD068u;
    {
        const bool branch_taken_0x2dd068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD068u;
        // 0x2dd06c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd068) {
            ctx->pc = 0x2DD218u;
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD070u;
label_2dd070:
    // 0x2dd070: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd074:
    // 0x2dd074: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd074u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd078:
    // 0x2dd078: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd07c:
    // 0x2dd07c: 0x2508d3c0  addiu       $t0, $t0, -0x2C40
    ctx->pc = 0x2dd07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955968));
label_2dd080:
    // 0x2dd080: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd084:
    // 0x2dd084: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd088:
    // 0x2dd088: 0x10000063  b           . + 4 + (0x63 << 2)
label_2dd08c:
    if (ctx->pc == 0x2DD08Cu) {
        ctx->pc = 0x2DD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD088u;
        // 0x2dd08c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD090u;
        goto label_2dd090;
    }
    ctx->pc = 0x2DD088u;
    {
        const bool branch_taken_0x2dd088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD088u;
        // 0x2dd08c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd088) {
            ctx->pc = 0x2DD218u;
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD090u;
label_2dd090:
    // 0x2dd090: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd094:
    // 0x2dd094: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd094u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd098:
    // 0x2dd098: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd09c:
    // 0x2dd09c: 0x2508d480  addiu       $t0, $t0, -0x2B80
    ctx->pc = 0x2dd09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956160));
label_2dd0a0:
    // 0x2dd0a0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd0a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd0a4:
    // 0x2dd0a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd0a8:
    // 0x2dd0a8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2dd0ac:
    if (ctx->pc == 0x2DD0ACu) {
        ctx->pc = 0x2DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0A8u;
        // 0x2dd0ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0B0u;
        goto label_2dd0b0;
    }
    ctx->pc = 0x2DD0A8u;
    {
        const bool branch_taken_0x2dd0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0A8u;
        // 0x2dd0ac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0a8) {
            ctx->pc = 0x2DD218u;
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD0B0u;
label_2dd0b0:
    // 0x2dd0b0: 0x92230621  lbu         $v1, 0x621($s1)
    ctx->pc = 0x2dd0b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
label_2dd0b4:
    // 0x2dd0b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2dd0b8:
    if (ctx->pc == 0x2DD0B8u) {
        ctx->pc = 0x2DD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B4u;
        // 0x2dd0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0BCu;
        goto label_2dd0bc;
    }
    ctx->pc = 0x2DD0B4u;
    {
        const bool branch_taken_0x2dd0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B4u;
        // 0x2dd0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0b4) {
            ctx->pc = 0x2DD0C4u;
            goto label_2dd0c4;
        }
    }
    ctx->pc = 0x2DD0BCu;
label_2dd0bc:
    // 0x2dd0bc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2dd0c0:
    if (ctx->pc == 0x2DD0C0u) {
        ctx->pc = 0x2DD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0BCu;
        // 0x2dd0c0: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0C4u;
        goto label_2dd0c4;
    }
    ctx->pc = 0x2DD0BCu;
    {
        const bool branch_taken_0x2dd0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0BCu;
        // 0x2dd0c0: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0bc) {
            ctx->pc = 0x2DD0F4u;
            goto label_2dd0f4;
        }
    }
    ctx->pc = 0x2DD0C4u;
label_2dd0c4:
    // 0x2dd0c4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2dd0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_2dd0c8:
    // 0x2dd0c8: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd0cc:
    // 0x2dd0cc: 0x2508d540  addiu       $t0, $t0, -0x2AC0
    ctx->pc = 0x2dd0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956352));
label_2dd0d0:
    // 0x2dd0d0: 0x26048288  addiu       $a0, $s0, -0x7D78
    ctx->pc = 0x2dd0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935176));
label_2dd0d4:
    // 0x2dd0d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd0d8:
    // 0x2dd0d8: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x2dd0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2dd0dc:
    // 0x2dd0dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd0e0:
    // 0x2dd0e0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd0e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd0e4:
    // 0x2dd0e4: 0xc07de16  jal         func_1F7858
label_2dd0e8:
    if (ctx->pc == 0x2DD0E8u) {
        ctx->pc = 0x2DD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0E4u;
        // 0x2dd0e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0ECu;
        goto label_2dd0ec;
    }
    ctx->pc = 0x2DD0E4u;
    SET_GPR_U32(ctx, 31, 0x2DD0ECu);
    ctx->pc = 0x2DD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0E4u;
    // 0x2dd0e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DD0E4u, 0x2DD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0ECu;
label_2dd0ec:
    // 0x2dd0ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_2dd0f0:
    if (ctx->pc == 0x2DD0F0u) {
        ctx->pc = 0x2DD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0ECu;
        // 0x2dd0f0: 0x3c08002e  lui         $t0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0F4u;
        goto label_2dd0f4;
    }
    ctx->pc = 0x2DD0ECu;
    {
        const bool branch_taken_0x2dd0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0ECu;
        // 0x2dd0f0: 0x3c08002e  lui         $t0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0ec) {
            ctx->pc = 0x2DD11Cu;
            goto label_2dd11c;
        }
    }
    ctx->pc = 0x2DD0F4u;
label_2dd0f4:
    // 0x2dd0f4: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd0f8:
    // 0x2dd0f8: 0x2508d270  addiu       $t0, $t0, -0x2D90
    ctx->pc = 0x2dd0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
label_2dd0fc:
    // 0x2dd0fc: 0x26048288  addiu       $a0, $s0, -0x7D78
    ctx->pc = 0x2dd0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935176));
label_2dd100:
    // 0x2dd100: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd104:
    // 0x2dd104: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2dd104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2dd108:
    // 0x2dd108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd10c:
    // 0x2dd10c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd10cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd110:
    // 0x2dd110: 0xc07de16  jal         func_1F7858
label_2dd114:
    if (ctx->pc == 0x2DD114u) {
        ctx->pc = 0x2DD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD110u;
        // 0x2dd114: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD118u;
        goto label_2dd118;
    }
    ctx->pc = 0x2DD110u;
    SET_GPR_U32(ctx, 31, 0x2DD118u);
    ctx->pc = 0x2DD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD110u;
    // 0x2dd114: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DD110u, 0x2DD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD118u;
label_2dd118:
    // 0x2dd118: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd118u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd11c:
    // 0x2dd11c: 0x26048288  addiu       $a0, $s0, -0x7D78
    ctx->pc = 0x2dd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935176));
label_2dd120:
    // 0x2dd120: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2dd124:
    if (ctx->pc == 0x2DD124u) {
        ctx->pc = 0x2DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD120u;
        // 0x2dd124: 0x2508d270  addiu       $t0, $t0, -0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD128u;
        goto label_2dd128;
    }
    ctx->pc = 0x2DD120u;
    {
        const bool branch_taken_0x2dd120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD120u;
        // 0x2dd124: 0x2508d270  addiu       $t0, $t0, -0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd120) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD128u;
label_2dd128:
    // 0x2dd128: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd12c:
    // 0x2dd12c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd12cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd130:
    // 0x2dd130: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd134:
    // 0x2dd134: 0x2508d540  addiu       $t0, $t0, -0x2AC0
    ctx->pc = 0x2dd134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956352));
label_2dd138:
    // 0x2dd138: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd13c:
    // 0x2dd13c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd140:
    // 0x2dd140: 0x10000035  b           . + 4 + (0x35 << 2)
label_2dd144:
    if (ctx->pc == 0x2DD144u) {
        ctx->pc = 0x2DD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD140u;
        // 0x2dd144: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD148u;
        goto label_2dd148;
    }
    ctx->pc = 0x2DD140u;
    {
        const bool branch_taken_0x2dd140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD140u;
        // 0x2dd144: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd140) {
            ctx->pc = 0x2DD218u;
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD148u;
label_2dd148:
    // 0x2dd148: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd14c:
    // 0x2dd14c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd14cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd150:
    // 0x2dd150: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd154:
    // 0x2dd154: 0x2508d6c0  addiu       $t0, $t0, -0x2940
    ctx->pc = 0x2dd154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956736));
label_2dd158:
    // 0x2dd158: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd15c:
    // 0x2dd15c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd160:
    // 0x2dd160: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2dd164:
    if (ctx->pc == 0x2DD164u) {
        ctx->pc = 0x2DD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD160u;
        // 0x2dd164: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD168u;
        goto label_2dd168;
    }
    ctx->pc = 0x2DD160u;
    {
        const bool branch_taken_0x2dd160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD160u;
        // 0x2dd164: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd160) {
            ctx->pc = 0x2DD218u;
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD168u;
label_2dd168:
    // 0x2dd168: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd16c:
    // 0x2dd16c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd16cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd170:
    // 0x2dd170: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd174:
    // 0x2dd174: 0x10000025  b           . + 4 + (0x25 << 2)
label_2dd178:
    if (ctx->pc == 0x2DD178u) {
        ctx->pc = 0x2DD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD174u;
        // 0x2dd178: 0x2508d270  addiu       $t0, $t0, -0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD17Cu;
        goto label_2dd17c;
    }
    ctx->pc = 0x2DD174u;
    {
        const bool branch_taken_0x2dd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD174u;
        // 0x2dd178: 0x2508d270  addiu       $t0, $t0, -0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd174) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD17Cu;
label_2dd17c:
    // 0x2dd17c: 0x92230621  lbu         $v1, 0x621($s1)
    ctx->pc = 0x2dd17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
label_2dd180:
    // 0x2dd180: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2dd184:
    if (ctx->pc == 0x2DD184u) {
        ctx->pc = 0x2DD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD180u;
        // 0x2dd184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD188u;
        goto label_2dd188;
    }
    ctx->pc = 0x2DD180u;
    {
        const bool branch_taken_0x2dd180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD180u;
        // 0x2dd184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd180) {
            ctx->pc = 0x2DD190u;
            goto label_2dd190;
        }
    }
    ctx->pc = 0x2DD188u;
label_2dd188:
    // 0x2dd188: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2dd18c:
    if (ctx->pc == 0x2DD18Cu) {
        ctx->pc = 0x2DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD188u;
        // 0x2dd18c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD190u;
        goto label_2dd190;
    }
    ctx->pc = 0x2DD188u;
    {
        const bool branch_taken_0x2dd188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD188u;
        // 0x2dd18c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd188) {
            ctx->pc = 0x2DD1B0u;
            goto label_2dd1b0;
        }
    }
    ctx->pc = 0x2DD190u;
label_2dd190:
    // 0x2dd190: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd194:
    // 0x2dd194: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd198:
    // 0x2dd198: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd19c:
    // 0x2dd19c: 0x2508d300  addiu       $t0, $t0, -0x2D00
    ctx->pc = 0x2dd19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955776));
label_2dd1a0:
    // 0x2dd1a0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd1a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd1a4:
    // 0x2dd1a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd1a8:
    // 0x2dd1a8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2dd1ac:
    if (ctx->pc == 0x2DD1ACu) {
        ctx->pc = 0x2DD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1A8u;
        // 0x2dd1ac: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1B0u;
        goto label_2dd1b0;
    }
    ctx->pc = 0x2DD1A8u;
    {
        const bool branch_taken_0x2dd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1A8u;
        // 0x2dd1ac: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1a8) {
            ctx->pc = 0x2DD218u;
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD1B0u;
label_2dd1b0:
    // 0x2dd1b0: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd1b4:
    // 0x2dd1b4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd1b8:
    // 0x2dd1b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_2dd1bc:
    if (ctx->pc == 0x2DD1BCu) {
        ctx->pc = 0x2DD1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1B8u;
        // 0x2dd1bc: 0x2508d270  addiu       $t0, $t0, -0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1C0u;
        goto label_2dd1c0;
    }
    ctx->pc = 0x2DD1B8u;
    {
        const bool branch_taken_0x2dd1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1B8u;
        // 0x2dd1bc: 0x2508d270  addiu       $t0, $t0, -0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1b8) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD1C0u;
label_2dd1c0:
    // 0x2dd1c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd1c4:
    // 0x2dd1c4: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd1c8:
    // 0x2dd1c8: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd1cc:
    // 0x2dd1cc: 0x1000000f  b           . + 4 + (0xF << 2)
label_2dd1d0:
    if (ctx->pc == 0x2DD1D0u) {
        ctx->pc = 0x2DD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1CCu;
        // 0x2dd1d0: 0x2508d7b0  addiu       $t0, $t0, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1D4u;
        goto label_2dd1d4;
    }
    ctx->pc = 0x2DD1CCu;
    {
        const bool branch_taken_0x2dd1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1CCu;
        // 0x2dd1d0: 0x2508d7b0  addiu       $t0, $t0, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1cc) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD1D4u;
label_2dd1d4:
    // 0x2dd1d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd1d8:
    // 0x2dd1d8: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd1d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd1dc:
    // 0x2dd1dc: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd1e0:
    // 0x2dd1e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2dd1e4:
    if (ctx->pc == 0x2DD1E4u) {
        ctx->pc = 0x2DD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1E0u;
        // 0x2dd1e4: 0x2508d870  addiu       $t0, $t0, -0x2790 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1E8u;
        goto label_2dd1e8;
    }
    ctx->pc = 0x2DD1E0u;
    {
        const bool branch_taken_0x2dd1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1E0u;
        // 0x2dd1e4: 0x2508d870  addiu       $t0, $t0, -0x2790 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1e0) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD1E8u;
label_2dd1e8:
    // 0x2dd1e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd1ec:
    // 0x2dd1ec: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd1f0:
    // 0x2dd1f0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd1f4:
    // 0x2dd1f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2dd1f8:
    if (ctx->pc == 0x2DD1F8u) {
        ctx->pc = 0x2DD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1F4u;
        // 0x2dd1f8: 0x2508d930  addiu       $t0, $t0, -0x26D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1FCu;
        goto label_2dd1fc;
    }
    ctx->pc = 0x2DD1F4u;
    {
        const bool branch_taken_0x2dd1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1F4u;
        // 0x2dd1f8: 0x2508d930  addiu       $t0, $t0, -0x26D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd1f4) {
            ctx->pc = 0x2DD20Cu;
            goto label_2dd20c;
        }
    }
    ctx->pc = 0x2DD1FCu;
label_2dd1fc:
    // 0x2dd1fc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd200:
    // 0x2dd200: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd200u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd204:
    // 0x2dd204: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd208:
    // 0x2dd208: 0x2508d9f0  addiu       $t0, $t0, -0x2610
    ctx->pc = 0x2dd208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957552));
label_2dd20c:
    // 0x2dd20c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd20cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd210:
    // 0x2dd210: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd214:
    // 0x2dd214: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2dd214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2dd218:
    // 0x2dd218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd21c:
    // 0x2dd21c: 0xc07de16  jal         func_1F7858
label_2dd220:
    if (ctx->pc == 0x2DD220u) {
        ctx->pc = 0x2DD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD21Cu;
        // 0x2dd220: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD224u;
        goto label_2dd224;
    }
    ctx->pc = 0x2DD21Cu;
    SET_GPR_U32(ctx, 31, 0x2DD224u);
    ctx->pc = 0x2DD220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD21Cu;
    // 0x2dd220: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DD21Cu, 0x2DD224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD224u;
label_2dd224:
    // 0x2dd224: 0x1000000c  b           . + 4 + (0xC << 2)
label_2dd228:
    if (ctx->pc == 0x2DD228u) {
        ctx->pc = 0x2DD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD224u;
        // 0x2dd228: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD22Cu;
        goto label_2dd22c;
    }
    ctx->pc = 0x2DD224u;
    {
        const bool branch_taken_0x2dd224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD224u;
        // 0x2dd228: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd224) {
            ctx->pc = 0x2DD258u;
            goto label_2dd258;
        }
    }
    ctx->pc = 0x2DD22Cu;
label_2dd22c:
    // 0x2dd22c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dd22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2dd230:
    // 0x2dd230: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dd230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
label_2dd234:
    // 0x2dd234: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dd234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_2dd238:
    // 0x2dd238: 0x2508d600  addiu       $t0, $t0, -0x2A00
    ctx->pc = 0x2dd238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956544));
label_2dd23c:
    // 0x2dd23c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dd23cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd240:
    // 0x2dd240: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dd240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd244:
    // 0x2dd244: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2dd244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2dd248:
    // 0x2dd248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dd248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd24c:
    // 0x2dd24c: 0xc07de16  jal         func_1F7858
label_2dd250:
    if (ctx->pc == 0x2DD250u) {
        ctx->pc = 0x2DD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD24Cu;
        // 0x2dd250: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD254u;
        goto label_2dd254;
    }
    ctx->pc = 0x2DD24Cu;
    SET_GPR_U32(ctx, 31, 0x2DD254u);
    ctx->pc = 0x2DD250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD24Cu;
    // 0x2dd250: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DD24Cu, 0x2DD254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD254u;
label_2dd254:
    // 0x2dd254: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2dd254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd258:
    // 0x2dd258: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2dd258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dd25c:
    // 0x2dd25c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2dd25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dd260:
    // 0x2dd260: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dd260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dd264:
    // 0x2dd264: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2dd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dd268:
    // 0x2dd268: 0x3e00008  jr          $ra
label_2dd26c:
    if (ctx->pc == 0x2DD26Cu) {
        ctx->pc = 0x2DD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD268u;
        // 0x2dd26c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD270u;
        goto label_fallthrough_0x2dd268;
    }
    ctx->pc = 0x2DD268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD268u;
        // 0x2dd26c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dd268:
    ctx->pc = 0x2DD270u;
}
