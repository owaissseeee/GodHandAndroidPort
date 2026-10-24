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

// Function: func_0025FE30
// Address: 0x25fe30 - 0x260278
void func_0025FE30_0x25fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025FE30_0x25fe30");
#endif

    switch (ctx->pc) {
        case 0x25fe30u: goto label_25fe30;
        case 0x25fe34u: goto label_25fe34;
        case 0x25fe38u: goto label_25fe38;
        case 0x25fe3cu: goto label_25fe3c;
        case 0x25fe40u: goto label_25fe40;
        case 0x25fe44u: goto label_25fe44;
        case 0x25fe48u: goto label_25fe48;
        case 0x25fe4cu: goto label_25fe4c;
        case 0x25fe50u: goto label_25fe50;
        case 0x25fe54u: goto label_25fe54;
        case 0x25fe58u: goto label_25fe58;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe60u: goto label_25fe60;
        case 0x25fe64u: goto label_25fe64;
        case 0x25fe68u: goto label_25fe68;
        case 0x25fe6cu: goto label_25fe6c;
        case 0x25fe70u: goto label_25fe70;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe78u: goto label_25fe78;
        case 0x25fe7cu: goto label_25fe7c;
        case 0x25fe80u: goto label_25fe80;
        case 0x25fe84u: goto label_25fe84;
        case 0x25fe88u: goto label_25fe88;
        case 0x25fe8cu: goto label_25fe8c;
        case 0x25fe90u: goto label_25fe90;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fe98u: goto label_25fe98;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fea0u: goto label_25fea0;
        case 0x25fea4u: goto label_25fea4;
        case 0x25fea8u: goto label_25fea8;
        case 0x25feacu: goto label_25feac;
        case 0x25feb0u: goto label_25feb0;
        case 0x25feb4u: goto label_25feb4;
        case 0x25feb8u: goto label_25feb8;
        case 0x25febcu: goto label_25febc;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fec4u: goto label_25fec4;
        case 0x25fec8u: goto label_25fec8;
        case 0x25feccu: goto label_25fecc;
        case 0x25fed0u: goto label_25fed0;
        case 0x25fed4u: goto label_25fed4;
        case 0x25fed8u: goto label_25fed8;
        case 0x25fedcu: goto label_25fedc;
        case 0x25fee0u: goto label_25fee0;
        case 0x25fee4u: goto label_25fee4;
        case 0x25fee8u: goto label_25fee8;
        case 0x25feecu: goto label_25feec;
        case 0x25fef0u: goto label_25fef0;
        case 0x25fef4u: goto label_25fef4;
        case 0x25fef8u: goto label_25fef8;
        case 0x25fefcu: goto label_25fefc;
        case 0x25ff00u: goto label_25ff00;
        case 0x25ff04u: goto label_25ff04;
        case 0x25ff08u: goto label_25ff08;
        case 0x25ff0cu: goto label_25ff0c;
        case 0x25ff10u: goto label_25ff10;
        case 0x25ff14u: goto label_25ff14;
        case 0x25ff18u: goto label_25ff18;
        case 0x25ff1cu: goto label_25ff1c;
        case 0x25ff20u: goto label_25ff20;
        case 0x25ff24u: goto label_25ff24;
        case 0x25ff28u: goto label_25ff28;
        case 0x25ff2cu: goto label_25ff2c;
        case 0x25ff30u: goto label_25ff30;
        case 0x25ff34u: goto label_25ff34;
        case 0x25ff38u: goto label_25ff38;
        case 0x25ff3cu: goto label_25ff3c;
        case 0x25ff40u: goto label_25ff40;
        case 0x25ff44u: goto label_25ff44;
        case 0x25ff48u: goto label_25ff48;
        case 0x25ff4cu: goto label_25ff4c;
        case 0x25ff50u: goto label_25ff50;
        case 0x25ff54u: goto label_25ff54;
        case 0x25ff58u: goto label_25ff58;
        case 0x25ff5cu: goto label_25ff5c;
        case 0x25ff60u: goto label_25ff60;
        case 0x25ff64u: goto label_25ff64;
        case 0x25ff68u: goto label_25ff68;
        case 0x25ff6cu: goto label_25ff6c;
        case 0x25ff70u: goto label_25ff70;
        case 0x25ff74u: goto label_25ff74;
        case 0x25ff78u: goto label_25ff78;
        case 0x25ff7cu: goto label_25ff7c;
        case 0x25ff80u: goto label_25ff80;
        case 0x25ff84u: goto label_25ff84;
        case 0x25ff88u: goto label_25ff88;
        case 0x25ff8cu: goto label_25ff8c;
        case 0x25ff90u: goto label_25ff90;
        case 0x25ff94u: goto label_25ff94;
        case 0x25ff98u: goto label_25ff98;
        case 0x25ff9cu: goto label_25ff9c;
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffa4u: goto label_25ffa4;
        case 0x25ffa8u: goto label_25ffa8;
        case 0x25ffacu: goto label_25ffac;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x25ffb4u: goto label_25ffb4;
        case 0x25ffb8u: goto label_25ffb8;
        case 0x25ffbcu: goto label_25ffbc;
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        case 0x260018u: goto label_260018;
        case 0x26001cu: goto label_26001c;
        case 0x260020u: goto label_260020;
        case 0x260024u: goto label_260024;
        case 0x260028u: goto label_260028;
        case 0x26002cu: goto label_26002c;
        case 0x260030u: goto label_260030;
        case 0x260034u: goto label_260034;
        case 0x260038u: goto label_260038;
        case 0x26003cu: goto label_26003c;
        case 0x260040u: goto label_260040;
        case 0x260044u: goto label_260044;
        case 0x260048u: goto label_260048;
        case 0x26004cu: goto label_26004c;
        case 0x260050u: goto label_260050;
        case 0x260054u: goto label_260054;
        case 0x260058u: goto label_260058;
        case 0x26005cu: goto label_26005c;
        case 0x260060u: goto label_260060;
        case 0x260064u: goto label_260064;
        case 0x260068u: goto label_260068;
        case 0x26006cu: goto label_26006c;
        case 0x260070u: goto label_260070;
        case 0x260074u: goto label_260074;
        case 0x260078u: goto label_260078;
        case 0x26007cu: goto label_26007c;
        case 0x260080u: goto label_260080;
        case 0x260084u: goto label_260084;
        case 0x260088u: goto label_260088;
        case 0x26008cu: goto label_26008c;
        case 0x260090u: goto label_260090;
        case 0x260094u: goto label_260094;
        case 0x260098u: goto label_260098;
        case 0x26009cu: goto label_26009c;
        case 0x2600a0u: goto label_2600a0;
        case 0x2600a4u: goto label_2600a4;
        case 0x2600a8u: goto label_2600a8;
        case 0x2600acu: goto label_2600ac;
        case 0x2600b0u: goto label_2600b0;
        case 0x2600b4u: goto label_2600b4;
        case 0x2600b8u: goto label_2600b8;
        case 0x2600bcu: goto label_2600bc;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600c4u: goto label_2600c4;
        case 0x2600c8u: goto label_2600c8;
        case 0x2600ccu: goto label_2600cc;
        case 0x2600d0u: goto label_2600d0;
        case 0x2600d4u: goto label_2600d4;
        case 0x2600d8u: goto label_2600d8;
        case 0x2600dcu: goto label_2600dc;
        case 0x2600e0u: goto label_2600e0;
        case 0x2600e4u: goto label_2600e4;
        case 0x2600e8u: goto label_2600e8;
        case 0x2600ecu: goto label_2600ec;
        case 0x2600f0u: goto label_2600f0;
        case 0x2600f4u: goto label_2600f4;
        case 0x2600f8u: goto label_2600f8;
        case 0x2600fcu: goto label_2600fc;
        case 0x260100u: goto label_260100;
        case 0x260104u: goto label_260104;
        case 0x260108u: goto label_260108;
        case 0x26010cu: goto label_26010c;
        case 0x260110u: goto label_260110;
        case 0x260114u: goto label_260114;
        case 0x260118u: goto label_260118;
        case 0x26011cu: goto label_26011c;
        case 0x260120u: goto label_260120;
        case 0x260124u: goto label_260124;
        case 0x260128u: goto label_260128;
        case 0x26012cu: goto label_26012c;
        case 0x260130u: goto label_260130;
        case 0x260134u: goto label_260134;
        case 0x260138u: goto label_260138;
        case 0x26013cu: goto label_26013c;
        case 0x260140u: goto label_260140;
        case 0x260144u: goto label_260144;
        case 0x260148u: goto label_260148;
        case 0x26014cu: goto label_26014c;
        case 0x260150u: goto label_260150;
        case 0x260154u: goto label_260154;
        case 0x260158u: goto label_260158;
        case 0x26015cu: goto label_26015c;
        case 0x260160u: goto label_260160;
        case 0x260164u: goto label_260164;
        case 0x260168u: goto label_260168;
        case 0x26016cu: goto label_26016c;
        case 0x260170u: goto label_260170;
        case 0x260174u: goto label_260174;
        case 0x260178u: goto label_260178;
        case 0x26017cu: goto label_26017c;
        case 0x260180u: goto label_260180;
        case 0x260184u: goto label_260184;
        case 0x260188u: goto label_260188;
        case 0x26018cu: goto label_26018c;
        case 0x260190u: goto label_260190;
        case 0x260194u: goto label_260194;
        case 0x260198u: goto label_260198;
        case 0x26019cu: goto label_26019c;
        case 0x2601a0u: goto label_2601a0;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601a8u: goto label_2601a8;
        case 0x2601acu: goto label_2601ac;
        case 0x2601b0u: goto label_2601b0;
        case 0x2601b4u: goto label_2601b4;
        case 0x2601b8u: goto label_2601b8;
        case 0x2601bcu: goto label_2601bc;
        case 0x2601c0u: goto label_2601c0;
        case 0x2601c4u: goto label_2601c4;
        case 0x2601c8u: goto label_2601c8;
        case 0x2601ccu: goto label_2601cc;
        case 0x2601d0u: goto label_2601d0;
        case 0x2601d4u: goto label_2601d4;
        case 0x2601d8u: goto label_2601d8;
        case 0x2601dcu: goto label_2601dc;
        case 0x2601e0u: goto label_2601e0;
        case 0x2601e4u: goto label_2601e4;
        case 0x2601e8u: goto label_2601e8;
        case 0x2601ecu: goto label_2601ec;
        case 0x2601f0u: goto label_2601f0;
        case 0x2601f4u: goto label_2601f4;
        case 0x2601f8u: goto label_2601f8;
        case 0x2601fcu: goto label_2601fc;
        case 0x260200u: goto label_260200;
        case 0x260204u: goto label_260204;
        case 0x260208u: goto label_260208;
        case 0x26020cu: goto label_26020c;
        case 0x260210u: goto label_260210;
        case 0x260214u: goto label_260214;
        case 0x260218u: goto label_260218;
        case 0x26021cu: goto label_26021c;
        case 0x260220u: goto label_260220;
        case 0x260224u: goto label_260224;
        case 0x260228u: goto label_260228;
        case 0x26022cu: goto label_26022c;
        case 0x260230u: goto label_260230;
        case 0x260234u: goto label_260234;
        case 0x260238u: goto label_260238;
        case 0x26023cu: goto label_26023c;
        case 0x260240u: goto label_260240;
        case 0x260244u: goto label_260244;
        case 0x260248u: goto label_260248;
        case 0x26024cu: goto label_26024c;
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        case 0x260260u: goto label_260260;
        case 0x260264u: goto label_260264;
        case 0x260268u: goto label_260268;
        case 0x26026cu: goto label_26026c;
        case 0x260270u: goto label_260270;
        case 0x260274u: goto label_260274;
        default: break;
    }

    ctx->pc = 0x25fe30u;

