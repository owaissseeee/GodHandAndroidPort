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

// Function: cHeap_allocFirstFit
// Address: 0x2a9538 - 0x2a9620
void cHeap_allocFirstFit_0x2a9538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeap_allocFirstFit_0x2a9538");
#endif

    switch (ctx->pc) {
        case 0x2a957cu: goto label_2a957c;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a95b0u: goto label_2a95b0;
        default: break;
    }

    ctx->pc = 0x2a9538u;

    // 0x2a9538: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a9538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a953c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a953cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a9540: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x2a9540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x2a9544: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x2a9544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x2a9548: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2a9548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2a954c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2a954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2a9550: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2a9550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2a9554: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a9554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a9558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a955c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2a955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2a9560: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2a9560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2a9564: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A9564u;
    {
        const bool branch_taken_0x2a9564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9564u;
        // 0x2a9568: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9564) {
            ctx->pc = 0x2A95F4u;
            goto label_2a95f4;
        }
    }
    ctx->pc = 0x2A956Cu;
    // 0x2a956c: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2A956Cu;
    {
        const bool branch_taken_0x2a956c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a956c) {
            ctx->pc = 0x2A9570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A956Cu;
            // 0x2a9570: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A95A0u;
            goto label_2a95a0;
        }
    }
    ctx->pc = 0x2A9574u;
    // 0x2a9574: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2A9574u;
    {
        const bool branch_taken_0x2a9574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9574u;
        // 0x2a9578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9574) {
            ctx->pc = 0x2A95F8u;
            goto label_2a95f8;
        }
    }
    ctx->pc = 0x2A957Cu;
label_2a957c:
    // 0x2a957c: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x2A957Cu;
    SET_GPR_U32(ctx, 31, 0x2A9584u);
    ctx->pc = 0x2A9580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A957Cu;
    // 0x2a9580: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9620u, 0x2A957Cu, 0x2A9584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9584u;
label_2a9584:
    // 0x2a9584: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x2a9584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x2a9588: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a9588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a958c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a9590: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2a9590u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a9594: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2a9594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2a9598: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A9598u;
    {
        const bool branch_taken_0x2a9598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9598u;
        // 0x2a959c: 0xae14000c  sw          $s4, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9598) {
            ctx->pc = 0x2A95F8u;
            goto label_2a95f8;
        }
    }
    ctx->pc = 0x2A95A0u;
label_2a95a0:
    // 0x2a95a0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A95A0u;
    {
        const bool branch_taken_0x2a95a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95A0u;
        // 0x2a95a4: 0x24b50020  addiu       $s5, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95a0) {
            ctx->pc = 0x2A95F4u;
            goto label_2a95f4;
        }
    }
    ctx->pc = 0x2A95A8u;
    // 0x2a95a8: 0x63823  negu        $a3, $a2
    ctx->pc = 0x2a95a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2a95ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2a95acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2a95b0:
    // 0x2a95b0: 0xb5102b  sltu        $v0, $a1, $s5
    ctx->pc = 0x2a95b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2a95b4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A95B4u;
    {
        const bool branch_taken_0x2a95b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a95b4) {
            ctx->pc = 0x2A95B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A95B4u;
            // 0x2a95b8: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A95ECu;
            goto label_2a95ec;
        }
    }
    ctx->pc = 0x2A95BCu;
    // 0x2a95bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a95c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a95c4: 0x2443001f  addiu       $v1, $v0, 0x1F
    ctx->pc = 0x2a95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x2a95c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a95cc: 0x679824  and         $s3, $v1, $a3
    ctx->pc = 0x2a95ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2a95d0: 0x2671ffe0  addiu       $s1, $s3, -0x20
    ctx->pc = 0x2a95d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x2a95d4: 0x222a023  subu        $s4, $s1, $v0
    ctx->pc = 0x2a95d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a95d8: 0x2b49021  addu        $s2, $s5, $s4
    ctx->pc = 0x2a95d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x2a95dc: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x2a95dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a95e0: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2A95E0u;
    {
        const bool branch_taken_0x2a95e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A95E0u;
        // 0x2a95e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95e0) {
            ctx->pc = 0x2A957Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a957c;
        }
    }
    ctx->pc = 0x2A95E8u;
    // 0x2a95e8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2a95e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a95ec:
    // 0x2a95ec: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A95ECu;
    {
        const bool branch_taken_0x2a95ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a95ec) {
            ctx->pc = 0x2A95F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A95ECu;
            // 0x2a95f0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A95B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a95b0;
        }
    }
    ctx->pc = 0x2A95F4u;
label_2a95f4:
    // 0x2a95f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a95f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a95f8:
    // 0x2a95f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2a95f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a95fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2a95fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9600: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a9600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9608: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2a9608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a960c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2a960cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9614: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9614u;
        // 0x2a9618: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A961Cu;
    // 0x2a961c: 0x0  nop
    ctx->pc = 0x2a961cu;
    // NOP
    ctx->pc = 0x2a9620u;
}
