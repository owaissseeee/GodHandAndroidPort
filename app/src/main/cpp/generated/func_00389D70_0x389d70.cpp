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

// Function: func_00389D70
// Address: 0x389d70 - 0x389da0
void func_00389D70_0x389d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389D70_0x389d70");
#endif

    switch (ctx->pc) {
        case 0x389d70u: goto label_389d70;
        case 0x389d74u: goto label_389d74;
        case 0x389d78u: goto label_389d78;
        case 0x389d7cu: goto label_389d7c;
        case 0x389d80u: goto label_389d80;
        case 0x389d84u: goto label_389d84;
        case 0x389d88u: goto label_389d88;
        case 0x389d8cu: goto label_389d8c;
        case 0x389d90u: goto label_389d90;
        case 0x389d94u: goto label_389d94;
        case 0x389d98u: goto label_389d98;
        case 0x389d9cu: goto label_389d9c;
        default: break;
    }

    ctx->pc = 0x389d70u;

label_389d70:
    // 0x389d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_389d74:
    // 0x389d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_389d78:
    // 0x389d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_389d7c:
    // 0x389d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389d80:
    // 0x389d80: 0xa0f809  jalr        $a1
label_389d84:
    if (ctx->pc == 0x389D84u) {
        ctx->pc = 0x389D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D80u;
        // 0x389d84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D88u;
        goto label_389d88;
    }
    ctx->pc = 0x389D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x389D88u);
        ctx->pc = 0x389D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D80u;
        // 0x389d84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D80u, 0x389D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389D88u;
label_389d88:
    // 0x389d88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389d8c:
    // 0x389d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_389d90:
    // 0x389d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389d94:
    // 0x389d94: 0x3e00008  jr          $ra
label_389d98:
    if (ctx->pc == 0x389D98u) {
        ctx->pc = 0x389D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D94u;
        // 0x389d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D9Cu;
        goto label_389d9c;
    }
    ctx->pc = 0x389D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D94u;
        // 0x389d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389D9Cu;
label_389d9c:
    // 0x389d9c: 0x0  nop
    ctx->pc = 0x389d9cu;
    // NOP
    ctx->pc = 0x389da0u;
}
