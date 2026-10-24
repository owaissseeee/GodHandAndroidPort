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

// Function: func_001FCF20
// Address: 0x1fcf20 - 0x1fd2c0
void func_001FCF20_0x1fcf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FCF20_0x1fcf20");
#endif

    switch (ctx->pc) {
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf24u: goto label_1fcf24;
        case 0x1fcf28u: goto label_1fcf28;
        case 0x1fcf2cu: goto label_1fcf2c;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf34u: goto label_1fcf34;
        case 0x1fcf38u: goto label_1fcf38;
        case 0x1fcf3cu: goto label_1fcf3c;
        case 0x1fcf40u: goto label_1fcf40;
        case 0x1fcf44u: goto label_1fcf44;
        case 0x1fcf48u: goto label_1fcf48;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf50u: goto label_1fcf50;
        case 0x1fcf54u: goto label_1fcf54;
        case 0x1fcf58u: goto label_1fcf58;
        case 0x1fcf5cu: goto label_1fcf5c;
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf68u: goto label_1fcf68;
        case 0x1fcf6cu: goto label_1fcf6c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcf74u: goto label_1fcf74;
        case 0x1fcf78u: goto label_1fcf78;
        case 0x1fcf7cu: goto label_1fcf7c;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf84u: goto label_1fcf84;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcf90u: goto label_1fcf90;
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcf98u: goto label_1fcf98;
        case 0x1fcf9cu: goto label_1fcf9c;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fcfa4u: goto label_1fcfa4;
        case 0x1fcfa8u: goto label_1fcfa8;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfb4u: goto label_1fcfb4;
        case 0x1fcfb8u: goto label_1fcfb8;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fcfc4u: goto label_1fcfc4;
        case 0x1fcfc8u: goto label_1fcfc8;
        case 0x1fcfccu: goto label_1fcfcc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fcfd4u: goto label_1fcfd4;
        case 0x1fcfd8u: goto label_1fcfd8;
        case 0x1fcfdcu: goto label_1fcfdc;
        case 0x1fcfe0u: goto label_1fcfe0;
        case 0x1fcfe4u: goto label_1fcfe4;
        case 0x1fcfe8u: goto label_1fcfe8;
        case 0x1fcfecu: goto label_1fcfec;
        case 0x1fcff0u: goto label_1fcff0;
        case 0x1fcff4u: goto label_1fcff4;
        case 0x1fcff8u: goto label_1fcff8;
        case 0x1fcffcu: goto label_1fcffc;
        case 0x1fd000u: goto label_1fd000;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd014u: goto label_1fd014;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd020u: goto label_1fd020;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd02cu: goto label_1fd02c;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd034u: goto label_1fd034;
        case 0x1fd038u: goto label_1fd038;
        case 0x1fd03cu: goto label_1fd03c;
        case 0x1fd040u: goto label_1fd040;
        case 0x1fd044u: goto label_1fd044;
        case 0x1fd048u: goto label_1fd048;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd050u: goto label_1fd050;
        case 0x1fd054u: goto label_1fd054;
        case 0x1fd058u: goto label_1fd058;
        case 0x1fd05cu: goto label_1fd05c;
        case 0x1fd060u: goto label_1fd060;
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd06cu: goto label_1fd06c;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd074u: goto label_1fd074;
        case 0x1fd078u: goto label_1fd078;
        case 0x1fd07cu: goto label_1fd07c;
        case 0x1fd080u: goto label_1fd080;
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd088u: goto label_1fd088;
        case 0x1fd08cu: goto label_1fd08c;
        case 0x1fd090u: goto label_1fd090;
        case 0x1fd094u: goto label_1fd094;
        case 0x1fd098u: goto label_1fd098;
        case 0x1fd09cu: goto label_1fd09c;
        case 0x1fd0a0u: goto label_1fd0a0;
        case 0x1fd0a4u: goto label_1fd0a4;
        case 0x1fd0a8u: goto label_1fd0a8;
        case 0x1fd0acu: goto label_1fd0ac;
        case 0x1fd0b0u: goto label_1fd0b0;
        case 0x1fd0b4u: goto label_1fd0b4;
        case 0x1fd0b8u: goto label_1fd0b8;
        case 0x1fd0bcu: goto label_1fd0bc;
        case 0x1fd0c0u: goto label_1fd0c0;
        case 0x1fd0c4u: goto label_1fd0c4;
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0ccu: goto label_1fd0cc;
        case 0x1fd0d0u: goto label_1fd0d0;
        case 0x1fd0d4u: goto label_1fd0d4;
        case 0x1fd0d8u: goto label_1fd0d8;
        case 0x1fd0dcu: goto label_1fd0dc;
        case 0x1fd0e0u: goto label_1fd0e0;
        case 0x1fd0e4u: goto label_1fd0e4;
        case 0x1fd0e8u: goto label_1fd0e8;
        case 0x1fd0ecu: goto label_1fd0ec;
        case 0x1fd0f0u: goto label_1fd0f0;
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd0f8u: goto label_1fd0f8;
        case 0x1fd0fcu: goto label_1fd0fc;
        case 0x1fd100u: goto label_1fd100;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd108u: goto label_1fd108;
        case 0x1fd10cu: goto label_1fd10c;
        case 0x1fd110u: goto label_1fd110;
        case 0x1fd114u: goto label_1fd114;
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd11cu: goto label_1fd11c;
        case 0x1fd120u: goto label_1fd120;
        case 0x1fd124u: goto label_1fd124;
        case 0x1fd128u: goto label_1fd128;
        case 0x1fd12cu: goto label_1fd12c;
        case 0x1fd130u: goto label_1fd130;
        case 0x1fd134u: goto label_1fd134;
        case 0x1fd138u: goto label_1fd138;
        case 0x1fd13cu: goto label_1fd13c;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd148u: goto label_1fd148;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd150u: goto label_1fd150;
        case 0x1fd154u: goto label_1fd154;
        case 0x1fd158u: goto label_1fd158;
        case 0x1fd15cu: goto label_1fd15c;
        case 0x1fd160u: goto label_1fd160;
        case 0x1fd164u: goto label_1fd164;
        case 0x1fd168u: goto label_1fd168;
        case 0x1fd16cu: goto label_1fd16c;
        case 0x1fd170u: goto label_1fd170;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd17cu: goto label_1fd17c;
        case 0x1fd180u: goto label_1fd180;
        case 0x1fd184u: goto label_1fd184;
        case 0x1fd188u: goto label_1fd188;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd190u: goto label_1fd190;
        case 0x1fd194u: goto label_1fd194;
        case 0x1fd198u: goto label_1fd198;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1a0u: goto label_1fd1a0;
        case 0x1fd1a4u: goto label_1fd1a4;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd1acu: goto label_1fd1ac;
        case 0x1fd1b0u: goto label_1fd1b0;
        case 0x1fd1b4u: goto label_1fd1b4;
        case 0x1fd1b8u: goto label_1fd1b8;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1c0u: goto label_1fd1c0;
        case 0x1fd1c4u: goto label_1fd1c4;
        case 0x1fd1c8u: goto label_1fd1c8;
        case 0x1fd1ccu: goto label_1fd1cc;
        case 0x1fd1d0u: goto label_1fd1d0;
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1d8u: goto label_1fd1d8;
        case 0x1fd1dcu: goto label_1fd1dc;
        case 0x1fd1e0u: goto label_1fd1e0;
        case 0x1fd1e4u: goto label_1fd1e4;
        case 0x1fd1e8u: goto label_1fd1e8;
        case 0x1fd1ecu: goto label_1fd1ec;
        case 0x1fd1f0u: goto label_1fd1f0;
        case 0x1fd1f4u: goto label_1fd1f4;
        case 0x1fd1f8u: goto label_1fd1f8;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd200u: goto label_1fd200;
        case 0x1fd204u: goto label_1fd204;
        case 0x1fd208u: goto label_1fd208;
        case 0x1fd20cu: goto label_1fd20c;
        case 0x1fd210u: goto label_1fd210;
        case 0x1fd214u: goto label_1fd214;
        case 0x1fd218u: goto label_1fd218;
        case 0x1fd21cu: goto label_1fd21c;
        case 0x1fd220u: goto label_1fd220;
        case 0x1fd224u: goto label_1fd224;
        case 0x1fd228u: goto label_1fd228;
        case 0x1fd22cu: goto label_1fd22c;
        case 0x1fd230u: goto label_1fd230;
        case 0x1fd234u: goto label_1fd234;
        case 0x1fd238u: goto label_1fd238;
        case 0x1fd23cu: goto label_1fd23c;
        case 0x1fd240u: goto label_1fd240;
        case 0x1fd244u: goto label_1fd244;
        case 0x1fd248u: goto label_1fd248;
        case 0x1fd24cu: goto label_1fd24c;
        case 0x1fd250u: goto label_1fd250;
        case 0x1fd254u: goto label_1fd254;
        case 0x1fd258u: goto label_1fd258;
        case 0x1fd25cu: goto label_1fd25c;
        case 0x1fd260u: goto label_1fd260;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd268u: goto label_1fd268;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd270u: goto label_1fd270;
        case 0x1fd274u: goto label_1fd274;
        case 0x1fd278u: goto label_1fd278;
        case 0x1fd27cu: goto label_1fd27c;
        case 0x1fd280u: goto label_1fd280;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd288u: goto label_1fd288;
        case 0x1fd28cu: goto label_1fd28c;
        case 0x1fd290u: goto label_1fd290;
        case 0x1fd294u: goto label_1fd294;
        case 0x1fd298u: goto label_1fd298;
        case 0x1fd29cu: goto label_1fd29c;
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2a4u: goto label_1fd2a4;
        case 0x1fd2a8u: goto label_1fd2a8;
        case 0x1fd2acu: goto label_1fd2ac;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2b4u: goto label_1fd2b4;
        case 0x1fd2b8u: goto label_1fd2b8;
        case 0x1fd2bcu: goto label_1fd2bc;
        default: break;
    }

    ctx->pc = 0x1fcf20u;

