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

// Function: func_0035B6B0
// Address: 0x35b6b0 - 0x35b6f8
void func_0035B6B0_0x35b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B6B0_0x35b6b0");
#endif

    switch (ctx->pc) {
        case 0x35b6d4u: goto label_35b6d4;
        default: break;
    }

    ctx->pc = 0x35b6b0u;

    // 0x35b6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b6b4: 0x24870a0c  addiu       $a3, $a0, 0xA0C
    ctx->pc = 0x35b6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
    // 0x35b6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b6bc: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x35b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x35b6c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B6C0u;
    {
        const bool branch_taken_0x35b6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6C0u;
        // 0x35b6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b6c0) {
            ctx->pc = 0x35B6D8u;
            goto label_35b6d8;
        }
    }
    ctx->pc = 0x35B6C8u;
    // 0x35b6c8: 0x8ce800b0  lw          $t0, 0xB0($a3)
    ctx->pc = 0x35b6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x35b6cc: 0xc0d6dbe  jal         func_35B6F8
    ctx->pc = 0x35B6CCu;
    SET_GPR_U32(ctx, 31, 0x35B6D4u);
    ctx->pc = 0x35B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B6CCu;
    // 0x35b6d0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6F8u, 0x35B6CCu, 0x35B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6D4u;
label_35b6d4:
    // 0x35b6d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35b6d8:
    // 0x35b6d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6DCu;
        // 0x35b6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B6E4u;
    // 0x35b6e4: 0x0  nop
    ctx->pc = 0x35b6e4u;
    // NOP
    // 0x35b6e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b6ec: 0x0  nop
    ctx->pc = 0x35b6ecu;
    // NOP
    // 0x35b6f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35b6f4: 0x0  nop
    ctx->pc = 0x35b6f4u;
    // NOP
    ctx->pc = 0x35b6f8u;
}
