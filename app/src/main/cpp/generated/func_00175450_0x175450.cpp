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

// Function: func_00175450
// Address: 0x175450 - 0x1754b0
void func_00175450_0x175450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175450_0x175450");
#endif

    switch (ctx->pc) {
        case 0x175484u: goto label_175484;
        case 0x175498u: goto label_175498;
        case 0x1754a0u: goto label_1754a0;
        default: break;
    }

    ctx->pc = 0x175450u;

    // 0x175450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175454: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x175454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x175458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17545c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175464: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x175464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x175468: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x175468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x17546c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x175470: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x175470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x175474: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175474u;
    {
        const bool branch_taken_0x175474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175474u;
        // 0x175478: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175474) {
            ctx->pc = 0x175484u;
            goto label_175484;
        }
    }
    ctx->pc = 0x17547Cu;
    // 0x17547c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x17547Cu;
    SET_GPR_U32(ctx, 31, 0x175484u);
    ctx->pc = 0x175480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17547Cu;
    // 0x175480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x17547Cu, 0x175484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175484u;
label_175484:
    // 0x175484: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x175484u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x175488: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x17548c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x17548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x175490: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x175490u;
    SET_GPR_U32(ctx, 31, 0x175498u);
    ctx->pc = 0x175494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175490u;
    // 0x175494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x175490u, 0x175498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175498u;
label_175498:
    // 0x175498: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x175498u;
    SET_GPR_U32(ctx, 31, 0x1754A0u);
    ctx->pc = 0x17549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175498u;
    // 0x17549c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x175498u, 0x1754A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754A0u;
label_1754a0:
    // 0x1754a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1754a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1754a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1754a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1754a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1754A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1754ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A8u;
        // 0x1754ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1754A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1754B0u;
}
