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

// Function: func_0034E9B0
// Address: 0x34e9b0 - 0x34eb28
void func_0034E9B0_0x34e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E9B0_0x34e9b0");
#endif

    switch (ctx->pc) {
        case 0x34e9b0u: goto label_34e9b0;
        case 0x34e9b4u: goto label_34e9b4;
        case 0x34e9b8u: goto label_34e9b8;
        case 0x34e9bcu: goto label_34e9bc;
        case 0x34e9c0u: goto label_34e9c0;
        case 0x34e9c4u: goto label_34e9c4;
        case 0x34e9c8u: goto label_34e9c8;
        case 0x34e9ccu: goto label_34e9cc;
        case 0x34e9d0u: goto label_34e9d0;
        case 0x34e9d4u: goto label_34e9d4;
        case 0x34e9d8u: goto label_34e9d8;
        case 0x34e9dcu: goto label_34e9dc;
        case 0x34e9e0u: goto label_34e9e0;
        case 0x34e9e4u: goto label_34e9e4;
        case 0x34e9e8u: goto label_34e9e8;
        case 0x34e9ecu: goto label_34e9ec;
        case 0x34e9f0u: goto label_34e9f0;
        case 0x34e9f4u: goto label_34e9f4;
        case 0x34e9f8u: goto label_34e9f8;
        case 0x34e9fcu: goto label_34e9fc;
        case 0x34ea00u: goto label_34ea00;
        case 0x34ea04u: goto label_34ea04;
        case 0x34ea08u: goto label_34ea08;
        case 0x34ea0cu: goto label_34ea0c;
        case 0x34ea10u: goto label_34ea10;
        case 0x34ea14u: goto label_34ea14;
        case 0x34ea18u: goto label_34ea18;
        case 0x34ea1cu: goto label_34ea1c;
        case 0x34ea20u: goto label_34ea20;
        case 0x34ea24u: goto label_34ea24;
        case 0x34ea28u: goto label_34ea28;
        case 0x34ea2cu: goto label_34ea2c;
        case 0x34ea30u: goto label_34ea30;
        case 0x34ea34u: goto label_34ea34;
        case 0x34ea38u: goto label_34ea38;
        case 0x34ea3cu: goto label_34ea3c;
        case 0x34ea40u: goto label_34ea40;
        case 0x34ea44u: goto label_34ea44;
        case 0x34ea48u: goto label_34ea48;
        case 0x34ea4cu: goto label_34ea4c;
        case 0x34ea50u: goto label_34ea50;
        case 0x34ea54u: goto label_34ea54;
        case 0x34ea58u: goto label_34ea58;
        case 0x34ea5cu: goto label_34ea5c;
        case 0x34ea60u: goto label_34ea60;
        case 0x34ea64u: goto label_34ea64;
        case 0x34ea68u: goto label_34ea68;
        case 0x34ea6cu: goto label_34ea6c;
        case 0x34ea70u: goto label_34ea70;
        case 0x34ea74u: goto label_34ea74;
        case 0x34ea78u: goto label_34ea78;
        case 0x34ea7cu: goto label_34ea7c;
        case 0x34ea80u: goto label_34ea80;
        case 0x34ea84u: goto label_34ea84;
        case 0x34ea88u: goto label_34ea88;
        case 0x34ea8cu: goto label_34ea8c;
        case 0x34ea90u: goto label_34ea90;
        case 0x34ea94u: goto label_34ea94;
        case 0x34ea98u: goto label_34ea98;
        case 0x34ea9cu: goto label_34ea9c;
        case 0x34eaa0u: goto label_34eaa0;
        case 0x34eaa4u: goto label_34eaa4;
        case 0x34eaa8u: goto label_34eaa8;
        case 0x34eaacu: goto label_34eaac;
        case 0x34eab0u: goto label_34eab0;
        case 0x34eab4u: goto label_34eab4;
        case 0x34eab8u: goto label_34eab8;
        case 0x34eabcu: goto label_34eabc;
        case 0x34eac0u: goto label_34eac0;
        case 0x34eac4u: goto label_34eac4;
        case 0x34eac8u: goto label_34eac8;
        case 0x34eaccu: goto label_34eacc;
        case 0x34ead0u: goto label_34ead0;
        case 0x34ead4u: goto label_34ead4;
        case 0x34ead8u: goto label_34ead8;
        case 0x34eadcu: goto label_34eadc;
        case 0x34eae0u: goto label_34eae0;
        case 0x34eae4u: goto label_34eae4;
        case 0x34eae8u: goto label_34eae8;
        case 0x34eaecu: goto label_34eaec;
        case 0x34eaf0u: goto label_34eaf0;
        case 0x34eaf4u: goto label_34eaf4;
        case 0x34eaf8u: goto label_34eaf8;
        case 0x34eafcu: goto label_34eafc;
        case 0x34eb00u: goto label_34eb00;
        case 0x34eb04u: goto label_34eb04;
        case 0x34eb08u: goto label_34eb08;
        case 0x34eb0cu: goto label_34eb0c;
        case 0x34eb10u: goto label_34eb10;
        case 0x34eb14u: goto label_34eb14;
        case 0x34eb18u: goto label_34eb18;
        case 0x34eb1cu: goto label_34eb1c;
        case 0x34eb20u: goto label_34eb20;
        case 0x34eb24u: goto label_34eb24;
        default: break;
    }

    ctx->pc = 0x34e9b0u;

