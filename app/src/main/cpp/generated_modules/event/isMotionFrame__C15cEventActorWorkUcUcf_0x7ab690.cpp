#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isMotionFrame__C15cEventActorWorkUcUcf
// Address: 0x7ab690 - 0x7ab6d8
void isMotionFrame__C15cEventActorWorkUcUcf_0x7ab690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isMotionFrame__C15cEventActorWorkUcUcf_0x7ab690");
#endif

    ctx->pc = 0x7ab690u;

    // 0x7ab690: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x7ab690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x7ab694: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x7ab694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7ab698: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB698u;
    {
        const bool branch_taken_0x7ab698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x7AB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB698u;
        // 0x7ab69c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab698) {
            ctx->pc = 0x7AB6A8u;
            goto label_7ab6a8;
        }
    }
    ctx->pc = 0x7AB6A0u;
    // 0x7ab6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB6A0u;
        // 0x7ab6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB6A8u;
label_7ab6a8:
    // 0x7ab6a8: 0x80820009  lb          $v0, 0x9($a0)
    ctx->pc = 0x7ab6a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x7ab6ac: 0x14460008  bne         $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AB6ACu;
    {
        const bool branch_taken_0x7ab6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x7AB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB6ACu;
        // 0x7ab6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab6ac) {
            ctx->pc = 0x7AB6D0u;
            goto label_7ab6d0;
        }
    }
    ctx->pc = 0x7AB6B4u;
    // 0x7ab6b4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x7ab6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ab6b8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x7ab6b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab6bc: 0x0  nop
    ctx->pc = 0x7ab6bcu;
    // NOP
    // 0x7ab6c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB6C0u;
    {
        const bool branch_taken_0x7ab6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab6c0) {
            ctx->pc = 0x7AB6D0u;
            goto label_7ab6d0;
        }
    }
    ctx->pc = 0x7AB6C8u;
    // 0x7ab6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB6C8u;
        // 0x7ab6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB6D0u;
label_7ab6d0:
    // 0x7ab6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB6D8u;
}
} // namespace gh_event
