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

// Function: cIDBase_setDispParent
// Address: 0x2aa598 - 0x2aa5f0
void cIDBase_setDispParent_0x2aa598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_setDispParent_0x2aa598");
#endif

    switch (ctx->pc) {
        case 0x2aa5e0u: goto label_2aa5e0;
        default: break;
    }

    ctx->pc = 0x2aa598u;

label_2aa598:
    // 0x2aa598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa5a0: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x2aa5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2aa5a4: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2AA5A4u;
    {
        const bool branch_taken_0x2aa5a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5A4u;
        // 0x2aa5a8: 0x38c20001  xori        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5a4) {
            ctx->pc = 0x2AA5E0u;
            goto label_2aa5e0;
        }
    }
    ctx->pc = 0x2AA5ACu;
    // 0x2aa5ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA5ACu;
    {
        const bool branch_taken_0x2aa5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5ACu;
        // 0x2aa5b0: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5ac) {
            ctx->pc = 0x2AA5C4u;
            goto label_2aa5c4;
        }
    }
    ctx->pc = 0x2AA5B4u;
    // 0x2aa5b4: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2aa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2aa5b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aa5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2aa5bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA5BCu;
    {
        const bool branch_taken_0x2aa5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5BCu;
        // 0x2aa5c0: 0xace2002c  sw          $v0, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5bc) {
            ctx->pc = 0x2AA5D8u;
            goto label_2aa5d8;
        }
    }
    ctx->pc = 0x2AA5C4u;
label_2aa5c4:
    // 0x2aa5c4: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x2aa5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2aa5c8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2aa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x2aa5cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aa5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aa5d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2aa5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2aa5d4: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x2aa5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
label_2aa5d8:
    // 0x2aa5d8: 0xc0aa966  jal         func_2AA598
    ctx->pc = 0x2AA5D8u;
    SET_GPR_U32(ctx, 31, 0x2AA5E0u);
    ctx->pc = 0x2AA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5D8u;
    // 0x2aa5dc: 0x8ca50020  lw          $a1, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA598u;
    goto label_2aa598;
    ctx->pc = 0x2AA5E0u;
label_2aa5e0:
    // 0x2aa5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA5E4u;
        // 0x2aa5e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA5ECu;
    // 0x2aa5ec: 0x0  nop
    ctx->pc = 0x2aa5ecu;
    // NOP
    ctx->pc = 0x2aa5f0u;
}
