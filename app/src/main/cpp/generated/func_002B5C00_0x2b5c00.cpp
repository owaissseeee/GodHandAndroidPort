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

// Function: func_002B5C00
// Address: 0x2b5c00 - 0x2b5c20
void func_002B5C00_0x2b5c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B5C00_0x2b5c00");
#endif

    switch (ctx->pc) {
        case 0x2b5c14u: goto label_2b5c14;
        default: break;
    }

    ctx->pc = 0x2b5c00u;

    // 0x2b5c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5c0c: 0xc0ad40a  jal         func_2B5028
    ctx->pc = 0x2B5C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C14u);
    ctx->pc = 0x2B5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C0Cu;
    // 0x2b5c10: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5028u, 0x2B5C0Cu, 0x2B5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C14u;
label_2b5c14:
    // 0x2b5c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C18u;
        // 0x2b5c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C20u;
}
