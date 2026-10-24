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

// Function: func_00354478
// Address: 0x354478 - 0x3545d8
void func_00354478_0x354478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354478_0x354478");
#endif

    switch (ctx->pc) {
        case 0x35449cu: goto label_35449c;
        case 0x3544c4u: goto label_3544c4;
        case 0x35454cu: goto label_35454c;
        case 0x354558u: goto label_354558;
        default: break;
    }

    ctx->pc = 0x354478u;

    // 0x354478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x354478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35447c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x35447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x354480: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x354480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354484: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x354484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x354488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x354488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35448c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x354490: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x354490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354494: 0xc0d30ae  jal         func_34C2B8
    ctx->pc = 0x354494u;
    SET_GPR_U32(ctx, 31, 0x35449Cu);
    ctx->pc = 0x354498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354494u;
    // 0x354498: 0x8e251fc8  lw          $a1, 0x1FC8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B8u, 0x354494u, 0x35449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35449Cu;
label_35449c:
    // 0x35449c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35449Cu;
    {
        const bool branch_taken_0x35449c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35449Cu;
        // 0x3544a0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35449c) {
            ctx->pc = 0x3544B0u;
            goto label_3544b0;
        }
    }
    ctx->pc = 0x3544A4u;
    // 0x3544a4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3544A4u;
    {
        const bool branch_taken_0x3544a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544A4u;
        // 0x3544a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544a4) {
            ctx->pc = 0x3545C0u;
            goto label_3545c0;
        }
    }
    ctx->pc = 0x3544ACu;
    // 0x3544ac: 0x0  nop
    ctx->pc = 0x3544acu;
    // NOP
label_3544b0:
    // 0x3544b0: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3544B0u;
    {
        const bool branch_taken_0x3544b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544B0u;
        // 0x3544b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544b0) {
            ctx->pc = 0x3545C0u;
            goto label_3545c0;
        }
    }
    ctx->pc = 0x3544B8u;
    // 0x3544b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3544b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544bc: 0xc0d447e  jal         func_3511F8
    ctx->pc = 0x3544BCu;
    SET_GPR_U32(ctx, 31, 0x3544C4u);
    ctx->pc = 0x3544C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3544BCu;
    // 0x3544c0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3511F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3511F8u, 0x3544BCu, 0x3544C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3544C4u;
label_3544c4:
    // 0x3544c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3544c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3544c8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3544C8u;
    {
        const bool branch_taken_0x3544c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3544CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544C8u;
        // 0x3544cc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544c8) {
            ctx->pc = 0x3544F0u;
            goto label_3544f0;
        }
    }
    ctx->pc = 0x3544D0u;
    // 0x3544d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3544d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3544d4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3544d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3544d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3544d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3544dc: 0x2450fffd  addiu       $s0, $v0, -0x3
    ctx->pc = 0x3544dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x3544e0: 0x6010018  bgez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3544E0u;
    {
        const bool branch_taken_0x3544e0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3544E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544E0u;
        // 0x3544e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544e0) {
            ctx->pc = 0x354544u;
            goto label_354544;
        }
    }
    ctx->pc = 0x3544E8u;
    // 0x3544e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3544E8u;
    {
        const bool branch_taken_0x3544e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3544ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544E8u;
        // 0x3544ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544e8) {
            ctx->pc = 0x354544u;
            goto label_354544;
        }
    }
    ctx->pc = 0x3544F0u;
