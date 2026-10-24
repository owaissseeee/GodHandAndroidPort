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

// Function: func_002A84A8
// Address: 0x2a84a8 - 0x2a8578
void func_002A84A8_0x2a84a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A84A8_0x2a84a8");
#endif

    switch (ctx->pc) {
        case 0x2a84e8u: goto label_2a84e8;
        case 0x2a850cu: goto label_2a850c;
        case 0x2a851cu: goto label_2a851c;
        case 0x2a854cu: goto label_2a854c;
        default: break;
    }

    ctx->pc = 0x2a84a8u;

    // 0x2a84a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a84a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a84ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a84acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a84b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a84b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a84b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a84b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a84b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a84b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a84bc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2a84bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2a84c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a84c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a84c4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a84c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a84c8: 0x8e33042c  lw          $s3, 0x42C($s1)
    ctx->pc = 0x2a84c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1068)));
    // 0x2a84cc: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A84CCu;
    {
        const bool branch_taken_0x2a84cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84CCu;
        // 0x2a84d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84cc) {
            ctx->pc = 0x2A8530u;
            goto label_2a8530;
        }
    }
    ctx->pc = 0x2A84D4u;
    // 0x2a84d4: 0x96630014  lhu         $v1, 0x14($s3)
    ctx->pc = 0x2a84d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a84d8: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x2a84d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x2a84dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A84DCu;
    {
        const bool branch_taken_0x2a84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84DCu;
        // 0x2a84e0: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84dc) {
            ctx->pc = 0x2A8530u;
            goto label_2a8530;
        }
    }
    ctx->pc = 0x2A84E4u;
    // 0x2a84e4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2a84e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a84e8:
    // 0x2a84e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a84e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a84ec: 0x50b4000c  beql        $a1, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2A84ECu;
    {
        const bool branch_taken_0x2a84ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x2a84ec) {
            ctx->pc = 0x2A84F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A84ECu;
            // 0x2a84f0: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8520u;
            goto label_2a8520;
        }
    }
    ctx->pc = 0x2A84F4u;
    // 0x2a84f4: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x2a84f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2a84f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a84f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a84fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A84FCu;
    {
        const bool branch_taken_0x2a84fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A84FCu;
        // 0x2a8500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a84fc) {
            ctx->pc = 0x2A8514u;
            goto label_2a8514;
        }
    }
    ctx->pc = 0x2A8504u;
    // 0x2a8504: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A8504u;
    SET_GPR_U32(ctx, 31, 0x2A850Cu);
    ctx->pc = 0x2A8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8504u;
    // 0x2a8508: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A8504u, 0x2A850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A850Cu;
label_2a850c:
    // 0x2a850c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A850Cu;
    {
        const bool branch_taken_0x2a850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A850Cu;
        // 0x2a8510: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a850c) {
            ctx->pc = 0x2A8520u;
            goto label_2a8520;
        }
    }
    ctx->pc = 0x2A8514u;
label_2a8514:
    // 0x2a8514: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A8514u;
    SET_GPR_U32(ctx, 31, 0x2A851Cu);
    ctx->pc = 0x2A8518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8514u;
    // 0x2a8518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A8514u, 0x2A851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A851Cu;
label_2a851c:
    // 0x2a851c: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x2a851cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_2a8520:
    // 0x2a8520: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a8520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a8524: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2a8524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a8528: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A8528u;
    {
        const bool branch_taken_0x2a8528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8528u;
        // 0x2a852c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8528) {
            ctx->pc = 0x2A84E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a84e8;
        }
    }
    ctx->pc = 0x2A8530u;
label_2a8530:
    // 0x2a8530: 0x86250570  lh          $a1, 0x570($s1)
    ctx->pc = 0x2a8530u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x2a8534: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2a8534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a8538: 0x10b00005  beq         $a1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8538u;
    {
        const bool branch_taken_0x2a8538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8538u;
        // 0x2a853c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8538) {
            ctx->pc = 0x2A8550u;
            goto label_2a8550;
        }
    }
    ctx->pc = 0x2A8540u;
    // 0x2a8540: 0x8e260574  lw          $a2, 0x574($s1)
    ctx->pc = 0x2a8540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x2a8544: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A8544u;
    SET_GPR_U32(ctx, 31, 0x2A854Cu);
    ctx->pc = 0x2A8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8544u;
    // 0x2a8548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A8544u, 0x2A854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A854Cu;
label_2a854c:
    // 0x2a854c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8550:
    // 0x2a8550: 0xa6300570  sh          $s0, 0x570($s1)
    ctx->pc = 0x2a8550u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 16));
    // 0x2a8554: 0xae220574  sw          $v0, 0x574($s1)
    ctx->pc = 0x2a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 2));
    // 0x2a8558: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a8558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a855c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a855cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8560: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a8560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8564: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a8564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8568: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2a8568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a856c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8570: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8570u;
        // 0x2a8574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8578u;
}
