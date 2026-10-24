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

// Function: sftim_GetTimeNone
// Address: 0x35ac58 - 0x35aca0
void sftim_GetTimeNone_0x35ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftim_GetTimeNone_0x35ac58");
#endif

    switch (ctx->pc) {
        case 0x35ac74u: goto label_35ac74;
        default: break;
    }

    ctx->pc = 0x35ac58u;

    // 0x35ac58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ac5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ac60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35ac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ac68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ac6c: 0xc0d6b86  jal         func_35AE18
    ctx->pc = 0x35AC6Cu;
    SET_GPR_U32(ctx, 31, 0x35AC74u);
    ctx->pc = 0x35AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC6Cu;
    // 0x35ac70: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE18u, 0x35AC6Cu, 0x35AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC74u;
label_35ac74:
    // 0x35ac74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35AC74u;
    {
        const bool branch_taken_0x35ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC74u;
        // 0x35ac78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac74) {
            ctx->pc = 0x35AC8Cu;
            goto label_35ac8c;
        }
    }
    ctx->pc = 0x35AC7Cu;
    // 0x35ac7c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x35ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35ac80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35ac84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ac84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac88: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_35ac8c:
    // 0x35ac8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ac8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ac90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ac94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ac98: 0x3e00008  jr          $ra
    ctx->pc = 0x35AC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC98u;
        // 0x35ac9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ACA0u;
}
