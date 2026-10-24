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

// Function: __ls__7ostreamPFR7ostream_R7ostream
// Address: 0x38a478 - 0x38a498
void ps2___ls__7ostreamPFR7ostream_R7ostream_0x38a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamPFR7ostream_R7ostream_0x38a478");
#endif

    switch (ctx->pc) {
        case 0x38a478u: goto label_38a478;
        case 0x38a47cu: goto label_38a47c;
        case 0x38a480u: goto label_38a480;
        case 0x38a484u: goto label_38a484;
        case 0x38a488u: goto label_38a488;
        case 0x38a48cu: goto label_38a48c;
        case 0x38a490u: goto label_38a490;
        case 0x38a494u: goto label_38a494;
        default: break;
    }

    ctx->pc = 0x38a478u;

label_38a478:
    // 0x38a478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38a47c:
    // 0x38a47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38a480:
    // 0x38a480: 0xa0f809  jalr        $a1
label_38a484:
    if (ctx->pc == 0x38A484u) {
        ctx->pc = 0x38A488u;
        goto label_38a488;
    }
    ctx->pc = 0x38A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x38A488u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A480u, 0x38A488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A488u;
label_38a488:
    // 0x38a488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38a48c:
    // 0x38a48c: 0x3e00008  jr          $ra
label_38a490:
    if (ctx->pc == 0x38A490u) {
        ctx->pc = 0x38A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A48Cu;
        // 0x38a490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A494u;
        goto label_38a494;
    }
    ctx->pc = 0x38A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A48Cu;
        // 0x38a490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A494u;
label_38a494:
    // 0x38a494: 0x0  nop
    ctx->pc = 0x38a494u;
    // NOP
    ctx->pc = 0x38a498u;
}
