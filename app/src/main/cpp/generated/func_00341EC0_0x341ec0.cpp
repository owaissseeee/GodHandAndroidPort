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

// Function: func_00341EC0
// Address: 0x341ec0 - 0x341f00
void func_00341EC0_0x341ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341EC0_0x341ec0");
#endif

    ctx->pc = 0x341ec0u;

    // 0x341ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341ecc: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x341eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x341ed0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x341ED0u;
    {
        const bool branch_taken_0x341ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341ED0u;
        // 0x341ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ed0) {
            ctx->pc = 0x341EE8u;
            goto label_341ee8;
        }
    }
    ctx->pc = 0x341ED8u;
    // 0x341ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341edc: 0x80d0746  j           func_341D18
    ctx->pc = 0x341EDCu;
    ctx->pc = 0x341EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EDCu;
    // 0x341ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D18u, 0x341EDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341EE4u;
    // 0x341ee4: 0x0  nop
    ctx->pc = 0x341ee4u;
    // NOP
label_341ee8:
    // 0x341ee8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341EE8u;
    {
        const bool branch_taken_0x341ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EE8u;
        // 0x341eec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ee8) {
            ctx->pc = 0x341EF8u;
            goto label_341ef8;
        }
    }
    ctx->pc = 0x341EF0u;
    // 0x341ef0: 0x80d06e6  j           func_341B98
    ctx->pc = 0x341EF0u;
    ctx->pc = 0x341EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EF0u;
    // 0x341ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341B98u, 0x341EF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341EF8u;
label_341ef8:
    // 0x341ef8: 0x80d0680  j           func_341A00
    ctx->pc = 0x341EF8u;
    ctx->pc = 0x341EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EF8u;
    // 0x341efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x341EF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341F00u;
}
