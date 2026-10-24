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

// Function: func_00380E10
// Address: 0x380e10 - 0x380e88
void func_00380E10_0x380e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380E10_0x380e10");
#endif

    switch (ctx->pc) {
        case 0x380e28u: goto label_380e28;
        case 0x380e3cu: goto label_380e3c;
        case 0x380e54u: goto label_380e54;
        case 0x380e5cu: goto label_380e5c;
        case 0x380e68u: goto label_380e68;
        default: break;
    }

    ctx->pc = 0x380e10u;

    // 0x380e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380e14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x380e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x380e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380e1c: 0x24900058  addiu       $s0, $a0, 0x58
    ctx->pc = 0x380e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x380e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380e24: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x380e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_380e28:
    // 0x380e28: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x380e2c: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x380E2Cu;
    {
        const bool branch_taken_0x380e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380e2c) {
            ctx->pc = 0x380E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380E2Cu;
            // 0x380e30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380E6Cu;
            goto label_380e6c;
        }
    }
    ctx->pc = 0x380E34u;
    // 0x380e34: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x380E34u;
    SET_GPR_U32(ctx, 31, 0x380E3Cu);
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x380E34u, 0x380E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E3Cu;
label_380e3c:
    // 0x380e3c: 0x9202fff0  lbu         $v0, -0x10($s0)
    ctx->pc = 0x380e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x380e40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380E40u;
    {
        const bool branch_taken_0x380e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E40u;
        // 0x380e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e40) {
            ctx->pc = 0x380E54u;
            goto label_380e54;
        }
    }
    ctx->pc = 0x380E48u;
    // 0x380e48: 0xa200fff0  sb          $zero, -0x10($s0)
    ctx->pc = 0x380e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294967280), (uint8_t)GPR_U32(ctx, 0));
    // 0x380e4c: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x380E4Cu;
    SET_GPR_U32(ctx, 31, 0x380E54u);
    ctx->pc = 0x380E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380E4Cu;
    // 0x380e50: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x380E4Cu, 0x380E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E54u;
label_380e54:
    // 0x380e54: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x380E54u;
    SET_GPR_U32(ctx, 31, 0x380E5Cu);
    ctx->pc = 0x380E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380E54u;
    // 0x380e58: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x380E54u, 0x380E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E5Cu;
label_380e5c:
    // 0x380e5c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x380e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x380e60: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x380E60u;
    SET_GPR_U32(ctx, 31, 0x380E68u);
    ctx->pc = 0x380E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380E60u;
    // 0x380e64: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x380E60u, 0x380E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E68u;
label_380e68:
    // 0x380e68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x380e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_380e6c:
    // 0x380e6c: 0x621ffee  bgez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x380E6Cu;
    {
        const bool branch_taken_0x380e6c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x380E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E6Cu;
        // 0x380e70: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e6c) {
            ctx->pc = 0x380E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380e28;
        }
    }
    ctx->pc = 0x380E74u;
    // 0x380e74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x380e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380e80: 0x3e00008  jr          $ra
    ctx->pc = 0x380E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E80u;
        // 0x380e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380E88u;
}
