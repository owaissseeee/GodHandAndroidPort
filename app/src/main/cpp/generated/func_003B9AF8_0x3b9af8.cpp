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

// Function: func_003B9AF8
// Address: 0x3b9af8 - 0x3b9b20
void func_003B9AF8_0x3b9af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9AF8_0x3b9af8");
#endif

    switch (ctx->pc) {
        case 0x3b9af8u: goto label_3b9af8;
        case 0x3b9afcu: goto label_3b9afc;
        case 0x3b9b00u: goto label_3b9b00;
        case 0x3b9b04u: goto label_3b9b04;
        case 0x3b9b08u: goto label_3b9b08;
        case 0x3b9b0cu: goto label_3b9b0c;
        case 0x3b9b10u: goto label_3b9b10;
        case 0x3b9b14u: goto label_3b9b14;
        case 0x3b9b18u: goto label_3b9b18;
        case 0x3b9b1cu: goto label_3b9b1c;
        default: break;
    }

    ctx->pc = 0x3b9af8u;

label_3b9af8:
    // 0x3b9af8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3b9afc:
    // 0x3b9afc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b9b00:
    // 0x3b9b00: 0x8c42141c  lw          $v0, 0x141C($v0)
    ctx->pc = 0x3b9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5148)));
label_3b9b04:
    // 0x3b9b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b9b08:
    if (ctx->pc == 0x3B9B08u) {
        ctx->pc = 0x3B9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B04u;
        // 0x3b9b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B0Cu;
        goto label_3b9b0c;
    }
    ctx->pc = 0x3B9B04u;
    {
        const bool branch_taken_0x3b9b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B04u;
        // 0x3b9b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9b04) {
            ctx->pc = 0x3B9B14u;
            goto label_3b9b14;
        }
    }
    ctx->pc = 0x3B9B0Cu;
label_3b9b0c:
    // 0x3b9b0c: 0x40f809  jalr        $v0
label_3b9b10:
    if (ctx->pc == 0x3B9B10u) {
        ctx->pc = 0x3B9B14u;
        goto label_3b9b14;
    }
    ctx->pc = 0x3B9B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B9B14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9B0Cu, 0x3B9B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9B14u;
label_3b9b14:
    // 0x3b9b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9b18:
    // 0x3b9b18: 0x3e00008  jr          $ra
label_3b9b1c:
    if (ctx->pc == 0x3B9B1Cu) {
        ctx->pc = 0x3B9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B18u;
        // 0x3b9b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B20u;
        goto label_fallthrough_0x3b9b18;
    }
    ctx->pc = 0x3B9B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B18u;
        // 0x3b9b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b9b18:
    ctx->pc = 0x3B9B20u;
}
