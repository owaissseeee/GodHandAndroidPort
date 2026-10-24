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

// Function: func_00188190
// Address: 0x188190 - 0x1881f0
void func_00188190_0x188190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188190_0x188190");
#endif

    switch (ctx->pc) {
        case 0x1881a4u: goto label_1881a4;
        default: break;
    }

    ctx->pc = 0x188190u;

    // 0x188190: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x188190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x188194: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x188194u;
    {
        const bool branch_taken_0x188194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188194u;
        // 0x188198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188194) {
            ctx->pc = 0x1881ACu;
            goto label_1881ac;
        }
    }
    ctx->pc = 0x18819Cu;
    // 0x18819c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18819Cu;
    {
        const bool branch_taken_0x18819c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18819c) {
            ctx->pc = 0x1881A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18819Cu;
            // 0x1881a0: 0x94820600  lhu         $v0, 0x600($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881C8u;
            goto label_1881c8;
        }
    }
    ctx->pc = 0x1881A4u;
label_1881a4:
    // 0x1881a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1881A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1881A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1881ACu;
label_1881ac:
    // 0x1881ac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1881acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1881b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1881b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1881b4: 0xa4820600  sh          $v0, 0x600($a0)
    ctx->pc = 0x1881b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x1881b8: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x1881b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1881bc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1881bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1881c0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1881c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1881c4: 0x94820600  lhu         $v0, 0x600($a0)
    ctx->pc = 0x1881c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1536)));
label_1881c8:
    // 0x1881c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1881c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1881cc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1881d0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1881D0u;
    {
        const bool branch_taken_0x1881d0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1881D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881D0u;
        // 0x1881d4: 0xa4820600  sh          $v0, 0x600($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881d0) {
            ctx->pc = 0x1881A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1881a4;
        }
    }
    ctx->pc = 0x1881D8u;
    // 0x1881d8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1881d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1881dc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1881dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1881e0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1881e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1881e4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1881e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1881e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1881E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1881E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1881F0u;
}
