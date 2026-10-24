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

// Function: func_0033C918
// Address: 0x33c918 - 0x33c960
void func_0033C918_0x33c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C918_0x33c918");
#endif

    switch (ctx->pc) {
        case 0x33c938u: goto label_33c938;
        case 0x33c948u: goto label_33c948;
        default: break;
    }

    ctx->pc = 0x33c918u;

    // 0x33c918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c924: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C924u;
    {
        const bool branch_taken_0x33c924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C924u;
        // 0x33c928: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c924) {
            ctx->pc = 0x33C94Cu;
            goto label_33c94c;
        }
    }
    ctx->pc = 0x33C92Cu;
    // 0x33c92c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x33c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33c930: 0xc0cfe8c  jal         func_33FA30
    ctx->pc = 0x33C930u;
    SET_GPR_U32(ctx, 31, 0x33C938u);
    ctx->pc = 0x33C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C930u;
    // 0x33c934: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA30u, 0x33C930u, 0x33C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C938u;
label_33c938:
    // 0x33c938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c940: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33C940u;
    SET_GPR_U32(ctx, 31, 0x33C948u);
    ctx->pc = 0x33C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C940u;
    // 0x33c944: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33C940u, 0x33C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C948u;
label_33c948:
    // 0x33c948: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x33c948u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_33c94c:
    // 0x33c94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c954: 0x3e00008  jr          $ra
    ctx->pc = 0x33C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C954u;
        // 0x33c958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C95Cu;
    // 0x33c95c: 0x0  nop
    ctx->pc = 0x33c95cu;
    // NOP
    ctx->pc = 0x33c960u;
}
