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

// Function: _getAllRefs
// Address: 0x39c5b8 - 0x39ccc0
void _getAllRefs_0x39c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getAllRefs_0x39c5b8");
#endif

    switch (ctx->pc) {
        case 0x39c6d4u: goto label_39c6d4;
        case 0x39c714u: goto label_39c714;
        case 0x39c740u: goto label_39c740;
        case 0x39c780u: goto label_39c780;
        case 0x39c7bcu: goto label_39c7bc;
        case 0x39c7fcu: goto label_39c7fc;
        case 0x39c844u: goto label_39c844;
        case 0x39c948u: goto label_39c948;
        case 0x39c9e8u: goto label_39c9e8;
        case 0x39ca30u: goto label_39ca30;
        case 0x39ca80u: goto label_39ca80;
        case 0x39ca98u: goto label_39ca98;
        case 0x39cb3cu: goto label_39cb3c;
        case 0x39cb7cu: goto label_39cb7c;
        case 0x39cbd4u: goto label_39cbd4;
        case 0x39cc2cu: goto label_39cc2c;
        case 0x39cc74u: goto label_39cc74;
        case 0x39cc8cu: goto label_39cc8c;
        default: break;
    }

    ctx->pc = 0x39c5b8u;

    // 0x39c5b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x39c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x39c5bc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x39c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39c5c0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x39c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x39c5c4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x39c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x39c5c8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x39c5c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5cc: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x39c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x39c5d0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x39c5d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5d4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x39c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x39c5d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39c5d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5dc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x39c5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x39c5e0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x39c5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5e4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x39c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x39c5e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39c5e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c5ec: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x39c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x39c5f0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x39c5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5f4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x39c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x39c5f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c5fc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x39c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x39c600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39c600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c604: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x39c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x39c608: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x39c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x39c60c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x39c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x39c610: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x39c610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39c614: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x39c614u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x39c618: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x39c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x39c61c: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x39C61Cu;
    {
        const bool branch_taken_0x39c61c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C61Cu;
        // 0x39c620: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c61c) {
            ctx->pc = 0x39C634u;
            goto label_39c634;
        }
    }
    ctx->pc = 0x39C624u;
    // 0x39c624: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x39c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x39c628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39c62c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x39C62Cu;
    {
        const bool branch_taken_0x39c62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C62Cu;
        // 0x39c630: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c62c) {
            ctx->pc = 0x39CAA0u;
            goto label_39caa0;
        }
    }
    ctx->pc = 0x39C634u;
label_39c634:
    // 0x39c634: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x39c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x39c638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39c63c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x39C63Cu;
    {
        const bool branch_taken_0x39c63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C63Cu;
        // 0x39c640: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c63c) {
            ctx->pc = 0x39C84Cu;
            goto label_39c84c;
        }
    }
    ctx->pc = 0x39C644u;
    // 0x39c644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39c648: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C648u;
    {
        const bool branch_taken_0x39c648 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x39c648) {
            ctx->pc = 0x39C64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C648u;
            // 0x39c64c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C65Cu;
            goto label_39c65c;
        }
    }
    ctx->pc = 0x39C650u;
    // 0x39c650: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x39C650u;
    {
        const bool branch_taken_0x39c650 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c650) {
            ctx->pc = 0x39C690u;
            goto label_39c690;
        }
    }
    ctx->pc = 0x39C658u;
    // 0x39c658: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39c65c:
    // 0x39c65c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c660: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x39c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c668: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c670: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39c674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c678: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39c678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x39c67c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x39c67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39c680: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39c680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39c684: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c688: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x39C688u;
    {
        const bool branch_taken_0x39c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C688u;
        // 0x39c68c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c688) {
            ctx->pc = 0x39CA78u;
            goto label_39ca78;
        }
    }
    ctx->pc = 0x39C690u;
