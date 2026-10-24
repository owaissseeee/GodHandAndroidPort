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

// Function: func_0027E3F8
// Address: 0x27e3f8 - 0x27e438
void func_0027E3F8_0x27e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E3F8_0x27e3f8");
#endif

    switch (ctx->pc) {
        case 0x27e428u: goto label_27e428;
        default: break;
    }

    ctx->pc = 0x27e3f8u;

    // 0x27e3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e400: 0x908302f6  lbu         $v1, 0x2F6($a0)
    ctx->pc = 0x27e400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x27e404: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E404u;
    {
        const bool branch_taken_0x27e404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E404u;
        // 0x27e408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e404) {
            ctx->pc = 0x27E41Cu;
            goto label_27e41c;
        }
    }
    ctx->pc = 0x27E40Cu;
    // 0x27e40c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E40Cu;
    {
        const bool branch_taken_0x27e40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E40Cu;
        // 0x27e410: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e40c) {
            ctx->pc = 0x27E420u;
            goto label_27e420;
        }
    }
    ctx->pc = 0x27E414u;
    // 0x27e414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27E414u;
    {
        const bool branch_taken_0x27e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e414) {
            ctx->pc = 0x27E42Cu;
            goto label_27e42c;
        }
    }
    ctx->pc = 0x27E41Cu;
label_27e41c:
    // 0x27e41c: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x27e41cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
label_27e420:
    // 0x27e420: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27E420u;
    SET_GPR_U32(ctx, 31, 0x27E428u);
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27E420u, 0x27E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E428u;
label_27e428:
    // 0x27e428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e42c:
    // 0x27e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E42Cu;
        // 0x27e430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E434u;
    // 0x27e434: 0x0  nop
    ctx->pc = 0x27e434u;
    // NOP
    ctx->pc = 0x27e438u;
}
