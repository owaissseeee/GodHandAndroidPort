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

// Function: func_001BD430
// Address: 0x1bd430 - 0x1bd528
void func_001BD430_0x1bd430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BD430_0x1bd430");
#endif

    switch (ctx->pc) {
        case 0x1bd468u: goto label_1bd468;
        case 0x1bd4f0u: goto label_1bd4f0;
        default: break;
    }

    ctx->pc = 0x1bd430u;

    // 0x1bd430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bd434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bd438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd43c: 0x8c850644  lw          $a1, 0x644($a0)
    ctx->pc = 0x1bd43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1604)));
    // 0x1bd440: 0x50a0002d  beql        $a1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BD440u;
    {
        const bool branch_taken_0x1bd440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd440) {
            ctx->pc = 0x1BD444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD440u;
            // 0x1bd444: 0xa4800630  sh          $zero, 0x630($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 1584), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD448u;
    // 0x1bd448: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1bd448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1bd44c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BD44Cu;
    {
        const bool branch_taken_0x1bd44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD44Cu;
        // 0x1bd450: 0x24a30034  addiu       $v1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd44c) {
            ctx->pc = 0x1BD4D4u;
            goto label_1bd4d4;
        }
    }
    ctx->pc = 0x1BD454u;
    // 0x1bd454: 0x8ca90054  lw          $t1, 0x54($a1)
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1bd458: 0x11200020  beqz        $t1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BD458u;
    {
        const bool branch_taken_0x1bd458 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD458u;
        // 0x1bd45c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd458) {
            ctx->pc = 0x1BD4DCu;
            goto label_1bd4dc;
        }
    }
    ctx->pc = 0x1BD460u;
    // 0x1bd460: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd464: 0x0  nop
    ctx->pc = 0x1bd464u;
    // NOP
label_1bd468:
    // 0x1bd468: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd46c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1bd46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x1bd470: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1bd470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bd474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD474u;
    {
        const bool branch_taken_0x1bd474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD474u;
        // 0x1bd478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd474) {
            ctx->pc = 0x1BD484u;
            goto label_1bd484;
        }
    }
    ctx->pc = 0x1BD47Cu;
    // 0x1bd47c: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1bd47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x1bd480: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bd480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd484:
    // 0x1bd484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bd484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd488: 0x10c70007  beq         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD488u;
    {
        const bool branch_taken_0x1bd488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1BD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD488u;
        // 0x1bd48c: 0x28620200  slti        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd488) {
            ctx->pc = 0x1BD4A8u;
            goto label_1bd4a8;
        }
    }
    ctx->pc = 0x1BD490u;
    // 0x1bd490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD490u;
    {
        const bool branch_taken_0x1bd490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD490u;
        // 0x1bd494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd490) {
            ctx->pc = 0x1BD4A0u;
            goto label_1bd4a0;
        }
    }
    ctx->pc = 0x1BD498u;
    // 0x1bd498: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1bd498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1bd49c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bd49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd4a0:
    // 0x1bd4a0: 0x14c70007  bne         $a2, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD4A0u;
    {
        const bool branch_taken_0x1bd4a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1BD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4A0u;
        // 0x1bd4a4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4a0) {
            ctx->pc = 0x1BD4C0u;
            goto label_1bd4c0;
        }
    }
    ctx->pc = 0x1BD4A8u;
label_1bd4a8:
    // 0x1bd4a8: 0x94820630  lhu         $v0, 0x630($a0)
    ctx->pc = 0x1bd4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1584)));
    // 0x1bd4ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd4b4: 0xac830634  sw          $v1, 0x634($a0)
    ctx->pc = 0x1bd4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1588), GPR_U32(ctx, 3));
    // 0x1bd4b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD4B8u;
    {
        const bool branch_taken_0x1bd4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4B8u;
        // 0x1bd4bc: 0xa4820630  sh          $v0, 0x630($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1584), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4b8) {
            ctx->pc = 0x1BD4DCu;
            goto label_1bd4dc;
        }
    }
    ctx->pc = 0x1BD4C0u;
label_1bd4c0:
    // 0x1bd4c0: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x1bd4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1bd4c4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BD4C4u;
    {
        const bool branch_taken_0x1bd4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C4u;
        // 0x1bd4c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4c4) {
            ctx->pc = 0x1BD468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd468;
        }
    }
    ctx->pc = 0x1BD4CCu;
    // 0x1bd4cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD4CCu;
    {
        const bool branch_taken_0x1bd4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4CCu;
        // 0x1bd4d0: 0x8c900644  lw          $s0, 0x644($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4cc) {
            ctx->pc = 0x1BD4E0u;
            goto label_1bd4e0;
        }
    }
    ctx->pc = 0x1BD4D4u;
label_1bd4d4:
    // 0x1bd4d4: 0xac800634  sw          $zero, 0x634($a0)
    ctx->pc = 0x1bd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1588), GPR_U32(ctx, 0));
    // 0x1bd4d8: 0xa4800630  sh          $zero, 0x630($a0)
    ctx->pc = 0x1bd4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1584), (uint16_t)GPR_U32(ctx, 0));
label_1bd4dc:
    // 0x1bd4dc: 0x8c900644  lw          $s0, 0x644($a0)
    ctx->pc = 0x1bd4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1604)));
label_1bd4e0:
    // 0x1bd4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1bd4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bd4e8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1BD4E8u;
    SET_GPR_U32(ctx, 31, 0x1BD4F0u);
    ctx->pc = 0x1BD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4E8u;
    // 0x1bd4ec: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1BD4E8u, 0x1BD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4F0u;
label_1bd4f0:
    // 0x1bd4f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD4F0u;
    {
        const bool branch_taken_0x1bd4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4F0u;
        // 0x1bd4f4: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4f0) {
            ctx->pc = 0x1BD4FCu;
            goto label_1bd4fc;
        }
    }
    ctx->pc = 0x1BD4F8u;
label_1bd4f8:
    // 0x1bd4f8: 0xac800634  sw          $zero, 0x634($a0)
    ctx->pc = 0x1bd4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1588), GPR_U32(ctx, 0));
label_1bd4fc:
    // 0x1bd4fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bd4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd504: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD504u;
        // 0x1bd508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD50Cu;
    // 0x1bd50c: 0x0  nop
    ctx->pc = 0x1bd50cu;
    // NOP
    // 0x1bd510: 0x0  nop
    ctx->pc = 0x1bd510u;
    // NOP
    // 0x1bd514: 0x0  nop
    ctx->pc = 0x1bd514u;
    // NOP
    // 0x1bd518: 0x0  nop
    ctx->pc = 0x1bd518u;
    // NOP
    // 0x1bd51c: 0x0  nop
    ctx->pc = 0x1bd51cu;
    // NOP
    // 0x1bd520: 0x0  nop
    ctx->pc = 0x1bd520u;
    // NOP
    // 0x1bd524: 0x0  nop
    ctx->pc = 0x1bd524u;
    // NOP
    ctx->pc = 0x1bd528u;
}
