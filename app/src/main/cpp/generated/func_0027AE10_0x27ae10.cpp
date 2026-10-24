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

// Function: func_0027AE10
// Address: 0x27ae10 - 0x27b0f8
void func_0027AE10_0x27ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027AE10_0x27ae10");
#endif

    switch (ctx->pc) {
        case 0x27ae10u: goto label_27ae10;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae18u: goto label_27ae18;
        case 0x27ae1cu: goto label_27ae1c;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae24u: goto label_27ae24;
        case 0x27ae28u: goto label_27ae28;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae30u: goto label_27ae30;
        case 0x27ae34u: goto label_27ae34;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae3cu: goto label_27ae3c;
        case 0x27ae40u: goto label_27ae40;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae48u: goto label_27ae48;
        case 0x27ae4cu: goto label_27ae4c;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae54u: goto label_27ae54;
        case 0x27ae58u: goto label_27ae58;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae60u: goto label_27ae60;
        case 0x27ae64u: goto label_27ae64;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae6cu: goto label_27ae6c;
        case 0x27ae70u: goto label_27ae70;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae78u: goto label_27ae78;
        case 0x27ae7cu: goto label_27ae7c;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae84u: goto label_27ae84;
        case 0x27ae88u: goto label_27ae88;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae90u: goto label_27ae90;
        case 0x27ae94u: goto label_27ae94;
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        case 0x27b058u: goto label_27b058;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b060u: goto label_27b060;
        case 0x27b064u: goto label_27b064;
        case 0x27b068u: goto label_27b068;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b070u: goto label_27b070;
        case 0x27b074u: goto label_27b074;
        case 0x27b078u: goto label_27b078;
        case 0x27b07cu: goto label_27b07c;
        case 0x27b080u: goto label_27b080;
        case 0x27b084u: goto label_27b084;
        case 0x27b088u: goto label_27b088;
        case 0x27b08cu: goto label_27b08c;
        case 0x27b090u: goto label_27b090;
        case 0x27b094u: goto label_27b094;
        case 0x27b098u: goto label_27b098;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a0u: goto label_27b0a0;
        case 0x27b0a4u: goto label_27b0a4;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0acu: goto label_27b0ac;
        case 0x27b0b0u: goto label_27b0b0;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b0bcu: goto label_27b0bc;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0c4u: goto label_27b0c4;
        case 0x27b0c8u: goto label_27b0c8;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d0u: goto label_27b0d0;
        case 0x27b0d4u: goto label_27b0d4;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0dcu: goto label_27b0dc;
        case 0x27b0e0u: goto label_27b0e0;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b0ecu: goto label_27b0ec;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0f4u: goto label_27b0f4;
        default: break;
    }

    ctx->pc = 0x27ae10u;

label_27ae10:
    // 0x27ae10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27ae14:
    // 0x27ae14: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27ae14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_27ae18:
    // 0x27ae18: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x27ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_27ae1c:
    // 0x27ae1c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_27ae20:
    // 0x27ae20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_27ae24:
    // 0x27ae24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27ae28:
    // 0x27ae28: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27ae28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_27ae2c:
    // 0x27ae2c: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
label_27ae30:
    if (ctx->pc == 0x27AE30u) {
        ctx->pc = 0x27AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE2Cu;
        // 0x27ae30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE34u;
        goto label_27ae34;
    }
    ctx->pc = 0x27AE2Cu;
    {
        const bool branch_taken_0x27ae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE2Cu;
        // 0x27ae30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae2c) {
            ctx->pc = 0x27B0E4u;
            goto label_27b0e4;
        }
    }
    ctx->pc = 0x27AE34u;
label_27ae34:
    // 0x27ae34: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x27ae34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27ae38:
    // 0x27ae38: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_27ae3c:
    if (ctx->pc == 0x27AE3Cu) {
        ctx->pc = 0x27AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE38u;
        // 0x27ae3c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE40u;
        goto label_27ae40;
    }
    ctx->pc = 0x27AE38u;
    {
        const bool branch_taken_0x27ae38 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE38u;
        // 0x27ae3c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae38) {
            ctx->pc = 0x27AE68u;
            goto label_27ae68;
        }
    }
    ctx->pc = 0x27AE40u;