label_25fe30:
    // 0x25fe30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_25fe34:
    // 0x25fe34: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x25fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_25fe38:
    // 0x25fe38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25fe38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fe3c:
    // 0x25fe3c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x25fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_25fe40:
    // 0x25fe40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_25fe44:
    // 0x25fe44: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x25fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_25fe48:
    // 0x25fe48: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x25fe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_25fe4c:
    // 0x25fe4c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x25fe4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fe50:
    // 0x25fe50: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x25fe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_25fe54:
    // 0x25fe54: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25fe54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25fe58:
    // 0x25fe58: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x25fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_25fe5c:
    // 0x25fe5c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x25fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_25fe60:
    // 0x25fe60: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x25fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_25fe64:
    // 0x25fe64: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25fe64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25fe68:
    // 0x25fe68: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x25fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_25fe6c:
    // 0x25fe6c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25fe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_25fe70:
    // 0x25fe70: 0xc07e804  jal         func_1FA010
label_25fe74:
    if (ctx->pc == 0x25FE74u) {
        ctx->pc = 0x25FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE70u;
        // 0x25fe74: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FE78u;
        goto label_25fe78;
    }
    ctx->pc = 0x25FE70u;
    SET_GPR_U32(ctx, 31, 0x25FE78u);
    ctx->pc = 0x25FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE70u;
    // 0x25fe74: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x25FE70u, 0x25FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE78u;
