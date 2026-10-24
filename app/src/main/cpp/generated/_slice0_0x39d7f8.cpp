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

// Function: _slice0
// Address: 0x39d7f8 - 0x39db28
void _slice0_0x39d7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_slice0_0x39d7f8");
#endif

    switch (ctx->pc) {
        case 0x39d83cu: goto label_39d83c;
        case 0x39d848u: goto label_39d848;
        case 0x39d87cu: goto label_39d87c;
        case 0x39d8c8u: goto label_39d8c8;
        case 0x39d8ecu: goto label_39d8ec;
        case 0x39d960u: goto label_39d960;
        case 0x39d990u: goto label_39d990;
        case 0x39d9c4u: goto label_39d9c4;
        case 0x39d9ecu: goto label_39d9ec;
        case 0x39da18u: goto label_39da18;
        case 0x39da50u: goto label_39da50;
        case 0x39da7cu: goto label_39da7c;
        case 0x39daa8u: goto label_39daa8;
        case 0x39dad4u: goto label_39dad4;
        default: break;
    }

    ctx->pc = 0x39d7f8u;

    // 0x39d7f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39d7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x39d7fc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x39d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x39d800: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x39d800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39d804: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x39d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x39d808: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x39d808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d80c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d810: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x39d810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x39d814: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x39d814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x39d818: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x39d818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x39d81c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x39d81cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d820: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x39d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x39d824: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x39d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x39d828: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x39d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x39d82c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x39d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x39d830: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x39d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x39d834: 0xc0e7f9e  jal         func_39FE78
    ctx->pc = 0x39D834u;
    SET_GPR_U32(ctx, 31, 0x39D83Cu);
    ctx->pc = 0x39D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D834u;
    // 0x39d838: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FE78u, 0x39D834u, 0x39D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D83Cu;
label_39d83c:
    // 0x39d83c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x39D83Cu;
    {
        const bool branch_taken_0x39d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D83Cu;
        // 0x39d840: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d83c) {
            ctx->pc = 0x39DB00u;
            goto label_39db00;
        }
    }
    ctx->pc = 0x39D844u;
    // 0x39d844: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x39d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_39d848:
    // 0x39d848: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x39d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39d84c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x39d84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x39d850: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D850u;
    {
        const bool branch_taken_0x39d850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d850) {
            ctx->pc = 0x39D854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D850u;
            // 0x39d854: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D860u;
            goto label_39d860;
        }
    }
    ctx->pc = 0x39D858u;
    // 0x39d858: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x39D858u;
    {
        const bool branch_taken_0x39d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D858u;
        // 0x39d85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d858) {
            ctx->pc = 0x39DAFCu;
            goto label_39dafc;
        }
    }
    ctx->pc = 0x39D860u;
label_39d860:
    // 0x39d860: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x39d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39d864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d868: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x39d868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39d86c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x39d86cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39d870: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x39d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x39d874: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39D874u;
    SET_GPR_U32(ctx, 31, 0x39D87Cu);
    ctx->pc = 0x39D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D874u;
    // 0x39d878: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39D874u, 0x39D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D87Cu;
label_39d87c:
    // 0x39d87c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39d880: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x39d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x39d884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d884u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x39d888: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x39D888u;
    {
        const bool branch_taken_0x39d888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D888u;
        // 0x39d88c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d888) {
            ctx->pc = 0x39D914u;
            goto label_39d914;
        }
    }
    ctx->pc = 0x39D890u;
    // 0x39d890: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39d890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39d894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d898: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x39d898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x39d89c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x39D89Cu;
    {
        const bool branch_taken_0x39d89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D89Cu;
        // 0x39d8a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d89c) {
            ctx->pc = 0x39D918u;
            goto label_39d918;
        }
    }
    ctx->pc = 0x39D8A4u;
    // 0x39d8a4: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x39d8a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x39d8a8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x39d8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x39d8ac: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x39d8acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x39d8b0: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x39d8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x39d8b4: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x39d8b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x39d8b8: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x39d8b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x39d8bc: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x39d8bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x39d8c0: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x39d8c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x39d8c4: 0x0  nop
    ctx->pc = 0x39d8c4u;
    // NOP