label_1fcf20:
    // 0x1fcf20: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1fcf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1fcf24:
    // 0x1fcf24: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1fcf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_1fcf28:
    // 0x1fcf28: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1fcf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1fcf2c:
    // 0x1fcf2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fcf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf30:
    // 0x1fcf30: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1fcf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_1fcf34:
    // 0x1fcf34: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1fcf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_1fcf38:
    // 0x1fcf38: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1fcf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_1fcf3c:
    // 0x1fcf3c: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1fcf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_1fcf40:
    // 0x1fcf40: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1fcf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_1fcf44:
    // 0x1fcf44: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1fcf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_1fcf48:
    // 0x1fcf48: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x1fcf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_1fcf4c:
    // 0x1fcf4c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1fcf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1fcf50:
    // 0x1fcf50: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1fcf50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1fcf54:
    // 0x1fcf54: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1fcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1fcf58:
    // 0x1fcf58: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1fcf5c:
    if (ctx->pc == 0x1FCF5Cu) {
        ctx->pc = 0x1FCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF58u;
        // 0x1fcf5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF60u;
        goto label_1fcf60;
    }
    ctx->pc = 0x1FCF58u;
    {
        const bool branch_taken_0x1fcf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf58) {
            ctx->pc = 0x1FCF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF58u;
            // 0x1fcf5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCF84u;
            goto label_1fcf84;
        }
    }
    ctx->pc = 0x1FCF60u;
