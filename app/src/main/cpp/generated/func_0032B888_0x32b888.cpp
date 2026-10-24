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

// Function: func_0032B888
// Address: 0x32b888 - 0x32ba30
void func_0032B888_0x32b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B888_0x32b888");
#endif

    switch (ctx->pc) {
        case 0x32b888u: goto label_32b888;
        case 0x32b88cu: goto label_32b88c;
        case 0x32b890u: goto label_32b890;
        case 0x32b894u: goto label_32b894;
        case 0x32b898u: goto label_32b898;
        case 0x32b89cu: goto label_32b89c;
        case 0x32b8a0u: goto label_32b8a0;
        case 0x32b8a4u: goto label_32b8a4;
        case 0x32b8a8u: goto label_32b8a8;
        case 0x32b8acu: goto label_32b8ac;
        case 0x32b8b0u: goto label_32b8b0;
        case 0x32b8b4u: goto label_32b8b4;
        case 0x32b8b8u: goto label_32b8b8;
        case 0x32b8bcu: goto label_32b8bc;
        case 0x32b8c0u: goto label_32b8c0;
        case 0x32b8c4u: goto label_32b8c4;
        case 0x32b8c8u: goto label_32b8c8;
        case 0x32b8ccu: goto label_32b8cc;
        case 0x32b8d0u: goto label_32b8d0;
        case 0x32b8d4u: goto label_32b8d4;
        case 0x32b8d8u: goto label_32b8d8;
        case 0x32b8dcu: goto label_32b8dc;
        case 0x32b8e0u: goto label_32b8e0;
        case 0x32b8e4u: goto label_32b8e4;
        case 0x32b8e8u: goto label_32b8e8;
        case 0x32b8ecu: goto label_32b8ec;
        case 0x32b8f0u: goto label_32b8f0;
        case 0x32b8f4u: goto label_32b8f4;
        case 0x32b8f8u: goto label_32b8f8;
        case 0x32b8fcu: goto label_32b8fc;
        case 0x32b900u: goto label_32b900;
        case 0x32b904u: goto label_32b904;
        case 0x32b908u: goto label_32b908;
        case 0x32b90cu: goto label_32b90c;
        case 0x32b910u: goto label_32b910;
        case 0x32b914u: goto label_32b914;
        case 0x32b918u: goto label_32b918;
        case 0x32b91cu: goto label_32b91c;
        case 0x32b920u: goto label_32b920;
        case 0x32b924u: goto label_32b924;
        case 0x32b928u: goto label_32b928;
        case 0x32b92cu: goto label_32b92c;
        case 0x32b930u: goto label_32b930;
        case 0x32b934u: goto label_32b934;
        case 0x32b938u: goto label_32b938;
        case 0x32b93cu: goto label_32b93c;
        case 0x32b940u: goto label_32b940;
        case 0x32b944u: goto label_32b944;
        case 0x32b948u: goto label_32b948;
        case 0x32b94cu: goto label_32b94c;
        case 0x32b950u: goto label_32b950;
        case 0x32b954u: goto label_32b954;
        case 0x32b958u: goto label_32b958;
        case 0x32b95cu: goto label_32b95c;
        case 0x32b960u: goto label_32b960;
        case 0x32b964u: goto label_32b964;
        case 0x32b968u: goto label_32b968;
        case 0x32b96cu: goto label_32b96c;
        case 0x32b970u: goto label_32b970;
        case 0x32b974u: goto label_32b974;
        case 0x32b978u: goto label_32b978;
        case 0x32b97cu: goto label_32b97c;
        case 0x32b980u: goto label_32b980;
        case 0x32b984u: goto label_32b984;
        case 0x32b988u: goto label_32b988;
        case 0x32b98cu: goto label_32b98c;
        case 0x32b990u: goto label_32b990;
        case 0x32b994u: goto label_32b994;
        case 0x32b998u: goto label_32b998;
        case 0x32b99cu: goto label_32b99c;
        case 0x32b9a0u: goto label_32b9a0;
        case 0x32b9a4u: goto label_32b9a4;
        case 0x32b9a8u: goto label_32b9a8;
        case 0x32b9acu: goto label_32b9ac;
        case 0x32b9b0u: goto label_32b9b0;
        case 0x32b9b4u: goto label_32b9b4;
        case 0x32b9b8u: goto label_32b9b8;
        case 0x32b9bcu: goto label_32b9bc;
        case 0x32b9c0u: goto label_32b9c0;
        case 0x32b9c4u: goto label_32b9c4;
        case 0x32b9c8u: goto label_32b9c8;
        case 0x32b9ccu: goto label_32b9cc;
        case 0x32b9d0u: goto label_32b9d0;
        case 0x32b9d4u: goto label_32b9d4;
        case 0x32b9d8u: goto label_32b9d8;
        case 0x32b9dcu: goto label_32b9dc;
        case 0x32b9e0u: goto label_32b9e0;
        case 0x32b9e4u: goto label_32b9e4;
        case 0x32b9e8u: goto label_32b9e8;
        case 0x32b9ecu: goto label_32b9ec;
        case 0x32b9f0u: goto label_32b9f0;
        case 0x32b9f4u: goto label_32b9f4;
        case 0x32b9f8u: goto label_32b9f8;
        case 0x32b9fcu: goto label_32b9fc;
        case 0x32ba00u: goto label_32ba00;
        case 0x32ba04u: goto label_32ba04;
        case 0x32ba08u: goto label_32ba08;
        case 0x32ba0cu: goto label_32ba0c;
        case 0x32ba10u: goto label_32ba10;
        case 0x32ba14u: goto label_32ba14;
        case 0x32ba18u: goto label_32ba18;
        case 0x32ba1cu: goto label_32ba1c;
        case 0x32ba20u: goto label_32ba20;
        case 0x32ba24u: goto label_32ba24;
        case 0x32ba28u: goto label_32ba28;
        case 0x32ba2cu: goto label_32ba2c;
        default: break;
    }

    ctx->pc = 0x32b888u;

