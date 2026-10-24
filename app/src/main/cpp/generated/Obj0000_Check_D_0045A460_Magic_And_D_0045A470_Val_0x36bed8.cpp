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

// Function: Obj0000_Check_D_0045A460_Magic_And_D_0045A470_Val
// Address: 0x36bed8 - 0x36bf50
void Obj0000_Check_D_0045A460_Magic_And_D_0045A470_Val_0x36bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Check_D_0045A460_Magic_And_D_0045A470_Val_0x36bed8");
#endif

    switch (ctx->pc) {
        case 0x36bed8u: goto label_36bed8;
        case 0x36bedcu: goto label_36bedc;
        case 0x36bee0u: goto label_36bee0;
        case 0x36bee4u: goto label_36bee4;
        case 0x36bee8u: goto label_36bee8;
        case 0x36beecu: goto label_36beec;
        case 0x36bef0u: goto label_36bef0;
        case 0x36bef4u: goto label_36bef4;
        case 0x36bef8u: goto label_36bef8;
        case 0x36befcu: goto label_36befc;
        case 0x36bf00u: goto label_36bf00;
        case 0x36bf04u: goto label_36bf04;
        case 0x36bf08u: goto label_36bf08;
        case 0x36bf0cu: goto label_36bf0c;
        case 0x36bf10u: goto label_36bf10;
        case 0x36bf14u: goto label_36bf14;
        case 0x36bf18u: goto label_36bf18;
        case 0x36bf1cu: goto label_36bf1c;
        case 0x36bf20u: goto label_36bf20;
        case 0x36bf24u: goto label_36bf24;
        case 0x36bf28u: goto label_36bf28;
        case 0x36bf2cu: goto label_36bf2c;
        case 0x36bf30u: goto label_36bf30;
        case 0x36bf34u: goto label_36bf34;
        case 0x36bf38u: goto label_36bf38;
        case 0x36bf3cu: goto label_36bf3c;
        case 0x36bf40u: goto label_36bf40;
        case 0x36bf44u: goto label_36bf44;
        case 0x36bf48u: goto label_36bf48;
        case 0x36bf4cu: goto label_36bf4c;
        default: break;
    }

    ctx->pc = 0x36bed8u;

label_36bed8:
    // 0x36bed8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_36bedc:
    // 0x36bedc: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x36bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
label_36bee0:
    // 0x36bee0: 0x8c44a460  lw          $a0, -0x5BA0($v0)
    ctx->pc = 0x36bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943840)));
label_36bee4:
    // 0x36bee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36bee8:
    // 0x36bee8: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x36bee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
label_36beec:
    // 0x36beec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_36bef0:
    if (ctx->pc == 0x36BEF0u) {
        ctx->pc = 0x36BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BEECu;
        // 0x36bef0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BEF4u;
        goto label_36bef4;
    }
    ctx->pc = 0x36BEECu;
    {
        const bool branch_taken_0x36beec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BEECu;
        // 0x36bef0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36beec) {
            ctx->pc = 0x36BF10u;
            goto label_36bf10;
        }
    }
    ctx->pc = 0x36BEF4u;
label_36bef4:
    // 0x36bef4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_36bef8:
    // 0x36bef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36befc:
    // 0x36befc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36befcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bf00:
    // 0x36bf00: 0x34a5ff02  ori         $a1, $a1, 0xFF02
    ctx->pc = 0x36bf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65282);
label_36bf04:
    // 0x36bf04: 0x80da7c8  j           func_369F20
label_36bf08:
    if (ctx->pc == 0x36BF08u) {
        ctx->pc = 0x36BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF04u;
        // 0x36bf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BF0Cu;
        goto label_36bf0c;
    }
    ctx->pc = 0x36BF04u;
    ctx->pc = 0x36BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF04u;
    // 0x36bf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36BF04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36BF0Cu;
label_36bf0c:
    // 0x36bf0c: 0x0  nop
    ctx->pc = 0x36bf0cu;
    // NOP
label_36bf10:
    // 0x36bf10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_36bf14:
    // 0x36bf14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36bf18:
    // 0x36bf18: 0x9043a470  lbu         $v1, -0x5B90($v0)
    ctx->pc = 0x36bf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943856)));
label_36bf1c:
    // 0x36bf1c: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_36bf20:
    if (ctx->pc == 0x36BF20u) {
        ctx->pc = 0x36BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF1Cu;
        // 0x36bf20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BF24u;
        goto label_36bf24;
    }
    ctx->pc = 0x36BF1Cu;
    {
        const bool branch_taken_0x36bf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x36BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF1Cu;
        // 0x36bf20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bf1c) {
            ctx->pc = 0x36BF40u;
            goto label_36bf40;
        }
    }
    ctx->pc = 0x36BF24u;
label_36bf24:
    // 0x36bf24: 0x0  nop
    ctx->pc = 0x36bf24u;
    // NOP
label_36bf28:
    // 0x36bf28: 0x2401ffff  addiu       $at, $zero, -0x1
    ctx->pc = 0x36bf28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36bf2c:
    // 0x36bf2c: 0x20f809  jalr        $at
label_36bf30:
    if (ctx->pc == 0x36BF30u) {
        ctx->pc = 0x36BF34u;
        goto label_36bf34;
    }
    ctx->pc = 0x36BF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x36BF34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BF2Cu, 0x36BF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BF34u;
label_36bf34:
    // 0x36bf34: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_36bf38:
    if (ctx->pc == 0x36BF38u) {
        ctx->pc = 0x36BF3Cu;
        goto label_36bf3c;
    }
    ctx->pc = 0x36BF34u;
    {
        const bool branch_taken_0x36bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf34) {
            ctx->pc = 0x36BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bf28;
        }
    }
    ctx->pc = 0x36BF3Cu;
label_36bf3c:
    // 0x36bf3c: 0x0  nop
    ctx->pc = 0x36bf3cu;
    // NOP
label_36bf40:
    // 0x36bf40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bf44:
    // 0x36bf44: 0x3e00008  jr          $ra
label_36bf48:
    if (ctx->pc == 0x36BF48u) {
        ctx->pc = 0x36BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF44u;
        // 0x36bf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BF4Cu;
        goto label_36bf4c;
    }
    ctx->pc = 0x36BF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF44u;
        // 0x36bf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BF4Cu;
label_36bf4c:
    // 0x36bf4c: 0x0  nop
    ctx->pc = 0x36bf4cu;
    // NOP
    ctx->pc = 0x36bf50u;
}
