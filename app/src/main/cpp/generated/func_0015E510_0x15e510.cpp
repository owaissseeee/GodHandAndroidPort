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

// Function: func_0015E510
// Address: 0x15e510 - 0x15e708
void func_0015E510_0x15e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015E510_0x15e510");
#endif

    ctx->pc = 0x15e510u;

    // 0x15e510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e514: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x15e514u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e518: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15e51c: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x15e51cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e520: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15e524: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x15e524u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e52c: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x15e52cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e530: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15e530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15e534: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x15e534u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e538: 0x2d82003b  sltiu       $v0, $t4, 0x3B
    ctx->pc = 0x15e538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x15e53c: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x15E53Cu;
    {
        const bool branch_taken_0x15e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E53Cu;
        // 0x15e540: 0x7fb40000  sq          $s4, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e53c) {
            ctx->pc = 0x15E6ECu;
            goto label_15e6ec;
        }
    }
    ctx->pc = 0x15E544u;
    // 0x15e544: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x15e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x15e548: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x15e548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x15e54c: 0x2442eea0  addiu       $v0, $v0, -0x1160
    ctx->pc = 0x15e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x15e550: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e554: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e558: 0x800008  jr          $a0
    ctx->pc = 0x15E558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E560u: goto label_15e560;
            case 0x15E568u: goto label_15e568;
            case 0x15E570u: goto label_15e570;
            case 0x15E578u: goto label_15e578;
            case 0x15E6ECu: goto label_15e6ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E558u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15E560u;
label_15e560:
    // 0x15e560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E560u;
    {
        const bool branch_taken_0x15e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E560u;
        // 0x15e564: 0xd2080  sll         $a0, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e560) {
            ctx->pc = 0x15E584u;
            goto label_15e584;
        }
    }
    ctx->pc = 0x15E568u;
label_15e568:
    // 0x15e568: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E568u;
    {
        const bool branch_taken_0x15e568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E568u;
        // 0x15e56c: 0xd2040  sll         $a0, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e568) {
            ctx->pc = 0x15E584u;
            goto label_15e584;
        }
    }
    ctx->pc = 0x15E570u;
label_15e570:
    // 0x15e570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E570u;
    {
        const bool branch_taken_0x15e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E570u;
        // 0x15e574: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e570) {
            ctx->pc = 0x15E584u;
            goto label_15e584;
        }
    }
    ctx->pc = 0x15E578u;
label_15e578:
    // 0x15e578: 0xd17c2  srl         $v0, $t5, 31
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x15e57c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x15e580: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_15e584:
    // 0x15e584: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15e588: 0x8b3018  mult        $a2, $a0, $t3
    ctx->pc = 0x15e588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15e58c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15e590: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E590u;
    {
        const bool branch_taken_0x15e590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e590) {
            ctx->pc = 0x15E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E590u;
            // 0x15e594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E598u;
            goto label_15e598;
        }
    }
    ctx->pc = 0x15E598u;
label_15e598:
    // 0x15e598: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x15e598u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15e59c: 0x1012  mflo        $v0
    ctx->pc = 0x15e59cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15e5a0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x15e5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15e5a4: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x15e5a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15e5a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E5A8u;
    {
        const bool branch_taken_0x15e5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5a8) {
            ctx->pc = 0x15E5C0u;
            goto label_15e5c0;
        }
    }
    ctx->pc = 0x15E5B0u;
    // 0x15e5b0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E5B0u;
    {
        const bool branch_taken_0x15e5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5b0) {
            ctx->pc = 0x15E5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E5B0u;
            // 0x15e5b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E5B8u;
            goto label_15e5b8;
        }
    }
    ctx->pc = 0x15E5B8u;
label_15e5b8:
    // 0x15e5b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E5B8u;
    {
        const bool branch_taken_0x15e5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5B8u;
        // 0x15e5bc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5b8) {
            ctx->pc = 0x15E5C8u;
            goto label_15e5c8;
        }
    }
    ctx->pc = 0x15E5C0u;
label_15e5c0:
    // 0x15e5c0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E5C0u;
    {
        const bool branch_taken_0x15e5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c0) {
            ctx->pc = 0x15E5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E5C0u;
            // 0x15e5c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E5C8u;
            goto label_15e5c8;
        }
    }
    ctx->pc = 0x15E5C8u;
