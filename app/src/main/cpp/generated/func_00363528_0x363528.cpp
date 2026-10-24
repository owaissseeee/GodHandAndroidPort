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

// Function: func_00363528
// Address: 0x363528 - 0x363620
void func_00363528_0x363528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00363528_0x363528");
#endif

    switch (ctx->pc) {
        case 0x363598u: goto label_363598;
        case 0x3635c0u: goto label_3635c0;
        case 0x3635d8u: goto label_3635d8;
        default: break;
    }

    ctx->pc = 0x363528u;

    // 0x363528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x363528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36352c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x363530: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x363530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x363534: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x363534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363538: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x363538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x36353c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36353cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363540: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x363540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x363544: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x363544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x363548: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x363548u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36354c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x363550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x363554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x363554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x363558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x363558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36355c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x36355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x363560: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x363560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x363564: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x363564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x363568: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x363568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36356c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x36356cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x363570: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x363570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x363574: 0x2487000f  addiu       $a3, $a0, 0xF
    ctx->pc = 0x363574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x363578: 0x3b103  sra         $s6, $v1, 4
    ctx->pc = 0x363578u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 4));
    // 0x36357c: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x36357cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x363580: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x363580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x363584: 0x49903  sra         $s3, $a0, 4
    ctx->pc = 0x363584u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 4));
    // 0x363588: 0x1ac00019  blez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x363588u;
    {
        const bool branch_taken_0x363588 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x36358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363588u;
        // 0x36358c: 0x8cb20004  lw          $s2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363588) {
            ctx->pc = 0x3635F0u;
            goto label_3635f0;
        }
    }
    ctx->pc = 0x363590u;
    // 0x363590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x363590u;
    {
        const bool branch_taken_0x363590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363590u;
        // 0x363594: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363590) {
            ctx->pc = 0x3635A0u;
            goto label_3635a0;
        }
    }
    ctx->pc = 0x363598u;
label_363598:
    // 0x363598: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x363598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x36359c: 0x0  nop
    ctx->pc = 0x36359cu;
    // NOP
label_3635a0:
    // 0x3635a0: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x3635a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3635a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3635a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3635a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3635a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3635ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3635acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3635b0: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3635B0u;
    {
        const bool branch_taken_0x3635b0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x3635B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635B0u;
        // 0x3635b4: 0xc28821  addu        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635b0) {
            ctx->pc = 0x3635E0u;
            goto label_3635e0;
        }
    }
    ctx->pc = 0x3635B8u;
    // 0x3635b8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3635b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3635bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3635c0:
    // 0x3635c0: 0x26310180  addiu       $s1, $s1, 0x180
    ctx->pc = 0x3635c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x3635c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3635c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635c8: 0x26520400  addiu       $s2, $s2, 0x400
    ctx->pc = 0x3635c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x3635cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3635ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3635d0: 0xc0d835e  jal         func_360D78
    ctx->pc = 0x3635D0u;
    SET_GPR_U32(ctx, 31, 0x3635D8u);
    ctx->pc = 0x3635D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3635D0u;
    // 0x3635d4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D78u, 0x3635D0u, 0x3635D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635D8u;
label_3635d8:
    // 0x3635d8: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3635D8u;
    {
        const bool branch_taken_0x3635d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3635DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635D8u;
        // 0x3635dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635d8) {
            ctx->pc = 0x3635C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3635c0;
        }
    }
    ctx->pc = 0x3635E0u;
label_3635e0:
    // 0x3635e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3635e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3635e4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3635e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3635e8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3635E8u;
    {
        const bool branch_taken_0x3635e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3635e8) {
            ctx->pc = 0x3635ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3635E8u;
            // 0x3635ec: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363598;
        }
    }
    ctx->pc = 0x3635F0u;
label_3635f0:
    // 0x3635f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3635f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3635f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3635f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3635f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3635f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3635fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3635fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363600: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x363600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363604: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x363604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x363608: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x363608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36360c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x36360cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x363610: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x363610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363614: 0x3e00008  jr          $ra
    ctx->pc = 0x363614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363614u;
        // 0x363618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36361Cu;
    // 0x36361c: 0x0  nop
    ctx->pc = 0x36361cu;
    // NOP
    ctx->pc = 0x363620u;
}
