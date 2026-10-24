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

// Function: func_0036AE70
// Address: 0x36ae70 - 0x36b0f0
void func_0036AE70_0x36ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036AE70_0x36ae70");
#endif

    switch (ctx->pc) {
        case 0x36ae70u: goto label_36ae70;
        case 0x36ae74u: goto label_36ae74;
        case 0x36ae78u: goto label_36ae78;
        case 0x36ae7cu: goto label_36ae7c;
        case 0x36ae80u: goto label_36ae80;
        case 0x36ae84u: goto label_36ae84;
        case 0x36ae88u: goto label_36ae88;
        case 0x36ae8cu: goto label_36ae8c;
        case 0x36ae90u: goto label_36ae90;
        case 0x36ae94u: goto label_36ae94;
        case 0x36ae98u: goto label_36ae98;
        case 0x36ae9cu: goto label_36ae9c;
        case 0x36aea0u: goto label_36aea0;
        case 0x36aea4u: goto label_36aea4;
        case 0x36aea8u: goto label_36aea8;
        case 0x36aeacu: goto label_36aeac;
        case 0x36aeb0u: goto label_36aeb0;
        case 0x36aeb4u: goto label_36aeb4;
        case 0x36aeb8u: goto label_36aeb8;
        case 0x36aebcu: goto label_36aebc;
        case 0x36aec0u: goto label_36aec0;
        case 0x36aec4u: goto label_36aec4;
        case 0x36aec8u: goto label_36aec8;
        case 0x36aeccu: goto label_36aecc;
        case 0x36aed0u: goto label_36aed0;
        case 0x36aed4u: goto label_36aed4;
        case 0x36aed8u: goto label_36aed8;
        case 0x36aedcu: goto label_36aedc;
        case 0x36aee0u: goto label_36aee0;
        case 0x36aee4u: goto label_36aee4;
        case 0x36aee8u: goto label_36aee8;
        case 0x36aeecu: goto label_36aeec;
        case 0x36aef0u: goto label_36aef0;
        case 0x36aef4u: goto label_36aef4;
        case 0x36aef8u: goto label_36aef8;
        case 0x36aefcu: goto label_36aefc;
        case 0x36af00u: goto label_36af00;
        case 0x36af04u: goto label_36af04;
        case 0x36af08u: goto label_36af08;
        case 0x36af0cu: goto label_36af0c;
        case 0x36af10u: goto label_36af10;
        case 0x36af14u: goto label_36af14;
        case 0x36af18u: goto label_36af18;
        case 0x36af1cu: goto label_36af1c;
        case 0x36af20u: goto label_36af20;
        case 0x36af24u: goto label_36af24;
        case 0x36af28u: goto label_36af28;
        case 0x36af2cu: goto label_36af2c;
        case 0x36af30u: goto label_36af30;
        case 0x36af34u: goto label_36af34;
        case 0x36af38u: goto label_36af38;
        case 0x36af3cu: goto label_36af3c;
        case 0x36af40u: goto label_36af40;
        case 0x36af44u: goto label_36af44;
        case 0x36af48u: goto label_36af48;
        case 0x36af4cu: goto label_36af4c;
        case 0x36af50u: goto label_36af50;
        case 0x36af54u: goto label_36af54;
        case 0x36af58u: goto label_36af58;
        case 0x36af5cu: goto label_36af5c;
        case 0x36af60u: goto label_36af60;
        case 0x36af64u: goto label_36af64;
        case 0x36af68u: goto label_36af68;
        case 0x36af6cu: goto label_36af6c;
        case 0x36af70u: goto label_36af70;
        case 0x36af74u: goto label_36af74;
        case 0x36af78u: goto label_36af78;
        case 0x36af7cu: goto label_36af7c;
        case 0x36af80u: goto label_36af80;
        case 0x36af84u: goto label_36af84;
        case 0x36af88u: goto label_36af88;
        case 0x36af8cu: goto label_36af8c;
        case 0x36af90u: goto label_36af90;
        case 0x36af94u: goto label_36af94;
        case 0x36af98u: goto label_36af98;
        case 0x36af9cu: goto label_36af9c;
        case 0x36afa0u: goto label_36afa0;
        case 0x36afa4u: goto label_36afa4;
        case 0x36afa8u: goto label_36afa8;
        case 0x36afacu: goto label_36afac;
        case 0x36afb0u: goto label_36afb0;
        case 0x36afb4u: goto label_36afb4;
        case 0x36afb8u: goto label_36afb8;
        case 0x36afbcu: goto label_36afbc;
        case 0x36afc0u: goto label_36afc0;
        case 0x36afc4u: goto label_36afc4;
        case 0x36afc8u: goto label_36afc8;
        case 0x36afccu: goto label_36afcc;
        case 0x36afd0u: goto label_36afd0;
        case 0x36afd4u: goto label_36afd4;
        case 0x36afd8u: goto label_36afd8;
        case 0x36afdcu: goto label_36afdc;
        case 0x36afe0u: goto label_36afe0;
        case 0x36afe4u: goto label_36afe4;
        case 0x36afe8u: goto label_36afe8;
        case 0x36afecu: goto label_36afec;
        case 0x36aff0u: goto label_36aff0;
        case 0x36aff4u: goto label_36aff4;
        case 0x36aff8u: goto label_36aff8;
        case 0x36affcu: goto label_36affc;
        case 0x36b000u: goto label_36b000;
        case 0x36b004u: goto label_36b004;
        case 0x36b008u: goto label_36b008;
        case 0x36b00cu: goto label_36b00c;
        case 0x36b010u: goto label_36b010;
        case 0x36b014u: goto label_36b014;
        case 0x36b018u: goto label_36b018;
        case 0x36b01cu: goto label_36b01c;
        case 0x36b020u: goto label_36b020;
        case 0x36b024u: goto label_36b024;
        case 0x36b028u: goto label_36b028;
        case 0x36b02cu: goto label_36b02c;
        case 0x36b030u: goto label_36b030;
        case 0x36b034u: goto label_36b034;
        case 0x36b038u: goto label_36b038;
        case 0x36b03cu: goto label_36b03c;
        case 0x36b040u: goto label_36b040;
        case 0x36b044u: goto label_36b044;
        case 0x36b048u: goto label_36b048;
        case 0x36b04cu: goto label_36b04c;
        case 0x36b050u: goto label_36b050;
        case 0x36b054u: goto label_36b054;
        case 0x36b058u: goto label_36b058;
        case 0x36b05cu: goto label_36b05c;
        case 0x36b060u: goto label_36b060;
        case 0x36b064u: goto label_36b064;
        case 0x36b068u: goto label_36b068;
        case 0x36b06cu: goto label_36b06c;
        case 0x36b070u: goto label_36b070;
        case 0x36b074u: goto label_36b074;
        case 0x36b078u: goto label_36b078;
        case 0x36b07cu: goto label_36b07c;
        case 0x36b080u: goto label_36b080;
        case 0x36b084u: goto label_36b084;
        case 0x36b088u: goto label_36b088;
        case 0x36b08cu: goto label_36b08c;
        case 0x36b090u: goto label_36b090;
        case 0x36b094u: goto label_36b094;
        case 0x36b098u: goto label_36b098;
        case 0x36b09cu: goto label_36b09c;
        case 0x36b0a0u: goto label_36b0a0;
        case 0x36b0a4u: goto label_36b0a4;
        case 0x36b0a8u: goto label_36b0a8;
        case 0x36b0acu: goto label_36b0ac;
        case 0x36b0b0u: goto label_36b0b0;
        case 0x36b0b4u: goto label_36b0b4;
        case 0x36b0b8u: goto label_36b0b8;
        case 0x36b0bcu: goto label_36b0bc;
        case 0x36b0c0u: goto label_36b0c0;
        case 0x36b0c4u: goto label_36b0c4;
        case 0x36b0c8u: goto label_36b0c8;
        case 0x36b0ccu: goto label_36b0cc;
        case 0x36b0d0u: goto label_36b0d0;
        case 0x36b0d4u: goto label_36b0d4;
        case 0x36b0d8u: goto label_36b0d8;
        case 0x36b0dcu: goto label_36b0dc;
        case 0x36b0e0u: goto label_36b0e0;
        case 0x36b0e4u: goto label_36b0e4;
        case 0x36b0e8u: goto label_36b0e8;
        case 0x36b0ecu: goto label_36b0ec;
        default: break;
    }

    ctx->pc = 0x36ae70u;

