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

// Function: func_00328368
// Address: 0x328368 - 0x328398
void func_00328368_0x328368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328368_0x328368");
#endif

    switch (ctx->pc) {
        case 0x32837cu: goto label_32837c;
        case 0x328384u: goto label_328384;
        default: break;
    }

    ctx->pc = 0x328368u;

    // 0x328368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32836c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328374: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328374u;
    SET_GPR_U32(ctx, 31, 0x32837Cu);
    ctx->pc = 0x328378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328374u;
    // 0x328378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328374u, 0x32837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32837Cu;
label_32837c:
    // 0x32837c: 0xc0ca0e6  jal         func_328398
    ctx->pc = 0x32837Cu;
    SET_GPR_U32(ctx, 31, 0x328384u);
    ctx->pc = 0x328380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32837Cu;
    // 0x328380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328398u, 0x32837Cu, 0x328384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328384u;
label_328384:
    // 0x328384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32838c: 0x80ca422  j           func_329088
    ctx->pc = 0x32838Cu;
    ctx->pc = 0x328390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32838Cu;
    // 0x328390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x32838Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328394u;
    // 0x328394: 0x0  nop
    ctx->pc = 0x328394u;
    // NOP
    ctx->pc = 0x328398u;
}
