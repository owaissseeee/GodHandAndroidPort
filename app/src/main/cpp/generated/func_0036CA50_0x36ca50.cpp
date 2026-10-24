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

// Function: func_0036CA50
// Address: 0x36ca50 - 0x36caa8
void func_0036CA50_0x36ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CA50_0x36ca50");
#endif

    switch (ctx->pc) {
        case 0x36ca8cu: goto label_36ca8c;
        default: break;
    }

    ctx->pc = 0x36ca50u;

    // 0x36ca50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ca54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca5c: 0x80db29a  j           func_36CA68
    ctx->pc = 0x36CA5Cu;
    ctx->pc = 0x36CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA5Cu;
    // 0x36ca60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CA68u;
    goto label_36ca68;
    ctx->pc = 0x36CA64u;
    // 0x36ca64: 0x0  nop
    ctx->pc = 0x36ca64u;
    // NOP
label_36ca68:
    // 0x36ca68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ca6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ca74: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x36ca74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x36ca78: 0x26101ec8  addiu       $s0, $s0, 0x1EC8
    ctx->pc = 0x36ca78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7880));
    // 0x36ca7c: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x36ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x36ca80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36ca84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x36CA84u;
    SET_GPR_U32(ctx, 31, 0x36CA8Cu);
    ctx->pc = 0x36CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA84u;
    // 0x36ca88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x36CA84u, 0x36CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA8Cu;
label_36ca8c:
    // 0x36ca8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x36ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36ca90: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x36ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x36ca94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ca94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ca98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ca98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca9c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA9Cu;
        // 0x36caa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CAA4u;
    // 0x36caa4: 0x0  nop
    ctx->pc = 0x36caa4u;
    // NOP
    ctx->pc = 0x36caa8u;
}
