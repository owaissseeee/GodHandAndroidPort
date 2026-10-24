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

// Function: func_00281500
// Address: 0x281500 - 0x281560
void func_00281500_0x281500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281500_0x281500");
#endif

    ctx->pc = 0x281500u;

    // 0x281500: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x281500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x281504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281508: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281508u;
    {
        const bool branch_taken_0x281508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281508u;
        // 0x28150c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281508) {
            ctx->pc = 0x281538u;
            goto label_281538;
        }
    }
    ctx->pc = 0x281510u;
    // 0x281510: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281510u;
    {
        const bool branch_taken_0x281510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281510u;
        // 0x281514: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281510) {
            ctx->pc = 0x281524u;
            goto label_281524;
        }
    }
    ctx->pc = 0x281518u;
    // 0x281518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x281518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28151c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28151Cu;
    {
        const bool branch_taken_0x28151c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28151Cu;
        // 0x281520: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28151c) {
            ctx->pc = 0x281544u;
            goto label_281544;
        }
    }
    ctx->pc = 0x281524u;
label_281524:
    // 0x281524: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281528: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x281528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28152c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x28152cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281530: 0x3e00008  jr          $ra
    ctx->pc = 0x281530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281530u;
        // 0x281534: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281538u;
label_281538:
    // 0x281538: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x281538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28153c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28153Cu;
    {
        const bool branch_taken_0x28153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28153Cu;
        // 0x281540: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28153c) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x281544u;
label_281544:
    // 0x281544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x281544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_281548:
    // 0x281548: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x281548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28154c: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x28154cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x281550: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281554: 0x3e00008  jr          $ra
    ctx->pc = 0x281554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281554u;
        // 0x281558: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28155Cu;
    // 0x28155c: 0x0  nop
    ctx->pc = 0x28155cu;
    // NOP
    ctx->pc = 0x281560u;
}
