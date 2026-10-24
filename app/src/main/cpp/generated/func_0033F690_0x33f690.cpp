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

// Function: func_0033F690
// Address: 0x33f690 - 0x33f720
void func_0033F690_0x33f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F690_0x33f690");
#endif

    switch (ctx->pc) {
        case 0x33f6a8u: goto label_33f6a8;
        case 0x33f6e8u: goto label_33f6e8;
        case 0x33f6f8u: goto label_33f6f8;
        case 0x33f708u: goto label_33f708;
        case 0x33f710u: goto label_33f710;
        default: break;
    }

    ctx->pc = 0x33f690u;

    // 0x33f690: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33f694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f698: 0x8c44b848  lw          $a0, -0x47B8($v0)
    ctx->pc = 0x33f698u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB848u));
    // 0x33f69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f6a0: 0xc0cfe14  jal         func_33F850
    ctx->pc = 0x33F6A0u;
    SET_GPR_U32(ctx, 31, 0x33F6A8u);
    ctx->pc = 0x33F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F850u, 0x33F6A0u, 0x33F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6A8u;
label_33f6a8:
    // 0x33f6a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33f6a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f6b0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33F6B0u;
    {
        const bool branch_taken_0x33f6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6B0u;
        // 0x33f6b4: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6b0) {
            ctx->pc = 0x33F6E0u;
            goto label_33f6e0;
        }
    }
    ctx->pc = 0x33F6B8u;
    // 0x33f6b8: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33F6B8u;
    {
        const bool branch_taken_0x33f6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6B8u;
        // 0x33f6bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6b8) {
            ctx->pc = 0x33F714u;
            goto label_33f714;
        }
    }
    ctx->pc = 0x33F6C0u;
    // 0x33f6c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f6c4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33F6C4u;
    {
        const bool branch_taken_0x33f6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6C4u;
        // 0x33f6c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6c4) {
            ctx->pc = 0x33F6F0u;
            goto label_33f6f0;
        }
    }
    ctx->pc = 0x33F6CCu;
    // 0x33f6cc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F6CCu;
    {
        const bool branch_taken_0x33f6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6CCu;
        // 0x33f6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6cc) {
            ctx->pc = 0x33F700u;
            goto label_33f700;
        }
    }
    ctx->pc = 0x33F6D4u;
    // 0x33f6d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33F6D4u;
    {
        const bool branch_taken_0x33f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6d4) {
            ctx->pc = 0x33F718u;
            goto label_33f718;
        }
    }
    ctx->pc = 0x33F6DCu;
    // 0x33f6dc: 0x0  nop
    ctx->pc = 0x33f6dcu;
    // NOP
label_33f6e0:
    // 0x33f6e0: 0xc0cfdee  jal         func_33F7B8
    ctx->pc = 0x33F6E0u;
    SET_GPR_U32(ctx, 31, 0x33F6E8u);
    ctx->pc = 0x33F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F7B8u, 0x33F6E0u, 0x33F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6E8u;
label_33f6e8:
    // 0x33f6e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33F6E8u;
    {
        const bool branch_taken_0x33f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6E8u;
        // 0x33f6ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6e8) {
            ctx->pc = 0x33F714u;
            goto label_33f714;
        }
    }
    ctx->pc = 0x33F6F0u;
label_33f6f0:
    // 0x33f6f0: 0xc0cef64  jal         func_33BD90
    ctx->pc = 0x33F6F0u;
    SET_GPR_U32(ctx, 31, 0x33F6F8u);
    ctx->pc = 0x33BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD90u, 0x33F6F0u, 0x33F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6F8u;
label_33f6f8:
    // 0x33f6f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33F6F8u;
    {
        const bool branch_taken_0x33f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6F8u;
        // 0x33f6fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6f8) {
            ctx->pc = 0x33F714u;
            goto label_33f714;
        }
    }
    ctx->pc = 0x33F700u;
label_33f700:
    // 0x33f700: 0xc0cef6a  jal         func_33BDA8
    ctx->pc = 0x33F700u;
    SET_GPR_U32(ctx, 31, 0x33F708u);
    ctx->pc = 0x33BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDA8u, 0x33F700u, 0x33F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F708u;
label_33f708:
    // 0x33f708: 0xc0cef70  jal         func_33BDC0
    ctx->pc = 0x33F708u;
    SET_GPR_U32(ctx, 31, 0x33F710u);
    ctx->pc = 0x33BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDC0u, 0x33F708u, 0x33F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F710u;
label_33f710:
    // 0x33f710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f714:
    // 0x33f714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33f714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f718:
    // 0x33f718: 0x3e00008  jr          $ra
    ctx->pc = 0x33F718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F718u;
        // 0x33f71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F720u;
}
