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

// Function: func_0037D8B8
// Address: 0x37d8b8 - 0x37d9b0
void func_0037D8B8_0x37d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D8B8_0x37d8b8");
#endif

    switch (ctx->pc) {
        case 0x37d8f4u: goto label_37d8f4;
        case 0x37d928u: goto label_37d928;
        case 0x37d930u: goto label_37d930;
        case 0x37d940u: goto label_37d940;
        case 0x37d95cu: goto label_37d95c;
        case 0x37d974u: goto label_37d974;
        case 0x37d990u: goto label_37d990;
        default: break;
    }

    ctx->pc = 0x37d8b8u;

    // 0x37d8b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d8bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37d8c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37d8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d8d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x37d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37d8d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x37D8D4u;
    {
        const bool branch_taken_0x37d8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8D4u;
        // 0x37d8d8: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d8d4) {
            ctx->pc = 0x37D940u;
            goto label_37d940;
        }
    }
    ctx->pc = 0x37D8DCu;
    // 0x37d8dc: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x37d8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x37d8e0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37d8e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D8E4u;
    {
        const bool branch_taken_0x37d8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d8e4) {
            ctx->pc = 0x37D8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D8E4u;
            // 0x37d8e8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D8FCu;
            goto label_37d8fc;
        }
    }
    ctx->pc = 0x37D8ECu;
    // 0x37d8ec: 0xc0df608  jal         func_37D820
    ctx->pc = 0x37D8ECu;
    SET_GPR_U32(ctx, 31, 0x37D8F4u);
    ctx->pc = 0x37D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D820u, 0x37D8ECu, 0x37D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D8F4u;
label_37d8f4:
    // 0x37d8f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x37D8F4u;
    {
        const bool branch_taken_0x37d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8F4u;
        // 0x37d8f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d8f4) {
            ctx->pc = 0x37D9A0u;
            goto label_37d9a0;
        }
    }
    ctx->pc = 0x37D8FCu;
label_37d8fc:
    // 0x37d8fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37d8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37d900: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37D900u;
    {
        const bool branch_taken_0x37d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d900) {
            ctx->pc = 0x37D938u;
            goto label_37d938;
        }
    }
    ctx->pc = 0x37D908u;
    // 0x37d908: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x37d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37d90c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37D90Cu;
    {
        const bool branch_taken_0x37d90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d90c) {
            ctx->pc = 0x37D940u;
            goto label_37d940;
        }
    }
    ctx->pc = 0x37D914u;
    // 0x37d914: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x37d918: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37D918u;
    {
        const bool branch_taken_0x37d918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d918) {
            ctx->pc = 0x37D940u;
            goto label_37d940;
        }
    }
    ctx->pc = 0x37D920u;
    // 0x37d920: 0xc0df452  jal         func_37D148
    ctx->pc = 0x37D920u;
    SET_GPR_U32(ctx, 31, 0x37D928u);
    ctx->pc = 0x37D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D920u;
    // 0x37d924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D148u, 0x37D920u, 0x37D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D928u;
label_37d928:
    // 0x37d928: 0xc0df4ec  jal         func_37D3B0
    ctx->pc = 0x37D928u;
    SET_GPR_U32(ctx, 31, 0x37D930u);
    ctx->pc = 0x37D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D928u;
    // 0x37d92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3B0u, 0x37D928u, 0x37D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D930u;
label_37d930:
    // 0x37d930: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x37D930u;
    {
        const bool branch_taken_0x37d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D930u;
        // 0x37d934: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d930) {
            ctx->pc = 0x37D9A0u;
            goto label_37d9a0;
        }
    }
    ctx->pc = 0x37D938u;
label_37d938:
    // 0x37d938: 0xc0df608  jal         func_37D820
    ctx->pc = 0x37D938u;
    SET_GPR_U32(ctx, 31, 0x37D940u);
    ctx->pc = 0x37D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D938u;
    // 0x37d93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D820u, 0x37D938u, 0x37D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D940u;
label_37d940:
    // 0x37d940: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37D940u;
    {
        const bool branch_taken_0x37d940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D940u;
        // 0x37d944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d940) {
            ctx->pc = 0x37D964u;
            goto label_37d964;
        }
    }
    ctx->pc = 0x37D948u;
    // 0x37d948: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x37d948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37d94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d950: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x37d950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x37d954: 0xc0df608  jal         func_37D820
    ctx->pc = 0x37D954u;
    SET_GPR_U32(ctx, 31, 0x37D95Cu);
    ctx->pc = 0x37D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D954u;
    // 0x37d958: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D820u, 0x37D954u, 0x37D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D95Cu;
label_37d95c:
    // 0x37d95c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37D95Cu;
    {
        const bool branch_taken_0x37d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D95Cu;
        // 0x37d960: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d95c) {
            ctx->pc = 0x37D9A0u;
            goto label_37d9a0;
        }
    }
    ctx->pc = 0x37D964u;
label_37d964:
    // 0x37d964: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D964u;
    {
        const bool branch_taken_0x37d964 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x37d964) {
            ctx->pc = 0x37D968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D964u;
            // 0x37d968: 0x86020030  lh          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D97Cu;
            goto label_37d97c;
        }
    }
    ctx->pc = 0x37D96Cu;
    // 0x37d96c: 0xc0df608  jal         func_37D820
    ctx->pc = 0x37D96Cu;
    SET_GPR_U32(ctx, 31, 0x37D974u);
    ctx->pc = 0x37D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D96Cu;
    // 0x37d970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D820u, 0x37D96Cu, 0x37D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D974u;
label_37d974:
    // 0x37d974: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37D974u;
    {
        const bool branch_taken_0x37d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D974u;
        // 0x37d978: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d974) {
            ctx->pc = 0x37D9A0u;
            goto label_37d9a0;
        }
    }
    ctx->pc = 0x37D97Cu;
label_37d97c:
    // 0x37d97c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37D97Cu;
    {
        const bool branch_taken_0x37d97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D97Cu;
        // 0x37d980: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d97c) {
            ctx->pc = 0x37D99Cu;
            goto label_37d99c;
        }
    }
    ctx->pc = 0x37D984u;
    // 0x37d984: 0xa6110036  sh          $s1, 0x36($s0)
    ctx->pc = 0x37d984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 17));
    // 0x37d988: 0xc0de008  jal         func_378020
    ctx->pc = 0x37D988u;
    SET_GPR_U32(ctx, 31, 0x37D990u);
    ctx->pc = 0x37D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D988u;
    // 0x37d98c: 0xa6000032  sh          $zero, 0x32($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378020u, 0x37D988u, 0x37D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D990u;
label_37d990:
    // 0x37d990: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x37d990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37d994: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37d998: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x37d998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_37d99c:
    // 0x37d99c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37d99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d9a0:
    // 0x37d9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9A8u;
        // 0x37d9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D9B0u;
}
