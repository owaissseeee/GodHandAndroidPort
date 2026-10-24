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

// Function: func_0036B888
// Address: 0x36b888 - 0x36ba50
void func_0036B888_0x36b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036B888_0x36b888");
#endif

    switch (ctx->pc) {
        case 0x36b888u: goto label_36b888;
        case 0x36b88cu: goto label_36b88c;
        case 0x36b890u: goto label_36b890;
        case 0x36b894u: goto label_36b894;
        case 0x36b898u: goto label_36b898;
        case 0x36b89cu: goto label_36b89c;
        case 0x36b8a0u: goto label_36b8a0;
        case 0x36b8a4u: goto label_36b8a4;
        case 0x36b8a8u: goto label_36b8a8;
        case 0x36b8acu: goto label_36b8ac;
        case 0x36b8b0u: goto label_36b8b0;
        case 0x36b8b4u: goto label_36b8b4;
        case 0x36b8b8u: goto label_36b8b8;
        case 0x36b8bcu: goto label_36b8bc;
        case 0x36b8c0u: goto label_36b8c0;
        case 0x36b8c4u: goto label_36b8c4;
        case 0x36b8c8u: goto label_36b8c8;
        case 0x36b8ccu: goto label_36b8cc;
        case 0x36b8d0u: goto label_36b8d0;
        case 0x36b8d4u: goto label_36b8d4;
        case 0x36b8d8u: goto label_36b8d8;
        case 0x36b8dcu: goto label_36b8dc;
        case 0x36b8e0u: goto label_36b8e0;
        case 0x36b8e4u: goto label_36b8e4;
        case 0x36b8e8u: goto label_36b8e8;
        case 0x36b8ecu: goto label_36b8ec;
        case 0x36b8f0u: goto label_36b8f0;
        case 0x36b8f4u: goto label_36b8f4;
        case 0x36b8f8u: goto label_36b8f8;
        case 0x36b8fcu: goto label_36b8fc;
        case 0x36b900u: goto label_36b900;
        case 0x36b904u: goto label_36b904;
        case 0x36b908u: goto label_36b908;
        case 0x36b90cu: goto label_36b90c;
        case 0x36b910u: goto label_36b910;
        case 0x36b914u: goto label_36b914;
        case 0x36b918u: goto label_36b918;
        case 0x36b91cu: goto label_36b91c;
        case 0x36b920u: goto label_36b920;
        case 0x36b924u: goto label_36b924;
        case 0x36b928u: goto label_36b928;
        case 0x36b92cu: goto label_36b92c;
        case 0x36b930u: goto label_36b930;
        case 0x36b934u: goto label_36b934;
        case 0x36b938u: goto label_36b938;
        case 0x36b93cu: goto label_36b93c;
        case 0x36b940u: goto label_36b940;
        case 0x36b944u: goto label_36b944;
        case 0x36b948u: goto label_36b948;
        case 0x36b94cu: goto label_36b94c;
        case 0x36b950u: goto label_36b950;
        case 0x36b954u: goto label_36b954;
        case 0x36b958u: goto label_36b958;
        case 0x36b95cu: goto label_36b95c;
        case 0x36b960u: goto label_36b960;
        case 0x36b964u: goto label_36b964;
        case 0x36b968u: goto label_36b968;
        case 0x36b96cu: goto label_36b96c;
        case 0x36b970u: goto label_36b970;
        case 0x36b974u: goto label_36b974;
        case 0x36b978u: goto label_36b978;
        case 0x36b97cu: goto label_36b97c;
        case 0x36b980u: goto label_36b980;
        case 0x36b984u: goto label_36b984;
        case 0x36b988u: goto label_36b988;
        case 0x36b98cu: goto label_36b98c;
        case 0x36b990u: goto label_36b990;
        case 0x36b994u: goto label_36b994;
        case 0x36b998u: goto label_36b998;
        case 0x36b99cu: goto label_36b99c;
        case 0x36b9a0u: goto label_36b9a0;
        case 0x36b9a4u: goto label_36b9a4;
        case 0x36b9a8u: goto label_36b9a8;
        case 0x36b9acu: goto label_36b9ac;
        case 0x36b9b0u: goto label_36b9b0;
        case 0x36b9b4u: goto label_36b9b4;
        case 0x36b9b8u: goto label_36b9b8;
        case 0x36b9bcu: goto label_36b9bc;
        case 0x36b9c0u: goto label_36b9c0;
        case 0x36b9c4u: goto label_36b9c4;
        case 0x36b9c8u: goto label_36b9c8;
        case 0x36b9ccu: goto label_36b9cc;
        case 0x36b9d0u: goto label_36b9d0;
        case 0x36b9d4u: goto label_36b9d4;
        case 0x36b9d8u: goto label_36b9d8;
        case 0x36b9dcu: goto label_36b9dc;
        case 0x36b9e0u: goto label_36b9e0;
        case 0x36b9e4u: goto label_36b9e4;
        case 0x36b9e8u: goto label_36b9e8;
        case 0x36b9ecu: goto label_36b9ec;
        case 0x36b9f0u: goto label_36b9f0;
        case 0x36b9f4u: goto label_36b9f4;
        case 0x36b9f8u: goto label_36b9f8;
        case 0x36b9fcu: goto label_36b9fc;
        case 0x36ba00u: goto label_36ba00;
        case 0x36ba04u: goto label_36ba04;
        case 0x36ba08u: goto label_36ba08;
        case 0x36ba0cu: goto label_36ba0c;
        case 0x36ba10u: goto label_36ba10;
        case 0x36ba14u: goto label_36ba14;
        case 0x36ba18u: goto label_36ba18;
        case 0x36ba1cu: goto label_36ba1c;
        case 0x36ba20u: goto label_36ba20;
        case 0x36ba24u: goto label_36ba24;
        case 0x36ba28u: goto label_36ba28;
        case 0x36ba2cu: goto label_36ba2c;
        case 0x36ba30u: goto label_36ba30;
        case 0x36ba34u: goto label_36ba34;
        case 0x36ba38u: goto label_36ba38;
        case 0x36ba3cu: goto label_36ba3c;
        case 0x36ba40u: goto label_36ba40;
        case 0x36ba44u: goto label_36ba44;
        case 0x36ba48u: goto label_36ba48;
        case 0x36ba4cu: goto label_36ba4c;
        default: break;
    }

    ctx->pc = 0x36b888u;

