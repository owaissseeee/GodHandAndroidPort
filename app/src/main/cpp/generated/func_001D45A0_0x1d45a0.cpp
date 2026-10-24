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

// Function: func_001D45A0
// Address: 0x1d45a0 - 0x1d4670
void func_001D45A0_0x1d45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D45A0_0x1d45a0");
#endif

    switch (ctx->pc) {
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d4614u: goto label_1d4614;
        default: break;
    }

    ctx->pc = 0x1d45a0u;

    // 0x1d45a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1d45a4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1d45a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d45a8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1d45a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1d45ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d45acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45b0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1d45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1d45b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d45b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45b8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1d45b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1d45bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d45bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45c0: 0x24871634  addiu       $a3, $a0, 0x1634
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5684));
    // 0x1d45c4: 0x24851638  addiu       $a1, $a0, 0x1638
    ctx->pc = 0x1d45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5688));
    // 0x1d45c8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1d45c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45cc: 0x0  nop
    ctx->pc = 0x1d45ccu;
    // NOP
label_1d45d0:
    // 0x1d45d0: 0x9ca20000  lwu         $v0, 0x0($a1)
    ctx->pc = 0x1d45d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d45d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d45d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d45d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D45D8u;
    {
        const bool branch_taken_0x1d45d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45D8u;
        // 0x1d45dc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45d8) {
            ctx->pc = 0x1D45ECu;
            goto label_1d45ec;
        }
    }
    ctx->pc = 0x1D45E0u;
    // 0x1d45e0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1d45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1d45e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d45e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d45e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1d45ec:
    // 0x1d45ec: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1d45f0: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x1d45f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x1d45f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D45F4u;
    {
        const bool branch_taken_0x1d45f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45F4u;
        // 0x1d45f8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45f4) {
            ctx->pc = 0x1D45D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d45d0;
        }
    }
    ctx->pc = 0x1D45FCu;
    // 0x1d45fc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D45FCu;
    {
        const bool branch_taken_0x1d45fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45FCu;
        // 0x1d4600: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45fc) {
            ctx->pc = 0x1D4658u;
            goto label_1d4658;
        }
    }
    ctx->pc = 0x1D4604u;
    // 0x1d4604: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4604u;
    {
        const bool branch_taken_0x1d4604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4604u;
        // 0x1d4608: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4604) {
            ctx->pc = 0x1D4638u;
            goto label_1d4638;
        }
    }
    ctx->pc = 0x1D460Cu;
    // 0x1d460c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1D460Cu;
    SET_GPR_U32(ctx, 31, 0x1D4614u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1D460Cu, 0x1D4614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4614u;
label_1d4614:
    // 0x1d4614: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1d4614u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d4618: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4618u;
    {
        const bool branch_taken_0x1d4618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4618) {
            ctx->pc = 0x1D461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4618u;
            // 0x1d461c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4620u;
            goto label_1d4620;
        }
    }
    ctx->pc = 0x1D4620u;
label_1d4620:
    // 0x1d4620: 0x1810  mfhi        $v1
    ctx->pc = 0x1d4620u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d4624: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4628: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1d4628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1d462c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4630: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4630u;
    {
        const bool branch_taken_0x1d4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4630u;
        // 0x1d4634: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4630) {
            ctx->pc = 0x1D4644u;
            goto label_1d4644;
        }
    }
    ctx->pc = 0x1D4638u;
label_1d4638:
    // 0x1d4638: 0x24421634  addiu       $v0, $v0, 0x1634
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5684));
    // 0x1d463c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d4640: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d4640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d4644:
    // 0x1d4644: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4648: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d464c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4650: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4654: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d4654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1d4658:
    // 0x1d4658: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1d4658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d465c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1d465cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d4660: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1d4660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d4664: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4664u;
        // 0x1d4668: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D466Cu;
    // 0x1d466c: 0x0  nop
    ctx->pc = 0x1d466cu;
    // NOP
    ctx->pc = 0x1d4670u;
}
