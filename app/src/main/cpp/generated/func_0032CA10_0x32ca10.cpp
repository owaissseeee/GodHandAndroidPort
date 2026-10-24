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

// Function: func_0032CA10
// Address: 0x32ca10 - 0x32cb90
void func_0032CA10_0x32ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CA10_0x32ca10");
#endif

    switch (ctx->pc) {
        case 0x32ca10u: goto label_32ca10;
        case 0x32ca14u: goto label_32ca14;
        case 0x32ca18u: goto label_32ca18;
        case 0x32ca1cu: goto label_32ca1c;
        case 0x32ca20u: goto label_32ca20;
        case 0x32ca24u: goto label_32ca24;
        case 0x32ca28u: goto label_32ca28;
        case 0x32ca2cu: goto label_32ca2c;
        case 0x32ca30u: goto label_32ca30;
        case 0x32ca34u: goto label_32ca34;
        case 0x32ca38u: goto label_32ca38;
        case 0x32ca3cu: goto label_32ca3c;
        case 0x32ca40u: goto label_32ca40;
        case 0x32ca44u: goto label_32ca44;
        case 0x32ca48u: goto label_32ca48;
        case 0x32ca4cu: goto label_32ca4c;
        case 0x32ca50u: goto label_32ca50;
        case 0x32ca54u: goto label_32ca54;
        case 0x32ca58u: goto label_32ca58;
        case 0x32ca5cu: goto label_32ca5c;
        case 0x32ca60u: goto label_32ca60;
        case 0x32ca64u: goto label_32ca64;
        case 0x32ca68u: goto label_32ca68;
        case 0x32ca6cu: goto label_32ca6c;
        case 0x32ca70u: goto label_32ca70;
        case 0x32ca74u: goto label_32ca74;
        case 0x32ca78u: goto label_32ca78;
        case 0x32ca7cu: goto label_32ca7c;
        case 0x32ca80u: goto label_32ca80;
        case 0x32ca84u: goto label_32ca84;
        case 0x32ca88u: goto label_32ca88;
        case 0x32ca8cu: goto label_32ca8c;
        case 0x32ca90u: goto label_32ca90;
        case 0x32ca94u: goto label_32ca94;
        case 0x32ca98u: goto label_32ca98;
        case 0x32ca9cu: goto label_32ca9c;
        case 0x32caa0u: goto label_32caa0;
        case 0x32caa4u: goto label_32caa4;
        case 0x32caa8u: goto label_32caa8;
        case 0x32caacu: goto label_32caac;
        case 0x32cab0u: goto label_32cab0;
        case 0x32cab4u: goto label_32cab4;
        case 0x32cab8u: goto label_32cab8;
        case 0x32cabcu: goto label_32cabc;
        case 0x32cac0u: goto label_32cac0;
        case 0x32cac4u: goto label_32cac4;
        case 0x32cac8u: goto label_32cac8;
        case 0x32caccu: goto label_32cacc;
        case 0x32cad0u: goto label_32cad0;
        case 0x32cad4u: goto label_32cad4;
        case 0x32cad8u: goto label_32cad8;
        case 0x32cadcu: goto label_32cadc;
        case 0x32cae0u: goto label_32cae0;
        case 0x32cae4u: goto label_32cae4;
        case 0x32cae8u: goto label_32cae8;
        case 0x32caecu: goto label_32caec;
        case 0x32caf0u: goto label_32caf0;
        case 0x32caf4u: goto label_32caf4;
        case 0x32caf8u: goto label_32caf8;
        case 0x32cafcu: goto label_32cafc;
        case 0x32cb00u: goto label_32cb00;
        case 0x32cb04u: goto label_32cb04;
        case 0x32cb08u: goto label_32cb08;
        case 0x32cb0cu: goto label_32cb0c;
        case 0x32cb10u: goto label_32cb10;
        case 0x32cb14u: goto label_32cb14;
        case 0x32cb18u: goto label_32cb18;
        case 0x32cb1cu: goto label_32cb1c;
        case 0x32cb20u: goto label_32cb20;
        case 0x32cb24u: goto label_32cb24;
        case 0x32cb28u: goto label_32cb28;
        case 0x32cb2cu: goto label_32cb2c;
        case 0x32cb30u: goto label_32cb30;
        case 0x32cb34u: goto label_32cb34;
        case 0x32cb38u: goto label_32cb38;
        case 0x32cb3cu: goto label_32cb3c;
        case 0x32cb40u: goto label_32cb40;
        case 0x32cb44u: goto label_32cb44;
        case 0x32cb48u: goto label_32cb48;
        case 0x32cb4cu: goto label_32cb4c;
        case 0x32cb50u: goto label_32cb50;
        case 0x32cb54u: goto label_32cb54;
        case 0x32cb58u: goto label_32cb58;
        case 0x32cb5cu: goto label_32cb5c;
        case 0x32cb60u: goto label_32cb60;
        case 0x32cb64u: goto label_32cb64;
        case 0x32cb68u: goto label_32cb68;
        case 0x32cb6cu: goto label_32cb6c;
        case 0x32cb70u: goto label_32cb70;
        case 0x32cb74u: goto label_32cb74;
        case 0x32cb78u: goto label_32cb78;
        case 0x32cb7cu: goto label_32cb7c;
        case 0x32cb80u: goto label_32cb80;
        case 0x32cb84u: goto label_32cb84;
        case 0x32cb88u: goto label_32cb88;
        case 0x32cb8cu: goto label_32cb8c;
        default: break;
    }

    ctx->pc = 0x32ca10u;