label_39d8c8:
    // 0x39d8c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x39d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39d8cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x39D8CCu;
    {
        const bool branch_taken_0x39d8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d8cc) {
            ctx->pc = 0x39D8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D8CCu;
            // 0x39d8d0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D8F0u;
            goto label_39d8f0;
        }
    }
    ctx->pc = 0x39D8D4u;
    // 0x39d8d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39d8d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x39d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x39d8dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D8DCu;
    {
        const bool branch_taken_0x39d8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d8dc) {
            ctx->pc = 0x39D8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D8DCu;
            // 0x39d8e0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D8F0u;
            goto label_39d8f0;
        }
    }
    ctx->pc = 0x39D8E4u;
    // 0x39d8e4: 0xc0e6ae6  jal         func_39AB98
    ctx->pc = 0x39D8E4u;
    SET_GPR_U32(ctx, 31, 0x39D8ECu);
    ctx->pc = 0x39D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8E4u;
    // 0x39d8e8: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB98u, 0x39D8E4u, 0x39D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8ECu;
label_39d8ec:
    // 0x39d8ec: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x39d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_39d8f0:
    // 0x39d8f0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x39D8F0u;
    {
        const bool branch_taken_0x39d8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d8f0) {
            ctx->pc = 0x39D958u;
            goto label_39d958;
        }
    }
    ctx->pc = 0x39D8F8u;
    // 0x39d8f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x39d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39d8fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D8FCu;
    {
        const bool branch_taken_0x39d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8FCu;
        // 0x39d900: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8fc) {
            ctx->pc = 0x39D918u;
            goto label_39d918;
        }
    }
    ctx->pc = 0x39D904u;
    // 0x39d904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x39d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39d908: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x39d908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x39d90c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x39D90Cu;
    {
        const bool branch_taken_0x39d90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d90c) {
            ctx->pc = 0x39D8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d8c8;
        }
    }
    ctx->pc = 0x39D914u;
label_39d914:
    // 0x39d914: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39d918:
    // 0x39d918: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39d918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39d91c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x39d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x39d920: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x39d920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x39d924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39d924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d928: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x39d928u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x39d92c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x39d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39d930: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39d930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39d934: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x39D934u;
    {
        const bool branch_taken_0x39d934 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x39D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D934u;
        // 0x39d938: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d934) {
            ctx->pc = 0x39D968u;
            goto label_39d968;
        }
    }
    ctx->pc = 0x39D93Cu;
    // 0x39d93c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x39d93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x39d940: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D940u;
    {
        const bool branch_taken_0x39d940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D940u;
        // 0x39d944: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d940) {
            ctx->pc = 0x39D950u;
            goto label_39d950;
        }
    }
    ctx->pc = 0x39D948u;
    // 0x39d948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39D948u;
    {
        const bool branch_taken_0x39d948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D948u;
        // 0x39d94c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d948) {
            ctx->pc = 0x39D96Cu;
            goto label_39d96c;
        }
    }
    ctx->pc = 0x39D950u;
label_39d950:
    // 0x39d950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39D950u;
    {
        const bool branch_taken_0x39d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D950u;
        // 0x39d954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d950) {
            ctx->pc = 0x39D96Cu;
            goto label_39d96c;
        }
    }
    ctx->pc = 0x39D958u;
label_39d958:
    // 0x39d958: 0xc0e708a  jal         func_39C228
    ctx->pc = 0x39D958u;
    SET_GPR_U32(ctx, 31, 0x39D960u);
    ctx->pc = 0x39C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C228u, 0x39D958u, 0x39D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D960u;
label_39d960:
    // 0x39d960: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39D960u;
    {
        const bool branch_taken_0x39d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D960u;
        // 0x39d964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d960) {
            ctx->pc = 0x39D994u;
            goto label_39d994;
        }
    }
    ctx->pc = 0x39D968u;
label_39d968:
    // 0x39d968: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_39d96c:
    // 0x39d96c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x39d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x39d970: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39d974: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39d974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39d978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39d978u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39d97c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x39d97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x39d980: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D980u;
    {
        const bool branch_taken_0x39d980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D980u;
        // 0x39d984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d980) {
            ctx->pc = 0x39D990u;
            goto label_39d990;
        }
    }
    ctx->pc = 0x39D988u;
    // 0x39d988: 0xc0e70b2  jal         func_39C2C8
    ctx->pc = 0x39D988u;
    SET_GPR_U32(ctx, 31, 0x39D990u);
    ctx->pc = 0x39D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D988u;
    // 0x39d98c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C2C8u, 0x39D988u, 0x39D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D990u;
