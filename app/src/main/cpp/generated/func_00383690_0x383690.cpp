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

// Function: func_00383690
// Address: 0x383690 - 0x383708
void func_00383690_0x383690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383690_0x383690");
#endif

    switch (ctx->pc) {
        case 0x3836d8u: goto label_3836d8;
        case 0x3836e8u: goto label_3836e8;
        case 0x3836f8u: goto label_3836f8;
        default: break;
    }

    ctx->pc = 0x383690u;

    // 0x383690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38369c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x38369cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3836a0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3836A0u;
    {
        const bool branch_taken_0x3836a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3836A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836A0u;
        // 0x3836a4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836a0) {
            ctx->pc = 0x3836E0u;
            goto label_3836e0;
        }
    }
    ctx->pc = 0x3836A8u;
    // 0x3836a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3836A8u;
    {
        const bool branch_taken_0x3836a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3836a8) {
            ctx->pc = 0x3836ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3836A8u;
            // 0x3836ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3836C0u;
            goto label_3836c0;
        }
    }
    ctx->pc = 0x3836B0u;
    // 0x3836b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3836B0u;
    {
        const bool branch_taken_0x3836b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3836B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836B0u;
        // 0x3836b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836b0) {
            ctx->pc = 0x3836D0u;
            goto label_3836d0;
        }
    }
    ctx->pc = 0x3836B8u;
    // 0x3836b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3836B8u;
    {
        const bool branch_taken_0x3836b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3836b8) {
            ctx->pc = 0x3836FCu;
            goto label_3836fc;
        }
    }
    ctx->pc = 0x3836C0u;
label_3836c0:
    // 0x3836c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3836C0u;
    {
        const bool branch_taken_0x3836c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3836C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836C0u;
        // 0x3836c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836c0) {
            ctx->pc = 0x3836F0u;
            goto label_3836f0;
        }
    }
    ctx->pc = 0x3836C8u;
    // 0x3836c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3836C8u;
    {
        const bool branch_taken_0x3836c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3836c8) {
            ctx->pc = 0x3836FCu;
            goto label_3836fc;
        }
    }
    ctx->pc = 0x3836D0u;
label_3836d0:
    // 0x3836d0: 0xc0e0dc2  jal         func_383708
    ctx->pc = 0x3836D0u;
    SET_GPR_U32(ctx, 31, 0x3836D8u);
    ctx->pc = 0x383708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383708u, 0x3836D0u, 0x3836D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3836D8u;
label_3836d8:
    // 0x3836d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3836D8u;
    {
        const bool branch_taken_0x3836d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3836DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836D8u;
        // 0x3836dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836d8) {
            ctx->pc = 0x3836FCu;
            goto label_3836fc;
        }
    }
    ctx->pc = 0x3836E0u;
label_3836e0:
    // 0x3836e0: 0xc0e0dfa  jal         func_3837E8
    ctx->pc = 0x3836E0u;
    SET_GPR_U32(ctx, 31, 0x3836E8u);
    ctx->pc = 0x3837E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3837E8u, 0x3836E0u, 0x3836E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3836E8u;
label_3836e8:
    // 0x3836e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3836E8u;
    {
        const bool branch_taken_0x3836e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3836ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836E8u;
        // 0x3836ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3836e8) {
            ctx->pc = 0x3836FCu;
            goto label_3836fc;
        }
    }
    ctx->pc = 0x3836F0u;
label_3836f0:
    // 0x3836f0: 0xc0e0e12  jal         func_383848
    ctx->pc = 0x3836F0u;
    SET_GPR_U32(ctx, 31, 0x3836F8u);
    ctx->pc = 0x383848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383848u, 0x3836F0u, 0x3836F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3836F8u;
label_3836f8:
    // 0x3836f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3836f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3836fc:
    // 0x3836fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3836FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836FCu;
        // 0x383700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3836FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383704u;
    // 0x383704: 0x0  nop
    ctx->pc = 0x383704u;
    // NOP
    ctx->pc = 0x383708u;
}
