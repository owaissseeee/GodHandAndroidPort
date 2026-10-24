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

// Function: classFADE_status
// Address: 0x307718 - 0x307760
void classFADE_status_0x307718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classFADE_status_0x307718");
#endif

    ctx->pc = 0x307718u;

    // 0x307718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30771c: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x30771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x307720: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x307720u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307724: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x307724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307728: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x307728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x30772c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30772cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307730: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x307730u;
    {
        const bool branch_taken_0x307730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307730) {
            ctx->pc = 0x307748u;
            goto label_307748;
        }
    }
    ctx->pc = 0x307738u;
    // 0x307738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x307738u;
    {
        const bool branch_taken_0x307738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307738) {
            ctx->pc = 0x307748u;
            goto label_307748;
        }
    }
    ctx->pc = 0x307740u;
    // 0x307740: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x307740u;
    {
        const bool branch_taken_0x307740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307740) {
            ctx->pc = 0x307748u;
            goto label_307748;
        }
    }
    ctx->pc = 0x307748u;
label_307748:
    // 0x307748: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x307748u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30774c: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x30774cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307750: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x307750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307754: 0x3e00008  jr          $ra
    ctx->pc = 0x307754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30775Cu;
    // 0x30775c: 0x0  nop
    ctx->pc = 0x30775cu;
    // NOP
    ctx->pc = 0x307760u;
}
