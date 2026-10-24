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

// Function: func_002011B0
// Address: 0x2011b0 - 0x2011f8
void func_002011B0_0x2011b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002011B0_0x2011b0");
#endif

    switch (ctx->pc) {
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d8u: goto label_2011d8;
        default: break;
    }

    ctx->pc = 0x2011b0u;

    // 0x2011b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2011b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2011b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2011b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2011b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2011b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2011bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2011bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2011c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2011c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2011c4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2011C4u;
    {
        const bool branch_taken_0x2011c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011c4) {
            ctx->pc = 0x2011C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2011C4u;
            // 0x2011c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2011ECu;
            goto label_2011ec;
        }
    }
    ctx->pc = 0x2011CCu;
    // 0x2011cc: 0x0  nop
    ctx->pc = 0x2011ccu;
    // NOP
label_2011d0:
    // 0x2011d0: 0xc0802c8  jal         func_200B20
    ctx->pc = 0x2011D0u;
    SET_GPR_U32(ctx, 31, 0x2011D8u);
    ctx->pc = 0x2011D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011D0u;
    // 0x2011d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B20u, 0x2011D0u, 0x2011D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011D8u;
label_2011d8:
    // 0x2011d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2011d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2011dc: 0x0  nop
    ctx->pc = 0x2011dcu;
    // NOP
    // 0x2011e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2011E0u;
    {
        const bool branch_taken_0x2011e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2011e0) {
            ctx->pc = 0x2011D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2011d0;
        }
    }
    ctx->pc = 0x2011E8u;
    // 0x2011e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2011e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2011ec:
    // 0x2011ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2011ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2011f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2011F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2011F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011F0u;
        // 0x2011f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2011F8u;
}
