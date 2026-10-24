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

// Function: ListOwner_updateFollowFocus
// Address: 0x12e840 - 0x12e990
void ListOwner_updateFollowFocus_0x12e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ListOwner_updateFollowFocus_0x12e840");
#endif

    switch (ctx->pc) {
        case 0x12e840u: goto label_12e840;
        case 0x12e844u: goto label_12e844;
        case 0x12e848u: goto label_12e848;
        case 0x12e84cu: goto label_12e84c;
        case 0x12e850u: goto label_12e850;
        case 0x12e854u: goto label_12e854;
        case 0x12e858u: goto label_12e858;
        case 0x12e85cu: goto label_12e85c;
        case 0x12e860u: goto label_12e860;
        case 0x12e864u: goto label_12e864;
        case 0x12e868u: goto label_12e868;
        case 0x12e86cu: goto label_12e86c;
        case 0x12e870u: goto label_12e870;
        case 0x12e874u: goto label_12e874;
        case 0x12e878u: goto label_12e878;
        case 0x12e87cu: goto label_12e87c;
        case 0x12e880u: goto label_12e880;
        case 0x12e884u: goto label_12e884;
        case 0x12e888u: goto label_12e888;
        case 0x12e88cu: goto label_12e88c;
        case 0x12e890u: goto label_12e890;
        case 0x12e894u: goto label_12e894;
        case 0x12e898u: goto label_12e898;
        case 0x12e89cu: goto label_12e89c;
        case 0x12e8a0u: goto label_12e8a0;
        case 0x12e8a4u: goto label_12e8a4;
        case 0x12e8a8u: goto label_12e8a8;
        case 0x12e8acu: goto label_12e8ac;
        case 0x12e8b0u: goto label_12e8b0;
        case 0x12e8b4u: goto label_12e8b4;
        case 0x12e8b8u: goto label_12e8b8;
        case 0x12e8bcu: goto label_12e8bc;
        case 0x12e8c0u: goto label_12e8c0;
        case 0x12e8c4u: goto label_12e8c4;
        case 0x12e8c8u: goto label_12e8c8;
        case 0x12e8ccu: goto label_12e8cc;
        case 0x12e8d0u: goto label_12e8d0;
        case 0x12e8d4u: goto label_12e8d4;
        case 0x12e8d8u: goto label_12e8d8;
        case 0x12e8dcu: goto label_12e8dc;
        case 0x12e8e0u: goto label_12e8e0;
        case 0x12e8e4u: goto label_12e8e4;
        case 0x12e8e8u: goto label_12e8e8;
        case 0x12e8ecu: goto label_12e8ec;
        case 0x12e8f0u: goto label_12e8f0;
        case 0x12e8f4u: goto label_12e8f4;
        case 0x12e8f8u: goto label_12e8f8;
        case 0x12e8fcu: goto label_12e8fc;
        case 0x12e900u: goto label_12e900;
        case 0x12e904u: goto label_12e904;
        case 0x12e908u: goto label_12e908;
        case 0x12e90cu: goto label_12e90c;
        case 0x12e910u: goto label_12e910;
        case 0x12e914u: goto label_12e914;
        case 0x12e918u: goto label_12e918;
        case 0x12e91cu: goto label_12e91c;
        case 0x12e920u: goto label_12e920;
        case 0x12e924u: goto label_12e924;
        case 0x12e928u: goto label_12e928;
        case 0x12e92cu: goto label_12e92c;
        case 0x12e930u: goto label_12e930;
        case 0x12e934u: goto label_12e934;
        case 0x12e938u: goto label_12e938;
        case 0x12e93cu: goto label_12e93c;
        case 0x12e940u: goto label_12e940;
        case 0x12e944u: goto label_12e944;
        case 0x12e948u: goto label_12e948;
        case 0x12e94cu: goto label_12e94c;
        case 0x12e950u: goto label_12e950;
        case 0x12e954u: goto label_12e954;
        case 0x12e958u: goto label_12e958;
        case 0x12e95cu: goto label_12e95c;
        case 0x12e960u: goto label_12e960;
        case 0x12e964u: goto label_12e964;
        case 0x12e968u: goto label_12e968;
        case 0x12e96cu: goto label_12e96c;
        case 0x12e970u: goto label_12e970;
        case 0x12e974u: goto label_12e974;
        case 0x12e978u: goto label_12e978;
        case 0x12e97cu: goto label_12e97c;
        case 0x12e980u: goto label_12e980;
        case 0x12e984u: goto label_12e984;
        case 0x12e988u: goto label_12e988;
        case 0x12e98cu: goto label_12e98c;
        default: break;
    }

    ctx->pc = 0x12e840u;

