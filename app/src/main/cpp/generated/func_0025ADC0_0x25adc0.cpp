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

// Function: func_0025ADC0
// Address: 0x25adc0 - 0x25b158
void func_0025ADC0_0x25adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025ADC0_0x25adc0");
#endif

    switch (ctx->pc) {
        case 0x25adc0u: goto label_25adc0;
        case 0x25adc4u: goto label_25adc4;
        case 0x25adc8u: goto label_25adc8;
        case 0x25adccu: goto label_25adcc;
        case 0x25add0u: goto label_25add0;
        case 0x25add4u: goto label_25add4;
        case 0x25add8u: goto label_25add8;
        case 0x25addcu: goto label_25addc;
        case 0x25ade0u: goto label_25ade0;
        case 0x25ade4u: goto label_25ade4;
        case 0x25ade8u: goto label_25ade8;
        case 0x25adecu: goto label_25adec;
        case 0x25adf0u: goto label_25adf0;
        case 0x25adf4u: goto label_25adf4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25adfcu: goto label_25adfc;
        case 0x25ae00u: goto label_25ae00;
        case 0x25ae04u: goto label_25ae04;
        case 0x25ae08u: goto label_25ae08;
        case 0x25ae0cu: goto label_25ae0c;
        case 0x25ae10u: goto label_25ae10;
        case 0x25ae14u: goto label_25ae14;
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae1cu: goto label_25ae1c;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae24u: goto label_25ae24;
        case 0x25ae28u: goto label_25ae28;
        case 0x25ae2cu: goto label_25ae2c;
        case 0x25ae30u: goto label_25ae30;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae38u: goto label_25ae38;
        case 0x25ae3cu: goto label_25ae3c;
        case 0x25ae40u: goto label_25ae40;
        case 0x25ae44u: goto label_25ae44;
        case 0x25ae48u: goto label_25ae48;
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae50u: goto label_25ae50;
        case 0x25ae54u: goto label_25ae54;
        case 0x25ae58u: goto label_25ae58;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae64u: goto label_25ae64;
        case 0x25ae68u: goto label_25ae68;
        case 0x25ae6cu: goto label_25ae6c;
        case 0x25ae70u: goto label_25ae70;
        case 0x25ae74u: goto label_25ae74;
        case 0x25ae78u: goto label_25ae78;
        case 0x25ae7cu: goto label_25ae7c;
        case 0x25ae80u: goto label_25ae80;
        case 0x25ae84u: goto label_25ae84;
        case 0x25ae88u: goto label_25ae88;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25ae90u: goto label_25ae90;
        case 0x25ae94u: goto label_25ae94;
        case 0x25ae98u: goto label_25ae98;
        case 0x25ae9cu: goto label_25ae9c;
        case 0x25aea0u: goto label_25aea0;
        case 0x25aea4u: goto label_25aea4;
        case 0x25aea8u: goto label_25aea8;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aeb0u: goto label_25aeb0;
        case 0x25aeb4u: goto label_25aeb4;
        case 0x25aeb8u: goto label_25aeb8;
        case 0x25aebcu: goto label_25aebc;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aec8u: goto label_25aec8;
        case 0x25aeccu: goto label_25aecc;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aed8u: goto label_25aed8;
        case 0x25aedcu: goto label_25aedc;
        case 0x25aee0u: goto label_25aee0;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aee8u: goto label_25aee8;
        case 0x25aeecu: goto label_25aeec;
        case 0x25aef0u: goto label_25aef0;
        case 0x25aef4u: goto label_25aef4;
        case 0x25aef8u: goto label_25aef8;
        case 0x25aefcu: goto label_25aefc;
        case 0x25af00u: goto label_25af00;
        case 0x25af04u: goto label_25af04;
        case 0x25af08u: goto label_25af08;
        case 0x25af0cu: goto label_25af0c;
        case 0x25af10u: goto label_25af10;
        case 0x25af14u: goto label_25af14;
        case 0x25af18u: goto label_25af18;
        case 0x25af1cu: goto label_25af1c;
        case 0x25af20u: goto label_25af20;
        case 0x25af24u: goto label_25af24;
        case 0x25af28u: goto label_25af28;
        case 0x25af2cu: goto label_25af2c;
        case 0x25af30u: goto label_25af30;
        case 0x25af34u: goto label_25af34;
        case 0x25af38u: goto label_25af38;
        case 0x25af3cu: goto label_25af3c;
        case 0x25af40u: goto label_25af40;
        case 0x25af44u: goto label_25af44;
        case 0x25af48u: goto label_25af48;
        case 0x25af4cu: goto label_25af4c;
        case 0x25af50u: goto label_25af50;
        case 0x25af54u: goto label_25af54;
        case 0x25af58u: goto label_25af58;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af60u: goto label_25af60;
        case 0x25af64u: goto label_25af64;
        case 0x25af68u: goto label_25af68;
        case 0x25af6cu: goto label_25af6c;
        case 0x25af70u: goto label_25af70;
        case 0x25af74u: goto label_25af74;
        case 0x25af78u: goto label_25af78;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af80u: goto label_25af80;
        case 0x25af84u: goto label_25af84;
        case 0x25af88u: goto label_25af88;
        case 0x25af8cu: goto label_25af8c;
        case 0x25af90u: goto label_25af90;
        case 0x25af94u: goto label_25af94;
        case 0x25af98u: goto label_25af98;
        case 0x25af9cu: goto label_25af9c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afa4u: goto label_25afa4;
        case 0x25afa8u: goto label_25afa8;
        case 0x25afacu: goto label_25afac;
        case 0x25afb0u: goto label_25afb0;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afbcu: goto label_25afbc;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afc8u: goto label_25afc8;
        case 0x25afccu: goto label_25afcc;
        case 0x25afd0u: goto label_25afd0;
        case 0x25afd4u: goto label_25afd4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afdcu: goto label_25afdc;
        case 0x25afe0u: goto label_25afe0;
        case 0x25afe4u: goto label_25afe4;
        case 0x25afe8u: goto label_25afe8;
        case 0x25afecu: goto label_25afec;
        case 0x25aff0u: goto label_25aff0;
        case 0x25aff4u: goto label_25aff4;
        case 0x25aff8u: goto label_25aff8;
        case 0x25affcu: goto label_25affc;
        case 0x25b000u: goto label_25b000;
        case 0x25b004u: goto label_25b004;
        case 0x25b008u: goto label_25b008;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b010u: goto label_25b010;
        case 0x25b014u: goto label_25b014;
        case 0x25b018u: goto label_25b018;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b020u: goto label_25b020;
        case 0x25b024u: goto label_25b024;
        case 0x25b028u: goto label_25b028;
        case 0x25b02cu: goto label_25b02c;
        case 0x25b030u: goto label_25b030;
        case 0x25b034u: goto label_25b034;
        case 0x25b038u: goto label_25b038;
        case 0x25b03cu: goto label_25b03c;
        case 0x25b040u: goto label_25b040;
        case 0x25b044u: goto label_25b044;
        case 0x25b048u: goto label_25b048;
        case 0x25b04cu: goto label_25b04c;
        case 0x25b050u: goto label_25b050;
        case 0x25b054u: goto label_25b054;
        case 0x25b058u: goto label_25b058;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b060u: goto label_25b060;
        case 0x25b064u: goto label_25b064;
        case 0x25b068u: goto label_25b068;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b070u: goto label_25b070;
        case 0x25b074u: goto label_25b074;
        case 0x25b078u: goto label_25b078;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b080u: goto label_25b080;
        case 0x25b084u: goto label_25b084;
        case 0x25b088u: goto label_25b088;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b090u: goto label_25b090;
        case 0x25b094u: goto label_25b094;
        case 0x25b098u: goto label_25b098;
        case 0x25b09cu: goto label_25b09c;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0a8u: goto label_25b0a8;
        case 0x25b0acu: goto label_25b0ac;
        case 0x25b0b0u: goto label_25b0b0;
        case 0x25b0b4u: goto label_25b0b4;
        case 0x25b0b8u: goto label_25b0b8;
        case 0x25b0bcu: goto label_25b0bc;
        case 0x25b0c0u: goto label_25b0c0;
        case 0x25b0c4u: goto label_25b0c4;
        case 0x25b0c8u: goto label_25b0c8;
        case 0x25b0ccu: goto label_25b0cc;
        case 0x25b0d0u: goto label_25b0d0;
        case 0x25b0d4u: goto label_25b0d4;
        case 0x25b0d8u: goto label_25b0d8;
        case 0x25b0dcu: goto label_25b0dc;
        case 0x25b0e0u: goto label_25b0e0;
        case 0x25b0e4u: goto label_25b0e4;
        case 0x25b0e8u: goto label_25b0e8;
        case 0x25b0ecu: goto label_25b0ec;
        case 0x25b0f0u: goto label_25b0f0;
        case 0x25b0f4u: goto label_25b0f4;
        case 0x25b0f8u: goto label_25b0f8;
        case 0x25b0fcu: goto label_25b0fc;
        case 0x25b100u: goto label_25b100;
        case 0x25b104u: goto label_25b104;
        case 0x25b108u: goto label_25b108;
        case 0x25b10cu: goto label_25b10c;
        case 0x25b110u: goto label_25b110;
        case 0x25b114u: goto label_25b114;
        case 0x25b118u: goto label_25b118;
        case 0x25b11cu: goto label_25b11c;
        case 0x25b120u: goto label_25b120;
        case 0x25b124u: goto label_25b124;
        case 0x25b128u: goto label_25b128;
        case 0x25b12cu: goto label_25b12c;
        case 0x25b130u: goto label_25b130;
        case 0x25b134u: goto label_25b134;
        case 0x25b138u: goto label_25b138;
        case 0x25b13cu: goto label_25b13c;
        case 0x25b140u: goto label_25b140;
        case 0x25b144u: goto label_25b144;
        case 0x25b148u: goto label_25b148;
        case 0x25b14cu: goto label_25b14c;
        case 0x25b150u: goto label_25b150;
        case 0x25b154u: goto label_25b154;
        default: break;
    }

    ctx->pc = 0x25adc0u;

