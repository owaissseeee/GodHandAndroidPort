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

// Function: cCoreSave_ckGodReel
// Address: 0x1fb928 - 0x1fb980
void cCoreSave_ckGodReel_0x1fb928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_ckGodReel_0x1fb928");
#endif

    switch (ctx->pc) {
        case 0x1fb934u: goto label_1fb934;
        default: break;
    }

    ctx->pc = 0x1fb928u;

    // 0x1fb928: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fb928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb92c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB92Cu;
    {
        const bool branch_taken_0x1fb92c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB92Cu;
        // 0x1fb930: 0x28a2001f  slti        $v0, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb92c) {
            ctx->pc = 0x1FB93Cu;
            goto label_1fb93c;
        }
    }
    ctx->pc = 0x1FB934u;
label_1fb934:
    // 0x1fb934: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB934u;
        // 0x1fb938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB93Cu;
label_1fb93c:
    // 0x1fb93c: 0x0  nop
    ctx->pc = 0x1fb93cu;
    // NOP
    // 0x1fb940: 0x0  nop
    ctx->pc = 0x1fb940u;
    // NOP
    // 0x1fb944: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FB944u;
    {
        const bool branch_taken_0x1fb944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB944u;
        // 0x1fb948: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb944) {
            ctx->pc = 0x1FB934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb934;
        }
    }
    ctx->pc = 0x1FB94Cu;
    // 0x1fb94c: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x1fb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31284)));
    // 0x1fb950: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1fb950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1fb954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fb954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fb958: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB958u;
    {
        const bool branch_taken_0x1fb958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB958u;
        // 0x1fb95c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb958) {
            ctx->pc = 0x1FB974u;
            goto label_1fb974;
        }
    }
    ctx->pc = 0x1FB960u;
    // 0x1fb960: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1fb960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1fb964: 0xa22004  sllv        $a0, $v0, $a1
    ctx->pc = 0x1fb964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb968: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fb968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fb96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB96Cu;
        // 0x1fb970: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB974u;
label_1fb974:
    // 0x1fb974: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB97Cu;
    // 0x1fb97c: 0x0  nop
    ctx->pc = 0x1fb97cu;
    // NOP
    ctx->pc = 0x1fb980u;
}
