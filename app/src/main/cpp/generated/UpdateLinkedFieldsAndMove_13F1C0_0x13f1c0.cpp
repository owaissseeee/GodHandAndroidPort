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

// Function: UpdateLinkedFieldsAndMove_13F1C0
// Address: 0x13f1c0 - 0x13f208
void UpdateLinkedFieldsAndMove_13F1C0_0x13f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateLinkedFieldsAndMove_13F1C0_0x13f1c0");
#endif

    switch (ctx->pc) {
        case 0x13f1fcu: goto label_13f1fc;
        default: break;
    }

    ctx->pc = 0x13f1c0u;

    // 0x13f1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f1c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13f1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f1cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13f1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f1d0: 0x8ca2009c  lw          $v0, 0x9C($a1)
    ctx->pc = 0x13f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x13f1d4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F1D4u;
    {
        const bool branch_taken_0x13f1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13f1d4) {
            ctx->pc = 0x13F1F4u;
            goto label_13f1f4;
        }
    }
    ctx->pc = 0x13F1DCu;
    // 0x13f1dc: 0x94a2009c  lhu         $v0, 0x9C($a1)
    ctx->pc = 0x13f1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x13f1e0: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x13f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x13f1e4: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x13f1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x13f1e8: 0x8ca40094  lw          $a0, 0x94($a1)
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x13f1ec: 0x94a2009c  lhu         $v0, 0x9C($a1)
    ctx->pc = 0x13f1ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x13f1f0: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x13f1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
label_13f1f4:
    // 0x13f1f4: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13F1F4u;
    SET_GPR_U32(ctx, 31, 0x13F1FCu);
    ctx->pc = 0x13F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1F4u;
    // 0x13f1f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13F1F4u, 0x13F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F1FCu;
label_13f1fc:
    // 0x13f1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f200: 0x3e00008  jr          $ra
    ctx->pc = 0x13F200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F200u;
        // 0x13f204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F208u;
}
