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

// Function: func_0034ABF8
// Address: 0x34abf8 - 0x34ac60
void func_0034ABF8_0x34abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034ABF8_0x34abf8");
#endif

    switch (ctx->pc) {
        case 0x34ac18u: goto label_34ac18;
        default: break;
    }

    ctx->pc = 0x34abf8u;

    // 0x34abf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34abfc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x34abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x34ac00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ac04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34ac08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34ac0c: 0x8c912004  lw          $s1, 0x2004($a0)
    ctx->pc = 0x34ac0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34ac10: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AC10u;
    SET_GPR_U32(ctx, 31, 0x34AC18u);
    ctx->pc = 0x34AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC10u;
    // 0x34ac14: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AC10u, 0x34AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC18u;
label_34ac18:
    // 0x34ac18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34ac18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac1c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x34ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x34ac20: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x34ac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ac24: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34AC24u;
    {
        const bool branch_taken_0x34ac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC24u;
        // 0x34ac28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac24) {
            ctx->pc = 0x34AC48u;
            goto label_34ac48;
        }
    }
    ctx->pc = 0x34AC2Cu;
    // 0x34ac2c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x34ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x34ac30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ac30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ac34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ac34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ac38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ac38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ac3c: 0x80caadc  j           func_32AB70
    ctx->pc = 0x34AC3Cu;
    ctx->pc = 0x34AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC3Cu;
    // 0x34ac40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AB70u, 0x34AC3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34AC44u;
    // 0x34ac44: 0x0  nop
    ctx->pc = 0x34ac44u;
    // NOP
label_34ac48:
    // 0x34ac48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ac48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ac4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ac4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ac50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ac50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x34AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC54u;
        // 0x34ac58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AC5Cu;
    // 0x34ac5c: 0x0  nop
    ctx->pc = 0x34ac5cu;
    // NOP
    ctx->pc = 0x34ac60u;
}
