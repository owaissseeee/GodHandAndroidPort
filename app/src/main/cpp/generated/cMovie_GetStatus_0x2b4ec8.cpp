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

// Function: cMovie_GetStatus
// Address: 0x2b4ec8 - 0x2b4f38
void cMovie_GetStatus_0x2b4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovie_GetStatus_0x2b4ec8");
#endif

    switch (ctx->pc) {
        case 0x2b4ed8u: goto label_2b4ed8;
        case 0x2b4ee8u: goto label_2b4ee8;
        default: break;
    }

    ctx->pc = 0x2b4ec8u;

    // 0x2b4ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4ed0: 0xc0ad3e6  jal         func_2B4F98
    ctx->pc = 0x2B4ED0u;
    SET_GPR_U32(ctx, 31, 0x2B4ED8u);
    ctx->pc = 0x2B4F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F98u, 0x2B4ED0u, 0x2B4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4ED8u;
label_2b4ed8:
    // 0x2b4ed8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B4ED8u;
    {
        const bool branch_taken_0x2b4ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ed8) {
            ctx->pc = 0x2B4EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4ED8u;
            // 0x2b4edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F2Cu;
            goto label_2b4f2c;
        }
    }
    ctx->pc = 0x2B4EE0u;
    // 0x2b4ee0: 0xc0b5084  jal         func_2D4210
    ctx->pc = 0x2B4EE0u;
    SET_GPR_U32(ctx, 31, 0x2B4EE8u);
    ctx->pc = 0x2B4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EE0u;
    // 0x2b4ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4210u, 0x2B4EE0u, 0x2B4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EE8u;
label_2b4ee8:
    // 0x2b4ee8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4eec: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2b4eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b4ef0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B4EF0u;
    {
        const bool branch_taken_0x2b4ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EF0u;
        // 0x2b4ef4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ef0) {
            ctx->pc = 0x2B4F28u;
            goto label_2b4f28;
        }
    }
    ctx->pc = 0x2B4EF8u;
    // 0x2b4ef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4efc: 0x2442b270  addiu       $v0, $v0, -0x4D90
    ctx->pc = 0x2b4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947440));
    // 0x2b4f00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4f04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b4f08: 0x800008  jr          $a0
    ctx->pc = 0x2B4F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4F10u: goto label_2b4f10;
            case 0x2B4F18u: goto label_2b4f18;
            case 0x2B4F20u: goto label_2b4f20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B4F10u;
label_2b4f10:
    // 0x2b4f10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4F10u;
    {
        const bool branch_taken_0x2b4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F10u;
        // 0x2b4f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f10) {
            ctx->pc = 0x2B4F2Cu;
            goto label_2b4f2c;
        }
    }
    ctx->pc = 0x2B4F18u;
label_2b4f18:
    // 0x2b4f18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4F18u;
    {
        const bool branch_taken_0x2b4f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F18u;
        // 0x2b4f1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f18) {
            ctx->pc = 0x2B4F2Cu;
            goto label_2b4f2c;
        }
    }
    ctx->pc = 0x2B4F20u;
label_2b4f20:
    // 0x2b4f20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4F20u;
    {
        const bool branch_taken_0x2b4f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F20u;
        // 0x2b4f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f20) {
            ctx->pc = 0x2B4F2Cu;
            goto label_2b4f2c;
        }
    }
    ctx->pc = 0x2B4F28u;
label_2b4f28:
    // 0x2b4f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f2c:
    // 0x2b4f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F30u;
        // 0x2b4f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F38u;
}