label_36ae70:
    // 0x36ae70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_36ae74:
    // 0x36ae74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36ae78:
    // 0x36ae78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36ae7c:
    // 0x36ae7c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36ae80:
    // 0x36ae80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_36ae84:
    // 0x36ae84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36ae84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36ae88:
    // 0x36ae88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_36ae8c:
    // 0x36ae8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36ae8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36ae90:
    // 0x36ae90: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_36ae94:
    // 0x36ae94: 0x2633038c  addiu       $s3, $s1, 0x38C
    ctx->pc = 0x36ae94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
label_36ae98:
    // 0x36ae98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36ae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_36ae9c:
    // 0x36ae9c: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x36ae9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_36aea0:
    // 0x36aea0: 0xae2203b8  sw          $v0, 0x3B8($s1)
    ctx->pc = 0x36aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 2));
label_36aea4:
    // 0x36aea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36aea8:
    // 0x36aea8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x36aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_36aeac:
    // 0x36aeac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x36aeacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_36aeb0:
    // 0x36aeb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x36aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36aeb4:
    // 0x36aeb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36aeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36aeb8:
    // 0x36aeb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36aebc:
    // 0x36aebc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x36aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_36aec0:
    // 0x36aec0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_36aec4:
    // 0x36aec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36aec8:
    // 0x36aec8: 0xae2003fc  sw          $zero, 0x3FC($s1)
    ctx->pc = 0x36aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1020), GPR_U32(ctx, 0));
