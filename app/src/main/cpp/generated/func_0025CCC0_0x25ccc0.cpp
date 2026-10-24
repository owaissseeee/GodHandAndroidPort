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

// Function: func_0025CCC0
// Address: 0x25ccc0 - 0x25d0b8
void func_0025CCC0_0x25ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025CCC0_0x25ccc0");
#endif

    switch (ctx->pc) {
        case 0x25ccc0u: goto label_25ccc0;
        case 0x25ccc4u: goto label_25ccc4;
        case 0x25ccc8u: goto label_25ccc8;
        case 0x25ccccu: goto label_25cccc;
        case 0x25ccd0u: goto label_25ccd0;
        case 0x25ccd4u: goto label_25ccd4;
        case 0x25ccd8u: goto label_25ccd8;
        case 0x25ccdcu: goto label_25ccdc;
        case 0x25cce0u: goto label_25cce0;
        case 0x25cce4u: goto label_25cce4;
        case 0x25cce8u: goto label_25cce8;
        case 0x25ccecu: goto label_25ccec;
        case 0x25ccf0u: goto label_25ccf0;
        case 0x25ccf4u: goto label_25ccf4;
        case 0x25ccf8u: goto label_25ccf8;
        case 0x25ccfcu: goto label_25ccfc;
        case 0x25cd00u: goto label_25cd00;
        case 0x25cd04u: goto label_25cd04;
        case 0x25cd08u: goto label_25cd08;
        case 0x25cd0cu: goto label_25cd0c;
        case 0x25cd10u: goto label_25cd10;
        case 0x25cd14u: goto label_25cd14;
        case 0x25cd18u: goto label_25cd18;
        case 0x25cd1cu: goto label_25cd1c;
        case 0x25cd20u: goto label_25cd20;
        case 0x25cd24u: goto label_25cd24;
        case 0x25cd28u: goto label_25cd28;
        case 0x25cd2cu: goto label_25cd2c;
        case 0x25cd30u: goto label_25cd30;
        case 0x25cd34u: goto label_25cd34;
        case 0x25cd38u: goto label_25cd38;
        case 0x25cd3cu: goto label_25cd3c;
        case 0x25cd40u: goto label_25cd40;
        case 0x25cd44u: goto label_25cd44;
        case 0x25cd48u: goto label_25cd48;
        case 0x25cd4cu: goto label_25cd4c;
        case 0x25cd50u: goto label_25cd50;
        case 0x25cd54u: goto label_25cd54;
        case 0x25cd58u: goto label_25cd58;
        case 0x25cd5cu: goto label_25cd5c;
        case 0x25cd60u: goto label_25cd60;
        case 0x25cd64u: goto label_25cd64;
        case 0x25cd68u: goto label_25cd68;
        case 0x25cd6cu: goto label_25cd6c;
        case 0x25cd70u: goto label_25cd70;
        case 0x25cd74u: goto label_25cd74;
        case 0x25cd78u: goto label_25cd78;
        case 0x25cd7cu: goto label_25cd7c;
        case 0x25cd80u: goto label_25cd80;
        case 0x25cd84u: goto label_25cd84;
        case 0x25cd88u: goto label_25cd88;
        case 0x25cd8cu: goto label_25cd8c;
        case 0x25cd90u: goto label_25cd90;
        case 0x25cd94u: goto label_25cd94;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cd9cu: goto label_25cd9c;
        case 0x25cda0u: goto label_25cda0;
        case 0x25cda4u: goto label_25cda4;
        case 0x25cda8u: goto label_25cda8;
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdb0u: goto label_25cdb0;
        case 0x25cdb4u: goto label_25cdb4;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25cdbcu: goto label_25cdbc;
        case 0x25cdc0u: goto label_25cdc0;
        case 0x25cdc4u: goto label_25cdc4;
        case 0x25cdc8u: goto label_25cdc8;
        case 0x25cdccu: goto label_25cdcc;
        case 0x25cdd0u: goto label_25cdd0;
        case 0x25cdd4u: goto label_25cdd4;
        case 0x25cdd8u: goto label_25cdd8;
        case 0x25cddcu: goto label_25cddc;
        case 0x25cde0u: goto label_25cde0;
        case 0x25cde4u: goto label_25cde4;
        case 0x25cde8u: goto label_25cde8;
        case 0x25cdecu: goto label_25cdec;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25cdf4u: goto label_25cdf4;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25cdfcu: goto label_25cdfc;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce04u: goto label_25ce04;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce10u: goto label_25ce10;
        case 0x25ce14u: goto label_25ce14;
        case 0x25ce18u: goto label_25ce18;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce20u: goto label_25ce20;
        case 0x25ce24u: goto label_25ce24;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce2cu: goto label_25ce2c;
        case 0x25ce30u: goto label_25ce30;
        case 0x25ce34u: goto label_25ce34;
        case 0x25ce38u: goto label_25ce38;
        case 0x25ce3cu: goto label_25ce3c;
        case 0x25ce40u: goto label_25ce40;
        case 0x25ce44u: goto label_25ce44;
        case 0x25ce48u: goto label_25ce48;
        case 0x25ce4cu: goto label_25ce4c;
        case 0x25ce50u: goto label_25ce50;
        case 0x25ce54u: goto label_25ce54;
        case 0x25ce58u: goto label_25ce58;
        case 0x25ce5cu: goto label_25ce5c;
        case 0x25ce60u: goto label_25ce60;
        case 0x25ce64u: goto label_25ce64;
        case 0x25ce68u: goto label_25ce68;
        case 0x25ce6cu: goto label_25ce6c;
        case 0x25ce70u: goto label_25ce70;
        case 0x25ce74u: goto label_25ce74;
        case 0x25ce78u: goto label_25ce78;
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25ce80u: goto label_25ce80;
        case 0x25ce84u: goto label_25ce84;
        case 0x25ce88u: goto label_25ce88;
        case 0x25ce8cu: goto label_25ce8c;
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf14u: goto label_25cf14;
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf1cu: goto label_25cf1c;
        case 0x25cf20u: goto label_25cf20;
        case 0x25cf24u: goto label_25cf24;
        case 0x25cf28u: goto label_25cf28;
        case 0x25cf2cu: goto label_25cf2c;
        case 0x25cf30u: goto label_25cf30;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf38u: goto label_25cf38;
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf40u: goto label_25cf40;
        case 0x25cf44u: goto label_25cf44;
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf4cu: goto label_25cf4c;
        case 0x25cf50u: goto label_25cf50;
        case 0x25cf54u: goto label_25cf54;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cf60u: goto label_25cf60;
        case 0x25cf64u: goto label_25cf64;
        case 0x25cf68u: goto label_25cf68;
        case 0x25cf6cu: goto label_25cf6c;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cf78u: goto label_25cf78;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf80u: goto label_25cf80;
        case 0x25cf84u: goto label_25cf84;
        case 0x25cf88u: goto label_25cf88;
        case 0x25cf8cu: goto label_25cf8c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cf94u: goto label_25cf94;
        case 0x25cf98u: goto label_25cf98;
        case 0x25cf9cu: goto label_25cf9c;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfa4u: goto label_25cfa4;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfacu: goto label_25cfac;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfbcu: goto label_25cfbc;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfc4u: goto label_25cfc4;
        case 0x25cfc8u: goto label_25cfc8;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd0u: goto label_25cfd0;
        case 0x25cfd4u: goto label_25cfd4;
        case 0x25cfd8u: goto label_25cfd8;
        case 0x25cfdcu: goto label_25cfdc;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cfe4u: goto label_25cfe4;
        case 0x25cfe8u: goto label_25cfe8;
        case 0x25cfecu: goto label_25cfec;
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        default: break;
    }

    ctx->pc = 0x25ccc0u;

