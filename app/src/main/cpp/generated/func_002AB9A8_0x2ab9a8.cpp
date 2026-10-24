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

// Function: func_002AB9A8
// Address: 0x2ab9a8 - 0x2aba78
void func_002AB9A8_0x2ab9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AB9A8_0x2ab9a8");
#endif

    switch (ctx->pc) {
        case 0x2aba54u: goto label_2aba54;
        case 0x2aba6cu: goto label_2aba6c;
        default: break;
    }

    ctx->pc = 0x2ab9a8u;

    // 0x2ab9a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ab9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ab9ac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ab9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ab9b0: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2ab9b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2ab9b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab9b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab9bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ab9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ab9c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AB9C0u;
    {
        const bool branch_taken_0x2ab9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9c0) {
            ctx->pc = 0x2AB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB9C0u;
            // 0x2ab9c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB9C8u;
            goto label_2ab9c8;
        }
    }
    ctx->pc = 0x2AB9C8u;
label_2ab9c8:
    // 0x2ab9c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2ab9c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2ab9cc: 0x2812  mflo        $a1
    ctx->pc = 0x2ab9ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2ab9d0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2ab9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ab9d4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ab9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ab9d8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AB9D8u;
    {
        const bool branch_taken_0x2ab9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9D8u;
        // 0x2ab9dc: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9d8) {
            ctx->pc = 0x2ABA5Cu;
            goto label_2aba5c;
        }
    }
    ctx->pc = 0x2AB9E0u;
    // 0x2ab9e0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ab9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ab9e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab9e8: 0x2442af40  addiu       $v0, $v0, -0x50C0
    ctx->pc = 0x2ab9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x2ab9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ab9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ab9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab9f4: 0x800008  jr          $a0
    ctx->pc = 0x2AB9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB9FCu: goto label_2ab9fc;
            case 0x2ABA08u: goto label_2aba08;
            case 0x2ABA14u: goto label_2aba14;
            case 0x2ABA20u: goto label_2aba20;
            case 0x2ABA2Cu: goto label_2aba2c;
            case 0x2ABA38u: goto label_2aba38;
            case 0x2ABA44u: goto label_2aba44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB9F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AB9FCu;
label_2ab9fc:
    // 0x2ab9fc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2ab9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ABA00u;
    {
        const bool branch_taken_0x2aba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA00u;
        // 0x2aba04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba00) {
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA08u;
label_2aba08:
    // 0x2aba08: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2ABA0Cu;
    {
        const bool branch_taken_0x2aba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA0Cu;
        // 0x2aba10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba0c) {
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA14u;
label_2aba14:
    // 0x2aba14: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ABA18u;
    {
        const bool branch_taken_0x2aba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA18u;
        // 0x2aba1c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba18) {
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA20u;
label_2aba20:
    // 0x2aba20: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2ABA24u;
    {
        const bool branch_taken_0x2aba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA24u;
        // 0x2aba28: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba24) {
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA2Cu;
label_2aba2c:
    // 0x2aba2c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABA30u;
    {
        const bool branch_taken_0x2aba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA30u;
        // 0x2aba34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba30) {
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA38u;
label_2aba38:
    // 0x2aba38: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABA3Cu;
    {
        const bool branch_taken_0x2aba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA3Cu;
        // 0x2aba40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba3c) {
            ctx->pc = 0x2ABA4Cu;
            goto label_2aba4c;
        }
    }
    ctx->pc = 0x2ABA44u;
label_2aba44:
    // 0x2aba44: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba48: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2aba4c:
    // 0x2aba4c: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2ABA4Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA54u);
    ctx->pc = 0x2ABA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA4Cu;
    // 0x2aba50: 0x24847510  addiu       $a0, $a0, 0x7510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2ABA4Cu, 0x2ABA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA54u;
label_2aba54:
    // 0x2aba54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABA54u;
    {
        const bool branch_taken_0x2aba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA54u;
        // 0x2aba58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba54) {
            ctx->pc = 0x2ABA70u;
            goto label_2aba70;
        }
    }
    ctx->pc = 0x2ABA5Cu;
label_2aba5c:
    // 0x2aba5c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2aba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2aba60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2aba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aba64: 0xc0abdaa  jal         func_2AF6A8
    ctx->pc = 0x2ABA64u;
    SET_GPR_U32(ctx, 31, 0x2ABA6Cu);
    ctx->pc = 0x2ABA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA64u;
    // 0x2aba68: 0x24847510  addiu       $a0, $a0, 0x7510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF6A8u, 0x2ABA64u, 0x2ABA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA6Cu;
label_2aba6c:
    // 0x2aba6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aba6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aba70:
    // 0x2aba70: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA70u;
        // 0x2aba74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA78u;
}
