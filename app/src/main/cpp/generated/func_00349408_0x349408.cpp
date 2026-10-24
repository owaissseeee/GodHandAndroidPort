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

// Function: func_00349408
// Address: 0x349408 - 0x349438
void func_00349408_0x349408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349408_0x349408");
#endif

    switch (ctx->pc) {
        case 0x349408u: goto label_349408;
        case 0x34940cu: goto label_34940c;
        case 0x349410u: goto label_349410;
        case 0x349414u: goto label_349414;
        case 0x349418u: goto label_349418;
        case 0x34941cu: goto label_34941c;
        case 0x349420u: goto label_349420;
        case 0x349424u: goto label_349424;
        case 0x349428u: goto label_349428;
        case 0x34942cu: goto label_34942c;
        case 0x349430u: goto label_349430;
        case 0x349434u: goto label_349434;
        default: break;
    }

    ctx->pc = 0x349408u;

label_349408:
    // 0x349408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34940c:
    // 0x34940c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_349410:
    // 0x349410: 0xc0d14ac  jal         func_3452B0
label_349414:
    if (ctx->pc == 0x349414u) {
        ctx->pc = 0x349418u;
        goto label_349418;
    }
    ctx->pc = 0x349410u;
    SET_GPR_U32(ctx, 31, 0x349418u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x349410u, 0x349418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349418u;
label_349418:
    // 0x349418: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x349418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_34941c:
    // 0x34941c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_349420:
    if (ctx->pc == 0x349420u) {
        ctx->pc = 0x349420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34941Cu;
        // 0x349420: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349424u;
        goto label_349424;
    }
    ctx->pc = 0x34941Cu;
    {
        const bool branch_taken_0x34941c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34941Cu;
        // 0x349420: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34941c) {
            ctx->pc = 0x34942Cu;
            goto label_34942c;
        }
    }
    ctx->pc = 0x349424u;
label_349424:
    // 0x349424: 0x60f809  jalr        $v1
label_349428:
    if (ctx->pc == 0x349428u) {
        ctx->pc = 0x34942Cu;
        goto label_34942c;
    }
    ctx->pc = 0x349424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34942Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349424u, 0x34942Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34942Cu;
label_34942c:
    // 0x34942c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34942cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349430:
    // 0x349430: 0x3e00008  jr          $ra
label_349434:
    if (ctx->pc == 0x349434u) {
        ctx->pc = 0x349434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349430u;
        // 0x349434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349438u;
        goto label_fallthrough_0x349430;
    }
    ctx->pc = 0x349430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349430u;
        // 0x349434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x349430:
    ctx->pc = 0x349438u;
}
