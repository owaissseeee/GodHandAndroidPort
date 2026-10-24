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

// Function: delObj
// Address: 0x312778 - 0x3127b0
void delObj_0x312778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("delObj_0x312778");
#endif

    switch (ctx->pc) {
        case 0x312778u: goto label_312778;
        case 0x31277cu: goto label_31277c;
        case 0x312780u: goto label_312780;
        case 0x312784u: goto label_312784;
        case 0x312788u: goto label_312788;
        case 0x31278cu: goto label_31278c;
        case 0x312790u: goto label_312790;
        case 0x312794u: goto label_312794;
        case 0x312798u: goto label_312798;
        case 0x31279cu: goto label_31279c;
        case 0x3127a0u: goto label_3127a0;
        case 0x3127a4u: goto label_3127a4;
        case 0x3127a8u: goto label_3127a8;
        case 0x3127acu: goto label_3127ac;
        default: break;
    }

    ctx->pc = 0x312778u;

label_312778:
    // 0x312778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31277c:
    // 0x31277c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31277cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312780:
    // 0x312780: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_312784:
    if (ctx->pc == 0x312784u) {
        ctx->pc = 0x312784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312780u;
        // 0x312784: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312788u;
        goto label_312788;
    }
    ctx->pc = 0x312780u;
    {
        const bool branch_taken_0x312780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x312784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312780u;
        // 0x312784: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312780) {
            ctx->pc = 0x3127A0u;
            goto label_3127a0;
        }
    }
    ctx->pc = 0x312788u;
label_312788:
    // 0x312788: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x312788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_31278c:
    // 0x31278c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31278cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_312790:
    // 0x312790: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x312790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_312794:
    // 0x312794: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x312794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_312798:
    // 0x312798: 0x60f809  jalr        $v1
label_31279c:
    if (ctx->pc == 0x31279Cu) {
        ctx->pc = 0x31279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312798u;
        // 0x31279c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127A0u;
        goto label_3127a0;
    }
    ctx->pc = 0x312798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3127A0u);
        ctx->pc = 0x31279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312798u;
        // 0x31279c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312798u, 0x3127A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3127A0u;
label_3127a0:
    // 0x3127a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3127a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3127a4:
    // 0x3127a4: 0x3e00008  jr          $ra
label_3127a8:
    if (ctx->pc == 0x3127A8u) {
        ctx->pc = 0x3127A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127A4u;
        // 0x3127a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127ACu;
        goto label_3127ac;
    }
    ctx->pc = 0x3127A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3127A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127A4u;
        // 0x3127a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3127A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3127ACu;
label_3127ac:
    // 0x3127ac: 0x0  nop
    ctx->pc = 0x3127acu;
    // NOP
    ctx->pc = 0x3127b0u;
}
