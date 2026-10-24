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

// Function: func_00345B88
// Address: 0x345b88 - 0x345be0
void func_00345B88_0x345b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345B88_0x345b88");
#endif

    switch (ctx->pc) {
        case 0x345ba8u: goto label_345ba8;
        case 0x345bccu: goto label_345bcc;
        default: break;
    }

    ctx->pc = 0x345b88u;

    // 0x345b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345b94: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x345b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x345b98: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x345B98u;
    {
        const bool branch_taken_0x345b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B98u;
        // 0x345b9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b98) {
            ctx->pc = 0x345BD4u;
            goto label_345bd4;
        }
    }
    ctx->pc = 0x345BA0u;
    // 0x345ba0: 0xc0d5bbe  jal         func_356EF8
    ctx->pc = 0x345BA0u;
    SET_GPR_U32(ctx, 31, 0x345BA8u);
    ctx->pc = 0x356EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356EF8u, 0x345BA0u, 0x345BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345BA8u;
label_345ba8:
    // 0x345ba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345bac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x345BACu;
    {
        const bool branch_taken_0x345bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BACu;
        // 0x345bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345bac) {
            ctx->pc = 0x345BD0u;
            goto label_345bd0;
        }
    }
    ctx->pc = 0x345BB4u;
    // 0x345bb4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345BB4u;
    {
        const bool branch_taken_0x345bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x345BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BB4u;
        // 0x345bb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345bb4) {
            ctx->pc = 0x345BD0u;
            goto label_345bd0;
        }
    }
    ctx->pc = 0x345BBCu;
    // 0x345bbc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x345bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x345bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x345bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bc4: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x345BC4u;
    SET_GPR_U32(ctx, 31, 0x345BCCu);
    ctx->pc = 0x345BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345BC4u;
    // 0x345bc8: 0x24847ec8  addiu       $a0, $a0, 0x7EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345BC4u, 0x345BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345BCCu;
label_345bcc:
    // 0x345bcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x345bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345bd0:
    // 0x345bd0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x345bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_345bd4:
    // 0x345bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x345BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BD8u;
        // 0x345bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345BE0u;
}
