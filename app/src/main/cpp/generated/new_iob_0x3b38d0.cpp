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

// Function: new_iob
// Address: 0x3b38d0 - 0x3b3958
void new_iob_0x3b38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_iob_0x3b38d0");
#endif

    switch (ctx->pc) {
        case 0x3b38e8u: goto label_3b38e8;
        case 0x3b38f0u: goto label_3b38f0;
        case 0x3b3910u: goto label_3b3910;
        case 0x3b3924u: goto label_3b3924;
        case 0x3b3940u: goto label_3b3940;
        default: break;
    }

    ctx->pc = 0x3b38d0u;

    // 0x3b38d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b38d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b38d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b38d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b38d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b38dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b38dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b38e0: 0xc0ece16  jal         func_3B3858
    ctx->pc = 0x3B38E0u;
    SET_GPR_U32(ctx, 31, 0x3B38E8u);
    ctx->pc = 0x3B38E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38E0u;
    // 0x3b38e4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3858u, 0x3B38E0u, 0x3B38E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38E8u;
label_3b38e8:
    // 0x3b38e8: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B38E8u;
    SET_GPR_U32(ctx, 31, 0x3B38F0u);
    ctx->pc = 0x3B38ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38E8u;
    // 0x3b38ec: 0x8e24aee8  lw          $a0, -0x5118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B38E8u, 0x3B38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38F0u;
label_3b38f0:
    // 0x3b38f0: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b38f4: 0x247014c0  addiu       $s0, $v1, 0x14C0
    ctx->pc = 0x3b38f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x3b38f8: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x3b38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3b38fc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3b38fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b3900: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B3900u;
    {
        const bool branch_taken_0x3b3900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3900u;
        // 0x3b3904: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3900) {
            ctx->pc = 0x3B3938u;
            goto label_3b3938;
        }
    }
    ctx->pc = 0x3B3908u;
    // 0x3b3908: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b3908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b390c: 0x0  nop
    ctx->pc = 0x3b390cu;
    // NOP
label_3b3910:
    // 0x3b3910: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3910u;
    {
        const bool branch_taken_0x3b3910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3910) {
            ctx->pc = 0x3B3914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3910u;
            // 0x3b3914: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B392Cu;
            goto label_3b392c;
        }
    }
    ctx->pc = 0x3B3918u;
    // 0x3b3918: 0x8e24aee8  lw          $a0, -0x5118($s1)
    ctx->pc = 0x3b3918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946536)));
    // 0x3b391c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B391Cu;
    SET_GPR_U32(ctx, 31, 0x3B3924u);
    ctx->pc = 0x3B3920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B391Cu;
    // 0x3b3920: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B391Cu, 0x3B3924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3924u;
label_3b3924:
    // 0x3b3924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3924u;
    {
        const bool branch_taken_0x3b3924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3924u;
        // 0x3b3928: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3924) {
            ctx->pc = 0x3B3944u;
            goto label_3b3944;
        }
    }
    ctx->pc = 0x3B392Cu;
label_3b392c:
    // 0x3b392c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3b392cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b3930: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B3930u;
    {
        const bool branch_taken_0x3b3930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3930) {
            ctx->pc = 0x3B3934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3930u;
            // 0x3b3934: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3910;
        }
    }
    ctx->pc = 0x3B3938u;
label_3b3938:
    // 0x3b3938: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B3938u;
    SET_GPR_U32(ctx, 31, 0x3B3940u);
    ctx->pc = 0x3B393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3938u;
    // 0x3b393c: 0x8e24aee8  lw          $a0, -0x5118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B3938u, 0x3B3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3940u;
label_3b3940:
    // 0x3b3940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b3940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3944:
    // 0x3b3944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b3944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3948: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b3948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b394c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b394cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3950: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3950u;
        // 0x3b3954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3958u;
}
