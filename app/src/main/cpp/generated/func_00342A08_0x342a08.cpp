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

// Function: func_00342A08
// Address: 0x342a08 - 0x342a30
void func_00342A08_0x342a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342A08_0x342a08");
#endif

    switch (ctx->pc) {
        case 0x342a1cu: goto label_342a1c;
        default: break;
    }

    ctx->pc = 0x342a08u;

    // 0x342a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342a14: 0xc0ee6be  jal         func_3B9AF8
    ctx->pc = 0x342A14u;
    SET_GPR_U32(ctx, 31, 0x342A1Cu);
    ctx->pc = 0x342A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A14u;
    // 0x342a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9AF8u, 0x342A14u, 0x342A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A1Cu;
label_342a1c:
    // 0x342a1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342a28: 0x80ca630  j           func_3298C0
    ctx->pc = 0x342A28u;
    ctx->pc = 0x342A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A28u;
    // 0x342a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x342A28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342A30u;
}
