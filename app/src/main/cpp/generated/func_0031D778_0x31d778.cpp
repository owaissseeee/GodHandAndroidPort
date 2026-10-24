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

// Function: func_0031D778
// Address: 0x31d778 - 0x31d928
void func_0031D778_0x31d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D778_0x31d778");
#endif

    switch (ctx->pc) {
        case 0x31d7a8u: goto label_31d7a8;
        case 0x31d7d8u: goto label_31d7d8;
        case 0x31d878u: goto label_31d878;
        case 0x31d898u: goto label_31d898;
        case 0x31d8d0u: goto label_31d8d0;
        case 0x31d8e0u: goto label_31d8e0;
        default: break;
    }

    ctx->pc = 0x31d778u;

    // 0x31d778: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31d778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31d77c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31d77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31d780: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31d780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31d784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d78c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x31d78cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x31d790: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31d790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x31d794: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x31d794u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x31d798: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x31d79c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31d79cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7a0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x31d7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d7a8:
    // 0x31d7a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31d7ac: 0x8e634078  lw          $v1, 0x4078($s3)
    ctx->pc = 0x31d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16504)));
    // 0x31d7b0: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x31d7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31d7b4: 0x8e474074  lw          $a3, 0x4074($s2)
    ctx->pc = 0x31d7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16500)));
    // 0x31d7b8: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x31d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x31d7bc: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x31d7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31d7c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31D7C0u;
    {
        const bool branch_taken_0x31d7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7C0u;
        // 0x31d7c4: 0xb0102b  sltu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7c0) {
            ctx->pc = 0x31D7ECu;
            goto label_31d7ec;
        }
    }
    ctx->pc = 0x31D7C8u;
    // 0x31d7c8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x31d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x31d7cc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x31d7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7d0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x31D7D0u;
    {
        const bool branch_taken_0x31d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7D0u;
        // 0x31d7d4: 0xae434074  sw          $v1, 0x4074($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7d0) {
            ctx->pc = 0x31D900u;
            goto label_31d900;
        }
    }
    ctx->pc = 0x31D7D8u;
label_31d7d8:
    // 0x31d7d8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x31d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31d7dc: 0xae624078  sw          $v0, 0x4078($s3)
    ctx->pc = 0x31d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16504), GPR_U32(ctx, 2));
    // 0x31d7e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x31d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x31d7e4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x31D7E4u;
    {
        const bool branch_taken_0x31d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7E4u;
        // 0x31d7e8: 0xae444074  sw          $a0, 0x4074($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16500), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7e4) {
            ctx->pc = 0x31D7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d7a8;
        }
    }
    ctx->pc = 0x31D7ECu;
label_31d7ec:
    // 0x31d7ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31D7ECu;
    {
        const bool branch_taken_0x31d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7ECu;
        // 0x31d7f0: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7ec) {
            ctx->pc = 0x31D81Cu;
            goto label_31d81c;
        }
    }
    ctx->pc = 0x31D7F4u;
    // 0x31d7f4: 0xb0001b  divu        $zero, $a1, $s0
    ctx->pc = 0x31d7f4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x31d7f8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31D7F8u;
    {
        const bool branch_taken_0x31d7f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7f8) {
            ctx->pc = 0x31D7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D7F8u;
            // 0x31d7fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D800u;
            goto label_31d800;
        }
    }
    ctx->pc = 0x31D800u;
label_31d800:
    // 0x31d800: 0x1012  mflo        $v0
    ctx->pc = 0x31d800u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31d804: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x31d804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31d808: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x31d808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x31d80c: 0x8e424074  lw          $v0, 0x4074($s2)
    ctx->pc = 0x31d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16500)));
    // 0x31d810: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x31d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31d814: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x31D814u;
    {
        const bool branch_taken_0x31d814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D814u;
        // 0x31d818: 0xae434074  sw          $v1, 0x4074($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16500), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d814) {
            ctx->pc = 0x31D900u;
            goto label_31d900;
        }
    }
    ctx->pc = 0x31D81Cu;
label_31d81c:
    // 0x31d81c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31d820: 0x8c82407c  lw          $v0, 0x407C($a0)
    ctx->pc = 0x31d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16508)));
    // 0x31d824: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31d824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d828: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x31d828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x31d82c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x31d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31d830: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x31d834: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x31d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x31d838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31d83c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x31D83Cu;
    {
        const bool branch_taken_0x31d83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D83Cu;
        // 0x31d840: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d83c) {
            ctx->pc = 0x31D870u;
            goto label_31d870;
        }
    }
    ctx->pc = 0x31D844u;
    // 0x31d844: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x31d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x31d848: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31d848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31d84c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x31d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x31d850: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x31d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x31d854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31d858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31d85c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31d860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d864: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x31d864u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x31d868: 0x8e444074  lw          $a0, 0x4074($s2)
    ctx->pc = 0x31d868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16500)));
    // 0x31d86c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_31d870:
    // 0x31d870: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x31D870u;
    SET_GPR_U32(ctx, 31, 0x31D878u);
    ctx->pc = 0x31D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D870u;
    // 0x31d874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x31D870u, 0x31D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D878u;