label_36aecc:
    // 0x36aecc: 0xae200400  sw          $zero, 0x400($s1)
    ctx->pc = 0x36aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 0));
label_36aed0:
    // 0x36aed0: 0x40f809  jalr        $v0
label_36aed4:
    if (ctx->pc == 0x36AED4u) {
        ctx->pc = 0x36AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AED0u;
        // 0x36aed4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AED8u;
        goto label_36aed8;
    }
    ctx->pc = 0x36AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36AED8u);
        ctx->pc = 0x36AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AED0u;
        // 0x36aed4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AED0u, 0x36AED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36AED8u;
label_36aed8:
    // 0x36aed8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x36aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36aedc:
    // 0x36aedc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x36aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36aee0:
    // 0x36aee0: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x36aee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36aee4:
    // 0x36aee4: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x36aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_36aee8:
    // 0x36aee8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x36aee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_36aeec:
    // 0x36aeec: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x36aeecu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36aef0:
    // 0x36aef0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36aef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36aef4:
    // 0x36aef4: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x36aef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36aef8:
    // 0x36aef8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36aef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36aefc:
    // 0x36aefc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36aefcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36af00:
    // 0x36af00: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x36af00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36af04:
    // 0x36af04: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x36af04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_36af08:
    // 0x36af08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36af08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36af0c:
    // 0x36af0c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36af0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36af10:
    // 0x36af10: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x36af10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36af14:
    // 0x36af14: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x36af14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_36af18:
    // 0x36af18: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x36af18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_36af1c:
    // 0x36af1c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36af1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36af20:
    // 0x36af20: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36af20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36af24:
    // 0x36af24: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x36af24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_36af28:
    // 0x36af28: 0x39630000  xori        $v1, $t3, 0x0
    ctx->pc = 0x36af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
label_36af2c:
    // 0x36af2c: 0x1691004  sllv        $v0, $t1, $t3
    ctx->pc = 0x36af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
label_36af30:
    // 0x36af30: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x36af30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_36af34:
    // 0x36af34: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x36af34u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36af38:
    // 0x36af38: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36af38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36af3c:
    // 0x36af3c: 0x43600b  movn        $t4, $v0, $v1
    ctx->pc = 0x36af3cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
