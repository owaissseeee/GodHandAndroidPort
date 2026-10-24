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

// Function: func_00344F68
// Address: 0x344f68 - 0x344fd8
void func_00344F68_0x344f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344F68_0x344f68");
#endif

    switch (ctx->pc) {
        case 0x344f7cu: goto label_344f7c;
        default: break;
    }

    ctx->pc = 0x344f68u;

    // 0x344f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344f6c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x344f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x344f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344f74: 0xc0d7a1a  jal         func_35E868
    ctx->pc = 0x344F74u;
    SET_GPR_U32(ctx, 31, 0x344F7Cu);
    ctx->pc = 0x344F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F74u;
    // 0x344f78: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E868u, 0x344F74u, 0x344F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F7Cu;
label_344f7c:
    // 0x344f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f80: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x344F80u;
    {
        const bool branch_taken_0x344f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x344F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F80u;
        // 0x344f84: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f80) {
            ctx->pc = 0x344FCCu;
            goto label_344fcc;
        }
    }
    ctx->pc = 0x344F88u;
    // 0x344f88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x344f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f8c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x344f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x344f90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x344F90u;
    {
        const bool branch_taken_0x344f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F90u;
        // 0x344f94: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f90) {
            ctx->pc = 0x344FCCu;
            goto label_344fcc;
        }
    }
    ctx->pc = 0x344F98u;
    // 0x344f98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x344f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x344f9c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x344f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x344fa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x344fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x344fa4: 0x8c637a20  lw          $v1, 0x7A20($v1)
    ctx->pc = 0x344fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31264)));
    // 0x344fa8: 0x600008  jr          $v1
    ctx->pc = 0x344FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x344FB0u: goto label_344fb0;
            case 0x344FB8u: goto label_344fb8;
            case 0x344FC0u: goto label_344fc0;
            case 0x344FC8u: goto label_344fc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x344FB0u;
label_344fb0:
    // 0x344fb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x344FB0u;
    {
        const bool branch_taken_0x344fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FB0u;
        // 0x344fb4: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fb0) {
            ctx->pc = 0x344FCCu;
            goto label_344fcc;
        }
    }
    ctx->pc = 0x344FB8u;
label_344fb8:
    // 0x344fb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x344FB8u;
    {
        const bool branch_taken_0x344fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FB8u;
        // 0x344fbc: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fb8) {
            ctx->pc = 0x344FCCu;
            goto label_344fcc;
        }
    }
    ctx->pc = 0x344FC0u;
label_344fc0:
    // 0x344fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x344FC0u;
    {
        const bool branch_taken_0x344fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FC0u;
        // 0x344fc4: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fc0) {
            ctx->pc = 0x344FCCu;
            goto label_344fcc;
        }
    }
    ctx->pc = 0x344FC8u;
label_344fc8:
    // 0x344fc8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x344fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_344fcc:
    // 0x344fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x344FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FD0u;
        // 0x344fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344FD8u;
}
