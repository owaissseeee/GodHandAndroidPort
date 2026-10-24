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

// Function: func_0027F4C0
// Address: 0x27f4c0 - 0x27f570
void func_0027F4C0_0x27f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F4C0_0x27f4c0");
#endif

    switch (ctx->pc) {
        case 0x27f4c0u: goto label_27f4c0;
        case 0x27f4c4u: goto label_27f4c4;
        case 0x27f4c8u: goto label_27f4c8;
        case 0x27f4ccu: goto label_27f4cc;
        case 0x27f4d0u: goto label_27f4d0;
        case 0x27f4d4u: goto label_27f4d4;
        case 0x27f4d8u: goto label_27f4d8;
        case 0x27f4dcu: goto label_27f4dc;
        case 0x27f4e0u: goto label_27f4e0;
        case 0x27f4e4u: goto label_27f4e4;
        case 0x27f4e8u: goto label_27f4e8;
        case 0x27f4ecu: goto label_27f4ec;
        case 0x27f4f0u: goto label_27f4f0;
        case 0x27f4f4u: goto label_27f4f4;
        case 0x27f4f8u: goto label_27f4f8;
        case 0x27f4fcu: goto label_27f4fc;
        case 0x27f500u: goto label_27f500;
        case 0x27f504u: goto label_27f504;
        case 0x27f508u: goto label_27f508;
        case 0x27f50cu: goto label_27f50c;
        case 0x27f510u: goto label_27f510;
        case 0x27f514u: goto label_27f514;
        case 0x27f518u: goto label_27f518;
        case 0x27f51cu: goto label_27f51c;
        case 0x27f520u: goto label_27f520;
        case 0x27f524u: goto label_27f524;
        case 0x27f528u: goto label_27f528;
        case 0x27f52cu: goto label_27f52c;
        case 0x27f530u: goto label_27f530;
        case 0x27f534u: goto label_27f534;
        case 0x27f538u: goto label_27f538;
        case 0x27f53cu: goto label_27f53c;
        case 0x27f540u: goto label_27f540;
        case 0x27f544u: goto label_27f544;
        case 0x27f548u: goto label_27f548;
        case 0x27f54cu: goto label_27f54c;
        case 0x27f550u: goto label_27f550;
        case 0x27f554u: goto label_27f554;
        case 0x27f558u: goto label_27f558;
        case 0x27f55cu: goto label_27f55c;
        case 0x27f560u: goto label_27f560;
        case 0x27f564u: goto label_27f564;
        case 0x27f568u: goto label_27f568;
        case 0x27f56cu: goto label_27f56c;
        default: break;
    }

    ctx->pc = 0x27f4c0u;

label_27f4c0:
    // 0x27f4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27f4c4:
    // 0x27f4c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27f4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f4c8:
    // 0x27f4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27f4cc:
    // 0x27f4cc: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27f4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27f4d0:
    // 0x27f4d0: 0x2c420012  sltiu       $v0, $v0, 0x12
    ctx->pc = 0x27f4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_27f4d4:
    // 0x27f4d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_27f4d8:
    if (ctx->pc == 0x27F4D8u) {
        ctx->pc = 0x27F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4D4u;
        // 0x27f4d8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F4DCu;
        goto label_27f4dc;
    }
    ctx->pc = 0x27F4D4u;
    {
        const bool branch_taken_0x27f4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f4d4) {
            ctx->pc = 0x27F4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F4D4u;
            // 0x27f4d8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4DCu;
            goto label_27f4dc;
        }
    }
    ctx->pc = 0x27F4DCu;
label_27f4dc:
    // 0x27f4dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_27f4e0:
    // 0x27f4e0: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x27f4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27f4e4:
    // 0x27f4e4: 0x2447feb0  addiu       $a3, $v0, -0x150
    ctx->pc = 0x27f4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