label_27ae40:
    // 0x27ae40: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_27ae44:
    if (ctx->pc == 0x27AE44u) {
        ctx->pc = 0x27AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE40u;
        // 0x27ae44: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE48u;
        goto label_27ae48;
    }
    ctx->pc = 0x27AE40u;
    {
        const bool branch_taken_0x27ae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ae40) {
            ctx->pc = 0x27AE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AE40u;
            // 0x27ae44: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AE6Cu;
            goto label_27ae6c;
        }
    }
    ctx->pc = 0x27AE48u;
label_27ae48:
    // 0x27ae48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27ae4c:
    // 0x27ae4c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_27ae50:
    if (ctx->pc == 0x27AE50u) {
        ctx->pc = 0x27AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE4Cu;
        // 0x27ae50: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE54u;
        goto label_27ae54;
    }
    ctx->pc = 0x27AE4Cu;
    {
        const bool branch_taken_0x27ae4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ae4c) {
            ctx->pc = 0x27AE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AE4Cu;
            // 0x27ae50: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AE6Cu;
            goto label_27ae6c;
        }
    }
    ctx->pc = 0x27AE54u;
label_27ae54:
    // 0x27ae54: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x27ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_27ae58:
    // 0x27ae58: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x27ae58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_27ae5c:
    // 0x27ae5c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_27ae60:
    // 0x27ae60: 0x60f809  jalr        $v1
label_27ae64:
    if (ctx->pc == 0x27AE64u) {
        ctx->pc = 0x27AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE60u;
        // 0x27ae64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE68u;
        goto label_27ae68;
    }
    ctx->pc = 0x27AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27AE68u);
        ctx->pc = 0x27AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE60u;
        // 0x27ae64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AE60u, 0x27AE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AE68u;
label_27ae68:
    // 0x27ae68: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_27ae6c:
    // 0x27ae6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27ae70:
    // 0x27ae70: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_27ae74:
    if (ctx->pc == 0x27AE74u) {
        ctx->pc = 0x27AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE70u;
        // 0x27ae74: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE78u;
        goto label_27ae78;
    }
    ctx->pc = 0x27AE70u;
    {
        const bool branch_taken_0x27ae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae70) {
            ctx->pc = 0x27AE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AE70u;
            // 0x27ae74: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFA0u;
            goto label_27afa0;
        }
    }
    ctx->pc = 0x27AE78u;
label_27ae78:
    // 0x27ae78: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x27ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27ae7c:
    // 0x27ae7c: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_27ae80:
    if (ctx->pc == 0x27AE80u) {
        ctx->pc = 0x27AE84u;
        goto label_27ae84;
    }
    ctx->pc = 0x27AE7Cu;
    {
        const bool branch_taken_0x27ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae7c) {
            ctx->pc = 0x27B0D4u;
            goto label_27b0d4;
        }
    }
    ctx->pc = 0x27AE84u;
label_27ae84:
    // 0x27ae84: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x27ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_27ae88:
    // 0x27ae88: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27ae88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27ae8c:
    // 0x27ae8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27ae90:
    if (ctx->pc == 0x27AE90u) {
        ctx->pc = 0x27AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE8Cu;
        // 0x27ae90: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AE94u;
        goto label_27ae94;
    }
    ctx->pc = 0x27AE8Cu;
    {
        const bool branch_taken_0x27ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE8Cu;
        // 0x27ae90: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae8c) {
            ctx->pc = 0x27AEA0u;
            goto label_27aea0;
        }
    }
    ctx->pc = 0x27AE94u;
label_27ae94:
    // 0x27ae94: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_27ae98:
    // 0x27ae98: 0x10000002  b           . + 4 + (0x2 << 2)
label_27ae9c:
    if (ctx->pc == 0x27AE9Cu) {
        ctx->pc = 0x27AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE98u;
        // 0x27ae9c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEA0u;
        goto label_27aea0;
    }
    ctx->pc = 0x27AE98u;
    {
        const bool branch_taken_0x27ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE98u;
        // 0x27ae9c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae98) {
            ctx->pc = 0x27AEA4u;
            goto label_27aea4;
        }
    }
    ctx->pc = 0x27AEA0u;
label_27aea0:
    // 0x27aea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27aea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27aea4:
    // 0x27aea4: 0x8e0521b0  lw          $a1, 0x21B0($s0)
    ctx->pc = 0x27aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27aea8:
    // 0x27aea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27aeac:
    // 0x27aeac: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x27aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_27aeb0:
    // 0x27aeb0: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x27aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
