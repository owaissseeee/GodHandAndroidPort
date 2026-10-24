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

// Function: func_0033CE98
// Address: 0x33ce98 - 0x33cee8
void func_0033CE98_0x33ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033CE98_0x33ce98");
#endif

    switch (ctx->pc) {
        case 0x33ced0u: goto label_33ced0;
        default: break;
    }

    ctx->pc = 0x33ce98u;

    // 0x33ce98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ce9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33cea4: 0x8082000e  lb          $v0, 0xE($a0)
    ctx->pc = 0x33cea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x33cea8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CEA8u;
    {
        const bool branch_taken_0x33cea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEA8u;
        // 0x33ceac: 0x9085000e  lbu         $a1, 0xE($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cea8) {
            ctx->pc = 0x33CEBCu;
            goto label_33cebc;
        }
    }
    ctx->pc = 0x33CEB0u;
    // 0x33ceb0: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x33ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x33ceb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CEB4u;
    {
        const bool branch_taken_0x33ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEB4u;
        // 0x33ceb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ceb4) {
            ctx->pc = 0x33CEDCu;
            goto label_33cedc;
        }
    }
    ctx->pc = 0x33CEBCu;
label_33cebc:
    // 0x33cebc: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x33CEBCu;
    {
        const bool branch_taken_0x33cebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cebc) {
            ctx->pc = 0x33CEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CEBCu;
            // 0x33cec0: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CED8u;
            goto label_33ced8;
        }
    }
    ctx->pc = 0x33CEC4u;
    // 0x33cec4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33cec8: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x33CEC8u;
    SET_GPR_U32(ctx, 31, 0x33CED0u);
    ctx->pc = 0x33CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEC8u;
    // 0x33cecc: 0x248468d0  addiu       $a0, $a0, 0x68D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x33CEC8u, 0x33CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CED0u;
label_33ced0:
    // 0x33ced0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33CED0u;
    {
        const bool branch_taken_0x33ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CED0u;
        // 0x33ced4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ced0) {
            ctx->pc = 0x33CEDCu;
            goto label_33cedc;
        }
    }
    ctx->pc = 0x33CED8u;
label_33ced8:
    // 0x33ced8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33ced8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_33cedc:
    // 0x33cedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cee0: 0x3e00008  jr          $ra
    ctx->pc = 0x33CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEE0u;
        // 0x33cee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CEE8u;
}