label_39d990:
    // 0x39d990: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x39d990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d994:
    // 0x39d994: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x39D994u;
    {
        const bool branch_taken_0x39d994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d994) {
            ctx->pc = 0x39D998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D994u;
            // 0x39d998: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D9B0u;
            goto label_39d9b0;
        }
    }
    ctx->pc = 0x39D99Cu;
    // 0x39d99c: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x39d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39d9a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39d9a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39d9a8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x39D9A8u;
    {
        const bool branch_taken_0x39d9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9A8u;
        // 0x39d9ac: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9a8) {
            ctx->pc = 0x39DAFCu;
            goto label_39dafc;
        }
    }
    ctx->pc = 0x39D9B0u;
label_39d9b0:
    // 0x39d9b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39D9B0u;
    {
        const bool branch_taken_0x39d9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9B0u;
        // 0x39d9b4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9b0) {
            ctx->pc = 0x39D9FCu;
            goto label_39d9fc;
        }
    }
    ctx->pc = 0x39D9B8u;
    // 0x39d9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d9bc: 0xc0e7ae4  jal         func_39EB90
    ctx->pc = 0x39D9BCu;
    SET_GPR_U32(ctx, 31, 0x39D9C4u);
    ctx->pc = 0x39D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9BCu;
    // 0x39d9c0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x39D9BCu, 0x39D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9C4u;
label_39d9c4:
    // 0x39d9c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39D9C4u;
    {
        const bool branch_taken_0x39d9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d9c4) {
            ctx->pc = 0x39D9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D9C4u;
            // 0x39d9c8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D9DCu;
            goto label_39d9dc;
        }
    }
    ctx->pc = 0x39D9CCu;
    // 0x39d9cc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x39d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x39d9d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D9D0u;
    {
        const bool branch_taken_0x39d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d9d0) {
            ctx->pc = 0x39D9E4u;
            goto label_39d9e4;
        }
    }
    ctx->pc = 0x39D9D8u;
    // 0x39d9d8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x39d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_39d9dc:
    // 0x39d9dc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x39D9DCu;
    {
        const bool branch_taken_0x39d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9DCu;
        // 0x39d9e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9dc) {
            ctx->pc = 0x39DAFCu;
            goto label_39dafc;
        }
    }
    ctx->pc = 0x39D9E4u;
label_39d9e4:
    // 0x39d9e4: 0xc0e7992  jal         func_39E648
    ctx->pc = 0x39D9E4u;
    SET_GPR_U32(ctx, 31, 0x39D9ECu);
    ctx->pc = 0x39D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9E4u;
    // 0x39d9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E648u, 0x39D9E4u, 0x39D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9ECu;
label_39d9ec:
    // 0x39d9ec: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x39d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x39d9f0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x39D9F0u;
    {
        const bool branch_taken_0x39d9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9F0u;
        // 0x39d9f4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9f0) {
            ctx->pc = 0x39DA58u;
            goto label_39da58;
        }
    }
    ctx->pc = 0x39D9F8u;
    // 0x39d9f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x39d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_39d9fc:
    // 0x39d9fc: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x39d9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x39da00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39DA00u;
    {
        const bool branch_taken_0x39da00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA00u;
        // 0x39da04: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da00) {
            ctx->pc = 0x39DA20u;
            goto label_39da20;
        }
    }
    ctx->pc = 0x39DA08u;
    // 0x39da08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39da08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39da0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39da0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da10: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39DA10u;
    SET_GPR_U32(ctx, 31, 0x39DA18u);
    ctx->pc = 0x39DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA10u;
    // 0x39da14: 0x24a5e700  addiu       $a1, $a1, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39DA10u, 0x39DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA18u;
label_39da18:
    // 0x39da18: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x39DA18u;
    {
        const bool branch_taken_0x39da18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA18u;
        // 0x39da1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da18) {
            ctx->pc = 0x39DAFCu;
            goto label_39dafc;
        }
    }
    ctx->pc = 0x39DA20u;
label_39da20:
    // 0x39da20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39da24: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39DA24u;
    {
        const bool branch_taken_0x39da24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA24u;
        // 0x39da28: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da24) {
            ctx->pc = 0x39DA64u;
            goto label_39da64;
        }
    }
    ctx->pc = 0x39DA2Cu;
    // 0x39da2c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x39da2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39da30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da34: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x39da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x39da38: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x39da38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x39da3c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x39da3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39da40: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x39da40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da44: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x39da44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da48: 0xc0e783c  jal         func_39E0F0
    ctx->pc = 0x39DA48u;
    SET_GPR_U32(ctx, 31, 0x39DA50u);
    ctx->pc = 0x39DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA48u;
    // 0x39da4c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E0F0u, 0x39DA48u, 0x39DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA50u;