label_25adc0:
    // 0x25adc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_25adc4:
    // 0x25adc4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x25adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_25adc8:
    // 0x25adc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25adc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25adcc:
    // 0x25adcc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x25adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_25add0:
    // 0x25add0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x25add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_25add4:
    // 0x25add4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x25add4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_25add8:
    // 0x25add8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x25add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_25addc:
    // 0x25addc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x25addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_25ade0:
    // 0x25ade0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x25ade0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_25ade4:
    // 0x25ade4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x25ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_25ade8:
    // 0x25ade8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25adec:
    // 0x25adec: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25adecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25adf0:
    // 0x25adf0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25adf4:
    if (ctx->pc == 0x25ADF4u) {
        ctx->pc = 0x25ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF0u;
        // 0x25adf4: 0xa2220617  sb          $v0, 0x617($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADF8u;
        goto label_25adf8;
    }
    ctx->pc = 0x25ADF0u;
    {
        const bool branch_taken_0x25adf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF0u;
        // 0x25adf4: 0xa2220617  sb          $v0, 0x617($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adf0) {
            ctx->pc = 0x25AE0Cu;
            goto label_25ae0c;
        }
    }
    ctx->pc = 0x25ADF8u;
label_25adf8:
    // 0x25adf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25adfc:
    // 0x25adfc: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_25ae00:
    if (ctx->pc == 0x25AE00u) {
        ctx->pc = 0x25AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADFCu;
        // 0x25ae00: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE04u;
        goto label_25ae04;
    }
    ctx->pc = 0x25ADFCu;
    {
        const bool branch_taken_0x25adfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADFCu;
        // 0x25ae00: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adfc) {
            ctx->pc = 0x25AEF8u;
            goto label_25aef8;
        }
    }
    ctx->pc = 0x25AE04u;