label_25fe78:
    // 0x25fe78: 0x8e6316d4  lw          $v1, 0x16D4($s3)
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
label_25fe7c:
    // 0x25fe7c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x25fe7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25fe80:
    // 0x25fe80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fe84:
    // 0x25fe84: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_25fe88:
    // 0x25fe88: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x25fe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_25fe8c:
    // 0x25fe8c: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_25fe90:
    if (ctx->pc == 0x25FE90u) {
        ctx->pc = 0x25FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE8Cu;
        // 0x25fe90: 0x82900a  movz        $s2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FE94u;
        goto label_25fe94;
    }
    ctx->pc = 0x25FE8Cu;
    {
        const bool branch_taken_0x25fe8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE8Cu;
        // 0x25fe90: 0x82900a  movz        $s2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe8c) {
            ctx->pc = 0x25FF64u;
            goto label_25ff64;
        }
    }
    ctx->pc = 0x25FE94u;
label_25fe94:
    // 0x25fe94: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x25fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_25fe98:
    // 0x25fe98: 0xc0a5266  jal         func_294998
label_25fe9c:
    if (ctx->pc == 0x25FE9Cu) {
        ctx->pc = 0x25FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE98u;
        // 0x25fe9c: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEA0u;
        goto label_25fea0;
    }
    ctx->pc = 0x25FE98u;
    SET_GPR_U32(ctx, 31, 0x25FEA0u);
    ctx->pc = 0x25FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE98u;
    // 0x25fe9c: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294998u, 0x25FE98u, 0x25FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEA0u;
label_25fea0:
    // 0x25fea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25fea4:
    if (ctx->pc == 0x25FEA4u) {
        ctx->pc = 0x25FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEA0u;
        // 0x25fea4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEA8u;
        goto label_25fea8;
    }
    ctx->pc = 0x25FEA0u;
    {
        const bool branch_taken_0x25fea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEA0u;
        // 0x25fea4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fea0) {
            ctx->pc = 0x25FEB8u;
            goto label_25feb8;
        }
    }
    ctx->pc = 0x25FEA8u;
label_25fea8:
    // 0x25fea8: 0x8e621644  lw          $v0, 0x1644($s3)
    ctx->pc = 0x25fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5700)));
label_25feac:
    // 0x25feac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25feacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25feb0:
    // 0x25feb0: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_25feb4:
    if (ctx->pc == 0x25FEB4u) {
        ctx->pc = 0x25FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEB0u;
        // 0x25feb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEB8u;
        goto label_25feb8;
    }
    ctx->pc = 0x25FEB0u;
    {
        const bool branch_taken_0x25feb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEB0u;
        // 0x25feb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25feb0) {
            ctx->pc = 0x260248u;
            goto label_260248;
        }
    }
    ctx->pc = 0x25FEB8u;
label_25feb8:
    // 0x25feb8: 0x1680002b  bnez        $s4, . + 4 + (0x2B << 2)
label_25febc:
    if (ctx->pc == 0x25FEBCu) {
        ctx->pc = 0x25FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEB8u;
        // 0x25febc: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEC0u;
        goto label_25fec0;
    }
    ctx->pc = 0x25FEB8u;
    {
        const bool branch_taken_0x25feb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEB8u;
        // 0x25febc: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25feb8) {
            ctx->pc = 0x25FF68u;
            goto label_25ff68;
        }
    }
    ctx->pc = 0x25FEC0u;
label_25fec0:
    // 0x25fec0: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x25fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_25fec4:
    // 0x25fec4: 0x24020220  addiu       $v0, $zero, 0x220
    ctx->pc = 0x25fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_25fec8:
    // 0x25fec8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_25fecc:
    if (ctx->pc == 0x25FECCu) {
        ctx->pc = 0x25FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEC8u;
        // 0x25fecc: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FED0u;
        goto label_25fed0;
    }
    ctx->pc = 0x25FEC8u;
    {
        const bool branch_taken_0x25fec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEC8u;
        // 0x25fecc: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fec8) {
            ctx->pc = 0x25FED8u;
            goto label_25fed8;
        }
    }
    ctx->pc = 0x25FED0u;
label_25fed0:
    // 0x25fed0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_25fed4:
    if (ctx->pc == 0x25FED4u) {
        ctx->pc = 0x25FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FED0u;
        // 0x25fed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FED8u;
        goto label_25fed8;
    }
    ctx->pc = 0x25FED0u;
    {
        const bool branch_taken_0x25fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FED0u;
        // 0x25fed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fed0) {
            ctx->pc = 0x260248u;
            goto label_260248;
        }
    }
    ctx->pc = 0x25FED8u;
label_25fed8:
    // 0x25fed8: 0x0  nop
    ctx->pc = 0x25fed8u;
    // NOP
label_25fedc:
    // 0x25fedc: 0x0  nop
    ctx->pc = 0x25fedcu;
    // NOP
label_25fee0:
    // 0x25fee0: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
label_25fee4:
    if (ctx->pc == 0x25FEE4u) {
        ctx->pc = 0x25FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEE0u;
        // 0x25fee4: 0x24020222  addiu       $v0, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEE8u;
        goto label_25fee8;
    }
    ctx->pc = 0x25FEE0u;
    {
        const bool branch_taken_0x25fee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEE0u;
        // 0x25fee4: 0x24020222  addiu       $v0, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fee0) {
            ctx->pc = 0x25FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fed0;
        }
    }
    ctx->pc = 0x25FEE8u;
label_25fee8:
    // 0x25fee8: 0x1062fff9  beq         $v1, $v0, . + 4 + (-0x7 << 2)
label_25feec:
    if (ctx->pc == 0x25FEECu) {
        ctx->pc = 0x25FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEE8u;
        // 0x25feec: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEF0u;
        goto label_25fef0;
    }
    ctx->pc = 0x25FEE8u;
    {
        const bool branch_taken_0x25fee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEE8u;
        // 0x25feec: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fee8) {
            ctx->pc = 0x25FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fed0;
        }
    }
    ctx->pc = 0x25FEF0u;
label_25fef0:
    // 0x25fef0: 0x106200d5  beq         $v1, $v0, . + 4 + (0xD5 << 2)
label_25fef4:
    if (ctx->pc == 0x25FEF4u) {
        ctx->pc = 0x25FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEF0u;
        // 0x25fef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEF8u;
        goto label_25fef8;
    }
    ctx->pc = 0x25FEF0u;
    {
        const bool branch_taken_0x25fef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEF0u;
        // 0x25fef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fef0) {
            ctx->pc = 0x260248u;
            goto label_260248;
        }
    }
    ctx->pc = 0x25FEF8u;
