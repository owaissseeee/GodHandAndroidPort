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

// Function: cRoomSave_clearEmDeadFlag
// Address: 0x2bf078 - 0x2bf108
void cRoomSave_clearEmDeadFlag_0x2bf078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomSave_clearEmDeadFlag_0x2bf078");
#endif

    switch (ctx->pc) {
        case 0x2bf0a0u: goto label_2bf0a0;
        case 0x2bf0a8u: goto label_2bf0a8;
        case 0x2bf0d4u: goto label_2bf0d4;
        default: break;
    }

    ctx->pc = 0x2bf078u;

    // 0x2bf078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bf078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bf07c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bf07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bf080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bf080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bf084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bf084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bf088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bf08c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf094: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BF094u;
    {
        const bool branch_taken_0x2bf094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF094u;
        // 0x2bf098: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf094) {
            ctx->pc = 0x2BF0CCu;
            goto label_2bf0cc;
        }
    }
    ctx->pc = 0x2BF09Cu;
    // 0x2bf09c: 0x0  nop
    ctx->pc = 0x2bf09cu;
    // NOP
label_2bf0a0:
    // 0x2bf0a0: 0xc0afbc2  jal         func_2BEF08
    ctx->pc = 0x2BF0A0u;
    SET_GPR_U32(ctx, 31, 0x2BF0A8u);
    ctx->pc = 0x2BF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0A0u;
    // 0x2bf0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF08u, 0x2BF0A0u, 0x2BF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0A8u;
label_2bf0a8:
    // 0x2bf0a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf0a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF0ACu;
    {
        const bool branch_taken_0x2bf0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0ACu;
        // 0x2bf0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0ac) {
            ctx->pc = 0x2BF0CCu;
            goto label_2bf0cc;
        }
    }
    ctx->pc = 0x2BF0B4u;
    // 0x2bf0b4: 0x90620013  lbu         $v0, 0x13($v1)
    ctx->pc = 0x2bf0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x2bf0b8: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF0B8u;
    {
        const bool branch_taken_0x2bf0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0B8u;
        // 0x2bf0bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0b8) {
            ctx->pc = 0x2BF0CCu;
            goto label_2bf0cc;
        }
    }
    ctx->pc = 0x2BF0C0u;
    // 0x2bf0c0: 0xa0600014  sb          $zero, 0x14($v1)
    ctx->pc = 0x2bf0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf0c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF0C4u;
    {
        const bool branch_taken_0x2bf0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0c4) {
            ctx->pc = 0x2BF0E4u;
            goto label_2bf0e4;
        }
    }
    ctx->pc = 0x2BF0CCu;
label_2bf0cc:
    // 0x2bf0cc: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x2BF0CCu;
    SET_GPR_U32(ctx, 31, 0x2BF0D4u);
    ctx->pc = 0x2BF0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0CCu;
    // 0x2bf0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x2BF0CCu, 0x2BF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0D4u;
label_2bf0d4:
    // 0x2bf0d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2bf0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bf0d8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BF0D8u;
    {
        const bool branch_taken_0x2bf0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0d8) {
            ctx->pc = 0x2BF0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0D8u;
            // 0x2bf0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bf0a0;
        }
    }
    ctx->pc = 0x2BF0E0u;
    // 0x2bf0e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf0e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf0e4:
    // 0x2bf0e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bf0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf0e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bf0e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf0ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bf0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0F4u;
        // 0x2bf0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF0FCu;
    // 0x2bf0fc: 0x0  nop
    ctx->pc = 0x2bf0fcu;
    // NOP
    // 0x2bf100: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bf100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bf104: 0x0  nop
    ctx->pc = 0x2bf104u;
    // NOP
    ctx->pc = 0x2bf108u;
}