label_25ae04:
    // 0x25ae04: 0x100000cc  b           . + 4 + (0xCC << 2)
label_25ae08:
    if (ctx->pc == 0x25AE08u) {
        ctx->pc = 0x25AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE04u;
        // 0x25ae08: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE0Cu;
        goto label_25ae0c;
    }
    ctx->pc = 0x25AE04u;
    {
        const bool branch_taken_0x25ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE04u;
        // 0x25ae08: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae04) {
            ctx->pc = 0x25B138u;
            goto label_25b138;
        }
    }
    ctx->pc = 0x25AE0Cu;
label_25ae0c:
    // 0x25ae0c: 0xc09d91a  jal         func_276468
label_25ae10:
    if (ctx->pc == 0x25AE10u) {
        ctx->pc = 0x25AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE0Cu;
        // 0x25ae10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE14u;
        goto label_25ae14;
    }
    ctx->pc = 0x25AE0Cu;
    SET_GPR_U32(ctx, 31, 0x25AE14u);
    ctx->pc = 0x25AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE0Cu;
    // 0x25ae10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25AE0Cu, 0x25AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE14u;
label_25ae14:
    // 0x25ae14: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x25ae14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25ae18:
    // 0x25ae18: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x25ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_25ae1c:
    // 0x25ae1c: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x25ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