label_12e840:
    // 0x12e840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_12e844:
    // 0x12e844: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12e844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_12e848:
    // 0x12e848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12e84c:
    // 0x12e84c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e850:
    // 0x12e850: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_12e854:
    // 0x12e854: 0x8e300190  lw          $s0, 0x190($s1)
    ctx->pc = 0x12e854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_12e858:
    // 0x12e858: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_12e85c:
    if (ctx->pc == 0x12E85Cu) {
        ctx->pc = 0x12E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E858u;
        // 0x12e85c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E860u;
        goto label_12e860;
    }
    ctx->pc = 0x12E858u;
    {
        const bool branch_taken_0x12e858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E858u;
        // 0x12e85c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e858) {
            ctx->pc = 0x12E888u;
            goto label_12e888;
        }
    }
    ctx->pc = 0x12E860u;
label_12e860:
    // 0x12e860: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x12e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_12e864:
    // 0x12e864: 0x0  nop
    ctx->pc = 0x12e864u;
    // NOP
label_12e868:
    // 0x12e868: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_12e86c:
    // 0x12e86c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x12e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_12e870:
    // 0x12e870: 0x60f809  jalr        $v1
label_12e874:
    if (ctx->pc == 0x12E874u) {
        ctx->pc = 0x12E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E870u;
        // 0x12e874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E878u;
        goto label_12e878;
    }
    ctx->pc = 0x12E870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E878u);
        ctx->pc = 0x12E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E870u;
        // 0x12e874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E870u, 0x12E878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E878u;
label_12e878:
    // 0x12e878: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12e87c:
    // 0x12e87c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_12e880:
    if (ctx->pc == 0x12E880u) {
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E87Cu;
        // 0x12e880: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E884u;
        goto label_12e884;
    }
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E87Cu;
            // 0x12e880: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e868;
        }
    }
    ctx->pc = 0x12E884u;
label_12e884:
    // 0x12e884: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_12e888:
    // 0x12e888: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x12e888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_12e88c:
    // 0x12e88c: 0x24427a2c  addiu       $v0, $v0, 0x7A2C
    ctx->pc = 0x12e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
label_12e890:
    // 0x12e890: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12e894:
    // 0x12e894: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12e894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_12e898:
    // 0x12e898: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_12e89c:
    if (ctx->pc == 0x12E89Cu) {
        ctx->pc = 0x12E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E898u;
        // 0x12e89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8A0u;
        goto label_12e8a0;
    }
    ctx->pc = 0x12E898u;
    {
        const bool branch_taken_0x12e898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E898u;
        // 0x12e89c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e898) {
            ctx->pc = 0x12E978u;
            goto label_12e978;
        }
    }
    ctx->pc = 0x12E8A0u;
label_12e8a0:
    // 0x12e8a0: 0xc0b6dac  jal         func_2DB6B0
