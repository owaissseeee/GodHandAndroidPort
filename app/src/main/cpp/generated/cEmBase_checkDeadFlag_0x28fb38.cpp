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

// Function: cEmBase_checkDeadFlag
// Address: 0x28fb38 - 0x28fb88
void cEmBase_checkDeadFlag_0x28fb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmBase_checkDeadFlag_0x28fb38");
#endif

    switch (ctx->pc) {
        case 0x28fb60u: goto label_28fb60;
        default: break;
    }

    ctx->pc = 0x28fb38u;

    // 0x28fb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fb3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28fb40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fb44: 0x94850640  lhu         $a1, 0x640($a0)
    ctx->pc = 0x28fb44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x28fb48: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FB48u;
    {
        const bool branch_taken_0x28fb48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB48u;
        // 0x28fb4c: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb48) {
            ctx->pc = 0x28FB58u;
            goto label_28fb58;
        }
    }
    ctx->pc = 0x28FB50u;
    // 0x28fb50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28FB50u;
    {
        const bool branch_taken_0x28fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB50u;
        // 0x28fb54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb50) {
            ctx->pc = 0x28FB78u;
            goto label_28fb78;
        }
    }
    ctx->pc = 0x28FB58u;
label_28fb58:
    // 0x28fb58: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x28FB58u;
    SET_GPR_U32(ctx, 31, 0x28FB60u);
    ctx->pc = 0x28FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB58u;
    // 0x28fb5c: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x28FB58u, 0x28FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB60u;
label_28fb60:
    // 0x28fb60: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FB60u;
    {
        const bool branch_taken_0x28fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fb60) {
            ctx->pc = 0x28FB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FB60u;
            // 0x28fb64: 0x90420014  lbu         $v0, 0x14($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FB70u;
            goto label_28fb70;
        }
    }
    ctx->pc = 0x28FB68u;
    // 0x28fb68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FB68u;
    {
        const bool branch_taken_0x28fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB68u;
        // 0x28fb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb68) {
            ctx->pc = 0x28FB78u;
            goto label_28fb78;
        }
    }
    ctx->pc = 0x28FB70u;
label_28fb70:
    // 0x28fb70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28fb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28fb74: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28fb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28fb78:
    // 0x28fb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB7Cu;
        // 0x28fb80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB84u;
    // 0x28fb84: 0x0  nop
    ctx->pc = 0x28fb84u;
    // NOP
    ctx->pc = 0x28fb88u;
}