label_32ca10:
    // 0x32ca10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32ca14:
    // 0x32ca14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32ca18:
    // 0x32ca18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32ca1c:
    // 0x32ca1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ca1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ca20:
    // 0x32ca20: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32ca24:
    // 0x32ca24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32ca28:
    // 0x32ca28: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x32ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_32ca2c:
    // 0x32ca2c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x32ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_32ca30:
    // 0x32ca30: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x32ca30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32ca34:
    // 0x32ca34: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x32ca34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32ca38:
    // 0x32ca38: 0xc0c98d6  jal         func_326358
label_32ca3c:
    if (ctx->pc == 0x32CA3Cu) {
        ctx->pc = 0x32CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA38u;
        // 0x32ca3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA40u;
        goto label_32ca40;
    }
    ctx->pc = 0x32CA38u;
    SET_GPR_U32(ctx, 31, 0x32CA40u);
    ctx->pc = 0x32CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA38u;
    // 0x32ca3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326358u, 0x32CA38u, 0x32CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA40u;
label_32ca40:
    // 0x32ca40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ca44:
    // 0x32ca44: 0xc0c98dc  jal         func_326370
label_32ca48:
    if (ctx->pc == 0x32CA48u) {
        ctx->pc = 0x32CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA44u;
        // 0x32ca48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA4Cu;
        goto label_32ca4c;
    }
    ctx->pc = 0x32CA44u;
    SET_GPR_U32(ctx, 31, 0x32CA4Cu);
    ctx->pc = 0x32CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA44u;
    // 0x32ca48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326370u, 0x32CA44u, 0x32CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA4Cu;
label_32ca4c:
    // 0x32ca4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32ca4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ca50:
    // 0x32ca50: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x32ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_32ca54:
    // 0x32ca54: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x32ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_32ca58:
    // 0x32ca58: 0x28432001  slti        $v1, $v0, 0x2001
    ctx->pc = 0x32ca58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
label_32ca5c:
    // 0x32ca5c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x32ca5cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_32ca60:
    // 0x32ca60: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x32ca60u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32ca64:
    // 0x32ca64: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_32ca68:
    if (ctx->pc == 0x32CA68u) {
        ctx->pc = 0x32CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA64u;
        // 0x32ca68: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA6Cu;
        goto label_32ca6c;
    }
    ctx->pc = 0x32CA64u;
    {
        const bool branch_taken_0x32ca64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca64) {
            ctx->pc = 0x32CA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CA64u;
            // 0x32ca68: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CA98u;
            goto label_32ca98;
        }
    }
    ctx->pc = 0x32CA6Cu;
label_32ca6c:
    // 0x32ca6c: 0xc0c9df4  jal         func_3277D0
label_32ca70:
    if (ctx->pc == 0x32CA70u) {
        ctx->pc = 0x32CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA6Cu;
        // 0x32ca70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA74u;
        goto label_32ca74;
    }
    ctx->pc = 0x32CA6Cu;
    SET_GPR_U32(ctx, 31, 0x32CA74u);
    ctx->pc = 0x32CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA6Cu;
    // 0x32ca70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277D0u, 0x32CA6Cu, 0x32CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA74u;
label_32ca74:
    // 0x32ca74: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x32ca74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_32ca78:
    // 0x32ca78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_32ca7c:
    if (ctx->pc == 0x32CA7Cu) {
        ctx->pc = 0x32CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA78u;
        // 0x32ca7c: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA80u;
        goto label_32ca80;
    }
    ctx->pc = 0x32CA78u;
    {
        const bool branch_taken_0x32ca78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca78) {
            ctx->pc = 0x32CA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CA78u;
            // 0x32ca7c: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CA98u;
            goto label_32ca98;
        }
    }
    ctx->pc = 0x32CA80u;
label_32ca80:
    // 0x32ca80: 0xc0c99de  jal         func_326778
