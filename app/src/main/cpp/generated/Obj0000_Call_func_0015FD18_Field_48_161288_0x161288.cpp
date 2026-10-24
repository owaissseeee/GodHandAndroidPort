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

// Function: Obj0000_Call_func_0015FD18_Field_48_161288
// Address: 0x161288 - 0x1612a8
void Obj0000_Call_func_0015FD18_Field_48_161288_0x161288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Call_func_0015FD18_Field_48_161288_0x161288");
#endif

    switch (ctx->pc) {
        case 0x161298u: goto label_161298;
        default: break;
    }

    ctx->pc = 0x161288u;

    // 0x161288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16128c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161290: 0xc057f46  jal         func_15FD18
    ctx->pc = 0x161290u;
    SET_GPR_U32(ctx, 31, 0x161298u);
    ctx->pc = 0x161294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161290u;
    // 0x161294: 0x8c850048  lw          $a1, 0x48($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD18u, 0x161290u, 0x161298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161298u;
label_161298:
    // 0x161298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16129c: 0x3e00008  jr          $ra
    ctx->pc = 0x16129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16129Cu;
        // 0x1612a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16129Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1612A4u;
    // 0x1612a4: 0x0  nop
    ctx->pc = 0x1612a4u;
    // NOP
    ctx->pc = 0x1612a8u;
}