label_25ae20:
    // 0x25ae20: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x25ae20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
label_25ae24:
    // 0x25ae24: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25ae28:
    if (ctx->pc == 0x25AE28u) {
        ctx->pc = 0x25AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE24u;
        // 0x25ae28: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE2Cu;
        goto label_25ae2c;
    }
    ctx->pc = 0x25AE24u;
    {
        const bool branch_taken_0x25ae24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE24u;
        // 0x25ae28: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae24) {
            ctx->pc = 0x25AE44u;
            goto label_25ae44;
        }
    }
    ctx->pc = 0x25AE2Cu;
label_25ae2c:
    // 0x25ae2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25ae30:
    // 0x25ae30: 0x244237a0  addiu       $v0, $v0, 0x37A0
    ctx->pc = 0x25ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
label_25ae34:
    // 0x25ae34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25ae38:
    // 0x25ae38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ae3c:
    // 0x25ae3c: 0x800008  jr          $a0
label_25ae40:
    if (ctx->pc == 0x25AE40u) {
        ctx->pc = 0x25AE44u;
        goto label_25ae44;
    }
    ctx->pc = 0x25AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AE44u: goto label_25ae44;
            case 0x25AE54u: goto label_25ae54;
            case 0x25AE64u: goto label_25ae64;
            case 0x25AE74u: goto label_25ae74;
            case 0x25AE84u: goto label_25ae84;
            case 0x25AE94u: goto label_25ae94;
            case 0x25AEA4u: goto label_25aea4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25AE44u;
label_25ae44:
    // 0x25ae44: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25ae48:
    // 0x25ae48: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x25ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_25ae4c:
    // 0x25ae4c: 0x10000018  b           . + 4 + (0x18 << 2)
label_25ae50:
    if (ctx->pc == 0x25AE50u) {
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x8c440128  lw          $a0, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE54u;
        goto label_25ae54;
    }
    ctx->pc = 0x25AE4Cu;
    {
        const bool branch_taken_0x25ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x8c440128  lw          $a0, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae4c) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AE54u;
label_25ae54:
    // 0x25ae54: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25ae58:
    // 0x25ae58: 0x8c43089c  lw          $v1, 0x89C($v0)
    ctx->pc = 0x25ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2204)));
label_25ae5c:
    // 0x25ae5c: 0x10000014  b           . + 4 + (0x14 << 2)
label_25ae60:
    if (ctx->pc == 0x25AE60u) {
        ctx->pc = 0x25AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE5Cu;
        // 0x25ae60: 0x8c4408a0  lw          $a0, 0x8A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE64u;
        goto label_25ae64;
    }
    ctx->pc = 0x25AE5Cu;
    {
        const bool branch_taken_0x25ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE5Cu;
        // 0x25ae60: 0x8c4408a0  lw          $a0, 0x8A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae5c) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AE64u;
label_25ae64:
    // 0x25ae64: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25ae68:
    // 0x25ae68: 0x8c43089c  lw          $v1, 0x89C($v0)
    ctx->pc = 0x25ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2204)));
label_25ae6c:
    // 0x25ae6c: 0x10000010  b           . + 4 + (0x10 << 2)
label_25ae70:
    if (ctx->pc == 0x25AE70u) {
        ctx->pc = 0x25AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE6Cu;
        // 0x25ae70: 0x8c4408a0  lw          $a0, 0x8A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE74u;
        goto label_25ae74;
    }
    ctx->pc = 0x25AE6Cu;
    {
        const bool branch_taken_0x25ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE6Cu;
        // 0x25ae70: 0x8c4408a0  lw          $a0, 0x8A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae6c) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AE74u;
label_25ae74:
    // 0x25ae74: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25ae78:
    // 0x25ae78: 0x8c43089c  lw          $v1, 0x89C($v0)
    ctx->pc = 0x25ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2204)));
