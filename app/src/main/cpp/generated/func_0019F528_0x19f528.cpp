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

// Function: func_0019F528
// Address: 0x19f528 - 0x19f588
void func_0019F528_0x19f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019F528_0x19f528");
#endif

    switch (ctx->pc) {
        case 0x19f53cu: goto label_19f53c;
        default: break;
    }

    ctx->pc = 0x19f528u;

    // 0x19f528: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x19f528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x19f52c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F52Cu;
    {
        const bool branch_taken_0x19f52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F52Cu;
        // 0x19f530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f52c) {
            ctx->pc = 0x19F544u;
            goto label_19f544;
        }
    }
    ctx->pc = 0x19F534u;
    // 0x19f534: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19F534u;
    {
        const bool branch_taken_0x19f534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f534) {
            ctx->pc = 0x19F538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F534u;
            // 0x19f538: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F560u;
            goto label_19f560;
        }
    }
    ctx->pc = 0x19F53Cu;
label_19f53c:
    // 0x19f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F544u;
label_19f544:
    // 0x19f544: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19f544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19f548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f54c: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x19f54cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f550: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x19f550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x19f554: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x19f554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f558: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x19f558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f55c: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x19f55cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_19f560:
    // 0x19f560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19f564: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19f564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19f568: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x19F568u;
    {
        const bool branch_taken_0x19f568 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F568u;
        // 0x19f56c: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f568) {
            ctx->pc = 0x19F53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f53c;
        }
    }
    ctx->pc = 0x19F570u;
    // 0x19f570: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x19f570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f574: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x19f574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f578: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x19f578u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f57c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x19f57cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f580: 0x3e00008  jr          $ra
    ctx->pc = 0x19F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F588u;
}
