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

// Function: func_00194558
// Address: 0x194558 - 0x1946e0
void func_00194558_0x194558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00194558_0x194558");
#endif

    switch (ctx->pc) {
        case 0x194588u: goto label_194588;
        case 0x194594u: goto label_194594;
        case 0x1945ccu: goto label_1945cc;
        case 0x19464cu: goto label_19464c;
        case 0x19468cu: goto label_19468c;
        case 0x1946acu: goto label_1946ac;
        case 0x1946d0u: goto label_1946d0;
        default: break;
    }

    ctx->pc = 0x194558u;

    // 0x194558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19455c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x194560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194568: 0x8e020608  lw          $v0, 0x608($s0)
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x19456c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19456Cu;
    {
        const bool branch_taken_0x19456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19456Cu;
        // 0x194570: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19456c) {
            ctx->pc = 0x1945C0u;
            goto label_1945c0;
        }
    }
    ctx->pc = 0x194574u;
    // 0x194574: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x194574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x194578: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x194578u;
    {
        const bool branch_taken_0x194578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194578) {
            ctx->pc = 0x19457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194578u;
            // 0x19457c: 0x8e050604  lw          $a1, 0x604($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1945C4u;
            goto label_1945c4;
        }
    }
    ctx->pc = 0x194580u;
    // 0x194580: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x194580u;
    SET_GPR_U32(ctx, 31, 0x194588u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x194580u, 0x194588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194588u;
label_194588:
    // 0x194588: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x194588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x19458c: 0xc07f74e  jal         func_1FDD38
    ctx->pc = 0x19458Cu;
    SET_GPR_U32(ctx, 31, 0x194594u);
    ctx->pc = 0x194590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19458Cu;
    // 0x194590: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x19458Cu, 0x194594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194594u;
label_194594:
    // 0x194594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194598: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x194598u;
    {
        const bool branch_taken_0x194598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194598) {
            ctx->pc = 0x19459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194598u;
            // 0x19459c: 0x8e050604  lw          $a1, 0x604($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1945C4u;
            goto label_1945c4;
        }
    }
    ctx->pc = 0x1945A0u;
    // 0x1945a0: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1945a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1945a8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1945a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1945ac: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1945acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1945b0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1945b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945b4: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1945b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x1945b8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1945b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945bc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1945bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1945c0:
    // 0x1945c0: 0x8e050604  lw          $a1, 0x604($s0)
    ctx->pc = 0x1945c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_1945c4:
    // 0x1945c4: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1945C4u;
    SET_GPR_U32(ctx, 31, 0x1945CCu);
    ctx->pc = 0x1945C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945C4u;
    // 0x1945c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1945C4u, 0x1945CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945CCu;
label_1945cc:
    // 0x1945cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1945ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1945d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1945d4: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1945D4u;
    {
        const bool branch_taken_0x1945d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1945d4) {
            ctx->pc = 0x1945D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1945D4u;
            // 0x1945d8: 0x8e020af4  lw          $v0, 0xAF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194658u;
            goto label_194658;
        }
    }
    ctx->pc = 0x1945DCu;
    // 0x1945dc: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x1945e0: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1945E0u;
    {
        const bool branch_taken_0x1945e0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1945e0) {
            ctx->pc = 0x1945E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1945E0u;
            // 0x1945e4: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19460Cu;
            goto label_19460c;
        }
    }
    ctx->pc = 0x1945E8u;
    // 0x1945e8: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1945ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1945f0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1945f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1945f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1945f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1945f8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1945f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945fc: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1945fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x194600: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x194600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x194604: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x194604u;
    {
        const bool branch_taken_0x194604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194604u;
        // 0x194608: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194604) {
            ctx->pc = 0x194654u;
            goto label_194654;
        }
    }
    ctx->pc = 0x19460Cu;
label_19460c:
    // 0x19460c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x19460cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x194610: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x194610u;
    {
        const bool branch_taken_0x194610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194610u;
        // 0x194614: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194610) {
            ctx->pc = 0x194624u;
            goto label_194624;
        }
    }
    ctx->pc = 0x194618u;
    // 0x194618: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x194618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19461c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19461Cu;
    {
        const bool branch_taken_0x19461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19461Cu;
        // 0x194620: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19461c) {
            ctx->pc = 0x194628u;
            goto label_194628;
        }
    }
    ctx->pc = 0x194624u;
label_194624:
    // 0x194624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194628:
    // 0x194628: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x19462c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194630: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x194630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x194634: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x194634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x194638: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x194638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19463c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19463cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194640: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x194640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194644: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x194644u;
    SET_GPR_U32(ctx, 31, 0x19464Cu);
    ctx->pc = 0x194648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194644u;
    // 0x194648: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x194644u, 0x19464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19464Cu;
label_19464c:
    // 0x19464c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x194650: 0xae030af4  sw          $v1, 0xAF4($s0)
    ctx->pc = 0x194650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 3));
label_194654:
    // 0x194654: 0x8e020af4  lw          $v0, 0xAF4($s0)
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2804)));
label_194658:
    // 0x194658: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x194658u;
    {
        const bool branch_taken_0x194658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194658u;
        // 0x19465c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194658) {
            ctx->pc = 0x1946D0u;
            goto label_1946d0;
        }
    }
    ctx->pc = 0x194660u;
    // 0x194660: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x194660u;
    {
        const bool branch_taken_0x194660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194660u;
        // 0x194664: 0xae020af4  sw          $v0, 0xAF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194660) {
            ctx->pc = 0x1946B4u;
            goto label_1946b4;
        }
    }
    ctx->pc = 0x194668u;
    // 0x194668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19466c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19466Cu;
    {
        const bool branch_taken_0x19466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19466Cu;
        // 0x194670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19466c) {
            ctx->pc = 0x194694u;
            goto label_194694;
        }
    }
    ctx->pc = 0x194674u;
    // 0x194674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x194678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19467c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194680: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x194680u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x194684: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x194684u;
    SET_GPR_U32(ctx, 31, 0x19468Cu);
    ctx->pc = 0x194688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194684u;
    // 0x194688: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x194684u, 0x19468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19468Cu;
label_19468c:
    // 0x19468c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19468Cu;
    {
        const bool branch_taken_0x19468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19468Cu;
        // 0x194690: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19468c) {
            ctx->pc = 0x1946D4u;
            goto label_1946d4;
        }
    }
    ctx->pc = 0x194694u;
label_194694:
    // 0x194694: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x194694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x194698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19469c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19469cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1946a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1946a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1946a4: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1946A4u;
    SET_GPR_U32(ctx, 31, 0x1946ACu);
    ctx->pc = 0x1946A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946A4u;
    // 0x1946a8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1946A4u, 0x1946ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946ACu;
label_1946ac:
    // 0x1946ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1946ACu;
    {
        const bool branch_taken_0x1946ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946ACu;
        // 0x1946b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946ac) {
            ctx->pc = 0x1946D4u;
            goto label_1946d4;
        }
    }
    ctx->pc = 0x1946B4u;
label_1946b4:
    // 0x1946b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1946b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1946b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1946b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1946bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1946bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1946c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1946c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1946c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1946c8: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1946C8u;
    SET_GPR_U32(ctx, 31, 0x1946D0u);
    ctx->pc = 0x1946CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1946C8u;
    // 0x1946cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1946C8u, 0x1946D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946D0u;
label_1946d0:
    // 0x1946d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1946d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1946d4:
    // 0x1946d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1946d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1946d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1946D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1946DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946D8u;
        // 0x1946dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1946D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1946E0u;
}