label_25ae7c:
    // 0x25ae7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_25ae80:
    if (ctx->pc == 0x25AE80u) {
        ctx->pc = 0x25AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE7Cu;
        // 0x25ae80: 0x8c4408a0  lw          $a0, 0x8A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE84u;
        goto label_25ae84;
    }
    ctx->pc = 0x25AE7Cu;
    {
        const bool branch_taken_0x25ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE7Cu;
        // 0x25ae80: 0x8c4408a0  lw          $a0, 0x8A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae7c) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AE84u;
label_25ae84:
    // 0x25ae84: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25ae88:
    // 0x25ae88: 0x8c43112c  lw          $v1, 0x112C($v0)
    ctx->pc = 0x25ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4396)));
label_25ae8c:
    // 0x25ae8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25ae90:
    if (ctx->pc == 0x25AE90u) {
        ctx->pc = 0x25AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE8Cu;
        // 0x25ae90: 0x8c441130  lw          $a0, 0x1130($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE94u;
        goto label_25ae94;
    }
    ctx->pc = 0x25AE8Cu;
    {
        const bool branch_taken_0x25ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE8Cu;
        // 0x25ae90: 0x8c441130  lw          $a0, 0x1130($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae8c) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AE94u;
label_25ae94:
    // 0x25ae94: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25ae98:
    // 0x25ae98: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x25ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_25ae9c:
    // 0x25ae9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_25aea0:
    if (ctx->pc == 0x25AEA0u) {
        ctx->pc = 0x25AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE9Cu;
        // 0x25aea0: 0x8c440128  lw          $a0, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEA4u;
        goto label_25aea4;
    }
    ctx->pc = 0x25AE9Cu;
    {
        const bool branch_taken_0x25ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE9Cu;
        // 0x25aea0: 0x8c440128  lw          $a0, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae9c) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AEA4u;
label_25aea4:
    // 0x25aea4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_25aea8:
    // 0x25aea8: 0x8c4315d4  lw          $v1, 0x15D4($v0)
    ctx->pc = 0x25aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5588)));
label_25aeac:
    // 0x25aeac: 0x8c4415d8  lw          $a0, 0x15D8($v0)
    ctx->pc = 0x25aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5592)));
label_25aeb0:
    // 0x25aeb0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25aeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25aeb4:
    // 0x25aeb4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25aeb8:
    // 0x25aeb8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25aebc:
    // 0x25aebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25aebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25aec0:
    // 0x25aec0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25aec4:
    // 0x25aec4: 0xc04d484  jal         func_135210
label_25aec8:
    if (ctx->pc == 0x25AEC8u) {
        ctx->pc = 0x25AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEC4u;
        // 0x25aec8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AECCu;
        goto label_25aecc;
    }
    ctx->pc = 0x25AEC4u;
    SET_GPR_U32(ctx, 31, 0x25AECCu);
    ctx->pc = 0x25AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AEC4u;
    // 0x25aec8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x25AEC4u, 0x25AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AECCu;
label_25aecc:
    // 0x25aecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25aeccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25aed0:
    // 0x25aed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25aed4:
    // 0x25aed4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25aed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25aed8:
    // 0x25aed8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x25aed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25aedc:
    // 0x25aedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25aee0:
    // 0x25aee0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25aee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25aee4:
    // 0x25aee4: 0xc0aa15e  jal         func_2A8578
label_25aee8:
    if (ctx->pc == 0x25AEE8u) {
        ctx->pc = 0x25AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEE4u;
        // 0x25aee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEECu;
        goto label_25aeec;
    }
    ctx->pc = 0x25AEE4u;
    SET_GPR_U32(ctx, 31, 0x25AEECu);
    ctx->pc = 0x25AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AEE4u;
    // 0x25aee8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25AEE4u, 0x25AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEECu;
label_25aeec:
    // 0x25aeec: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25aeecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25aef0:
    // 0x25aef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25aef4:
    // 0x25aef4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25aef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25aef8:
    // 0x25aef8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_25aefc:
    // 0x25aefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25aefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25af00:
    // 0x25af00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25af04:
    // 0x25af04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25af04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25af08:
    // 0x25af08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25af08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25af0c:
    // 0x25af0c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x25af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_25af10:
    // 0x25af10: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x25af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_25af14:
    // 0x25af14: 0xc0989d4  jal         func_262750