label_36b888:
    // 0x36b888: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_36b88c:
    // 0x36b88c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x36b88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_36b890:
    // 0x36b890: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x36b890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36b894:
    // 0x36b894: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_36b898:
    // 0x36b898: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36b898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36b89c:
    // 0x36b89c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x36b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_36b8a0:
    // 0x36b8a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x36b8a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36b8a4:
    // 0x36b8a4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x36b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_36b8a8:
    // 0x36b8a8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x36b8a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b8ac:
    // 0x36b8ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_36b8b0:
    // 0x36b8b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x36b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_36b8b4:
    // 0x36b8b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x36b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_36b8b8:
    // 0x36b8b8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x36b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_36b8bc:
    // 0x36b8bc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x36b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_36b8c0:
    // 0x36b8c0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x36b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_36b8c4:
    // 0x36b8c4: 0x8e7603b8  lw          $s6, 0x3B8($s3)
    ctx->pc = 0x36b8c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 952)));
label_36b8c8:
    // 0x36b8c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_36b8cc:
    if (ctx->pc == 0x36B8CCu) {
        ctx->pc = 0x36B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8C8u;
        // 0x36b8cc: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B8D0u;
        goto label_36b8d0;
    }
    ctx->pc = 0x36B8C8u;
    {
        const bool branch_taken_0x36b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8C8u;
        // 0x36b8cc: 0x24d0fffd  addiu       $s0, $a2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b8c8) {
            ctx->pc = 0x36B8D4u;
            goto label_36b8d4;
        }
    }
    ctx->pc = 0x36B8D0u;
label_36b8d0:
    // 0x36b8d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36b8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_36b8d4:
    // 0x36b8d4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x36b8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_36b8d8:
    // 0x36b8d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_36b8dc:
    if (ctx->pc == 0x36B8DCu) {
        ctx->pc = 0x36B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8D8u;
        // 0x36b8dc: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B8E0u;
        goto label_36b8e0;
    }
    ctx->pc = 0x36B8D8u;
    {
        const bool branch_taken_0x36b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8D8u;
        // 0x36b8dc: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b8d8) {
            ctx->pc = 0x36B8F0u;
            goto label_36b8f0;
        }
    }
    ctx->pc = 0x36B8E0u;