label_1fcf60:
    // 0x1fcf60: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_1fcf64:
    // 0x1fcf64: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1fcf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1fcf68:
    // 0x1fcf68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fcf6c:
    if (ctx->pc == 0x1FCF6Cu) {
        ctx->pc = 0x1FCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF68u;
        // 0x1fcf6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF70u;
        goto label_1fcf70;
    }
    ctx->pc = 0x1FCF68u;
    {
        const bool branch_taken_0x1fcf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF68u;
        // 0x1fcf6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf68) {
            ctx->pc = 0x1FCF74u;
            goto label_1fcf74;
        }
    }
    ctx->pc = 0x1FCF70u;
label_1fcf70:
    // 0x1fcf70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcf74:
    // 0x1fcf74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcf78:
    // 0x1fcf78: 0x106200c4  beq         $v1, $v0, . + 4 + (0xC4 << 2)
label_1fcf7c:
    if (ctx->pc == 0x1FCF7Cu) {
        ctx->pc = 0x1FCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF78u;
        // 0x1fcf7c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF80u;
        goto label_1fcf80;
    }
    ctx->pc = 0x1FCF78u;
    {
        const bool branch_taken_0x1fcf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF78u;
        // 0x1fcf7c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf78) {
            ctx->pc = 0x1FD28Cu;
            goto label_1fd28c;
        }
    }
    ctx->pc = 0x1FCF80u;
label_1fcf80:
    // 0x1fcf80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fcf84:
    // 0x1fcf84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf88:
    // 0x1fcf88: 0xc0e94bc  jal         func_3A52F0
label_1fcf8c:
    if (ctx->pc == 0x1FCF8Cu) {
        ctx->pc = 0x1FCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF88u;
        // 0x1fcf8c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF90u;
        goto label_1fcf90;
    }
    ctx->pc = 0x1FCF88u;
    SET_GPR_U32(ctx, 31, 0x1FCF90u);
    ctx->pc = 0x1FCF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF88u;
    // 0x1fcf8c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1FCF88u, 0x1FCF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF90u;
label_1fcf90:
    // 0x1fcf90: 0x8e54003c  lw          $s4, 0x3C($s2)
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1fcf94:
    // 0x1fcf94: 0x128000bd  beqz        $s4, . + 4 + (0xBD << 2)
label_1fcf98:
    if (ctx->pc == 0x1FCF98u) {
        ctx->pc = 0x1FCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF94u;
        // 0x1fcf98: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF9Cu;
        goto label_1fcf9c;
    }
    ctx->pc = 0x1FCF94u;
    {
        const bool branch_taken_0x1fcf94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF94u;
        // 0x1fcf98: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf94) {
            ctx->pc = 0x1FD28Cu;
            goto label_1fd28c;
        }
    }
    ctx->pc = 0x1FCF9Cu;
label_1fcf9c:
    // 0x1fcf9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fcf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfa0:
    // 0x1fcfa0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fcfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fcfa4:
    // 0x1fcfa4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1fcfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1fcfa8:
    // 0x1fcfa8: 0xc07f204  jal         func_1FC810
label_1fcfac:
    if (ctx->pc == 0x1FCFACu) {
        ctx->pc = 0x1FCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFA8u;
        // 0x1fcfac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFB0u;
        goto label_1fcfb0;
    }
    ctx->pc = 0x1FCFA8u;
    SET_GPR_U32(ctx, 31, 0x1FCFB0u);
    ctx->pc = 0x1FCFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFA8u;
    // 0x1fcfac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC810u, 0x1FCFA8u, 0x1FCFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFB0u;
label_1fcfb0:
    // 0x1fcfb0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcfb4:
    // 0x1fcfb4: 0x108000b1  beqz        $a0, . + 4 + (0xB1 << 2)
label_1fcfb8:
    if (ctx->pc == 0x1FCFB8u) {
        ctx->pc = 0x1FCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFB4u;
        // 0x1fcfb8: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFBCu;
        goto label_1fcfbc;
    }
    ctx->pc = 0x1FCFB4u;
    {
        const bool branch_taken_0x1fcfb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFB4u;
        // 0x1fcfb8: 0x26420010  addiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfb4) {
            ctx->pc = 0x1FD27Cu;
            goto label_1fd27c;
        }
    }
    ctx->pc = 0x1FCFBCu;