label_25ccc0:
    // 0x25ccc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25ccc4:
    // 0x25ccc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25ccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25ccc8:
    // 0x25ccc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ccc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25cccc:
    // 0x25cccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25ccd0:
    // 0x25ccd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25ccd4:
    // 0x25ccd4: 0xc0b6dac  jal         func_2DB6B0
label_25ccd8:
    if (ctx->pc == 0x25CCD8u) {
        ctx->pc = 0x25CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCD4u;
        // 0x25ccd8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCDCu;
        goto label_25ccdc;
    }
    ctx->pc = 0x25CCD4u;
    SET_GPR_U32(ctx, 31, 0x25CCDCu);
    ctx->pc = 0x25CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCD4u;
    // 0x25ccd8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25CCD4u, 0x25CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCDCu;
label_25ccdc:
    // 0x25ccdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ccdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cce0:
    // 0x25cce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cce4:
    // 0x25cce4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cce8:
    // 0x25cce8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25cce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25ccec:
    // 0x25ccec: 0xc0560a2  jal         func_158288
label_25ccf0:
    if (ctx->pc == 0x25CCF0u) {
        ctx->pc = 0x25CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCECu;
        // 0x25ccf0: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCF4u;
        goto label_25ccf4;
    }
    ctx->pc = 0x25CCECu;
    SET_GPR_U32(ctx, 31, 0x25CCF4u);
    ctx->pc = 0x25CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCECu;
    // 0x25ccf0: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25CCECu, 0x25CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCF4u;