label_32b888:
    // 0x32b888: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32b88c:
    // 0x32b88c: 0x24c3001f  addiu       $v1, $a2, 0x1F
    ctx->pc = 0x32b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_32b890:
    // 0x32b890: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_32b894:
    // 0x32b894: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x32b894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
label_32b898:
    // 0x32b898: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_32b89c:
    // 0x32b89c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x32b89cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_32b8a0:
    // 0x32b8a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_32b8a4:
    // 0x32b8a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32b8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32b8a8:
    // 0x32b8a8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x32b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_32b8ac:
    // 0x32b8ac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32b8b0:
    // 0x32b8b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x32b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_32b8b4:
    // 0x32b8b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32b8b8:
    // 0x32b8b8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x32b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_32b8bc:
    // 0x32b8bc: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x32b8bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_32b8c0:
    // 0x32b8c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_32b8c4:
    // 0x32b8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b8c8:
    // 0x32b8c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32b8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b8cc:
    // 0x32b8cc: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x32b8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_32b8d0:
    // 0x32b8d0: 0x8c940014  lw          $s4, 0x14($a0)
    ctx->pc = 0x32b8d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_32b8d4:
    // 0x32b8d4: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
label_32b8d8:
    if (ctx->pc == 0x32B8D8u) {
        ctx->pc = 0x32B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8D4u;
        // 0x32b8d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8DCu;
        goto label_32b8dc;
    }
    ctx->pc = 0x32B8D4u;
    {
        const bool branch_taken_0x32b8d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8D4u;
        // 0x32b8d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8d4) {
            ctx->pc = 0x32BA08u;
            goto label_32ba08;
        }
    }
    ctx->pc = 0x32B8DCu;
label_32b8dc:
    // 0x32b8dc: 0xd09818  mult        $s3, $a2, $s0
    ctx->pc = 0x32b8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_32b8e0:
    // 0x32b8e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x32b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32b8e4:
    // 0x32b8e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32b8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b8e8:
    // 0x32b8e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32b8ec:
    // 0x32b8ec: 0x40f809  jalr        $v0
label_32b8f0:
    if (ctx->pc == 0x32B8F0u) {
        ctx->pc = 0x32B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8ECu;
        // 0x32b8f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8F4u;
        goto label_32b8f4;
    }
    ctx->pc = 0x32B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B8F4u);
        ctx->pc = 0x32B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8ECu;
        // 0x32b8f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B8ECu, 0x32B8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B8F4u;
label_32b8f4:
    // 0x32b8f4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_32b8f8:
    if (ctx->pc == 0x32B8F8u) {
        ctx->pc = 0x32B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8F4u;
        // 0x32b8f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B8FCu;
        goto label_32b8fc;
    }
    ctx->pc = 0x32B8F4u;
    {
        const bool branch_taken_0x32b8f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b8f4) {
            ctx->pc = 0x32B8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B8F4u;
            // 0x32b8f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B8FCu;
            goto label_32b8fc;
        }
    }
    ctx->pc = 0x32B8FCu;
