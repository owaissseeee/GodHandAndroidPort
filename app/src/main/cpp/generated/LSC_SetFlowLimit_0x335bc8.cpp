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

// Function: LSC_SetFlowLimit
// Address: 0x335bc8 - 0x335c30
void LSC_SetFlowLimit_0x335bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LSC_SetFlowLimit_0x335bc8");
#endif

    ctx->pc = 0x335bc8u;

    // 0x335bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335bcc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x335bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335bd0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335BD0u;
    {
        const bool branch_taken_0x335bd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BD0u;
        // 0x335bd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bd0) {
            ctx->pc = 0x335BF0u;
            goto label_335bf0;
        }
    }
    ctx->pc = 0x335BD8u;
    // 0x335bd8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335be0: 0x24844f10  addiu       $a0, $a0, 0x4F10
    ctx->pc = 0x335be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    // 0x335be4: 0x80cd750  j           func_335D40
    ctx->pc = 0x335BE4u;
    ctx->pc = 0x335BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BE4u;
    // 0x335be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335BE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335BECu;
    // 0x335bec: 0x0  nop
    ctx->pc = 0x335becu;
    // NOP
label_335bf0:
    // 0x335bf0: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335BF0u;
    {
        const bool branch_taken_0x335bf0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x335bf0) {
            ctx->pc = 0x335BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335BF0u;
            // 0x335bf4: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335C0Cu;
            goto label_335c0c;
        }
    }
    ctx->pc = 0x335BF8u;
    // 0x335bf8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x335bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x335bfc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x335bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x335c00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335C00u;
    {
        const bool branch_taken_0x335c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C00u;
        // 0x335c04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c00) {
            ctx->pc = 0x335C20u;
            goto label_335c20;
        }
    }
    ctx->pc = 0x335C08u;
    // 0x335c08: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_335c0c:
    // 0x335c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335c10: 0x24844f40  addiu       $a0, $a0, 0x4F40
    ctx->pc = 0x335c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    // 0x335c14: 0x80cd750  j           func_335D40
    ctx->pc = 0x335C14u;
    ctx->pc = 0x335C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C14u;
    // 0x335c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335C14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335C1Cu;
    // 0x335c1c: 0x0  nop
    ctx->pc = 0x335c1cu;
    // NOP
label_335c20:
    // 0x335c20: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x335c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x335c24: 0x3e00008  jr          $ra
    ctx->pc = 0x335C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C24u;
        // 0x335c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335C2Cu;
    // 0x335c2c: 0x0  nop
    ctx->pc = 0x335c2cu;
    // NOP
    ctx->pc = 0x335c30u;
}
