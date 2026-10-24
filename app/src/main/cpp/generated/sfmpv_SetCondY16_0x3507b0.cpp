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

// Function: sfmpv_SetCondY16
// Address: 0x3507b0 - 0x350820
void sfmpv_SetCondY16_0x3507b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_SetCondY16_0x3507b0");
#endif

    switch (ctx->pc) {
        case 0x3507c8u: goto label_3507c8;
        case 0x3507d8u: goto label_3507d8;
        default: break;
    }

    ctx->pc = 0x3507b0u;

    // 0x3507b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3507b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3507b4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3507b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3507b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3507b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3507bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3507bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3507c0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3507C0u;
    SET_GPR_U32(ctx, 31, 0x3507C8u);
    ctx->pc = 0x3507C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507C0u;
    // 0x3507c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3507C0u, 0x3507C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507C8u;
label_3507c8:
    // 0x3507c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3507C8u;
    {
        const bool branch_taken_0x3507c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507C8u;
        // 0x3507cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507c8) {
            ctx->pc = 0x350810u;
            goto label_350810;
        }
    }
    ctx->pc = 0x3507D0u;
    // 0x3507d0: 0xc0d36c8  jal         func_34DB20
    ctx->pc = 0x3507D0u;
    SET_GPR_U32(ctx, 31, 0x3507D8u);
    ctx->pc = 0x34DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DB20u, 0x3507D0u, 0x3507D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507D8u;
label_3507d8:
    // 0x3507d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3507d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3507dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3507dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3507e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3507E4u;
    {
        const bool branch_taken_0x3507e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507E4u;
        // 0x3507e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507e4) {
            ctx->pc = 0x350800u;
            goto label_350800;
        }
    }
    ctx->pc = 0x3507ECu;
    // 0x3507ec: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3507ECu;
    {
        const bool branch_taken_0x3507ec = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3507F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507ECu;
        // 0x3507f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507ec) {
            ctx->pc = 0x350800u;
            goto label_350800;
        }
    }
    ctx->pc = 0x3507F4u;
    // 0x3507f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3507f8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3507F8u;
    {
        const bool branch_taken_0x3507f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3507FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507F8u;
        // 0x3507fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507f8) {
            ctx->pc = 0x350814u;
            goto label_350814;
        }
    }
    ctx->pc = 0x350800u;
label_350800:
    // 0x350800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350804: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x350804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350808: 0x80d40b6  j           func_3502D8
    ctx->pc = 0x350808u;
    ctx->pc = 0x35080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350808u;
    // 0x35080c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x350808u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350810u;
label_350810:
    // 0x350810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350814:
    // 0x350814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x350814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350818: 0x3e00008  jr          $ra
    ctx->pc = 0x350818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350818u;
        // 0x35081c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350820u;
}
