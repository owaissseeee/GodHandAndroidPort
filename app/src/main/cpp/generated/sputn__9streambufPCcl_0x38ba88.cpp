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

// Function: sputn__9streambufPCcl
// Address: 0x38ba88 - 0x38bab0
void sputn__9streambufPCcl_0x38ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sputn__9streambufPCcl_0x38ba88");
#endif

    switch (ctx->pc) {
        case 0x38ba88u: goto label_38ba88;
        case 0x38ba8cu: goto label_38ba8c;
        case 0x38ba90u: goto label_38ba90;
        case 0x38ba94u: goto label_38ba94;
        case 0x38ba98u: goto label_38ba98;
        case 0x38ba9cu: goto label_38ba9c;
        case 0x38baa0u: goto label_38baa0;
        case 0x38baa4u: goto label_38baa4;
        case 0x38baa8u: goto label_38baa8;
        case 0x38baacu: goto label_38baac;
        default: break;
    }

    ctx->pc = 0x38ba88u;

label_38ba88:
    // 0x38ba88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38ba8c:
    // 0x38ba8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38ba90:
    // 0x38ba90: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x38ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38ba94:
    // 0x38ba94: 0x84670030  lh          $a3, 0x30($v1)
    ctx->pc = 0x38ba94u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38ba98:
    // 0x38ba98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38ba9c:
    // 0x38ba9c: 0x40f809  jalr        $v0
label_38baa0:
    if (ctx->pc == 0x38BAA0u) {
        ctx->pc = 0x38BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA9Cu;
        // 0x38baa0: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BAA4u;
        goto label_38baa4;
    }
    ctx->pc = 0x38BA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38BAA4u);
        ctx->pc = 0x38BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA9Cu;
        // 0x38baa0: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA9Cu, 0x38BAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BAA4u;
label_38baa4:
    // 0x38baa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38baa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38baa8:
    // 0x38baa8: 0x3e00008  jr          $ra
label_38baac:
    if (ctx->pc == 0x38BAACu) {
        ctx->pc = 0x38BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAA8u;
        // 0x38baac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BAB0u;
        goto label_fallthrough_0x38baa8;
    }
    ctx->pc = 0x38BAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAA8u;
        // 0x38baac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38baa8:
    ctx->pc = 0x38BAB0u;
}