label_32ca84:
    if (ctx->pc == 0x32CA84u) {
        ctx->pc = 0x32CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA80u;
        // 0x32ca84: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA88u;
        goto label_32ca88;
    }
    ctx->pc = 0x32CA80u;
    SET_GPR_U32(ctx, 31, 0x32CA88u);
    ctx->pc = 0x32CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA80u;
    // 0x32ca84: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326778u, 0x32CA80u, 0x32CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA88u;
label_32ca88:
    // 0x32ca88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32ca8c:
    // 0x32ca8c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_32ca90:
    if (ctx->pc == 0x32CA90u) {
        ctx->pc = 0x32CA94u;
        goto label_32ca94;
    }
    ctx->pc = 0x32CA8Cu;
    {
        const bool branch_taken_0x32ca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32ca8c) {
            ctx->pc = 0x32CADCu;
            goto label_32cadc;
        }
    }
    ctx->pc = 0x32CA94u;
label_32ca94:
    // 0x32ca94: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x32ca94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_32ca98:
    // 0x32ca98: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_32ca9c:
    if (ctx->pc == 0x32CA9Cu) {
        ctx->pc = 0x32CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA98u;
        // 0x32ca9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CAA0u;
        goto label_32caa0;
    }
    ctx->pc = 0x32CA98u;
    {
        const bool branch_taken_0x32ca98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA98u;
        // 0x32ca9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ca98) {
            ctx->pc = 0x32CAD8u;
            goto label_32cad8;
        }
    }
    ctx->pc = 0x32CAA0u;
label_32caa0:
    // 0x32caa0: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x32caa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_32caa4:
    // 0x32caa4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_32caa8:
    if (ctx->pc == 0x32CAA8u) {
        ctx->pc = 0x32CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAA4u;
        // 0x32caa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CAACu;
        goto label_32caac;
    }
    ctx->pc = 0x32CAA4u;
    {
        const bool branch_taken_0x32caa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32caa4) {
            ctx->pc = 0x32CAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CAA4u;
            // 0x32caa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CAD0u;
            goto label_32cad0;
        }
    }
    ctx->pc = 0x32CAACu;
label_32caac:
    // 0x32caac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32cab0:
    // 0x32cab0: 0xc0c98ce  jal         func_326338
label_32cab4:
    if (ctx->pc == 0x32CAB4u) {
        ctx->pc = 0x32CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAB0u;
        // 0x32cab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CAB8u;
        goto label_32cab8;
    }
    ctx->pc = 0x32CAB0u;
    SET_GPR_U32(ctx, 31, 0x32CAB8u);
    ctx->pc = 0x32CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CAB0u;
    // 0x32cab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326338u, 0x32CAB0u, 0x32CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CAB8u;
label_32cab8:
    // 0x32cab8: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x32cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_32cabc:
    // 0x32cabc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x32cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_32cac0:
    // 0x32cac0: 0x24427418  addiu       $v0, $v0, 0x7418
    ctx->pc = 0x32cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29720));
label_32cac4:
    // 0x32cac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32cac8:
    // 0x32cac8: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x32cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_32cacc:
    // 0x32cacc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32cad0:
    // 0x32cad0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x32cad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_32cad4:
    // 0x32cad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cad8:
    // 0x32cad8: 0xa2220071  sb          $v0, 0x71($s1)
    ctx->pc = 0x32cad8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_32cadc:
    // 0x32cadc: 0xc0c99de  jal         func_326778
label_32cae0:
    if (ctx->pc == 0x32CAE0u) {
        ctx->pc = 0x32CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CADCu;
        // 0x32cae0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CAE4u;
        goto label_32cae4;
    }
    ctx->pc = 0x32CADCu;
    SET_GPR_U32(ctx, 31, 0x32CAE4u);
    ctx->pc = 0x32CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CADCu;
    // 0x32cae0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326778u, 0x32CADCu, 0x32CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CAE4u;
label_32cae4:
    // 0x32cae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32cae8:
    // 0x32cae8: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_32caec:
    if (ctx->pc == 0x32CAECu) {
        ctx->pc = 0x32CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAE8u;
        // 0x32caec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CAF0u;
        goto label_32caf0;
    }
    ctx->pc = 0x32CAE8u;
    {
        const bool branch_taken_0x32cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAE8u;
        // 0x32caec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cae8) {
            ctx->pc = 0x32CB70u;
            goto label_32cb70;
        }
    }
    ctx->pc = 0x32CAF0u;
label_32caf0:
    // 0x32caf0: 0xc0ca96e  jal         func_32A5B8
