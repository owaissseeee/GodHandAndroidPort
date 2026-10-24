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

// Function: Obj35D0_Thunk_0034C990_Via20D8_D4F0
// Address: 0x35d4f0 - 0x35d518
void Obj35D0_Thunk_0034C990_Via20D8_D4F0_0x35d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_Thunk_0034C990_Via20D8_D4F0_0x35d4f0");
#endif

    ctx->pc = 0x35d4f0u;

    // 0x35d4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d4f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x35d4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d4fc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35d4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d500: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35d500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d504: 0x8c8520d8  lw          $a1, 0x20D8($a0)
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8408)));
    // 0x35d508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d50c: 0x80d3264  j           func_34C990
    ctx->pc = 0x35D50Cu;
    ctx->pc = 0x35D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D50Cu;
    // 0x35d510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C990u, 0x35D50Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D514u;
    // 0x35d514: 0x0  nop
    ctx->pc = 0x35d514u;
    // NOP
    ctx->pc = 0x35d518u;
}
