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

// Function: func_003364A0
// Address: 0x3364a0 - 0x3364f8
void func_003364A0_0x3364a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003364A0_0x3364a0");
#endif

    switch (ctx->pc) {
        case 0x3364c0u: goto label_3364c0;
        case 0x3364d4u: goto label_3364d4;
        default: break;
    }

    ctx->pc = 0x3364a0u;

    // 0x3364a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3364a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3364a4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3364a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3364a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3364a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3364ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3364acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3364b0: 0x2450ed70  addiu       $s0, $v0, -0x1290
    ctx->pc = 0x3364b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962544));
    // 0x3364b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3364b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3364b8: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x3364b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3364bc: 0x0  nop
    ctx->pc = 0x3364bcu;
    // NOP
label_3364c0:
    // 0x3364c0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3364c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3364c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3364C4u;
    {
        const bool branch_taken_0x3364c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3364c4) {
            ctx->pc = 0x3364C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3364C4u;
            // 0x3364c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3364D8u;
            goto label_3364d8;
        }
    }
    ctx->pc = 0x3364CCu;
    // 0x3364cc: 0xc0cd926  jal         func_336498
    ctx->pc = 0x3364CCu;
    SET_GPR_U32(ctx, 31, 0x3364D4u);
    ctx->pc = 0x3364D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3364CCu;
    // 0x3364d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336498u, 0x3364CCu, 0x3364D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364D4u;
label_3364d4:
    // 0x3364d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3364d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3364d8:
    // 0x3364d8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3364D8u;
    {
        const bool branch_taken_0x3364d8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3364DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364D8u;
        // 0x3364dc: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364d8) {
            ctx->pc = 0x3364C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3364c0;
        }
    }
    ctx->pc = 0x3364E0u;
    // 0x3364e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3364e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3364e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3364e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3364e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3364e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3364ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3364ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3364F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364ECu;
        // 0x3364f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3364ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3364F4u;
    // 0x3364f4: 0x0  nop
    ctx->pc = 0x3364f4u;
    // NOP
    ctx->pc = 0x3364f8u;
}
