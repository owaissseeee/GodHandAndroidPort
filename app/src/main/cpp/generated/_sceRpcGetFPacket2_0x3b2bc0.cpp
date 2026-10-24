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

// Function: _sceRpcGetFPacket2
// Address: 0x3b2bc0 - 0x3b2c00
void _sceRpcGetFPacket2_0x3b2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceRpcGetFPacket2_0x3b2bc0");
#endif

    switch (ctx->pc) {
        case 0x3b2be4u: goto label_3b2be4;
        default: break;
    }

    ctx->pc = 0x3b2bc0u;

    // 0x3b2bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2bc4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2BC4u;
    {
        const bool branch_taken_0x3b2bc4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3B2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BC4u;
        // 0x3b2bc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2bc4) {
            ctx->pc = 0x3B2BDCu;
            goto label_3b2bdc;
        }
    }
    ctx->pc = 0x3B2BCCu;
    // 0x3b2bcc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3b2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b2bd0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3b2bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b2bd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2BD4u;
    {
        const bool branch_taken_0x3b2bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2bd4) {
            ctx->pc = 0x3B2BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2BD4u;
            // 0x3b2bd8: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2BECu;
            goto label_3b2bec;
        }
    }
    ctx->pc = 0x3B2BDCu;
label_3b2bdc:
    // 0x3b2bdc: 0xc0ecae4  jal         func_3B2B90
    ctx->pc = 0x3B2BDCu;
    SET_GPR_U32(ctx, 31, 0x3B2BE4u);
    ctx->pc = 0x3B2B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B90u, 0x3B2BDCu, 0x3B2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2BE4u;
label_3b2be4:
    // 0x3b2be4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2BE4u;
    {
        const bool branch_taken_0x3b2be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BE4u;
        // 0x3b2be8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2be4) {
            ctx->pc = 0x3B2BF8u;
            goto label_3b2bf8;
        }
    }
    ctx->pc = 0x3B2BECu;
label_3b2bec:
    // 0x3b2bec: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3b2bf0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2bf8:
    // 0x3b2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BF8u;
        // 0x3b2bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2C00u;
}
