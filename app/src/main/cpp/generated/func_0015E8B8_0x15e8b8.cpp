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

// Function: func_0015E8B8
// Address: 0x15e8b8 - 0x15eac8
void func_0015E8B8_0x15e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015E8B8_0x15e8b8");
#endif

    ctx->pc = 0x15e8b8u;

    // 0x15e8b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e8bc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x15e8bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15e8c4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x15e8c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15e8cc: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x15e8ccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e8d4: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x15e8d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15e8dc: 0x2d82003b  sltiu       $v0, $t4, 0x3B
    ctx->pc = 0x15e8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x15e8e0: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x15E8E0u;
    {
        const bool branch_taken_0x15e8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8E0u;
        // 0x15e8e4: 0x7fb40000  sq          $s4, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8e0) {
            ctx->pc = 0x15EAACu;
            goto label_15eaac;
        }
    }
    ctx->pc = 0x15E8E8u;
    // 0x15e8e8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x15e8ec: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x15e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x15e8f0: 0x2442ef90  addiu       $v0, $v0, -0x1070
    ctx->pc = 0x15e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x15e8f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e8f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e8fc: 0x800008  jr          $a0
    ctx->pc = 0x15E8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E904u: goto label_15e904;
            case 0x15E90Cu: goto label_15e90c;
            case 0x15E914u: goto label_15e914;
            case 0x15E91Cu: goto label_15e91c;
            case 0x15EAACu: goto label_15eaac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15E904u;
label_15e904:
    // 0x15e904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E904u;
    {
        const bool branch_taken_0x15e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E904u;
        // 0x15e908: 0xd2080  sll         $a0, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e904) {
            ctx->pc = 0x15E928u;
            goto label_15e928;
        }
    }
    ctx->pc = 0x15E90Cu;
label_15e90c:
    // 0x15e90c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E90Cu;
    {
        const bool branch_taken_0x15e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E90Cu;
        // 0x15e910: 0xd2040  sll         $a0, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e90c) {
            ctx->pc = 0x15E928u;
            goto label_15e928;
        }
    }
    ctx->pc = 0x15E914u;
label_15e914:
    // 0x15e914: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E914u;
    {
        const bool branch_taken_0x15e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E914u;
        // 0x15e918: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e914) {
            ctx->pc = 0x15E928u;
            goto label_15e928;
        }
    }
    ctx->pc = 0x15E91Cu;
label_15e91c:
    // 0x15e91c: 0xd17c2  srl         $v0, $t5, 31
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x15e920: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x15e924: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_15e928:
    // 0x15e928: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15e92c: 0x894818  mult        $t1, $a0, $t1
    ctx->pc = 0x15e92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15e930: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15e934: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E934u;
    {
        const bool branch_taken_0x15e934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e934) {
            ctx->pc = 0x15E938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E934u;
            // 0x15e938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E93Cu;
            goto label_15e93c;
        }
    }
    ctx->pc = 0x15E93Cu;
label_15e93c:
    // 0x15e93c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x15e93cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15e940: 0x1012  mflo        $v0
    ctx->pc = 0x15e940u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15e944: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x15e944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15e948: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x15e948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15e94c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E94Cu;
    {
        const bool branch_taken_0x15e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E94Cu;
        // 0x15e950: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e94c) {
            ctx->pc = 0x15E968u;
            goto label_15e968;
        }
    }
    ctx->pc = 0x15E954u;
    // 0x15e954: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E954u;
    {
        const bool branch_taken_0x15e954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e954) {
            ctx->pc = 0x15E958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E954u;
            // 0x15e958: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E95Cu;
label_15e95c:
    // 0x15e95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e960: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E960u;
    {
        const bool branch_taken_0x15e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E960u;
        // 0x15e964: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e960) {
            ctx->pc = 0x15E97Cu;
            goto label_15e97c;
        }
    }
    ctx->pc = 0x15E968u;
label_15e968:
    // 0x15e968: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15e96c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E96Cu;
    {
        const bool branch_taken_0x15e96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e96c) {
            ctx->pc = 0x15E970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E96Cu;
            // 0x15e970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E974u;
            goto label_15e974;
        }
    }
    ctx->pc = 0x15E974u;