label_25ccf4:
    // 0x25ccf4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25ccf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25ccf8:
    // 0x25ccf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ccf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25ccfc:
    // 0x25ccfc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25cd00:
    // 0x25cd00: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25cd04:
    // 0x25cd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25cd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cd08:
    // 0x25cd08: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25cd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25cd0c:
    // 0x25cd0c: 0xc04d476  jal         func_1351D8
label_25cd10:
    if (ctx->pc == 0x25CD10u) {
        ctx->pc = 0x25CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD0Cu;
        // 0x25cd10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD14u;
        goto label_25cd14;
    }
    ctx->pc = 0x25CD0Cu;
    SET_GPR_U32(ctx, 31, 0x25CD14u);
    ctx->pc = 0x25CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD0Cu;
    // 0x25cd10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25CD0Cu, 0x25CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD14u;
label_25cd14:
    // 0x25cd14: 0xc6010770  lwc1        $f1, 0x770($s0)
    ctx->pc = 0x25cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25cd18:
    // 0x25cd18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25cd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25cd1c:
    // 0x25cd1c: 0x0  nop
    ctx->pc = 0x25cd1cu;
    // NOP
label_25cd20:
    // 0x25cd20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25cd20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25cd24:
    // 0x25cd24: 0x0  nop
    ctx->pc = 0x25cd24u;
    // NOP
label_25cd28:
    // 0x25cd28: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_25cd2c:
    if (ctx->pc == 0x25CD2Cu) {
        ctx->pc = 0x25CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD28u;
        // 0x25cd2c: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD30u;
        goto label_25cd30;
    }
    ctx->pc = 0x25CD28u;
    {
        const bool branch_taken_0x25cd28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25cd28) {
            ctx->pc = 0x25CD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CD28u;
            // 0x25cd2c: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CD50u;
            goto label_25cd50;
        }
    }
    ctx->pc = 0x25CD30u;
label_25cd30:
    // 0x25cd30: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25cd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25cd34:
    // 0x25cd34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25cd38:
    // 0x25cd38: 0x0  nop
    ctx->pc = 0x25cd38u;
    // NOP
label_25cd3c:
    // 0x25cd3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25cd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25cd40:
    // 0x25cd40: 0x0  nop
    ctx->pc = 0x25cd40u;
    // NOP
label_25cd44:
    // 0x25cd44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_25cd48:
    if (ctx->pc == 0x25CD48u) {
        ctx->pc = 0x25CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD44u;
        // 0x25cd48: 0xe6000770  swc1        $f0, 0x770($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD4Cu;
        goto label_25cd4c;
    }
    ctx->pc = 0x25CD44u;
    {
        const bool branch_taken_0x25cd44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25cd44) {
            ctx->pc = 0x25CD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CD44u;
            // 0x25cd48: 0xe6000770  swc1        $f0, 0x770($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1904), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CD4Cu;
            goto label_25cd4c;
        }
    }
    ctx->pc = 0x25CD4Cu;
label_25cd4c:
    // 0x25cd4c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25cd4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25cd50:
    // 0x25cd50: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25cd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_25cd54:
    // 0x25cd54: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_25cd58:
    if (ctx->pc == 0x25CD58u) {
        ctx->pc = 0x25CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD54u;
        // 0x25cd58: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD5Cu;
        goto label_25cd5c;
    }
    ctx->pc = 0x25CD54u;
    {
        const bool branch_taken_0x25cd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD54u;
        // 0x25cd58: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd54) {
            ctx->pc = 0x25CFD4u;
            goto label_25cfd4;
        }
    }
    ctx->pc = 0x25CD5Cu;
label_25cd5c:
    // 0x25cd5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25cd60:
    // 0x25cd60: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
label_25cd64:
    // 0x25cd64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25cd68:
    // 0x25cd68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25cd6c:
    // 0x25cd6c: 0x800008  jr          $a0
label_25cd70:
    if (ctx->pc == 0x25CD70u) {
        ctx->pc = 0x25CD74u;
        goto label_25cd74;
    }
    ctx->pc = 0x25CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CD74u: goto label_25cd74;
            case 0x25CDC4u: goto label_25cdc4;
            case 0x25CE58u: goto label_25ce58;
            case 0x25CE90u: goto label_25ce90;
            case 0x25CF18u: goto label_25cf18;
            case 0x25CF50u: goto label_25cf50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CD6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25CD74u;
label_25cd74:
    // 0x25cd74: 0xc09ac7a  jal         func_26B1E8
