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

// Function: func_00329EA8
// Address: 0x329ea8 - 0x329ed8
void func_00329EA8_0x329ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329EA8_0x329ea8");
#endif

    switch (ctx->pc) {
        case 0x329ebcu: goto label_329ebc;
        case 0x329ec4u: goto label_329ec4;
        default: break;
    }

    ctx->pc = 0x329ea8u;

    // 0x329ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329eb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x329eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x329eb4: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x329EB4u;
    SET_GPR_U32(ctx, 31, 0x329EBCu);
    ctx->pc = 0x329EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EB4u;
    // 0x329eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x329EB4u, 0x329EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EBCu;
label_329ebc:
    // 0x329ebc: 0xc0ca7b6  jal         func_329ED8
    ctx->pc = 0x329EBCu;
    SET_GPR_U32(ctx, 31, 0x329EC4u);
    ctx->pc = 0x329EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EBCu;
    // 0x329ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329ED8u, 0x329EBCu, 0x329EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329EC4u;
label_329ec4:
    // 0x329ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329ec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x329ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329ecc: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x329ECCu;
    ctx->pc = 0x329ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329ECCu;
    // 0x329ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x329ECCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329ED4u;
    // 0x329ed4: 0x0  nop
    ctx->pc = 0x329ed4u;
    // NOP
    ctx->pc = 0x329ed8u;
}