label_27aeb4:
    // 0x27aeb4: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_27aeb8:
    if (ctx->pc == 0x27AEB8u) {
        ctx->pc = 0x27AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEB4u;
        // 0x27aeb8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEBCu;
        goto label_27aebc;
    }
    ctx->pc = 0x27AEB4u;
    {
        const bool branch_taken_0x27aeb4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEB4u;
        // 0x27aeb8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aeb4) {
            ctx->pc = 0x27AEC0u;
            goto label_27aec0;
        }
    }
    ctx->pc = 0x27AEBCu;
label_27aebc:
    // 0x27aebc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x27aebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27aec0:
    // 0x27aec0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27aec4:
    // 0x27aec4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27aec8:
    if (ctx->pc == 0x27AEC8u) {
        ctx->pc = 0x27AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEC4u;
        // 0x27aec8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AECCu;
        goto label_27aecc;
    }
    ctx->pc = 0x27AEC4u;
    {
        const bool branch_taken_0x27aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEC4u;
        // 0x27aec8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aec4) {
            ctx->pc = 0x27AEDCu;
            goto label_27aedc;
        }
    }
    ctx->pc = 0x27AECCu;
label_27aecc:
    // 0x27aecc: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x27aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_27aed0:
    // 0x27aed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27aed4:
    // 0x27aed4: 0x10000002  b           . + 4 + (0x2 << 2)
label_27aed8:
    if (ctx->pc == 0x27AED8u) {
        ctx->pc = 0x27AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED4u;
        // 0x27aed8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEDCu;
        goto label_27aedc;
    }
    ctx->pc = 0x27AED4u;
    {
        const bool branch_taken_0x27aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AED4u;
        // 0x27aed8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aed4) {
            ctx->pc = 0x27AEE0u;
            goto label_27aee0;
        }
    }
    ctx->pc = 0x27AEDCu;
label_27aedc:
    // 0x27aedc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27aedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27aee0:
    // 0x27aee0: 0x50c0002f  beql        $a2, $zero, . + 4 + (0x2F << 2)
label_27aee4:
    if (ctx->pc == 0x27AEE4u) {
        ctx->pc = 0x27AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEE0u;
        // 0x27aee4: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEE8u;
        goto label_27aee8;
    }
    ctx->pc = 0x27AEE0u;
    {
        const bool branch_taken_0x27aee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aee0) {
            ctx->pc = 0x27AEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AEE0u;
            // 0x27aee4: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFA0u;
            goto label_27afa0;
        }
    }
    ctx->pc = 0x27AEE8u;
label_27aee8:
    // 0x27aee8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_27aeec:
    if (ctx->pc == 0x27AEECu) {
        ctx->pc = 0x27AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEE8u;
        // 0x27aeec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEF0u;
        goto label_27aef0;
    }
    ctx->pc = 0x27AEE8u;
    {
        const bool branch_taken_0x27aee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEE8u;
        // 0x27aeec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aee8) {
            ctx->pc = 0x27AF9Cu;
            goto label_27af9c;
        }
    }
    ctx->pc = 0x27AEF0u;
label_27aef0:
    // 0x27aef0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x27aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27aef4:
    // 0x27aef4: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x27aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_27aef8:
    // 0x27aef8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x27aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_27aefc:
    // 0x27aefc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x27aefcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_27af00:
    // 0x27af00: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x27af00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27af04:
    // 0x27af04: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27af04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27af08:
    // 0x27af08: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x27af08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_27af0c:
    // 0x27af0c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27af10:
    // 0x27af10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27af10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27af14:
    // 0x27af14: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x27af14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_27af18:
    // 0x27af18: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
label_27af1c:
    if (ctx->pc == 0x27AF1Cu) {
        ctx->pc = 0x27AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF18u;
        // 0x27af1c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF20u;
        goto label_27af20;
    }
    ctx->pc = 0x27AF18u;
    {
        const bool branch_taken_0x27af18 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x27AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF18u;
        // 0x27af1c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af18) {
            ctx->pc = 0x27AF34u;
            goto label_27af34;
        }
    }
    ctx->pc = 0x27AF20u;
