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

// Function: func_00182958
// Address: 0x182958 - 0x182a18
void func_00182958_0x182958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182958_0x182958");
#endif

    switch (ctx->pc) {
        case 0x18296cu: goto label_18296c;
        case 0x18297cu: goto label_18297c;
        case 0x182990u: goto label_182990;
        case 0x1829a0u: goto label_1829a0;
        default: break;
    }

    ctx->pc = 0x182958u;

    // 0x182958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18295c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18295cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x182960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182964: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x182964u;
    SET_GPR_U32(ctx, 31, 0x18296Cu);
    ctx->pc = 0x182968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182964u;
    // 0x182968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x182964u, 0x18296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18296Cu;
label_18296c:
    // 0x18296c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x18296cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x182970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182974: 0xc060bfe  jal         func_182FF8
    ctx->pc = 0x182974u;
    SET_GPR_U32(ctx, 31, 0x18297Cu);
    ctx->pc = 0x182978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182974u;
    // 0x182978: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182FF8u, 0x182974u, 0x18297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18297Cu;
label_18297c:
    // 0x18297c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x182980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x182980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182984: 0x24492a10  addiu       $t1, $v0, 0x2A10
    ctx->pc = 0x182984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x182988: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x182988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18298c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_182990:
    // 0x182990: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182994: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x182994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18299c: 0x0  nop
    ctx->pc = 0x18299cu;
    // NOP
label_1829a0:
    // 0x1829a0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1829a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1829a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1829a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829a8: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x1829a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1829ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1829ACu;
    {
        const bool branch_taken_0x1829ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1829B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829ACu;
        // 0x1829b0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829ac) {
            ctx->pc = 0x1829BCu;
            goto label_1829bc;
        }
    }
    ctx->pc = 0x1829B4u;
    // 0x1829b4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1829b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1829b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1829b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1829bc:
    // 0x1829bc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1829bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1829c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1829C0u;
    {
        const bool branch_taken_0x1829c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829C0u;
        // 0x1829c4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829c0) {
            ctx->pc = 0x1829D8u;
            goto label_1829d8;
        }
    }
    ctx->pc = 0x1829C8u;
    // 0x1829c8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1829c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1829cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1829ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1829d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1829D0u;
    {
        const bool branch_taken_0x1829d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1829D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829D0u;
        // 0x1829d4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829d0) {
            ctx->pc = 0x1829DCu;
            goto label_1829dc;
        }
    }
    ctx->pc = 0x1829D8u;
label_1829d8:
    // 0x1829d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1829d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1829dc:
    // 0x1829dc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1829dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1829e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1829e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1829e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1829e8: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x1829e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x1829ec: 0x4c1ffec  bgez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1829ECu;
    {
        const bool branch_taken_0x1829ec = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1829F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829ECu;
        // 0x1829f0: 0xac620154  sw          $v0, 0x154($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829ec) {
            ctx->pc = 0x1829A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1829a0;
        }
    }
    ctx->pc = 0x1829F4u;
    // 0x1829f4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1829f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829f8: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x1829f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1829fc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1829FCu;
    {
        const bool branch_taken_0x1829fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829FCu;
        // 0x182a00: 0x691021  addu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829fc) {
            ctx->pc = 0x182990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182990;
        }
    }
    ctx->pc = 0x182A04u;
    // 0x182a04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182a10: 0x3e00008  jr          $ra
    ctx->pc = 0x182A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A10u;
        // 0x182a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A18u;
}