label_39c690:
    // 0x39c690: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x39C690u;
    {
        const bool branch_taken_0x39c690 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x39C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C690u;
        // 0x39c694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c690) {
            ctx->pc = 0x39C71Cu;
            goto label_39c71c;
        }
    }
    ctx->pc = 0x39C698u;
    // 0x39c698: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x39c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c69c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6a4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c6a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c6a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c6ac: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x39c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x39c6b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c6b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39c6b8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c6bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39c6c0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c6c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6c4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x39c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x39c6c8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39c6c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6cc: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39C6CCu;
    SET_GPR_U32(ctx, 31, 0x39C6D4u);
    ctx->pc = 0x39C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C6CCu;
    // 0x39c6d0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39C6CCu, 0x39C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C6D4u;
label_39c6d4:
    // 0x39c6d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x39c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x39c6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6dc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x39c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x39c6e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39c6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c6e4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c6e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c6e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c6ec: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x39c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x39c6f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c6f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39c6f8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c6fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39c700: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c700u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c704: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x39c704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x39c708: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39c708u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c70c: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39C70Cu;
    SET_GPR_U32(ctx, 31, 0x39C714u);
    ctx->pc = 0x39C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C70Cu;
    // 0x39c710: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39C70Cu, 0x39C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C714u;
label_39c714:
    // 0x39c714: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x39C714u;
    {
        const bool branch_taken_0x39c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C714u;
        // 0x39c718: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c714) {
            ctx->pc = 0x39CA9Cu;
            goto label_39ca9c;
        }
    }
    ctx->pc = 0x39C71Cu;
label_39c71c:
    // 0x39c71c: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x39C71Cu;
    {
        const bool branch_taken_0x39c71c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x39C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C71Cu;
        // 0x39c720: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c71c) {
            ctx->pc = 0x39C834u;
            goto label_39c834;
        }
    }
    ctx->pc = 0x39C724u;
    // 0x39c724: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x39c724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c728: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x39c728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c72c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x39c72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c734: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x39c734u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x39c738: 0xc0e710c  jal         func_39C430
    ctx->pc = 0x39C738u;
    SET_GPR_U32(ctx, 31, 0x39C740u);
    ctx->pc = 0x39C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C738u;
    // 0x39c73c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C430u, 0x39C738u, 0x39C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C740u;
label_39c740:
    // 0x39c740: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x39c740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c748: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c750: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c754: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c758: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39c758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39c75c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c760: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39c760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39c764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c768: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x39c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x39c76c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c770: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x39c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x39c774: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c778: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39C778u;
    SET_GPR_U32(ctx, 31, 0x39C780u);
    ctx->pc = 0x39C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C778u;
    // 0x39c77c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39C778u, 0x39C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C780u;
label_39c780:
    // 0x39c780: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x39c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c788: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x39c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39c78c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39c78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c790: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c798: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39c79c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x39c7a4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c7a8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x39c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x39c7ac: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c7acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7b0: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x39c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x39c7b4: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39C7B4u;
    SET_GPR_U32(ctx, 31, 0x39C7BCu);
    ctx->pc = 0x39C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C7B4u;
    // 0x39c7b8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39C7B4u, 0x39C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7BCu;
label_39c7bc:
    // 0x39c7bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x39c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c7c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39c7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c7cc: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c7d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39c7d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39c7d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39c7d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39c7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c7dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39c7e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c7e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7e4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x39c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x39c7e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c7ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x39c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x39c7f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c7f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c7f4: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39C7F4u;
    SET_GPR_U32(ctx, 31, 0x39C7FCu);
    ctx->pc = 0x39C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C7F4u;
    // 0x39c7f8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39C7F4u, 0x39C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C7FCu;
label_39c7fc:
    // 0x39c7fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x39c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39c800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c804: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x39c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x39c808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c80c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x39c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x39c810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39c810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c814: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39c814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39c818: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c81c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x39c820: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c824: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x39c824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x39c828: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c82c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x39C82Cu;
    {
        const bool branch_taken_0x39c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C82Cu;
        // 0x39c830: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c82c) {
            ctx->pc = 0x39CA78u;
            goto label_39ca78;
        }
    }
    ctx->pc = 0x39C834u;