label_32b8fc:
    // 0x32b8fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x32b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32b900:
    // 0x32b900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b904:
    // 0x32b904: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32b904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32b908:
    // 0x32b908: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x32b908u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32b90c:
    // 0x32b90c: 0x1012  mflo        $v0
    ctx->pc = 0x32b90cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_32b910:
    // 0x32b910: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x32b910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_32b914:
    // 0x32b914: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x32b914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32b918:
    // 0x32b918: 0xc0e94bc  jal         func_3A52F0
label_32b91c:
    if (ctx->pc == 0x32B91Cu) {
        ctx->pc = 0x32B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B918u;
        // 0x32b91c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B920u;
        goto label_32b920;
    }
    ctx->pc = 0x32B918u;
    SET_GPR_U32(ctx, 31, 0x32B920u);
    ctx->pc = 0x32B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B918u;
    // 0x32b91c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32B918u, 0x32B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B920u;
label_32b920:
    // 0x32b920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32b920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b924:
    // 0x32b924: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x32b924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32b928:
    // 0x32b928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32b928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b92c:
    // 0x32b92c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32b92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b930:
    // 0x32b930: 0xc0ceb28  jal         func_33ACA0
label_32b934:
    if (ctx->pc == 0x32B934u) {
        ctx->pc = 0x32B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B930u;
        // 0x32b934: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B938u;
        goto label_32b938;
    }
    ctx->pc = 0x32B930u;
    SET_GPR_U32(ctx, 31, 0x32B938u);
    ctx->pc = 0x32B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B930u;
    // 0x32b934: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32B930u, 0x32B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B938u;
label_32b938:
    // 0x32b938: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x32b938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32b93c:
    // 0x32b93c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32b93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b940:
    // 0x32b940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b944:
    // 0x32b944: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32b948:
    // 0x32b948: 0x40f809  jalr        $v0
label_32b94c:
    if (ctx->pc == 0x32B94Cu) {
        ctx->pc = 0x32B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B948u;
        // 0x32b94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B950u;
        goto label_32b950;
    }
    ctx->pc = 0x32B948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B950u);
        ctx->pc = 0x32B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B948u;
        // 0x32b94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B948u, 0x32B950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B950u;
label_32b950:
    // 0x32b950: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x32b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32b954:
    // 0x32b954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b958:
    // 0x32b958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b95c:
    // 0x32b95c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32b960:
    // 0x32b960: 0x40f809  jalr        $v0
label_32b964:
    if (ctx->pc == 0x32B964u) {
        ctx->pc = 0x32B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B960u;
        // 0x32b964: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B968u;
        goto label_32b968;
    }
    ctx->pc = 0x32B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B968u);
        ctx->pc = 0x32B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B960u;
        // 0x32b964: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B960u, 0x32B968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B968u;
label_32b968:
    // 0x32b968: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x32b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32b96c:
    // 0x32b96c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32b96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b970:
    // 0x32b970: 0x2713023  subu        $a2, $s3, $s1
    ctx->pc = 0x32b970u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_32b974:
    // 0x32b974: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32b978:
    // 0x32b978: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b97c:
    // 0x32b97c: 0x40f809  jalr        $v0
label_32b980:
    if (ctx->pc == 0x32B980u) {
        ctx->pc = 0x32B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B97Cu;
        // 0x32b980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B984u;
        goto label_32b984;
    }
    ctx->pc = 0x32B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B984u);
        ctx->pc = 0x32B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B97Cu;
        // 0x32b980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B97Cu, 0x32B984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B984u;
label_32b984:
    // 0x32b984: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_32b988:
    if (ctx->pc == 0x32B988u) {
        ctx->pc = 0x32B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B984u;
        // 0x32b988: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B98Cu;
        goto label_32b98c;
    }
    ctx->pc = 0x32B984u;
    {
        const bool branch_taken_0x32b984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b984) {
            ctx->pc = 0x32B988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B984u;
            // 0x32b988: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B98Cu;
            goto label_32b98c;
        }
    }
    ctx->pc = 0x32B98Cu;
label_32b98c:
    // 0x32b98c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x32b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32b990:
    // 0x32b990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b994:
    // 0x32b994: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32b994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32b998:
    // 0x32b998: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x32b998u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32b99c:
    // 0x32b99c: 0x1012  mflo        $v0
    ctx->pc = 0x32b99cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_32b9a0:
    // 0x32b9a0: 0x50a818  mult        $s5, $v0, $s0
    ctx->pc = 0x32b9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_32b9a4:
    // 0x32b9a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32b9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32b9a8:
    // 0x32b9a8: 0xc0e94bc  jal         func_3A52F0
