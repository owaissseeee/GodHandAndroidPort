#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CBAA0
// Address: 0x7cbaa0 - 0x7cbb20
void func_007CBAA0_0x7cbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CBAA0_0x7cbaa0");
#endif

    switch (ctx->pc) {
        case 0x7cbac4u: goto label_7cbac4;
        case 0x7cbad8u: goto label_7cbad8;
        case 0x7cbb04u: goto label_7cbb04;
        default: break;
    }

    ctx->pc = 0x7cbaa0u;

    // 0x7cbaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cbaa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cbaa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cbaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cbaac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7cbaacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbab0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x7cbab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbab4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cbab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7cbab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7cbabc: 0xc1f2e86  jal         func_7CBA18
    ctx->pc = 0x7CBABCu;
    SET_GPR_U32(ctx, 31, 0x7CBAC4u);
    ctx->pc = 0x7CBAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBABCu;
    // 0x7cbac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBA18u, 0x7CBABCu, 0x7CBAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBAC4u;
label_7cbac4:
    // 0x7cbac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7cbac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7cbac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cbaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbad0: 0xc1f2e86  jal         func_7CBA18
    ctx->pc = 0x7CBAD0u;
    SET_GPR_U32(ctx, 31, 0x7CBAD8u);
    ctx->pc = 0x7CBAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBAD0u;
    // 0x7cbad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBA18u, 0x7CBAD0u, 0x7CBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBAD8u;
label_7cbad8:
    // 0x7cbad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7cbad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbadc: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x7cbadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x7cbae0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CBAE0u;
    {
        const bool branch_taken_0x7cbae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cbae0) {
            ctx->pc = 0x7CBAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBAE0u;
            // 0x7cbae4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBAFCu;
            goto label_7cbafc;
        }
    }
    ctx->pc = 0x7CBAE8u;
    // 0x7cbae8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x7cbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x7cbaec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7cbaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7cbaf0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x7cbaf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x7cbaf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7cbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7cbaf8: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x7cbaf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_7cbafc:
    // 0x7cbafc: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CBAFCu;
    SET_GPR_U32(ctx, 31, 0x7CBB04u);
    ctx->pc = 0x7CBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBAFCu;
    // 0x7cbb00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CBAFCu, 0x7CBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBB04u;
label_7cbb04:
    // 0x7cbb04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7cbb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cbb08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cbb08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cbb0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cbb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cbb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cbb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cbb14: 0x3e00008  jr          $ra
    ctx->pc = 0x7CBB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBB14u;
        // 0x7cbb18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CBB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CBB1Cu;
    // 0x7cbb1c: 0x0  nop
    ctx->pc = 0x7cbb1cu;
    // NOP
    ctx->pc = 0x7cbb20u;
}
} // namespace gh_mcport