label_34e9b0:
    // 0x34e9b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x34e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_34e9b4:
    // 0x34e9b4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x34e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_34e9b8:
    // 0x34e9b8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x34e9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34e9bc:
    // 0x34e9bc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x34e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_34e9c0:
    // 0x34e9c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x34e9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_34e9c4:
    // 0x34e9c4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x34e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_34e9c8:
    // 0x34e9c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34e9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34e9cc:
    // 0x34e9cc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x34e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_34e9d0:
    // 0x34e9d0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34e9d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34e9d4:
    // 0x34e9d4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x34e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_34e9d8:
    // 0x34e9d8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x34e9d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34e9dc:
    // 0x34e9dc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x34e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_34e9e0:
    // 0x34e9e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x34e9e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34e9e4:
    // 0x34e9e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x34e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_34e9e8:
    // 0x34e9e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34e9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34e9ec:
    // 0x34e9ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x34e9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_34e9f0:
    // 0x34e9f0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x34e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_34e9f4:
    // 0x34e9f4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x34e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_34e9f8:
    // 0x34e9f8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x34e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_34e9fc:
    // 0x34e9fc: 0x8e511f7c  lw          $s1, 0x1F7C($s2)
    ctx->pc = 0x34e9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8060)));
label_34ea00:
    // 0x34ea00: 0xc0da318  jal         func_368C60
label_34ea04:
    if (ctx->pc == 0x34EA04u) {
        ctx->pc = 0x34EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA00u;
        // 0x34ea04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA08u;
        goto label_34ea08;
    }
    ctx->pc = 0x34EA00u;
    SET_GPR_U32(ctx, 31, 0x34EA08u);
    ctx->pc = 0x34EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA00u;
    // 0x34ea04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368C60u, 0x34EA00u, 0x34EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA08u;
label_34ea08:
    // 0x34ea08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_34ea0c:
    if (ctx->pc == 0x34EA0Cu) {
        ctx->pc = 0x34EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA08u;
        // 0x34ea0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA10u;
        goto label_34ea10;
    }
    ctx->pc = 0x34EA08u;
    {
        const bool branch_taken_0x34ea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA08u;
        // 0x34ea0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea08) {
            ctx->pc = 0x34EA20u;
            goto label_34ea20;
        }
    }
    ctx->pc = 0x34EA10u;
label_34ea10:
    // 0x34ea10: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_34ea14:
    // 0x34ea14: 0xc0d375c  jal         func_34DD70
label_34ea18:
    if (ctx->pc == 0x34EA18u) {
        ctx->pc = 0x34EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA14u;
        // 0x34ea18: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA1Cu;
        goto label_34ea1c;
    }
    ctx->pc = 0x34EA14u;
    SET_GPR_U32(ctx, 31, 0x34EA1Cu);
    ctx->pc = 0x34EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA14u;
    // 0x34ea18: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34EA14u, 0x34EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA1Cu;
label_34ea1c:
    // 0x34ea1c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x34ea1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ea20:
    // 0x34ea20: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x34ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_34ea24:
    // 0x34ea24: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x34ea24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_34ea28:
    // 0x34ea28: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x34ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_34ea2c:
    // 0x34ea2c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x34ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_34ea30:
    // 0x34ea30: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
label_34ea34:
    if (ctx->pc == 0x34EA34u) {
        ctx->pc = 0x34EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA30u;
        // 0x34ea34: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA38u;
        goto label_34ea38;
    }
    ctx->pc = 0x34EA30u;
    {
        const bool branch_taken_0x34ea30 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x34EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA30u;
        // 0x34ea34: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea30) {
            ctx->pc = 0x34EA50u;
            goto label_34ea50;
        }
    }
    ctx->pc = 0x34EA38u;
label_34ea38:
    // 0x34ea38: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34ea38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_34ea3c:
    // 0x34ea3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34ea40:
    // 0x34ea40: 0xc0d375c  jal         func_34DD70
