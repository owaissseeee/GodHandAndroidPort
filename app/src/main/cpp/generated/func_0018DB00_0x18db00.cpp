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

// Function: func_0018DB00
// Address: 0x18db00 - 0x18db60
void func_0018DB00_0x18db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018DB00_0x18db00");
#endif

    switch (ctx->pc) {
        case 0x18db34u: goto label_18db34;
        case 0x18db48u: goto label_18db48;
        case 0x18db50u: goto label_18db50;
        default: break;
    }

    ctx->pc = 0x18db00u;

    // 0x18db00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18db04: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18db08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18db0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18db10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18db10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db14: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x18db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18db18: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18db1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18db1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18db20: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18db24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB24u;
    {
        const bool branch_taken_0x18db24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB24u;
        // 0x18db28: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db24) {
            ctx->pc = 0x18DB34u;
            goto label_18db34;
        }
    }
    ctx->pc = 0x18DB2Cu;
    // 0x18db2c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18DB2Cu;
    SET_GPR_U32(ctx, 31, 0x18DB34u);
    ctx->pc = 0x18DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB2Cu;
    // 0x18db30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18DB2Cu, 0x18DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB34u;
label_18db34:
    // 0x18db34: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x18db34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x18db38: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x18db38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x18db3c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x18db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x18db40: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x18DB40u;
    SET_GPR_U32(ctx, 31, 0x18DB48u);
    ctx->pc = 0x18DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB40u;
    // 0x18db44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x18DB40u, 0x18DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB48u;
label_18db48:
    // 0x18db48: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x18DB48u;
    SET_GPR_U32(ctx, 31, 0x18DB50u);
    ctx->pc = 0x18DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB48u;
    // 0x18db4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x18DB48u, 0x18DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB50u;
label_18db50:
    // 0x18db50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18db50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18db54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18db54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18db58: 0x3e00008  jr          $ra
    ctx->pc = 0x18DB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB58u;
        // 0x18db5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DB60u;
}
