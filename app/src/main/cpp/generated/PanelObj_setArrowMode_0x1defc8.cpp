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

// Function: PanelObj_setArrowMode
// Address: 0x1defc8 - 0x1df048
void PanelObj_setArrowMode_0x1defc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelObj_setArrowMode_0x1defc8");
#endif

    switch (ctx->pc) {
        case 0x1df004u: goto label_1df004;
        case 0x1df014u: goto label_1df014;
        case 0x1df028u: goto label_1df028;
        case 0x1df038u: goto label_1df038;
        default: break;
    }

    ctx->pc = 0x1defc8u;

    // 0x1defc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1defcc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1defccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1defd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1defd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1defd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1defd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1defd8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEFD8u;
    {
        const bool branch_taken_0x1defd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFD8u;
        // 0x1defdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defd8) {
            ctx->pc = 0x1DEFF4u;
            goto label_1deff4;
        }
    }
    ctx->pc = 0x1DEFE0u;
    // 0x1defe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1defe4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DEFE4u;
    {
        const bool branch_taken_0x1defe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFE4u;
        // 0x1defe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defe4) {
            ctx->pc = 0x1DF01Cu;
            goto label_1df01c;
        }
    }
    ctx->pc = 0x1DEFECu;
    // 0x1defec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DEFECu;
    {
        const bool branch_taken_0x1defec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFECu;
        // 0x1deff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defec) {
            ctx->pc = 0x1DF03Cu;
            goto label_1df03c;
        }
    }
    ctx->pc = 0x1DEFF4u;
label_1deff4:
    // 0x1deff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1deff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deff8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1deff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1deffc: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DEFFCu;
    SET_GPR_U32(ctx, 31, 0x1DF004u);
    ctx->pc = 0x1DF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEFFCu;
    // 0x1df000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DEFFCu, 0x1DF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF004u;
label_1df004:
    // 0x1df004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df008: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1df008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1df00c: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF00Cu;
    SET_GPR_U32(ctx, 31, 0x1DF014u);
    ctx->pc = 0x1DF010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF00Cu;
    // 0x1df010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF00Cu, 0x1DF014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF014u;
label_1df014:
    // 0x1df014: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF014u;
    {
        const bool branch_taken_0x1df014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF014u;
        // 0x1df018: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df014) {
            ctx->pc = 0x1DF03Cu;
            goto label_1df03c;
        }
    }
    ctx->pc = 0x1DF01Cu;
label_1df01c:
    // 0x1df01c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df020: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF020u;
    SET_GPR_U32(ctx, 31, 0x1DF028u);
    ctx->pc = 0x1DF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF020u;
    // 0x1df024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF020u, 0x1DF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF028u;
label_1df028:
    // 0x1df028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df02c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1df02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1df030: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF030u;
    SET_GPR_U32(ctx, 31, 0x1DF038u);
    ctx->pc = 0x1DF034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF030u;
    // 0x1df034: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF030u, 0x1DF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF038u;
label_1df038:
    // 0x1df038: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df03c:
    // 0x1df03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df040: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF040u;
        // 0x1df044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF048u;
}