label_1fcfbc:
    // 0x1fcfbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fcfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fcfc0:
    // 0x1fcfc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fcfc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fcfc4:
    // 0x1fcfc4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1fcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1fcfc8:
    // 0x1fcfc8: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1fcfcc:
    // 0x1fcfcc: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x1fcfccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fcfd0:
    // 0x1fcfd0: 0x3c170057  lui         $s7, 0x57
    ctx->pc = 0x1fcfd0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
label_1fcfd4:
    // 0x1fcfd4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1fcfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1fcfd8:
    // 0x1fcfd8: 0xc0aec4e  jal         func_2BB138
label_1fcfdc:
    if (ctx->pc == 0x1FCFDCu) {
        ctx->pc = 0x1FCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFD8u;
        // 0x1fcfdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFE0u;
        goto label_1fcfe0;
    }
    ctx->pc = 0x1FCFD8u;
    SET_GPR_U32(ctx, 31, 0x1FCFE0u);
    ctx->pc = 0x1FCFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFD8u;
    // 0x1fcfdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB138u, 0x1FCFD8u, 0x1FCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFE0u;
label_1fcfe0:
    // 0x1fcfe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfe4:
    // 0x1fcfe4: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x1fcfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fcfe8:
    // 0x1fcfe8: 0x52200045  beql        $s1, $zero, . + 4 + (0x45 << 2)
label_1fcfec:
    if (ctx->pc == 0x1FCFECu) {
        ctx->pc = 0x1FCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFE8u;
        // 0x1fcfec: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFF0u;
        goto label_1fcff0;
    }
    ctx->pc = 0x1FCFE8u;
    {
        const bool branch_taken_0x1fcfe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfe8) {
            ctx->pc = 0x1FCFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFE8u;
            // 0x1fcfec: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD100u;
            goto label_1fd100;
        }
    }
    ctx->pc = 0x1FCFF0u;
label_1fcff0:
    // 0x1fcff0: 0xc621054c  lwc1        $f1, 0x54C($s1)
    ctx->pc = 0x1fcff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fcff4:
    // 0x1fcff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fcff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fcff8:
    // 0x1fcff8: 0x0  nop
    ctx->pc = 0x1fcff8u;
    // NOP
label_1fcffc:
    // 0x1fcffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fcffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fd000:
    // 0x1fd000: 0x0  nop
    ctx->pc = 0x1fd000u;
    // NOP
label_1fd004:
    // 0x1fd004: 0x45030096  bc1tl       . + 4 + (0x96 << 2)
label_1fd008:
    if (ctx->pc == 0x1FD008u) {
        ctx->pc = 0x1FD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD004u;
        // 0x1fd008: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD00Cu;
        goto label_1fd00c;
    }
    ctx->pc = 0x1FD004u;
    {
        const bool branch_taken_0x1fd004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd004) {
            ctx->pc = 0x1FD008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD004u;
            // 0x1fd008: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD260u;
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD00Cu;
label_1fd00c:
    // 0x1fd00c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1fd010:
    // 0x1fd010: 0x52250093  beql        $s1, $a1, . + 4 + (0x93 << 2)
label_1fd014:
    if (ctx->pc == 0x1FD014u) {
        ctx->pc = 0x1FD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD010u;
        // 0x1fd014: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD018u;
        goto label_1fd018;
    }
    ctx->pc = 0x1FD010u;
    {
        const bool branch_taken_0x1fd010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fd010) {
            ctx->pc = 0x1FD014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD010u;
            // 0x1fd014: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD260u;
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD018u;
label_1fd018:
    // 0x1fd018: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1fd018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1fd01c:
    // 0x1fd01c: 0x52220090  beql        $s1, $v0, . + 4 + (0x90 << 2)
label_1fd020:
    if (ctx->pc == 0x1FD020u) {
        ctx->pc = 0x1FD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD01Cu;
        // 0x1fd020: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD024u;
        goto label_1fd024;
    }
    ctx->pc = 0x1FD01Cu;
    {
        const bool branch_taken_0x1fd01c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd01c) {
            ctx->pc = 0x1FD020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD01Cu;
            // 0x1fd020: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD260u;
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD024u;
label_1fd024:
    // 0x1fd024: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1fd028:
    // 0x1fd028: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1fd028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1fd02c:
    // 0x1fd02c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1fd030:
    if (ctx->pc == 0x1FD030u) {
        ctx->pc = 0x1FD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD02Cu;
        // 0x1fd030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD034u;
        goto label_1fd034;
    }
    ctx->pc = 0x1FD02Cu;
    {
        const bool branch_taken_0x1fd02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD02Cu;
        // 0x1fd030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd02c) {
            ctx->pc = 0x1FD038u;
            goto label_1fd038;
        }
    }
    ctx->pc = 0x1FD034u;
label_1fd034:
    // 0x1fd034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd038:
    // 0x1fd038: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd03c:
    // 0x1fd03c: 0x50530088  beql        $v0, $s3, . + 4 + (0x88 << 2)
label_1fd040:
    if (ctx->pc == 0x1FD040u) {
        ctx->pc = 0x1FD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD03Cu;
        // 0x1fd040: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD044u;
        goto label_1fd044;
    }
    ctx->pc = 0x1FD03Cu;
    {
        const bool branch_taken_0x1fd03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1fd03c) {
            ctx->pc = 0x1FD040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD03Cu;
            // 0x1fd040: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD260u;
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD044u;
label_1fd044:
    // 0x1fd044: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x1fd044u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd048:
    // 0x1fd048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fd04c:
    // 0x1fd04c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_1fd050:
    if (ctx->pc == 0x1FD050u) {
        ctx->pc = 0x1FD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD04Cu;
        // 0x1fd050: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD054u;
        goto label_1fd054;
    }
    ctx->pc = 0x1FD04Cu;
    {
        const bool branch_taken_0x1fd04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd04c) {
            ctx->pc = 0x1FD050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD04Cu;
            // 0x1fd050: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD100u;
            goto label_1fd100;
        }
    }
    ctx->pc = 0x1FD054u;
label_1fd054:
    // 0x1fd054: 0x9e420000  lwu         $v0, 0x0($s2)
    ctx->pc = 0x1fd054u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fd058:
    // 0x1fd058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fd05c:
    // 0x1fd05c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_1fd060:
    if (ctx->pc == 0x1FD060u) {
        ctx->pc = 0x1FD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD05Cu;
        // 0x1fd060: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD064u;
        goto label_1fd064;
    }
    ctx->pc = 0x1FD05Cu;
    {
        const bool branch_taken_0x1fd05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd05c) {
            ctx->pc = 0x1FD060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD05Cu;
            // 0x1fd060: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD100u;
            goto label_1fd100;
        }
    }
    ctx->pc = 0x1FD064u;
label_1fd064:
    // 0x1fd064: 0x50a00026  beql        $a1, $zero, . + 4 + (0x26 << 2)
label_1fd068:
    if (ctx->pc == 0x1FD068u) {
        ctx->pc = 0x1FD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD064u;
        // 0x1fd068: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD06Cu;
        goto label_1fd06c;
    }
    ctx->pc = 0x1FD064u;
    {
        const bool branch_taken_0x1fd064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd064) {
            ctx->pc = 0x1FD068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD064u;
            // 0x1fd068: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD100u;
            goto label_1fd100;
        }
    }
    ctx->pc = 0x1FD06Cu;
