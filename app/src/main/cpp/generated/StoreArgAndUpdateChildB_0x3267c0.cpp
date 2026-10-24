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

// Function: StoreArgAndUpdateChildB
// Address: 0x3267c0 - 0x326800
void StoreArgAndUpdateChildB_0x3267c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreArgAndUpdateChildB_0x3267c0");
#endif

    switch (ctx->pc) {
        case 0x3267e4u: goto label_3267e4;
        default: break;
    }

    ctx->pc = 0x3267c0u;

    // 0x3267c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3267c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3267c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3267c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3267c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3267c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3267ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3267d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3267d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3267d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3267d8: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x3267d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x3267dc: 0xc0cf116  jal         func_33C458
    ctx->pc = 0x3267DCu;
    SET_GPR_U32(ctx, 31, 0x3267E4u);
    ctx->pc = 0x3267E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3267DCu;
    // 0x3267e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C458u, 0x3267DCu, 0x3267E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3267E4u;
label_3267e4:
    // 0x3267e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3267e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3267e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3267e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3267ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3267f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3267f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3267f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3267f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3267f8: 0x80cf09c  j           func_33C270
    ctx->pc = 0x3267F8u;
    ctx->pc = 0x3267FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3267F8u;
    // 0x3267fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C270u, 0x3267F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326800u;
}
