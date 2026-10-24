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

// Function: func_00325FA8
// Address: 0x325fa8 - 0x325fd8
void func_00325FA8_0x325fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325FA8_0x325fa8");
#endif

    switch (ctx->pc) {
        case 0x325fa8u: goto label_325fa8;
        case 0x325facu: goto label_325fac;
        case 0x325fb0u: goto label_325fb0;
        case 0x325fb4u: goto label_325fb4;
        case 0x325fb8u: goto label_325fb8;
        case 0x325fbcu: goto label_325fbc;
        case 0x325fc0u: goto label_325fc0;
        case 0x325fc4u: goto label_325fc4;
        case 0x325fc8u: goto label_325fc8;
        case 0x325fccu: goto label_325fcc;
        case 0x325fd0u: goto label_325fd0;
        case 0x325fd4u: goto label_325fd4;
        default: break;
    }

    ctx->pc = 0x325fa8u;

label_325fa8:
    // 0x325fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_325fac:
    // 0x325fac: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x325facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_325fb0:
    // 0x325fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_325fb4:
    // 0x325fb4: 0x24425c20  addiu       $v0, $v0, 0x5C20
    ctx->pc = 0x325fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23584));
label_325fb8:
    // 0x325fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_325fbc:
    // 0x325fbc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_325fc0:
    if (ctx->pc == 0x325FC0u) {
        ctx->pc = 0x325FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FBCu;
        // 0x325fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FC4u;
        goto label_325fc4;
    }
    ctx->pc = 0x325FBCu;
    {
        const bool branch_taken_0x325fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fbc) {
            ctx->pc = 0x325FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325FBCu;
            // 0x325fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325FD0u;
            goto label_325fd0;
        }
    }
    ctx->pc = 0x325FC4u;
label_325fc4:
    // 0x325fc4: 0x60f809  jalr        $v1
label_325fc8:
    if (ctx->pc == 0x325FC8u) {
        ctx->pc = 0x325FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FC4u;
        // 0x325fc8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FCCu;
        goto label_325fcc;
    }
    ctx->pc = 0x325FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x325FCCu);
        ctx->pc = 0x325FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FC4u;
        // 0x325fc8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325FC4u, 0x325FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325FCCu;
label_325fcc:
    // 0x325fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_325fd0:
    // 0x325fd0: 0x3e00008  jr          $ra
label_325fd4:
    if (ctx->pc == 0x325FD4u) {
        ctx->pc = 0x325FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FD0u;
        // 0x325fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FD8u;
        goto label_fallthrough_0x325fd0;
    }
    ctx->pc = 0x325FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FD0u;
        // 0x325fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x325fd0:
    ctx->pc = 0x325FD8u;
}
