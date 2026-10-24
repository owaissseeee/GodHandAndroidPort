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

// Function: func_00335B88
// Address: 0x335b88 - 0x335bc8
void func_00335B88_0x335b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335B88_0x335b88");
#endif

    switch (ctx->pc) {
        case 0x335ba4u: goto label_335ba4;
        case 0x335bb0u: goto label_335bb0;
        default: break;
    }

    ctx->pc = 0x335b88u;

    // 0x335b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335b90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335b9c: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335B9Cu;
    SET_GPR_U32(ctx, 31, 0x335BA4u);
    ctx->pc = 0x335BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B9Cu;
    // 0x335ba0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335B9Cu, 0x335BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335BA4u;
label_335ba4:
    // 0x335ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ba8: 0xc0cd6f2  jal         func_335BC8
    ctx->pc = 0x335BA8u;
    SET_GPR_U32(ctx, 31, 0x335BB0u);
    ctx->pc = 0x335BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BA8u;
    // 0x335bac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BC8u, 0x335BA8u, 0x335BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335BB0u;
label_335bb0:
    // 0x335bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335bbc: 0x80cd738  j           func_335CE0
    ctx->pc = 0x335BBCu;
    ctx->pc = 0x335BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BBCu;
    // 0x335bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335BBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335BC4u;
    // 0x335bc4: 0x0  nop
    ctx->pc = 0x335bc4u;
    // NOP
    ctx->pc = 0x335bc8u;
}