label_27f4e8:
    // 0x27f4e8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x27f4e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f4ec:
    // 0x27f4ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_27f4f0:
    // 0x27f4f0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27f4f4:
    // 0x27f4f4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x27f4f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27f4f8:
    // 0x27f4f8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_27f4fc:
    if (ctx->pc == 0x27F4FCu) {
        ctx->pc = 0x27F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4F8u;
        // 0x27f4fc: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F500u;
        goto label_27f500;
    }
    ctx->pc = 0x27F4F8u;
    {
        const bool branch_taken_0x27f4f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4F8u;
        // 0x27f4fc: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4f8) {
            ctx->pc = 0x27F524u;
            goto label_27f524;
        }
    }
    ctx->pc = 0x27F500u;
label_27f500:
    // 0x27f500: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x27f500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27f504:
    // 0x27f504: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x27f504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27f508:
    // 0x27f508: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27f50c:
    // 0x27f50c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f510:
    // 0x27f510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f514:
    // 0x27f514: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x27f514u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27f518:
    // 0x27f518: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x27f518u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_27f51c:
    // 0x27f51c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27f520:
    if (ctx->pc == 0x27F520u) {
        ctx->pc = 0x27F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F51Cu;
        // 0x27f520: 0x2543feb0  addiu       $v1, $t2, -0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F524u;
        goto label_27f524;
    }
    ctx->pc = 0x27F51Cu;
    {
        const bool branch_taken_0x27f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F51Cu;
        // 0x27f520: 0x2543feb0  addiu       $v1, $t2, -0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f51c) {
            ctx->pc = 0x27F530u;
            goto label_27f530;
        }
    }
    ctx->pc = 0x27F524u;
label_27f524:
    // 0x27f524: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x27f524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_27f528:
    // 0x27f528: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27f528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27f52c:
    // 0x27f52c: 0x2543feb0  addiu       $v1, $t2, -0x150
    ctx->pc = 0x27f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966960));
label_27f530:
    // 0x27f530: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x27f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_27f534:
    // 0x27f534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f538:
    // 0x27f538: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27f53c:
    if (ctx->pc == 0x27F53Cu) {
        ctx->pc = 0x27F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F538u;
        // 0x27f53c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F540u;
        goto label_27f540;
    }
    ctx->pc = 0x27F538u;
    {
        const bool branch_taken_0x27f538 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F538u;
        // 0x27f53c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f538) {
            ctx->pc = 0x27F554u;
            goto label_27f554;
        }
    }
    ctx->pc = 0x27F540u;
label_27f540:
    // 0x27f540: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x27f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_27f544:
    // 0x27f544: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27f544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27f548:
    // 0x27f548: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27f548u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27f54c:
    // 0x27f54c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27f550:
    if (ctx->pc == 0x27F550u) {
        ctx->pc = 0x27F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F54Cu;
        // 0x27f550: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F554u;
        goto label_27f554;
    }
    ctx->pc = 0x27F54Cu;
    {
        const bool branch_taken_0x27f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F54Cu;
        // 0x27f550: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f54c) {
            ctx->pc = 0x27F558u;
            goto label_27f558;
        }
    }
    ctx->pc = 0x27F554u;
label_27f554:
    // 0x27f554: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27f554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27f558:
    // 0x27f558: 0xe0f809  jalr        $a3
label_27f55c:
    if (ctx->pc == 0x27F55Cu) {
        ctx->pc = 0x27F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F558u;
        // 0x27f55c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F560u;
        goto label_27f560;
    }
    ctx->pc = 0x27F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27F560u);
        ctx->pc = 0x27F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F558u;
        // 0x27f55c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F558u, 0x27F560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F560u;
label_27f560:
    // 0x27f560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f564:
    // 0x27f564: 0x3e00008  jr          $ra
label_27f568:
    if (ctx->pc == 0x27F568u) {
        ctx->pc = 0x27F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F564u;
        // 0x27f568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F56Cu;
        goto label_27f56c;
    }
    ctx->pc = 0x27F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F564u;
        // 0x27f568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F56Cu;
label_27f56c:
    // 0x27f56c: 0x0  nop
    ctx->pc = 0x27f56cu;
    // NOP
    ctx->pc = 0x27f570u;
}
