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

// Function: func_0033BBD8
// Address: 0x33bbd8 - 0x33bc18
void func_0033BBD8_0x33bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BBD8_0x33bbd8");
#endif

    switch (ctx->pc) {
        case 0x33bbd8u: goto label_33bbd8;
        case 0x33bbdcu: goto label_33bbdc;
        case 0x33bbe0u: goto label_33bbe0;
        case 0x33bbe4u: goto label_33bbe4;
        case 0x33bbe8u: goto label_33bbe8;
        case 0x33bbecu: goto label_33bbec;
        case 0x33bbf0u: goto label_33bbf0;
        case 0x33bbf4u: goto label_33bbf4;
        case 0x33bbf8u: goto label_33bbf8;
        case 0x33bbfcu: goto label_33bbfc;
        case 0x33bc00u: goto label_33bc00;
        case 0x33bc04u: goto label_33bc04;
        case 0x33bc08u: goto label_33bc08;
        case 0x33bc0cu: goto label_33bc0c;
        case 0x33bc10u: goto label_33bc10;
        case 0x33bc14u: goto label_33bc14;
        default: break;
    }

    ctx->pc = 0x33bbd8u;

label_33bbd8:
    // 0x33bbd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33bbdc:
    // 0x33bbdc: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33bbe0:
    // 0x33bbe0: 0x24428860  addiu       $v0, $v0, -0x77A0
    ctx->pc = 0x33bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936672));
label_33bbe4:
    // 0x33bbe4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_33bbe8:
    // 0x33bbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33bbec:
    // 0x33bbec: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33bbf0:
    // 0x33bbf0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33bbf4:
    // 0x33bbf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33bbf8:
    // 0x33bbf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33bbfc:
    if (ctx->pc == 0x33BBFCu) {
        ctx->pc = 0x33BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBF8u;
        // 0x33bbfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC00u;
        goto label_33bc00;
    }
    ctx->pc = 0x33BBF8u;
    {
        const bool branch_taken_0x33bbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbf8) {
            ctx->pc = 0x33BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BBF8u;
            // 0x33bbfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BC0Cu;
            goto label_33bc0c;
        }
    }
    ctx->pc = 0x33BC00u;
label_33bc00:
    // 0x33bc00: 0x40f809  jalr        $v0
label_33bc04:
    if (ctx->pc == 0x33BC04u) {
        ctx->pc = 0x33BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC00u;
        // 0x33bc04: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC08u;
        goto label_33bc08;
    }
    ctx->pc = 0x33BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BC08u);
        ctx->pc = 0x33BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC00u;
        // 0x33bc04: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BC00u, 0x33BC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BC08u;
label_33bc08:
    // 0x33bc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bc0c:
    // 0x33bc0c: 0x3e00008  jr          $ra
label_33bc10:
    if (ctx->pc == 0x33BC10u) {
        ctx->pc = 0x33BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC0Cu;
        // 0x33bc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BC14u;
        goto label_33bc14;
    }
    ctx->pc = 0x33BC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC0Cu;
        // 0x33bc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BC14u;
label_33bc14:
    // 0x33bc14: 0x0  nop
    ctx->pc = 0x33bc14u;
    // NOP
    ctx->pc = 0x33bc18u;
}
