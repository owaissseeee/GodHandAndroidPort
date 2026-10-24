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

// Function: func_00378760
// Address: 0x378760 - 0x378868
void func_00378760_0x378760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378760_0x378760");
#endif

    switch (ctx->pc) {
        case 0x3787a0u: goto label_3787a0;
        case 0x3787d8u: goto label_3787d8;
        case 0x3787e8u: goto label_3787e8;
        case 0x3787f8u: goto label_3787f8;
        case 0x378808u: goto label_378808;
        case 0x378818u: goto label_378818;
        case 0x378830u: goto label_378830;
        case 0x378850u: goto label_378850;
        default: break;
    }

    ctx->pc = 0x378760u;

    // 0x378760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x378768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37876c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37876cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378774: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x378774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x378778: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x378778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x37877c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37877Cu;
    {
        const bool branch_taken_0x37877c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37877Cu;
        // 0x378780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37877c) {
            ctx->pc = 0x3787A8u;
            goto label_3787a8;
        }
    }
    ctx->pc = 0x378784u;
    // 0x378784: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x378784u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x378788: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x378788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x37878c: 0x8e2421b8  lw          $a0, 0x21B8($s1)
    ctx->pc = 0x37878cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F21B8u));
    // 0x378790: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x378790u;
    {
        const bool branch_taken_0x378790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x378794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378790u;
        // 0x378794: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378790) {
            ctx->pc = 0x378858u;
            goto label_378858;
        }
    }
    ctx->pc = 0x378798u;
    // 0x378798: 0xc0df722  jal         func_37DC88
    ctx->pc = 0x378798u;
    SET_GPR_U32(ctx, 31, 0x3787A0u);
    ctx->pc = 0x37879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378798u;
    // 0x37879c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DC88u, 0x378798u, 0x3787A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787A0u;
label_3787a0:
    // 0x3787a0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3787A0u;
    {
        const bool branch_taken_0x3787a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787A0u;
        // 0x3787a4: 0xae2021b8  sw          $zero, 0x21B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787a0) {
            ctx->pc = 0x378854u;
            goto label_378854;
        }
    }
    ctx->pc = 0x3787A8u;
label_3787a8:
    // 0x3787a8: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x3787a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3787ac: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3787acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3787b0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3787B0u;
    {
        const bool branch_taken_0x3787b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787B0u;
        // 0x3787b4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787b0) {
            ctx->pc = 0x378830u;
            goto label_378830;
        }
    }
    ctx->pc = 0x3787B8u;
    // 0x3787b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3787b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3787bc: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x3787bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
    // 0x3787c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3787c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3787c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3787c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3787c8: 0x800008  jr          $a0
    ctx->pc = 0x3787C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3787D0u: goto label_3787d0;
            case 0x3787E0u: goto label_3787e0;
            case 0x3787F0u: goto label_3787f0;
            case 0x378800u: goto label_378800;
            case 0x378810u: goto label_378810;
            case 0x378820u: goto label_378820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3787C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3787D0u;
label_3787d0:
    // 0x3787d0: 0xc0de2aa  jal         func_378AA8
    ctx->pc = 0x3787D0u;
    SET_GPR_U32(ctx, 31, 0x3787D8u);
    ctx->pc = 0x3787D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787D0u;
    // 0x3787d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378AA8u, 0x3787D0u, 0x3787D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787D8u;
label_3787d8:
    // 0x3787d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3787D8u;
    {
        const bool branch_taken_0x3787d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787D8u;
        // 0x3787dc: 0x82020004  lb          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787d8) {
            ctx->pc = 0x378834u;
            goto label_378834;
        }
    }
    ctx->pc = 0x3787E0u;
label_3787e0:
    // 0x3787e0: 0xc0de2fe  jal         func_378BF8
    ctx->pc = 0x3787E0u;
    SET_GPR_U32(ctx, 31, 0x3787E8u);
    ctx->pc = 0x3787E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787E0u;
    // 0x3787e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378BF8u, 0x3787E0u, 0x3787E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787E8u;
