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

// Function: _IO_default_setbuf
// Address: 0x38cb28 - 0x38cbf0
void ps2__IO_default_setbuf_0x38cb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_default_setbuf_0x38cb28");
#endif

    switch (ctx->pc) {
        case 0x38cb28u: goto label_38cb28;
        case 0x38cb2cu: goto label_38cb2c;
        case 0x38cb30u: goto label_38cb30;
        case 0x38cb34u: goto label_38cb34;
        case 0x38cb38u: goto label_38cb38;
        case 0x38cb3cu: goto label_38cb3c;
        case 0x38cb40u: goto label_38cb40;
        case 0x38cb44u: goto label_38cb44;
        case 0x38cb48u: goto label_38cb48;
        case 0x38cb4cu: goto label_38cb4c;
        case 0x38cb50u: goto label_38cb50;
        case 0x38cb54u: goto label_38cb54;
        case 0x38cb58u: goto label_38cb58;
        case 0x38cb5cu: goto label_38cb5c;
        case 0x38cb60u: goto label_38cb60;
        case 0x38cb64u: goto label_38cb64;
        case 0x38cb68u: goto label_38cb68;
        case 0x38cb6cu: goto label_38cb6c;
        case 0x38cb70u: goto label_38cb70;
        case 0x38cb74u: goto label_38cb74;
        case 0x38cb78u: goto label_38cb78;
        case 0x38cb7cu: goto label_38cb7c;
        case 0x38cb80u: goto label_38cb80;
        case 0x38cb84u: goto label_38cb84;
        case 0x38cb88u: goto label_38cb88;
        case 0x38cb8cu: goto label_38cb8c;
        case 0x38cb90u: goto label_38cb90;
        case 0x38cb94u: goto label_38cb94;
        case 0x38cb98u: goto label_38cb98;
        case 0x38cb9cu: goto label_38cb9c;
        case 0x38cba0u: goto label_38cba0;
        case 0x38cba4u: goto label_38cba4;
        case 0x38cba8u: goto label_38cba8;
        case 0x38cbacu: goto label_38cbac;
        case 0x38cbb0u: goto label_38cbb0;
        case 0x38cbb4u: goto label_38cbb4;
        case 0x38cbb8u: goto label_38cbb8;
        case 0x38cbbcu: goto label_38cbbc;
        case 0x38cbc0u: goto label_38cbc0;
        case 0x38cbc4u: goto label_38cbc4;
        case 0x38cbc8u: goto label_38cbc8;
        case 0x38cbccu: goto label_38cbcc;
        case 0x38cbd0u: goto label_38cbd0;
        case 0x38cbd4u: goto label_38cbd4;
        case 0x38cbd8u: goto label_38cbd8;
        case 0x38cbdcu: goto label_38cbdc;
        case 0x38cbe0u: goto label_38cbe0;
        case 0x38cbe4u: goto label_38cbe4;
        case 0x38cbe8u: goto label_38cbe8;
        case 0x38cbecu: goto label_38cbec;
        default: break;
    }

    ctx->pc = 0x38cb28u;

label_38cb28:
    // 0x38cb28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38cb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38cb2c:
    // 0x38cb2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38cb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_38cb30:
    // 0x38cb30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38cb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38cb34:
    // 0x38cb34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38cb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38cb38:
    // 0x38cb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38cb3c:
    // 0x38cb3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38cb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38cb40:
    // 0x38cb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38cb44:
    // 0x38cb44: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38cb48:
    // 0x38cb48: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x38cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_38cb4c:
    // 0x38cb4c: 0x40f809  jalr        $v0
label_38cb50:
    if (ctx->pc == 0x38CB50u) {
        ctx->pc = 0x38CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB4Cu;
        // 0x38cb50: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB54u;
        goto label_38cb54;
    }
    ctx->pc = 0x38CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CB54u);
        ctx->pc = 0x38CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB4Cu;
        // 0x38cb50: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB4Cu, 0x38CB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CB54u;
label_38cb54:
    // 0x38cb54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38cb58:
    // 0x38cb58: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_38cb5c:
    if (ctx->pc == 0x38CB5Cu) {
        ctx->pc = 0x38CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB58u;
        // 0x38cb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB60u;
        goto label_38cb60;
    }
    ctx->pc = 0x38CB58u;
    {
        const bool branch_taken_0x38cb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB58u;
        // 0x38cb5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb58) {
            ctx->pc = 0x38CBD8u;
            goto label_38cbd8;
        }
    }
    ctx->pc = 0x38CB60u;
