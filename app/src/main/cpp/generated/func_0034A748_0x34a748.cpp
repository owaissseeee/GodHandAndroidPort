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

// Function: func_0034A748
// Address: 0x34a748 - 0x34a7f0
void func_0034A748_0x34a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A748_0x34a748");
#endif

    switch (ctx->pc) {
        case 0x34a77cu: goto label_34a77c;
        case 0x34a790u: goto label_34a790;
        case 0x34a7a0u: goto label_34a7a0;
        default: break;
    }

    ctx->pc = 0x34a748u;

    // 0x34a748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34a74c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34a750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34a750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a754: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34a758: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x34a758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34a760: 0x26221ffc  addiu       $v0, $s1, 0x1FFC
    ctx->pc = 0x34a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8188));
    // 0x34a764: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34a768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34a76c: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x34a76cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x34a770: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x34a770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34a774: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34A774u;
    SET_GPR_U32(ctx, 31, 0x34A77Cu);
    ctx->pc = 0x34A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A774u;
    // 0x34a778: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34A774u, 0x34A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A77Cu;
label_34a77c:
    // 0x34a77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a780: 0x10530013  beq         $v0, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x34A780u;
    {
        const bool branch_taken_0x34a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x34A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A780u;
        // 0x34a784: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a780) {
            ctx->pc = 0x34A7D0u;
            goto label_34a7d0;
        }
    }
    ctx->pc = 0x34A788u;
    // 0x34a788: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34A788u;
    SET_GPR_U32(ctx, 31, 0x34A790u);
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34A788u, 0x34A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A790u;
label_34a790:
    // 0x34a790: 0x54530010  bnel        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x34A790u;
    {
        const bool branch_taken_0x34a790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x34a790) {
            ctx->pc = 0x34A794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A790u;
            // 0x34a794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A7D4u;
            goto label_34a7d4;
        }
    }
    ctx->pc = 0x34A798u;
    // 0x34a798: 0xc0d29fc  jal         func_34A7F0
    ctx->pc = 0x34A798u;
    SET_GPR_U32(ctx, 31, 0x34A7A0u);
    ctx->pc = 0x34A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A798u;
    // 0x34a79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A7F0u, 0x34A798u, 0x34A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A7A0u;
label_34a7a0:
    // 0x34a7a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34A7A0u;
    {
        const bool branch_taken_0x34a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7A0u;
        // 0x34a7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7a0) {
            ctx->pc = 0x34A7D0u;
            goto label_34a7d0;
        }
    }
    ctx->pc = 0x34A7A8u;
    // 0x34a7a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a7ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34a7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34a7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a7b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34a7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a7bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34a7bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a7c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a7c4: 0x80d3280  j           func_34CA00
    ctx->pc = 0x34A7C4u;
    ctx->pc = 0x34A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A7C4u;
    // 0x34a7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA00u, 0x34A7C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34A7CCu;
    // 0x34a7cc: 0x0  nop
    ctx->pc = 0x34a7ccu;
    // NOP
label_34a7d0:
    // 0x34a7d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34a7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34a7d4:
    // 0x34a7d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34a7d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a7d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34a7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a7dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34a7dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a7e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x34A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7E4u;
        // 0x34a7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A7ECu;
    // 0x34a7ec: 0x0  nop
    ctx->pc = 0x34a7ecu;
    // NOP
    ctx->pc = 0x34a7f0u;
}
