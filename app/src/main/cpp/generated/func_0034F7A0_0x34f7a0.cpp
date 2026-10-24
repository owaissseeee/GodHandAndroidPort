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

// Function: func_0034F7A0
// Address: 0x34f7a0 - 0x34f830
void func_0034F7A0_0x34f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F7A0_0x34f7a0");
#endif

    switch (ctx->pc) {
        case 0x34f7dcu: goto label_34f7dc;
        case 0x34f7f4u: goto label_34f7f4;
        case 0x34f80cu: goto label_34f80c;
        default: break;
    }

    ctx->pc = 0x34f7a0u;

    // 0x34f7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34f7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f7b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34f7b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34f7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f7b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34f7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34f7bc: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x34f7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f7c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34f7c4: 0x26301f74  addiu       $s0, $s1, 0x1F74
    ctx->pc = 0x34f7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
    // 0x34f7c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x34f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34f7cc: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F7CCu;
    {
        const bool branch_taken_0x34f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7CCu;
        // 0x34f7d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7cc) {
            ctx->pc = 0x34F7E0u;
            goto label_34f7e0;
        }
    }
    ctx->pc = 0x34F7D4u;
    // 0x34f7d4: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34F7D4u;
    SET_GPR_U32(ctx, 31, 0x34F7DCu);
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34F7D4u, 0x34F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7DCu;
label_34f7dc:
    // 0x34f7dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34f7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f7e0:
    // 0x34f7e0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x34f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x34f7e4: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F7E4u;
    {
        const bool branch_taken_0x34f7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x34f7e4) {
            ctx->pc = 0x34F7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F7E4u;
            // 0x34f7e8: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F7FCu;
            goto label_34f7fc;
        }
    }
    ctx->pc = 0x34F7ECu;
    // 0x34f7ec: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34F7ECu;
    SET_GPR_U32(ctx, 31, 0x34F7F4u);
    ctx->pc = 0x34F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F7ECu;
    // 0x34f7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34F7ECu, 0x34F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7F4u;
label_34f7f4:
    // 0x34f7f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x34f7f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x34f7f8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x34f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_34f7fc:
    // 0x34f7fc: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F7FCu;
    {
        const bool branch_taken_0x34f7fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7FCu;
        // 0x34f800: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7fc) {
            ctx->pc = 0x34F814u;
            goto label_34f814;
        }
    }
    ctx->pc = 0x34F804u;
    // 0x34f804: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x34F804u;
    SET_GPR_U32(ctx, 31, 0x34F80Cu);
    ctx->pc = 0x34F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F804u;
    // 0x34f808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x34F804u, 0x34F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F80Cu;
label_34f80c:
    // 0x34f80c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x34f80cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x34f810: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x34f810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34f814:
    // 0x34f814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f81c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f81cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f820: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34f820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f828: 0x3e00008  jr          $ra
    ctx->pc = 0x34F828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F828u;
        // 0x34f82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F830u;
}