label_15e5c8:
    // 0x15e5c8: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x15e5cc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x15e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x15e5d0: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x15e5d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x15e5d8: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x15e5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x15e5dc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x15e5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x15e5e0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x15e5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x15e5e4: 0xe483c  dsll32      $t1, $t6, 0
    ctx->pc = 0x15e5e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) << (32 + 0));
    // 0x15e5e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15e5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15e5ec: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x15e5ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x15e5f0: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x15e5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x15e5f4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15e5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15e5f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15e5fc: 0xc563c  dsll32      $t2, $t4, 24
    ctx->pc = 0x15e5fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) << (32 + 24));
    // 0x15e600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15e604: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15e604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e608: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x15e608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x15e60c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x15e610: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x15e610u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x15e614: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x15e614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15e618: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15e618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15e61c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x15e61cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x15e620: 0x1ab5825  or          $t3, $t5, $t3
    ctx->pc = 0x15e620u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x15e624: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15e624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15e628: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15e628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15e62c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15e62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15e630: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x15e630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x15e634: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x15e638: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x15e63c: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15e640: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15e644: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15e648: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x15e648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15e64c: 0x35080006  ori         $t0, $t0, 0x6
    ctx->pc = 0x15e64cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    // 0x15e650: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15e650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e654: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x15e658: 0x34e78004  ori         $a3, $a3, 0x8004
    ctx->pc = 0x15e658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32772);
    // 0x15e65c: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15e660: 0x240d0051  addiu       $t5, $zero, 0x51
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x15e664: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x15e668: 0x240f0053  addiu       $t7, $zero, 0x53
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x15e66c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x15e670: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x15e670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x15e674: 0x358c0002  ori         $t4, $t4, 0x2
    ctx->pc = 0x15e674u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x15e678: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x15e678u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e67c: 0x118b7c  dsll32      $s1, $s1, 13
    ctx->pc = 0x15e67cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 13));
    // 0x15e680: 0x36318001  ori         $s1, $s1, 0x8001
    ctx->pc = 0x15e680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32769);
    // 0x15e684: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15e688: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x15e688u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x15e68c: 0xff0200a8  sd          $v0, 0xA8($t8)
    ctx->pc = 0x15e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 168), GPR_U64(ctx, 2));
    // 0x15e690: 0xaf08000c  sw          $t0, 0xC($t8)
    ctx->pc = 0x15e690u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 8));
    // 0x15e694: 0xff070010  sd          $a3, 0x10($t8)
    ctx->pc = 0x15e694u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 7));
    // 0x15e698: 0xff090020  sd          $t1, 0x20($t8)
    ctx->pc = 0x15e698u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 9));
    // 0x15e69c: 0xff0a0028  sd          $t2, 0x28($t8)
    ctx->pc = 0x15e69cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 10));
    // 0x15e6a0: 0xff0d0038  sd          $t5, 0x38($t8)
    ctx->pc = 0x15e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 13));
    // 0x15e6a4: 0xff0b0040  sd          $t3, 0x40($t8)
    ctx->pc = 0x15e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 11));
    // 0x15e6a8: 0xff0e0048  sd          $t6, 0x48($t8)
    ctx->pc = 0x15e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 14));
    // 0x15e6ac: 0xff0f0058  sd          $t7, 0x58($t8)
    ctx->pc = 0x15e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 15));
    // 0x15e6b0: 0xff050060  sd          $a1, 0x60($t8)
    ctx->pc = 0x15e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 5));
    // 0x15e6b4: 0xff040070  sd          $a0, 0x70($t8)
    ctx->pc = 0x15e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 4));
    // 0x15e6b8: 0xaf06007c  sw          $a2, 0x7C($t8)
    ctx->pc = 0x15e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 124), GPR_U32(ctx, 6));
    // 0x15e6bc: 0xff100080  sd          $s0, 0x80($t8)
    ctx->pc = 0x15e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 16));
    // 0x15e6c0: 0xaf130088  sw          $s3, 0x88($t8)
    ctx->pc = 0x15e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 136), GPR_U32(ctx, 19));
    // 0x15e6c4: 0xaf0c008c  sw          $t4, 0x8C($t8)
    ctx->pc = 0x15e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 140), GPR_U32(ctx, 12));
    // 0x15e6c8: 0xff110090  sd          $s1, 0x90($t8)
    ctx->pc = 0x15e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 17));
    // 0x15e6cc: 0xff140098  sd          $s4, 0x98($t8)
    ctx->pc = 0x15e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 20));
    // 0x15e6d0: 0xff1200a0  sd          $s2, 0xA0($t8)
    ctx->pc = 0x15e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 160), GPR_U64(ctx, 18));
    // 0x15e6d4: 0xaf130008  sw          $s3, 0x8($t8)
    ctx->pc = 0x15e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 19));
    // 0x15e6d8: 0xff140018  sd          $s4, 0x18($t8)
    ctx->pc = 0x15e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 20));
    // 0x15e6dc: 0xff000030  sd          $zero, 0x30($t8)
    ctx->pc = 0x15e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 0));
    // 0x15e6e0: 0xff000050  sd          $zero, 0x50($t8)
    ctx->pc = 0x15e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 0));
    // 0x15e6e4: 0xff000068  sd          $zero, 0x68($t8)
    ctx->pc = 0x15e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 0));
    // 0x15e6e8: 0xaf000078  sw          $zero, 0x78($t8)
    ctx->pc = 0x15e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 120), GPR_U32(ctx, 0));
label_15e6ec:
    // 0x15e6ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15e6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e6f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15e6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e6f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e6f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15e6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e6fc: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x15e6fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e700: 0x3e00008  jr          $ra
    ctx->pc = 0x15E700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E700u;
        // 0x15e704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E708u;
}
