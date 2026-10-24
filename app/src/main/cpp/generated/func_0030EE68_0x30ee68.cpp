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

// Function: func_0030EE68
// Address: 0x30ee68 - 0x30eec8
void func_0030EE68_0x30ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030EE68_0x30ee68");
#endif

    switch (ctx->pc) {
        case 0x30ee8cu: goto label_30ee8c;
        case 0x30ee98u: goto label_30ee98;
        case 0x30eea4u: goto label_30eea4;
        case 0x30eeb0u: goto label_30eeb0;
        case 0x30eebcu: goto label_30eebc;
        default: break;
    }

    ctx->pc = 0x30ee68u;

    // 0x30ee68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30ee6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ee70: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30EE70u;
    {
        const bool branch_taken_0x30ee70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE70u;
        // 0x30ee74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee70) {
            ctx->pc = 0x30EEBCu;
            goto label_30eebc;
        }
    }
    ctx->pc = 0x30EE78u;
    // 0x30ee78: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30EE78u;
    {
        const bool branch_taken_0x30ee78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE78u;
        // 0x30ee7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee78) {
            ctx->pc = 0x30EEC0u;
            goto label_30eec0;
        }
    }
    ctx->pc = 0x30EE80u;
    // 0x30ee80: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ee84: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30EE84u;
    SET_GPR_U32(ctx, 31, 0x30EE8Cu);
    ctx->pc = 0x30EE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE84u;
    // 0x30ee88: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30EE84u, 0x30EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE8Cu;
label_30ee8c:
    // 0x30ee8c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ee90: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30EE90u;
    SET_GPR_U32(ctx, 31, 0x30EE98u);
    ctx->pc = 0x30EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE90u;
    // 0x30ee94: 0x24844210  addiu       $a0, $a0, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30EE90u, 0x30EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE98u;
label_30ee98:
    // 0x30ee98: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ee9c: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30EE9Cu;
    SET_GPR_U32(ctx, 31, 0x30EEA4u);
    ctx->pc = 0x30EEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE9Cu;
    // 0x30eea0: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30EE9Cu, 0x30EEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EEA4u;
label_30eea4:
    // 0x30eea4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30eea8: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30EEA8u;
    SET_GPR_U32(ctx, 31, 0x30EEB0u);
    ctx->pc = 0x30EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EEA8u;
    // 0x30eeac: 0x24844230  addiu       $a0, $a0, 0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30EEA8u, 0x30EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EEB0u;
label_30eeb0:
    // 0x30eeb0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30eeb4: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30EEB4u;
    SET_GPR_U32(ctx, 31, 0x30EEBCu);
    ctx->pc = 0x30EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EEB4u;
    // 0x30eeb8: 0x24844240  addiu       $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30EEB4u, 0x30EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EEBCu;
label_30eebc:
    // 0x30eebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30eec0:
    // 0x30eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x30EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EEC0u;
        // 0x30eec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EEC8u;
}