label_34ea44:
    if (ctx->pc == 0x34EA44u) {
        ctx->pc = 0x34EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA40u;
        // 0x34ea44: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA48u;
        goto label_34ea48;
    }
    ctx->pc = 0x34EA40u;
    SET_GPR_U32(ctx, 31, 0x34EA48u);
    ctx->pc = 0x34EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA40u;
    // 0x34ea44: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34EA40u, 0x34EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA48u;
label_34ea48:
    // 0x34ea48: 0x1000002d  b           . + 4 + (0x2D << 2)
label_34ea4c:
    if (ctx->pc == 0x34EA4Cu) {
        ctx->pc = 0x34EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA48u;
        // 0x34ea4c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA50u;
        goto label_34ea50;
    }
    ctx->pc = 0x34EA48u;
    {
        const bool branch_taken_0x34ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA48u;
        // 0x34ea4c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea48) {
            ctx->pc = 0x34EB00u;
            goto label_34eb00;
        }
    }
    ctx->pc = 0x34EA50u;
label_34ea50:
    // 0x34ea50: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_34ea54:
    if (ctx->pc == 0x34EA54u) {
        ctx->pc = 0x34EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA50u;
        // 0x34ea54: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA58u;
        goto label_34ea58;
    }
    ctx->pc = 0x34EA50u;
    {
        const bool branch_taken_0x34ea50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ea50) {
            ctx->pc = 0x34EA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EA50u;
            // 0x34ea54: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EA70u;
            goto label_34ea70;
        }
    }
    ctx->pc = 0x34EA58u;
label_34ea58:
    // 0x34ea58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ea5c:
    // 0x34ea5c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x34ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_34ea60:
    // 0x34ea60: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x34ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_34ea64:
    // 0x34ea64: 0x10000025  b           . + 4 + (0x25 << 2)
label_34ea68:
    if (ctx->pc == 0x34EA68u) {
        ctx->pc = 0x34EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA64u;
        // 0x34ea68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA6Cu;
        goto label_34ea6c;
    }
    ctx->pc = 0x34EA64u;
    {
        const bool branch_taken_0x34ea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA64u;
        // 0x34ea68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea64) {
            ctx->pc = 0x34EAFCu;
            goto label_34eafc;
        }
    }
    ctx->pc = 0x34EA6Cu;
label_34ea6c:
    // 0x34ea6c: 0x0  nop
    ctx->pc = 0x34ea6cu;
    // NOP
label_34ea70:
    // 0x34ea70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_34ea74:
    if (ctx->pc == 0x34EA74u) {
        ctx->pc = 0x34EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA70u;
        // 0x34ea74: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA78u;
        goto label_34ea78;
    }
    ctx->pc = 0x34EA70u;
    {
        const bool branch_taken_0x34ea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ea70) {
            ctx->pc = 0x34EA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EA70u;
            // 0x34ea74: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EA90u;
            goto label_34ea90;
        }
    }
    ctx->pc = 0x34EA78u;
label_34ea78:
    // 0x34ea78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34ea7c:
    // 0x34ea7c: 0xc0d3d96  jal         func_34F658
label_34ea80:
    if (ctx->pc == 0x34EA80u) {
        ctx->pc = 0x34EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA7Cu;
        // 0x34ea80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA84u;
        goto label_34ea84;
    }
    ctx->pc = 0x34EA7Cu;
    SET_GPR_U32(ctx, 31, 0x34EA84u);
    ctx->pc = 0x34EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA7Cu;
    // 0x34ea80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F658u, 0x34EA7Cu, 0x34EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA84u;
label_34ea84:
    // 0x34ea84: 0x1000001d  b           . + 4 + (0x1D << 2)
label_34ea88:
    if (ctx->pc == 0x34EA88u) {
        ctx->pc = 0x34EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA84u;
        // 0x34ea88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EA8Cu;
        goto label_34ea8c;
    }
    ctx->pc = 0x34EA84u;
    {
        const bool branch_taken_0x34ea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA84u;
        // 0x34ea88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea84) {
            ctx->pc = 0x34EAFCu;
            goto label_34eafc;
        }
    }
    ctx->pc = 0x34EA8Cu;
label_34ea8c:
    // 0x34ea8c: 0x0  nop
    ctx->pc = 0x34ea8cu;
    // NOP
label_34ea90:
    // 0x34ea90: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_34ea94:
    // 0x34ea94: 0x8c44fd50  lw          $a0, -0x2B0($v0)
    ctx->pc = 0x34ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966608)));
label_34ea98:
    // 0x34ea98: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_34ea9c:
    if (ctx->pc == 0x34EA9Cu) {
        ctx->pc = 0x34EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA98u;
        // 0x34ea9c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EAA0u;
        goto label_34eaa0;
    }
    ctx->pc = 0x34EA98u;
    {
        const bool branch_taken_0x34ea98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ea98) {
            ctx->pc = 0x34EA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EA98u;
            // 0x34ea9c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EAC0u;
            goto label_34eac0;
        }
    }
    ctx->pc = 0x34EAA0u;