label_36af40:
    // 0x36af40: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x36af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36af44:
    // 0x36af44: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36af44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36af48:
    // 0x36af48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36af48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36af4c:
    // 0x36af4c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x36af4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36af50:
    // 0x36af50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36af50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36af54:
    // 0x36af54: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x36af54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_36af58:
    // 0x36af58: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x36af58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36af5c:
    // 0x36af5c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36af5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36af60:
    // 0x36af60: 0x29640007  slti        $a0, $t3, 0x7
    ctx->pc = 0x36af60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)7) ? 1 : 0);
label_36af64:
    // 0x36af64: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x36af64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_36af68:
    // 0x36af68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36af68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36af6c:
    // 0x36af6c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36af6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36af70:
    // 0x36af70: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_36af74:
    if (ctx->pc == 0x36AF74u) {
        ctx->pc = 0x36AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF70u;
        // 0x36af74: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AF78u;
        goto label_36af78;
    }
    ctx->pc = 0x36AF70u;
    {
        const bool branch_taken_0x36af70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF70u;
        // 0x36af74: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af70) {
            ctx->pc = 0x36AFE8u;
            goto label_36afe8;
        }
    }
    ctx->pc = 0x36AF78u;
label_36af78:
    // 0x36af78: 0x256bfff9  addiu       $t3, $t3, -0x7
    ctx->pc = 0x36af78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
label_36af7c:
    // 0x36af7c: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
label_36af80:
    if (ctx->pc == 0x36AF80u) {
        ctx->pc = 0x36AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF7Cu;
        // 0x36af80: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AF84u;
        goto label_36af84;
    }
    ctx->pc = 0x36AF7Cu;
    {
        const bool branch_taken_0x36af7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF7Cu;
        // 0x36af80: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af7c) {
            ctx->pc = 0x36AFA0u;
            goto label_36afa0;
        }
    }
    ctx->pc = 0x36AF84u;
label_36af84:
    // 0x36af84: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x36af84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_36af88:
    // 0x36af88: 0x491006  srlv        $v0, $t1, $v0
    ctx->pc = 0x36af88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_36af8c:
    // 0x36af8c: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x36af8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_36af90:
    // 0x36af90: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x36af90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_36af94:
    // 0x36af94: 0x10000004  b           . + 4 + (0x4 << 2)
label_36af98:
    if (ctx->pc == 0x36AF98u) {
        ctx->pc = 0x36AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF94u;
        // 0x36af98: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AF9Cu;
        goto label_36af9c;
    }
    ctx->pc = 0x36AF94u;
    {
        const bool branch_taken_0x36af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF94u;
        // 0x36af98: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af94) {
            ctx->pc = 0x36AFA8u;
            goto label_36afa8;
        }
    }
    ctx->pc = 0x36AF9Cu;
label_36af9c:
    // 0x36af9c: 0x0  nop
    ctx->pc = 0x36af9cu;
    // NOP
label_36afa0:
    // 0x36afa0: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x36afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_36afa4:
    // 0x36afa4: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x36afa4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_36afa8:
    // 0x36afa8: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x36afa8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36afac:
    // 0x36afac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36afacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36afb0:
    // 0x36afb0: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x36afb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36afb4:
    // 0x36afb4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36afb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36afb8:
    // 0x36afb8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36afb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36afbc:
    // 0x36afbc: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x36afbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36afc0:
    // 0x36afc0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x36afc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_36afc4:
    // 0x36afc4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36afc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36afc8:
    // 0x36afc8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36afc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36afcc:
    // 0x36afcc: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x36afccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_36afd0:
    // 0x36afd0: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x36afd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_36afd4:
    // 0x36afd4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36afd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_36afd8:
    // 0x36afd8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_36afdc:
    // 0x36afdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_36afe0:
    if (ctx->pc == 0x36AFE0u) {
        ctx->pc = 0x36AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFDCu;
        // 0x36afe0: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AFE4u;
        goto label_36afe4;
    }
    ctx->pc = 0x36AFDCu;
    {
        const bool branch_taken_0x36afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFDCu;
        // 0x36afe0: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36afdc) {
            ctx->pc = 0x36AFF4u;
            goto label_36aff4;
        }
    }
    ctx->pc = 0x36AFE4u;
