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

// Function: __8stdiobufP7__sFILE
// Address: 0x393540 - 0x3935d0
void ps2___8stdiobufP7__sFILE_0x393540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___8stdiobufP7__sFILE_0x393540");
#endif

    switch (ctx->pc) {
        case 0x393560u: goto label_393560;
        case 0x39356cu: goto label_39356c;
        case 0x39358cu: goto label_39358c;
        case 0x393594u: goto label_393594;
        case 0x39359cu: goto label_39359c;
        case 0x3935b0u: goto label_3935b0;
        case 0x3935c0u: goto label_3935c0;
        default: break;
    }

    ctx->pc = 0x393540u;

    // 0x393540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x393540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x393544: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x393544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x393548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39354c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39354cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393550: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x393550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x393554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x393558: 0xc0e984c  jal         func_3A6130
    ctx->pc = 0x393558u;
    SET_GPR_U32(ctx, 31, 0x393560u);
    ctx->pc = 0x39355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393558u;
    // 0x39355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6130u, 0x393558u, 0x393560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393560u;
label_393560:
    // 0x393560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393564: 0xc0e3b02  jal         func_38EC08
    ctx->pc = 0x393564u;
    SET_GPR_U32(ctx, 31, 0x39356Cu);
    ctx->pc = 0x393568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393564u;
    // 0x393568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC08u, 0x393564u, 0x39356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39356Cu;
label_39356c:
    // 0x39356c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x39356cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x393570: 0x2463dae8  addiu       $v1, $v1, -0x2518
    ctx->pc = 0x393570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957800));
    // 0x393574: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x393574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x393578: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x393578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x39357c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393584: 0xc0e3bd8  jal         func_38EF60
    ctx->pc = 0x393584u;
    SET_GPR_U32(ctx, 31, 0x39358Cu);
    ctx->pc = 0x393588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393584u;
    // 0x393588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EF60u, 0x393584u, 0x39358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39358Cu;
label_39358c:
    // 0x39358c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39358Cu;
    {
        const bool branch_taken_0x39358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39358Cu;
        // 0x393590: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39358c) {
            ctx->pc = 0x39359Cu;
            goto label_39359c;
        }
    }
    ctx->pc = 0x393594u;
label_393594:
    // 0x393594: 0xc0c8386  jal         func_320E18
    ctx->pc = 0x393594u;
    SET_GPR_U32(ctx, 31, 0x39359Cu);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x393594u, 0x39359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39359Cu;
label_39359c:
    // 0x39359c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39359Cu;
    {
        const bool branch_taken_0x39359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3935A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39359Cu;
        // 0x3935a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39359c) {
            ctx->pc = 0x3935C0u;
            goto label_3935c0;
        }
    }
    ctx->pc = 0x3935A4u;
    // 0x3935a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3935a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3935a8: 0xc0e3b50  jal         func_38ED40
    ctx->pc = 0x3935A8u;
    SET_GPR_U32(ctx, 31, 0x3935B0u);
    ctx->pc = 0x3935ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935A8u;
    // 0x3935ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED40u, 0x3935A8u, 0x3935B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935B0u;
label_3935b0:
    // 0x3935b0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x3935B0u;
    {
        const bool branch_taken_0x3935b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3935b0) {
            ctx->pc = 0x393594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393594;
        }
    }
    ctx->pc = 0x3935B8u;
    // 0x3935b8: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x3935B8u;
    SET_GPR_U32(ctx, 31, 0x3935C0u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x3935B8u, 0x3935C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3935C0u;
label_3935c0:
    // 0x3935c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3935c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3935c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3935c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3935c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3935C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3935CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3935C8u;
        // 0x3935cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3935C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3935D0u;
}
