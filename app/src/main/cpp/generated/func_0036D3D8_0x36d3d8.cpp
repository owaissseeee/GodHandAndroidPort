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

// Function: func_0036D3D8
// Address: 0x36d3d8 - 0x36d410
void func_0036D3D8_0x36d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D3D8_0x36d3d8");
#endif

    switch (ctx->pc) {
        case 0x36d3e8u: goto label_36d3e8;
        default: break;
    }

    ctx->pc = 0x36d3d8u;

    // 0x36d3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d3e0: 0xc0db504  jal         func_36D410
    ctx->pc = 0x36D3E0u;
    SET_GPR_U32(ctx, 31, 0x36D3E8u);
    ctx->pc = 0x36D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D410u, 0x36D3E0u, 0x36D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3E8u;
label_36d3e8:
    // 0x36d3e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36d3e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D3ECu;
    {
        const bool branch_taken_0x36d3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3ECu;
        // 0x36d3f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d3ec) {
            ctx->pc = 0x36D400u;
            goto label_36d400;
        }
    }
    ctx->pc = 0x36D3F4u;
    // 0x36d3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d3f8: 0x80db518  j           func_36D460
    ctx->pc = 0x36D3F8u;
    ctx->pc = 0x36D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D3F8u;
    // 0x36d3fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D460u, 0x36D3F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D400u;
label_36d400:
    // 0x36d400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d404: 0x3e00008  jr          $ra
    ctx->pc = 0x36D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D404u;
        // 0x36d408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D40Cu;
    // 0x36d40c: 0x0  nop
    ctx->pc = 0x36d40cu;
    // NOP
    ctx->pc = 0x36d410u;
}