label_1fd06c:
    // 0x1fd06c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1fd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1fd070:
    // 0x1fd070: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1fd074:
    // 0x1fd074: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1fd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1fd078:
    // 0x1fd078: 0x40f809  jalr        $v0
label_1fd07c:
    if (ctx->pc == 0x1FD07Cu) {
        ctx->pc = 0x1FD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD078u;
        // 0x1fd07c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD080u;
        goto label_1fd080;
    }
    ctx->pc = 0x1FD078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD080u);
        ctx->pc = 0x1FD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD078u;
        // 0x1fd07c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD078u, 0x1FD080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD080u;
label_1fd080:
    // 0x1fd080: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1fd080u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd084:
    // 0x1fd084: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1fd084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1fd088:
    // 0x1fd088: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1fd08c:
    // 0x1fd08c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1fd08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1fd090:
    // 0x1fd090: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1fd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1fd094:
    // 0x1fd094: 0x40f809  jalr        $v0
label_1fd098:
    if (ctx->pc == 0x1FD098u) {
        ctx->pc = 0x1FD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD094u;
        // 0x1fd098: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD09Cu;
        goto label_1fd09c;
    }
    ctx->pc = 0x1FD094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD09Cu);
        ctx->pc = 0x1FD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD094u;
        // 0x1fd098: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD094u, 0x1FD09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD09Cu;
label_1fd09c:
    // 0x1fd09c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1fd09cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd0a0:
    // 0x1fd0a0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1fd0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1fd0a4:
    // 0x1fd0a4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1fd0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd0a8:
    // 0x1fd0a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fd0ac:
    // 0x1fd0ac: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1fd0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd0b0:
    // 0x1fd0b0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fd0b4:
    // 0x1fd0b4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1fd0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fd0b8:
    // 0x1fd0b8: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1fd0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_1fd0bc:
    // 0x1fd0bc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1fd0bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1fd0c0:
    // 0x1fd0c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1fd0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1fd0c4:
    // 0x1fd0c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1fd0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1fd0c8:
    // 0x1fd0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0cc:
    // 0x1fd0cc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fd0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fd0d0:
    // 0x1fd0d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0d4:
    // 0x1fd0d4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1fd0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fd0d8:
    // 0x1fd0d8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1fd0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1fd0dc:
    // 0x1fd0dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1fd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1fd0e0:
    // 0x1fd0e0: 0x24090034  addiu       $t1, $zero, 0x34
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1fd0e4:
    // 0x1fd0e4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1fd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1fd0e8:
    // 0x1fd0e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fd0e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0ec:
    // 0x1fd0ec: 0xc04c784  jal         func_131E10
label_1fd0f0:
    if (ctx->pc == 0x1FD0F0u) {
        ctx->pc = 0x1FD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0ECu;
        // 0x1fd0f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0F4u;
        goto label_1fd0f4;
    }
    ctx->pc = 0x1FD0ECu;
    SET_GPR_U32(ctx, 31, 0x1FD0F4u);
    ctx->pc = 0x1FD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0ECu;
    // 0x1fd0f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1FD0ECu, 0x1FD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0F4u;
