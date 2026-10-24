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

// Function: GetSlotInstanceB_1FE5E0
// Address: 0x1fe5e0 - 0x1fe660
void GetSlotInstanceB_1FE5E0_0x1fe5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSlotInstanceB_1FE5E0_0x1fe5e0");
#endif

    switch (ctx->pc) {
        case 0x1fe628u: goto label_1fe628;
        case 0x1fe63cu: goto label_1fe63c;
        default: break;
    }

    ctx->pc = 0x1fe5e0u;

    // 0x1fe5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe5e4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x1fe5e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe5ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe5f0: 0x245161b8  addiu       $s1, $v0, 0x61B8
    ctx->pc = 0x1fe5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25016));
    // 0x1fe5f4: 0x8c4361b8  lw          $v1, 0x61B8($v0)
    ctx->pc = 0x1fe5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7861B8u));
    // 0x1fe5f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fe5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe600: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE600u;
    {
        const bool branch_taken_0x1fe600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE600u;
        // 0x1fe604: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe600) {
            ctx->pc = 0x1FE63Cu;
            goto label_1fe63c;
        }
    }
    ctx->pc = 0x1FE608u;
    // 0x1fe608: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fe608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fe60c: 0x8c620d48  lw          $v0, 0xD48($v1)
    ctx->pc = 0x1fe60cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D48u));
    // 0x1fe610: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE610u;
    {
        const bool branch_taken_0x1fe610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE610u;
        // 0x1fe614: 0x24700d48  addiu       $s0, $v1, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe610) {
            ctx->pc = 0x1FE628u;
            goto label_1fe628;
        }
    }
    ctx->pc = 0x1FE618u;
    // 0x1fe618: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1fe618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1fe61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe620: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1FE620u;
    SET_GPR_U32(ctx, 31, 0x1FE628u);
    ctx->pc = 0x1FE624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE620u;
    // 0x1fe624: 0x24a5c4f8  addiu       $a1, $a1, -0x3B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1FE620u, 0x1FE628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE628u;
label_1fe628:
    // 0x1fe628: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1fe62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe630: 0x24a5c518  addiu       $a1, $a1, -0x3AE8
    ctx->pc = 0x1fe630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952216));
    // 0x1fe634: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1FE634u;
    SET_GPR_U32(ctx, 31, 0x1FE63Cu);
    ctx->pc = 0x1FE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE634u;
    // 0x1fe638: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1FE634u, 0x1FE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE63Cu;
label_1fe63c:
    // 0x1fe63c: 0x264261b8  addiu       $v0, $s2, 0x61B8
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25016));
    // 0x1fe640: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe644: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe648: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe650: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE650u;
        // 0x1fe654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE658u;
    // 0x1fe658: 0x0  nop
    ctx->pc = 0x1fe658u;
    // NOP
    // 0x1fe65c: 0x0  nop
    ctx->pc = 0x1fe65cu;
    // NOP
    ctx->pc = 0x1fe660u;
}
