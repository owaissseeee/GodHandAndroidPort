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

// Function: func_002832F8
// Address: 0x2832f8 - 0x283360
void func_002832F8_0x2832f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002832F8_0x2832f8");
#endif

    ctx->pc = 0x2832f8u;

    // 0x2832f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832fc: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2832FCu;
    {
        const bool branch_taken_0x2832fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x283300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832FCu;
        // 0x283300: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832fc) {
            ctx->pc = 0x283334u;
            goto label_283334;
        }
    }
    ctx->pc = 0x283304u;
    // 0x283304: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x283304u;
    {
        const bool branch_taken_0x283304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x283308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283304u;
        // 0x283308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283304) {
            ctx->pc = 0x28331Cu;
            goto label_28331c;
        }
    }
    ctx->pc = 0x28330Cu;
    // 0x28330c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28330Cu;
    {
        const bool branch_taken_0x28330c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x283310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28330Cu;
        // 0x283310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28330c) {
            ctx->pc = 0x28333Cu;
            goto label_28333c;
        }
    }
    ctx->pc = 0x283314u;
    // 0x283314: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x283314u;
    {
        const bool branch_taken_0x283314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x283318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283314u;
        // 0x283318: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283314) {
            ctx->pc = 0x283348u;
            goto label_283348;
        }
    }
    ctx->pc = 0x28331Cu;
label_28331c:
    // 0x28331c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x28331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x283320: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x283320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x283324: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283328: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x283328u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x28332c: 0x3e00008  jr          $ra
    ctx->pc = 0x28332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28332Cu;
        // 0x283330: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283334u;
label_283334:
    // 0x283334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283334u;
    {
        const bool branch_taken_0x283334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283334u;
        // 0x283338: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283334) {
            ctx->pc = 0x28334Cu;
            goto label_28334c;
        }
    }
    ctx->pc = 0x28333Cu;
label_28333c:
    // 0x28333c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x28333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x283340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283340u;
    {
        const bool branch_taken_0x283340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283340u;
        // 0x283344: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283340) {
            ctx->pc = 0x28334Cu;
            goto label_28334c;
        }
    }
    ctx->pc = 0x283348u;
label_283348:
    // 0x283348: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x283348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28334c:
    // 0x28334c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x28334cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283350: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x283350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x283354: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x283354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x283358: 0x3e00008  jr          $ra
    ctx->pc = 0x283358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283358u;
        // 0x28335c: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283360u;
}