label_1fd0f4:
    // 0x1fd0f4: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
label_1fd0f8:
    if (ctx->pc == 0x1FD0F8u) {
        ctx->pc = 0x1FD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0F4u;
        // 0x1fd0f8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0FCu;
        goto label_1fd0fc;
    }
    ctx->pc = 0x1FD0F4u;
    {
        const bool branch_taken_0x1fd0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0f4) {
            ctx->pc = 0x1FD0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD0F4u;
            // 0x1fd0f8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD260u;
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD0FCu;
label_1fd0fc:
    // 0x1fd0fc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1fd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1fd100:
    // 0x1fd100: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1fd100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_1fd104:
    // 0x1fd104: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fd104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1fd108:
    // 0x1fd108: 0x86430046  lh          $v1, 0x46($s2)
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 70)));
label_1fd10c:
    // 0x1fd10c: 0xa6030046  sh          $v1, 0x46($s0)
    ctx->pc = 0x1fd10cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
label_1fd110:
    // 0x1fd110: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1fd110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1fd114:
    // 0x1fd114: 0x86420044  lh          $v0, 0x44($s2)
    ctx->pc = 0x1fd114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_1fd118:
    // 0x1fd118: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1fd118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1fd11c:
    // 0x1fd11c: 0xa6020044  sh          $v0, 0x44($s0)
    ctx->pc = 0x1fd11cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
label_1fd120:
    // 0x1fd120: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fd120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1fd124:
    // 0x1fd124: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1fd124u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd128:
    // 0x1fd128: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1fd128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1fd12c:
    // 0x1fd12c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1fd12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fd130:
    // 0x1fd130: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fd130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd134:
    // 0x1fd134: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1fd134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fd138:
    // 0x1fd138: 0x0  nop
    ctx->pc = 0x1fd138u;
    // NOP
label_1fd13c:
    // 0x1fd13c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_1fd140:
    if (ctx->pc == 0x1FD140u) {
        ctx->pc = 0x1FD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD13Cu;
        // 0x1fd140: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD144u;
        goto label_1fd144;
    }
    ctx->pc = 0x1FD13Cu;
    {
        const bool branch_taken_0x1fd13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD13Cu;
        // 0x1fd140: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd13c) {
            ctx->pc = 0x1FD1A8u;
            goto label_1fd1a8;
        }
    }
    ctx->pc = 0x1FD144u;
label_1fd144:
    // 0x1fd144: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1fd144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fd148:
    // 0x1fd148: 0x0  nop
    ctx->pc = 0x1fd148u;
    // NOP
label_1fd14c:
    // 0x1fd14c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1fd150:
    if (ctx->pc == 0x1FD150u) {
        ctx->pc = 0x1FD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD14Cu;
        // 0x1fd150: 0xc7a00088  lwc1        $f0, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD154u;
        goto label_1fd154;
    }
    ctx->pc = 0x1FD14Cu;
    {
        const bool branch_taken_0x1fd14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD14Cu;
        // 0x1fd150: 0xc7a00088  lwc1        $f0, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd14c) {
            ctx->pc = 0x1FD1A8u;
            goto label_1fd1a8;
        }
    }
    ctx->pc = 0x1FD154u;
label_1fd154:
    // 0x1fd154: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x1fd154u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fd158:
    // 0x1fd158: 0x0  nop
    ctx->pc = 0x1fd158u;
    // NOP
label_1fd15c:
    // 0x1fd15c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1fd160:
    if (ctx->pc == 0x1FD160u) {
        ctx->pc = 0x1FD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD15Cu;
        // 0x1fd160: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD164u;
        goto label_1fd164;
    }
    ctx->pc = 0x1FD15Cu;
    {
        const bool branch_taken_0x1fd15c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD15Cu;
        // 0x1fd160: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd15c) {
            ctx->pc = 0x1FD1ACu;
            goto label_1fd1ac;
        }
    }
    ctx->pc = 0x1FD164u;
label_1fd164:
    // 0x1fd164: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_1fd168:
    if (ctx->pc == 0x1FD168u) {
        ctx->pc = 0x1FD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD164u;
        // 0x1fd168: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD16Cu;
        goto label_1fd16c;
    }
    ctx->pc = 0x1FD164u;
    {
        const bool branch_taken_0x1fd164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd164) {
            ctx->pc = 0x1FD168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD164u;
            // 0x1fd168: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD1ACu;
            goto label_1fd1ac;
        }
    }
    ctx->pc = 0x1FD16Cu;
label_1fd16c:
    // 0x1fd16c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1fd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1fd170:
    // 0x1fd170: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1fd170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1fd174:
    // 0x1fd174: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1fd174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd178:
    // 0x1fd178: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1fd178u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1fd17c:
    // 0x1fd17c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1fd17cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1fd180:
    // 0x1fd180: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1fd180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1fd184:
    // 0x1fd184: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1fd184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1fd188:
    // 0x1fd188: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1fd188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1fd18c:
    // 0x1fd18c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1fd18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd190:
    // 0x1fd190: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1fd190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd194:
    // 0x1fd194: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1fd194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd198:
    // 0x1fd198: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fd198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fd19c:
    // 0x1fd19c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1fd19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fd1a0:
    // 0x1fd1a0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1fd1a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1fd1a4:
    // 0x1fd1a4: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1fd1a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fd1a8:
    // 0x1fd1a8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1fd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fd1ac:
    // 0x1fd1ac: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
