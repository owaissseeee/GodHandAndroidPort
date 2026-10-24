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

// Function: func_003BB468
// Address: 0x3bb468 - 0x3bb4f0
void func_003BB468_0x3bb468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BB468_0x3bb468");
#endif

    switch (ctx->pc) {
        case 0x3bb490u: goto label_3bb490;
        case 0x3bb4b4u: goto label_3bb4b4;
        default: break;
    }

    ctx->pc = 0x3bb468u;

    // 0x3bb468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb46c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3bb46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3bb470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bb470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bb474: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3bb474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb478: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3bb478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3bb47c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb480: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bb480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb484: 0x12320013  beq         $s1, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB484u;
    {
        const bool branch_taken_0x3bb484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3BB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB484u;
        // 0x3bb488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb484) {
            ctx->pc = 0x3BB4D4u;
            goto label_3bb4d4;
        }
    }
    ctx->pc = 0x3BB48Cu;
    // 0x3bb48c: 0x0  nop
    ctx->pc = 0x3bb48cu;
    // NOP
label_3bb490:
    // 0x3bb490: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3BB490u;
    {
        const bool branch_taken_0x3bb490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb490) {
            ctx->pc = 0x3BB494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB490u;
            // 0x3bb494: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB4CCu;
            goto label_3bb4cc;
        }
    }
    ctx->pc = 0x3BB498u;
    // 0x3bb498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3bb498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bb49c: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3bb49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3bb4a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3bb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bb4a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB4A4u;
    {
        const bool branch_taken_0x3bb4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb4a4) {
            ctx->pc = 0x3BB4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB4A4u;
            // 0x3bb4a8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB4BCu;
            goto label_3bb4bc;
        }
    }
    ctx->pc = 0x3BB4ACu;
    // 0x3bb4ac: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3BB4ACu;
    SET_GPR_U32(ctx, 31, 0x3BB4B4u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3BB4ACu, 0x3BB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB4B4u;
label_3bb4b4:
    // 0x3bb4b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB4B4u;
    {
        const bool branch_taken_0x3bb4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4B4u;
        // 0x3bb4b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4b4) {
            ctx->pc = 0x3BB4C4u;
            goto label_3bb4c4;
        }
    }
    ctx->pc = 0x3BB4BCu;
label_3bb4bc:
    // 0x3bb4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb4c0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3bb4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3bb4c4:
    // 0x3bb4c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bb4c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3bb4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3bb4cc:
    // 0x3bb4cc: 0x1632fff0  bne         $s1, $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3BB4CCu;
    {
        const bool branch_taken_0x3bb4cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x3BB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4CCu;
        // 0x3bb4d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4cc) {
            ctx->pc = 0x3BB490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb490;
        }
    }
    ctx->pc = 0x3BB4D4u;
label_3bb4d4:
    // 0x3bb4d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bb4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb4d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bb4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb4dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bb4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb4e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3bb4e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4E8u;
        // 0x3bb4ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB4F0u;
}
