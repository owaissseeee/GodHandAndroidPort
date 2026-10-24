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

// Function: func_0035ACA0
// Address: 0x35aca0 - 0x35ad00
void func_0035ACA0_0x35aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035ACA0_0x35aca0");
#endif

    switch (ctx->pc) {
        case 0x35acc4u: goto label_35acc4;
        default: break;
    }

    ctx->pc = 0x35aca0u;

    // 0x35aca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35aca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35aca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35aca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35acb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35acb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35acb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35acbc: 0xc0d6b86  jal         func_35AE18
    ctx->pc = 0x35ACBCu;
    SET_GPR_U32(ctx, 31, 0x35ACC4u);
    ctx->pc = 0x35ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACBCu;
    // 0x35acc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE18u, 0x35ACBCu, 0x35ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACC4u;
label_35acc4:
    // 0x35acc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35ACC4u;
    {
        const bool branch_taken_0x35acc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ACC4u;
        // 0x35acc8: 0x26100d30  addiu       $s0, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35acc4) {
            ctx->pc = 0x35ACE4u;
            goto label_35ace4;
        }
    }
    ctx->pc = 0x35ACCCu;
    // 0x35accc: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35acccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35acd0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x35acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x35acd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35acd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35acdc: 0x8c83e278  lw          $v1, -0x1D88($a0)
    ctx->pc = 0x35acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE278u));
    // 0x35ace0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35ace4:
    // 0x35ace4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ace4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ace8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ace8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35acec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35acecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35acf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35acf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x35ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ACF4u;
        // 0x35acf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ACFCu;
    // 0x35acfc: 0x0  nop
    ctx->pc = 0x35acfcu;
    // NOP
    ctx->pc = 0x35ad00u;
}