label_36b8e0:
    // 0x36b8e0: 0xc0da476  jal         func_3691D8
label_36b8e4:
    if (ctx->pc == 0x36B8E4u) {
        ctx->pc = 0x36B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8E0u;
        // 0x36b8e4: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B8E8u;
        goto label_36b8e8;
    }
    ctx->pc = 0x36B8E0u;
    SET_GPR_U32(ctx, 31, 0x36B8E8u);
    ctx->pc = 0x36B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8E0u;
    // 0x36b8e4: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x36B8E0u, 0x36B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B8E8u;
label_36b8e8:
    // 0x36b8e8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_36b8ec:
    if (ctx->pc == 0x36B8ECu) {
        ctx->pc = 0x36B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8E8u;
        // 0x36b8ec: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B8F0u;
        goto label_36b8f0;
    }
    ctx->pc = 0x36B8E8u;
    {
        const bool branch_taken_0x36b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8E8u;
        // 0x36b8ec: 0x2501826  xor         $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b8e8) {
            ctx->pc = 0x36B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b8d0;
        }
    }
    ctx->pc = 0x36B8F0u;
label_36b8f0:
    // 0x36b8f0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x36b8f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36b8f4:
    // 0x36b8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b8f8:
    // 0x36b8f8: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
label_36b8fc:
    if (ctx->pc == 0x36B8FCu) {
        ctx->pc = 0x36B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8F8u;
        // 0x36b8fc: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B900u;
        goto label_36b900;
    }
    ctx->pc = 0x36B8F8u;
    {
        const bool branch_taken_0x36b8f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x36B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8F8u;
        // 0x36b8fc: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b8f8) {
            ctx->pc = 0x36B914u;
            goto label_36b914;
        }
    }
    ctx->pc = 0x36B900u;
label_36b900:
    // 0x36b900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36b904:
    // 0x36b904: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36b908:
    // 0x36b908: 0xc0dae94  jal         func_36BA50
label_36b90c:
    if (ctx->pc == 0x36B90Cu) {
        ctx->pc = 0x36B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B908u;
        // 0x36b90c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B910u;
        goto label_36b910;
    }
    ctx->pc = 0x36B908u;
    SET_GPR_U32(ctx, 31, 0x36B910u);
    ctx->pc = 0x36B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B908u;
    // 0x36b90c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BA50u, 0x36B908u, 0x36B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B910u;
label_36b910:
    // 0x36b910: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x36b910u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b914:
    // 0x36b914: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x36b914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_36b918:
    // 0x36b918: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x36b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_36b91c:
    // 0x36b91c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b920:
    // 0x36b920: 0x245403b0  addiu       $s4, $v0, 0x3B0
    ctx->pc = 0x36b920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
label_36b924:
    // 0x36b924: 0x2741821  addu        $v1, $s3, $s4
    ctx->pc = 0x36b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_36b928:
    // 0x36b928: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x36b928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_36b92c:
    // 0x36b92c: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_36b930:
    if (ctx->pc == 0x36B930u) {
        ctx->pc = 0x36B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B92Cu;
        // 0x36b930: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B934u;
        goto label_36b934;
    }
    ctx->pc = 0x36B92Cu;
    {
        const bool branch_taken_0x36b92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B92Cu;
        // 0x36b930: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b92c) {
            ctx->pc = 0x36B9ECu;
            goto label_36b9ec;
        }
    }
    ctx->pc = 0x36B934u;
label_36b934:
    // 0x36b934: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b938:
    // 0x36b938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b93c:
    // 0x36b93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36b93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b940:
    // 0x36b940: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36b944:
    // 0x36b944: 0x40f809  jalr        $v0
label_36b948:
    if (ctx->pc == 0x36B948u) {
        ctx->pc = 0x36B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B944u;
        // 0x36b948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B94Cu;
        goto label_36b94c;
    }
    ctx->pc = 0x36B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B94Cu);
        ctx->pc = 0x36B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B944u;
        // 0x36b948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B944u, 0x36B94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B94Cu;
label_36b94c:
    // 0x36b94c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36b94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36b950:
    // 0x36b950: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x36b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36b954:
    // 0x36b954: 0xc0e9452  jal         func_3A5148
