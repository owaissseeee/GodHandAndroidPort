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

// Function: ForwardIfField94FlagSet_13C168
// Address: 0x13c168 - 0x13c198
void ForwardIfField94FlagSet_13C168_0x13c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardIfField94FlagSet_13C168_0x13c168");
#endif

    switch (ctx->pc) {
        case 0x13c18cu: goto label_13c18c;
        default: break;
    }

    ctx->pc = 0x13c168u;

    // 0x13c168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c170: 0x90820094  lbu         $v0, 0x94($a0)
    ctx->pc = 0x13c170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x13c174: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13c178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c17c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C17Cu;
    {
        const bool branch_taken_0x13c17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C17Cu;
        // 0x13c180: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c17c) {
            ctx->pc = 0x13C190u;
            goto label_13c190;
        }
    }
    ctx->pc = 0x13C184u;
    // 0x13c184: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13C184u;
    SET_GPR_U32(ctx, 31, 0x13C18Cu);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13C184u, 0x13C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C18Cu;
label_13c18c:
    // 0x13c18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c190:
    // 0x13c190: 0x3e00008  jr          $ra
    ctx->pc = 0x13C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C190u;
        // 0x13c194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C198u;
}
