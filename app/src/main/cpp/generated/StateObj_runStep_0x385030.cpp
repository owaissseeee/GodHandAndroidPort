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

// Function: StateObj_runStep
// Address: 0x385030 - 0x385078
void StateObj_runStep_0x385030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateObj_runStep_0x385030");
#endif

    switch (ctx->pc) {
        case 0x38505cu: goto label_38505c;
        case 0x38506cu: goto label_38506c;
        default: break;
    }

    ctx->pc = 0x385030u;

    // 0x385030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x385030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x385034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385038: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x385038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x38503c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38503Cu;
    {
        const bool branch_taken_0x38503c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38503Cu;
        // 0x385040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38503c) {
            ctx->pc = 0x385054u;
            goto label_385054;
        }
    }
    ctx->pc = 0x385044u;
    // 0x385044: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x385044u;
    {
        const bool branch_taken_0x385044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x385048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385044u;
        // 0x385048: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385044) {
            ctx->pc = 0x385064u;
            goto label_385064;
        }
    }
    ctx->pc = 0x38504Cu;
    // 0x38504c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38504Cu;
    {
        const bool branch_taken_0x38504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38504c) {
            ctx->pc = 0x385070u;
            goto label_385070;
        }
    }
    ctx->pc = 0x385054u;
label_385054:
    // 0x385054: 0xc0e141e  jal         func_385078
    ctx->pc = 0x385054u;
    SET_GPR_U32(ctx, 31, 0x38505Cu);
    ctx->pc = 0x385078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385078u, 0x385054u, 0x38505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38505Cu;
label_38505c:
    // 0x38505c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38505Cu;
    {
        const bool branch_taken_0x38505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38505Cu;
        // 0x385060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38505c) {
            ctx->pc = 0x385070u;
            goto label_385070;
        }
    }
    ctx->pc = 0x385064u;
label_385064:
    // 0x385064: 0xc0e144e  jal         func_385138
    ctx->pc = 0x385064u;
    SET_GPR_U32(ctx, 31, 0x38506Cu);
    ctx->pc = 0x385138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385138u, 0x385064u, 0x38506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38506Cu;
label_38506c:
    // 0x38506c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385070:
    // 0x385070: 0x3e00008  jr          $ra
    ctx->pc = 0x385070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385070u;
        // 0x385074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385078u;
}