label_25af18:
    if (ctx->pc == 0x25AF18u) {
        ctx->pc = 0x25AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF14u;
        // 0x25af18: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF1Cu;
        goto label_25af1c;
    }
    ctx->pc = 0x25AF14u;
    SET_GPR_U32(ctx, 31, 0x25AF1Cu);
    ctx->pc = 0x25AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF14u;
    // 0x25af18: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x25AF14u, 0x25AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF1Cu;
label_25af1c:
    // 0x25af1c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_25af20:
    // 0x25af20: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25af24:
    // 0x25af24: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x25af24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_25af28:
    // 0x25af28: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x25af28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25af2c:
    // 0x25af2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25af2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25af30:
    // 0x25af30: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25af30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25af34:
    // 0x25af34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25af34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25af38:
    // 0x25af38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25af38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25af3c:
    // 0x25af3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x25af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_25af40:
    // 0x25af40: 0x26230580  addiu       $v1, $s1, 0x580
    ctx->pc = 0x25af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_25af44:
    // 0x25af44: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x25af44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_25af48:
    // 0x25af48: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25af48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25af4c:
    // 0x25af4c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x25af4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_25af50:
    // 0x25af50: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x25af50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25af54:
    // 0x25af54: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x25af54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_25af58:
    // 0x25af58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x25af58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_25af5c:
    // 0x25af5c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x25af5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25af60:
    // 0x25af60: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x25af60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_25af64:
    // 0x25af64: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x25af64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_25af68:
    // 0x25af68: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x25af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_25af6c:
    // 0x25af6c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25af70:
    // 0x25af70: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_25af74:
    // 0x25af74: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x25af74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_25af78:
    // 0x25af78: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x25af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_25af7c:
    // 0x25af7c: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x25af7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25af80:
    // 0x25af80: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x25af80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_25af84:
    // 0x25af84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x25af84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_25af88:
    // 0x25af88: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x25af88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25af8c:
    // 0x25af8c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x25af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_25af90:
    // 0x25af90: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x25af90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_25af94:
    // 0x25af94: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x25af94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_25af98:
    // 0x25af98: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x25af98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25af9c:
    // 0x25af9c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x25af9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_25afa0:
    // 0x25afa0: 0x10720006  beq         $v1, $s2, . + 4 + (0x6 << 2)
label_25afa4:
    if (ctx->pc == 0x25AFA4u) {
        ctx->pc = 0x25AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFA0u;
        // 0x25afa4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFA8u;
        goto label_25afa8;
    }
    ctx->pc = 0x25AFA0u;
    {
        const bool branch_taken_0x25afa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x25AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFA0u;
        // 0x25afa4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afa0) {
            ctx->pc = 0x25AFBCu;
            goto label_25afbc;
        }
    }
    ctx->pc = 0x25AFA8u;
label_25afa8:
    // 0x25afa8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x25afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25afac:
    // 0x25afac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25afb0:
    // 0x25afb0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x25afb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25afb4:
    // 0x25afb4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25afb8:
    // 0x25afb8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25afb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25afbc:
    // 0x25afbc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25afc0:
    // 0x25afc0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25afc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25afc4:
    // 0x25afc4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25afc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25afc8:
    // 0x25afc8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25afc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25afcc:
    // 0x25afcc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25afccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25afd0:
    // 0x25afd0: 0xda240580  lqc2        $vf4, 0x580($s1)
    ctx->pc = 0x25afd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1408)));
label_25afd4:
    // 0x25afd4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25afd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25afd8:
    // 0x25afd8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25afd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25afdc:
    // 0x25afdc: 0xfa240580  sqc2        $vf4, 0x580($s1)
    ctx->pc = 0x25afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
label_25afe0:
    // 0x25afe0: 0xc055f06  jal         func_157C18
label_25afe4:
    if (ctx->pc == 0x25AFE4u) {
        ctx->pc = 0x25AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFE0u;
        // 0x25afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFE8u;
        goto label_25afe8;
    }
    ctx->pc = 0x25AFE0u;
    SET_GPR_U32(ctx, 31, 0x25AFE8u);
    ctx->pc = 0x25AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFE0u;
    // 0x25afe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25AFE0u, 0x25AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFE8u;
