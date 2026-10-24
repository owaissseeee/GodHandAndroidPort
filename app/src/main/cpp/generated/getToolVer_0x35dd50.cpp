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

// Function: getToolVer
// Address: 0x35dd50 - 0x35ddb0
void getToolVer_0x35dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getToolVer_0x35dd50");
#endif

    switch (ctx->pc) {
        case 0x35dd74u: goto label_35dd74;
        case 0x35dd8cu: goto label_35dd8c;
        case 0x35dd98u: goto label_35dd98;
        default: break;
    }

    ctx->pc = 0x35dd50u;

    // 0x35dd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35dd54: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x35dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x35dd58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35dd5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35dd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd60: 0x24459c48  addiu       $a1, $v0, -0x63B8
    ctx->pc = 0x35dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941768));
    // 0x35dd64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35dd68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35dd6c: 0xc0ea4fe  jal         func_3A93F8
    ctx->pc = 0x35DD6Cu;
    SET_GPR_U32(ctx, 31, 0x35DD74u);
    ctx->pc = 0x35DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD6Cu;
    // 0x35dd70: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A93F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A93F8u, 0x35DD6Cu, 0x35DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD74u;
label_35dd74:
    // 0x35dd74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35dd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35dd78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd7c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35DD7Cu;
    {
        const bool branch_taken_0x35dd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD7Cu;
        // 0x35dd80: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd7c) {
            ctx->pc = 0x35DD9Cu;
            goto label_35dd9c;
        }
    }
    ctx->pc = 0x35DD84u;
    // 0x35dd84: 0xc0d776c  jal         func_35DDB0
    ctx->pc = 0x35DD84u;
    SET_GPR_U32(ctx, 31, 0x35DD8Cu);
    ctx->pc = 0x35DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DDB0u, 0x35DD84u, 0x35DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD8Cu;
label_35dd8c:
    // 0x35dd8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35dd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd90: 0xc0d776c  jal         func_35DDB0
    ctx->pc = 0x35DD90u;
    SET_GPR_U32(ctx, 31, 0x35DD98u);
    ctx->pc = 0x35DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD90u;
    // 0x35dd94: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DDB0u, 0x35DD90u, 0x35DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD98u;
label_35dd98:
    // 0x35dd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35dd9c:
    // 0x35dd9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dda0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dda4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35dda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dda8: 0x3e00008  jr          $ra
    ctx->pc = 0x35DDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDA8u;
        // 0x35ddac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DDB0u;
}
