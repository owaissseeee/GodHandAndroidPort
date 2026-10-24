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

// Function: func_0032BAF0
// Address: 0x32baf0 - 0x32bb20
void func_0032BAF0_0x32baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BAF0_0x32baf0");
#endif

    switch (ctx->pc) {
        case 0x32bb04u: goto label_32bb04;
        case 0x32bb0cu: goto label_32bb0c;
        default: break;
    }

    ctx->pc = 0x32baf0u;

    // 0x32baf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32baf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32baf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32bafc: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32BAFCu;
    SET_GPR_U32(ctx, 31, 0x32BB04u);
    ctx->pc = 0x32BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAFCu;
    // 0x32bb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32BAFCu, 0x32BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB04u;
label_32bb04:
    // 0x32bb04: 0xc0caec8  jal         func_32BB20
    ctx->pc = 0x32BB04u;
    SET_GPR_U32(ctx, 31, 0x32BB0Cu);
    ctx->pc = 0x32BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB04u;
    // 0x32bb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB20u, 0x32BB04u, 0x32BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB0Cu;
label_32bb0c:
    // 0x32bb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32bb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bb14: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32BB14u;
    ctx->pc = 0x32BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB14u;
    // 0x32bb18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32BB14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BB1Cu;
    // 0x32bb1c: 0x0  nop
    ctx->pc = 0x32bb1cu;
    // NOP
    ctx->pc = 0x32bb20u;
}
