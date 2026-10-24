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

// Function: func_00338E98
// Address: 0x338e98 - 0x338ec8
void func_00338E98_0x338e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338E98_0x338e98");
#endif

    switch (ctx->pc) {
        case 0x338eacu: goto label_338eac;
        case 0x338eb4u: goto label_338eb4;
        default: break;
    }

    ctx->pc = 0x338e98u;

    // 0x338e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x338ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338ea4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338EA4u;
    SET_GPR_U32(ctx, 31, 0x338EACu);
    ctx->pc = 0x338EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EA4u;
    // 0x338ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x338EA4u, 0x338EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EACu;
label_338eac:
    // 0x338eac: 0xc0ce3b2  jal         func_338EC8
    ctx->pc = 0x338EACu;
    SET_GPR_U32(ctx, 31, 0x338EB4u);
    ctx->pc = 0x338EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EACu;
    // 0x338eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EC8u, 0x338EACu, 0x338EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EB4u;
label_338eb4:
    // 0x338eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338eb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338ebc: 0x80ce284  j           func_338A10
    ctx->pc = 0x338EBCu;
    ctx->pc = 0x338EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EBCu;
    // 0x338ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338EBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338EC4u;
    // 0x338ec4: 0x0  nop
    ctx->pc = 0x338ec4u;
    // NOP
    ctx->pc = 0x338ec8u;
}
