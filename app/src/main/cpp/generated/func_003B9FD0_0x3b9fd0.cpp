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

// Function: func_003B9FD0
// Address: 0x3b9fd0 - 0x3ba000
void func_003B9FD0_0x3b9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9FD0_0x3b9fd0");
#endif

    switch (ctx->pc) {
        case 0x3b9fe4u: goto label_3b9fe4;
        default: break;
    }

    ctx->pc = 0x3b9fd0u;

    // 0x3b9fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b9fd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b9fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b9fdc: 0xc0ee816  jal         func_3BA058
    ctx->pc = 0x3B9FDCu;
    SET_GPR_U32(ctx, 31, 0x3B9FE4u);
    ctx->pc = 0x3B9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9FDCu;
    // 0x3b9fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA058u, 0x3B9FDCu, 0x3B9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9FE4u;
label_3b9fe4:
    // 0x3b9fe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b9fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9ff4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3b9ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3b9ff8: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x3B9FF8u;
    ctx->pc = 0x3B9FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9FF8u;
    // 0x3b9ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B9FF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA000u;
}
