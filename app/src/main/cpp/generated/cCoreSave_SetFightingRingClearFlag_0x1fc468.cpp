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

// Function: cCoreSave_SetFightingRingClearFlag
// Address: 0x1fc468 - 0x1fc4d0
void cCoreSave_SetFightingRingClearFlag_0x1fc468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_SetFightingRingClearFlag_0x1fc468");
#endif

    ctx->pc = 0x1fc468u;

    // 0x1fc468: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc46c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FC46Cu;
    {
        const bool branch_taken_0x1fc46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC46Cu;
        // 0x1fc470: 0x51942  srl         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc46c) {
            ctx->pc = 0x1FC4C8u;
            goto label_1fc4c8;
        }
    }
    ctx->pc = 0x1FC474u;
    // 0x1fc474: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1fc474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fc478: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC478u;
    {
        const bool branch_taken_0x1fc478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC478u;
        // 0x1fc47c: 0x30a5001f  andi        $a1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc478) {
            ctx->pc = 0x1FC4C8u;
            goto label_1fc4c8;
        }
    }
    ctx->pc = 0x1FC480u;
    // 0x1fc480: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC480u;
    {
        const bool branch_taken_0x1fc480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC480u;
        // 0x1fc484: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc480) {
            ctx->pc = 0x1FC4A8u;
            goto label_1fc4a8;
        }
    }
    ctx->pc = 0x1FC488u;
    // 0x1fc488: 0x24840b98  addiu       $a0, $a0, 0xB98
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2968));
    // 0x1fc48c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc494: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc498: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fc49c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4A0u;
        // 0x1fc4a4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4A8u;
label_1fc4a8:
    // 0x1fc4a8: 0x24840b98  addiu       $a0, $a0, 0xB98
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2968));
    // 0x1fc4ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc4b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc4b8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1fc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fc4bc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1fc4bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1fc4c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fc4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fc4c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fc4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fc4c8:
    // 0x1fc4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4D0u;
}
