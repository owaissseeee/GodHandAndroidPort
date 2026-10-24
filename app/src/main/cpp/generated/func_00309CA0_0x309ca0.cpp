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

// Function: func_00309CA0
// Address: 0x309ca0 - 0x309d40
void func_00309CA0_0x309ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00309CA0_0x309ca0");
#endif

    ctx->pc = 0x309ca0u;

    // 0x309ca0: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x309ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x309ca4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x309CA4u;
    {
        const bool branch_taken_0x309ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CA4u;
        // 0x309ca8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ca4) {
            ctx->pc = 0x309D34u;
            goto label_309d34;
        }
    }
    ctx->pc = 0x309CACu;
    // 0x309cac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x309cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x309cb0: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x309cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x309cb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x309cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309cb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x309cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309cbc: 0x800008  jr          $a0
    ctx->pc = 0x309CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x309CC4u: goto label_309cc4;
            case 0x309CE0u: goto label_309ce0;
            case 0x309CFCu: goto label_309cfc;
            case 0x309D18u: goto label_309d18;
            case 0x309D34u: goto label_309d34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309CBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x309CC4u;
label_309cc4:
    // 0x309cc4: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x309cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x309cc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309ccc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x309cccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309cd0: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x309cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x309cd4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309cd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x309cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x309CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CD8u;
        // 0x309cdc: 0x21183  sra         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309CE0u;
label_309ce0:
    // 0x309ce0: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x309ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x309ce4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309ce8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x309ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309cec: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x309cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x309cf0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309cf0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x309cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x309CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CF4u;
        // 0x309cf8: 0x211c3  sra         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309CFCu;
label_309cfc:
    // 0x309cfc: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x309cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x309d00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309d04: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x309d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309d08: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x309d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x309d0c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309d0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x309d10: 0x3e00008  jr          $ra
    ctx->pc = 0x309D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D10u;
        // 0x309d14: 0x21203  sra         $v0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309D18u;
label_309d18:
    // 0x309d18: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x309d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x309d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309d20: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x309d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309d24: 0x248201ff  addiu       $v0, $a0, 0x1FF
    ctx->pc = 0x309d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 511));
    // 0x309d28: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309d28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x309d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x309D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D2Cu;
        // 0x309d30: 0x21243  sra         $v0, $v0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309D34u;
label_309d34:
    // 0x309d34: 0x3e00008  jr          $ra
    ctx->pc = 0x309D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D34u;
        // 0x309d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309D3Cu;
    // 0x309d3c: 0x0  nop
    ctx->pc = 0x309d3cu;
    // NOP
    ctx->pc = 0x309d40u;
}
