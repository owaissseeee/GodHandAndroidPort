#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r805_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r805
{
// Function: R805Init__Fv
// Address: 0x799220 - 0x799288
void R805Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R805Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x79924cu: goto label_79924c;
        case 0x799274u: goto label_799274;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79923c: 0xae029980  sw          $v0, -0x6680($s0)
    ctx->pc = 0x79923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941056), GPR_U32(ctx, 2));
    // 0x799240: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x799244: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x799244u;
    SET_GPR_U32(ctx, 31, 0x79924Cu);
    ctx->pc = 0x799248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799244u;
    // 0x799248: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x799244u, 0x79924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79924Cu;
label_79924c:
    // 0x79924c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799250: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799254: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799258: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799258u;
    {
        const bool branch_taken_0x799258 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799258u;
        // 0x79925c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799258) {
            ctx->pc = 0x799274u;
            goto label_799274;
        }
    }
    ctx->pc = 0x799260u;
    // 0x799260: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799264: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799268: 0x24a59290  addiu       $a1, $a1, -0x6D70
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939280));
    // 0x79926c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79926Cu;
    // 0x799270: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79927c: 0x3e00008  jr          $ra
    ctx->pc = 0x79927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79927Cu;
        // 0x799280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799284u;
    // 0x799284: 0x0  nop
    ctx->pc = 0x799284u;
    // NOP
    ctx->pc = 0x799288u;
}
} // namespace gh_r805