label_36afe4:
    // 0x36afe4: 0x0  nop
    ctx->pc = 0x36afe4u;
    // NOP
label_36afe8:
    // 0x36afe8: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x36afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_36afec:
    // 0x36afec: 0xc6640  sll         $t4, $t4, 25
    ctx->pc = 0x36afecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_36aff0:
    // 0x36aff0: 0x256b0019  addiu       $t3, $t3, 0x19
    ctx->pc = 0x36aff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25));
label_36aff4:
    // 0x36aff4: 0x3088003f  andi        $t0, $a0, 0x3F
    ctx->pc = 0x36aff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_36aff8:
    // 0x36aff8: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x36aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_36affc:
    // 0x36affc: 0x3087003f  andi        $a3, $a0, 0x3F
    ctx->pc = 0x36affcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_36b000:
    // 0x36b000: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x36b000u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_36b004:
    // 0x36b004: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x36b004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_36b008:
    // 0x36b008: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x36b008u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_36b00c:
    // 0x36b00c: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x36b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_36b010:
    // 0x36b010: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x36b010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_36b014:
    // 0x36b014: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x36b014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36b018:
    // 0x36b018: 0xc27c2  srl         $a0, $t4, 31
    ctx->pc = 0x36b018u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_36b01c:
    // 0x36b01c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x36b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_36b020:
    // 0x36b020: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x36b020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
label_36b024:
    // 0x36b024: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x36b024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
label_36b028:
    // 0x36b028: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x36b028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_36b02c:
    // 0x36b02c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x36b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_36b030:
    // 0x36b030: 0x15650005  bne         $t3, $a1, . + 4 + (0x5 << 2)
label_36b034:
    if (ctx->pc == 0x36B034u) {
        ctx->pc = 0x36B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B030u;
        // 0x36b034: 0xae2402b4  sw          $a0, 0x2B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B038u;
        goto label_36b038;
    }
    ctx->pc = 0x36B030u;
    {
        const bool branch_taken_0x36b030 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        ctx->pc = 0x36B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B030u;
        // 0x36b034: 0xae2402b4  sw          $a0, 0x2B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b030) {
            ctx->pc = 0x36B048u;
            goto label_36b048;
        }
    }
    ctx->pc = 0x36B038u;
label_36b038:
    // 0x36b038: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x36b038u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_36b03c:
    // 0x36b03c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36b03cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b040:
    // 0x36b040: 0x10000003  b           . + 4 + (0x3 << 2)
label_36b044:
    if (ctx->pc == 0x36B044u) {
        ctx->pc = 0x36B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B040u;
        // 0x36b044: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B048u;
        goto label_36b048;
    }
    ctx->pc = 0x36B040u;
    {
        const bool branch_taken_0x36b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B040u;
        // 0x36b044: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b040) {
            ctx->pc = 0x36B050u;
            goto label_36b050;
        }
    }
    ctx->pc = 0x36B048u;
label_36b048:
    // 0x36b048: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x36b048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_36b04c:
    // 0x36b04c: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x36b04cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_36b050:
    // 0x36b050: 0xc17c2  srl         $v0, $t4, 31
    ctx->pc = 0x36b050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_36b054:
    // 0x36b054: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x36b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36b058:
    // 0x36b058: 0x15630005  bne         $t3, $v1, . + 4 + (0x5 << 2)
label_36b05c:
    if (ctx->pc == 0x36B05Cu) {
        ctx->pc = 0x36B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B058u;
        // 0x36b05c: 0xae2202b8  sw          $v0, 0x2B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B060u;
        goto label_36b060;
    }
    ctx->pc = 0x36B058u;
    {
        const bool branch_taken_0x36b058 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        ctx->pc = 0x36B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B058u;
        // 0x36b05c: 0xae2202b8  sw          $v0, 0x2B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b058) {
            ctx->pc = 0x36B070u;
            goto label_36b070;
        }
    }
    ctx->pc = 0x36B060u;
