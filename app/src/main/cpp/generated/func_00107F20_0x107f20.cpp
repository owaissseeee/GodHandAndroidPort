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

// Function: func_00107F20
// Address: 0x107f20 - 0x107f58
void func_00107F20_0x107f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00107F20_0x107f20");
#endif

    switch (ctx->pc) {
        case 0x107f3cu: goto label_107f3c;
        default: break;
    }

    ctx->pc = 0x107f20u;

    // 0x107f20: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x107f24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107f28: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x107f28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x107f2c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107F2Cu;
    {
        const bool branch_taken_0x107f2c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x107F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F2Cu;
        // 0x107f30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f2c) {
            ctx->pc = 0x107F44u;
            goto label_107f44;
        }
    }
    ctx->pc = 0x107F34u;
    // 0x107f34: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x107F34u;
    SET_GPR_U32(ctx, 31, 0x107F3Cu);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x107F34u, 0x107F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F3Cu;
label_107f3c:
    // 0x107f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107F3Cu;
    {
        const bool branch_taken_0x107f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F3Cu;
        // 0x107f40: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f3c) {
            ctx->pc = 0x107F48u;
            goto label_107f48;
        }
    }
    ctx->pc = 0x107F44u;
label_107f44:
    // 0x107f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107f48:
    // 0x107f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x107F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F4Cu;
        // 0x107f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107F54u;
    // 0x107f54: 0x0  nop
    ctx->pc = 0x107f54u;
    // NOP
    ctx->pc = 0x107f58u;
}
