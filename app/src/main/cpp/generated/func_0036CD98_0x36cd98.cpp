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

// Function: func_0036CD98
// Address: 0x36cd98 - 0x36cdc0
void func_0036CD98_0x36cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CD98_0x36cd98");
#endif

    switch (ctx->pc) {
        case 0x36cd98u: goto label_36cd98;
        case 0x36cd9cu: goto label_36cd9c;
        case 0x36cda0u: goto label_36cda0;
        case 0x36cda4u: goto label_36cda4;
        case 0x36cda8u: goto label_36cda8;
        case 0x36cdacu: goto label_36cdac;
        case 0x36cdb0u: goto label_36cdb0;
        case 0x36cdb4u: goto label_36cdb4;
        case 0x36cdb8u: goto label_36cdb8;
        case 0x36cdbcu: goto label_36cdbc;
        default: break;
    }

    ctx->pc = 0x36cd98u;

label_36cd98:
    // 0x36cd98: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36cd9c:
    // 0x36cd9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cda0:
    // 0x36cda0: 0x8c42200c  lw          $v0, 0x200C($v0)
    ctx->pc = 0x36cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8204)));
label_36cda4:
    // 0x36cda4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cda8:
    if (ctx->pc == 0x36CDA8u) {
        ctx->pc = 0x36CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDA4u;
        // 0x36cda8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CDACu;
        goto label_36cdac;
    }
    ctx->pc = 0x36CDA4u;
    {
        const bool branch_taken_0x36cda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDA4u;
        // 0x36cda8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cda4) {
            ctx->pc = 0x36CDB4u;
            goto label_36cdb4;
        }
    }
    ctx->pc = 0x36CDACu;
label_36cdac:
    // 0x36cdac: 0x40f809  jalr        $v0
label_36cdb0:
    if (ctx->pc == 0x36CDB0u) {
        ctx->pc = 0x36CDB4u;
        goto label_36cdb4;
    }
    ctx->pc = 0x36CDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CDB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDACu, 0x36CDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CDB4u;
label_36cdb4:
    // 0x36cdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cdb8:
    // 0x36cdb8: 0x3e00008  jr          $ra
label_36cdbc:
    if (ctx->pc == 0x36CDBCu) {
        ctx->pc = 0x36CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDB8u;
        // 0x36cdbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CDC0u;
        goto label_fallthrough_0x36cdb8;
    }
    ctx->pc = 0x36CDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDB8u;
        // 0x36cdbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cdb8:
    ctx->pc = 0x36CDC0u;
}
