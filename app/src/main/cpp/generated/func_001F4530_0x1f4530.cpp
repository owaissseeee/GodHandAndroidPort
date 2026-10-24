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

// Function: func_001F4530
// Address: 0x1f4530 - 0x1f45d8
void func_001F4530_0x1f4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4530_0x1f4530");
#endif

    switch (ctx->pc) {
        case 0x1f4578u: goto label_1f4578;
        case 0x1f45b8u: goto label_1f45b8;
        default: break;
    }

    ctx->pc = 0x1f4530u;

    // 0x1f4530: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f4530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f4534: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f4534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f4538: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1f453c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f4540: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f4540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f4544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f4544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4548: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f4548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f454c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f454cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f4554: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1f4554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1f4558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4558u;
    {
        const bool branch_taken_0x1f4558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4558u;
        // 0x1f455c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4558) {
            ctx->pc = 0x1F4568u;
            goto label_1f4568;
        }
    }
    ctx->pc = 0x1F4560u;
    // 0x1f4560: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4560u;
    {
        const bool branch_taken_0x1f4560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4560u;
        // 0x1f4564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4560) {
            ctx->pc = 0x1F45BCu;
            goto label_1f45bc;
        }
    }
    ctx->pc = 0x1F4568u;
label_1f4568:
    // 0x1f4568: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x1f456c: 0x26519b70  addiu       $s1, $s2, -0x6490
    ctx->pc = 0x1f456cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x1f4570: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1F4570u;
    SET_GPR_U32(ctx, 31, 0x1F4578u);
    ctx->pc = 0x1F4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4570u;
    // 0x1f4574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1F4570u, 0x1F4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4578u;
label_1f4578:
    // 0x1f4578: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4578u;
    {
        const bool branch_taken_0x1f4578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4578u;
        // 0x1f457c: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4578) {
            ctx->pc = 0x1F459Cu;
            goto label_1f459c;
        }
    }
    ctx->pc = 0x1F4580u;
    // 0x1f4580: 0x5602000e  bnel        $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F4580u;
    {
        const bool branch_taken_0x1f4580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4580) {
            ctx->pc = 0x1F4584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4580u;
            // 0x1f4584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F45BCu;
            goto label_1f45bc;
        }
    }
    ctx->pc = 0x1F4588u;
    // 0x1f4588: 0x8e439b70  lw          $v1, -0x6490($s2)
    ctx->pc = 0x1f4588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x1f458c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1f458cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1f4590: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f4594: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4594u;
    {
        const bool branch_taken_0x1f4594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4594u;
        // 0x1f4598: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4594) {
            ctx->pc = 0x1F45B8u;
            goto label_1f45b8;
        }
    }
    ctx->pc = 0x1F459Cu;
label_1f459c:
    // 0x1f459c: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x1f459cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1f45a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F45A0u;
    {
        const bool branch_taken_0x1f45a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45A0u;
        // 0x1f45a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45a0) {
            ctx->pc = 0x1F45B0u;
            goto label_1f45b0;
        }
    }
    ctx->pc = 0x1F45A8u;
    // 0x1f45a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F45A8u;
    {
        const bool branch_taken_0x1f45a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45A8u;
        // 0x1f45ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45a8) {
            ctx->pc = 0x1F45BCu;
            goto label_1f45bc;
        }
    }
    ctx->pc = 0x1F45B0u;
label_1f45b0:
    // 0x1f45b0: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1F45B0u;
    SET_GPR_U32(ctx, 31, 0x1F45B8u);
    ctx->pc = 0x1F45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F45B0u;
    // 0x1f45b4: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1F45B0u, 0x1F45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45B8u;
label_1f45b8:
    // 0x1f45b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f45b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f45bc:
    // 0x1f45bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f45bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f45c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f45c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f45c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f45c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f45c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f45c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f45cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f45ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f45d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F45D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45D0u;
        // 0x1f45d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F45D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F45D8u;
}
