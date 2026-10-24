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

// Function: func_00200B20
// Address: 0x200b20 - 0x200b88
void func_00200B20_0x200b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00200B20_0x200b20");
#endif

    switch (ctx->pc) {
        case 0x200b58u: goto label_200b58;
        case 0x200b68u: goto label_200b68;
        case 0x200b78u: goto label_200b78;
        default: break;
    }

    ctx->pc = 0x200b20u;

    // 0x200b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200b2c: 0x8c831108  lw          $v1, 0x1108($a0)
    ctx->pc = 0x200b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4360)));
    // 0x200b30: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200B30u;
    {
        const bool branch_taken_0x200b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200b30) {
            ctx->pc = 0x200B50u;
            goto label_200b50;
        }
    }
    ctx->pc = 0x200B38u;
    // 0x200b38: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x200B38u;
    {
        const bool branch_taken_0x200b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B38u;
        // 0x200b3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b38) {
            ctx->pc = 0x200B70u;
            goto label_200b70;
        }
    }
    ctx->pc = 0x200B40u;
    // 0x200b40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200B40u;
    {
        const bool branch_taken_0x200b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200b40) {
            ctx->pc = 0x200B60u;
            goto label_200b60;
        }
    }
    ctx->pc = 0x200B48u;
    // 0x200b48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x200B48u;
    {
        const bool branch_taken_0x200b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b48) {
            ctx->pc = 0x200B70u;
            goto label_200b70;
        }
    }
    ctx->pc = 0x200B50u;
label_200b50:
    // 0x200b50: 0xc0804a4  jal         func_201290
    ctx->pc = 0x200B50u;
    SET_GPR_U32(ctx, 31, 0x200B58u);
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x200B50u, 0x200B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B58u;
label_200b58:
    // 0x200b58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200B58u;
    {
        const bool branch_taken_0x200b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B58u;
        // 0x200b5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b58) {
            ctx->pc = 0x200B7Cu;
            goto label_200b7c;
        }
    }
    ctx->pc = 0x200B60u;
label_200b60:
    // 0x200b60: 0xc0805c6  jal         func_201718
    ctx->pc = 0x200B60u;
    SET_GPR_U32(ctx, 31, 0x200B68u);
    ctx->pc = 0x201718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201718u, 0x200B60u, 0x200B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B68u;
label_200b68:
    // 0x200b68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200B68u;
    {
        const bool branch_taken_0x200b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B68u;
        // 0x200b6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b68) {
            ctx->pc = 0x200B7Cu;
            goto label_200b7c;
        }
    }
    ctx->pc = 0x200B70u;
label_200b70:
    // 0x200b70: 0xc080494  jal         func_201250
    ctx->pc = 0x200B70u;
    SET_GPR_U32(ctx, 31, 0x200B78u);
    ctx->pc = 0x201250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201250u, 0x200B70u, 0x200B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B78u;
label_200b78:
    // 0x200b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200b7c:
    // 0x200b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x200B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B7Cu;
        // 0x200b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B84u;
    // 0x200b84: 0x0  nop
    ctx->pc = 0x200b84u;
    // NOP
    ctx->pc = 0x200b88u;
}