label_36b958:
    if (ctx->pc == 0x36B958u) {
        ctx->pc = 0x36B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B954u;
        // 0x36b958: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B95Cu;
        goto label_36b95c;
    }
    ctx->pc = 0x36B954u;
    SET_GPR_U32(ctx, 31, 0x36B95Cu);
    ctx->pc = 0x36B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B954u;
    // 0x36b958: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36B954u, 0x36B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B95Cu;
label_36b95c:
    // 0x36b95c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b960:
    // 0x36b960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b964:
    // 0x36b964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b968:
    // 0x36b968: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36b96c:
    // 0x36b96c: 0x40f809  jalr        $v0
label_36b970:
    if (ctx->pc == 0x36B970u) {
        ctx->pc = 0x36B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B96Cu;
        // 0x36b970: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B974u;
        goto label_36b974;
    }
    ctx->pc = 0x36B96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B974u);
        ctx->pc = 0x36B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B96Cu;
        // 0x36b970: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B96Cu, 0x36B974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B974u;
label_36b974:
    // 0x36b974: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x36b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36b978:
    // 0x36b978: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x36b978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_36b97c:
    // 0x36b97c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_36b980:
    if (ctx->pc == 0x36B980u) {
        ctx->pc = 0x36B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B97Cu;
        // 0x36b980: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B984u;
        goto label_36b984;
    }
    ctx->pc = 0x36B97Cu;
    {
        const bool branch_taken_0x36b97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B97Cu;
        // 0x36b980: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b97c) {
            ctx->pc = 0x36B9D4u;
            goto label_36b9d4;
        }
    }
    ctx->pc = 0x36B984u;
label_36b984:
    // 0x36b984: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b988:
    // 0x36b988: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x36b988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36b98c:
    // 0x36b98c: 0x2443023  subu        $a2, $s2, $a0
    ctx->pc = 0x36b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_36b990:
    // 0x36b990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b994:
    // 0x36b994: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36b998:
    // 0x36b998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36b998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b99c:
    // 0x36b99c: 0x40f809  jalr        $v0
label_36b9a0:
    if (ctx->pc == 0x36B9A0u) {
        ctx->pc = 0x36B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B99Cu;
        // 0x36b9a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B9A4u;
        goto label_36b9a4;
    }
    ctx->pc = 0x36B99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B9A4u);
        ctx->pc = 0x36B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B99Cu;
        // 0x36b9a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B99Cu, 0x36B9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B9A4u;
label_36b9a4:
    // 0x36b9a4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x36b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36b9a8:
    // 0x36b9a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x36b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_36b9ac:
    // 0x36b9ac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x36b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_36b9b0:
    // 0x36b9b0: 0xc0e9452  jal         func_3A5148
label_36b9b4:
    if (ctx->pc == 0x36B9B4u) {
        ctx->pc = 0x36B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9B0u;
        // 0x36b9b4: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B9B8u;
        goto label_36b9b8;
    }
    ctx->pc = 0x36B9B0u;
    SET_GPR_U32(ctx, 31, 0x36B9B8u);
    ctx->pc = 0x36B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B9B0u;
    // 0x36b9b4: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36B9B0u, 0x36B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9B8u;
label_36b9b8:
    // 0x36b9b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b9bc:
    // 0x36b9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b9c0:
    // 0x36b9c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b9c4:
    // 0x36b9c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36b9c8:
    // 0x36b9c8: 0x40f809  jalr        $v0
label_36b9cc:
    if (ctx->pc == 0x36B9CCu) {
        ctx->pc = 0x36B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9C8u;
        // 0x36b9cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B9D0u;
        goto label_36b9d0;
    }
    ctx->pc = 0x36B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B9D0u);
        ctx->pc = 0x36B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9C8u;
        // 0x36b9cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B9C8u, 0x36B9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B9D0u;
label_36b9d0:
    // 0x36b9d0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x36b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_36b9d4:
    // 0x36b9d4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x36b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_36b9d8:
    // 0x36b9d8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_36b9dc:
    if (ctx->pc == 0x36B9DCu) {
        ctx->pc = 0x36B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9D8u;
        // 0x36b9dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B9E0u;
        goto label_36b9e0;
    }
    ctx->pc = 0x36B9D8u;
    {
        const bool branch_taken_0x36b9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b9d8) {
            ctx->pc = 0x36B9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36B9D8u;
            // 0x36b9dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36B9F0u;
            goto label_36b9f0;
        }
    }
    ctx->pc = 0x36B9E0u;
