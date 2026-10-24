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

// Function: func_003466F8
// Address: 0x3466f8 - 0x346798
void func_003466F8_0x3466f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003466F8_0x3466f8");
#endif

    switch (ctx->pc) {
        case 0x34670cu: goto label_34670c;
        case 0x346724u: goto label_346724;
        default: break;
    }

    ctx->pc = 0x3466f8u;

    // 0x3466f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3466f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3466fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3466fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x346704: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x346704u;
    SET_GPR_U32(ctx, 31, 0x34670Cu);
    ctx->pc = 0x346708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346704u;
    // 0x346708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x346704u, 0x34670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34670Cu;
label_34670c:
    // 0x34670c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x34670cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x346710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346714: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x346714u;
    {
        const bool branch_taken_0x346714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346714u;
        // 0x346718: 0x24848238  addiu       $a0, $a0, -0x7DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346714) {
            ctx->pc = 0x346730u;
            goto label_346730;
        }
    }
    ctx->pc = 0x34671Cu;
    // 0x34671c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x34671Cu;
    SET_GPR_U32(ctx, 31, 0x346724u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34671Cu, 0x346724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346724u;
label_346724:
    // 0x346724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346724u;
    {
        const bool branch_taken_0x346724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346724u;
        // 0x346728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346724) {
            ctx->pc = 0x346734u;
            goto label_346734;
        }
    }
    ctx->pc = 0x34672Cu;
    // 0x34672c: 0x0  nop
    ctx->pc = 0x34672cu;
    // NOP
label_346730:
    // 0x346730: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x346730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_346734:
    // 0x346734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34673c: 0x3e00008  jr          $ra
    ctx->pc = 0x34673Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34673Cu;
        // 0x346740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34673Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346744u;
    // 0x346744: 0x0  nop
    ctx->pc = 0x346744u;
    // NOP
    // 0x346748: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34674c: 0x0  nop
    ctx->pc = 0x34674cu;
    // NOP
    // 0x346750: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x346750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x346754: 0x0  nop
    ctx->pc = 0x346754u;
    // NOP
    // 0x346758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34675c: 0x0  nop
    ctx->pc = 0x34675cu;
    // NOP
    // 0x346760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346764: 0x0  nop
    ctx->pc = 0x346764u;
    // NOP
    // 0x346768: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34676c: 0x0  nop
    ctx->pc = 0x34676cu;
    // NOP
    // 0x346770: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x346770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x346774: 0x0  nop
    ctx->pc = 0x346774u;
    // NOP
    // 0x346778: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34677c: 0x0  nop
    ctx->pc = 0x34677cu;
    // NOP
    // 0x346780: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346784: 0x0  nop
    ctx->pc = 0x346784u;
    // NOP
    // 0x346788: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x346788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34678c: 0x0  nop
    ctx->pc = 0x34678cu;
    // NOP
    // 0x346790: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346794: 0x0  nop
    ctx->pc = 0x346794u;
    // NOP
    ctx->pc = 0x346798u;
}
