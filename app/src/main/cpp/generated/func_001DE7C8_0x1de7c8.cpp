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

// Function: func_001DE7C8
// Address: 0x1de7c8 - 0x1de858
void func_001DE7C8_0x1de7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DE7C8_0x1de7c8");
#endif

    switch (ctx->pc) {
        case 0x1de804u: goto label_1de804;
        case 0x1de818u: goto label_1de818;
        case 0x1de834u: goto label_1de834;
        case 0x1de84cu: goto label_1de84c;
        default: break;
    }

    ctx->pc = 0x1de7c8u;

    // 0x1de7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de7cc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de7d4: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DE7D4u;
    {
        const bool branch_taken_0x1de7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D4u;
        // 0x1de7d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7d4) {
            ctx->pc = 0x1DE80Cu;
            goto label_1de80c;
        }
    }
    ctx->pc = 0x1DE7DCu;
    // 0x1de7dc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1de7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de7e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE7E0u;
    {
        const bool branch_taken_0x1de7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de7e0) {
            ctx->pc = 0x1DE7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7E0u;
            // 0x1de7e4: 0x24840994  addiu       $a0, $a0, 0x994 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2452));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7FCu;
            goto label_1de7fc;
        }
    }
    ctx->pc = 0x1DE7E8u;
    // 0x1de7e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de7ec: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE7ECu;
    {
        const bool branch_taken_0x1de7ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7ECu;
        // 0x1de7f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7ec) {
            ctx->pc = 0x1DE820u;
            goto label_1de820;
        }
    }
    ctx->pc = 0x1DE7F4u;
    // 0x1de7f4: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE7F4u;
    {
        const bool branch_taken_0x1de7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7F4u;
        // 0x1de7f8: 0x24840994  addiu       $a0, $a0, 0x994 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7f4) {
            ctx->pc = 0x1DE83Cu;
            goto label_1de83c;
        }
    }
    ctx->pc = 0x1DE7FCu;
label_1de7fc:
    // 0x1de7fc: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE7FCu;
    SET_GPR_U32(ctx, 31, 0x1DE804u);
    ctx->pc = 0x1DE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7FCu;
    // 0x1de800: 0x2405ff24  addiu       $a1, $zero, -0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE7FCu, 0x1DE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE804u;
label_1de804:
    // 0x1de804: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DE804u;
    {
        const bool branch_taken_0x1de804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE804u;
        // 0x1de808: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de804) {
            ctx->pc = 0x1DE850u;
            goto label_1de850;
        }
    }
    ctx->pc = 0x1DE80Cu;
label_1de80c:
    // 0x1de80c: 0x24840994  addiu       $a0, $a0, 0x994
    ctx->pc = 0x1de80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2452));
    // 0x1de810: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DE810u;
    SET_GPR_U32(ctx, 31, 0x1DE818u);
    ctx->pc = 0x1DE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE810u;
    // 0x1de814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DE810u, 0x1DE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE818u;
label_1de818:
    // 0x1de818: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DE818u;
    {
        const bool branch_taken_0x1de818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE818u;
        // 0x1de81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de818) {
            ctx->pc = 0x1DE850u;
            goto label_1de850;
        }
    }
    ctx->pc = 0x1DE820u;
label_1de820:
    // 0x1de820: 0x24840994  addiu       $a0, $a0, 0x994
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2452));
    // 0x1de824: 0x2405ff24  addiu       $a1, $zero, -0xDC
    ctx->pc = 0x1de824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
    // 0x1de828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de82c: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE82Cu;
    SET_GPR_U32(ctx, 31, 0x1DE834u);
    ctx->pc = 0x1DE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE82Cu;
    // 0x1de830: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE82Cu, 0x1DE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE834u;
label_1de834:
    // 0x1de834: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE834u;
    {
        const bool branch_taken_0x1de834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE834u;
        // 0x1de838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de834) {
            ctx->pc = 0x1DE850u;
            goto label_1de850;
        }
    }
    ctx->pc = 0x1DE83Cu;
label_1de83c:
    // 0x1de83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de840: 0x2406ff24  addiu       $a2, $zero, -0xDC
    ctx->pc = 0x1de840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967076));
    // 0x1de844: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DE844u;
    SET_GPR_U32(ctx, 31, 0x1DE84Cu);
    ctx->pc = 0x1DE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE844u;
    // 0x1de848: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DE844u, 0x1DE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE84Cu;
label_1de84c:
    // 0x1de84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de850:
    // 0x1de850: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE850u;
        // 0x1de854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE858u;
}