label_27af20:
    // 0x27af20: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27af24:
    // 0x27af24: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27af28:
    // 0x27af28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27af28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27af2c:
    // 0x27af2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27af2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27af30:
    // 0x27af30: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x27af30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27af34:
    // 0x27af34: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27af34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27af38:
    // 0x27af38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27af3c:
    // 0x27af3c: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x27af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_27af40:
    // 0x27af40: 0x26052130  addiu       $a1, $s0, 0x2130
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8496));
label_27af44:
    // 0x27af44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_27af48:
    if (ctx->pc == 0x27AF48u) {
        ctx->pc = 0x27AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF44u;
        // 0x27af48: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF4Cu;
        goto label_27af4c;
    }
    ctx->pc = 0x27AF44u;
    {
        const bool branch_taken_0x27af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF44u;
        // 0x27af48: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af44) {
            ctx->pc = 0x27AF94u;
            goto label_27af94;
        }
    }
    ctx->pc = 0x27AF4Cu;
label_27af4c:
    // 0x27af4c: 0x0  nop
    ctx->pc = 0x27af4cu;
    // NOP
label_27af50:
    // 0x27af50: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27af50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27af54:
    // 0x27af54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27af58:
    // 0x27af58: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x27af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27af5c:
    // 0x27af5c: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x27af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27af60:
    // 0x27af60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27af60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27af64:
    // 0x27af64: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x27af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27af68:
    // 0x27af68: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x27af68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_27af6c:
    // 0x27af6c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27af70:
    // 0x27af70: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27af70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27af74:
    // 0x27af74: 0xe46200b4  swc1        $f2, 0xB4($v1)
    ctx->pc = 0x27af74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_27af78:
    // 0x27af78: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27af7c:
    // 0x27af7c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27af7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27af80:
    // 0x27af80: 0xe46300b8  swc1        $f3, 0xB8($v1)
    ctx->pc = 0x27af80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_27af84:
    // 0x27af84: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27af84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27af88:
    // 0x27af88: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x27af88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27af8c:
    // 0x27af8c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_27af90:
    if (ctx->pc == 0x27AF90u) {
        ctx->pc = 0x27AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF8Cu;
        // 0x27af90: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF94u;
        goto label_27af94;
    }
    ctx->pc = 0x27AF8Cu;
    {
        const bool branch_taken_0x27af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF8Cu;
        // 0x27af90: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af8c) {
            ctx->pc = 0x27AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27af50;
        }
    }
    ctx->pc = 0x27AF94u;
label_27af94:
    // 0x27af94: 0xc041f1a  jal         func_107C68
label_27af98:
    if (ctx->pc == 0x27AF98u) {
        ctx->pc = 0x27AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF94u;
        // 0x27af98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AF9Cu;
        goto label_27af9c;
    }
    ctx->pc = 0x27AF94u;
    SET_GPR_U32(ctx, 31, 0x27AF9Cu);
    ctx->pc = 0x27AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF94u;
    // 0x27af98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x27AF94u, 0x27AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF9Cu;
label_27af9c:
    // 0x27af9c: 0x8e0321b0  lw          $v1, 0x21B0($s0)
    ctx->pc = 0x27af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27afa0:
    // 0x27afa0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_27afa4:
    if (ctx->pc == 0x27AFA4u) {
        ctx->pc = 0x27AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFA0u;
        // 0x27afa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFA8u;
        goto label_27afa8;
    }
    ctx->pc = 0x27AFA0u;
    {
        const bool branch_taken_0x27afa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFA0u;
        // 0x27afa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afa0) {
            ctx->pc = 0x27B0D4u;
            goto label_27b0d4;
        }
    }
    ctx->pc = 0x27AFA8u;
label_27afa8:
    // 0x27afa8: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x27afa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_27afac:
    // 0x27afac: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x27afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_27afb0:
    // 0x27afb0: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_27afb4:
    if (ctx->pc == 0x27AFB4u) {
        ctx->pc = 0x27AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB0u;
        // 0x27afb4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFB8u;
        goto label_27afb8;
    }
    ctx->pc = 0x27AFB0u;
    {
        const bool branch_taken_0x27afb0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFB0u;
        // 0x27afb4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afb0) {
            ctx->pc = 0x27AFBCu;
            goto label_27afbc;
        }
    }
    ctx->pc = 0x27AFB8u;