label_38cb60:
    // 0x38cb60: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_38cb64:
    if (ctx->pc == 0x38CB64u) {
        ctx->pc = 0x38CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB60u;
        // 0x38cb64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB68u;
        goto label_38cb68;
    }
    ctx->pc = 0x38CB60u;
    {
        const bool branch_taken_0x38cb60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB60u;
        // 0x38cb64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb60) {
            ctx->pc = 0x38CB70u;
            goto label_38cb70;
        }
    }
    ctx->pc = 0x38CB68u;
label_38cb68:
    // 0x38cb68: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_38cb6c:
    if (ctx->pc == 0x38CB6Cu) {
        ctx->pc = 0x38CB70u;
        goto label_38cb70;
    }
    ctx->pc = 0x38CB68u;
    {
        const bool branch_taken_0x38cb68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cb68) {
            ctx->pc = 0x38CB94u;
            goto label_38cb94;
        }
    }
    ctx->pc = 0x38CB70u;
label_38cb70:
    // 0x38cb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cb74:
    // 0x38cb74: 0x2605004b  addiu       $a1, $s0, 0x4B
    ctx->pc = 0x38cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_38cb78:
    // 0x38cb78: 0x2606004c  addiu       $a2, $s0, 0x4C
    ctx->pc = 0x38cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_38cb7c:
    // 0x38cb7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_38cb80:
    // 0x38cb80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38cb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb84:
    // 0x38cb84: 0xc0e31da  jal         func_38C768
label_38cb88:
    if (ctx->pc == 0x38CB88u) {
        ctx->pc = 0x38CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB84u;
        // 0x38cb88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB8Cu;
        goto label_38cb8c;
    }
    ctx->pc = 0x38CB84u;
    SET_GPR_U32(ctx, 31, 0x38CB8Cu);
    ctx->pc = 0x38CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB84u;
    // 0x38cb88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C768u, 0x38CB84u, 0x38CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB8Cu;
label_38cb8c:
    // 0x38cb8c: 0x1000000c  b           . + 4 + (0xC << 2)
label_38cb90:
    if (ctx->pc == 0x38CB90u) {
        ctx->pc = 0x38CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB8Cu;
        // 0x38cb90: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB94u;
        goto label_38cb94;
    }
    ctx->pc = 0x38CB8Cu;
    {
        const bool branch_taken_0x38cb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB8Cu;
        // 0x38cb90: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb8c) {
            ctx->pc = 0x38CBC0u;
            goto label_38cbc0;
        }
    }
    ctx->pc = 0x38CB94u;
label_38cb94:
    // 0x38cb94: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x38cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_38cb98:
    // 0x38cb98: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x38cb98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_38cb9c:
    // 0x38cb9c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38cb9cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_38cba0:
    // 0x38cba0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38cba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38cba4:
    // 0x38cba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38cba8:
    // 0x38cba8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x38cba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_38cbac:
    // 0x38cbac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38cbb0:
    // 0x38cbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cbb4:
    // 0x38cbb4: 0xc0e31da  jal         func_38C768
label_38cbb8:
    if (ctx->pc == 0x38CBB8u) {
        ctx->pc = 0x38CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBB4u;
        // 0x38cbb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBBCu;
        goto label_38cbbc;
    }
    ctx->pc = 0x38CBB4u;
    SET_GPR_U32(ctx, 31, 0x38CBBCu);
    ctx->pc = 0x38CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CBB4u;
    // 0x38cbb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C768u, 0x38CBB4u, 0x38CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBBCu;
label_38cbbc:
    // 0x38cbbc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x38cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_38cbc0:
    // 0x38cbc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38cbc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cbc4:
    // 0x38cbc4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x38cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_38cbc8:
    // 0x38cbc8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x38cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_38cbcc:
    // 0x38cbcc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38cbd0:
    // 0x38cbd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x38cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_38cbd4:
    // 0x38cbd4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38cbd8:
    // 0x38cbd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38cbdc:
    // 0x38cbdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38cbdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38cbe0:
    // 0x38cbe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cbe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38cbe4:
    // 0x38cbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38cbe8:
    // 0x38cbe8: 0x3e00008  jr          $ra
label_38cbec:
    if (ctx->pc == 0x38CBECu) {
        ctx->pc = 0x38CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBE8u;
        // 0x38cbec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBF0u;
        goto label_fallthrough_0x38cbe8;
    }
    ctx->pc = 0x38CBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBE8u;
        // 0x38cbec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38cbe8:
    ctx->pc = 0x38CBF0u;
}
