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

// Function: SFXLIB_Error
// Address: 0x35fbd8 - 0x35fc18
void SFXLIB_Error_0x35fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFXLIB_Error_0x35fbd8");
#endif

    switch (ctx->pc) {
        case 0x35fbd8u: goto label_35fbd8;
        case 0x35fbdcu: goto label_35fbdc;
        case 0x35fbe0u: goto label_35fbe0;
        case 0x35fbe4u: goto label_35fbe4;
        case 0x35fbe8u: goto label_35fbe8;
        case 0x35fbecu: goto label_35fbec;
        case 0x35fbf0u: goto label_35fbf0;
        case 0x35fbf4u: goto label_35fbf4;
        case 0x35fbf8u: goto label_35fbf8;
        case 0x35fbfcu: goto label_35fbfc;
        case 0x35fc00u: goto label_35fc00;
        case 0x35fc04u: goto label_35fc04;
        case 0x35fc08u: goto label_35fc08;
        case 0x35fc0cu: goto label_35fc0c;
        case 0x35fc10u: goto label_35fc10;
        case 0x35fc14u: goto label_35fc14;
        default: break;
    }

    ctx->pc = 0x35fbd8u;

label_35fbd8:
    // 0x35fbd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_35fbdc:
    // 0x35fbdc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_35fbe0:
    // 0x35fbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35fbe4:
    // 0x35fbe4: 0x2442e340  addiu       $v0, $v0, -0x1CC0
    ctx->pc = 0x35fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959936));
label_35fbe8:
    // 0x35fbe8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35fbec:
    // 0x35fbec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35fbf0:
    // 0x35fbf0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x35fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35fbf4:
    // 0x35fbf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_35fbf8:
    // 0x35fbf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35fbfc:
    // 0x35fbfc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_35fc00:
    if (ctx->pc == 0x35FC00u) {
        ctx->pc = 0x35FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBFCu;
        // 0x35fc00: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC04u;
        goto label_35fc04;
    }
    ctx->pc = 0x35FBFCu;
    {
        const bool branch_taken_0x35fbfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBFCu;
        // 0x35fc00: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fbfc) {
            ctx->pc = 0x35FC0Cu;
            goto label_35fc0c;
        }
    }
    ctx->pc = 0x35FC04u;
label_35fc04:
    // 0x35fc04: 0xc0f809  jalr        $a2
label_35fc08:
    if (ctx->pc == 0x35FC08u) {
        ctx->pc = 0x35FC0Cu;
        goto label_35fc0c;
    }
    ctx->pc = 0x35FC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x35FC0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC04u, 0x35FC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35FC0Cu;
label_35fc0c:
    // 0x35fc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35fc10:
    // 0x35fc10: 0x3e00008  jr          $ra
label_35fc14:
    if (ctx->pc == 0x35FC14u) {
        ctx->pc = 0x35FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC10u;
        // 0x35fc14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35FC18u;
        goto label_fallthrough_0x35fc10;
    }
    ctx->pc = 0x35FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC10u;
        // 0x35fc14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35fc10:
    ctx->pc = 0x35FC18u;
}
