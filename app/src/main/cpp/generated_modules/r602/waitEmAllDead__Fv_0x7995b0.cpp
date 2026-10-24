#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: waitEmAllDead__Fv
// Address: 0x7995b0 - 0x799620
void waitEmAllDead__Fv_0x7995b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmAllDead__Fv_0x7995b0");
#endif

    switch (ctx->pc) {
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995f4u: goto label_7995f4;
        case 0x799604u: goto label_799604;
        default: break;
    }

    ctx->pc = 0x7995b0u;

    // 0x7995b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7995b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7995b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7995b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7995b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7995bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995DCu;
            goto label_7995dc;
        }
    }
    ctx->pc = 0x7995C4u;
    // 0x7995c4: 0x0  nop
    ctx->pc = 0x7995c4u;
    // NOP
label_7995c8:
    // 0x7995c8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7995cc:
    // 0x7995cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995d0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x7995d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995D4u;
    SET_GPR_U32(ctx, 31, 0x7995DCu);
    ctx->pc = 0x7995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D4u;
    // 0x7995d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995D4u, 0x7995DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0xc1e65a0  jal         func_799680
    ctx->pc = 0x7995DCu;
    SET_GPR_U32(ctx, 31, 0x7995E4u);
    ctx->pc = 0x799680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799680u, 0x7995DCu, 0x7995E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E4u;
label_7995e4:
    // 0x7995e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7995E4u;
    {
        const bool branch_taken_0x7995e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E4u;
        // 0x7995e8: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e4) {
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x7995ECu;
    // 0x7995ec: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x7995ECu;
    SET_GPR_U32(ctx, 31, 0x7995F4u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x7995ECu, 0x7995F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x7995F4u;
    {
        const bool branch_taken_0x7995f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x7995CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995cc;
        }
    }
    ctx->pc = 0x7995FCu;
    // 0x7995fc: 0xc1e65ba  jal         func_7996E8
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x7996E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996E8u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x799604u;
    {
        const bool branch_taken_0x799604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799604) {
            ctx->pc = 0x7995CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995cc;
        }
    }
    ctx->pc = 0x79960Cu;
    // 0x79960c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79960cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799614: 0x3e00008  jr          $ra
    ctx->pc = 0x799614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79961Cu;
    // 0x79961c: 0x0  nop
    ctx->pc = 0x79961cu;
    // NOP
    ctx->pc = 0x799620u;
}
} // namespace gh_r602