label_1fd1b0:
    if (ctx->pc == 0x1FD1B0u) {
        ctx->pc = 0x1FD1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1ACu;
        // 0x1fd1b0: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1B4u;
        goto label_1fd1b4;
    }
    ctx->pc = 0x1FD1ACu;
    {
        const bool branch_taken_0x1fd1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1FD1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1ACu;
        // 0x1fd1b0: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1ac) {
            ctx->pc = 0x1FD1C8u;
            goto label_1fd1c8;
        }
    }
    ctx->pc = 0x1FD1B4u;
label_1fd1b4:
    // 0x1fd1b4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1fd1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1fd1b8:
    // 0x1fd1b8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fd1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd1bc:
    // 0x1fd1bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1fd1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1fd1c0:
    // 0x1fd1c0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1fd1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd1c4:
    // 0x1fd1c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fd1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fd1c8:
    // 0x1fd1c8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1fd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1fd1cc:
    // 0x1fd1cc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1fd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fd1d0:
    // 0x1fd1d0: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x1fd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_1fd1d4:
    // 0x1fd1d4: 0x84650040  lh          $a1, 0x40($v1)
    ctx->pc = 0x1fd1d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1fd1d8:
    // 0x1fd1d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1fd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1fd1dc:
    // 0x1fd1dc: 0x40f809  jalr        $v0
label_1fd1e0:
    if (ctx->pc == 0x1FD1E0u) {
        ctx->pc = 0x1FD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1DCu;
        // 0x1fd1e0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1E4u;
        goto label_1fd1e4;
    }
    ctx->pc = 0x1FD1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD1E4u);
        ctx->pc = 0x1FD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1DCu;
        // 0x1fd1e0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1DCu, 0x1FD1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD1E4u;
label_1fd1e4:
    // 0x1fd1e4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1fd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fd1e8:
    // 0x1fd1e8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1fd1ec:
    if (ctx->pc == 0x1FD1ECu) {
        ctx->pc = 0x1FD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1E8u;
        // 0x1fd1ec: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD1F0u;
        goto label_1fd1f0;
    }
    ctx->pc = 0x1FD1E8u;
    {
        const bool branch_taken_0x1fd1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd1e8) {
            ctx->pc = 0x1FD1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1E8u;
            // 0x1fd1ec: 0x8e43004c  lw          $v1, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD20Cu;
            goto label_1fd20c;
        }
    }
    ctx->pc = 0x1FD1F0u;
label_1fd1f0:
    // 0x1fd1f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fd1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd1f4:
    // 0x1fd1f4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1fd1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1fd1f8:
    // 0x1fd1f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fd1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd1fc:
    // 0x1fd1fc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1fd1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1fd200:
    // 0x1fd200: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1fd200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd204:
    // 0x1fd204: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1fd204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1fd208:
    // 0x1fd208: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1fd208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_1fd20c:
    // 0x1fd20c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1fd20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fd210:
    // 0x1fd210: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1fd210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_1fd214:
    // 0x1fd214: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1fd218:
    // 0x1fd218: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1fd218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1fd21c:
    // 0x1fd21c: 0xc0b6dac  jal         func_2DB6B0
label_1fd220:
    if (ctx->pc == 0x1FD220u) {
        ctx->pc = 0x1FD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD21Cu;
        // 0x1fd220: 0xae440034  sw          $a0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD224u;
        goto label_1fd224;
    }
    ctx->pc = 0x1FD21Cu;
    SET_GPR_U32(ctx, 31, 0x1FD224u);
    ctx->pc = 0x1FD220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD21Cu;
    // 0x1fd220: 0xae440034  sw          $a0, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1FD21Cu, 0x1FD224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD224u;
label_1fd224:
    // 0x1fd224: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1fd224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1fd228:
    // 0x1fd228: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1fd22c:
    if (ctx->pc == 0x1FD22Cu) {
        ctx->pc = 0x1FD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD228u;
        // 0x1fd22c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD230u;
        goto label_1fd230;
    }
    ctx->pc = 0x1FD228u;
    {
        const bool branch_taken_0x1fd228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD228u;
        // 0x1fd22c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd228) {
            ctx->pc = 0x1FD23Cu;
            goto label_1fd23c;
        }
    }
    ctx->pc = 0x1FD230u;
label_1fd230:
    // 0x1fd230: 0x26e44380  addiu       $a0, $s7, 0x4380
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17280));
label_1fd234:
    // 0x1fd234: 0xc07f8d2  jal         func_1FE348
label_1fd238:
    if (ctx->pc == 0x1FD238u) {
        ctx->pc = 0x1FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD234u;
        // 0x1fd238: 0x8c45f190  lw          $a1, -0xE70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD23Cu;
        goto label_1fd23c;
    }
    ctx->pc = 0x1FD234u;
    SET_GPR_U32(ctx, 31, 0x1FD23Cu);
    ctx->pc = 0x1FD238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD234u;
    // 0x1fd238: 0x8c45f190  lw          $a1, -0xE70($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE348u, 0x1FD234u, 0x1FD23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD23Cu;
label_1fd23c:
    // 0x1fd23c: 0xc0b6dac  jal         func_2DB6B0
