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

// Function: func_00197FA0
// Address: 0x197fa0 - 0x198000
void func_00197FA0_0x197fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00197FA0_0x197fa0");
#endif

    switch (ctx->pc) {
        case 0x197fb4u: goto label_197fb4;
        default: break;
    }

    ctx->pc = 0x197fa0u;

    // 0x197fa0: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x197fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x197fa4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x197FA4u;
    {
        const bool branch_taken_0x197fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA4u;
        // 0x197fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fa4) {
            ctx->pc = 0x197FBCu;
            goto label_197fbc;
        }
    }
    ctx->pc = 0x197FACu;
    // 0x197fac: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x197FACu;
    {
        const bool branch_taken_0x197fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197fac) {
            ctx->pc = 0x197FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197FACu;
            // 0x197fb0: 0x948209d4  lhu         $v0, 0x9D4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197FD8u;
            goto label_197fd8;
        }
    }
    ctx->pc = 0x197FB4u;
label_197fb4:
    // 0x197fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x197FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197FBCu;
label_197fbc:
    // 0x197fbc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x197fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197fc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197fc4: 0xa48209d4  sh          $v0, 0x9D4($a0)
    ctx->pc = 0x197fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x197fc8: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x197fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x197fcc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x197fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x197fd0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x197fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x197fd4: 0x948209d4  lhu         $v0, 0x9D4($a0)
    ctx->pc = 0x197fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2516)));
label_197fd8:
    // 0x197fd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197fdc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x197fe0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x197FE0u;
    {
        const bool branch_taken_0x197fe0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x197FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FE0u;
        // 0x197fe4: 0xa48209d4  sh          $v0, 0x9D4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fe0) {
            ctx->pc = 0x197FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197fb4;
        }
    }
    ctx->pc = 0x197FE8u;
    // 0x197fe8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x197fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x197fec: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x197fecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x197ff0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x197ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x197ff4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x197ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x197ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x197FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198000u;
}