label_27afb8:
    // 0x27afb8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x27afb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27afbc:
    // 0x27afbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27afc0:
    // 0x27afc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27afc4:
    if (ctx->pc == 0x27AFC4u) {
        ctx->pc = 0x27AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFC0u;
        // 0x27afc4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFC8u;
        goto label_27afc8;
    }
    ctx->pc = 0x27AFC0u;
    {
        const bool branch_taken_0x27afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFC0u;
        // 0x27afc4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afc0) {
            ctx->pc = 0x27AFD8u;
            goto label_27afd8;
        }
    }
    ctx->pc = 0x27AFC8u;
label_27afc8:
    // 0x27afc8: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x27afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_27afcc:
    // 0x27afcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27afd0:
    // 0x27afd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27afd4:
    if (ctx->pc == 0x27AFD4u) {
        ctx->pc = 0x27AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFD0u;
        // 0x27afd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFD8u;
        goto label_27afd8;
    }
    ctx->pc = 0x27AFD0u;
    {
        const bool branch_taken_0x27afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFD0u;
        // 0x27afd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afd0) {
            ctx->pc = 0x27AFDCu;
            goto label_27afdc;
        }
    }
    ctx->pc = 0x27AFD8u;
label_27afd8:
    // 0x27afd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27afdc:
    // 0x27afdc: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_27afe0:
    if (ctx->pc == 0x27AFE0u) {
        ctx->pc = 0x27AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFDCu;
        // 0x27afe0: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFE4u;
        goto label_27afe4;
    }
    ctx->pc = 0x27AFDCu;
    {
        const bool branch_taken_0x27afdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27afdc) {
            ctx->pc = 0x27AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AFDCu;
            // 0x27afe0: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B058u;
            goto label_27b058;
        }
    }
    ctx->pc = 0x27AFE4u;
label_27afe4:
    // 0x27afe4: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x27afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27afe8:
    // 0x27afe8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x27afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27afec:
    // 0x27afec: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27aff0:
    // 0x27aff0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27aff4:
    if (ctx->pc == 0x27AFF4u) {
        ctx->pc = 0x27AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFF0u;
        // 0x27aff4: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AFF8u;
        goto label_27aff8;
    }
    ctx->pc = 0x27AFF0u;
    {
        const bool branch_taken_0x27aff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27aff0) {
            ctx->pc = 0x27AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AFF0u;
            // 0x27aff4: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27AFF8u;
label_27aff8:
    // 0x27aff8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27affc:
    // 0x27affc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27b000:
    // 0x27b000: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b004:
    // 0x27b004: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27b004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27b008:
    // 0x27b008: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b00c:
    // 0x27b00c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27b00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27b010:
    // 0x27b010: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27b010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27b014:
    // 0x27b014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27b018:
    if (ctx->pc == 0x27B018u) {
        ctx->pc = 0x27B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B014u;
        // 0x27b018: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B01Cu;
        goto label_27b01c;
    }
    ctx->pc = 0x27B014u;
    {
        const bool branch_taken_0x27b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B014u;
        // 0x27b018: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b014) {
            ctx->pc = 0x27B028u;
            goto label_27b028;
        }
    }
    ctx->pc = 0x27B01Cu;
label_27b01c:
    // 0x27b01c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_27b020:
    // 0x27b020: 0x10000002  b           . + 4 + (0x2 << 2)
label_27b024:
    if (ctx->pc == 0x27B024u) {
        ctx->pc = 0x27B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B020u;
        // 0x27b024: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B028u;
        goto label_27b028;
    }
    ctx->pc = 0x27B020u;
    {
        const bool branch_taken_0x27b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B020u;
        // 0x27b024: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b020) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B028u;
label_27b028:
    // 0x27b028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b02c:
    // 0x27b02c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x27b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27b030:
    // 0x27b030: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x27b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_27b034:
    // 0x27b034: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27b038:
    if (ctx->pc == 0x27B038u) {
        ctx->pc = 0x27B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B034u;
        // 0x27b038: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B03Cu;
        goto label_27b03c;
    }
    ctx->pc = 0x27B034u;
    {
        const bool branch_taken_0x27b034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b034) {
            ctx->pc = 0x27B038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B034u;
            // 0x27b038: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B058u;
            goto label_27b058;
        }
    }
    ctx->pc = 0x27B03Cu;