label_25fef8:
    // 0x25fef8: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x25fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
label_25fefc:
    // 0x25fefc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25fefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_25ff00:
    // 0x25ff00: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_25ff04:
    if (ctx->pc == 0x25FF04u) {
        ctx->pc = 0x25FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF00u;
        // 0x25ff04: 0x261164f0  addiu       $s1, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF08u;
        goto label_25ff08;
    }
    ctx->pc = 0x25FF00u;
    {
        const bool branch_taken_0x25ff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF00u;
        // 0x25ff04: 0x261164f0  addiu       $s1, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff00) {
            ctx->pc = 0x25FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fed0;
        }
    }
    ctx->pc = 0x25FF08u;
label_25ff08:
    // 0x25ff08: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x25ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_25ff0c:
    // 0x25ff0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ff10:
    // 0x25ff10: 0xc0a4670  jal         func_2919C0
label_25ff14:
    if (ctx->pc == 0x25FF14u) {
        ctx->pc = 0x25FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF10u;
        // 0x25ff14: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF18u;
        goto label_25ff18;
    }
    ctx->pc = 0x25FF10u;
    SET_GPR_U32(ctx, 31, 0x25FF18u);
    ctx->pc = 0x25FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF10u;
    // 0x25ff14: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x25FF10u, 0x25FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF18u;
label_25ff18:
    // 0x25ff18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ff18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ff1c:
    // 0x25ff1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ff20:
    // 0x25ff20: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x25ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_25ff24:
    // 0x25ff24: 0xc0a4670  jal         func_2919C0
label_25ff28:
    if (ctx->pc == 0x25FF28u) {
        ctx->pc = 0x25FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF24u;
        // 0x25ff28: 0x24060221  addiu       $a2, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF2Cu;
        goto label_25ff2c;
    }
    ctx->pc = 0x25FF24u;
    SET_GPR_U32(ctx, 31, 0x25FF2Cu);
    ctx->pc = 0x25FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF24u;
    // 0x25ff28: 0x24060221  addiu       $a2, $zero, 0x221 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x25FF24u, 0x25FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF2Cu;
label_25ff2c:
    // 0x25ff2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x25ff2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25ff30:
    // 0x25ff30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ff34:
    // 0x25ff34: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x25ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_25ff38:
    // 0x25ff38: 0xc0a4670  jal         func_2919C0
label_25ff3c:
    if (ctx->pc == 0x25FF3Cu) {
        ctx->pc = 0x25FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF38u;
        // 0x25ff3c: 0x24060222  addiu       $a2, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF40u;
        goto label_25ff40;
    }
    ctx->pc = 0x25FF38u;
    SET_GPR_U32(ctx, 31, 0x25FF40u);
    ctx->pc = 0x25FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF38u;
    // 0x25ff3c: 0x24060222  addiu       $a2, $zero, 0x222 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x25FF38u, 0x25FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF40u;
label_25ff40:
    // 0x25ff40: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x25ff40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25ff44:
    // 0x25ff44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ff44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ff48:
    // 0x25ff48: 0x24050223  addiu       $a1, $zero, 0x223
    ctx->pc = 0x25ff48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
label_25ff4c:
    // 0x25ff4c: 0xc0a4670  jal         func_2919C0
label_25ff50:
    if (ctx->pc == 0x25FF50u) {
        ctx->pc = 0x25FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF4Cu;
        // 0x25ff50: 0x24060223  addiu       $a2, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF54u;
        goto label_25ff54;
    }
    ctx->pc = 0x25FF4Cu;
    SET_GPR_U32(ctx, 31, 0x25FF54u);
    ctx->pc = 0x25FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF4Cu;
    // 0x25ff50: 0x24060223  addiu       $a2, $zero, 0x223 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x25FF4Cu, 0x25FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF54u;
label_25ff54:
    // 0x25ff54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x25ff54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25ff58:
    // 0x25ff58: 0x212802b  sltu        $s0, $s0, $s2
    ctx->pc = 0x25ff58u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_25ff5c:
    // 0x25ff5c: 0x120000ba  beqz        $s0, . + 4 + (0xBA << 2)
label_25ff60:
    if (ctx->pc == 0x25FF60u) {
        ctx->pc = 0x25FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF5Cu;
        // 0x25ff60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF64u;
        goto label_25ff64;
    }
    ctx->pc = 0x25FF5Cu;
    {
        const bool branch_taken_0x25ff5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF5Cu;
        // 0x25ff60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff5c) {
            ctx->pc = 0x260248u;
            goto label_260248;
        }
    }
    ctx->pc = 0x25FF64u;
label_25ff64:
    // 0x25ff64: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_25ff68:
    // 0x25ff68: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
label_25ff6c:
    if (ctx->pc == 0x25FF6Cu) {
        ctx->pc = 0x25FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF68u;
        // 0x25ff6c: 0x3412ffff  ori         $s2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF70u;
        goto label_25ff70;
    }
    ctx->pc = 0x25FF68u;
    {
        const bool branch_taken_0x25ff68 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF68u;
        // 0x25ff6c: 0x3412ffff  ori         $s2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ff68) {
            ctx->pc = 0x25FF80u;
            goto label_25ff80;
        }
    }
    ctx->pc = 0x25FF70u;
label_25ff70:
    // 0x25ff70: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x25ff70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
label_25ff74:
    // 0x25ff74: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x25ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_25ff78:
    // 0x25ff78: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_25ff7c:
    // 0x25ff7c: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x25ff7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
label_25ff80:
    // 0x25ff80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25ff80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ff84:
    // 0x25ff84: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x25ff84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_25ff88:
    // 0x25ff88: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x25ff88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25ff8c:
    // 0x25ff8c: 0x0  nop
    ctx->pc = 0x25ff8cu;
    // NOP
label_25ff90:
    // 0x25ff90: 0x26b064e0  addiu       $s0, $s5, 0x64E0
    ctx->pc = 0x25ff90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 25824));
label_25ff94:
    // 0x25ff94: 0xc0a3f96  jal         func_28FE58
label_25ff98:
    if (ctx->pc == 0x25FF98u) {
        ctx->pc = 0x25FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF94u;
        // 0x25ff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FF9Cu;
        goto label_25ff9c;
    }
    ctx->pc = 0x25FF94u;
    SET_GPR_U32(ctx, 31, 0x25FF9Cu);
    ctx->pc = 0x25FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF94u;
    // 0x25ff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE58u, 0x25FF94u, 0x25FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF9Cu;
