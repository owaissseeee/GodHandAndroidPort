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

// Function: func_00179C00
// Address: 0x179c00 - 0x179c60
void func_00179C00_0x179c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179C00_0x179c00");
#endif

    switch (ctx->pc) {
        case 0x179c34u: goto label_179c34;
        case 0x179c48u: goto label_179c48;
        case 0x179c50u: goto label_179c50;
        default: break;
    }

    ctx->pc = 0x179c00u;

    // 0x179c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179c04: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x179c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x179c08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x179c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x179c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c14: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x179c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x179c18: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x179c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x179c1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x179c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x179c20: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x179c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x179c24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179C24u;
    {
        const bool branch_taken_0x179c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C24u;
        // 0x179c28: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c24) {
            ctx->pc = 0x179C34u;
            goto label_179c34;
        }
    }
    ctx->pc = 0x179C2Cu;
    // 0x179c2c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x179C2Cu;
    SET_GPR_U32(ctx, 31, 0x179C34u);
    ctx->pc = 0x179C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C2Cu;
    // 0x179c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x179C2Cu, 0x179C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C34u;
label_179c34:
    // 0x179c34: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x179c34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x179c38: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x179c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x179c3c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x179c40: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x179C40u;
    SET_GPR_U32(ctx, 31, 0x179C48u);
    ctx->pc = 0x179C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C40u;
    // 0x179c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x179C40u, 0x179C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C48u;
label_179c48:
    // 0x179c48: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x179C48u;
    SET_GPR_U32(ctx, 31, 0x179C50u);
    ctx->pc = 0x179C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C48u;
    // 0x179c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x179C48u, 0x179C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C50u;
label_179c50:
    // 0x179c50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179c58: 0x3e00008  jr          $ra
    ctx->pc = 0x179C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C58u;
        // 0x179c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C60u;
}