label_39da50:
    // 0x39da50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39DA50u;
    {
        const bool branch_taken_0x39da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA50u;
        // 0x39da54: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da50) {
            ctx->pc = 0x39DA88u;
            goto label_39da88;
        }
    }
    ctx->pc = 0x39DA58u;
label_39da58:
    // 0x39da58: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x39da58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x39da5c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x39DA5Cu;
    {
        const bool branch_taken_0x39da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA5Cu;
        // 0x39da60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da5c) {
            ctx->pc = 0x39DAFCu;
            goto label_39dafc;
        }
    }
    ctx->pc = 0x39DA64u;
label_39da64:
    // 0x39da64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39da64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da6c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x39da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x39da70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39da70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da74: 0xc0e7b3e  jal         func_39ECF8
    ctx->pc = 0x39DA74u;
    SET_GPR_U32(ctx, 31, 0x39DA7Cu);
    ctx->pc = 0x39DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA74u;
    // 0x39da78: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECF8u, 0x39DA74u, 0x39DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA7Cu;
label_39da7c:
    // 0x39da7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39DA7Cu;
    {
        const bool branch_taken_0x39da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA7Cu;
        // 0x39da80: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da7c) {
            ctx->pc = 0x39DAB0u;
            goto label_39dab0;
        }
    }
    ctx->pc = 0x39DA84u;
    // 0x39da84: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x39da84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_39da88:
    // 0x39da88: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x39da88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da8c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x39da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x39da90: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x39da90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da94: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x39da94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x39da98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39da98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da9c: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x39da9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x39daa0: 0xc0e7330  jal         func_39CCC0
    ctx->pc = 0x39DAA0u;
    SET_GPR_U32(ctx, 31, 0x39DAA8u);
    ctx->pc = 0x39DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DAA0u;
    // 0x39daa4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CCC0u, 0x39DAA0u, 0x39DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DAA8u;
label_39daa8:
    // 0x39daa8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39DAA8u;
    {
        const bool branch_taken_0x39daa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAA8u;
        // 0x39daac: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39daa8) {
            ctx->pc = 0x39DABCu;
            goto label_39dabc;
        }
    }
    ctx->pc = 0x39DAB0u;
label_39dab0:
    // 0x39dab0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x39dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x39dab4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x39DAB4u;
    {
        const bool branch_taken_0x39dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAB4u;
        // 0x39dab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dab4) {
            ctx->pc = 0x39DAFCu;
            goto label_39dafc;
        }
    }
    ctx->pc = 0x39DABCu;
label_39dabc:
    // 0x39dabc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x39DABCu;
    {
        const bool branch_taken_0x39dabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dabc) {
            ctx->pc = 0x39DAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DABCu;
            // 0x39dac0: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39DADCu;
            goto label_39dadc;
        }
    }
    ctx->pc = 0x39DAC4u;
    // 0x39dac4: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x39dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x39dac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39dac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dacc: 0xc0e74e6  jal         func_39D398
    ctx->pc = 0x39DACCu;
    SET_GPR_U32(ctx, 31, 0x39DAD4u);
    ctx->pc = 0x39DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DACCu;
    // 0x39dad0: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D398u, 0x39DACCu, 0x39DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DAD4u;
label_39dad4:
    // 0x39dad4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x39dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39dad8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x39dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_39dadc:
    // 0x39dadc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39dae0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x39dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x39dae4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39dae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x39dae8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x39dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x39daec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39daecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39daf0: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x39daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x39daf4: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x39DAF4u;
    {
        const bool branch_taken_0x39daf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DAF4u;
        // 0x39daf8: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39daf4) {
            ctx->pc = 0x39D848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d848;
        }
    }
    ctx->pc = 0x39DAFCu;
label_39dafc:
    // 0x39dafc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x39dafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_39db00:
    // 0x39db00: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x39db00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39db04: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x39db04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39db08: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x39db08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39db0c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x39db0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39db10: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x39db10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39db14: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x39db14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39db18: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x39db18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39db1c: 0x3e00008  jr          $ra
    ctx->pc = 0x39DB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DB1Cu;
        // 0x39db20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DB24u;
    // 0x39db24: 0x0  nop
    ctx->pc = 0x39db24u;
    // NOP
    ctx->pc = 0x39db28u;
}
