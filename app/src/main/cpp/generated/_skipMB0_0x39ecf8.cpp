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

// Function: _skipMB0
// Address: 0x39ecf8 - 0x39edb8
void _skipMB0_0x39ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_skipMB0_0x39ecf8");
#endif

    switch (ctx->pc) {
        case 0x39ed8cu: goto label_39ed8c;
        default: break;
    }

    ctx->pc = 0x39ecf8u;

    // 0x39ecf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ecfc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x39ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39ed00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ed04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39ed04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ed08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39ed0c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x39ed0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed10: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x39ed10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39ed14: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x39ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x39ed18: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x39ed18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x39ed1c: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x39ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x39ed20: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x39ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x39ed24: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x39ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x39ed28: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x39ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x39ed2c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39ED2Cu;
    {
        const bool branch_taken_0x39ed2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x39ed2c) {
            ctx->pc = 0x39ED30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ED2Cu;
            // 0x39ed30: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ED48u;
            goto label_39ed48;
        }
    }
    ctx->pc = 0x39ED34u;
    // 0x39ed34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x39ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x39ed38: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x39ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x39ed3c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x39ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x39ed40: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x39ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x39ed44: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x39ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_39ed48:
    // 0x39ed48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ed4c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39ED4Cu;
    {
        const bool branch_taken_0x39ed4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ed4c) {
            ctx->pc = 0x39ED50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ED4Cu;
            // 0x39ed50: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ED5Cu;
            goto label_39ed5c;
        }
    }
    ctx->pc = 0x39ED54u;
    // 0x39ed54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39ED54u;
    {
        const bool branch_taken_0x39ed54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED54u;
        // 0x39ed58: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed54) {
            ctx->pc = 0x39ED70u;
            goto label_39ed70;
        }
    }
    ctx->pc = 0x39ED5Cu;
label_39ed5c:
    // 0x39ed5c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x39ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x39ed60: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x39ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x39ed64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39ed64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39ed68: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x39ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x39ed6c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x39ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_39ed70:
    // 0x39ed70: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x39ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x39ed74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ed78: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39ED78u;
    {
        const bool branch_taken_0x39ed78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ed78) {
            ctx->pc = 0x39ED7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ED78u;
            // 0x39ed7c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ED94u;
            goto label_39ed94;
        }
    }
    ctx->pc = 0x39ED80u;
    // 0x39ed80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39ed84: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39ED84u;
    SET_GPR_U32(ctx, 31, 0x39ED8Cu);
    ctx->pc = 0x39ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED84u;
    // 0x39ed88: 0x24a5e720  addiu       $a1, $a1, -0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39ED84u, 0x39ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED8Cu;
label_39ed8c:
    // 0x39ed8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39ed8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39ed94:
    // 0x39ed94: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x39ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x39ed98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ed9c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x39ed9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eda0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39eda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39eda4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x39eda8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39eda8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39edac: 0x3e00008  jr          $ra
    ctx->pc = 0x39EDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDACu;
        // 0x39edb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EDB4u;
    // 0x39edb4: 0x0  nop
    ctx->pc = 0x39edb4u;
    // NOP
    ctx->pc = 0x39edb8u;
}
