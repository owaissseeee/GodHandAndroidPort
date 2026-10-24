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

// Function: func_00144B00
// Address: 0x144b00 - 0x144b50
void func_00144B00_0x144b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00144B00_0x144b00");
#endif

    switch (ctx->pc) {
        case 0x144b24u: goto label_144b24;
        case 0x144b3cu: goto label_144b3c;
        default: break;
    }

    ctx->pc = 0x144b00u;

    // 0x144b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144b04: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x144b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x144b08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x144b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x144b0c: 0x8c625688  lw          $v0, 0x5688($v1)
    ctx->pc = 0x144b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785688u));
    // 0x144b10: 0x24705688  addiu       $s0, $v1, 0x5688
    ctx->pc = 0x144b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22152));
    // 0x144b14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x144B14u;
    {
        const bool branch_taken_0x144b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B14u;
        // 0x144b18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b14) {
            ctx->pc = 0x144B3Cu;
            goto label_144b3c;
        }
    }
    ctx->pc = 0x144B1Cu;
    // 0x144b1c: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x144B1Cu;
    SET_GPR_U32(ctx, 31, 0x144B24u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x144B1Cu, 0x144B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B24u;
label_144b24:
    // 0x144b24: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x144b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x144b28: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x144b28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x144b2c: 0x24a5e700  addiu       $a1, $a1, -0x1900
    ctx->pc = 0x144b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    // 0x144b30: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x144b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x144b34: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x144B34u;
    SET_GPR_U32(ctx, 31, 0x144B3Cu);
    ctx->pc = 0x144B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B34u;
    // 0x144b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x144B34u, 0x144B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B3Cu;
label_144b3c:
    // 0x144b3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x144b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x144b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144b48: 0x3e00008  jr          $ra
    ctx->pc = 0x144B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B48u;
        // 0x144b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144B50u;
}
