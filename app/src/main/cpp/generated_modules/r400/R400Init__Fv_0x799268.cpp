#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: R400Init__Fv
// Address: 0x799268 - 0x7992c0
void R400Init__Fv_0x799268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R400Init__Fv_0x799268");
#endif

    switch (ctx->pc) {
        case 0x799280u: goto label_799280;
        case 0x7992acu: goto label_7992ac;
        default: break;
    }

    ctx->pc = 0x799268u;

    // 0x799268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79926c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799278: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799278u;
    SET_GPR_U32(ctx, 31, 0x799280u);
    ctx->pc = 0x79927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799278u;
    // 0x79927c: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799278u, 0x799280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799280u;
label_799280:
    // 0x799280: 0xae029800  sw          $v0, -0x6800($s0)
    ctx->pc = 0x799280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940672), GPR_U32(ctx, 2));
    // 0x799284: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799288: 0x8c828658  lw          $v0, -0x79A8($a0)
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79928c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799290: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799290u;
        // 0x799294: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799290) {
            ctx->pc = 0x7992ACu;
            goto label_7992ac;
        }
    }
    ctx->pc = 0x799298u;
    // 0x799298: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79929c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7992a0: 0x24a592c8  addiu       $a1, $a1, -0x6D38
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939336));
    // 0x7992a4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992A4u;
    SET_GPR_U32(ctx, 31, 0x7992ACu);
    ctx->pc = 0x7992A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A4u;
    // 0x7992a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992A4u, 0x7992ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ACu;
label_7992ac:
    // 0x7992ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992BCu;
    // 0x7992bc: 0x0  nop
    ctx->pc = 0x7992bcu;
    // NOP
    ctx->pc = 0x7992c0u;
}
} // namespace gh_r400
