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

// Function: func_0034A5E0
// Address: 0x34a5e0 - 0x34a6f8
void func_0034A5E0_0x34a5e0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A5E0_0x34a5e0");
#endif

    if (__builtin_expect(ctx->pc != 0x34a5e0u, 0)) {
        switch (ctx->pc) {
            case 0x34a61cu: goto label_34a61c;
            case 0x34a640u: goto label_34a640;
            case 0x34a664u: goto label_34a664;
            case 0x34a698u: goto label_34a698;
            default: break;
        }
    }


    // 0x34a5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a5e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34a5e8: 0xe0a82d  daddu       $s5, $a3, $zero
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a5ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34a5f0: 0xa0802d  daddu       $s0, $a1, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a5f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34a5f8: 0x80902d  daddu       $s2, $a0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a5fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34a600: 0xc0982d  daddu       $s3, $a2, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a604: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34a608: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34a60c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a610: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x34a610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x34a614: 0xc0d36ba  jal         func_34DAE8
    SET_GPR_U32(ctx, 31, 0x34A61Cu);
    ctx->pc = 0x34A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A614u;
    // 0x34a618: 0x8e542004  lw          $s4, 0x2004($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8196)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj34D8_GetTri78_Times100_0x34dae8, 0x34dae8u, 0x34a61cu)) {
        return;
    }
label_34a61c:
    // 0x34a61c: 0x2842006c  slti        $v0, $v0, 0x6C
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x34a620: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A620u;
    {
        const bool branch_taken_0x34a620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A620u;
        // 0x34a624: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a620) {
            ctx->pc = 0x34A638u;
            goto label_34a638;
        }
    }
    // 0x34a628: 0x3c020035  lui         $v0, 0x35
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x34a62c: 0x2442a400  addiu       $v0, $v0, -0x5C00
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x34a630: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x34A630u;
    {
        const bool branch_taken_0x34a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A630u;
        // 0x34a634: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a630) {
            ctx->pc = 0x34A6D0u;
            goto label_34a6d0;
        }
    }
label_34a638:
    // 0x34a638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34A638u;
    {
        const bool branch_taken_0x34a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A638u;
        // 0x34a63c: 0x2673ffee  addiu       $s3, $s3, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a638) {
            ctx->pc = 0x34A644u;
            goto label_34a644;
        }
    }
label_34a640:
    // 0x34a640: 0x26310012  addiu       $s1, $s1, 0x12
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_34a644:
    // 0x34a644: 0x233102a  slt         $v0, $s1, $s3
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34a648: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34A648u;
    {
        const bool branch_taken_0x34a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a648) {
            ctx->pc = 0x34A64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A648u;
            // 0x34a64c: 0xde4209c8  ld          $v0, 0x9C8($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A67Cu;
            goto label_34a67c;
        }
    }
    // 0x34a650: 0x3c050046  lui         $a1, 0x46
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x34a654: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a658: 0x24a59410  addiu       $a1, $a1, -0x6BF0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939664));
    // 0x34a65c: 0xc0e942d  jal         func_3A50B4
    SET_GPR_U32(ctx, 31, 0x34A664u);
    ctx->pc = 0x34A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A65Cu;
    // 0x34a660: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memcmp_0x3a50b4, 0x3a50b4u, 0x34a664u)) {
        return;
    }
label_34a664:
    // 0x34a664: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34A664u;
    {
        const bool branch_taken_0x34a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A664u;
        // 0x34a668: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a664) {
            ctx->pc = 0x34A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a640;
        }
    }
    // 0x34a66c: 0x3c020035  lui         $v0, 0x35
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x34a670: 0x2442a400  addiu       $v0, $v0, -0x5C00
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x34a674: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x34a674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x34a678: 0xde4209c8  ld          $v0, 0x9C8($s2)
    ctx->pc = 0x34a678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
label_34a67c:
    // 0x34a67c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a680: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x34a680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x34a684: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a688: 0x222102d  daddu       $v0, $s1, $v0
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x34a68c: 0x27a60004  addiu       $a2, $sp, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34a690: 0xc0d29be  jal         func_34A6F8
    SET_GPR_U32(ctx, 31, 0x34A698u);
    ctx->pc = 0x34A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A690u;
    // 0x34a694: 0xfe4209c8  sd          $v0, 0x9C8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0034A6F8_0x34a6f8, 0x34a6f8u, 0x34a698u)) {
        return;
    }
label_34a698:
    // 0x34a698: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34A698u;
    {
        const bool branch_taken_0x34a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A698u;
        // 0x34a69c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a698) {
            ctx->pc = 0x34A6D4u;
            goto label_34a6d4;
        }
    }
    // 0x34a6a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a6a4: 0x310c0  sll         $v0, $v1, 3
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34a6a8: 0x431021  addu        $v0, $v0, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a6ac: 0x21040  sll         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34a6b0: 0x222001a  div         $zero, $s1, $v0
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a6b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34A6B4u;
    {
        const bool branch_taken_0x34a6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a6b4) {
            ctx->pc = 0x34A6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A6B4u;
            // 0x34a6b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A6BCu;
            goto label_34a6bc;
        }
    }
label_34a6bc:
    // 0x34a6bc: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x34a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x34a6c0: 0x2012  mflo        $a0
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x34a6c4: 0x42140  sll         $a0, $a0, 5
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x34a6c8: 0x641821  addu        $v1, $v1, $a0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34a6cc: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x34a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_34a6d0:
    // 0x34a6d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34a6d4:
    // 0x34a6d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a6d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a6d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a6d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a6dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a6e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a6e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a6e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a6e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a6e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x34A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6ECu;
        // 0x34a6f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x34a6f4: 0x0  nop
    // NOP
    ctx->pc = 0x34a6f8u;
}