label_39c834:
    // 0x39c834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c838: 0x24a5e640  addiu       $a1, $a1, -0x19C0
    ctx->pc = 0x39c838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960704));
    // 0x39c83c: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39C83Cu;
    SET_GPR_U32(ctx, 31, 0x39C844u);
    ctx->pc = 0x39C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C83Cu;
    // 0x39c840: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39C83Cu, 0x39C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C844u;
label_39c844:
    // 0x39c844: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x39C844u;
    {
        const bool branch_taken_0x39c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C844u;
        // 0x39c848: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c844) {
            ctx->pc = 0x39CA9Cu;
            goto label_39ca9c;
        }
    }
    ctx->pc = 0x39C84Cu;
label_39c84c:
    // 0x39c84c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x39c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x39c850: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x39c850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x39c854: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x39c854u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39c858: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x39c858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x39c85c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x39c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39c860: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x39c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x39c864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39c864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c868: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x39c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x39c86c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x39c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x39c870: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x39c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x39c874: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x39c874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x39c878: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C878u;
    {
        const bool branch_taken_0x39c878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x39C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C878u;
        // 0x39c87c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c878) {
            ctx->pc = 0x39C898u;
            goto label_39c898;
        }
    }
    ctx->pc = 0x39C880u;
    // 0x39c880: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x39c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x39c884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39C884u;
    {
        const bool branch_taken_0x39c884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C884u;
        // 0x39c888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c884) {
            ctx->pc = 0x39C89Cu;
            goto label_39c89c;
        }
    }
    ctx->pc = 0x39C88Cu;
    // 0x39c88c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x39c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x39c890: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x39c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x39c894: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x39c894u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39c898:
    // 0x39c898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c89c:
    // 0x39c89c: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C89Cu;
    {
        const bool branch_taken_0x39c89c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x39c89c) {
            ctx->pc = 0x39C8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C89Cu;
            // 0x39c8a0: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C8B0u;
            goto label_39c8b0;
        }
    }
    ctx->pc = 0x39C8A4u;
    // 0x39c8a4: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x39C8A4u;
    {
        const bool branch_taken_0x39c8a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8A4u;
        // 0x39c8a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8a4) {
            ctx->pc = 0x39C8ECu;
            goto label_39c8ec;
        }
    }
    ctx->pc = 0x39C8ACu;
    // 0x39c8ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x39c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_39c8b0:
    // 0x39c8b0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x39c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x39c8b4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x39c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8bc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x39c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c8c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39c8c4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x39c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x39c8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c8cc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x39c8d0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x39c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x39c8d4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x39c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x39c8d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39c8e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8e4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x39C8E4u;
    {
        const bool branch_taken_0x39c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8E4u;
        // 0x39c8e8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8e4) {
            ctx->pc = 0x39CA6Cu;
            goto label_39ca6c;
        }
    }
    ctx->pc = 0x39C8ECu;
label_39c8ec:
    // 0x39c8ec: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x39C8ECu;
    {
        const bool branch_taken_0x39c8ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x39C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8ECu;
        // 0x39c8f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8ec) {
            ctx->pc = 0x39C9BCu;
            goto label_39c9bc;
        }
    }
    ctx->pc = 0x39C8F4u;
    // 0x39c8f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x39c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x39c8f8: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x39c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x39c8fc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c900: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x39c900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39c904: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39c908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39c90c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39c910: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x39c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x39c914: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39c918: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39c91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39c924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c92c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39c930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39c930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c934: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x39c934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x39c938: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c93c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c93cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c940: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39C940u;
    SET_GPR_U32(ctx, 31, 0x39C948u);
    ctx->pc = 0x39C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C940u;
    // 0x39c944: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39C940u, 0x39C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C948u;
