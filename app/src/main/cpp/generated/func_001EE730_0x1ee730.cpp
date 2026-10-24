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

// Function: func_001EE730
// Address: 0x1ee730 - 0x1ee768
void func_001EE730_0x1ee730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EE730_0x1ee730");
#endif

    switch (ctx->pc) {
        case 0x1ee74cu: goto label_1ee74c;
        case 0x1ee75cu: goto label_1ee75c;
        default: break;
    }

    ctx->pc = 0x1ee730u;

    // 0x1ee730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ee734: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE734u;
    {
        const bool branch_taken_0x1ee734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE734u;
        // 0x1ee738: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee734) {
            ctx->pc = 0x1EE754u;
            goto label_1ee754;
        }
    }
    ctx->pc = 0x1EE73Cu;
    // 0x1ee73c: 0x24840df0  addiu       $a0, $a0, 0xDF0
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3568));
    // 0x1ee740: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee744: 0xc0b59ec  jal         func_2D67B0
    ctx->pc = 0x1EE744u;
    SET_GPR_U32(ctx, 31, 0x1EE74Cu);
    ctx->pc = 0x1EE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE744u;
    // 0x1ee748: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67B0u, 0x1EE744u, 0x1EE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE74Cu;
label_1ee74c:
    // 0x1ee74c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE74Cu;
    {
        const bool branch_taken_0x1ee74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE74Cu;
        // 0x1ee750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee74c) {
            ctx->pc = 0x1EE760u;
            goto label_1ee760;
        }
    }
    ctx->pc = 0x1EE754u;
label_1ee754:
    // 0x1ee754: 0xc0b5a1c  jal         func_2D6870
    ctx->pc = 0x1EE754u;
    SET_GPR_U32(ctx, 31, 0x1EE75Cu);
    ctx->pc = 0x1EE758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE754u;
    // 0x1ee758: 0x24840df0  addiu       $a0, $a0, 0xDF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6870u, 0x1EE754u, 0x1EE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE75Cu;
label_1ee75c:
    // 0x1ee75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee760:
    // 0x1ee760: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE760u;
        // 0x1ee764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE768u;
}
