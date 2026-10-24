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

// Function: func_0034F830
// Address: 0x34f830 - 0x34f8d0
void func_0034F830_0x34f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F830_0x34f830");
#endif

    switch (ctx->pc) {
        case 0x34f870u: goto label_34f870;
        case 0x34f884u: goto label_34f884;
        default: break;
    }

    ctx->pc = 0x34f830u;

    // 0x34f830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f83c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34f83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f840: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34f844: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34f844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34f84c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x34f84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f850: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34f854: 0x26501f74  addiu       $s0, $s2, 0x1F74
    ctx->pc = 0x34f854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8052));
    // 0x34f858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34f858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f85c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x34f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34f860: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F860u;
    {
        const bool branch_taken_0x34f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F860u;
        // 0x34f864: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f860) {
            ctx->pc = 0x34F870u;
            goto label_34f870;
        }
    }
    ctx->pc = 0x34F868u;
    // 0x34f868: 0xc0d3280  jal         func_34CA00
    ctx->pc = 0x34F868u;
    SET_GPR_U32(ctx, 31, 0x34F870u);
    ctx->pc = 0x34CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA00u, 0x34F868u, 0x34F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F870u;
label_34f870:
    // 0x34f870: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x34f870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x34f874: 0x10b30003  beq         $a1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F874u;
    {
        const bool branch_taken_0x34f874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F874u;
        // 0x34f878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f874) {
            ctx->pc = 0x34F884u;
            goto label_34f884;
        }
    }
    ctx->pc = 0x34F87Cu;
    // 0x34f87c: 0xc0d3280  jal         func_34CA00
    ctx->pc = 0x34F87Cu;
    SET_GPR_U32(ctx, 31, 0x34F884u);
    ctx->pc = 0x34F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F87Cu;
    // 0x34f880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA00u, 0x34F87Cu, 0x34F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F884u;
label_34f884:
    // 0x34f884: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x34f884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x34f888: 0x10b30009  beq         $a1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x34F888u;
    {
        const bool branch_taken_0x34f888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x34F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F888u;
        // 0x34f88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f888) {
            ctx->pc = 0x34F8B0u;
            goto label_34f8b0;
        }
    }
    ctx->pc = 0x34F890u;
    // 0x34f890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f894: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34f894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f8a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34f8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f8a8: 0x80d3280  j           func_34CA00
    ctx->pc = 0x34F8A8u;
    ctx->pc = 0x34F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8A8u;
    // 0x34f8ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA00u, 0x34F8A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34F8B0u;
label_34f8b0:
    // 0x34f8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f8b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f8b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f8b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f8b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f8bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34f8bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f8c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8C4u;
        // 0x34f8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F8CCu;
    // 0x34f8cc: 0x0  nop
    ctx->pc = 0x34f8ccu;
    // NOP
    ctx->pc = 0x34f8d0u;
}
