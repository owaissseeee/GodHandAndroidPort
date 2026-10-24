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

// Function: func_0037D0A8
// Address: 0x37d0a8 - 0x37d100
void func_0037D0A8_0x37d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D0A8_0x37d0a8");
#endif

    switch (ctx->pc) {
        case 0x37d0b8u: goto label_37d0b8;
        default: break;
    }

    ctx->pc = 0x37d0a8u;

    // 0x37d0a8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d0b0: 0x2443c8c0  addiu       $v1, $v0, -0x3740
    ctx->pc = 0x37d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37d0b4: 0x0  nop
    ctx->pc = 0x37d0b4u;
    // NOP
label_37d0b8:
    // 0x37d0b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d0bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37D0BCu;
    {
        const bool branch_taken_0x37d0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0BCu;
        // 0x37d0c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0bc) {
            ctx->pc = 0x37D0E8u;
            goto label_37d0e8;
        }
    }
    ctx->pc = 0x37D0C4u;
    // 0x37d0c4: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x37d0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x37d0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d0cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D0CCu;
    {
        const bool branch_taken_0x37d0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d0cc) {
            ctx->pc = 0x37D0E8u;
            goto label_37d0e8;
        }
    }
    ctx->pc = 0x37D0D4u;
    // 0x37d0d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x37d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x37d0d8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D0D8u;
    {
        const bool branch_taken_0x37d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x37D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0D8u;
        // 0x37d0dc: 0x28a20033  slti        $v0, $a1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0d8) {
            ctx->pc = 0x37D0ECu;
            goto label_37d0ec;
        }
    }
    ctx->pc = 0x37D0E0u;
    // 0x37d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0E0u;
        // 0x37d0e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D0E8u;
label_37d0e8:
    // 0x37d0e8: 0x28a20033  slti        $v0, $a1, 0x33
    ctx->pc = 0x37d0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
label_37d0ec:
    // 0x37d0ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x37D0ECu;
    {
        const bool branch_taken_0x37d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0ECu;
        // 0x37d0f0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0ec) {
            ctx->pc = 0x37D0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d0b8;
        }
    }
    ctx->pc = 0x37D0F4u;
    // 0x37d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0F4u;
        // 0x37d0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D0FCu;
    // 0x37d0fc: 0x0  nop
    ctx->pc = 0x37d0fcu;
    // NOP
    ctx->pc = 0x37d100u;
}