label_25cd78:
    if (ctx->pc == 0x25CD78u) {
        ctx->pc = 0x25CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD74u;
        // 0x25cd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CD7Cu;
        goto label_25cd7c;
    }
    ctx->pc = 0x25CD74u;
    SET_GPR_U32(ctx, 31, 0x25CD7Cu);
    ctx->pc = 0x25CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CD74u;
    // 0x25cd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25CD74u, 0x25CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD7Cu;
label_25cd7c:
    // 0x25cd7c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25cd80:
    // 0x25cd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cd84:
    // 0x25cd84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25cd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25cd88:
    // 0x25cd88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25cd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cd8c:
    // 0x25cd8c: 0x8c4514c0  lw          $a1, 0x14C0($v0)
    ctx->pc = 0x25cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5312)));
label_25cd90:
    // 0x25cd90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cd90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cd94:
    // 0x25cd94: 0x8c4614c4  lw          $a2, 0x14C4($v0)
    ctx->pc = 0x25cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5316)));
label_25cd98:
    // 0x25cd98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25cd98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cd9c:
    // 0x25cd9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25cda0:
    // 0x25cda0: 0xc0aa15e  jal         func_2A8578
label_25cda4:
    if (ctx->pc == 0x25CDA4u) {
        ctx->pc = 0x25CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDA0u;
        // 0x25cda4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CDA8u;
        goto label_25cda8;
    }
    ctx->pc = 0x25CDA0u;
    SET_GPR_U32(ctx, 31, 0x25CDA8u);
    ctx->pc = 0x25CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDA0u;
    // 0x25cda4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25CDA0u, 0x25CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDA8u;
label_25cda8:
    // 0x25cda8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25cda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25cdac:
    // 0x25cdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25cdb0:
    // 0x25cdb0: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x25cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
label_25cdb4:
    // 0x25cdb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25cdb8:
    // 0x25cdb8: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25cdbc:
    // 0x25cdbc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25cdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25cdc0:
    // 0x25cdc0: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25cdc4:
    // 0x25cdc4: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25cdc8:
    // 0x25cdc8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25cdcc:
    // 0x25cdcc: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25cdd0:
    // 0x25cdd0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25cdd4:
    // 0x25cdd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25cdd8:
    // 0x25cdd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25cddc:
    // 0x25cddc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25cde0:
    // 0x25cde0: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25cde4:
    // 0x25cde4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25cde4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25cde8:
    // 0x25cde8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25cde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25cdec:
    // 0x25cdec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25cdecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25cdf0:
    // 0x25cdf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25cdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25cdf4:
    // 0x25cdf4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25cdf8:
    // 0x25cdf8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25cdfc:
    // 0x25cdfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25cdfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25ce00:
    // 0x25ce00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ce04:
    // 0x25ce04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25ce04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25ce08:
    // 0x25ce08: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25ce08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25ce0c:
    // 0x25ce0c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25ce10:
    // 0x25ce10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25ce10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25ce14:
    // 0x25ce14: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25ce14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25ce18:
    // 0x25ce18: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25ce18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25ce1c:
    // 0x25ce1c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25ce20:
    // 0x25ce20: 0xc055f06  jal         func_157C18
label_25ce24:
    if (ctx->pc == 0x25CE24u) {
        ctx->pc = 0x25CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE20u;
        // 0x25ce24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE28u;
        goto label_25ce28;
    }
    ctx->pc = 0x25CE20u;
    SET_GPR_U32(ctx, 31, 0x25CE28u);
    ctx->pc = 0x25CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE20u;
    // 0x25ce24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25CE20u, 0x25CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE28u;
label_25ce28:
    // 0x25ce28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25ce2c:
    if (ctx->pc == 0x25CE2Cu) {
        ctx->pc = 0x25CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE28u;
        // 0x25ce2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE30u;
        goto label_25ce30;
    }
    ctx->pc = 0x25CE28u;
    {
        const bool branch_taken_0x25ce28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE28u;
        // 0x25ce2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce28) {
            ctx->pc = 0x25CE3Cu;
            goto label_25ce3c;
        }
    }
    ctx->pc = 0x25CE30u;
label_25ce30:
    // 0x25ce30: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25ce30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25ce34:
    // 0x25ce34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25ce38:
    // 0x25ce38: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25ce38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25ce3c:
    // 0x25ce3c: 0xc053e7c  jal         func_14F9F0