label_39c948:
    // 0x39c948: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x39c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x39c94c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x39C94Cu;
    {
        const bool branch_taken_0x39c94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x39C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C94Cu;
        // 0x39c950: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c94c) {
            ctx->pc = 0x39C970u;
            goto label_39c970;
        }
    }
    ctx->pc = 0x39C954u;
    // 0x39c954: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x39c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x39c958: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C958u;
    {
        const bool branch_taken_0x39c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C958u;
        // 0x39c95c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c958) {
            ctx->pc = 0x39C974u;
            goto label_39c974;
        }
    }
    ctx->pc = 0x39C960u;
    // 0x39c960: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39c960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c964: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x39c964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x39c968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39C968u;
    {
        const bool branch_taken_0x39c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C968u;
        // 0x39c96c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c968) {
            ctx->pc = 0x39C974u;
            goto label_39c974;
        }
    }
    ctx->pc = 0x39C970u;
label_39c970:
    // 0x39c970: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x39c970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_39c974:
    // 0x39c974: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x39c974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39c978: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x39c978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x39c97c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x39c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x39c980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c98c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39c990: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x39c990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x39c994: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39c994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c998: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x39c998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c99c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x39c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x39c9a0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39c9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39c9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39c9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c9a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x39c9ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39c9b0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39c9b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c9b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x39C9B4u;
    {
        const bool branch_taken_0x39c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9B4u;
        // 0x39c9b8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9b4) {
            ctx->pc = 0x39CA78u;
            goto label_39ca78;
        }
    }
    ctx->pc = 0x39C9BCu;
label_39c9bc:
    // 0x39c9bc: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x39C9BCu;
    {
        const bool branch_taken_0x39c9bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x39C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9BCu;
        // 0x39c9c0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9bc) {
            ctx->pc = 0x39CA88u;
            goto label_39ca88;
        }
    }
    ctx->pc = 0x39C9C4u;
    // 0x39c9c4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x39c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x39c9c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39c9c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c9cc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x39c9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c9d0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x39c9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c9d4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x39c9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c9d8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x39c9d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x39c9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c9e0: 0xc0e710c  jal         func_39C430
    ctx->pc = 0x39C9E0u;
    SET_GPR_U32(ctx, 31, 0x39C9E8u);
    ctx->pc = 0x39C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C9E0u;
    // 0x39c9e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C430u, 0x39C9E0u, 0x39C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C9E8u;
label_39c9e8:
    // 0x39c9e8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x39c9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39c9ec: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x39c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x39c9f0: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x39c9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39c9f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39c9f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39c9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ca04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ca04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca08: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x39ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x39ca0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39ca0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca10: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39ca14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39ca14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39ca1c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x39ca1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39ca20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x39ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x39ca24: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39ca24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca28: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CA28u;
    SET_GPR_U32(ctx, 31, 0x39CA30u);
    ctx->pc = 0x39CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA28u;
    // 0x39ca2c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CA28u, 0x39CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA30u;
label_39ca30:
    // 0x39ca30: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x39ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x39ca34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x39ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ca38: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x39ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x39ca3c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x39ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x39ca40: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x39ca40u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x39ca44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39ca48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x39ca48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39ca4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x39ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x39ca50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x39ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39ca54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ca58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ca58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x39ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x39ca60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ca60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca64: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39ca68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39ca68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ca6c:
    // 0x39ca6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39ca6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca70: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x39ca70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39ca74: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39ca74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39ca78:
    // 0x39ca78: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CA78u;
    SET_GPR_U32(ctx, 31, 0x39CA80u);
    ctx->pc = 0x39CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA78u;
    // 0x39ca7c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CA78u, 0x39CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA80u;
label_39ca80:
    // 0x39ca80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39CA80u;
    {
        const bool branch_taken_0x39ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA80u;
        // 0x39ca84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ca80) {
            ctx->pc = 0x39CA9Cu;
            goto label_39ca9c;
        }
    }
    ctx->pc = 0x39CA88u;
label_39ca88:
    // 0x39ca88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca8c: 0x24a5e660  addiu       $a1, $a1, -0x19A0
    ctx->pc = 0x39ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960736));
    // 0x39ca90: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39CA90u;
    SET_GPR_U32(ctx, 31, 0x39CA98u);
    ctx->pc = 0x39CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA90u;
    // 0x39ca94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39CA90u, 0x39CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA98u;
