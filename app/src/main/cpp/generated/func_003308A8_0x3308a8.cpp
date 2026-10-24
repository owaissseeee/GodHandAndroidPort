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

// Function: func_003308A8
// Address: 0x3308a8 - 0x330910
void func_003308A8_0x3308a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003308A8_0x3308a8");
#endif

    switch (ctx->pc) {
        case 0x3308c8u: goto label_3308c8;
        default: break;
    }

    ctx->pc = 0x3308a8u;

    // 0x3308a8: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x3308a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x3308ac: 0x24a25d40  addiu       $v0, $a1, 0x5D40
    ctx->pc = 0x3308acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
    // 0x3308b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3308b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3308b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3308b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x755D44u));
    // 0x3308b8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3308B8u;
    {
        const bool branch_taken_0x3308b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308B8u;
        // 0x3308bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308b8) {
            ctx->pc = 0x3308ECu;
            goto label_3308ec;
        }
    }
    ctx->pc = 0x3308C0u;
    // 0x3308c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3308c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3308c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3308c8:
    // 0x3308c8: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x3308c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3308cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3308CCu;
    {
        const bool branch_taken_0x3308cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308CCu;
        // 0x3308d0: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308cc) {
            ctx->pc = 0x3308ECu;
            goto label_3308ec;
        }
    }
    ctx->pc = 0x3308D4u;
    // 0x3308d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3308d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3308d8: 0x0  nop
    ctx->pc = 0x3308d8u;
    // NOP
    // 0x3308dc: 0x0  nop
    ctx->pc = 0x3308dcu;
    // NOP
    // 0x3308e0: 0x0  nop
    ctx->pc = 0x3308e0u;
    // NOP
    // 0x3308e4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3308E4u;
    {
        const bool branch_taken_0x3308e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3308e4) {
            ctx->pc = 0x3308E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3308E4u;
            // 0x3308e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3308C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3308c8;
        }
    }
    ctx->pc = 0x3308ECu;
label_3308ec:
    // 0x3308ec: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3308ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3308f0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3308F0u;
    {
        const bool branch_taken_0x3308f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3308F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308F0u;
        // 0x3308f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308f0) {
            ctx->pc = 0x330904u;
            goto label_330904;
        }
    }
    ctx->pc = 0x3308F8u;
    // 0x3308f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3308f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3308fc: 0x24a25d40  addiu       $v0, $a1, 0x5D40
    ctx->pc = 0x3308fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
    // 0x330900: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x330900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_330904:
    // 0x330904: 0x3e00008  jr          $ra
    ctx->pc = 0x330904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33090Cu;
    // 0x33090c: 0x0  nop
    ctx->pc = 0x33090cu;
    // NOP
    ctx->pc = 0x330910u;
}
