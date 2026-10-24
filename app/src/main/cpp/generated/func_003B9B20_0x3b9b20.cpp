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

// Function: func_003B9B20
// Address: 0x3b9b20 - 0x3b9bb8
void func_003B9B20_0x3b9b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9B20_0x3b9b20");
#endif

    switch (ctx->pc) {
        case 0x3b9b3cu: goto label_3b9b3c;
        case 0x3b9b58u: goto label_3b9b58;
        case 0x3b9b60u: goto label_3b9b60;
        case 0x3b9b68u: goto label_3b9b68;
        case 0x3b9b70u: goto label_3b9b70;
        case 0x3b9b7cu: goto label_3b9b7c;
        case 0x3b9b84u: goto label_3b9b84;
        default: break;
    }

    ctx->pc = 0x3b9b20u;

    // 0x3b9b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b9b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b9b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b9b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b9b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b9b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b9b30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b9b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3b9b34: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x3B9B34u;
    SET_GPR_U32(ctx, 31, 0x3B9B3Cu);
    ctx->pc = 0x3B9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B34u;
    // 0x3b9b38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x3B9B34u, 0x3B9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B3Cu;
label_3b9b3c:
    // 0x3b9b3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b9b40: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x3b9b40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3b9b44: 0x8e5000c0  lw          $s0, 0xC0($s2)
    ctx->pc = 0x3b9b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x3b9b48: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B9B48u;
    {
        const bool branch_taken_0x3b9b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9b48) {
            ctx->pc = 0x3B9B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9B48u;
            // 0x3b9b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9BA0u;
            goto label_3b9ba0;
        }
    }
    ctx->pc = 0x3B9B50u;
    // 0x3b9b50: 0xc0c9718  jal         func_325C60
    ctx->pc = 0x3B9B50u;
    SET_GPR_U32(ctx, 31, 0x3B9B58u);
    ctx->pc = 0x325C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C60u, 0x3B9B50u, 0x3B9B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B58u;
label_3b9b58:
    // 0x3b9b58: 0xc0ee816  jal         func_3BA058
    ctx->pc = 0x3B9B58u;
    SET_GPR_U32(ctx, 31, 0x3B9B60u);
    ctx->pc = 0x3B9B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B58u;
    // 0x3b9b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA058u, 0x3B9B58u, 0x3B9B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B60u;
label_3b9b60:
    // 0x3b9b60: 0xc0ee7f4  jal         func_3B9FD0
    ctx->pc = 0x3B9B60u;
    SET_GPR_U32(ctx, 31, 0x3B9B68u);
    ctx->pc = 0x3B9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B60u;
    // 0x3b9b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9FD0u, 0x3B9B60u, 0x3B9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B68u;
label_3b9b68:
    // 0x3b9b68: 0xc0c971e  jal         func_325C78
    ctx->pc = 0x3B9B68u;
    SET_GPR_U32(ctx, 31, 0x3B9B70u);
    ctx->pc = 0x3B9B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B68u;
    // 0x3b9b6c: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C78u, 0x3B9B68u, 0x3B9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B70u;
label_3b9b70:
    // 0x3b9b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9b74: 0xc0c9888  jal         func_326220
    ctx->pc = 0x3B9B74u;
    SET_GPR_U32(ctx, 31, 0x3B9B7Cu);
    ctx->pc = 0x3B9B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B74u;
    // 0x3b9b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326220u, 0x3B9B74u, 0x3B9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B7Cu;
label_3b9b7c:
    // 0x3b9b7c: 0xc0c9894  jal         func_326250
    ctx->pc = 0x3B9B7Cu;
    SET_GPR_U32(ctx, 31, 0x3B9B84u);
    ctx->pc = 0x3B9B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B7Cu;
    // 0x3b9b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326250u, 0x3B9B7Cu, 0x3B9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B84u;
label_3b9b84:
    // 0x3b9b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9b88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b9b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9b8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b9b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9b90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b9b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9b94: 0x80ee798  j           func_3B9E60
    ctx->pc = 0x3B9B94u;
    ctx->pc = 0x3B9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B94u;
    // 0x3b9b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E60u, 0x3B9B94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B9B9Cu;
    // 0x3b9b9c: 0x0  nop
    ctx->pc = 0x3b9b9cu;
    // NOP
label_3b9ba0:
    // 0x3b9ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b9ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b9ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9ba8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b9ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b9bac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BACu;
        // 0x3b9bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9BB4u;
    // 0x3b9bb4: 0x0  nop
    ctx->pc = 0x3b9bb4u;
    // NOP
    ctx->pc = 0x3b9bb8u;
}