label_25ff9c:
    // 0x25ff9c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x25ff9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25ffa0:
    // 0x25ffa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_25ffa4:
    if (ctx->pc == 0x25FFA4u) {
        ctx->pc = 0x25FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFA0u;
        // 0x25ffa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFA8u;
        goto label_25ffa8;
    }
    ctx->pc = 0x25FFA0u;
    {
        const bool branch_taken_0x25ffa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFA0u;
        // 0x25ffa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffa0) {
            ctx->pc = 0x25FFD0u;
            goto label_25ffd0;
        }
    }
    ctx->pc = 0x25FFA8u;
label_25ffa8:
    // 0x25ffa8: 0xc0a3fb6  jal         func_28FED8
label_25ffac:
    if (ctx->pc == 0x25FFACu) {
        ctx->pc = 0x25FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFA8u;
        // 0x25ffac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFB0u;
        goto label_25ffb0;
    }
    ctx->pc = 0x25FFA8u;
    SET_GPR_U32(ctx, 31, 0x25FFB0u);
    ctx->pc = 0x25FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FFA8u;
    // 0x25ffac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FED8u, 0x25FFA8u, 0x25FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FFB0u;
label_25ffb0:
    // 0x25ffb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25ffb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ffb4:
    // 0x25ffb4: 0x24020220  addiu       $v0, $zero, 0x220
    ctx->pc = 0x25ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_25ffb8:
    // 0x25ffb8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_25ffbc:
    if (ctx->pc == 0x25FFBCu) {
        ctx->pc = 0x25FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFB8u;
        // 0x25ffbc: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFC0u;
        goto label_25ffc0;
    }
    ctx->pc = 0x25FFB8u;
    {
        const bool branch_taken_0x25ffb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFB8u;
        // 0x25ffbc: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffb8) {
            ctx->pc = 0x25FFD0u;
            goto label_25ffd0;
        }
    }
    ctx->pc = 0x25FFC0u;
label_25ffc0:
    // 0x25ffc0: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_25ffc4:
    if (ctx->pc == 0x25FFC4u) {
        ctx->pc = 0x25FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFC0u;
        // 0x25ffc4: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFC8u;
        goto label_25ffc8;
    }
    ctx->pc = 0x25FFC0u;
    {
        const bool branch_taken_0x25ffc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFC0u;
        // 0x25ffc4: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffc0) {
            ctx->pc = 0x25FFD0u;
            goto label_25ffd0;
        }
    }
    ctx->pc = 0x25FFC8u;
label_25ffc8:
    // 0x25ffc8: 0x5642fff1  bnel        $s2, $v0, . + 4 + (-0xF << 2)
label_25ffcc:
    if (ctx->pc == 0x25FFCCu) {
        ctx->pc = 0x25FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFC8u;
        // 0x25ffcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFD0u;
        goto label_25ffd0;
    }
    ctx->pc = 0x25FFC8u;
    {
        const bool branch_taken_0x25ffc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ffc8) {
            ctx->pc = 0x25FFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FFC8u;
            // 0x25ffcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ff90;
        }
    }
    ctx->pc = 0x25FFD0u;
label_25ffd0:
    // 0x25ffd0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x25ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_25ffd4:
    // 0x25ffd4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25ffd8:
    // 0x25ffd8: 0x24020220  addiu       $v0, $zero, 0x220
    ctx->pc = 0x25ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_25ffdc:
    // 0x25ffdc: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_25ffe0:
    if (ctx->pc == 0x25FFE0u) {
        ctx->pc = 0x25FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFDCu;
        // 0x25ffe0: 0xa3a30031  sb          $v1, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFE4u;
        goto label_25ffe4;
    }
    ctx->pc = 0x25FFDCu;
    {
        const bool branch_taken_0x25ffdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFDCu;
        // 0x25ffe0: 0xa3a30031  sb          $v1, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffdc) {
            ctx->pc = 0x260014u;
            goto label_260014;
        }
    }
    ctx->pc = 0x25FFE4u;
label_25ffe4:
    // 0x25ffe4: 0x2a420221  slti        $v0, $s2, 0x221
    ctx->pc = 0x25ffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)545) ? 1 : 0);
label_25ffe8:
    // 0x25ffe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25ffec:
    if (ctx->pc == 0x25FFECu) {
        ctx->pc = 0x25FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFE8u;
        // 0x25ffec: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFF0u;
        goto label_25fff0;
    }
    ctx->pc = 0x25FFE8u;
    {
        const bool branch_taken_0x25ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFE8u;
        // 0x25ffec: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffe8) {
            ctx->pc = 0x260000u;
            goto label_260000;
        }
    }
    ctx->pc = 0x25FFF0u;
label_25fff0:
    // 0x25fff0: 0x1242006e  beq         $s2, $v0, . + 4 + (0x6E << 2)
label_25fff4:
    if (ctx->pc == 0x25FFF4u) {
        ctx->pc = 0x25FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFF0u;
        // 0x25fff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FFF8u;
        goto label_25fff8;
    }
    ctx->pc = 0x25FFF0u;
    {
        const bool branch_taken_0x25fff0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFF0u;
        // 0x25fff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fff0) {
            ctx->pc = 0x2601ACu;
            goto label_2601ac;
        }
    }
    ctx->pc = 0x25FFF8u;
label_25fff8:
    // 0x25fff8: 0x10000094  b           . + 4 + (0x94 << 2)
label_25fffc:
    if (ctx->pc == 0x25FFFCu) {
        ctx->pc = 0x25FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFF8u;
        // 0x25fffc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260000u;
        goto label_260000;
    }
    ctx->pc = 0x25FFF8u;
    {
        const bool branch_taken_0x25fff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFF8u;
        // 0x25fffc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fff8) {
            ctx->pc = 0x26024Cu;
            goto label_26024c;
        }
    }
    ctx->pc = 0x260000u;
label_260000:
    // 0x260000: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x260000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
label_260004:
    // 0x260004: 0x12420041  beq         $s2, $v0, . + 4 + (0x41 << 2)
label_260008:
    if (ctx->pc == 0x260008u) {
        ctx->pc = 0x260008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260004u;
        // 0x260008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26000Cu;
        goto label_26000c;
    }
    ctx->pc = 0x260004u;
    {
        const bool branch_taken_0x260004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x260008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260004u;
        // 0x260008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260004) {
            ctx->pc = 0x26010Cu;
            goto label_26010c;
        }
    }
    ctx->pc = 0x26000Cu;
label_26000c:
    // 0x26000c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_260010:
    if (ctx->pc == 0x260010u) {
        ctx->pc = 0x260010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26000Cu;
        // 0x260010: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260014u;
        goto label_260014;
    }
    ctx->pc = 0x26000Cu;
    {
        const bool branch_taken_0x26000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26000Cu;
        // 0x260010: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26000c) {
            ctx->pc = 0x26024Cu;
            goto label_26024c;
        }
    }
    ctx->pc = 0x260014u;
