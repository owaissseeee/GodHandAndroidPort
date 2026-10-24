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

// Function: func_002D5708
// Address: 0x2d5708 - 0x2d5768
void func_002D5708_0x2d5708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5708_0x2d5708");
#endif

    switch (ctx->pc) {
        case 0x2d5740u: goto label_2d5740;
        case 0x2d5754u: goto label_2d5754;
        default: break;
    }

    ctx->pc = 0x2d5708u;

    // 0x2d5708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d570c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2d570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2d5710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d5710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d5714: 0x2442d1e8  addiu       $v0, $v0, -0x2E18
    ctx->pc = 0x2d5714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955496));
    // 0x2d5718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d571c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d571cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5724: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2d5724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2d5728: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d5728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d572c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D572Cu;
    {
        const bool branch_taken_0x2d572c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D572Cu;
        // 0x2d5730: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d572c) {
            ctx->pc = 0x2D5740u;
            goto label_2d5740;
        }
    }
    ctx->pc = 0x2D5734u;
    // 0x2d5734: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x2d5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x2d5738: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2D5738u;
    SET_GPR_U32(ctx, 31, 0x2D5740u);
    ctx->pc = 0x2D573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5738u;
    // 0x2d573c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2D5738u, 0x2D5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5740u;
label_2d5740:
    // 0x2d5740: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2d5740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2d5744: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5744u;
    {
        const bool branch_taken_0x2d5744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5744) {
            ctx->pc = 0x2D5748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5744u;
            // 0x2d5748: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5758u;
            goto label_2d5758;
        }
    }
    ctx->pc = 0x2D574Cu;
    // 0x2d574c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2D574Cu;
    SET_GPR_U32(ctx, 31, 0x2D5754u);
    ctx->pc = 0x2D5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D574Cu;
    // 0x2d5750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2D574Cu, 0x2D5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5754u;
label_2d5754:
    // 0x2d5754: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d5754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5758:
    // 0x2d5758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d575c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5760: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5760u;
        // 0x2d5764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5768u;
}
