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

// Function: func_0035FC88
// Address: 0x35fc88 - 0x35fd20
void func_0035FC88_0x35fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FC88_0x35fc88");
#endif

    switch (ctx->pc) {
        case 0x35fcd8u: goto label_35fcd8;
        case 0x35fcf0u: goto label_35fcf0;
        case 0x35fd04u: goto label_35fd04;
        default: break;
    }

    ctx->pc = 0x35fc88u;

    // 0x35fc88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35fc8c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x35fc8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc90: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x35fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x35fc94: 0x25110014  addiu       $s1, $t0, 0x14
    ctx->pc = 0x35fc94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x35fc98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x35fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x35fc9c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x35fc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fca0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35fca4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x35fca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fca8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x35fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x35fcac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x35fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x35fcb0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x35fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x35fcb4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x35fcb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35fcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcbc: 0x24a5a050  addiu       $a1, $a1, -0x5FB0
    ctx->pc = 0x35fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942800));
    // 0x35fcc0: 0x24c6a058  addiu       $a2, $a2, -0x5FA8
    ctx->pc = 0x35fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942808));
    // 0x35fcc4: 0x8d100024  lw          $s0, 0x24($t0)
    ctx->pc = 0x35fcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x35fcc8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x35fcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35fccc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35fcd0: 0xc0ceb7e  jal         func_33ADF8
    ctx->pc = 0x35FCD0u;
    SET_GPR_U32(ctx, 31, 0x35FCD8u);
    ctx->pc = 0x35FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCD0u;
    // 0x35fcd4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADF8u, 0x35FCD0u, 0x35FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCD8u;
label_35fcd8:
    // 0x35fcd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35fcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35fcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fce0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35FCE0u;
    {
        const bool branch_taken_0x35fce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCE0u;
        // 0x35fce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fce0) {
            ctx->pc = 0x35FCF8u;
            goto label_35fcf8;
        }
    }
    ctx->pc = 0x35FCE8u;
    // 0x35fce8: 0xc0d7ff6  jal         func_35FFD8
    ctx->pc = 0x35FCE8u;
    SET_GPR_U32(ctx, 31, 0x35FCF0u);
    ctx->pc = 0x35FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FFD8u, 0x35FCE8u, 0x35FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCF0u;
label_35fcf0:
    // 0x35fcf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35FCF0u;
    {
        const bool branch_taken_0x35fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FCF0u;
        // 0x35fcf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fcf0) {
            ctx->pc = 0x35FD08u;
            goto label_35fd08;
        }
    }
    ctx->pc = 0x35FCF8u;
label_35fcf8:
    // 0x35fcf8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x35fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fcfc: 0xc0d7ff6  jal         func_35FFD8
    ctx->pc = 0x35FCFCu;
    SET_GPR_U32(ctx, 31, 0x35FD04u);
    ctx->pc = 0x35FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCFCu;
    // 0x35fd00: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FFD8u, 0x35FCFCu, 0x35FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FD04u;
label_35fd04:
    // 0x35fd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fd08:
    // 0x35fd08: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x35fd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fd0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35fd10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35fd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fd14: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x35fd14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35fd18: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD18u;
        // 0x35fd1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FD20u;
}
