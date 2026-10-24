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

// Function: sfadxt_WtPause
// Address: 0x34b478 - 0x34b4b8
void sfadxt_WtPause_0x34b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfadxt_WtPause_0x34b478");
#endif

    switch (ctx->pc) {
        case 0x34b498u: goto label_34b498;
        default: break;
    }

    ctx->pc = 0x34b478u;

    // 0x34b478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b47c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34b480: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34b480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34b488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b48c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b490: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x34B490u;
    SET_GPR_U32(ctx, 31, 0x34B498u);
    ctx->pc = 0x34B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B490u;
    // 0x34b494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x34B490u, 0x34B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B498u;
label_34b498:
    // 0x34b498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b49c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34b49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b4a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b4a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b4ac: 0x80d714e  j           func_35C538
    ctx->pc = 0x34B4ACu;
    ctx->pc = 0x34B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4ACu;
    // 0x34b4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C538u, 0x34B4ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B4B4u;
    // 0x34b4b4: 0x0  nop
    ctx->pc = 0x34b4b4u;
    // NOP
    ctx->pc = 0x34b4b8u;
}
