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

// Function: func_0037D100
// Address: 0x37d100 - 0x37d148
void func_0037D100_0x37d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D100_0x37d100");
#endif

    switch (ctx->pc) {
        case 0x37d110u: goto label_37d110;
        default: break;
    }

    ctx->pc = 0x37d100u;

    // 0x37d100: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d104: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x37d104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x37d108: 0x2443c8c0  addiu       $v1, $v0, -0x3740
    ctx->pc = 0x37d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37d10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d110:
    // 0x37d110: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D114u;
    {
        const bool branch_taken_0x37d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D114u;
        // 0x37d118: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d114) {
            ctx->pc = 0x37D130u;
            goto label_37d130;
        }
    }
    ctx->pc = 0x37D11Cu;
    // 0x37d11c: 0x8462001a  lh          $v0, 0x1A($v1)
    ctx->pc = 0x37d11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x37d120: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D120u;
    {
        const bool branch_taken_0x37d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x37D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D120u;
        // 0x37d124: 0x28a20033  slti        $v0, $a1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d120) {
            ctx->pc = 0x37D134u;
            goto label_37d134;
        }
    }
    ctx->pc = 0x37D128u;
    // 0x37d128: 0x3e00008  jr          $ra
    ctx->pc = 0x37D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D128u;
        // 0x37d12c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D130u;
label_37d130:
    // 0x37d130: 0x28a20033  slti        $v0, $a1, 0x33
    ctx->pc = 0x37d130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
label_37d134:
    // 0x37d134: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x37D134u;
    {
        const bool branch_taken_0x37d134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D134u;
        // 0x37d138: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d134) {
            ctx->pc = 0x37D110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d110;
        }
    }
    ctx->pc = 0x37D13Cu;
    // 0x37d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D13Cu;
        // 0x37d140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D144u;
    // 0x37d144: 0x0  nop
    ctx->pc = 0x37d144u;
    // NOP
    ctx->pc = 0x37d148u;
}
