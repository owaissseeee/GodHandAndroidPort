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

// Function: BlendWork_copyTable
// Address: 0x145100 - 0x145160
void BlendWork_copyTable_0x145100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlendWork_copyTable_0x145100");
#endif

    switch (ctx->pc) {
        case 0x145140u: goto label_145140;
        default: break;
    }

    ctx->pc = 0x145100u;

    // 0x145100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145104: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x145104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x145108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14510c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x14510cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x145110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145114: 0x28c20024  slti        $v0, $a2, 0x24
    ctx->pc = 0x145114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x145118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145118u;
    {
        const bool branch_taken_0x145118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145118u;
        // 0x14511c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145118) {
            ctx->pc = 0x14512Cu;
            goto label_14512c;
        }
    }
    ctx->pc = 0x145120u;
    // 0x145120: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x145120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x145124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x145124u;
    {
        const bool branch_taken_0x145124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145124u;
        // 0x145128: 0xa6020334  sh          $v0, 0x334($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 820), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145124) {
            ctx->pc = 0x145130u;
            goto label_145130;
        }
    }
    ctx->pc = 0x14512Cu;
label_14512c:
    // 0x14512c: 0xa6060334  sh          $a2, 0x334($s0)
    ctx->pc = 0x14512cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 820), (uint16_t)GPR_U32(ctx, 6));
label_145130:
    // 0x145130: 0x86060334  lh          $a2, 0x334($s0)
    ctx->pc = 0x145130u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x145134: 0x260402a8  addiu       $a0, $s0, 0x2A8
    ctx->pc = 0x145134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x145138: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x145138u;
    SET_GPR_U32(ctx, 31, 0x145140u);
    ctx->pc = 0x14513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145138u;
    // 0x14513c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x145138u, 0x145140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145140u;
label_145140:
    // 0x145140: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x145140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x145144: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x145144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x145148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14514c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x145150: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x145150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x145154: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145158: 0x3e00008  jr          $ra
    ctx->pc = 0x145158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145158u;
        // 0x14515c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145160u;
}