label_39ca98:
    // 0x39ca98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x39ca98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ca9c:
    // 0x39ca9c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x39ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_39caa0:
    // 0x39caa0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x39caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x39caa4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x39CAA4u;
    {
        const bool branch_taken_0x39caa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAA4u;
        // 0x39caa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39caa4) {
            ctx->pc = 0x39CC8Cu;
            goto label_39cc8c;
        }
    }
    ctx->pc = 0x39CAACu;
    // 0x39caac: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x39caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x39cab0: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x39CAB0u;
    {
        const bool branch_taken_0x39cab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAB0u;
        // 0x39cab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cab0) {
            ctx->pc = 0x39CB84u;
            goto label_39cb84;
        }
    }
    ctx->pc = 0x39CAB8u;
    // 0x39cab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39cabc: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39CABCu;
    {
        const bool branch_taken_0x39cabc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CABCu;
        // 0x39cac0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cabc) {
            ctx->pc = 0x39CAFCu;
            goto label_39cafc;
        }
    }
    ctx->pc = 0x39CAC4u;
    // 0x39cac4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x39cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x39cac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cacc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x39caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x39cad0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39cad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cad4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39cad8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39cad8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cadc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39cae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39cae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cae4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x39cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x39cae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39cae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39caec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39caf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39caf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39caf4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x39CAF4u;
    {
        const bool branch_taken_0x39caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAF4u;
        // 0x39caf8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39caf4) {
            ctx->pc = 0x39CB74u;
            goto label_39cb74;
        }
    }
    ctx->pc = 0x39CAFCu;
label_39cafc:
    // 0x39cafc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x39cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x39cb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb04: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x39cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x39cb08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39cb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb0c: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x39cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x39cb10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39cb10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39cb14: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x39cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x39cb18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39cb18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39cb20: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39cb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cb24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39cb28: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39cb28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb2c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x39cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x39cb30: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39cb30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb34: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CB34u;
    SET_GPR_U32(ctx, 31, 0x39CB3Cu);
    ctx->pc = 0x39CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB34u;
    // 0x39cb38: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CB34u, 0x39CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB3Cu;
label_39cb3c:
    // 0x39cb3c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x39cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x39cb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb44: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x39cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x39cb48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39cb48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39cb4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39cb50: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x39cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x39cb54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39cb58: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39cb58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb5c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39cb60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cb64: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x39cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x39cb68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39cb68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb6c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39cb6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cb70: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x39cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_39cb74:
    // 0x39cb74: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CB74u;
    SET_GPR_U32(ctx, 31, 0x39CB7Cu);
    ctx->pc = 0x39CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB74u;
    // 0x39cb78: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CB74u, 0x39CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB7Cu;
label_39cb7c:
    // 0x39cb7c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x39CB7Cu;
    {
        const bool branch_taken_0x39cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB7Cu;
        // 0x39cb80: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb7c) {
            ctx->pc = 0x39CC90u;
            goto label_39cc90;
        }
    }
    ctx->pc = 0x39CB84u;
label_39cb84:
    // 0x39cb84: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x39CB84u;
    {
        const bool branch_taken_0x39cb84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB84u;
        // 0x39cb88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb84) {
            ctx->pc = 0x39CBDCu;
            goto label_39cbdc;
        }
    }
    ctx->pc = 0x39CB8Cu;
    // 0x39cb8c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x39cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x39cb90: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x39CB90u;
    {
        const bool branch_taken_0x39cb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cb90) {
            ctx->pc = 0x39CB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CB90u;
            // 0x39cb94: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CB9Cu;
            goto label_39cb9c;
        }
    }
    ctx->pc = 0x39CB98u;
    // 0x39cb98: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x39cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_39cb9c:
    // 0x39cb9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x39cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x39cba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cba4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x39cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x39cba8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39cba8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39cbb0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39cbb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbb4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39cbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39cbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbbc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x39cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x39cbc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39cbc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbc4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39cbc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39cbc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbcc: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CBCCu;
    SET_GPR_U32(ctx, 31, 0x39CBD4u);
    ctx->pc = 0x39CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBCCu;
    // 0x39cbd0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CBCCu, 0x39CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBD4u;
