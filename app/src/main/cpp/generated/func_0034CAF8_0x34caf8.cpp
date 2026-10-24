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

// Function: func_0034CAF8
// Address: 0x34caf8 - 0x34cbb0
void func_0034CAF8_0x34caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CAF8_0x34caf8");
#endif

    switch (ctx->pc) {
        case 0x34caf8u: goto label_34caf8;
        case 0x34cafcu: goto label_34cafc;
        case 0x34cb00u: goto label_34cb00;
        case 0x34cb04u: goto label_34cb04;
        case 0x34cb08u: goto label_34cb08;
        case 0x34cb0cu: goto label_34cb0c;
        case 0x34cb10u: goto label_34cb10;
        case 0x34cb14u: goto label_34cb14;
        case 0x34cb18u: goto label_34cb18;
        case 0x34cb1cu: goto label_34cb1c;
        case 0x34cb20u: goto label_34cb20;
        case 0x34cb24u: goto label_34cb24;
        case 0x34cb28u: goto label_34cb28;
        case 0x34cb2cu: goto label_34cb2c;
        case 0x34cb30u: goto label_34cb30;
        case 0x34cb34u: goto label_34cb34;
        case 0x34cb38u: goto label_34cb38;
        case 0x34cb3cu: goto label_34cb3c;
        case 0x34cb40u: goto label_34cb40;
        case 0x34cb44u: goto label_34cb44;
        case 0x34cb48u: goto label_34cb48;
        case 0x34cb4cu: goto label_34cb4c;
        case 0x34cb50u: goto label_34cb50;
        case 0x34cb54u: goto label_34cb54;
        case 0x34cb58u: goto label_34cb58;
        case 0x34cb5cu: goto label_34cb5c;
        case 0x34cb60u: goto label_34cb60;
        case 0x34cb64u: goto label_34cb64;
        case 0x34cb68u: goto label_34cb68;
        case 0x34cb6cu: goto label_34cb6c;
        case 0x34cb70u: goto label_34cb70;
        case 0x34cb74u: goto label_34cb74;
        case 0x34cb78u: goto label_34cb78;
        case 0x34cb7cu: goto label_34cb7c;
        case 0x34cb80u: goto label_34cb80;
        case 0x34cb84u: goto label_34cb84;
        case 0x34cb88u: goto label_34cb88;
        case 0x34cb8cu: goto label_34cb8c;
        case 0x34cb90u: goto label_34cb90;
        case 0x34cb94u: goto label_34cb94;
        case 0x34cb98u: goto label_34cb98;
        case 0x34cb9cu: goto label_34cb9c;
        case 0x34cba0u: goto label_34cba0;
        case 0x34cba4u: goto label_34cba4;
        case 0x34cba8u: goto label_34cba8;
        case 0x34cbacu: goto label_34cbac;
        default: break;
    }

    ctx->pc = 0x34caf8u;

label_34caf8:
    // 0x34caf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34caf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34cafc:
    // 0x34cafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34cb00:
    // 0x34cb00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34cb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34cb04:
    // 0x34cb04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34cb08:
    // 0x34cb08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34cb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34cb0c:
    // 0x34cb0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34cb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34cb10:
    // 0x34cb10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_34cb14:
    // 0x34cb14: 0xc0d3310  jal         func_34CC40
label_34cb18:
    if (ctx->pc == 0x34CB18u) {
        ctx->pc = 0x34CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB14u;
        // 0x34cb18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB1Cu;
        goto label_34cb1c;
    }
    ctx->pc = 0x34CB14u;
    SET_GPR_U32(ctx, 31, 0x34CB1Cu);
    ctx->pc = 0x34CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB14u;
    // 0x34cb18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CC40u, 0x34CB14u, 0x34CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB1Cu;
label_34cb1c:
    // 0x34cb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34cb20:
    // 0x34cb20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34cb24:
    // 0x34cb24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_34cb28:
    if (ctx->pc == 0x34CB28u) {
        ctx->pc = 0x34CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB24u;
        // 0x34cb28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB2Cu;
        goto label_34cb2c;
    }
    ctx->pc = 0x34CB24u;
    {
        const bool branch_taken_0x34cb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB24u;
        // 0x34cb28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb24) {
            ctx->pc = 0x34CB50u;
            goto label_34cb50;
        }
    }
    ctx->pc = 0x34CB2Cu;
label_34cb2c:
    // 0x34cb2c: 0xc0ce804  jal         func_33A010
label_34cb30:
    if (ctx->pc == 0x34CB30u) {
        ctx->pc = 0x34CB34u;
        goto label_34cb34;
    }
    ctx->pc = 0x34CB2Cu;
    SET_GPR_U32(ctx, 31, 0x34CB34u);
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x34CB2Cu, 0x34CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB34u;
label_34cb34:
    // 0x34cb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34cb38:
    // 0x34cb38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34cb3c:
    // 0x34cb3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34cb40:
    // 0x34cb40: 0xc0ce804  jal         func_33A010
