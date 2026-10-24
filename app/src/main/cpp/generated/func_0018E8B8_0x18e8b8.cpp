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

// Function: func_0018E8B8
// Address: 0x18e8b8 - 0x18e918
void func_0018E8B8_0x18e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018E8B8_0x18e8b8");
#endif

    switch (ctx->pc) {
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e900u: goto label_18e900;
        case 0x18e908u: goto label_18e908;
        default: break;
    }

    ctx->pc = 0x18e8b8u;

    // 0x18e8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e8bc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x18e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18e8c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8cc: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18e8d0: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x18e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18e8d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18e8d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18e8dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E8DCu;
    {
        const bool branch_taken_0x18e8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8DCu;
        // 0x18e8e0: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8dc) {
            ctx->pc = 0x18E8ECu;
            goto label_18e8ec;
        }
    }
    ctx->pc = 0x18E8E4u;
    // 0x18e8e4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18E8E4u;
    SET_GPR_U32(ctx, 31, 0x18E8ECu);
    ctx->pc = 0x18E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8E4u;
    // 0x18e8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18E8E4u, 0x18E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8ECu;
label_18e8ec:
    // 0x18e8ec: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x18e8ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x18e8f0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x18e8f4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x18e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x18e8f8: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x18E8F8u;
    SET_GPR_U32(ctx, 31, 0x18E900u);
    ctx->pc = 0x18E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8F8u;
    // 0x18e8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x18E8F8u, 0x18E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E900u;
label_18e900:
    // 0x18e900: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x18E900u;
    SET_GPR_U32(ctx, 31, 0x18E908u);
    ctx->pc = 0x18E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E900u;
    // 0x18e904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x18E900u, 0x18E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E908u;
label_18e908:
    // 0x18e908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e910: 0x3e00008  jr          $ra
    ctx->pc = 0x18E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E910u;
        // 0x18e914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E918u;
}
