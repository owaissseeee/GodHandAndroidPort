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

// Function: func_0034F390
// Address: 0x34f390 - 0x34f418
void func_0034F390_0x34f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F390_0x34f390");
#endif

    switch (ctx->pc) {
        case 0x34f3ccu: goto label_34f3cc;
        case 0x34f3e0u: goto label_34f3e0;
        case 0x34f3f4u: goto label_34f3f4;
        default: break;
    }

    ctx->pc = 0x34f390u;

    // 0x34f390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34f39c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34f39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f3a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34f3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34f3a4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x34f3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f3a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34f3ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34f3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f3b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34f3b4: 0x26301f74  addiu       $s0, $s1, 0x1F74
    ctx->pc = 0x34f3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
    // 0x34f3b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x34f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34f3bc: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F3BCu;
    {
        const bool branch_taken_0x34f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x34F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F3BCu;
        // 0x34f3c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f3bc) {
            ctx->pc = 0x34F3CCu;
            goto label_34f3cc;
        }
    }
    ctx->pc = 0x34F3C4u;
    // 0x34f3c4: 0xc0d329a  jal         func_34CA68
    ctx->pc = 0x34F3C4u;
    SET_GPR_U32(ctx, 31, 0x34F3CCu);
    ctx->pc = 0x34F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F3C4u;
    // 0x34f3c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA68u, 0x34F3C4u, 0x34F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3CCu;
label_34f3cc:
    // 0x34f3cc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x34f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x34f3d0: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F3D0u;
    {
        const bool branch_taken_0x34f3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x34F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F3D0u;
        // 0x34f3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f3d0) {
            ctx->pc = 0x34F3E0u;
            goto label_34f3e0;
        }
    }
    ctx->pc = 0x34F3D8u;
    // 0x34f3d8: 0xc0d329a  jal         func_34CA68
    ctx->pc = 0x34F3D8u;
    SET_GPR_U32(ctx, 31, 0x34F3E0u);
    ctx->pc = 0x34F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F3D8u;
    // 0x34f3dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA68u, 0x34F3D8u, 0x34F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3E0u;
label_34f3e0:
    // 0x34f3e0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x34f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x34f3e4: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F3E4u;
    {
        const bool branch_taken_0x34f3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x34F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F3E4u;
        // 0x34f3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f3e4) {
            ctx->pc = 0x34F3F4u;
            goto label_34f3f4;
        }
    }
    ctx->pc = 0x34F3ECu;
    // 0x34f3ec: 0xc0d329a  jal         func_34CA68
    ctx->pc = 0x34F3ECu;
    SET_GPR_U32(ctx, 31, 0x34F3F4u);
    ctx->pc = 0x34F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F3ECu;
    // 0x34f3f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA68u, 0x34F3ECu, 0x34F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3F4u;
label_34f3f4:
    // 0x34f3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f3f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34f3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f3fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34f3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34f400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f408: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34f408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f40c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f410: 0x80d5a62  j           func_356988
    ctx->pc = 0x34F410u;
    ctx->pc = 0x34F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F410u;
    // 0x34f414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356988u, 0x34F410u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34F418u;
}