label_12e8a4:
    if (ctx->pc == 0x12E8A4u) {
        ctx->pc = 0x12E8A8u;
        goto label_12e8a8;
    }
    ctx->pc = 0x12E8A0u;
    SET_GPR_U32(ctx, 31, 0x12E8A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x12E8A0u, 0x12E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8A8u;
label_12e8a8:
    // 0x12e8a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e8ac:
    // 0x12e8ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e8b0:
    // 0x12e8b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_12e8b4:
    // 0x12e8b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e8b8:
    // 0x12e8b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_12e8bc:
    // 0x12e8bc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x12e8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_12e8c0:
    // 0x12e8c0: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x12e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
label_12e8c4:
    // 0x12e8c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_12e8c8:
    // 0x12e8c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12e8cc:
    // 0x12e8cc: 0xc04e3e2  jal         func_138F88
label_12e8d0:
    if (ctx->pc == 0x12E8D0u) {
        ctx->pc = 0x12E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8CCu;
        // 0x12e8d0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8D4u;
        goto label_12e8d4;
    }
    ctx->pc = 0x12E8CCu;
    SET_GPR_U32(ctx, 31, 0x12E8D4u);
    ctx->pc = 0x12E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8CCu;
    // 0x12e8d0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F88u, 0x12E8CCu, 0x12E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_12e8d8:
    if (ctx->pc == 0x12E8D8u) {
        ctx->pc = 0x12E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D4u;
        // 0x12e8d8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8DCu;
        goto label_12e8dc;
    }
    ctx->pc = 0x12E8D4u;
    {
        const bool branch_taken_0x12e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D4u;
        // 0x12e8d8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d4) {
            ctx->pc = 0x12E908u;
            goto label_12e908;
        }
    }
    ctx->pc = 0x12E8DCu;
label_12e8dc:
    // 0x12e8dc: 0x8c42aff0  lw          $v0, -0x5010($v0)
    ctx->pc = 0x12e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_12e8e0:
    // 0x12e8e0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_12e8e4:
    if (ctx->pc == 0x12E8E4u) {
        ctx->pc = 0x12E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8E0u;
        // 0x12e8e4: 0x24430200  addiu       $v1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8E8u;
        goto label_12e8e8;
    }
    ctx->pc = 0x12E8E0u;
    {
        const bool branch_taken_0x12e8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8E0u;
        // 0x12e8e4: 0x24430200  addiu       $v1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8e0) {
            ctx->pc = 0x12E934u;
            goto label_12e934;
        }
    }
    ctx->pc = 0x12E8E8u;
label_12e8e8:
    // 0x12e8e8: 0x13a30013  beq         $sp, $v1, . + 4 + (0x13 << 2)
label_12e8ec:
    if (ctx->pc == 0x12E8ECu) {
        ctx->pc = 0x12E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8E8u;
        // 0x12e8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8F0u;
        goto label_12e8f0;
    }
    ctx->pc = 0x12E8E8u;
    {
        const bool branch_taken_0x12e8e8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8E8u;
        // 0x12e8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8e8) {
            ctx->pc = 0x12E938u;
            goto label_12e938;
        }
    }
    ctx->pc = 0x12E8F0u;
label_12e8f0:
    // 0x12e8f0: 0xc4400200  lwc1        $f0, 0x200($v0)
    ctx->pc = 0x12e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e8f4:
    // 0x12e8f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12e8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12e8f8:
    // 0x12e8f8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e8fc:
    // 0x12e8fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12e8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12e900:
    // 0x12e900: 0x1000000b  b           . + 4 + (0xB << 2)
label_12e904:
    if (ctx->pc == 0x12E904u) {
        ctx->pc = 0x12E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E900u;
        // 0x12e904: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E908u;
        goto label_12e908;
    }
    ctx->pc = 0x12E900u;
    {
        const bool branch_taken_0x12e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E900u;
        // 0x12e904: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e900) {
            ctx->pc = 0x12E930u;
            goto label_12e930;
        }
    }
    ctx->pc = 0x12E908u;
label_12e908:
    // 0x12e908: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_12e90c:
    if (ctx->pc == 0x12E90Cu) {
        ctx->pc = 0x12E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E908u;
        // 0x12e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E910u;
        goto label_12e910;
    }
    ctx->pc = 0x12E908u;
    {
        const bool branch_taken_0x12e908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E908u;
        // 0x12e90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e908) {
            ctx->pc = 0x12E938u;
            goto label_12e938;
        }
    }
    ctx->pc = 0x12E910u;