label_15e974:
    // 0x15e974: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e978: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x15e978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15e97c:
    // 0x15e97c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x15e97cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15e980: 0x1012  mflo        $v0
    ctx->pc = 0x15e980u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15e984: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x15e984u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e988: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x15e988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x15e98c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x15e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x15e990: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x15e994: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x15e998: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x15e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x15e99c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x15e99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x15e9a0: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x15e9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x15e9a4: 0xe483c  dsll32      $t1, $t6, 0
    ctx->pc = 0x15e9a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) << (32 + 0));
    // 0x15e9a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15e9ac: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x15e9acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x15e9b0: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x15e9b4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15e9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15e9b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15e9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15e9bc: 0xc563c  dsll32      $t2, $t4, 24
    ctx->pc = 0x15e9bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) << (32 + 24));
    // 0x15e9c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15e9c4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15e9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e9c8: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x15e9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x15e9cc: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x15e9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x15e9d0: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x15e9d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x15e9d4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x15e9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15e9d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15e9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15e9dc: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x15e9dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x15e9e0: 0x1ab5825  or          $t3, $t5, $t3
    ctx->pc = 0x15e9e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x15e9e4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15e9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15e9e8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15e9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15e9ec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15e9ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15e9f0: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x15e9f4: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x15e9f8: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x15e9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x15e9fc: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15ea00: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15ea04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15ea08: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x15ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15ea0c: 0x35080006  ori         $t0, $t0, 0x6
    ctx->pc = 0x15ea0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    // 0x15ea10: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15ea10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15ea14: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x15ea14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x15ea18: 0x34e78004  ori         $a3, $a3, 0x8004
    ctx->pc = 0x15ea18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32772);
    // 0x15ea1c: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x15ea1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15ea20: 0x240d0051  addiu       $t5, $zero, 0x51
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x15ea24: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x15ea24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x15ea28: 0x240f0053  addiu       $t7, $zero, 0x53
    ctx->pc = 0x15ea28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x15ea2c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x15ea30: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x15ea30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x15ea34: 0x358c0002  ori         $t4, $t4, 0x2
    ctx->pc = 0x15ea34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x15ea38: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15ea3c: 0x118b7c  dsll32      $s1, $s1, 13
    ctx->pc = 0x15ea3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 13));
    // 0x15ea40: 0x36318001  ori         $s1, $s1, 0x8001
    ctx->pc = 0x15ea40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32769);
    // 0x15ea44: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x15ea44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15ea48: 0xff0300b0  sd          $v1, 0xB0($t8)
    ctx->pc = 0x15ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 176), GPR_U64(ctx, 3));
    // 0x15ea4c: 0xff020158  sd          $v0, 0x158($t8)
    ctx->pc = 0x15ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 344), GPR_U64(ctx, 2));
    // 0x15ea50: 0xaf0800bc  sw          $t0, 0xBC($t8)
    ctx->pc = 0x15ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 188), GPR_U32(ctx, 8));
    // 0x15ea54: 0xff0700c0  sd          $a3, 0xC0($t8)
    ctx->pc = 0x15ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 192), GPR_U64(ctx, 7));
    // 0x15ea58: 0xff0900d0  sd          $t1, 0xD0($t8)
    ctx->pc = 0x15ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 208), GPR_U64(ctx, 9));
    // 0x15ea5c: 0xff0a00d8  sd          $t2, 0xD8($t8)
    ctx->pc = 0x15ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 216), GPR_U64(ctx, 10));
    // 0x15ea60: 0xff0d00e8  sd          $t5, 0xE8($t8)
    ctx->pc = 0x15ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 232), GPR_U64(ctx, 13));
    // 0x15ea64: 0xff0b00f0  sd          $t3, 0xF0($t8)
    ctx->pc = 0x15ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 240), GPR_U64(ctx, 11));
    // 0x15ea68: 0xff0e00f8  sd          $t6, 0xF8($t8)
    ctx->pc = 0x15ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 248), GPR_U64(ctx, 14));
    // 0x15ea6c: 0xff0f0108  sd          $t7, 0x108($t8)
    ctx->pc = 0x15ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 264), GPR_U64(ctx, 15));
    // 0x15ea70: 0xff050110  sd          $a1, 0x110($t8)
    ctx->pc = 0x15ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 272), GPR_U64(ctx, 5));
    // 0x15ea74: 0xff040120  sd          $a0, 0x120($t8)
    ctx->pc = 0x15ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 288), GPR_U64(ctx, 4));
    // 0x15ea78: 0xaf06012c  sw          $a2, 0x12C($t8)
    ctx->pc = 0x15ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 300), GPR_U32(ctx, 6));
    // 0x15ea7c: 0xff100130  sd          $s0, 0x130($t8)
    ctx->pc = 0x15ea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 304), GPR_U64(ctx, 16));
    // 0x15ea80: 0xaf130138  sw          $s3, 0x138($t8)
    ctx->pc = 0x15ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 312), GPR_U32(ctx, 19));
    // 0x15ea84: 0xaf0c013c  sw          $t4, 0x13C($t8)
    ctx->pc = 0x15ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 316), GPR_U32(ctx, 12));
    // 0x15ea88: 0xff110140  sd          $s1, 0x140($t8)
    ctx->pc = 0x15ea88u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 320), GPR_U64(ctx, 17));
    // 0x15ea8c: 0xff140148  sd          $s4, 0x148($t8)
    ctx->pc = 0x15ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 328), GPR_U64(ctx, 20));
    // 0x15ea90: 0xff120150  sd          $s2, 0x150($t8)
    ctx->pc = 0x15ea90u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 336), GPR_U64(ctx, 18));
    // 0x15ea94: 0xaf1300b8  sw          $s3, 0xB8($t8)
    ctx->pc = 0x15ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 184), GPR_U32(ctx, 19));
    // 0x15ea98: 0xff1400c8  sd          $s4, 0xC8($t8)
    ctx->pc = 0x15ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 200), GPR_U64(ctx, 20));
    // 0x15ea9c: 0xff0000e0  sd          $zero, 0xE0($t8)
    ctx->pc = 0x15ea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 224), GPR_U64(ctx, 0));
    // 0x15eaa0: 0xff000100  sd          $zero, 0x100($t8)
    ctx->pc = 0x15eaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 256), GPR_U64(ctx, 0));
    // 0x15eaa4: 0xff000118  sd          $zero, 0x118($t8)
    ctx->pc = 0x15eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 280), GPR_U64(ctx, 0));
    // 0x15eaa8: 0xaf000128  sw          $zero, 0x128($t8)
    ctx->pc = 0x15eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 296), GPR_U32(ctx, 0));
label_15eaac:
    // 0x15eaac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15eaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15eab0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15eab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15eab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15eab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15eab8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15eab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15eabc: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x15eabcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eac0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC0u;
        // 0x15eac4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EAC8u;
}
