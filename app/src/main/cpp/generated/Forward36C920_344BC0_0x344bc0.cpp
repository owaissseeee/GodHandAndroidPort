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

// Function: Forward36C920_344BC0
// Address: 0x344bc0 - 0x344bf0
void Forward36C920_344BC0_0x344bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward36C920_344BC0_0x344bc0");
#endif

    ctx->pc = 0x344bc0u;

    // 0x344bc0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x344bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344bc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344bc8: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x344bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x344bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344bd0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x344bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x344bd4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x344bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x344bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344bdc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x344bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x344be0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x344be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x344be4: 0x80db248  j           func_36C920
    ctx->pc = 0x344BE4u;
    ctx->pc = 0x344BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BE4u;
    // 0x344be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x344BE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344BECu;
    // 0x344bec: 0x0  nop
    ctx->pc = 0x344becu;
    // NOP
    ctx->pc = 0x344bf0u;
}