label_12e910:
    // 0x12e910: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x12e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_12e914:
    // 0x12e914: 0x13a20008  beq         $sp, $v0, . + 4 + (0x8 << 2)
label_12e918:
    if (ctx->pc == 0x12E918u) {
        ctx->pc = 0x12E91Cu;
        goto label_12e91c;
    }
    ctx->pc = 0x12E914u;
    {
        const bool branch_taken_0x12e914 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x12e914) {
            ctx->pc = 0x12E938u;
            goto label_12e938;
        }
    }
    ctx->pc = 0x12E91Cu;
label_12e91c:
    // 0x12e91c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e920:
    // 0x12e920: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12e924:
    // 0x12e924: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e928:
    // 0x12e928: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12e928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12e92c:
    // 0x12e92c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e930:
    // 0x12e930: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x12e930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12e934:
    // 0x12e934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e938:
    // 0x12e938: 0xc04c968  jal         func_1325A0
label_12e93c:
    if (ctx->pc == 0x12E93Cu) {
        ctx->pc = 0x12E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E938u;
        // 0x12e93c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E940u;
        goto label_12e940;
    }
    ctx->pc = 0x12E938u;
    SET_GPR_U32(ctx, 31, 0x12E940u);
    ctx->pc = 0x12E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E938u;
    // 0x12e93c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1325A0u, 0x12E938u, 0x12E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E940u;
label_12e940:
    // 0x12e940: 0x8e300190  lw          $s0, 0x190($s1)
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_12e944:
    // 0x12e944: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_12e948:
    if (ctx->pc == 0x12E948u) {
        ctx->pc = 0x12E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E944u;
        // 0x12e948: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E94Cu;
        goto label_12e94c;
    }
    ctx->pc = 0x12E944u;
    {
        const bool branch_taken_0x12e944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e944) {
            ctx->pc = 0x12E948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E944u;
            // 0x12e948: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E978u;
            goto label_12e978;
        }
    }
    ctx->pc = 0x12E94Cu;
label_12e94c:
    // 0x12e94c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x12e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_12e950:
    // 0x12e950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e954:
    // 0x12e954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e958:
    // 0x12e958: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12e958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_12e95c:
    // 0x12e95c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x12e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_12e960:
    // 0x12e960: 0x60f809  jalr        $v1
label_12e964:
    if (ctx->pc == 0x12E964u) {
        ctx->pc = 0x12E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E960u;
        // 0x12e964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E968u;
        goto label_12e968;
    }
    ctx->pc = 0x12E960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E968u);
        ctx->pc = 0x12E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E960u;
        // 0x12e964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E960u, 0x12E968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12e96c:
    // 0x12e96c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_12e970:
    if (ctx->pc == 0x12E970u) {
        ctx->pc = 0x12E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E96Cu;
        // 0x12e970: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E974u;
        goto label_12e974;
    }
    ctx->pc = 0x12E96Cu;
    {
        const bool branch_taken_0x12e96c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e96c) {
            ctx->pc = 0x12E970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E96Cu;
            // 0x12e970: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e950;
        }
    }
    ctx->pc = 0x12E974u;
label_12e974:
    // 0x12e974: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12e974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12e978:
    // 0x12e978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12e978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12e97c:
    // 0x12e97c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12e980:
    // 0x12e980: 0x3e00008  jr          $ra
label_12e984:
    if (ctx->pc == 0x12E984u) {
        ctx->pc = 0x12E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E980u;
        // 0x12e984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E988u;
        goto label_12e988;
    }
    ctx->pc = 0x12E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E980u;
        // 0x12e984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E988u;
label_12e988:
    // 0x12e988: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x12e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12e98c:
    // 0x12e98c: 0x0  nop
    ctx->pc = 0x12e98cu;
    // NOP
    ctx->pc = 0x12e990u;
}