label_32b9ac:
    if (ctx->pc == 0x32B9ACu) {
        ctx->pc = 0x32B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9A8u;
        // 0x32b9ac: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9B0u;
        goto label_32b9b0;
    }
    ctx->pc = 0x32B9A8u;
    SET_GPR_U32(ctx, 31, 0x32B9B0u);
    ctx->pc = 0x32B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9A8u;
    // 0x32b9ac: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32B9A8u, 0x32B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9B0u;
label_32b9b0:
    // 0x32b9b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x32b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32b9b4:
    // 0x32b9b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b9b8:
    // 0x32b9b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32b9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b9bc:
    // 0x32b9bc: 0xc0ceb28  jal         func_33ACA0
label_32b9c0:
    if (ctx->pc == 0x32B9C0u) {
        ctx->pc = 0x32B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9BCu;
        // 0x32b9c0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9C4u;
        goto label_32b9c4;
    }
    ctx->pc = 0x32B9BCu;
    SET_GPR_U32(ctx, 31, 0x32B9C4u);
    ctx->pc = 0x32B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9BCu;
    // 0x32b9c0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32B9BCu, 0x32B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9C4u;
label_32b9c4:
    // 0x32b9c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x32b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32b9c8:
    // 0x32b9c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32b9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32b9cc:
    // 0x32b9cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b9d0:
    // 0x32b9d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32b9d4:
    // 0x32b9d4: 0x40f809  jalr        $v0
label_32b9d8:
    if (ctx->pc == 0x32B9D8u) {
        ctx->pc = 0x32B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9D4u;
        // 0x32b9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9DCu;
        goto label_32b9dc;
    }
    ctx->pc = 0x32B9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B9DCu);
        ctx->pc = 0x32B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9D4u;
        // 0x32b9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B9D4u, 0x32B9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B9DCu;
label_32b9dc:
    // 0x32b9dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x32b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32b9e0:
    // 0x32b9e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b9e4:
    // 0x32b9e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32b9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32b9e8:
    // 0x32b9e8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32b9ec:
    // 0x32b9ec: 0x40f809  jalr        $v0
label_32b9f0:
    if (ctx->pc == 0x32B9F0u) {
        ctx->pc = 0x32B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9ECu;
        // 0x32b9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B9F4u;
        goto label_32b9f4;
    }
    ctx->pc = 0x32B9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B9F4u);
        ctx->pc = 0x32B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9ECu;
        // 0x32b9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B9ECu, 0x32B9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B9F4u;
label_32b9f4:
    // 0x32b9f4: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x32b9f4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32b9f8:
    // 0x32b9f8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_32b9fc:
    if (ctx->pc == 0x32B9FCu) {
        ctx->pc = 0x32B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9F8u;
        // 0x32b9fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA00u;
        goto label_32ba00;
    }
    ctx->pc = 0x32B9F8u;
    {
        const bool branch_taken_0x32b9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b9f8) {
            ctx->pc = 0x32B9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B9F8u;
            // 0x32b9fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BA00u;
            goto label_32ba00;
        }
    }
    ctx->pc = 0x32BA00u;
label_32ba00:
    // 0x32ba00: 0x8812  mflo        $s1
    ctx->pc = 0x32ba00u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_32ba04:
    // 0x32ba04: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x32ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_32ba08:
    // 0x32ba08: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32ba08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ba0c:
    // 0x32ba0c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32ba0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32ba10:
    // 0x32ba10: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32ba10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32ba14:
    // 0x32ba14: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x32ba14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32ba18:
    // 0x32ba18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x32ba18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32ba1c:
    // 0x32ba1c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x32ba1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32ba20:
    // 0x32ba20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32ba24:
    // 0x32ba24: 0x3e00008  jr          $ra
label_32ba28:
    if (ctx->pc == 0x32BA28u) {
        ctx->pc = 0x32BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA24u;
        // 0x32ba28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32BA2Cu;
        goto label_32ba2c;
    }
    ctx->pc = 0x32BA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA24u;
        // 0x32ba28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BA2Cu;
label_32ba2c:
    // 0x32ba2c: 0x0  nop
    ctx->pc = 0x32ba2cu;
    // NOP
    ctx->pc = 0x32ba30u;
}
