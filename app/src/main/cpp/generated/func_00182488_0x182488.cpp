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

// Function: func_00182488
// Address: 0x182488 - 0x1824e8
void func_00182488_0x182488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182488_0x182488");
#endif

    switch (ctx->pc) {
        case 0x1824bcu: goto label_1824bc;
        case 0x1824d0u: goto label_1824d0;
        case 0x1824d8u: goto label_1824d8;
        default: break;
    }

    ctx->pc = 0x182488u;

    // 0x182488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18248c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x18248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x182490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18249c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x18249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1824a0: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x1824a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x1824a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1824a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1824a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1824a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1824ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1824ACu;
    {
        const bool branch_taken_0x1824ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824ACu;
        // 0x1824b0: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824ac) {
            ctx->pc = 0x1824BCu;
            goto label_1824bc;
        }
    }
    ctx->pc = 0x1824B4u;
    // 0x1824b4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1824B4u;
    SET_GPR_U32(ctx, 31, 0x1824BCu);
    ctx->pc = 0x1824B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824B4u;
    // 0x1824b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1824B4u, 0x1824BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824BCu;
label_1824bc:
    // 0x1824bc: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x1824bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x1824c0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1824c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1824c4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1824c8: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1824C8u;
    SET_GPR_U32(ctx, 31, 0x1824D0u);
    ctx->pc = 0x1824CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824C8u;
    // 0x1824cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1824C8u, 0x1824D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824D0u;
label_1824d0:
    // 0x1824d0: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x1824D0u;
    SET_GPR_U32(ctx, 31, 0x1824D8u);
    ctx->pc = 0x1824D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824D0u;
    // 0x1824d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x1824D0u, 0x1824D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824D8u;
label_1824d8:
    // 0x1824d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1824d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1824dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1824E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1824E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824E0u;
        // 0x1824e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1824E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1824E8u;
}
