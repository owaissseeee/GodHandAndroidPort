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

// Function: func_001634E0
// Address: 0x1634e0 - 0x163598
void func_001634E0_0x1634e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001634E0_0x1634e0");
#endif

    switch (ctx->pc) {
        case 0x163550u: goto label_163550;
        case 0x163560u: goto label_163560;
        default: break;
    }

    ctx->pc = 0x1634e0u;

    // 0x1634e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1634e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1634e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1634e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1634e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1634ec: 0x80a3005b  lb          $v1, 0x5B($a1)
    ctx->pc = 0x1634ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 91)));
    // 0x1634f0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1634f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1634f4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1634F4u;
    {
        const bool branch_taken_0x1634f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634F4u;
        // 0x1634f8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634f4) {
            ctx->pc = 0x163588u;
            goto label_163588;
        }
    }
    ctx->pc = 0x1634FCu;
    // 0x1634fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1634fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163500: 0x2442f540  addiu       $v0, $v0, -0xAC0
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964544));
    // 0x163504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163508: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x163508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16350c: 0x800008  jr          $a0
    ctx->pc = 0x16350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163514u: goto label_163514;
            case 0x163530u: goto label_163530;
            case 0x163558u: goto label_163558;
            case 0x163568u: goto label_163568;
            case 0x163578u: goto label_163578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16350Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x163514u;
label_163514:
    // 0x163514: 0x8ca400e0  lw          $a0, 0xE0($a1)
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x163518: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16351c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x163520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x163520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x163524: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x163524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x163528: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x163528u;
    {
        const bool branch_taken_0x163528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163528u;
        // 0x16352c: 0xa0a0005c  sb          $zero, 0x5C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 92), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163528) {
            ctx->pc = 0x163568u;
            goto label_163568;
        }
    }
    ctx->pc = 0x163530u;
label_163530:
    // 0x163530: 0x90a200f0  lbu         $v0, 0xF0($a1)
    ctx->pc = 0x163530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x163534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x163538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16353c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x16353cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x163540: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x163540u;
    {
        const bool branch_taken_0x163540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163540) {
            ctx->pc = 0x163544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163540u;
            // 0x163544: 0x90a2005b  lbu         $v0, 0x5B($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16356Cu;
            goto label_16356c;
        }
    }
    ctx->pc = 0x163548u;
    // 0x163548: 0xc058d66  jal         func_163598
    ctx->pc = 0x163548u;
    SET_GPR_U32(ctx, 31, 0x163550u);
    ctx->pc = 0x16354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163548u;
    // 0x16354c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163598u, 0x163548u, 0x163550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163550u;
label_163550:
    // 0x163550: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163550u;
    {
        const bool branch_taken_0x163550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163550u;
        // 0x163554: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163550) {
            ctx->pc = 0x16358Cu;
            goto label_16358c;
        }
    }
    ctx->pc = 0x163558u;
label_163558:
    // 0x163558: 0xc058e10  jal         func_163840
    ctx->pc = 0x163558u;
    SET_GPR_U32(ctx, 31, 0x163560u);
    ctx->pc = 0x16355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163558u;
    // 0x16355c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163840u, 0x163558u, 0x163560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163560u;
label_163560:
    // 0x163560: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163560u;
    {
        const bool branch_taken_0x163560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163560u;
        // 0x163564: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163560) {
            ctx->pc = 0x16358Cu;
            goto label_16358c;
        }
    }
    ctx->pc = 0x163568u;
label_163568:
    // 0x163568: 0x90a2005b  lbu         $v0, 0x5B($a1)
    ctx->pc = 0x163568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 91)));
label_16356c:
    // 0x16356c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163570: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163570u;
    {
        const bool branch_taken_0x163570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163570u;
        // 0x163574: 0xa0a2005b  sb          $v0, 0x5B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163570) {
            ctx->pc = 0x163588u;
            goto label_163588;
        }
    }
    ctx->pc = 0x163578u;
label_163578:
    // 0x163578: 0x90a2005a  lbu         $v0, 0x5A($a1)
    ctx->pc = 0x163578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 90)));
    // 0x16357c: 0xa0a0005b  sb          $zero, 0x5B($a1)
    ctx->pc = 0x16357cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x163580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163584: 0xa0a2005a  sb          $v0, 0x5A($a1)
    ctx->pc = 0x163584u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 90), (uint8_t)GPR_U32(ctx, 2));
label_163588:
    // 0x163588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16358c:
    // 0x16358c: 0x3e00008  jr          $ra
    ctx->pc = 0x16358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16358Cu;
        // 0x163590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163594u;
    // 0x163594: 0x0  nop
    ctx->pc = 0x163594u;
    // NOP
    ctx->pc = 0x163598u;
}