label_36b9e0:
    // 0x36b9e0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x36b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_36b9e4:
    // 0x36b9e4: 0x60f809  jalr        $v1
label_36b9e8:
    if (ctx->pc == 0x36B9E8u) {
        ctx->pc = 0x36B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9E4u;
        // 0x36b9e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B9ECu;
        goto label_36b9ec;
    }
    ctx->pc = 0x36B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36B9ECu);
        ctx->pc = 0x36B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9E4u;
        // 0x36b9e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B9E4u, 0x36B9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B9ECu;
label_36b9ec:
    // 0x36b9ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36b9f0:
    // 0x36b9f0: 0x16c2000a  bne         $s6, $v0, . + 4 + (0xA << 2)
label_36b9f4:
    if (ctx->pc == 0x36B9F4u) {
        ctx->pc = 0x36B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9F0u;
        // 0x36b9f4: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B9F8u;
        goto label_36b9f8;
    }
    ctx->pc = 0x36B9F0u;
    {
        const bool branch_taken_0x36b9f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x36B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9F0u;
        // 0x36b9f4: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9f0) {
            ctx->pc = 0x36BA1Cu;
            goto label_36ba1c;
        }
    }
    ctx->pc = 0x36B9F8u;
label_36b9f8:
    // 0x36b9f8: 0x8e6403ec  lw          $a0, 0x3EC($s3)
    ctx->pc = 0x36b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1004)));
label_36b9fc:
    // 0x36b9fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_36ba00:
    if (ctx->pc == 0x36BA00u) {
        ctx->pc = 0x36BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9FCu;
        // 0x36ba00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BA04u;
        goto label_36ba04;
    }
    ctx->pc = 0x36B9FCu;
    {
        const bool branch_taken_0x36b9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9FCu;
        // 0x36ba00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9fc) {
            ctx->pc = 0x36BA1Cu;
            goto label_36ba1c;
        }
    }
    ctx->pc = 0x36BA04u;
label_36ba04:
    // 0x36ba04: 0x8e6603f0  lw          $a2, 0x3F0($s3)
    ctx->pc = 0x36ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1008)));
label_36ba08:
    // 0x36ba08: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x36ba08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_36ba0c:
    // 0x36ba0c: 0x242300b  movn        $a2, $s2, $v0
    ctx->pc = 0x36ba0cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_36ba10:
    // 0x36ba10: 0xc0e9452  jal         func_3A5148
label_36ba14:
    if (ctx->pc == 0x36BA14u) {
        ctx->pc = 0x36BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA10u;
        // 0x36ba14: 0xae6603f4  sw          $a2, 0x3F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1012), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BA18u;
        goto label_36ba18;
    }
    ctx->pc = 0x36BA10u;
    SET_GPR_U32(ctx, 31, 0x36BA18u);
    ctx->pc = 0x36BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA10u;
    // 0x36ba14: 0xae6603f4  sw          $a2, 0x3F4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1012), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36BA10u, 0x36BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA18u;
label_36ba18:
    // 0x36ba18: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x36ba18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_36ba1c:
    // 0x36ba1c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36ba1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36ba20:
    // 0x36ba20: 0x2fe100a  movz        $v0, $s7, $fp
    ctx->pc = 0x36ba20u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
label_36ba24:
    // 0x36ba24: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x36ba24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36ba28:
    // 0x36ba28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36ba28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36ba2c:
    // 0x36ba2c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x36ba2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36ba30:
    // 0x36ba30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x36ba30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36ba34:
    // 0x36ba34: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x36ba34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_36ba38:
    // 0x36ba38: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x36ba38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36ba3c:
    // 0x36ba3c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x36ba3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_36ba40:
    // 0x36ba40: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x36ba40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_36ba44:
    // 0x36ba44: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x36ba44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_36ba48:
    // 0x36ba48: 0x3e00008  jr          $ra
label_36ba4c:
    if (ctx->pc == 0x36BA4Cu) {
        ctx->pc = 0x36BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA48u;
        // 0x36ba4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BA50u;
        goto label_fallthrough_0x36ba48;
    }
    ctx->pc = 0x36BA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA48u;
        // 0x36ba4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ba48:
    ctx->pc = 0x36BA50u;
}