label_31d878:
    // 0x31d878: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31D878u;
    {
        const bool branch_taken_0x31d878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D878u;
        // 0x31d87c: 0xae424074  sw          $v0, 0x4074($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d878) {
            ctx->pc = 0x31D8E4u;
            goto label_31d8e4;
        }
    }
    ctx->pc = 0x31D880u;
    // 0x31d880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d884: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x31d884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x31d888: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31D888u;
    {
        const bool branch_taken_0x31d888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D888u;
        // 0x31d88c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d888) {
            ctx->pc = 0x31D8C4u;
            goto label_31d8c4;
        }
    }
    ctx->pc = 0x31D890u;
    // 0x31d890: 0x24434030  addiu       $v1, $v0, 0x4030
    ctx->pc = 0x31d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x31d894: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x31d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_31d898:
    // 0x31d898: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x31d898u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x31d89c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d8a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31d8a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x31d8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d8a8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x31d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31d8ac: 0x5480ffca  bnel        $a0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x31D8ACu;
    {
        const bool branch_taken_0x31d8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d8ac) {
            ctx->pc = 0x31D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D8ACu;
            // 0x31d8b0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d7d8;
        }
    }
    ctx->pc = 0x31D8B4u;
    // 0x31d8b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x31d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31d8b8: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x31d8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x31d8bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31D8BCu;
    {
        const bool branch_taken_0x31d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8BCu;
        // 0x31d8c0: 0x24a20007  addiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8bc) {
            ctx->pc = 0x31D898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d898;
        }
    }
    ctx->pc = 0x31D8C4u;
label_31d8c4:
    // 0x31d8c4: 0xae604078  sw          $zero, 0x4078($s3)
    ctx->pc = 0x31d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16504), GPR_U32(ctx, 0));
    // 0x31d8c8: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x31D8C8u;
    SET_GPR_U32(ctx, 31, 0x31D8D0u);
    ctx->pc = 0x31D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8C8u;
    // 0x31d8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x31D8C8u, 0x31D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8D0u;
label_31d8d0:
    // 0x31d8d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D8D0u;
    {
        const bool branch_taken_0x31d8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d8d0) {
            ctx->pc = 0x31D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D8D0u;
            // 0x31d8d4: 0xae424074  sw          $v0, 0x4074($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16500), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D8E4u;
            goto label_31d8e4;
        }
    }
    ctx->pc = 0x31D8D8u;
    // 0x31d8d8: 0xc0c75ba  jal         func_31D6E8
    ctx->pc = 0x31D8D8u;
    SET_GPR_U32(ctx, 31, 0x31D8E0u);
    ctx->pc = 0x31D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D8D8u;
    // 0x31d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6E8u, 0x31D8D8u, 0x31D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8E0u;
label_31d8e0:
    // 0x31d8e0: 0xae424074  sw          $v0, 0x4074($s2)
    ctx->pc = 0x31d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16500), GPR_U32(ctx, 2));
label_31d8e4:
    // 0x31d8e4: 0x8ea2407c  lw          $v0, 0x407C($s5)
    ctx->pc = 0x31d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16508)));
    // 0x31d8e8: 0x8e434074  lw          $v1, 0x4074($s2)
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16500)));
    // 0x31d8ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31d8f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x31d8f4: 0xaea2407c  sw          $v0, 0x407C($s5)
    ctx->pc = 0x31d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16508), GPR_U32(ctx, 2));
    // 0x31d8f8: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x31D8F8u;
    {
        const bool branch_taken_0x31d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8F8u;
        // 0x31d8fc: 0xae634078  sw          $v1, 0x4078($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8f8) {
            ctx->pc = 0x31D7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d7a8;
        }
    }
    ctx->pc = 0x31D900u;
label_31d900:
    // 0x31d900: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31d900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d904: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31d904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d908: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31d908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d90c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d90cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d910: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31d910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d914: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31d914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d91c: 0x3e00008  jr          $ra
    ctx->pc = 0x31D91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D91Cu;
        // 0x31d920: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D924u;
    // 0x31d924: 0x0  nop
    ctx->pc = 0x31d924u;
    // NOP
    ctx->pc = 0x31d928u;
}