label_3544f0:
    // 0x3544f0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3544f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3544f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3544F4u;
    {
        const bool branch_taken_0x3544f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3544F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3544F4u;
        // 0x3544f8: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3544f4) {
            ctx->pc = 0x354514u;
            goto label_354514;
        }
    }
    ctx->pc = 0x3544FCu;
    // 0x3544fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3544fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x354500: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354504: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x354504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x354508: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x354508u;
    {
        const bool branch_taken_0x354508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354508u;
        // 0x35450c: 0x838023  subu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354508) {
            ctx->pc = 0x354540u;
            goto label_354540;
        }
    }
    ctx->pc = 0x354510u;
    // 0x354510: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x354510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_354514:
    // 0x354514: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x354514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x354518: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x354518u;
    {
        const bool branch_taken_0x354518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354518u;
        // 0x35451c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354518) {
            ctx->pc = 0x354540u;
            goto label_354540;
        }
    }
    ctx->pc = 0x354520u;
    // 0x354520: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x354520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x354524: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x354524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x354528: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x354528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35452c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35452Cu;
    {
        const bool branch_taken_0x35452c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35452c) {
            ctx->pc = 0x354530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35452Cu;
            // 0x354530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354544u;
            goto label_354544;
        }
    }
    ctx->pc = 0x354534u;
    // 0x354534: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x354534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x354538: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x354538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35453c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x35453cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_354540:
    // 0x354540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_354544:
    // 0x354544: 0xc0d5176  jal         func_3545D8
    ctx->pc = 0x354544u;
    SET_GPR_U32(ctx, 31, 0x35454Cu);
    ctx->pc = 0x354548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354544u;
    // 0x354548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3545D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3545D8u, 0x354544u, 0x35454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35454Cu;
label_35454c:
    // 0x35454c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35454cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354554: 0x2a050004  slti        $a1, $s0, 0x4
    ctx->pc = 0x354554u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_354558:
    // 0x354558: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x354558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35455c: 0x205100b  movn        $v0, $s0, $a1
    ctx->pc = 0x35455cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x354560: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x354560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x354564: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x354564u;
    {
        const bool branch_taken_0x354564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354564u;
        // 0x354568: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354564) {
            ctx->pc = 0x35459Cu;
            goto label_35459c;
        }
    }
    ctx->pc = 0x35456Cu;
    // 0x35456c: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x35456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x354570: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x354570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x354574: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x354574u;
    {
        const bool branch_taken_0x354574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354574) {
            ctx->pc = 0x354578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354574u;
            // 0x354578: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354588u;
            goto label_354588;
        }
    }
    ctx->pc = 0x35457Cu;
    // 0x35457c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x354580u;
    {
        const bool branch_taken_0x354580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354580u;
        // 0x354584: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354580) {
            ctx->pc = 0x35458Cu;
            goto label_35458c;
        }
    }
    ctx->pc = 0x354588u;
label_354588:
    // 0x354588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35458c:
    // 0x35458c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x35458cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354590: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x354590u;
    {
        const bool branch_taken_0x354590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354590u;
        // 0x354594: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354590) {
            ctx->pc = 0x354558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354558;
        }
    }
    ctx->pc = 0x354598u;
    // 0x354598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x354598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35459c:
    // 0x35459c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x35459Cu;
    {
        const bool branch_taken_0x35459c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3545A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35459Cu;
        // 0x3545a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35459c) {
            ctx->pc = 0x3545B0u;
            goto label_3545b0;
        }
    }
    ctx->pc = 0x3545A4u;
    // 0x3545a4: 0xde2209b0  ld          $v0, 0x9B0($s1)
    ctx->pc = 0x3545a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 2480)));
    // 0x3545a8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3545a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3545ac: 0xfe2209b0  sd          $v0, 0x9B0($s1)
    ctx->pc = 0x3545acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2480), GPR_U64(ctx, 2));
label_3545b0:
    // 0x3545b0: 0xde2309a8  ld          $v1, 0x9A8($s1)
    ctx->pc = 0x3545b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 2472)));
    // 0x3545b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3545b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3545b8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x3545b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3545bc: 0xfe2309a8  sd          $v1, 0x9A8($s1)
    ctx->pc = 0x3545bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2472), GPR_U64(ctx, 3));
label_3545c0:
    // 0x3545c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3545c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3545c4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3545c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3545c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3545c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3545cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3545CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3545D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545CCu;
        // 0x3545d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3545CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3545D4u;
    // 0x3545d4: 0x0  nop
    ctx->pc = 0x3545d4u;
    // NOP
    ctx->pc = 0x3545d8u;
}