label_260014:
    // 0x260014: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x260014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_260018:
    // 0x260018: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_26001c:
    if (ctx->pc == 0x26001Cu) {
        ctx->pc = 0x26001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260018u;
        // 0x26001c: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260020u;
        goto label_260020;
    }
    ctx->pc = 0x260018u;
    {
        const bool branch_taken_0x260018 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x26001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260018u;
        // 0x26001c: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260018) {
            ctx->pc = 0x260038u;
            goto label_260038;
        }
    }
    ctx->pc = 0x260020u;
label_260020:
    // 0x260020: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x260020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260024:
    // 0x260024: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x260024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_260028:
    // 0x260028: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x260028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26002c:
    // 0x26002c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26002cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_260030:
    // 0x260030: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x260030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260034:
    // 0x260034: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x260034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_260038:
    // 0x260038: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x260038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26003c:
    // 0x26003c: 0xa3a30031  sb          $v1, 0x31($sp)
    ctx->pc = 0x26003cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
label_260040:
    // 0x260040: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x260040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
label_260044:
    // 0x260044: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x260044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_260048:
    // 0x260048: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x260048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_26004c:
    // 0x26004c: 0xc0c73f8  jal         func_31CFE0
label_260050:
    if (ctx->pc == 0x260050u) {
        ctx->pc = 0x260050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26004Cu;
        // 0x260050: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260054u;
        goto label_260054;
    }
    ctx->pc = 0x26004Cu;
    SET_GPR_U32(ctx, 31, 0x260054u);
    ctx->pc = 0x260050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26004Cu;
    // 0x260050: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x26004Cu, 0x260054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260054u;
label_260054:
    // 0x260054: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x260054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_260058:
    // 0x260058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x260058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26005c:
    // 0x26005c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26005cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_260060:
    // 0x260060: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_260064:
    if (ctx->pc == 0x260064u) {
        ctx->pc = 0x260064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260060u;
        // 0x260064: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x260068u;
        goto label_260068;
    }
    ctx->pc = 0x260060u;
    {
        const bool branch_taken_0x260060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260060) {
            ctx->pc = 0x260064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260060u;
            // 0x260064: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x260068u;
            goto label_260068;
        }
    }
    ctx->pc = 0x260068u;
label_260068:
    // 0x260068: 0x2810  mfhi        $a1
    ctx->pc = 0x260068u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26006c:
    // 0x26006c: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
label_260070:
    if (ctx->pc == 0x260070u) {
        ctx->pc = 0x260070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26006Cu;
        // 0x260070: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260074u;
        goto label_260074;
    }
    ctx->pc = 0x26006Cu;
    {
        const bool branch_taken_0x26006c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x260070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26006Cu;
        // 0x260070: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26006c) {
            ctx->pc = 0x26008Cu;
            goto label_26008c;
        }
    }
    ctx->pc = 0x260074u;
label_260074:
    // 0x260074: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_260078:
    if (ctx->pc == 0x260078u) {
        ctx->pc = 0x260078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260074u;
        // 0x260078: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26007Cu;
        goto label_26007c;
    }
    ctx->pc = 0x260074u;
    {
        const bool branch_taken_0x260074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x260078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260074u;
        // 0x260078: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260074) {
            ctx->pc = 0x260084u;
            goto label_260084;
        }
    }
    ctx->pc = 0x26007Cu;
label_26007c:
    // 0x26007c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_260080:
    if (ctx->pc == 0x260080u) {
        ctx->pc = 0x260080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26007Cu;
        // 0x260080: 0x24020222  addiu       $v0, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260084u;
        goto label_260084;
    }
    ctx->pc = 0x26007Cu;
    {
        const bool branch_taken_0x26007c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x260080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26007Cu;
        // 0x260080: 0x24020222  addiu       $v0, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26007c) {
            ctx->pc = 0x26008Cu;
            goto label_26008c;
        }
    }
    ctx->pc = 0x260084u;
label_260084:
    // 0x260084: 0x10000002  b           . + 4 + (0x2 << 2)
label_260088:
    if (ctx->pc == 0x260088u) {
        ctx->pc = 0x260088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260084u;
        // 0x260088: 0xafb20028  sw          $s2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26008Cu;
        goto label_26008c;
    }
    ctx->pc = 0x260084u;
    {
        const bool branch_taken_0x260084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260084u;
        // 0x260088: 0xafb20028  sw          $s2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260084) {
            ctx->pc = 0x260090u;
            goto label_260090;
        }
    }
    ctx->pc = 0x26008Cu;
label_26008c:
    // 0x26008c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x26008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_260090:
    // 0x260090: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x260090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_260094:
    // 0x260094: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x260094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_260098:
    // 0x260098: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x260098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_26009c:
    // 0x26009c: 0x94a405b0  lhu         $a0, 0x5B0($a1)
    ctx->pc = 0x26009cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1456)));
label_2600a0:
    // 0x2600a0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_2600a4:
    if (ctx->pc == 0x2600A4u) {
        ctx->pc = 0x2600A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600A0u;
        // 0x2600a4: 0x28820100  slti        $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600A8u;
        goto label_2600a8;
    }
    ctx->pc = 0x2600A0u;
    {
        const bool branch_taken_0x2600a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2600A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600A0u;
        // 0x2600a4: 0x28820100  slti        $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600a0) {
            ctx->pc = 0x260100u;
            goto label_260100;
        }
    }
    ctx->pc = 0x2600A8u;
label_2600a8:
    // 0x2600a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2600ac:
    if (ctx->pc == 0x2600ACu) {
        ctx->pc = 0x2600ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600A8u;
        // 0x2600ac: 0x90a205b1  lbu         $v0, 0x5B1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1457)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600B0u;
        goto label_2600b0;
    }
    ctx->pc = 0x2600A8u;
    {
        const bool branch_taken_0x2600a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2600a8) {
            ctx->pc = 0x2600ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2600A8u;
            // 0x2600ac: 0x90a205b1  lbu         $v0, 0x5B1($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1457)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2600C0u;
            goto label_2600c0;
        }
    }
    ctx->pc = 0x2600B0u;
label_2600b0:
    // 0x2600b0: 0x28820106  slti        $v0, $a0, 0x106
    ctx->pc = 0x2600b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)262) ? 1 : 0);
