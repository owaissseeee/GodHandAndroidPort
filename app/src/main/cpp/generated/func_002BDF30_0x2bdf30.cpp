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

// Function: func_002BDF30
// Address: 0x2bdf30 - 0x2bdf80
void func_002BDF30_0x2bdf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDF30_0x2bdf30");
#endif

    switch (ctx->pc) {
        case 0x2bdf40u: goto label_2bdf40;
        default: break;
    }

    ctx->pc = 0x2bdf30u;

    // 0x2bdf30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2bdf30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf34: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2BDF34u;
    {
        const bool branch_taken_0x2bdf34 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2BDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF34u;
        // 0x2bdf38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf34) {
            ctx->pc = 0x2BDF74u;
            goto label_2bdf74;
        }
    }
    ctx->pc = 0x2BDF3Cu;
    // 0x2bdf3c: 0x0  nop
    ctx->pc = 0x2bdf3cu;
    // NOP
label_2bdf40:
    // 0x2bdf40: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2bdf40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bdf44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdf48: 0x0  nop
    ctx->pc = 0x2bdf48u;
    // NOP
    // 0x2bdf4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bdf4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bdf50: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2bdf50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdf54: 0x0  nop
    ctx->pc = 0x2bdf54u;
    // NOP
    // 0x2bdf58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDF58u;
    {
        const bool branch_taken_0x2bdf58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF58u;
        // 0x2bdf5c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf58) {
            ctx->pc = 0x2BDF68u;
            goto label_2bdf68;
        }
    }
    ctx->pc = 0x2BDF60u;
    // 0x2bdf60: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF60u;
        // 0x2bdf64: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF68u;
label_2bdf68:
    // 0x2bdf68: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2bdf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bdf6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BDF6Cu;
    {
        const bool branch_taken_0x2bdf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF6Cu;
        // 0x2bdf70: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf6c) {
            ctx->pc = 0x2BDF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bdf40;
        }
    }
    ctx->pc = 0x2BDF74u;
label_2bdf74:
    // 0x2bdf74: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF74u;
        // 0x2bdf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF7Cu;
    // 0x2bdf7c: 0x0  nop
    ctx->pc = 0x2bdf7cu;
    // NOP
    ctx->pc = 0x2bdf80u;
}
