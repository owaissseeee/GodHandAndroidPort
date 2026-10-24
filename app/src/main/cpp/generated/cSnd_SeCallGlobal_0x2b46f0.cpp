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

// Function: cSnd_SeCallGlobal
// Address: 0x2b46f0 - 0x2b4768
void cSnd_SeCallGlobal_0x2b46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeCallGlobal_0x2b46f0");
#endif

    switch (ctx->pc) {
        case 0x2b4734u: goto label_2b4734;
        case 0x2b4754u: goto label_2b4754;
        default: break;
    }

    ctx->pc = 0x2b46f0u;

    // 0x2b46f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b46f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b46f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b46f8: 0x8c437a30  lw          $v1, 0x7A30($v0)
    ctx->pc = 0x2b46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A30u));
    // 0x2b46fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2b46fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2b4700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4704: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x2b4704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x2b4708: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b4708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b470c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B470Cu;
    {
        const bool branch_taken_0x2b470c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B470Cu;
        // 0x2b4710: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b470c) {
            ctx->pc = 0x2B4754u;
            goto label_2b4754;
        }
    }
    ctx->pc = 0x2B4714u;
    // 0x2b4714: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4714u;
    {
        const bool branch_taken_0x2b4714 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4714u;
        // 0x2b4718: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4714) {
            ctx->pc = 0x2B473Cu;
            goto label_2b473c;
        }
    }
    ctx->pc = 0x2B471Cu;
    // 0x2b471c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b471cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4720: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2b4720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2b4724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b4724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4728: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b4728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b472c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2B472Cu;
    SET_GPR_U32(ctx, 31, 0x2B4734u);
    ctx->pc = 0x2B4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B472Cu;
    // 0x2b4730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2B472Cu, 0x2B4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4734u;
label_2b4734:
    // 0x2b4734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4734u;
    {
        const bool branch_taken_0x2b4734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4734u;
        // 0x2b4738: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4734) {
            ctx->pc = 0x2B4758u;
            goto label_2b4758;
        }
    }
    ctx->pc = 0x2B473Cu;
label_2b473c:
    // 0x2b473c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b473cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4740: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2b4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2b4744: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2b4744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4748: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b4748u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b474c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x2B474Cu;
    SET_GPR_U32(ctx, 31, 0x2B4754u);
    ctx->pc = 0x2B4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B474Cu;
    // 0x2b4750: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x2B474Cu, 0x2B4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4754u;
label_2b4754:
    // 0x2b4754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4758:
    // 0x2b4758: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4758u;
        // 0x2b475c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4760u;
    // 0x2b4760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4764: 0x0  nop
    ctx->pc = 0x2b4764u;
    // NOP
    ctx->pc = 0x2b4768u;
}