label_2600b4:
    // 0x2600b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2600b8:
    if (ctx->pc == 0x2600B8u) {
        ctx->pc = 0x2600BCu;
        goto label_2600bc;
    }
    ctx->pc = 0x2600B4u;
    {
        const bool branch_taken_0x2600b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2600b4) {
            ctx->pc = 0x2600E0u;
            goto label_2600e0;
        }
    }
    ctx->pc = 0x2600BCu;
label_2600bc:
    // 0x2600bc: 0x90a205b1  lbu         $v0, 0x5B1($a1)
    ctx->pc = 0x2600bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1457)));
label_2600c0:
    // 0x2600c0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2600c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2600c4:
    // 0x2600c4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2600c8:
    if (ctx->pc == 0x2600C8u) {
        ctx->pc = 0x2600C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C4u;
        // 0x2600c8: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600CCu;
        goto label_2600cc;
    }
    ctx->pc = 0x2600C4u;
    {
        const bool branch_taken_0x2600c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C4u;
        // 0x2600c8: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600c4) {
            ctx->pc = 0x2601ECu;
            goto label_2601ec;
        }
    }
    ctx->pc = 0x2600CCu;
label_2600cc:
    // 0x2600cc: 0x24020222  addiu       $v0, $zero, 0x222
    ctx->pc = 0x2600ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
label_2600d0:
    // 0x2600d0: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_2600d4:
    if (ctx->pc == 0x2600D4u) {
        ctx->pc = 0x2600D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600D0u;
        // 0x2600d4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600D8u;
        goto label_2600d8;
    }
    ctx->pc = 0x2600D0u;
    {
        const bool branch_taken_0x2600d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2600D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600D0u;
        // 0x2600d4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600d0) {
            ctx->pc = 0x2601F0u;
            goto label_2601f0;
        }
    }
    ctx->pc = 0x2600D8u;
label_2600d8:
    // 0x2600d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2600dc:
    if (ctx->pc == 0x2600DCu) {
        ctx->pc = 0x2600DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600D8u;
        // 0x2600dc: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600E0u;
        goto label_2600e0;
    }
    ctx->pc = 0x2600D8u;
    {
        const bool branch_taken_0x2600d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600D8u;
        // 0x2600dc: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600d8) {
            ctx->pc = 0x2600F8u;
            goto label_2600f8;
        }
    }
    ctx->pc = 0x2600E0u;
label_2600e0:
    // 0x2600e0: 0xc07e804  jal         func_1FA010
label_2600e4:
    if (ctx->pc == 0x2600E4u) {
        ctx->pc = 0x2600E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600E0u;
        // 0x2600e4: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600E8u;
        goto label_2600e8;
    }
    ctx->pc = 0x2600E0u;
    SET_GPR_U32(ctx, 31, 0x2600E8u);
    ctx->pc = 0x2600E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2600E0u;
    // 0x2600e4: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2600E0u, 0x2600E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600E8u;
label_2600e8:
    // 0x2600e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2600e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2600ec:
    // 0x2600ec: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2600f0:
    if (ctx->pc == 0x2600F0u) {
        ctx->pc = 0x2600F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600ECu;
        // 0x2600f0: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600F4u;
        goto label_2600f4;
    }
    ctx->pc = 0x2600ECu;
    {
        const bool branch_taken_0x2600ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2600F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600ECu;
        // 0x2600f0: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600ec) {
            ctx->pc = 0x260104u;
            goto label_260104;
        }
    }
    ctx->pc = 0x2600F4u;
label_2600f4:
    // 0x2600f4: 0x24020221  addiu       $v0, $zero, 0x221
    ctx->pc = 0x2600f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
label_2600f8:
    // 0x2600f8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2600fc:
    if (ctx->pc == 0x2600FCu) {
        ctx->pc = 0x2600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600F8u;
        // 0x2600fc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260100u;
        goto label_260100;
    }
    ctx->pc = 0x2600F8u;
    {
        const bool branch_taken_0x2600f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600F8u;
        // 0x2600fc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600f8) {
            ctx->pc = 0x2601ECu;
            goto label_2601ec;
        }
    }
    ctx->pc = 0x260100u;
label_260100:
    // 0x260100: 0x24020220  addiu       $v0, $zero, 0x220
    ctx->pc = 0x260100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_260104:
    // 0x260104: 0x10000039  b           . + 4 + (0x39 << 2)
label_260108:
    if (ctx->pc == 0x260108u) {
        ctx->pc = 0x260108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260104u;
        // 0x260108: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26010Cu;
        goto label_26010c;
    }
    ctx->pc = 0x260104u;
    {
        const bool branch_taken_0x260104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260104u;
        // 0x260108: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260104) {
            ctx->pc = 0x2601ECu;
            goto label_2601ec;
        }
    }
    ctx->pc = 0x26010Cu;
label_26010c:
    // 0x26010c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x26010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_260110:
    // 0x260110: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_260114:
    if (ctx->pc == 0x260114u) {
        ctx->pc = 0x260114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260110u;
        // 0x260114: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260118u;
        goto label_260118;
    }
    ctx->pc = 0x260110u;
    {
        const bool branch_taken_0x260110 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x260114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260110u;
        // 0x260114: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260110) {
            ctx->pc = 0x260130u;
            goto label_260130;
        }
    }
    ctx->pc = 0x260118u;
label_260118:
    // 0x260118: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x260118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26011c:
    // 0x26011c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_260120:
    // 0x260120: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x260120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260124:
    // 0x260124: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x260124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_260128:
    // 0x260128: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x260128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26012c:
    // 0x26012c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_260130:
    // 0x260130: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x260130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260134:
    // 0x260134: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x260134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_260138:
    // 0x260138: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x260138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_26013c:
    // 0x26013c: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x26013cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
label_260140:
    // 0x260140: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x260140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_260144:
    // 0x260144: 0xa3a30031  sb          $v1, 0x31($sp)
    ctx->pc = 0x260144u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
label_260148:
    // 0x260148: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x260148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
label_26014c:
    // 0x26014c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x26014cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_260150:
    // 0x260150: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_260154:
    if (ctx->pc == 0x260154u) {
        ctx->pc = 0x260154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260150u;
        // 0x260154: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260158u;
        goto label_260158;
    }
    ctx->pc = 0x260150u;
    {
        const bool branch_taken_0x260150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260150u;
        // 0x260154: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260150) {
            ctx->pc = 0x2601ECu;
            goto label_2601ec;
        }
    }
    ctx->pc = 0x260158u;
label_260158:
    // 0x260158: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x260158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_26015c:
    // 0x26015c: 0x3c01bd1e  lui         $at, 0xBD1E
    ctx->pc = 0x26015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48414 << 16));
label_260160:
    // 0x260160: 0x3421ecc0  ori         $at, $at, 0xECC0
    ctx->pc = 0x260160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60608);
