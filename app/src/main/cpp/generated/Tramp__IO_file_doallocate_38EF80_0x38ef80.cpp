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

// Function: Tramp__IO_file_doallocate_38EF80
// Address: 0x38ef80 - 0x38efa0
void Tramp__IO_file_doallocate_38EF80_0x38ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp__IO_file_doallocate_38EF80_0x38ef80");
#endif

    switch (ctx->pc) {
        case 0x38ef90u: goto label_38ef90;
        default: break;
    }

    ctx->pc = 0x38ef80u;

    // 0x38ef80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ef84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ef88: 0xc0e3cf6  jal         func_38F3D8
    ctx->pc = 0x38EF88u;
    SET_GPR_U32(ctx, 31, 0x38EF90u);
    ctx->pc = 0x38F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F3D8u, 0x38EF88u, 0x38EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF90u;
label_38ef90:
    // 0x38ef90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x38EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF94u;
        // 0x38ef98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EF9Cu;
    // 0x38ef9c: 0x0  nop
    ctx->pc = 0x38ef9cu;
    // NOP
    ctx->pc = 0x38efa0u;
}
