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

// Function: __mcmp
// Address: 0x3af118 - 0x3af180
void ps2___mcmp_0x3af118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mcmp_0x3af118");
#endif

    switch (ctx->pc) {
        case 0x3af134u: goto label_3af134;
        case 0x3af158u: goto label_3af158;
        default: break;
    }

    ctx->pc = 0x3af118u;

    // 0x3af118: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x3af118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3af11c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3af11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3af120: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3af120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3af124: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AF124u;
    {
        const bool branch_taken_0x3af124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF124u;
        // 0x3af128: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af124) {
            ctx->pc = 0x3AF144u;
            goto label_3af144;
        }
    }
    ctx->pc = 0x3AF12Cu;
    // 0x3af12c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF134u;
label_3af134:
    // 0x3af134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af138: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3af138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af13c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF13Cu;
        // 0x3af140: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF144u;
label_3af144:
    // 0x3af144: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x3af144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3af148: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x3af148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x3af14c: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x3af14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3af150: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3af150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3af154: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3af154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_3af158:
    // 0x3af158: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3af158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3af15c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3af15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3af160: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3af160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3af164: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3AF164u;
    {
        const bool branch_taken_0x3af164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3af164) {
            ctx->pc = 0x3AF168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF164u;
            // 0x3af168: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af134;
        }
    }
    ctx->pc = 0x3AF16Cu;
    // 0x3af16c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3af16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3af170: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AF170u;
    {
        const bool branch_taken_0x3af170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF170u;
        // 0x3af174: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af170) {
            ctx->pc = 0x3AF158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af158;
        }
    }
    ctx->pc = 0x3AF178u;
    // 0x3af178: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF178u;
        // 0x3af17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF180u;
}