label_25ce40:
    if (ctx->pc == 0x25CE40u) {
        ctx->pc = 0x25CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE3Cu;
        // 0x25ce40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE44u;
        goto label_25ce44;
    }
    ctx->pc = 0x25CE3Cu;
    SET_GPR_U32(ctx, 31, 0x25CE44u);
    ctx->pc = 0x25CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE3Cu;
    // 0x25ce40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25CE3Cu, 0x25CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE44u;
label_25ce44:
    // 0x25ce44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ce44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25ce48:
    // 0x25ce48: 0xc053e4a  jal         func_14F928
label_25ce4c:
    if (ctx->pc == 0x25CE4Cu) {
        ctx->pc = 0x25CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE48u;
        // 0x25ce4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE50u;
        goto label_25ce50;
    }
    ctx->pc = 0x25CE48u;
    SET_GPR_U32(ctx, 31, 0x25CE50u);
    ctx->pc = 0x25CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE48u;
    // 0x25ce4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25CE48u, 0x25CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE50u;
label_25ce50:
    // 0x25ce50: 0x10000061  b           . + 4 + (0x61 << 2)
label_25ce54:
    if (ctx->pc == 0x25CE54u) {
        ctx->pc = 0x25CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE50u;
        // 0x25ce54: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE58u;
        goto label_25ce58;
    }
    ctx->pc = 0x25CE50u;
    {
        const bool branch_taken_0x25ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE50u;
        // 0x25ce54: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ce50) {
            ctx->pc = 0x25CFD8u;
            goto label_25cfd8;
        }
    }
    ctx->pc = 0x25CE58u;
label_25ce58:
    // 0x25ce58: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25ce5c:
    // 0x25ce5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ce5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ce60:
    // 0x25ce60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25ce60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ce64:
    // 0x25ce64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25ce64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ce68:
    // 0x25ce68: 0x8c4514c8  lw          $a1, 0x14C8($v0)
    ctx->pc = 0x25ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5320)));
label_25ce6c:
    // 0x25ce6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25ce6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ce70:
    // 0x25ce70: 0x8c4614cc  lw          $a2, 0x14CC($v0)
    ctx->pc = 0x25ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5324)));
label_25ce74:
    // 0x25ce74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25ce74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ce78:
    // 0x25ce78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25ce7c:
    // 0x25ce7c: 0xc0aa15e  jal         func_2A8578
label_25ce80:
    if (ctx->pc == 0x25CE80u) {
        ctx->pc = 0x25CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE7Cu;
        // 0x25ce80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CE84u;
        goto label_25ce84;
    }
    ctx->pc = 0x25CE7Cu;
    SET_GPR_U32(ctx, 31, 0x25CE84u);
    ctx->pc = 0x25CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE7Cu;
    // 0x25ce80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25CE7Cu, 0x25CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE84u;
label_25ce84:
    // 0x25ce84: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25ce84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25ce88:
    // 0x25ce88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25ce8c:
    // 0x25ce8c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25ce8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25ce90:
    // 0x25ce90: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25ce94:
    // 0x25ce94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25ce98:
    // 0x25ce98: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ce9c:
    // 0x25ce9c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25cea0:
    // 0x25cea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25cea4:
    // 0x25cea4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25cea8:
    // 0x25cea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25ceac:
    // 0x25ceac: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25ceb0:
    // 0x25ceb0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25ceb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25ceb4:
    // 0x25ceb4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25ceb8:
    // 0x25ceb8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25ceb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25cebc:
    // 0x25cebc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25cebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25cec0:
    // 0x25cec0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25cec4:
    // 0x25cec4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25cec8:
    // 0x25cec8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25cec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25cecc:
    // 0x25cecc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ced0:
    // 0x25ced0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25ced0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25ced4:
    // 0x25ced4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25ced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25ced8:
    // 0x25ced8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25cedc:
    // 0x25cedc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25cedcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25cee0:
    // 0x25cee0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25cee0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25cee4:
    // 0x25cee4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25cee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25cee8:
    // 0x25cee8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25ceec:
    // 0x25ceec: 0xc055f06  jal         func_157C18
label_25cef0:
    if (ctx->pc == 0x25CEF0u) {
        ctx->pc = 0x25CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEECu;
        // 0x25cef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CEF4u;
        goto label_25cef4;
    }
    ctx->pc = 0x25CEECu;
    SET_GPR_U32(ctx, 31, 0x25CEF4u);
    ctx->pc = 0x25CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEECu;
    // 0x25cef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25CEECu, 0x25CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEF4u;
label_25cef4:
    // 0x25cef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cef8:
    // 0x25cef8: 0xc053e7c  jal         func_14F9F0
