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

// Function: func_0038A628
// Address: 0x38a628 - 0x38a660
void func_0038A628_0x38a628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A628_0x38a628");
#endif

    switch (ctx->pc) {
        case 0x38a64cu: goto label_38a64c;
        default: break;
    }

    ctx->pc = 0x38a628u;

    // 0x38a628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a638: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x38a638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x38a63c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a640: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x38a640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x38a644: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x38A644u;
    SET_GPR_U32(ctx, 31, 0x38A64Cu);
    ctx->pc = 0x38A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A644u;
    // 0x38a648: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38A644u, 0x38A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A64Cu;
label_38a64c:
    // 0x38a64c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a658: 0x3e00008  jr          $ra
    ctx->pc = 0x38A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A658u;
        // 0x38a65c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A660u;
}