label_32caf4:
    if (ctx->pc == 0x32CAF4u) {
        ctx->pc = 0x32CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CAF0u;
        // 0x32caf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CAF8u;
        goto label_32caf8;
    }
    ctx->pc = 0x32CAF0u;
    SET_GPR_U32(ctx, 31, 0x32CAF8u);
    ctx->pc = 0x32CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CAF0u;
    // 0x32caf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5B8u, 0x32CAF0u, 0x32CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CAF8u;
label_32caf8:
    // 0x32caf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32caf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32cafc:
    // 0x32cafc: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x32cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_32cb00:
    // 0x32cb00: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x32cb00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_32cb04:
    // 0x32cb04: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_32cb08:
    if (ctx->pc == 0x32CB08u) {
        ctx->pc = 0x32CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB04u;
        // 0x32cb08: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CB0Cu;
        goto label_32cb0c;
    }
    ctx->pc = 0x32CB04u;
    {
        const bool branch_taken_0x32cb04 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x32CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB04u;
        // 0x32cb08: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb04) {
            ctx->pc = 0x32CB6Cu;
            goto label_32cb6c;
        }
    }
    ctx->pc = 0x32CB0Cu;
label_32cb0c:
    // 0x32cb0c: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x32cb0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_32cb10:
    // 0x32cb10: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x32cb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32cb14:
    // 0x32cb14: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x32cb14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32cb18:
    // 0x32cb18: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x32cb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_32cb1c:
    // 0x32cb1c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32cb1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32cb20:
    // 0x32cb20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32cb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cb24:
    // 0x32cb24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32cb28:
    // 0x32cb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32cb2c:
    // 0x32cb2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32cb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32cb30:
    // 0x32cb30: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32cb34:
    // 0x32cb34: 0x40f809  jalr        $v0
label_32cb38:
    if (ctx->pc == 0x32CB38u) {
        ctx->pc = 0x32CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB34u;
        // 0x32cb38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CB3Cu;
        goto label_32cb3c;
    }
    ctx->pc = 0x32CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CB3Cu);
        ctx->pc = 0x32CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB34u;
        // 0x32cb38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CB34u, 0x32CB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CB3Cu;
label_32cb3c:
    // 0x32cb3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cb40:
    // 0x32cb40: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32cb44:
    // 0x32cb44: 0xc0e94bc  jal         func_3A52F0
label_32cb48:
    if (ctx->pc == 0x32CB48u) {
        ctx->pc = 0x32CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB44u;
        // 0x32cb48: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CB4Cu;
        goto label_32cb4c;
    }
    ctx->pc = 0x32CB44u;
    SET_GPR_U32(ctx, 31, 0x32CB4Cu);
    ctx->pc = 0x32CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB44u;
    // 0x32cb48: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32CB44u, 0x32CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB4Cu;
label_32cb4c:
    // 0x32cb4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32cb50:
    // 0x32cb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32cb54:
    // 0x32cb54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cb58:
    // 0x32cb58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32cb5c:
    // 0x32cb5c: 0x40f809  jalr        $v0
label_32cb60:
    if (ctx->pc == 0x32CB60u) {
        ctx->pc = 0x32CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB5Cu;
        // 0x32cb60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CB64u;
        goto label_32cb64;
    }
    ctx->pc = 0x32CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32CB64u);
        ctx->pc = 0x32CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB5Cu;
        // 0x32cb60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CB5Cu, 0x32CB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32CB64u;
label_32cb64:
    // 0x32cb64: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_32cb68:
    if (ctx->pc == 0x32CB68u) {
        ctx->pc = 0x32CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB64u;
        // 0x32cb68: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CB6Cu;
        goto label_32cb6c;
    }
    ctx->pc = 0x32CB64u;
    {
        const bool branch_taken_0x32cb64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cb64) {
            ctx->pc = 0x32CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CB64u;
            // 0x32cb68: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cb18;
        }
    }
    ctx->pc = 0x32CB6Cu;
label_32cb6c:
    // 0x32cb6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32cb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32cb70:
    // 0x32cb70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32cb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32cb74:
    // 0x32cb74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32cb74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32cb78:
    // 0x32cb78: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32cb78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32cb7c:
    // 0x32cb7c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32cb7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32cb80:
    // 0x32cb80: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32cb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32cb84:
    // 0x32cb84: 0x3e00008  jr          $ra
label_32cb88:
    if (ctx->pc == 0x32CB88u) {
        ctx->pc = 0x32CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB84u;
        // 0x32cb88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CB8Cu;
        goto label_32cb8c;
    }
    ctx->pc = 0x32CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB84u;
        // 0x32cb88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CB8Cu;
label_32cb8c:
    // 0x32cb8c: 0x0  nop
    ctx->pc = 0x32cb8cu;
    // NOP
    ctx->pc = 0x32cb90u;
}