label_39cbd4:
    // 0x39cbd4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x39CBD4u;
    {
        const bool branch_taken_0x39cbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBD4u;
        // 0x39cbd8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cbd4) {
            ctx->pc = 0x39CC90u;
            goto label_39cc90;
        }
    }
    ctx->pc = 0x39CBDCu;
label_39cbdc:
    // 0x39cbdc: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x39CBDCu;
    {
        const bool branch_taken_0x39cbdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x39CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CBDCu;
        // 0x39cbe0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cbdc) {
            ctx->pc = 0x39CC7Cu;
            goto label_39cc7c;
        }
    }
    ctx->pc = 0x39CBE4u;
    // 0x39cbe4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x39cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x39cbe8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x39CBE8u;
    {
        const bool branch_taken_0x39cbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cbe8) {
            ctx->pc = 0x39CBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CBE8u;
            // 0x39cbec: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CBF4u;
            goto label_39cbf4;
        }
    }
    ctx->pc = 0x39CBF0u;
    // 0x39cbf0: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x39cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_39cbf4:
    // 0x39cbf4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x39cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x39cbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbfc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x39cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x39cc00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39cc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39cc08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39cc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc0c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x39cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x39cc10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39cc10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39cc18: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x39cc18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cc1c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x39cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x39cc20: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39cc20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc24: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CC24u;
    SET_GPR_U32(ctx, 31, 0x39CC2Cu);
    ctx->pc = 0x39CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC24u;
    // 0x39cc28: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CC24u, 0x39CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC2Cu;
label_39cc2c:
    // 0x39cc2c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x39cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x39cc30: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x39CC30u;
    {
        const bool branch_taken_0x39cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cc30) {
            ctx->pc = 0x39CC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CC30u;
            // 0x39cc34: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CC3Cu;
            goto label_39cc3c;
        }
    }
    ctx->pc = 0x39CC38u;
    // 0x39cc38: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x39cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_39cc3c:
    // 0x39cc3c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x39cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x39cc40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc44: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x39cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x39cc48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x39cc48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc4c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x39cc50: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x39cc50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39cc58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39cc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc5c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x39cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x39cc60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39cc60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc64: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x39cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x39cc68: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x39cc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cc6c: 0xc0e73c4  jal         func_39CF10
    ctx->pc = 0x39CC6Cu;
    SET_GPR_U32(ctx, 31, 0x39CC74u);
    ctx->pc = 0x39CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC6Cu;
    // 0x39cc70: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CF10u, 0x39CC6Cu, 0x39CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC74u;
label_39cc74:
    // 0x39cc74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39CC74u;
    {
        const bool branch_taken_0x39cc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC74u;
        // 0x39cc78: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc74) {
            ctx->pc = 0x39CC90u;
            goto label_39cc90;
        }
    }
    ctx->pc = 0x39CC7Cu;
label_39cc7c:
    // 0x39cc7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc80: 0x24a5e680  addiu       $a1, $a1, -0x1980
    ctx->pc = 0x39cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960768));
    // 0x39cc84: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39CC84u;
    SET_GPR_U32(ctx, 31, 0x39CC8Cu);
    ctx->pc = 0x39CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC84u;
    // 0x39cc88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39CC84u, 0x39CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC8Cu;
label_39cc8c:
    // 0x39cc8c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x39cc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_39cc90:
    // 0x39cc90: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x39cc90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x39cc94: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x39cc94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39cc98: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x39cc98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39cc9c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x39cc9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39cca0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x39cca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39cca4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x39cca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39cca8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x39cca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39ccac: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x39ccacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39ccb0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x39ccb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39ccb4: 0x3e00008  jr          $ra
    ctx->pc = 0x39CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCB4u;
        // 0x39ccb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CCBCu;
    // 0x39ccbc: 0x0  nop
    ctx->pc = 0x39ccbcu;
    // NOP
    ctx->pc = 0x39ccc0u;
}
