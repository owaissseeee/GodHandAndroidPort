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

// Function: GetNextAnimIndex_1451E0
// Address: 0x1451e0 - 0x145238
void GetNextAnimIndex_1451E0_0x1451e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextAnimIndex_1451E0_0x1451e0");
#endif

    ctx->pc = 0x1451e0u;

    // 0x1451e0: 0x8482041e  lh          $v0, 0x41E($a0)
    ctx->pc = 0x1451e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1054)));
    // 0x1451e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1451e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1451e8: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1451E8u;
    {
        const bool branch_taken_0x1451e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1451e8) {
            ctx->pc = 0x1451ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1451E8u;
            // 0x1451ec: 0x8484041e  lh          $a0, 0x41E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1054)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145228u;
            goto label_145228;
        }
    }
    ctx->pc = 0x1451F0u;
    // 0x1451f0: 0x84820420  lh          $v0, 0x420($a0)
    ctx->pc = 0x1451f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1056)));
    // 0x1451f4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1451F4u;
    {
        const bool branch_taken_0x1451f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1451f4) {
            ctx->pc = 0x1451F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1451F4u;
            // 0x1451f8: 0x8484041e  lh          $a0, 0x41E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1054)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145228u;
            goto label_145228;
        }
    }
    ctx->pc = 0x1451FCu;
    // 0x1451fc: 0x84830422  lh          $v1, 0x422($a0)
    ctx->pc = 0x1451fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1058)));
    // 0x145200: 0x848203b2  lh          $v0, 0x3B2($a0)
    ctx->pc = 0x145200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 946)));
    // 0x145204: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145208: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x145208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14520c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14520Cu;
    {
        const bool branch_taken_0x14520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14520Cu;
        // 0x145210: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14520c) {
            ctx->pc = 0x14521Cu;
            goto label_14521c;
        }
    }
    ctx->pc = 0x145214u;
    // 0x145214: 0x3e00008  jr          $ra
    ctx->pc = 0x145214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145214u;
        // 0x145218: 0x8482036c  lh          $v0, 0x36C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14521Cu;
label_14521c:
    // 0x14521c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x145220: 0x3e00008  jr          $ra
    ctx->pc = 0x145220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145220u;
        // 0x145224: 0x8462036c  lh          $v0, 0x36C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145228u;
label_145228:
    // 0x145228: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x145228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14522c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x145230: 0x3e00008  jr          $ra
    ctx->pc = 0x145230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145230u;
        // 0x145234: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145238u;
}
