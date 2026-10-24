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

// Function: InitStructZeroedFields_1E7960
// Address: 0x1e7960 - 0x1e79a8
void InitStructZeroedFields_1E7960_0x1e7960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStructZeroedFields_1E7960_0x1e7960");
#endif

    switch (ctx->pc) {
        case 0x1e797cu: goto label_1e797c;
        default: break;
    }

    ctx->pc = 0x1e7960u;

    // 0x1e7960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e796c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1e796cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1e7970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7974: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1E7974u;
    SET_GPR_U32(ctx, 31, 0x1E797Cu);
    ctx->pc = 0x1E7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7974u;
    // 0x1e7978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1E7974u, 0x1E797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E797Cu;
label_1e797c:
    // 0x1e797c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e797cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7980: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1e7980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1e7984: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e7984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e7988: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e7988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e798c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e798cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7998: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7998u;
        // 0x1e799c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E79A0u;
    // 0x1e79a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e79a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e79a4: 0x0  nop
    ctx->pc = 0x1e79a4u;
    // NOP
    ctx->pc = 0x1e79a8u;
}
