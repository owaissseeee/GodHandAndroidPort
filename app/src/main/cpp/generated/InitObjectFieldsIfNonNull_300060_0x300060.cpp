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

// Function: InitObjectFieldsIfNonNull_300060
// Address: 0x300060 - 0x300088
void InitObjectFieldsIfNonNull_300060_0x300060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectFieldsIfNonNull_300060_0x300060");
#endif

    switch (ctx->pc) {
        case 0x300078u: goto label_300078;
        default: break;
    }

    ctx->pc = 0x300060u;

    // 0x300060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x300060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x300064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x300064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300068u;
    {
        const bool branch_taken_0x300068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300068u;
        // 0x30006c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300068) {
            ctx->pc = 0x300078u;
            goto label_300078;
        }
    }
    ctx->pc = 0x300070u;
    // 0x300070: 0xc0bdc44  jal         func_2F7110
    ctx->pc = 0x300070u;
    SET_GPR_U32(ctx, 31, 0x300078u);
    ctx->pc = 0x2F7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7110u, 0x300070u, 0x300078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300078u;
label_300078:
    // 0x300078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30007c: 0x3e00008  jr          $ra
    ctx->pc = 0x30007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30007Cu;
        // 0x300080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30007Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300084u;
    // 0x300084: 0x0  nop
    ctx->pc = 0x300084u;
    // NOP
    ctx->pc = 0x300088u;
}