label_25afe8:
    // 0x25afe8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25afec:
    if (ctx->pc == 0x25AFECu) {
        ctx->pc = 0x25AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFE8u;
        // 0x25afec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFF0u;
        goto label_25aff0;
    }
    ctx->pc = 0x25AFE8u;
    {
        const bool branch_taken_0x25afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFE8u;
        // 0x25afec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afe8) {
            ctx->pc = 0x25B008u;
            goto label_25b008;
        }
    }
    ctx->pc = 0x25AFF0u;
label_25aff0:
    // 0x25aff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25aff4:
    // 0x25aff4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25aff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_25aff8:
    // 0x25aff8: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x25aff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_25affc:
    // 0x25affc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x25affcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_25b000:
    // 0x25b000: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x25b000u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_25b004:
    // 0x25b004: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x25b004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_25b008:
    // 0x25b008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25b00c:
    // 0x25b00c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25b00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25b010:
    // 0x25b010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b014:
    // 0x25b014: 0xc053e7c  jal         func_14F9F0
label_25b018:
    if (ctx->pc == 0x25B018u) {
        ctx->pc = 0x25B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B014u;
        // 0x25b018: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B01Cu;
        goto label_25b01c;
    }
    ctx->pc = 0x25B014u;
    SET_GPR_U32(ctx, 31, 0x25B01Cu);
    ctx->pc = 0x25B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B014u;
    // 0x25b018: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25B014u, 0x25B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B01Cu;
label_25b01c:
    // 0x25b01c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b01cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25b020:
    // 0x25b020: 0xc053e4a  jal         func_14F928
label_25b024:
    if (ctx->pc == 0x25B024u) {
        ctx->pc = 0x25B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B020u;
        // 0x25b024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B028u;
        goto label_25b028;
    }
    ctx->pc = 0x25B020u;
    SET_GPR_U32(ctx, 31, 0x25B028u);
    ctx->pc = 0x25B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B020u;
    // 0x25b024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25B020u, 0x25B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B028u;
label_25b028:
    // 0x25b028: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x25b028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_25b02c:
    // 0x25b02c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25b02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_25b030:
    // 0x25b030: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_25b034:
    if (ctx->pc == 0x25B034u) {
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B038u;
        goto label_25b038;
    }
    ctx->pc = 0x25B030u;
    {
        const bool branch_taken_0x25b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b030) {
            ctx->pc = 0x25B134u;
            goto label_25b134;
        }
    }
    ctx->pc = 0x25B038u;
label_25b038:
    // 0x25b038: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x25b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_25b03c:
    // 0x25b03c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x25b03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_25b040:
    // 0x25b040: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x25b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_25b044:
    // 0x25b044: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x25b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_25b048:
    // 0x25b048: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
label_25b04c:
    if (ctx->pc == 0x25B04Cu) {
        ctx->pc = 0x25B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B048u;
        // 0x25b04c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B050u;
        goto label_25b050;
    }
    ctx->pc = 0x25B048u;
    {
        const bool branch_taken_0x25b048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b048) {
            ctx->pc = 0x25B04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B048u;
            // 0x25b04c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B06Cu;
            goto label_25b06c;
        }
    }
    ctx->pc = 0x25B050u;
label_25b050:
    // 0x25b050: 0xc6200490  lwc1        $f0, 0x490($s1)
    ctx->pc = 0x25b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b054:
    // 0x25b054: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25b054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_25b058:
    // 0x25b058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b05c:
    // 0x25b05c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x25b05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_25b060:
    // 0x25b060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b064:
    // 0x25b064: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25b064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_25b068:
    // 0x25b068: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25b06c:
    // 0x25b06c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_25b070:
    if (ctx->pc == 0x25B070u) {
        ctx->pc = 0x25B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B06Cu;
        // 0x25b070: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B074u;
        goto label_25b074;
    }
    ctx->pc = 0x25B06Cu;
    {
        const bool branch_taken_0x25b06c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B06Cu;
        // 0x25b070: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b06c) {
            ctx->pc = 0x25B090u;
            goto label_25b090;
        }
    }
    ctx->pc = 0x25B074u;