label_25cefc:
    if (ctx->pc == 0x25CEFCu) {
        ctx->pc = 0x25CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEF8u;
        // 0x25cefc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF00u;
        goto label_25cf00;
    }
    ctx->pc = 0x25CEF8u;
    SET_GPR_U32(ctx, 31, 0x25CF00u);
    ctx->pc = 0x25CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CEF8u;
    // 0x25cefc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25CEF8u, 0x25CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF00u;
label_25cf00:
    // 0x25cf00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25cf00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25cf04:
    // 0x25cf04: 0xc053e4a  jal         func_14F928
label_25cf08:
    if (ctx->pc == 0x25CF08u) {
        ctx->pc = 0x25CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF04u;
        // 0x25cf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF0Cu;
        goto label_25cf0c;
    }
    ctx->pc = 0x25CF04u;
    SET_GPR_U32(ctx, 31, 0x25CF0Cu);
    ctx->pc = 0x25CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF04u;
    // 0x25cf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25CF04u, 0x25CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF0Cu;
label_25cf0c:
    // 0x25cf0c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25cf0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25cf10:
    // 0x25cf10: 0x10000030  b           . + 4 + (0x30 << 2)
label_25cf14:
    if (ctx->pc == 0x25CF14u) {
        ctx->pc = 0x25CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF10u;
        // 0x25cf14: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF18u;
        goto label_25cf18;
    }
    ctx->pc = 0x25CF10u;
    {
        const bool branch_taken_0x25cf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF10u;
        // 0x25cf14: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf10) {
            ctx->pc = 0x25CFD4u;
            goto label_25cfd4;
        }
    }
    ctx->pc = 0x25CF18u;
label_25cf18:
    // 0x25cf18: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25cf1c:
    // 0x25cf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cf20:
    // 0x25cf20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25cf20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25cf24:
    // 0x25cf24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25cf24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cf28:
    // 0x25cf28: 0x8c4514d0  lw          $a1, 0x14D0($v0)
    ctx->pc = 0x25cf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5328)));
label_25cf2c:
    // 0x25cf2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cf2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cf30:
    // 0x25cf30: 0x8c4614d4  lw          $a2, 0x14D4($v0)
    ctx->pc = 0x25cf30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5332)));
label_25cf34:
    // 0x25cf34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25cf34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cf38:
    // 0x25cf38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25cf3c:
    // 0x25cf3c: 0xc0aa15e  jal         func_2A8578
label_25cf40:
    if (ctx->pc == 0x25CF40u) {
        ctx->pc = 0x25CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF3Cu;
        // 0x25cf40: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF44u;
        goto label_25cf44;
    }
    ctx->pc = 0x25CF3Cu;
    SET_GPR_U32(ctx, 31, 0x25CF44u);
    ctx->pc = 0x25CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF3Cu;
    // 0x25cf40: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25CF3Cu, 0x25CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF44u;
label_25cf44:
    // 0x25cf44: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25cf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25cf48:
    // 0x25cf48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25cf4c:
    // 0x25cf4c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25cf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25cf50:
    // 0x25cf50: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25cf54:
    // 0x25cf54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25cf58:
    // 0x25cf58: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25cf5c:
    // 0x25cf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cf60:
    // 0x25cf60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25cf64:
    // 0x25cf64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25cf68:
    // 0x25cf68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25cf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25cf6c:
    // 0x25cf6c: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25cf70:
    // 0x25cf70: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25cf70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25cf74:
    // 0x25cf74: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25cf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25cf78:
    // 0x25cf78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25cf78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25cf7c:
    // 0x25cf7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25cf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25cf80:
    // 0x25cf80: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25cf84:
    // 0x25cf84: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25cf88:
    // 0x25cf88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25cf88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25cf8c:
    // 0x25cf8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cf90:
    // 0x25cf90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25cf90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25cf94:
    // 0x25cf94: 0xc055f06  jal         func_157C18
label_25cf98:
    if (ctx->pc == 0x25CF98u) {
        ctx->pc = 0x25CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF94u;
        // 0x25cf98: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF9Cu;
        goto label_25cf9c;
    }
    ctx->pc = 0x25CF94u;
    SET_GPR_U32(ctx, 31, 0x25CF9Cu);
    ctx->pc = 0x25CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF94u;
    // 0x25cf98: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25CF94u, 0x25CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF9Cu;
label_25cf9c:
    // 0x25cf9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25cfa0:
    if (ctx->pc == 0x25CFA0u) {
        ctx->pc = 0x25CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF9Cu;
        // 0x25cfa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFA4u;
        goto label_25cfa4;
    }
    ctx->pc = 0x25CF9Cu;
    {
        const bool branch_taken_0x25cf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF9Cu;
        // 0x25cfa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf9c) {
            ctx->pc = 0x25CFBCu;
            goto label_25cfbc;
        }
    }
    ctx->pc = 0x25CFA4u;