label_36b060:
    // 0x36b060: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36b060u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b064:
    // 0x36b064: 0x10000003  b           . + 4 + (0x3 << 2)
label_36b068:
    if (ctx->pc == 0x36B068u) {
        ctx->pc = 0x36B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B064u;
        // 0x36b068: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B06Cu;
        goto label_36b06c;
    }
    ctx->pc = 0x36B064u;
    {
        const bool branch_taken_0x36b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B064u;
        // 0x36b068: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b064) {
            ctx->pc = 0x36B074u;
            goto label_36b074;
        }
    }
    ctx->pc = 0x36B06Cu;
label_36b06c:
    // 0x36b06c: 0x0  nop
    ctx->pc = 0x36b06cu;
    // NOP
label_36b070:
    // 0x36b070: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x36b070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_36b074:
    // 0x36b074: 0x25650007  addiu       $a1, $t3, 0x7
    ctx->pc = 0x36b074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
label_36b078:
    // 0x36b078: 0x8e22038c  lw          $v0, 0x38C($s1)
    ctx->pc = 0x36b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_36b07c:
    // 0x36b07c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x36b07cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_36b080:
    // 0x36b080: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36b080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b084:
    // 0x36b084: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x36b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_36b088:
    // 0x36b088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b08c:
    // 0x36b08c: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x36b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_36b090:
    // 0x36b090: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36b090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b094:
    // 0x36b094: 0xc0ceb28  jal         func_33ACA0
label_36b098:
    if (ctx->pc == 0x36B098u) {
        ctx->pc = 0x36B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B094u;
        // 0x36b098: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B09Cu;
        goto label_36b09c;
    }
    ctx->pc = 0x36B094u;
    SET_GPR_U32(ctx, 31, 0x36B09Cu);
    ctx->pc = 0x36B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B094u;
    // 0x36b098: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36B094u, 0x36B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B09Cu;
label_36b09c:
    // 0x36b09c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b0a0:
    // 0x36b0a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36b0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b0a4:
    // 0x36b0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b0a8:
    // 0x36b0a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36b0ac:
    // 0x36b0ac: 0x40f809  jalr        $v0
label_36b0b0:
    if (ctx->pc == 0x36B0B0u) {
        ctx->pc = 0x36B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0ACu;
        // 0x36b0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B0B4u;
        goto label_36b0b4;
    }
    ctx->pc = 0x36B0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B0B4u);
        ctx->pc = 0x36B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0ACu;
        // 0x36b0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B0ACu, 0x36B0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B0B4u;
label_36b0b4:
    // 0x36b0b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b0b8:
    // 0x36b0b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b0bc:
    // 0x36b0bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b0c0:
    // 0x36b0c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36b0c4:
    // 0x36b0c4: 0x40f809  jalr        $v0
label_36b0c8:
    if (ctx->pc == 0x36B0C8u) {
        ctx->pc = 0x36B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0C4u;
        // 0x36b0c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B0CCu;
        goto label_36b0cc;
    }
    ctx->pc = 0x36B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B0CCu);
        ctx->pc = 0x36B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0C4u;
        // 0x36b0c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B0C4u, 0x36B0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B0CCu;
label_36b0cc:
    // 0x36b0cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b0d0:
    // 0x36b0d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36b0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36b0d4:
    // 0x36b0d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36b0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36b0d8:
    // 0x36b0d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36b0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36b0dc:
    // 0x36b0dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36b0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36b0e0:
    // 0x36b0e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36b0e4:
    // 0x36b0e4: 0x3e00008  jr          $ra
label_36b0e8:
    if (ctx->pc == 0x36B0E8u) {
        ctx->pc = 0x36B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0E4u;
        // 0x36b0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B0ECu;
        goto label_36b0ec;
    }
    ctx->pc = 0x36B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0E4u;
        // 0x36b0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B0ECu;
label_36b0ec:
    // 0x36b0ec: 0x0  nop
    ctx->pc = 0x36b0ecu;
    // NOP
    ctx->pc = 0x36b0f0u;
}
