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

// Function: func_00306A08
// Address: 0x306a08 - 0x306a48
void func_00306A08_0x306a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306A08_0x306a08");
#endif

    switch (ctx->pc) {
        case 0x306a34u: goto label_306a34;
        default: break;
    }

    ctx->pc = 0x306a08u;

    // 0x306a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306a0c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x306a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x306a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306a14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x306a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x306a18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x306a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x306a1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x306a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x306a20: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x306a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306a24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306A24u;
    {
        const bool branch_taken_0x306a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A24u;
        // 0x306a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a24) {
            ctx->pc = 0x306A3Cu;
            goto label_306a3c;
        }
    }
    ctx->pc = 0x306A2Cu;
    // 0x306a2c: 0xc0c1a6a  jal         func_3069A8
    ctx->pc = 0x306A2Cu;
    SET_GPR_U32(ctx, 31, 0x306A34u);
    ctx->pc = 0x3069A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069A8u, 0x306A2Cu, 0x306A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A34u;
label_306a34:
    // 0x306a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x306A34u;
    {
        const bool branch_taken_0x306a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A34u;
        // 0x306a38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a34) {
            ctx->pc = 0x306A40u;
            goto label_306a40;
        }
    }
    ctx->pc = 0x306A3Cu;
label_306a3c:
    // 0x306a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306a40:
    // 0x306a40: 0x3e00008  jr          $ra
    ctx->pc = 0x306A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A40u;
        // 0x306a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306A48u;
}
