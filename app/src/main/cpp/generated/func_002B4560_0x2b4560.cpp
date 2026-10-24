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

// Function: func_002B4560
// Address: 0x2b4560 - 0x2b4598
void func_002B4560_0x2b4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4560_0x2b4560");
#endif

    switch (ctx->pc) {
        case 0x2b4578u: goto label_2b4578;
        case 0x2b4588u: goto label_2b4588;
        default: break;
    }

    ctx->pc = 0x2b4560u;

    // 0x2b4560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4568: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b456c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4570: 0xc0ad146  jal         func_2B4518
    ctx->pc = 0x2B4570u;
    SET_GPR_U32(ctx, 31, 0x2B4578u);
    ctx->pc = 0x2B4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4570u;
    // 0x2b4574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4518u, 0x2B4570u, 0x2B4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4578u;
label_2b4578:
    // 0x2b4578: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4578u;
    {
        const bool branch_taken_0x2b4578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4578) {
            ctx->pc = 0x2B457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4578u;
            // 0x2b457c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B458Cu;
            goto label_2b458c;
        }
    }
    ctx->pc = 0x2B4580u;
    // 0x2b4580: 0xc0ad166  jal         func_2B4598
    ctx->pc = 0x2B4580u;
    SET_GPR_U32(ctx, 31, 0x2B4588u);
    ctx->pc = 0x2B4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4580u;
    // 0x2b4584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4598u, 0x2B4580u, 0x2B4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4588u;
label_2b4588:
    // 0x2b4588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b458c:
    // 0x2b458c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b458cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4590: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4590u;
        // 0x2b4594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4598u;
}