label_3787e8:
    // 0x3787e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3787E8u;
    {
        const bool branch_taken_0x3787e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787E8u;
        // 0x3787ec: 0x82020004  lb          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787e8) {
            ctx->pc = 0x378834u;
            goto label_378834;
        }
    }
    ctx->pc = 0x3787F0u;
label_3787f0:
    // 0x3787f0: 0xc0de338  jal         func_378CE0
    ctx->pc = 0x3787F0u;
    SET_GPR_U32(ctx, 31, 0x3787F8u);
    ctx->pc = 0x3787F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3787F0u;
    // 0x3787f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378CE0u, 0x3787F0u, 0x3787F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3787F8u;
label_3787f8:
    // 0x3787f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3787F8u;
    {
        const bool branch_taken_0x3787f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3787F8u;
        // 0x3787fc: 0x82020004  lb          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787f8) {
            ctx->pc = 0x378834u;
            goto label_378834;
        }
    }
    ctx->pc = 0x378800u;
label_378800:
    // 0x378800: 0xc0ded88  jal         func_37B620
    ctx->pc = 0x378800u;
    SET_GPR_U32(ctx, 31, 0x378808u);
    ctx->pc = 0x378804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378800u;
    // 0x378804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B620u, 0x378800u, 0x378808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378808u;
label_378808:
    // 0x378808: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x378808u;
    {
        const bool branch_taken_0x378808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378808u;
        // 0x37880c: 0x82020004  lb          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378808) {
            ctx->pc = 0x378834u;
            goto label_378834;
        }
    }
    ctx->pc = 0x378810u;
label_378810:
    // 0x378810: 0xc0deb1a  jal         func_37AC68
    ctx->pc = 0x378810u;
    SET_GPR_U32(ctx, 31, 0x378818u);
    ctx->pc = 0x378814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378810u;
    // 0x378814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AC68u, 0x378810u, 0x378818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378818u;
label_378818:
    // 0x378818: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x378818u;
    {
        const bool branch_taken_0x378818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378818u;
        // 0x37881c: 0x82020004  lb          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378818) {
            ctx->pc = 0x378834u;
            goto label_378834;
        }
    }
    ctx->pc = 0x378820u;
label_378820:
    // 0x378820: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x378820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x378824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x378824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378828: 0xc0df84a  jal         func_37E128
    ctx->pc = 0x378828u;
    SET_GPR_U32(ctx, 31, 0x378830u);
    ctx->pc = 0x37882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378828u;
    // 0x37882c: 0x8c4421b8  lw          $a0, 0x21B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E128u, 0x378828u, 0x378830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378830u;
label_378830:
    // 0x378830: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x378830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_378834:
    // 0x378834: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x378834u;
    {
        const bool branch_taken_0x378834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378834u;
        // 0x378838: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378834) {
            ctx->pc = 0x378854u;
            goto label_378854;
        }
    }
    ctx->pc = 0x37883Cu;
    // 0x37883c: 0x8e0421b8  lw          $a0, 0x21B8($s0)
    ctx->pc = 0x37883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8632)));
    // 0x378840: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x378840u;
    {
        const bool branch_taken_0x378840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x378840) {
            ctx->pc = 0x378844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378840u;
            // 0x378844: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378858u;
            goto label_378858;
        }
    }
    ctx->pc = 0x378848u;
    // 0x378848: 0xc0df722  jal         func_37DC88
    ctx->pc = 0x378848u;
    SET_GPR_U32(ctx, 31, 0x378850u);
    ctx->pc = 0x37884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378848u;
    // 0x37884c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DC88u, 0x378848u, 0x378850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378850u;
label_378850:
    // 0x378850: 0xae0021b8  sw          $zero, 0x21B8($s0)
    ctx->pc = 0x378850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8632), GPR_U32(ctx, 0));
label_378854:
    // 0x378854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378858:
    // 0x378858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37885c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37885cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378860: 0x3e00008  jr          $ra
    ctx->pc = 0x378860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378860u;
        // 0x378864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378868u;
}
