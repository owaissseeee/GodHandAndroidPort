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

// Function: _IO_default_doallocate
// Address: 0x38cbf0 - 0x38cc40
void ps2__IO_default_doallocate_0x38cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_default_doallocate_0x38cbf0");
#endif

    switch (ctx->pc) {
        case 0x38cc08u: goto label_38cc08;
        case 0x38cc28u: goto label_38cc28;
        default: break;
    }

    ctx->pc = 0x38cbf0u;

    // 0x38cbf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38cbf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cbfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38cc00: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x38CC00u;
    SET_GPR_U32(ctx, 31, 0x38CC08u);
    ctx->pc = 0x38CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC00u;
    // 0x38cc04: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x38CC00u, 0x38CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC08u;
label_38cc08:
    // 0x38cc08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CC08u;
    {
        const bool branch_taken_0x38cc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC08u;
        // 0x38cc0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc08) {
            ctx->pc = 0x38CC18u;
            goto label_38cc18;
        }
    }
    ctx->pc = 0x38CC10u;
    // 0x38cc10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38CC10u;
    {
        const bool branch_taken_0x38cc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC10u;
        // 0x38cc14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc10) {
            ctx->pc = 0x38CC2Cu;
            goto label_38cc2c;
        }
    }
    ctx->pc = 0x38CC18u;
label_38cc18:
    // 0x38cc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc1c: 0x24a60400  addiu       $a2, $a1, 0x400
    ctx->pc = 0x38cc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x38cc20: 0xc0e31da  jal         func_38C768
    ctx->pc = 0x38CC20u;
    SET_GPR_U32(ctx, 31, 0x38CC28u);
    ctx->pc = 0x38CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC20u;
    // 0x38cc24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C768u, 0x38CC20u, 0x38CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC28u;
label_38cc28:
    // 0x38cc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cc2c:
    // 0x38cc2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cc30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cc30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x38CC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC34u;
        // 0x38cc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CC3Cu;
    // 0x38cc3c: 0x0  nop
    ctx->pc = 0x38cc3cu;
    // NOP
    ctx->pc = 0x38cc40u;
}
