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

// Function: func_0028FF80
// Address: 0x28ff80 - 0x28ffe0
void func_0028FF80_0x28ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028FF80_0x28ff80");
#endif

    switch (ctx->pc) {
        case 0x28ffa0u: goto label_28ffa0;
        case 0x28ffd0u: goto label_28ffd0;
        default: break;
    }

    ctx->pc = 0x28ff80u;

    // 0x28ff80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ff84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28ff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28ff88: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28FF88u;
    {
        const bool branch_taken_0x28ff88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF88u;
        // 0x28ff8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff88) {
            ctx->pc = 0x28FFD0u;
            goto label_28ffd0;
        }
    }
    ctx->pc = 0x28FF90u;
    // 0x28ff90: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x28FF90u;
    {
        const bool branch_taken_0x28ff90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF90u;
        // 0x28ff94: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff90) {
            ctx->pc = 0x28FFD0u;
            goto label_28ffd0;
        }
    }
    ctx->pc = 0x28FF98u;
    // 0x28ff98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ff9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28ffa0:
    // 0x28ffa0: 0x0  nop
    ctx->pc = 0x28ffa0u;
    // NOP
    // 0x28ffa4: 0x0  nop
    ctx->pc = 0x28ffa4u;
    // NOP
    // 0x28ffa8: 0x0  nop
    ctx->pc = 0x28ffa8u;
    // NOP
    // 0x28ffac: 0x0  nop
    ctx->pc = 0x28ffacu;
    // NOP
    // 0x28ffb0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28FFB0u;
    {
        const bool branch_taken_0x28ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFB0u;
        // 0x28ffb4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffb0) {
            ctx->pc = 0x28FFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ffa0;
        }
    }
    ctx->pc = 0x28FFB8u;
    // 0x28ffb8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28ffbc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x28ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x28ffc0: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28ffc4: 0x24a55960  addiu       $a1, $a1, 0x5960
    ctx->pc = 0x28ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22880));
    // 0x28ffc8: 0xc07f9ae  jal         func_1FE6B8
    ctx->pc = 0x28FFC8u;
    SET_GPR_U32(ctx, 31, 0x28FFD0u);
    ctx->pc = 0x28FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFC8u;
    // 0x28ffcc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE6B8u, 0x28FFC8u, 0x28FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFD0u;
label_28ffd0:
    // 0x28ffd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x28FFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFD4u;
        // 0x28ffd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FFDCu;
    // 0x28ffdc: 0x0  nop
    ctx->pc = 0x28ffdcu;
    // NOP
    ctx->pc = 0x28ffe0u;
}
