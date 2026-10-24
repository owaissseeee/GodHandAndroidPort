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

// Function: func_00380E88
// Address: 0x380e88 - 0x380eb0
void func_00380E88_0x380e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380E88_0x380e88");
#endif

    switch (ctx->pc) {
        case 0x380ea4u: goto label_380ea4;
        default: break;
    }

    ctx->pc = 0x380e88u;

    // 0x380e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x380e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380e90: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x380e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x380e94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380E94u;
    {
        const bool branch_taken_0x380e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E94u;
        // 0x380e98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e94) {
            ctx->pc = 0x380EA8u;
            goto label_380ea8;
        }
    }
    ctx->pc = 0x380E9Cu;
    // 0x380e9c: 0xc0e03ac  jal         func_380EB0
    ctx->pc = 0x380E9Cu;
    SET_GPR_U32(ctx, 31, 0x380EA4u);
    ctx->pc = 0x380EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380EB0u, 0x380E9Cu, 0x380EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380EA4u;
label_380ea4:
    // 0x380ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_380ea8:
    // 0x380ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x380EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EA8u;
        // 0x380eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380EB0u;
}