label_34eaa0:
    // 0x34eaa0: 0x8e260154  lw          $a2, 0x154($s1)
    ctx->pc = 0x34eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_34eaa4:
    // 0x34eaa4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x34eaa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34eaa8:
    // 0x34eaa8: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x34eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_34eaac:
    // 0x34eaac: 0xc0d3aca  jal         func_34EB28
label_34eab0:
    if (ctx->pc == 0x34EAB0u) {
        ctx->pc = 0x34EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAACu;
        // 0x34eab0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EAB4u;
        goto label_34eab4;
    }
    ctx->pc = 0x34EAACu;
    SET_GPR_U32(ctx, 31, 0x34EAB4u);
    ctx->pc = 0x34EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EAACu;
    // 0x34eab0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EB28u, 0x34EAACu, 0x34EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAB4u;
label_34eab4:
    // 0x34eab4: 0x1000000a  b           . + 4 + (0xA << 2)
label_34eab8:
    if (ctx->pc == 0x34EAB8u) {
        ctx->pc = 0x34EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAB4u;
        // 0x34eab8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EABCu;
        goto label_34eabc;
    }
    ctx->pc = 0x34EAB4u;
    {
        const bool branch_taken_0x34eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAB4u;
        // 0x34eab8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eab4) {
            ctx->pc = 0x34EAE0u;
            goto label_34eae0;
        }
    }
    ctx->pc = 0x34EABCu;
label_34eabc:
    // 0x34eabc: 0x0  nop
    ctx->pc = 0x34eabcu;
    // NOP
label_34eac0:
    // 0x34eac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34eac4:
    // 0x34eac4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34eac8:
    // 0x34eac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34eacc:
    // 0x34eacc: 0x8c429680  lw          $v0, -0x6980($v0)
    ctx->pc = 0x34eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940288)));
label_34ead0:
    // 0x34ead0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x34ead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34ead4:
    // 0x34ead4: 0x40f809  jalr        $v0
label_34ead8:
    if (ctx->pc == 0x34EAD8u) {
        ctx->pc = 0x34EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAD4u;
        // 0x34ead8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EADCu;
        goto label_34eadc;
    }
    ctx->pc = 0x34EAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34EADCu);
        ctx->pc = 0x34EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAD4u;
        // 0x34ead8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EAD4u, 0x34EADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34EADCu;
label_34eadc:
    // 0x34eadc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x34eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_34eae0:
    // 0x34eae0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x34eae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34eae4:
    // 0x34eae4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_34eae8:
    if (ctx->pc == 0x34EAE8u) {
        ctx->pc = 0x34EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAE4u;
        // 0x34eae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EAECu;
        goto label_34eaec;
    }
    ctx->pc = 0x34EAE4u;
    {
        const bool branch_taken_0x34eae4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAE4u;
        // 0x34eae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eae4) {
            ctx->pc = 0x34EAF8u;
            goto label_34eaf8;
        }
    }
    ctx->pc = 0x34EAECu;
label_34eaec:
    // 0x34eaec: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_34eaf0:
    if (ctx->pc == 0x34EAF0u) {
        ctx->pc = 0x34EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAECu;
        // 0x34eaf0: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EAF4u;
        goto label_34eaf4;
    }
    ctx->pc = 0x34EAECu;
    {
        const bool branch_taken_0x34eaec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x34eaec) {
            ctx->pc = 0x34EAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EAECu;
            // 0x34eaf0: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EAF8u;
            goto label_34eaf8;
        }
    }
    ctx->pc = 0x34EAF4u;
label_34eaf4:
    // 0x34eaf4: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x34eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_34eaf8:
    // 0x34eaf8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x34eaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34eafc:
    // 0x34eafc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x34eafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34eb00:
    // 0x34eb00: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x34eb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34eb04:
    // 0x34eb04: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x34eb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34eb08:
    // 0x34eb08: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x34eb08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34eb0c:
    // 0x34eb0c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x34eb0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34eb10:
    // 0x34eb10: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x34eb10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34eb14:
    // 0x34eb14: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x34eb14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34eb18:
    // 0x34eb18: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x34eb18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_34eb1c:
    // 0x34eb1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34eb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_34eb20:
    // 0x34eb20: 0x3e00008  jr          $ra
label_34eb24:
    if (ctx->pc == 0x34EB24u) {
        ctx->pc = 0x34EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB20u;
        // 0x34eb24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EB28u;
        goto label_fallthrough_0x34eb20;
    }
    ctx->pc = 0x34EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB20u;
        // 0x34eb24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34eb20:
    ctx->pc = 0x34EB28u;
}