label_260164:
    // 0x260164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260168:
    // 0x260168: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26016c:
    // 0x26016c: 0x3c01be64  lui         $at, 0xBE64
    ctx->pc = 0x26016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48740 << 16));
label_260170:
    // 0x260170: 0x34215a1d  ori         $at, $at, 0x5A1D
    ctx->pc = 0x260170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23069);
label_260174:
    // 0x260174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_260178:
    // 0x260178: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x260178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_26017c:
    // 0x26017c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_260180:
    // 0x260180: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x260180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260184:
    // 0x260184: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x260184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_260188:
    // 0x260188: 0xc0c28ac  jal         func_30A2B0
label_26018c:
    if (ctx->pc == 0x26018Cu) {
        ctx->pc = 0x26018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260188u;
        // 0x26018c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260190u;
        goto label_260190;
    }
    ctx->pc = 0x260188u;
    SET_GPR_U32(ctx, 31, 0x260190u);
    ctx->pc = 0x26018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260188u;
    // 0x26018c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x260188u, 0x260190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260190u;
label_260190:
    // 0x260190: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x260190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260194:
    // 0x260194: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x260194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260198:
    // 0x260198: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x260198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26019c:
    // 0x26019c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2601a0:
    // 0x2601a0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2601a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2601a4:
    // 0x2601a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2601a8:
    if (ctx->pc == 0x2601A8u) {
        ctx->pc = 0x2601A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601A4u;
        // 0x2601a8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601ACu;
        goto label_2601ac;
    }
    ctx->pc = 0x2601A4u;
    {
        const bool branch_taken_0x2601a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2601A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601A4u;
        // 0x2601a8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601a4) {
            ctx->pc = 0x2601ECu;
            goto label_2601ec;
        }
    }
    ctx->pc = 0x2601ACu;
label_2601ac:
    // 0x2601ac: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x2601acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_2601b0:
    // 0x2601b0: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_2601b4:
    if (ctx->pc == 0x2601B4u) {
        ctx->pc = 0x2601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601B0u;
        // 0x2601b4: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601B8u;
        goto label_2601b8;
    }
    ctx->pc = 0x2601B0u;
    {
        const bool branch_taken_0x2601b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601B0u;
        // 0x2601b4: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601b0) {
            ctx->pc = 0x2601D0u;
            goto label_2601d0;
        }
    }
    ctx->pc = 0x2601B8u;
label_2601b8:
    // 0x2601b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2601b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2601bc:
    // 0x2601bc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2601bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2601c0:
    // 0x2601c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2601c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2601c4:
    // 0x2601c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2601c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2601c8:
    // 0x2601c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2601c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2601cc:
    // 0x2601cc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2601ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2601d0:
    // 0x2601d0: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x2601d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2601d4:
    // 0x2601d4: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x2601d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
label_2601d8:
    // 0x2601d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2601d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2601dc:
    // 0x2601dc: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2601dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
label_2601e0:
    // 0x2601e0: 0xa3a30031  sb          $v1, 0x31($sp)
    ctx->pc = 0x2601e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
label_2601e4:
    // 0x2601e4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2601e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2601e8:
    // 0x2601e8: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x2601e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_2601ec:
    // 0x2601ec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2601ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2601f0:
    // 0x2601f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2601f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2601f4:
    // 0x2601f4: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x2601f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_2601f8:
    // 0x2601f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2601f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2601fc:
    // 0x2601fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2601fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260200:
    // 0x260200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260204:
    // 0x260204: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x260204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260208:
    // 0x260208: 0xc0a4174  jal         func_2905D0
label_26020c:
    if (ctx->pc == 0x26020Cu) {
        ctx->pc = 0x26020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260208u;
        // 0x26020c: 0xa043053e  sb          $v1, 0x53E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1342), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260210u;
        goto label_260210;
    }
    ctx->pc = 0x260208u;
    SET_GPR_U32(ctx, 31, 0x260210u);
    ctx->pc = 0x26020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260208u;
    // 0x26020c: 0xa043053e  sb          $v1, 0x53E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1342), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x260208u, 0x260210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260210u;
label_260210:
    // 0x260210: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x260210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_260214:
    // 0x260214: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x260214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_260218:
    // 0x260218: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x260218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_26021c:
    // 0x26021c: 0x40f809  jalr        $v0
label_260220:
    if (ctx->pc == 0x260220u) {
        ctx->pc = 0x260220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26021Cu;
        // 0x260220: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260224u;
        goto label_260224;
    }
    ctx->pc = 0x26021Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260224u);
        ctx->pc = 0x260220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26021Cu;
        // 0x260220: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26021Cu, 0x260224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260224u;
label_260224:
    // 0x260224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x260224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260228:
    // 0x260228: 0xc07f59a  jal         func_1FD668
label_26022c:
    if (ctx->pc == 0x26022Cu) {
        ctx->pc = 0x26022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260228u;
        // 0x26022c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260230u;
        goto label_260230;
    }
    ctx->pc = 0x260228u;
    SET_GPR_U32(ctx, 31, 0x260230u);
    ctx->pc = 0x26022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260228u;
    // 0x26022c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x260228u, 0x260230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260230u;
label_260230:
    // 0x260230: 0x8e6416d0  lw          $a0, 0x16D0($s3)
    ctx->pc = 0x260230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
label_260234:
    // 0x260234: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x260234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_260238:
    // 0x260238: 0x3463fdff  ori         $v1, $v1, 0xFDFF
    ctx->pc = 0x260238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65023);
label_26023c:
    // 0x26023c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260240:
    // 0x260240: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x260240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_260244:
    // 0x260244: 0xae6416d0  sw          $a0, 0x16D0($s3)
    ctx->pc = 0x260244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 4));
label_260248:
    // 0x260248: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x260248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_26024c:
    // 0x26024c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x26024cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_260250:
    // 0x260250: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x260250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_260254:
    // 0x260254: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x260254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_260258:
    // 0x260258: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x260258u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26025c:
    // 0x26025c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x26025cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_260260:
    // 0x260260: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x260260u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_260264:
    // 0x260264: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x260264u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_260268:
    // 0x260268: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x260268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26026c:
    // 0x26026c: 0x3e00008  jr          $ra
label_260270:
    if (ctx->pc == 0x260270u) {
        ctx->pc = 0x260270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26026Cu;
        // 0x260270: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260274u;
        goto label_260274;
    }
    ctx->pc = 0x26026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26026Cu;
        // 0x260270: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260274u;
label_260274:
    // 0x260274: 0x0  nop
    ctx->pc = 0x260274u;
    // NOP
    ctx->pc = 0x260278u;
}