label_27b03c:
    // 0x27b03c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b040:
    // 0x27b040: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27b040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27b044:
    // 0x27b044: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b048:
    // 0x27b048: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27b048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27b04c:
    // 0x27b04c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27b04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b050:
    // 0x27b050: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27b050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27b054:
    // 0x27b054: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x27b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27b058:
    // 0x27b058: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x27b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_27b05c:
    // 0x27b05c: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x27b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_27b060:
    // 0x27b060: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27b064:
    if (ctx->pc == 0x27B064u) {
        ctx->pc = 0x27B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B060u;
        // 0x27b064: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B068u;
        goto label_27b068;
    }
    ctx->pc = 0x27B060u;
    {
        const bool branch_taken_0x27b060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b060) {
            ctx->pc = 0x27B064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B060u;
            // 0x27b064: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B084u;
            goto label_27b084;
        }
    }
    ctx->pc = 0x27B068u;
label_27b068:
    // 0x27b068: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x27b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b06c:
    // 0x27b06c: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x27b06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_27b070:
    // 0x27b070: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b074:
    // 0x27b074: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27b074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27b078:
    // 0x27b078: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b07c:
    // 0x27b07c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27b080:
    // 0x27b080: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x27b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27b084:
    // 0x27b084: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27b088:
    // 0x27b088: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x27b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_27b08c:
    // 0x27b08c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x27b08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_27b090:
    // 0x27b090: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x27b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b094:
    // 0x27b094: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x27b094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_27b098:
    // 0x27b098: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27b098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27b09c:
    // 0x27b09c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27b0a0:
    // 0x27b0a0: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x27b0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_27b0a4:
    // 0x27b0a4: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x27b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_27b0a8:
    // 0x27b0a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_27b0ac:
    // 0x27b0ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27b0b0:
    // 0x27b0b0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27b0b4:
    // 0x27b0b4: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x27b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_27b0b8:
    // 0x27b0b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_27b0bc:
    // 0x27b0bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27b0c0:
    if (ctx->pc == 0x27B0C0u) {
        ctx->pc = 0x27B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0BCu;
        // 0x27b0c0: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B0C4u;
        goto label_27b0c4;
    }
    ctx->pc = 0x27B0BCu;
    {
        const bool branch_taken_0x27b0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0BCu;
        // 0x27b0c0: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0bc) {
            ctx->pc = 0x27B0D0u;
            goto label_27b0d0;
        }
    }
    ctx->pc = 0x27B0C4u;
label_27b0c4:
    // 0x27b0c4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x27b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_27b0c8:
    // 0x27b0c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27b0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_27b0cc:
    // 0x27b0cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27b0d0:
    // 0x27b0d0: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x27b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_27b0d4:
    // 0x27b0d4: 0xc0527ae  jal         func_149EB8
label_27b0d8:
    if (ctx->pc == 0x27B0D8u) {
        ctx->pc = 0x27B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0D4u;
        // 0x27b0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B0DCu;
        goto label_27b0dc;
    }
    ctx->pc = 0x27B0D4u;
    SET_GPR_U32(ctx, 31, 0x27B0DCu);
    ctx->pc = 0x27B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0D4u;
    // 0x27b0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27B0D4u, 0x27B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0DCu;
label_27b0dc:
    // 0x27b0dc: 0xc09ec90  jal         func_27B240
label_27b0e0:
    if (ctx->pc == 0x27B0E0u) {
        ctx->pc = 0x27B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0DCu;
        // 0x27b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B0E4u;
        goto label_27b0e4;
    }
    ctx->pc = 0x27B0DCu;
    SET_GPR_U32(ctx, 31, 0x27B0E4u);
    ctx->pc = 0x27B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0DCu;
    // 0x27b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B240u, 0x27B0DCu, 0x27B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0E4u;
label_27b0e4:
    // 0x27b0e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27b0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27b0e8:
    // 0x27b0e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27b0ec:
    // 0x27b0ec: 0x3e00008  jr          $ra
label_27b0f0:
    if (ctx->pc == 0x27B0F0u) {
        ctx->pc = 0x27B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0ECu;
        // 0x27b0f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B0F4u;
        goto label_27b0f4;
    }
    ctx->pc = 0x27B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0ECu;
        // 0x27b0f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B0F4u;
label_27b0f4:
    // 0x27b0f4: 0x0  nop
    ctx->pc = 0x27b0f4u;
    // NOP
    ctx->pc = 0x27b0f8u;
}