label_25b074:
    // 0x25b074: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b078:
    // 0x25b078: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25b078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25b07c:
    // 0x25b07c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b080:
    // 0x25b080: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25b080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_25b084:
    // 0x25b084: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25b084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b088:
    // 0x25b088: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x25b088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_25b08c:
    // 0x25b08c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x25b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b090:
    // 0x25b090: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b094:
    // 0x25b094: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25b094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25b098:
    // 0x25b098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25b09c:
    // 0x25b09c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25b09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25b0a0:
    // 0x25b0a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25b0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b0a4:
    // 0x25b0a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25b0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25b0a8:
    // 0x25b0a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25b0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25b0ac:
    // 0x25b0ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_25b0b0:
    // 0x25b0b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x25b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_25b0b4:
    // 0x25b0b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b0b8:
    // 0x25b0b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x25b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_25b0bc:
    // 0x25b0bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25b0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25b0c0:
    // 0x25b0c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_25b0c4:
    // 0x25b0c4: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x25b0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_25b0c8:
    // 0x25b0c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x25b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_25b0cc:
    // 0x25b0cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25b0ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b0d0:
    // 0x25b0d0: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x25b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_25b0d4:
    // 0x25b0d4: 0xc04c784  jal         func_131E10
label_25b0d8:
    if (ctx->pc == 0x25B0D8u) {
        ctx->pc = 0x25B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0D4u;
        // 0x25b0d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0DCu;
        goto label_25b0dc;
    }
    ctx->pc = 0x25B0D4u;
    SET_GPR_U32(ctx, 31, 0x25B0DCu);
    ctx->pc = 0x25B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0D4u;
    // 0x25b0d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x25B0D4u, 0x25B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0DCu;
label_25b0dc:
    // 0x25b0dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25b0dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b0e0:
    // 0x25b0e0: 0x16500014  bne         $s2, $s0, . + 4 + (0x14 << 2)
label_25b0e4:
    if (ctx->pc == 0x25B0E4u) {
        ctx->pc = 0x25B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0E0u;
        // 0x25b0e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0E8u;
        goto label_25b0e8;
    }
    ctx->pc = 0x25B0E0u;
    {
        const bool branch_taken_0x25b0e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x25B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0E0u;
        // 0x25b0e4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0e0) {
            ctx->pc = 0x25B134u;
            goto label_25b134;
        }
    }
    ctx->pc = 0x25B0E8u;
label_25b0e8:
    // 0x25b0e8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25b0ec:
    // 0x25b0ec: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x25b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_25b0f0:
    // 0x25b0f0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x25b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b0f4:
    // 0x25b0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b0f8:
    // 0x25b0f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25b0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b0fc:
    // 0x25b0fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25b0fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b100:
    // 0x25b100: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25b100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_25b104:
    // 0x25b104: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x25b104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_25b108:
    // 0x25b108: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25b108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25b10c:
    // 0x25b10c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25b110:
    // 0x25b110: 0x40f809  jalr        $v0
label_25b114:
    if (ctx->pc == 0x25B114u) {
        ctx->pc = 0x25B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B110u;
        // 0x25b114: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B118u;
        goto label_25b118;
    }
    ctx->pc = 0x25B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B118u);
        ctx->pc = 0x25B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B110u;
        // 0x25b114: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B110u, 0x25B118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B118u;
label_25b118:
    // 0x25b118: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25b11c:
    // 0x25b11c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25b120:
    // 0x25b120: 0xa23202f4  sb          $s2, 0x2F4($s1)
    ctx->pc = 0x25b120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 18));
label_25b124:
    // 0x25b124: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x25b124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_25b128:
    // 0x25b128: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25b128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25b12c:
    // 0x25b12c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x25b12cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_25b130:
    // 0x25b130: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x25b130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_25b134:
    // 0x25b134: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x25b134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25b138:
    // 0x25b138: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x25b138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25b13c:
    // 0x25b13c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x25b13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25b140:
    // 0x25b140: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x25b140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25b144:
    // 0x25b144: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25b148:
    // 0x25b148: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x25b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25b14c:
    // 0x25b14c: 0x3e00008  jr          $ra
label_25b150:
    if (ctx->pc == 0x25B150u) {
        ctx->pc = 0x25B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B14Cu;
        // 0x25b150: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B154u;
        goto label_25b154;
    }
    ctx->pc = 0x25B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B14Cu;
        // 0x25b150: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B154u;
label_25b154:
    // 0x25b154: 0x0  nop
    ctx->pc = 0x25b154u;
    // NOP
    ctx->pc = 0x25b158u;
}
