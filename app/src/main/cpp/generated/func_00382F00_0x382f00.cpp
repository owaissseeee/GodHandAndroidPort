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

// Function: func_00382F00
// Address: 0x382f00 - 0x382f40
void func_00382F00_0x382f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382F00_0x382f00");
#endif

    switch (ctx->pc) {
        case 0x382f20u: goto label_382f20;
        case 0x382f30u: goto label_382f30;
        default: break;
    }

    ctx->pc = 0x382f00u;

    // 0x382f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x382f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x382f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382f08: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x382f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x382f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x382f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x382f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x382F10u;
    {
        const bool branch_taken_0x382f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382f10) {
            ctx->pc = 0x382F28u;
            goto label_382f28;
        }
    }
    ctx->pc = 0x382F18u;
    // 0x382f18: 0xc0e0738  jal         func_381CE0
    ctx->pc = 0x382F18u;
    SET_GPR_U32(ctx, 31, 0x382F20u);
    ctx->pc = 0x382F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382F18u;
    // 0x382f1c: 0x24a500a4  addiu       $a1, $a1, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381CE0u, 0x382F18u, 0x382F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382F20u;
label_382f20:
    // 0x382f20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x382F20u;
    {
        const bool branch_taken_0x382f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F20u;
        // 0x382f24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f20) {
            ctx->pc = 0x382F34u;
            goto label_382f34;
        }
    }
    ctx->pc = 0x382F28u;
label_382f28:
    // 0x382f28: 0xc0e035a  jal         func_380D68
    ctx->pc = 0x382F28u;
    SET_GPR_U32(ctx, 31, 0x382F30u);
    ctx->pc = 0x382F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382F28u;
    // 0x382f2c: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380D68u, 0x382F28u, 0x382F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382F30u;
label_382f30:
    // 0x382f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382f34:
    // 0x382f34: 0x3e00008  jr          $ra
    ctx->pc = 0x382F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F34u;
        // 0x382f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F3Cu;
    // 0x382f3c: 0x0  nop
    ctx->pc = 0x382f3cu;
    // NOP
    ctx->pc = 0x382f40u;
}
