#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r043_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r043
{
// Function: func_00799270
// Address: 0x799270 - 0x799308
void func_00799270_0x799270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799270_0x799270");
#endif

    switch (ctx->pc) {
        case 0x799290u: goto label_799290;
        case 0x799298u: goto label_799298;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992acu: goto label_7992ac;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992d4u: goto label_7992d4;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f8u: goto label_7992f8;
        default: break;
    }

    ctx->pc = 0x799270u;

    // 0x799270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79927c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799284: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799288: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799288u;
    SET_GPR_U32(ctx, 31, 0x799290u);
    ctx->pc = 0x79928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799288u;
    // 0x79928c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799288u, 0x799290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799290u;
label_799290:
    // 0x799290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799290) {
            ctx->pc = 0x7992A4u;
            goto label_7992a4;
        }
    }
    ctx->pc = 0x799298u;
label_799298:
    // 0x799298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79929c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79929Cu;
    SET_GPR_U32(ctx, 31, 0x7992A4u);
    ctx->pc = 0x7992A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79929Cu;
    // 0x7992a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79929Cu, 0x7992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A4u;
label_7992a4:
    // 0x7992a4: 0xc1e64c2  jal         func_799308
    ctx->pc = 0x7992A4u;
    SET_GPR_U32(ctx, 31, 0x7992ACu);
    ctx->pc = 0x799308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799308u, 0x7992A4u, 0x7992ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ACu;
label_7992ac:
    // 0x7992ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7992ACu;
    {
        const bool branch_taken_0x7992ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ACu;
        // 0x7992b0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ac) {
            ctx->pc = 0x799298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799298;
        }
    }
    ctx->pc = 0x7992B4u;
    // 0x7992b4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7992b8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7992B8u;
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->pc = 0x7992BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7992B8u, 0x7992C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C0u;
label_7992c0:
    // 0x7992c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992D4u;
            goto label_7992d4;
        }
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992cc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7992CCu;
    SET_GPR_U32(ctx, 31, 0x7992D4u);
    ctx->pc = 0x7992D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992CCu;
    // 0x7992d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7992CCu, 0x7992D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D4u;
label_7992d4:
    // 0x7992d4: 0xc1e64c2  jal         func_799308
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x799308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799308u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x7992C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992c8;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0xc0b121a  jal         func_2C4868
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4868u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7992f0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7992F0u;
    SET_GPR_U32(ctx, 31, 0x7992F8u);
    ctx->pc = 0x7992F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F0u;
    // 0x7992f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7992F0u, 0x7992F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799300: 0x3e00008  jr          $ra
    ctx->pc = 0x799300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799308u;
}
} // namespace gh_r043
