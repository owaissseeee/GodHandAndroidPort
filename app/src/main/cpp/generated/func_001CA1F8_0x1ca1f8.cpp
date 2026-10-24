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

// Function: func_001CA1F8
// Address: 0x1ca1f8 - 0x1ca238
void func_001CA1F8_0x1ca1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CA1F8_0x1ca1f8");
#endif

    switch (ctx->pc) {
        case 0x1ca228u: goto label_1ca228;
        default: break;
    }

    ctx->pc = 0x1ca1f8u;

    // 0x1ca1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca200: 0x908302f6  lbu         $v1, 0x2F6($a0)
    ctx->pc = 0x1ca200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x1ca204: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA204u;
    {
        const bool branch_taken_0x1ca204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA204u;
        // 0x1ca208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca204) {
            ctx->pc = 0x1CA21Cu;
            goto label_1ca21c;
        }
    }
    ctx->pc = 0x1CA20Cu;
    // 0x1ca20c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA20Cu;
    {
        const bool branch_taken_0x1ca20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA20Cu;
        // 0x1ca210: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca20c) {
            ctx->pc = 0x1CA220u;
            goto label_1ca220;
        }
    }
    ctx->pc = 0x1CA214u;
    // 0x1ca214: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA214u;
    {
        const bool branch_taken_0x1ca214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca214) {
            ctx->pc = 0x1CA22Cu;
            goto label_1ca22c;
        }
    }
    ctx->pc = 0x1CA21Cu;
label_1ca21c:
    // 0x1ca21c: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x1ca21cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ca220:
    // 0x1ca220: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CA220u;
    SET_GPR_U32(ctx, 31, 0x1CA228u);
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CA220u, 0x1CA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA228u;
label_1ca228:
    // 0x1ca228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca22c:
    // 0x1ca22c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA22Cu;
        // 0x1ca230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA234u;
    // 0x1ca234: 0x0  nop
    ctx->pc = 0x1ca234u;
    // NOP
    ctx->pc = 0x1ca238u;
}
