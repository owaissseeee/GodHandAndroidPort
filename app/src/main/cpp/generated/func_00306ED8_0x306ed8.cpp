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

// Function: func_00306ED8
// Address: 0x306ed8 - 0x306f10
void func_00306ED8_0x306ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306ED8_0x306ed8");
#endif

    ctx->pc = 0x306ed8u;

    // 0x306ed8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x306ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x306edc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306EDCu;
    {
        const bool branch_taken_0x306edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EDCu;
        // 0x306ee0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306edc) {
            ctx->pc = 0x306EF4u;
            goto label_306ef4;
        }
    }
    ctx->pc = 0x306EE4u;
    // 0x306ee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x306ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x306ee8: 0x8c440300  lw          $a0, 0x300($v0)
    ctx->pc = 0x306ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
    // 0x306eec: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x306EECu;
    {
        const bool branch_taken_0x306eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306eec) {
            ctx->pc = 0x306EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306EECu;
            // 0x306ef0: 0x9483000a  lhu         $v1, 0xA($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306EFCu;
            goto label_306efc;
        }
    }
    ctx->pc = 0x306EF4u;
label_306ef4:
    // 0x306ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x306EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EF4u;
        // 0x306ef8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306EFCu;
label_306efc:
    // 0x306efc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306f00: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x306f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x306f04: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x306f04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x306f08: 0x3e00008  jr          $ra
    ctx->pc = 0x306F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F08u;
        // 0x306f0c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306F10u;
}
