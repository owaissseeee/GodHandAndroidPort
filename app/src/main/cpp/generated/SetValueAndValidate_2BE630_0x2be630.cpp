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

// Function: SetValueAndValidate_2BE630
// Address: 0x2be630 - 0x2be670
void SetValueAndValidate_2BE630_0x2be630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetValueAndValidate_2BE630_0x2be630");
#endif

    switch (ctx->pc) {
        case 0x2be648u: goto label_2be648;
        default: break;
    }

    ctx->pc = 0x2be630u;

    // 0x2be630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be640: 0xc0af9a8  jal         func_2BE6A0
    ctx->pc = 0x2BE640u;
    SET_GPR_U32(ctx, 31, 0x2BE648u);
    ctx->pc = 0x2BE644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE640u;
    // 0x2be644: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE6A0u, 0x2BE640u, 0x2BE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE648u;
label_2be648:
    // 0x2be648: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2be648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be64c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE64Cu;
    {
        const bool branch_taken_0x2be64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE64Cu;
        // 0x2be650: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be64c) {
            ctx->pc = 0x2BE658u;
            goto label_2be658;
        }
    }
    ctx->pc = 0x2BE654u;
    // 0x2be654: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2be654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2be658:
    // 0x2be658: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2be658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2be65c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be664: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE664u;
        // 0x2be668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE66Cu;
    // 0x2be66c: 0x0  nop
    ctx->pc = 0x2be66cu;
    // NOP
    ctx->pc = 0x2be670u;
}