label_34cb44:
    if (ctx->pc == 0x34CB44u) {
        ctx->pc = 0x34CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB40u;
        // 0x34cb44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB48u;
        goto label_34cb48;
    }
    ctx->pc = 0x34CB40u;
    SET_GPR_U32(ctx, 31, 0x34CB48u);
    ctx->pc = 0x34CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB40u;
    // 0x34cb44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x34CB40u, 0x34CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB48u;
label_34cb48:
    // 0x34cb48: 0x10000013  b           . + 4 + (0x13 << 2)
label_34cb4c:
    if (ctx->pc == 0x34CB4Cu) {
        ctx->pc = 0x34CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB48u;
        // 0x34cb4c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB50u;
        goto label_34cb50;
    }
    ctx->pc = 0x34CB48u;
    {
        const bool branch_taken_0x34cb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB48u;
        // 0x34cb4c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb48) {
            ctx->pc = 0x34CB98u;
            goto label_34cb98;
        }
    }
    ctx->pc = 0x34CB50u;
label_34cb50:
    // 0x34cb50: 0xc0d331e  jal         func_34CC78
label_34cb54:
    if (ctx->pc == 0x34CB54u) {
        ctx->pc = 0x34CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB50u;
        // 0x34cb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB58u;
        goto label_34cb58;
    }
    ctx->pc = 0x34CB50u;
    SET_GPR_U32(ctx, 31, 0x34CB58u);
    ctx->pc = 0x34CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB50u;
    // 0x34cb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CC78u, 0x34CB50u, 0x34CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB58u;
label_34cb58:
    // 0x34cb58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_34cb5c:
    if (ctx->pc == 0x34CB5Cu) {
        ctx->pc = 0x34CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB58u;
        // 0x34cb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB60u;
        goto label_34cb60;
    }
    ctx->pc = 0x34CB58u;
    {
        const bool branch_taken_0x34cb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB58u;
        // 0x34cb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb58) {
            ctx->pc = 0x34CB90u;
            goto label_34cb90;
        }
    }
    ctx->pc = 0x34CB60u;
label_34cb60:
    // 0x34cb60: 0xc0ce50c  jal         func_339430
label_34cb64:
    if (ctx->pc == 0x34CB64u) {
        ctx->pc = 0x34CB68u;
        goto label_34cb68;
    }
    ctx->pc = 0x34CB60u;
    SET_GPR_U32(ctx, 31, 0x34CB68u);
    ctx->pc = 0x339430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339430u, 0x34CB60u, 0x34CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB68u;
label_34cb68:
    // 0x34cb68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34cb6c:
    // 0x34cb6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34cb70:
    // 0x34cb70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34cb74:
    // 0x34cb74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x34cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_34cb78:
    // 0x34cb78: 0x40f809  jalr        $v0
label_34cb7c:
    if (ctx->pc == 0x34CB7Cu) {
        ctx->pc = 0x34CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB78u;
        // 0x34cb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB80u;
        goto label_34cb80;
    }
    ctx->pc = 0x34CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34CB80u);
        ctx->pc = 0x34CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB78u;
        // 0x34cb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CB78u, 0x34CB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34CB80u;
label_34cb80:
    // 0x34cb80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34cb84:
    // 0x34cb84: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x34cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34cb88:
    // 0x34cb88: 0x10000003  b           . + 4 + (0x3 << 2)
label_34cb8c:
    if (ctx->pc == 0x34CB8Cu) {
        ctx->pc = 0x34CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB88u;
        // 0x34cb8c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CB90u;
        goto label_34cb90;
    }
    ctx->pc = 0x34CB88u;
    {
        const bool branch_taken_0x34cb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB88u;
        // 0x34cb8c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb88) {
            ctx->pc = 0x34CB98u;
            goto label_34cb98;
        }
    }
    ctx->pc = 0x34CB90u;
label_34cb90:
    // 0x34cb90: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x34cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_34cb94:
    // 0x34cb94: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x34cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_34cb98:
    // 0x34cb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34cb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34cb9c:
    // 0x34cb9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34cb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34cba0:
    // 0x34cba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34cba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34cba4:
    // 0x34cba4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34cba8:
    // 0x34cba8: 0x3e00008  jr          $ra
label_34cbac:
    if (ctx->pc == 0x34CBACu) {
        ctx->pc = 0x34CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBA8u;
        // 0x34cbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34CBB0u;
        goto label_fallthrough_0x34cba8;
    }
    ctx->pc = 0x34CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBA8u;
        // 0x34cbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34cba8:
    ctx->pc = 0x34CBB0u;
}