label_25cfa4:
    // 0x25cfa4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x25cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_25cfa8:
    // 0x25cfa8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25cfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25cfac:
    // 0x25cfac: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25cfacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25cfb0:
    // 0x25cfb0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25cfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25cfb4:
    // 0x25cfb4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_25cfb8:
    if (ctx->pc == 0x25CFB8u) {
        ctx->pc = 0x25CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFB4u;
        // 0x25cfb8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFBCu;
        goto label_25cfbc;
    }
    ctx->pc = 0x25CFB4u;
    {
        const bool branch_taken_0x25cfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFB4u;
        // 0x25cfb8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfb4) {
            ctx->pc = 0x25D0A0u;
            goto label_25d0a0;
        }
    }
    ctx->pc = 0x25CFBCu;
label_25cfbc:
    // 0x25cfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cfc0:
    // 0x25cfc0: 0xc053e7c  jal         func_14F9F0
label_25cfc4:
    if (ctx->pc == 0x25CFC4u) {
        ctx->pc = 0x25CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFC0u;
        // 0x25cfc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFC8u;
        goto label_25cfc8;
    }
    ctx->pc = 0x25CFC0u;
    SET_GPR_U32(ctx, 31, 0x25CFC8u);
    ctx->pc = 0x25CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFC0u;
    // 0x25cfc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25CFC0u, 0x25CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFC8u;
label_25cfc8:
    // 0x25cfc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25cfc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25cfcc:
    // 0x25cfcc: 0xc053e4a  jal         func_14F928
label_25cfd0:
    if (ctx->pc == 0x25CFD0u) {
        ctx->pc = 0x25CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFCCu;
        // 0x25cfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFD4u;
        goto label_25cfd4;
    }
    ctx->pc = 0x25CFCCu;
    SET_GPR_U32(ctx, 31, 0x25CFD4u);
    ctx->pc = 0x25CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CFCCu;
    // 0x25cfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25CFCCu, 0x25CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CFD4u;
label_25cfd4:
    // 0x25cfd4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25cfd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25cfd8:
    // 0x25cfd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25cfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25cfdc:
    // 0x25cfdc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_25cfe0:
    if (ctx->pc == 0x25CFE0u) {
        ctx->pc = 0x25CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFDCu;
        // 0x25cfe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFE4u;
        goto label_25cfe4;
    }
    ctx->pc = 0x25CFDCu;
    {
        const bool branch_taken_0x25cfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFDCu;
        // 0x25cfe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfdc) {
            ctx->pc = 0x25D034u;
            goto label_25d034;
        }
    }
    ctx->pc = 0x25CFE4u;
label_25cfe4:
    // 0x25cfe4: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25cfe8:
    // 0x25cfe8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25cfec:
    if (ctx->pc == 0x25CFECu) {
        ctx->pc = 0x25CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFE8u;
        // 0x25cfec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CFF0u;
        goto label_25cff0;
    }
    ctx->pc = 0x25CFE8u;
    {
        const bool branch_taken_0x25cfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFE8u;
        // 0x25cfec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfe8) {
            ctx->pc = 0x25D038u;
            goto label_25d038;
        }
    }
    ctx->pc = 0x25CFF0u;
label_25cff0:
    // 0x25cff0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x25cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_25cff4:
    // 0x25cff4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25cff8:
    // 0x25cff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25cff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25cffc:
    // 0x25cffc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25cffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d000:
    // 0x25d000: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d004:
    // 0x25d004: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25d004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25d008:
    // 0x25d008: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25d00c:
    // 0x25d00c: 0x40f809  jalr        $v0
label_25d010:
    if (ctx->pc == 0x25D010u) {
        ctx->pc = 0x25D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D00Cu;
        // 0x25d010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D014u;
        goto label_25d014;
    }
    ctx->pc = 0x25D00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D014u);
        ctx->pc = 0x25D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D00Cu;
        // 0x25d010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D00Cu, 0x25D014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D014u;
label_25d014:
    // 0x25d014: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25d014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25d018:
    // 0x25d018: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25d018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25d01c:
    // 0x25d01c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d020:
    // 0x25d020: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25d024:
    // 0x25d024: 0xc0aa65e  jal         func_2A9978
