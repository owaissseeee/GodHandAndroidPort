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

// Function: func_0018CE50
// Address: 0x18ce50 - 0x18cea0
void func_0018CE50_0x18ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018CE50_0x18ce50");
#endif

    switch (ctx->pc) {
        case 0x18ce74u: goto label_18ce74;
        case 0x18ce8cu: goto label_18ce8c;
        default: break;
    }

    ctx->pc = 0x18ce50u;

    // 0x18ce50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ce54: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18ce58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ce5c: 0x8c625b78  lw          $v0, 0x5B78($v1)
    ctx->pc = 0x18ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B78u));
    // 0x18ce60: 0x24705b78  addiu       $s0, $v1, 0x5B78
    ctx->pc = 0x18ce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23416));
    // 0x18ce64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CE64u;
    {
        const bool branch_taken_0x18ce64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE64u;
        // 0x18ce68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce64) {
            ctx->pc = 0x18CE8Cu;
            goto label_18ce8c;
        }
    }
    ctx->pc = 0x18CE6Cu;
    // 0x18ce6c: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x18CE6Cu;
    SET_GPR_U32(ctx, 31, 0x18CE74u);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x18CE6Cu, 0x18CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE74u;
label_18ce74:
    // 0x18ce74: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18ce78: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18ce7c: 0x24a53990  addiu       $a1, $a1, 0x3990
    ctx->pc = 0x18ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14736));
    // 0x18ce80: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x18ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x18ce84: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18CE84u;
    SET_GPR_U32(ctx, 31, 0x18CE8Cu);
    ctx->pc = 0x18CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE84u;
    // 0x18ce88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18CE84u, 0x18CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE8Cu;
label_18ce8c:
    // 0x18ce8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ce8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ce94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE98u;
        // 0x18ce9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CEA0u;
}
