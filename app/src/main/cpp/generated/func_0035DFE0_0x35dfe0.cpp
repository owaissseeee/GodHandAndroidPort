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

// Function: func_0035DFE0
// Address: 0x35dfe0 - 0x35e030
void func_0035DFE0_0x35dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DFE0_0x35dfe0");
#endif

    switch (ctx->pc) {
        case 0x35e004u: goto label_35e004;
        default: break;
    }

    ctx->pc = 0x35dfe0u;

    // 0x35dfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dfe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dfe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dfec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35dfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35dff4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35dff8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35dffc: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DFFCu;
    SET_GPR_U32(ctx, 31, 0x35E004u);
    ctx->pc = 0x35E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFFCu;
    // 0x35e000: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DFFCu, 0x35E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E004u;
label_35e004:
    // 0x35e004: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E004u;
    {
        const bool branch_taken_0x35e004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e004) {
            ctx->pc = 0x35E008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E004u;
            // 0x35e008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E01Cu;
            goto label_35e01c;
        }
    }
    ctx->pc = 0x35E00Cu;
    // 0x35e00c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x35e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35e010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e014: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35e014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35e018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e01c:
    // 0x35e01c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e024: 0x3e00008  jr          $ra
    ctx->pc = 0x35E024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E024u;
        // 0x35e028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E02Cu;
    // 0x35e02c: 0x0  nop
    ctx->pc = 0x35e02cu;
    // NOP
    ctx->pc = 0x35e030u;
}
