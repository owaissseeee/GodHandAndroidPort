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

// Function: opfx__7ostream
// Address: 0x38a700 - 0x38a740
void opfx__7ostream_0x38a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("opfx__7ostream_0x38a700");
#endif

    switch (ctx->pc) {
        case 0x38a72cu: goto label_38a72c;
        default: break;
    }

    ctx->pc = 0x38a700u;

    // 0x38a700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a708: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x38a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38a70c: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x38a70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x38a710: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A710u;
    {
        const bool branch_taken_0x38a710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A710u;
        // 0x38a714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a710) {
            ctx->pc = 0x38A730u;
            goto label_38a730;
        }
    }
    ctx->pc = 0x38A718u;
    // 0x38a718: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x38a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38a71c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A71Cu;
    {
        const bool branch_taken_0x38a71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A71Cu;
        // 0x38a720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a71c) {
            ctx->pc = 0x38A730u;
            goto label_38a730;
        }
    }
    ctx->pc = 0x38A724u;
    // 0x38a724: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38A724u;
    SET_GPR_U32(ctx, 31, 0x38A72Cu);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38A724u, 0x38A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A72Cu;
label_38a72c:
    // 0x38a72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a730:
    // 0x38a730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a734: 0x3e00008  jr          $ra
    ctx->pc = 0x38A734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A734u;
        // 0x38a738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A73Cu;
    // 0x38a73c: 0x0  nop
    ctx->pc = 0x38a73cu;
    // NOP
    ctx->pc = 0x38a740u;
}
