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

// Function: SFBUF_DestroySj
// Address: 0x34bd58 - 0x34bd98
void SFBUF_DestroySj_0x34bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFBUF_DestroySj_0x34bd58");
#endif

    switch (ctx->pc) {
        case 0x34bd70u: goto label_34bd70;
        case 0x34bd7cu: goto label_34bd7c;
        default: break;
    }

    ctx->pc = 0x34bd58u;

    // 0x34bd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34bd5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34bd64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34bd68: 0xc0d2f66  jal         func_34BD98
    ctx->pc = 0x34BD68u;
    SET_GPR_U32(ctx, 31, 0x34BD70u);
    ctx->pc = 0x34BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD68u;
    // 0x34bd6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BD98u, 0x34BD68u, 0x34BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD70u;
label_34bd70:
    // 0x34bd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd74: 0xc0d2f66  jal         func_34BD98
    ctx->pc = 0x34BD74u;
    SET_GPR_U32(ctx, 31, 0x34BD7Cu);
    ctx->pc = 0x34BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD74u;
    // 0x34bd78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BD98u, 0x34BD74u, 0x34BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD7Cu;
label_34bd7c:
    // 0x34bd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34bd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bd84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bd8c: 0x80d2f66  j           func_34BD98
    ctx->pc = 0x34BD8Cu;
    ctx->pc = 0x34BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD8Cu;
    // 0x34bd90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BD98u, 0x34BD8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34BD94u;
    // 0x34bd94: 0x0  nop
    ctx->pc = 0x34bd94u;
    // NOP
    ctx->pc = 0x34bd98u;
}
