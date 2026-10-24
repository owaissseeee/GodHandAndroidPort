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

// Function: func_0035DCB0
// Address: 0x35dcb0 - 0x35dd00
void func_0035DCB0_0x35dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DCB0_0x35dcb0");
#endif

    switch (ctx->pc) {
        case 0x35dcd4u: goto label_35dcd4;
        default: break;
    }

    ctx->pc = 0x35dcb0u;

    // 0x35dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dcb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dcb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dcbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35dcbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dcc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35dcc4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35dcc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35dccc: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DCCCu;
    SET_GPR_U32(ctx, 31, 0x35DCD4u);
    ctx->pc = 0x35DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCCCu;
    // 0x35dcd0: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DCCCu, 0x35DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCD4u;
label_35dcd4:
    // 0x35dcd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DCD4u;
    {
        const bool branch_taken_0x35dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dcd4) {
            ctx->pc = 0x35DCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DCD4u;
            // 0x35dcd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DCECu;
            goto label_35dcec;
        }
    }
    ctx->pc = 0x35DCDCu;
    // 0x35dcdc: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x35dcdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35dce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dce4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35dce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35dcec:
    // 0x35dcec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dcecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dcf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x35DCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCF4u;
        // 0x35dcf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DCFCu;
    // 0x35dcfc: 0x0  nop
    ctx->pc = 0x35dcfcu;
    // NOP
    ctx->pc = 0x35dd00u;
}
