#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r202_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r202
{
// Function: R202Init__Fv
// Address: 0x799268 - 0x7992d0
void R202Init__Fv_0x799268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R202Init__Fv_0x799268");
#endif

    switch (ctx->pc) {
        case 0x799280u: goto label_799280;
        case 0x799294u: goto label_799294;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992bcu: goto label_7992bc;
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
    // 0x799280: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799284: 0xae029800  sw          $v0, -0x6800($s0)
    ctx->pc = 0x799284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940672), GPR_U32(ctx, 2));
    // 0x799288: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79928c: 0xc04f206  jal         func_13C818
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79929c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992a8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992ac: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992b0: 0x24a592d8  addiu       $a1, $a1, -0x6D28
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939352));
    // 0x7992b4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992B4u;
    SET_GPR_U32(ctx, 31, 0x7992BCu);
    ctx->pc = 0x7992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B4u;
    // 0x7992b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992B4u, 0x7992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7992C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992CCu;
    // 0x7992cc: 0x0  nop
    ctx->pc = 0x7992ccu;
    // NOP
    ctx->pc = 0x7992d0u;
}
} // namespace gh_r202
