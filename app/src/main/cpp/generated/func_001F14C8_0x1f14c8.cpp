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

// Function: func_001F14C8
// Address: 0x1f14c8 - 0x1f15b8
void func_001F14C8_0x1f14c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F14C8_0x1f14c8");
#endif

    switch (ctx->pc) {
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1524u: goto label_1f1524;
        case 0x1f1558u: goto label_1f1558;
        case 0x1f1570u: goto label_1f1570;
        case 0x1f157cu: goto label_1f157c;
        case 0x1f1588u: goto label_1f1588;
        case 0x1f1590u: goto label_1f1590;
        default: break;
    }

    ctx->pc = 0x1f14c8u;

    // 0x1f14c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f14c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f14cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f14ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f14d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f14d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f14d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f14d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14d8: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f14dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F14DCu;
    {
        const bool branch_taken_0x1f14dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14dc) {
            ctx->pc = 0x1F14F8u;
            goto label_1f14f8;
        }
    }
    ctx->pc = 0x1F14E4u;
    // 0x1f14e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f14e8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F14E8u;
    {
        const bool branch_taken_0x1f14e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f14e8) {
            ctx->pc = 0x1F14ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F14E8u;
            // 0x1f14ec: 0x86030b6a  lh          $v1, 0xB6A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2922)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F150Cu;
            goto label_1f150c;
        }
    }
    ctx->pc = 0x1F14F0u;
    // 0x1f14f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F14F0u;
    {
        const bool branch_taken_0x1f14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14F0u;
        // 0x1f14f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f14f0) {
            ctx->pc = 0x1F15A8u;
            goto label_1f15a8;
        }
    }
    ctx->pc = 0x1F14F8u;
label_1f14f8:
    // 0x1f14f8: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F14F8u;
    SET_GPR_U32(ctx, 31, 0x1F1500u);
    ctx->pc = 0x1F14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14F8u;
    // 0x1f14fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F14F8u, 0x1F1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1500u;
label_1f1500:
    // 0x1f1500: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f1500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1504: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F1504u;
    {
        const bool branch_taken_0x1f1504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1504u;
        // 0x1f1508: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1504) {
            ctx->pc = 0x1F15A0u;
            goto label_1f15a0;
        }
    }
    ctx->pc = 0x1F150Cu;
label_1f150c:
    // 0x1f150c: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1510: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f1510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f1514: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F1514u;
    {
        const bool branch_taken_0x1f1514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1514u;
        // 0x1f1518: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1514) {
            ctx->pc = 0x1F15A0u;
            goto label_1f15a0;
        }
    }
    ctx->pc = 0x1F151Cu;
    // 0x1f151c: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F151Cu;
    SET_GPR_U32(ctx, 31, 0x1F1524u);
    ctx->pc = 0x1F1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F151Cu;
    // 0x1f1520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F151Cu, 0x1F1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1524u;
label_1f1524:
    // 0x1f1524: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1f1524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f1528: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F1528u;
    {
        const bool branch_taken_0x1f1528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1528) {
            ctx->pc = 0x1F152Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1528u;
            // 0x1f152c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F15A8u;
            goto label_1f15a8;
        }
    }
    ctx->pc = 0x1F1530u;
    // 0x1f1530: 0x8e020b90  lw          $v0, 0xB90($s0)
    ctx->pc = 0x1f1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2960)));
    // 0x1f1534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1538: 0x2843000c  slti        $v1, $v0, 0xC
    ctx->pc = 0x1f1538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f153c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F153Cu;
    {
        const bool branch_taken_0x1f153c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F153Cu;
        // 0x1f1540: 0xae020b90  sw          $v0, 0xB90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f153c) {
            ctx->pc = 0x1F1548u;
            goto label_1f1548;
        }
    }
    ctx->pc = 0x1F1544u;
    // 0x1f1544: 0xae000b90  sw          $zero, 0xB90($s0)
    ctx->pc = 0x1f1544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2960), GPR_U32(ctx, 0));
label_1f1548:
    // 0x1f1548: 0x8e050b90  lw          $a1, 0xB90($s0)
    ctx->pc = 0x1f1548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2960)));
    // 0x1f154c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1f154cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1f1550: 0xc0afc1e  jal         func_2BF078
    ctx->pc = 0x1F1550u;
    SET_GPR_U32(ctx, 31, 0x1F1558u);
    ctx->pc = 0x1F1554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1550u;
    // 0x1f1554: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF078u, 0x1F1550u, 0x1F1558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1558u;
label_1f1558:
    // 0x1f1558: 0x92030b90  lbu         $v1, 0xB90($s0)
    ctx->pc = 0x1f1558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2960)));
    // 0x1f155c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f155cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1560: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1564: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1f1564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1568: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1568u;
    SET_GPR_U32(ctx, 31, 0x1F1570u);
    ctx->pc = 0x1F156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1568u;
    // 0x1f156c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1568u, 0x1F1570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1570u;
label_1f1570:
    // 0x1f1570: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1574: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x1F1574u;
    SET_GPR_U32(ctx, 31, 0x1F157Cu);
    ctx->pc = 0x1F1578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1574u;
    // 0x1f1578: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D88u, 0x1F1574u, 0x1F157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F157Cu;
label_1f157c:
    // 0x1f157c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1580: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F1580u;
    SET_GPR_U32(ctx, 31, 0x1F1588u);
    ctx->pc = 0x1F1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1580u;
    // 0x1f1584: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F1580u, 0x1F1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1588u;
label_1f1588:
    // 0x1f1588: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1588u;
    SET_GPR_U32(ctx, 31, 0x1F1590u);
    ctx->pc = 0x1F158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1588u;
    // 0x1f158c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1588u, 0x1F1590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1590u;
label_1f1590:
    // 0x1f1590: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1598u;
    {
        const bool branch_taken_0x1f1598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1598u;
        // 0x1f159c: 0xae020b8c  sw          $v0, 0xB8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1598) {
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F15A0u;
label_1f15a0:
    // 0x1f15a0: 0xae020b94  sw          $v0, 0xB94($s0)
    ctx->pc = 0x1f15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
label_1f15a4:
    // 0x1f15a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f15a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f15a8:
    // 0x1f15a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f15a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f15ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F15ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15ACu;
        // 0x1f15b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F15ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F15B4u;
    // 0x1f15b4: 0x0  nop
    ctx->pc = 0x1f15b4u;
    // NOP
    ctx->pc = 0x1f15b8u;
}
