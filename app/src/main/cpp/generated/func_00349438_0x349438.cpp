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

// Function: func_00349438
// Address: 0x349438 - 0x349468
void func_00349438_0x349438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349438_0x349438");
#endif

    switch (ctx->pc) {
        case 0x349438u: goto label_349438;
        case 0x34943cu: goto label_34943c;
        case 0x349440u: goto label_349440;
        case 0x349444u: goto label_349444;
        case 0x349448u: goto label_349448;
        case 0x34944cu: goto label_34944c;
        case 0x349450u: goto label_349450;
        case 0x349454u: goto label_349454;
        case 0x349458u: goto label_349458;
        case 0x34945cu: goto label_34945c;
        case 0x349460u: goto label_349460;
        case 0x349464u: goto label_349464;
        default: break;
    }

    ctx->pc = 0x349438u;

label_349438:
    // 0x349438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34943c:
    // 0x34943c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_349440:
    // 0x349440: 0xc0d14ac  jal         func_3452B0
label_349444:
    if (ctx->pc == 0x349444u) {
        ctx->pc = 0x349448u;
        goto label_349448;
    }
    ctx->pc = 0x349440u;
    SET_GPR_U32(ctx, 31, 0x349448u);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x349440u, 0x349448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349448u;
label_349448:
    // 0x349448: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x349448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_34944c:
    // 0x34944c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_349450:
    if (ctx->pc == 0x349450u) {
        ctx->pc = 0x349450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34944Cu;
        // 0x349450: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349454u;
        goto label_349454;
    }
    ctx->pc = 0x34944Cu;
    {
        const bool branch_taken_0x34944c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34944Cu;
        // 0x349450: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34944c) {
            ctx->pc = 0x34945Cu;
            goto label_34945c;
        }
    }
    ctx->pc = 0x349454u;
label_349454:
    // 0x349454: 0x60f809  jalr        $v1
label_349458:
    if (ctx->pc == 0x349458u) {
        ctx->pc = 0x34945Cu;
        goto label_34945c;
    }
    ctx->pc = 0x349454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34945Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349454u, 0x34945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34945Cu;
label_34945c:
    // 0x34945c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349460:
    // 0x349460: 0x3e00008  jr          $ra
label_349464:
    if (ctx->pc == 0x349464u) {
        ctx->pc = 0x349464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349460u;
        // 0x349464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349468u;
        goto label_fallthrough_0x349460;
    }
    ctx->pc = 0x349460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349460u;
        // 0x349464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x349460:
    ctx->pc = 0x349468u;
}
