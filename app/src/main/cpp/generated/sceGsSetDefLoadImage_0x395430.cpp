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

// Function: sceGsSetDefLoadImage
// Address: 0x395430 - 0x395618
void sceGsSetDefLoadImage_0x395430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefLoadImage_0x395430");
#endif

    switch (ctx->pc) {
        case 0x3954f4u: goto label_3954f4;
        default: break;
    }

    ctx->pc = 0x395430u;

    // 0x395430: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x395430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x395434: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x395434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x395438: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x395438u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x39543c: 0x76c03  sra         $t5, $a3, 16
    ctx->pc = 0x39543cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 7), 16));
    // 0x395440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395444: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x395444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x395448: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x395448u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x39544c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x39544cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x395450: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x395450u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x395454: 0x66403  sra         $t4, $a2, 16
    ctx->pc = 0x395454u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 16));
    // 0x395458: 0x87c03  sra         $t7, $t0, 16
    ctx->pc = 0x395458u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 8), 16));
    // 0x39545c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395460: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x395460u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x395464: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x395464u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
    // 0x395468: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x395468u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x39546c: 0xb4403  sra         $t0, $t3, 16
    ctx->pc = 0x39546cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
    // 0x395470: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x395470u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395474: 0x2da2003b  sltiu       $v0, $t5, 0x3B
    ctx->pc = 0x395474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x395478: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x395478u;
    {
        const bool branch_taken_0x395478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395478u;
        // 0x39547c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395478) {
            ctx->pc = 0x3954DCu;
            goto label_3954dc;
        }
    }
    ctx->pc = 0x395480u;
    // 0x395480: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x395480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x395484: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x395484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x395488: 0x2442dc50  addiu       $v0, $v0, -0x23B0
    ctx->pc = 0x395488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
    // 0x39548c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x395490: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x395490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395494: 0x800008  jr          $a0
    ctx->pc = 0x395494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39549Cu: goto label_39549c;
            case 0x3954A8u: goto label_3954a8;
            case 0x3954BCu: goto label_3954bc;
            case 0x3954C8u: goto label_3954c8;
            case 0x3954D4u: goto label_3954d4;
            case 0x3954DCu: goto label_3954dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395494u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39549Cu;
label_39549c:
    // 0x39549c: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x39549cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3954a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3954A0u;
    {
        const bool branch_taken_0x3954a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954A0u;
        // 0x3954a4: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954a0) {
            ctx->pc = 0x3954DCu;
            goto label_3954dc;
        }
    }
    ctx->pc = 0x3954A8u;
label_3954a8:
    // 0x3954a8: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x3954a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3954ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3954acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3954b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3954b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3954b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3954B4u;
    {
        const bool branch_taken_0x3954b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954B4u;
        // 0x3954b8: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954b4) {
            ctx->pc = 0x3954DCu;
            goto label_3954dc;
        }
    }
    ctx->pc = 0x3954BCu;
label_3954bc:
    // 0x3954bc: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x3954bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3954c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3954C0u;
    {
        const bool branch_taken_0x3954c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954C0u;
        // 0x3954c4: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954c0) {
            ctx->pc = 0x3954DCu;
            goto label_3954dc;
        }
    }
    ctx->pc = 0x3954C8u;
label_3954c8:
    // 0x3954c8: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x3954c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3954cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3954CCu;
    {
        const bool branch_taken_0x3954cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954CCu;
        // 0x3954d0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954cc) {
            ctx->pc = 0x3954DCu;
            goto label_3954dc;
        }
    }
    ctx->pc = 0x3954D4u;
label_3954d4:
    // 0x3954d4: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x3954d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3954d8: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x3954d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_3954dc:
    // 0x3954dc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x3954dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3954e0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3954e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3954e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3954E4u;
    {
        const bool branch_taken_0x3954e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954E4u;
        // 0x3954e8: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954e4) {
            ctx->pc = 0x3954FCu;
            goto label_3954fc;
        }
    }
    ctx->pc = 0x3954ECu;
    // 0x3954ec: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3954ECu;
    SET_GPR_U32(ctx, 31, 0x3954F4u);
    ctx->pc = 0x3954F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3954ECu;
    // 0x3954f0: 0x2484dc20  addiu       $a0, $a0, -0x23E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3954ECu, 0x3954F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3954F4u;
label_3954f4:
    // 0x3954f4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3954F4u;
    {
        const bool branch_taken_0x3954f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954F4u;
        // 0x3954f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954f4) {
            ctx->pc = 0x395608u;
            goto label_395608;
        }
    }
    ctx->pc = 0x3954FCu;
label_3954fc:
    // 0x3954fc: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x3954fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x395500: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x395500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x395504: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x395504u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
    // 0x395508: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x395508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x39550c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39550cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x395510: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x395510u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x395514: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x395514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x395518: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x395518u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x39551c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x39551cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x395520: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x395520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x395524: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x395524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x395528: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x395528u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x39552c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x39552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x395530: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x395530u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x395534: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x395534u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x395538: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x395538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x39553c: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x39553cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x395540: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x395540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x395544: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395548: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x395548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39554c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x39554cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x395550: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x395550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x395554: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x395558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x395558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39555c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x39555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x395560: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x395560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x395564: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x395564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x395568: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x395568u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x39556c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x39556cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x395570: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x395570u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
    // 0x395574: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x395574u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x395578: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x395578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x39557c: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x39557cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x395580: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x395580u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
    // 0x395584: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x395584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x395588: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x395588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x39558c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x39558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x395590: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x395590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x395594: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x395594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x395598: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x395598u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
    // 0x39559c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x39559cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x3955a0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3955a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3955a4: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x3955a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x3955a8: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x3955a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x3955ac: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x3955acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x3955b0: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x3955b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x3955b4: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x3955b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
    // 0x3955b8: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x3955b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
    // 0x3955bc: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x3955bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x3955c0: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x3955c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x3955c4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x3955c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3955c8: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3955c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3955cc: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x3955ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3955d0: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x3955d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3955d4: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x3955d4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
    // 0x3955d8: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x3955d8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x3955dc: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x3955dcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x3955e0: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x3955e0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
    // 0x3955e4: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x3955e4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x3955e8: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x3955e8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x3955ec: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x3955ecu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x3955f0: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x3955f0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
    // 0x3955f4: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x3955f4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
    // 0x3955f8: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x3955f8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
    // 0x3955fc: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x3955fcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x395600: 0xf  sync
    ctx->pc = 0x395600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x395604: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x395604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_395608:
    // 0x395608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39560c: 0x3e00008  jr          $ra
    ctx->pc = 0x39560Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39560Cu;
        // 0x395610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39560Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395614u;
    // 0x395614: 0x0  nop
    ctx->pc = 0x395614u;
    // NOP
    ctx->pc = 0x395618u;
}
