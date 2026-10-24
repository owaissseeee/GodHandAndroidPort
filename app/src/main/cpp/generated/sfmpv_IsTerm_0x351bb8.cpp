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

// Function: sfmpv_IsTerm
// Address: 0x351bb8 - 0x351c00
void sfmpv_IsTerm_0x351bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_IsTerm_0x351bb8");
#endif

    switch (ctx->pc) {
        case 0x351be0u: goto label_351be0;
        default: break;
    }

    ctx->pc = 0x351bb8u;

    // 0x351bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351bbc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x351bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x351bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351bc4: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x351bc4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x351bc8: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x351BC8u;
    {
        const bool branch_taken_0x351bc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x351BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BC8u;
        // 0x351bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351bc8) {
            ctx->pc = 0x351BF0u;
            goto label_351bf0;
        }
    }
    ctx->pc = 0x351BD0u;
    // 0x351bd0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x351BD0u;
    {
        const bool branch_taken_0x351bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bd0) {
            ctx->pc = 0x351BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351BD0u;
            // 0x351bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351BF0u;
            goto label_351bf0;
        }
    }
    ctx->pc = 0x351BD8u;
    // 0x351bd8: 0xc0d4700  jal         func_351C00
    ctx->pc = 0x351BD8u;
    SET_GPR_U32(ctx, 31, 0x351BE0u);
    ctx->pc = 0x351C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C00u, 0x351BD8u, 0x351BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351BE0u;
label_351be0:
    // 0x351be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351be4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x351BE4u;
    {
        const bool branch_taken_0x351be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x351BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BE4u;
        // 0x351be8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351be4) {
            ctx->pc = 0x351BF4u;
            goto label_351bf4;
        }
    }
    ctx->pc = 0x351BECu;
    // 0x351bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x351becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351bf0:
    // 0x351bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351bf4:
    // 0x351bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x351BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BF4u;
        // 0x351bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351BFCu;
    // 0x351bfc: 0x0  nop
    ctx->pc = 0x351bfcu;
    // NOP
    ctx->pc = 0x351c00u;
}
