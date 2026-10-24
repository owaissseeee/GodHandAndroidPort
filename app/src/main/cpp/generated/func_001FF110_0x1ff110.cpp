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

// Function: func_001FF110
// Address: 0x1ff110 - 0x1ff180
void func_001FF110_0x1ff110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF110_0x1ff110");
#endif

    switch (ctx->pc) {
        case 0x1ff14cu: goto label_1ff14c;
        case 0x1ff174u: goto label_1ff174;
        default: break;
    }

    ctx->pc = 0x1ff110u;

    // 0x1ff110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ff114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff11c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ff11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff120: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1ff120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ff124: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF124u;
    {
        const bool branch_taken_0x1ff124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF124u;
        // 0x1ff128: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff124) {
            ctx->pc = 0x1FF174u;
            goto label_1ff174;
        }
    }
    ctx->pc = 0x1FF12Cu;
    // 0x1ff12c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff130: 0x2442c670  addiu       $v0, $v0, -0x3990
    ctx->pc = 0x1ff130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952560));
    // 0x1ff134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ff134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ff138: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ff138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff13c: 0x800008  jr          $a0
    ctx->pc = 0x1FF13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF144u: goto label_1ff144;
            case 0x1FF154u: goto label_1ff154;
            case 0x1FF160u: goto label_1ff160;
            case 0x1FF16Cu: goto label_1ff16c;
            case 0x1FF174u: goto label_1ff174;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF13Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FF144u;
label_1ff144:
    // 0x1ff144: 0xc07fc8e  jal         func_1FF238
    ctx->pc = 0x1FF144u;
    SET_GPR_U32(ctx, 31, 0x1FF14Cu);
    ctx->pc = 0x1FF148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF144u;
    // 0x1ff148: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF238u, 0x1FF144u, 0x1FF14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF14Cu;
label_1ff14c:
    // 0x1ff14c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FF14Cu;
    {
        const bool branch_taken_0x1ff14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF14Cu;
        // 0x1ff150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff14c) {
            ctx->pc = 0x1FF178u;
            goto label_1ff178;
        }
    }
    ctx->pc = 0x1FF154u;
label_1ff154:
    // 0x1ff154: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ff154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ff158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF158u;
    {
        const bool branch_taken_0x1ff158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF158u;
        // 0x1ff15c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff158) {
            ctx->pc = 0x1FF174u;
            goto label_1ff174;
        }
    }
    ctx->pc = 0x1FF160u;
label_1ff160:
    // 0x1ff160: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ff160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ff164: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF164u;
    {
        const bool branch_taken_0x1ff164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF164u;
        // 0x1ff168: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff164) {
            ctx->pc = 0x1FF174u;
            goto label_1ff174;
        }
    }
    ctx->pc = 0x1FF16Cu;
label_1ff16c:
    // 0x1ff16c: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x1FF16Cu;
    SET_GPR_U32(ctx, 31, 0x1FF174u);
    ctx->pc = 0x1FF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF16Cu;
    // 0x1ff170: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF338u, 0x1FF16Cu, 0x1FF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF174u;
label_1ff174:
    // 0x1ff174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff178:
    // 0x1ff178: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF178u;
        // 0x1ff17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF180u;
}
