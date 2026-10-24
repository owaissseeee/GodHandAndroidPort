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

// Function: _sceSifSendCmd
// Address: 0x3b2550 - 0x3b2688
void _sceSifSendCmd_0x3b2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSifSendCmd_0x3b2550");
#endif

    switch (ctx->pc) {
        case 0x3b25d8u: goto label_3b25d8;
        case 0x3b2640u: goto label_3b2640;
        case 0x3b2654u: goto label_3b2654;
        case 0x3b2664u: goto label_3b2664;
        default: break;
    }

    ctx->pc = 0x3b2550u;

    // 0x3b2550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b2550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b2554: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b2558: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3b2558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3b255c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3b255cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2560: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3b2560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3b2564: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b2564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2568: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b256c: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x3b256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x3b2570: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b2570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2574: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b2574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b2578: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3b257c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b257cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2580: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b2580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2584: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x3b2584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x3b2588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2588u;
    {
        const bool branch_taken_0x3b2588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2588u;
        // 0x3b258c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2588) {
            ctx->pc = 0x3B2598u;
            goto label_3b2598;
        }
    }
    ctx->pc = 0x3B2590u;
    // 0x3b2590: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3B2590u;
    {
        const bool branch_taken_0x3b2590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2590u;
        // 0x3b2594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2590) {
            ctx->pc = 0x3B2664u;
            goto label_3b2664;
        }
    }
    ctx->pc = 0x3B2598u;
label_3b2598:
    // 0x3b2598: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B2598u;
    {
        const bool branch_taken_0x3b2598 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3B259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2598u;
        // 0x3b259c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2598) {
            ctx->pc = 0x3B25E0u;
            goto label_3b25e0;
        }
    }
    ctx->pc = 0x3B25A0u;
    // 0x3b25a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3b25a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b25a4: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x3b25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3b25a8: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x3b25a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x3b25ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3b25acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b25b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b25b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b25b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3b25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3b25b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b25bc: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x3b25bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x3b25c0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x3b25c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x3b25c4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x3b25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x3b25c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B25C8u;
    {
        const bool branch_taken_0x3b25c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25C8u;
        // 0x3b25cc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25c8) {
            ctx->pc = 0x3B25ECu;
            goto label_3b25ec;
        }
    }
    ctx->pc = 0x3B25D0u;
    // 0x3b25d0: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B25D0u;
    SET_GPR_U32(ctx, 31, 0x3B25D8u);
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B25D0u, 0x3B25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B25D8u;
label_3b25d8:
    // 0x3b25d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B25D8u;
    {
        const bool branch_taken_0x3b25d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25D8u;
        // 0x3b25dc: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25d8) {
            ctx->pc = 0x3B25F0u;
            goto label_3b25f0;
        }
    }
    ctx->pc = 0x3B25E0u;
label_3b25e0:
    // 0x3b25e0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3b25e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b25e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3b25e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b25ec:
    // 0x3b25ec: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x3b25ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_3b25f0:
    // 0x3b25f0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b25f4: 0x8c44e520  lw          $a0, -0x1AE0($v0)
    ctx->pc = 0x3b25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x77E520u));
    // 0x3b25f8: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x3b25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x3b25fc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3b25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3b2600: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x3b2600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3b2604: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3b2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3b2608: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x3b2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3b260c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3b260cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3b2610: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b2610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b2614: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x3b2614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x3b2618: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x3b2618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x3b261c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2620: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x3b2620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x3b2624: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x3b2624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x3b2628: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3b2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3b262c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3b262cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3b2630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2638: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B2638u;
    SET_GPR_U32(ctx, 31, 0x3B2640u);
    ctx->pc = 0x3B263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2638u;
    // 0x3b263c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B2638u, 0x3B2640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2640u;
label_3b2640:
    // 0x3b2640: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3b2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3b2644: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2644u;
    {
        const bool branch_taken_0x3b2644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2644u;
        // 0x3b2648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2644) {
            ctx->pc = 0x3B265Cu;
            goto label_3b265c;
        }
    }
    ctx->pc = 0x3B264Cu;
    // 0x3b264c: 0xc0ec01c  jal         func_3B0070
    ctx->pc = 0x3B264Cu;
    SET_GPR_U32(ctx, 31, 0x3B2654u);
    ctx->pc = 0x3B2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B264Cu;
    // 0x3b2650: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0070u, 0x3B264Cu, 0x3B2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2654u;
label_3b2654:
    // 0x3b2654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2654u;
    {
        const bool branch_taken_0x3b2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2654u;
        // 0x3b2658: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2654) {
            ctx->pc = 0x3B2668u;
            goto label_3b2668;
        }
    }
    ctx->pc = 0x3B265Cu;
label_3b265c:
    // 0x3b265c: 0xc0ec018  jal         func_3B0060
    ctx->pc = 0x3B265Cu;
    SET_GPR_U32(ctx, 31, 0x3B2664u);
    ctx->pc = 0x3B2660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B265Cu;
    // 0x3b2660: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0060u, 0x3B265Cu, 0x3B2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2664u;
label_3b2664:
    // 0x3b2664: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b2664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2668:
    // 0x3b2668: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3b2668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b266c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3b266cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2670: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b2670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2674: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b2674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2678: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b2678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b267c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B267Cu;
        // 0x3b2680: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2684u;
    // 0x3b2684: 0x0  nop
    ctx->pc = 0x3b2684u;
    // NOP
    ctx->pc = 0x3b2688u;
}
