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

// Function: __dynamic_cast
// Address: 0x31fae8 - 0x31fb98
void ps2___dynamic_cast_0x31fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dynamic_cast_0x31fae8");
#endif

    switch (ctx->pc) {
        case 0x31fae8u: goto label_31fae8;
        case 0x31faecu: goto label_31faec;
        case 0x31faf0u: goto label_31faf0;
        case 0x31faf4u: goto label_31faf4;
        case 0x31faf8u: goto label_31faf8;
        case 0x31fafcu: goto label_31fafc;
        case 0x31fb00u: goto label_31fb00;
        case 0x31fb04u: goto label_31fb04;
        case 0x31fb08u: goto label_31fb08;
        case 0x31fb0cu: goto label_31fb0c;
        case 0x31fb10u: goto label_31fb10;
        case 0x31fb14u: goto label_31fb14;
        case 0x31fb18u: goto label_31fb18;
        case 0x31fb1cu: goto label_31fb1c;
        case 0x31fb20u: goto label_31fb20;
        case 0x31fb24u: goto label_31fb24;
        case 0x31fb28u: goto label_31fb28;
        case 0x31fb2cu: goto label_31fb2c;
        case 0x31fb30u: goto label_31fb30;
        case 0x31fb34u: goto label_31fb34;
        case 0x31fb38u: goto label_31fb38;
        case 0x31fb3cu: goto label_31fb3c;
        case 0x31fb40u: goto label_31fb40;
        case 0x31fb44u: goto label_31fb44;
        case 0x31fb48u: goto label_31fb48;
        case 0x31fb4cu: goto label_31fb4c;
        case 0x31fb50u: goto label_31fb50;
        case 0x31fb54u: goto label_31fb54;
        case 0x31fb58u: goto label_31fb58;
        case 0x31fb5cu: goto label_31fb5c;
        case 0x31fb60u: goto label_31fb60;
        case 0x31fb64u: goto label_31fb64;
        case 0x31fb68u: goto label_31fb68;
        case 0x31fb6cu: goto label_31fb6c;
        case 0x31fb70u: goto label_31fb70;
        case 0x31fb74u: goto label_31fb74;
        case 0x31fb78u: goto label_31fb78;
        case 0x31fb7cu: goto label_31fb7c;
        case 0x31fb80u: goto label_31fb80;
        case 0x31fb84u: goto label_31fb84;
        case 0x31fb88u: goto label_31fb88;
        case 0x31fb8cu: goto label_31fb8c;
        case 0x31fb90u: goto label_31fb90;
        case 0x31fb94u: goto label_31fb94;
        default: break;
    }

    ctx->pc = 0x31fae8u;

label_31fae8:
    // 0x31fae8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31fae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31faec:
    // 0x31faec: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x31faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_31faf0:
    // 0x31faf0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x31faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_31faf4:
    // 0x31faf4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x31faf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31faf8:
    // 0x31faf8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x31faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_31fafc:
    // 0x31fafc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x31fafcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31fb00:
    // 0x31fb00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x31fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_31fb04:
    // 0x31fb04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x31fb04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31fb08:
    // 0x31fb08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x31fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_31fb0c:
    // 0x31fb0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31fb0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31fb10:
    // 0x31fb10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_31fb14:
    // 0x31fb14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_31fb18:
    // 0x31fb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31fb1c:
    // 0x31fb1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x31fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_31fb20:
    // 0x31fb20: 0x80f809  jalr        $a0
label_31fb24:
    if (ctx->pc == 0x31FB24u) {
        ctx->pc = 0x31FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB20u;
        // 0x31fb24: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB28u;
        goto label_31fb28;
    }
    ctx->pc = 0x31FB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x31FB28u);
        ctx->pc = 0x31FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB20u;
        // 0x31fb24: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB20u, 0x31FB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FB28u;
label_31fb28:
    // 0x31fb28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31fb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fb2c:
    // 0x31fb2c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x31fb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31fb30:
    // 0x31fb30: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_31fb34:
    // 0x31fb34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x31fb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_31fb38:
    // 0x31fb38: 0x280f809  jalr        $s4
label_31fb3c:
    if (ctx->pc == 0x31FB3Cu) {
        ctx->pc = 0x31FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB38u;
        // 0x31fb3c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB40u;
        goto label_31fb40;
    }
    ctx->pc = 0x31FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x31FB40u);
        ctx->pc = 0x31FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB38u;
        // 0x31fb3c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB38u, 0x31FB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FB40u;
label_31fb40:
    // 0x31fb40: 0x260f809  jalr        $s3
label_31fb44:
    if (ctx->pc == 0x31FB44u) {
        ctx->pc = 0x31FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB40u;
        // 0x31fb44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB48u;
        goto label_31fb48;
    }
    ctx->pc = 0x31FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x31FB48u);
        ctx->pc = 0x31FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB40u;
        // 0x31fb44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB40u, 0x31FB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FB48u;
label_31fb48:
    // 0x31fb48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31fb4c:
    // 0x31fb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31fb50:
    // 0x31fb50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31fb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31fb54:
    // 0x31fb54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31fb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31fb58:
    // 0x31fb58: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x31fb58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31fb5c:
    // 0x31fb5c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x31fb5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31fb60:
    // 0x31fb60: 0x60f809  jalr        $v1
label_31fb64:
    if (ctx->pc == 0x31FB64u) {
        ctx->pc = 0x31FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB60u;
        // 0x31fb64: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB68u;
        goto label_31fb68;
    }
    ctx->pc = 0x31FB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31FB68u);
        ctx->pc = 0x31FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB60u;
        // 0x31fb64: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB60u, 0x31FB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FB68u;
label_31fb68:
    // 0x31fb68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x31fb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_31fb6c:
    // 0x31fb6c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x31fb6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31fb70:
    // 0x31fb70: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x31fb70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31fb74:
    // 0x31fb74: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x31fb74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31fb78:
    // 0x31fb78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x31fb78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31fb7c:
    // 0x31fb7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x31fb7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31fb80:
    // 0x31fb80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31fb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31fb84:
    // 0x31fb84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x31fb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31fb88:
    // 0x31fb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31fb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31fb8c:
    // 0x31fb8c: 0x3e00008  jr          $ra
label_31fb90:
    if (ctx->pc == 0x31FB90u) {
        ctx->pc = 0x31FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB8Cu;
        // 0x31fb90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB94u;
        goto label_31fb94;
    }
    ctx->pc = 0x31FB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB8Cu;
        // 0x31fb90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FB94u;
label_31fb94:
    // 0x31fb94: 0x0  nop
    ctx->pc = 0x31fb94u;
    // NOP
    ctx->pc = 0x31fb98u;
}