label_25d028:
    if (ctx->pc == 0x25D028u) {
        ctx->pc = 0x25D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D024u;
        // 0x25d028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D02Cu;
        goto label_25d02c;
    }
    ctx->pc = 0x25D024u;
    SET_GPR_U32(ctx, 31, 0x25D02Cu);
    ctx->pc = 0x25D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D024u;
    // 0x25d028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25D024u, 0x25D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D02Cu;
label_25d02c:
    // 0x25d02c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25d030:
    if (ctx->pc == 0x25D030u) {
        ctx->pc = 0x25D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D02Cu;
        // 0x25d030: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D034u;
        goto label_25d034;
    }
    ctx->pc = 0x25D02Cu;
    {
        const bool branch_taken_0x25d02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D02Cu;
        // 0x25d030: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d02c) {
            ctx->pc = 0x25D03Cu;
            goto label_25d03c;
        }
    }
    ctx->pc = 0x25D034u;
label_25d034:
    // 0x25d034: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x25d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_25d038:
    // 0x25d038: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25d038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25d03c:
    // 0x25d03c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25d040:
    // 0x25d040: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_25d044:
    if (ctx->pc == 0x25D044u) {
        ctx->pc = 0x25D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D040u;
        // 0x25d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D048u;
        goto label_25d048;
    }
    ctx->pc = 0x25D040u;
    {
        const bool branch_taken_0x25d040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D040u;
        // 0x25d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d040) {
            ctx->pc = 0x25D09Cu;
            goto label_25d09c;
        }
    }
    ctx->pc = 0x25D048u;
label_25d048:
    // 0x25d048: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
label_25d04c:
    // 0x25d04c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_25d050:
    if (ctx->pc == 0x25D050u) {
        ctx->pc = 0x25D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D04Cu;
        // 0x25d050: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D054u;
        goto label_25d054;
    }
    ctx->pc = 0x25D04Cu;
    {
        const bool branch_taken_0x25d04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D04Cu;
        // 0x25d050: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d04c) {
            ctx->pc = 0x25D098u;
            goto label_25d098;
        }
    }
    ctx->pc = 0x25D054u;
label_25d054:
    // 0x25d054: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x25d054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
label_25d058:
    // 0x25d058: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25d05c:
    // 0x25d05c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25d05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d060:
    // 0x25d060: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25d060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d064:
    // 0x25d064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d068:
    // 0x25d068: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25d068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25d06c:
    // 0x25d06c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25d070:
    // 0x25d070: 0x40f809  jalr        $v0
label_25d074:
    if (ctx->pc == 0x25D074u) {
        ctx->pc = 0x25D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D070u;
        // 0x25d074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D078u;
        goto label_25d078;
    }
    ctx->pc = 0x25D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D078u);
        ctx->pc = 0x25D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D070u;
        // 0x25d074: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D070u, 0x25D078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D078u;
label_25d078:
    // 0x25d078: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25d078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25d07c:
    // 0x25d07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25d080:
    // 0x25d080: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d084:
    // 0x25d084: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25d088:
    // 0x25d088: 0xc0aa65e  jal         func_2A9978
label_25d08c:
    if (ctx->pc == 0x25D08Cu) {
        ctx->pc = 0x25D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D088u;
        // 0x25d08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D090u;
        goto label_25d090;
    }
    ctx->pc = 0x25D088u;
    SET_GPR_U32(ctx, 31, 0x25D090u);
    ctx->pc = 0x25D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D088u;
    // 0x25d08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25D088u, 0x25D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D090u;
label_25d090:
    // 0x25d090: 0x10000004  b           . + 4 + (0x4 << 2)
label_25d094:
    if (ctx->pc == 0x25D094u) {
        ctx->pc = 0x25D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D090u;
        // 0x25d094: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D098u;
        goto label_25d098;
    }
    ctx->pc = 0x25D090u;
    {
        const bool branch_taken_0x25d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D090u;
        // 0x25d094: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d090) {
            ctx->pc = 0x25D0A4u;
            goto label_25d0a4;
        }
    }
    ctx->pc = 0x25D098u;
label_25d098:
    // 0x25d098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d09c:
    // 0x25d09c: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x25d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
label_25d0a0:
    // 0x25d0a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d0a4:
    // 0x25d0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d0a8:
    // 0x25d0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d0ac:
    // 0x25d0ac: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25d0b0:
    // 0x25d0b0: 0x3e00008  jr          $ra
label_25d0b4:
    if (ctx->pc == 0x25D0B4u) {
        ctx->pc = 0x25D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0B0u;
        // 0x25d0b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0B8u;
        goto label_fallthrough_0x25d0b0;
    }
    ctx->pc = 0x25D0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0B0u;
        // 0x25d0b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d0b0:
    ctx->pc = 0x25D0B8u;
}