label_1fd240:
    if (ctx->pc == 0x1FD240u) {
        ctx->pc = 0x1FD244u;
        goto label_1fd244;
    }
    ctx->pc = 0x1FD23Cu;
    SET_GPR_U32(ctx, 31, 0x1FD244u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1FD23Cu, 0x1FD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD244u;
label_1fd244:
    // 0x1fd244: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_1fd248:
    if (ctx->pc == 0x1FD248u) {
        ctx->pc = 0x1FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD244u;
        // 0x1fd248: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD24Cu;
        goto label_1fd24c;
    }
    ctx->pc = 0x1FD244u;
    {
        const bool branch_taken_0x1fd244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1fd244) {
            ctx->pc = 0x1FD248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD244u;
            // 0x1fd248: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD260u;
            goto label_1fd260;
        }
    }
    ctx->pc = 0x1FD24Cu;
label_1fd24c:
    // 0x1fd24c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1fd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1fd250:
    // 0x1fd250: 0x26e44380  addiu       $a0, $s7, 0x4380
    ctx->pc = 0x1fd250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17280));
label_1fd254:
    // 0x1fd254: 0xc07f8d2  jal         func_1FE348
label_1fd258:
    if (ctx->pc == 0x1FD258u) {
        ctx->pc = 0x1FD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD254u;
        // 0x1fd258: 0x8c45f194  lw          $a1, -0xE6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD25Cu;
        goto label_1fd25c;
    }
    ctx->pc = 0x1FD254u;
    SET_GPR_U32(ctx, 31, 0x1FD25Cu);
    ctx->pc = 0x1FD258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD254u;
    // 0x1fd258: 0x8c45f194  lw          $a1, -0xE6C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE348u, 0x1FD254u, 0x1FD25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD25Cu;
label_1fd25c:
    // 0x1fd25c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1fd25cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1fd260:
    // 0x1fd260: 0x2ac20014  slti        $v0, $s6, 0x14
    ctx->pc = 0x1fd260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)20) ? 1 : 0);
label_1fd264:
    // 0x1fd264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fd268:
    if (ctx->pc == 0x1FD268u) {
        ctx->pc = 0x1FD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD264u;
        // 0x1fd268: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD26Cu;
        goto label_1fd26c;
    }
    ctx->pc = 0x1FD264u;
    {
        const bool branch_taken_0x1fd264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD264u;
        // 0x1fd268: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd264) {
            ctx->pc = 0x1FD27Cu;
            goto label_1fd27c;
        }
    }
    ctx->pc = 0x1FD26Cu;
label_1fd26c:
    // 0x1fd26c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1fd270:
    // 0x1fd270: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1fd274:
    // 0x1fd274: 0x5480ff58  bnel        $a0, $zero, . + 4 + (-0xA8 << 2)
label_1fd278:
    if (ctx->pc == 0x1FD278u) {
        ctx->pc = 0x1FD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD274u;
        // 0x1fd278: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD27Cu;
        goto label_1fd27c;
    }
    ctx->pc = 0x1FD274u;
    {
        const bool branch_taken_0x1fd274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd274) {
            ctx->pc = 0x1FD278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD274u;
            // 0x1fd278: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcfd8;
        }
    }
    ctx->pc = 0x1FD27Cu;
label_1fd27c:
    // 0x1fd27c: 0x8e940024  lw          $s4, 0x24($s4)
    ctx->pc = 0x1fd27cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1fd280:
    // 0x1fd280: 0x5680ff47  bnel        $s4, $zero, . + 4 + (-0xB9 << 2)
label_1fd284:
    if (ctx->pc == 0x1FD284u) {
        ctx->pc = 0x1FD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD280u;
        // 0x1fd284: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD288u;
        goto label_1fd288;
    }
    ctx->pc = 0x1FD280u;
    {
        const bool branch_taken_0x1fd280 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd280) {
            ctx->pc = 0x1FD284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD280u;
            // 0x1fd284: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcfa0;
        }
    }
    ctx->pc = 0x1FD288u;
label_1fd288:
    // 0x1fd288: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1fd288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1fd28c:
    // 0x1fd28c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1fd28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1fd290:
    // 0x1fd290: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1fd294:
    // 0x1fd294: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1fd294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1fd298:
    // 0x1fd298: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1fd298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1fd29c:
    // 0x1fd29c: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1fd29cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1fd2a0:
    // 0x1fd2a0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1fd2a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1fd2a4:
    // 0x1fd2a4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x1fd2a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1fd2a8:
    // 0x1fd2a8: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x1fd2a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1fd2ac:
    // 0x1fd2ac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1fd2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1fd2b0:
    // 0x1fd2b0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1fd2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fd2b4:
    // 0x1fd2b4: 0x3e00008  jr          $ra
label_1fd2b8:
    if (ctx->pc == 0x1FD2B8u) {
        ctx->pc = 0x1FD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2B4u;
        // 0x1fd2b8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD2BCu;
        goto label_1fd2bc;
    }
    ctx->pc = 0x1FD2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2B4u;
        // 0x1fd2b8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD2BCu;
label_1fd2bc:
    // 0x1fd2bc: 0x0  nop
    ctx->pc = 0x1fd2bcu;
    // NOP
    ctx->pc = 0x1fd2c0u;
}
