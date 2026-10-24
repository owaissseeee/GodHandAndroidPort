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

// Function: func_00177560
// Address: 0x177560 - 0x1775c0
void func_00177560_0x177560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00177560_0x177560");
#endif

    switch (ctx->pc) {
        case 0x177574u: goto label_177574;
        default: break;
    }

    ctx->pc = 0x177560u;

    // 0x177560: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x177560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x177564: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177564u;
    {
        const bool branch_taken_0x177564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177564u;
        // 0x177568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177564) {
            ctx->pc = 0x17757Cu;
            goto label_17757c;
        }
    }
    ctx->pc = 0x17756Cu;
    // 0x17756c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17756Cu;
    {
        const bool branch_taken_0x17756c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17756c) {
            ctx->pc = 0x177570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17756Cu;
            // 0x177570: 0x94820d34  lhu         $v0, 0xD34($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177598u;
            goto label_177598;
        }
    }
    ctx->pc = 0x177574u;
label_177574:
    // 0x177574: 0x3e00008  jr          $ra
    ctx->pc = 0x177574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17757Cu;
label_17757c:
    // 0x17757c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177584: 0xa4820d34  sh          $v0, 0xD34($a0)
    ctx->pc = 0x177584u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x177588: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x177588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x17758c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17758cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x177590: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x177590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x177594: 0x94820d34  lhu         $v0, 0xD34($a0)
    ctx->pc = 0x177594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3380)));
label_177598:
    // 0x177598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17759c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1775a0: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1775A0u;
    {
        const bool branch_taken_0x1775a0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1775A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775A0u;
        // 0x1775a4: 0xa4820d34  sh          $v0, 0xD34($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775a0) {
            ctx->pc = 0x177574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177574;
        }
    }
    ctx->pc = 0x1775A8u;
    // 0x1775a8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1775a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1775ac: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1775acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1775b0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1775b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1775b4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1775b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1775b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1775B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1775B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1775C0u;
}
