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

// Function: SearchCameraData
// Address: 0x31ce38 - 0x31ce90
void SearchCameraData_0x31ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCameraData_0x31ce38");
#endif

    switch (ctx->pc) {
        case 0x31ce60u: goto label_31ce60;
        case 0x31ce74u: goto label_31ce74;
        default: break;
    }

    ctx->pc = 0x31ce38u;

    // 0x31ce38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ce3c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31ce40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ce44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31ce48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ce48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce4c: 0x24a50ed8  addiu       $a1, $a1, 0xED8
    ctx->pc = 0x31ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3800));
    // 0x31ce50: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x31ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x31ce54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ce58: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x31CE58u;
    SET_GPR_U32(ctx, 31, 0x31CE60u);
    ctx->pc = 0x31CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE58u;
    // 0x31ce5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x31CE58u, 0x31CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE60u;
label_31ce60:
    // 0x31ce60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CE60u;
    {
        const bool branch_taken_0x31ce60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE60u;
        // 0x31ce64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce60) {
            ctx->pc = 0x31CE7Cu;
            goto label_31ce7c;
        }
    }
    ctx->pc = 0x31CE68u;
    // 0x31ce68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31ce68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce6c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x31CE6Cu;
    SET_GPR_U32(ctx, 31, 0x31CE74u);
    ctx->pc = 0x31CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE6Cu;
    // 0x31ce70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x31CE6Cu, 0x31CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE74u;
label_31ce74:
    // 0x31ce74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31CE74u;
    {
        const bool branch_taken_0x31ce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE74u;
        // 0x31ce78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce74) {
            ctx->pc = 0x31CE84u;
            goto label_31ce84;
        }
    }
    ctx->pc = 0x31CE7Cu;
label_31ce7c:
    // 0x31ce7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ce7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31ce80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31ce84:
    // 0x31ce84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ce84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ce88: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE88u;
        // 0x31ce8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CE90u;
}
