#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setQuitFadeOut__9cEventEnvb
// Address: 0x7ae490 - 0x7ae548
void setQuitFadeOut__9cEventEnvb_0x7ae490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setQuitFadeOut__9cEventEnvb_0x7ae490");
#endif

    switch (ctx->pc) {
        case 0x7ae4acu: goto label_7ae4ac;
        case 0x7ae51cu: goto label_7ae51c;
        default: break;
    }

    ctx->pc = 0x7ae490u;

    // 0x7ae490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7ae490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7ae494: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7ae494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7ae498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7ae498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7ae49c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ae49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae4a4: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE4A4u;
    SET_GPR_U32(ctx, 31, 0x7AE4ACu);
    ctx->pc = 0x7AE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE4A4u;
    // 0x7ae4a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE4A4u, 0x7AE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE4ACu;
label_7ae4ac:
    // 0x7ae4ac: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x7AE4ACu;
    {
        const bool branch_taken_0x7ae4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae4ac) {
            ctx->pc = 0x7AE4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE4ACu;
            // 0x7ae4b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE538u;
            goto label_7ae538;
        }
    }
    ctx->pc = 0x7AE4B4u;
    // 0x7ae4b4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x7ae4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae4b8: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x7ae4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x7ae4bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae4c0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x7AE4C0u;
    {
        const bool branch_taken_0x7ae4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae4c0) {
            ctx->pc = 0x7AE4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE4C0u;
            // 0x7ae4c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE538u;
            goto label_7ae538;
        }
    }
    ctx->pc = 0x7AE4C8u;
    // 0x7ae4c8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7AE4C8u;
    {
        const bool branch_taken_0x7ae4c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE4C8u;
        // 0x7ae4cc: 0x34620020  ori         $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae4c8) {
            ctx->pc = 0x7AE4D4u;
            goto label_7ae4d4;
        }
    }
    ctx->pc = 0x7AE4D0u;
    // 0x7ae4d0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_7ae4d4:
    // 0x7ae4d4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x7ae4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x7ae4d8: 0x8c636b34  lw          $v1, 0x6B34($v1)
    ctx->pc = 0x7ae4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B34u));
    // 0x7ae4dc: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x7ae4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x7ae4e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae4e4: 0x3113a  dsrl        $v0, $v1, 4
    ctx->pc = 0x7ae4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 4);
    // 0x7ae4e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae4ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE4ECu;
    {
        const bool branch_taken_0x7ae4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE4ECu;
        // 0x7ae4f0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae4ec) {
            ctx->pc = 0x7AE4FCu;
            goto label_7ae4fc;
        }
    }
    ctx->pc = 0x7AE4F4u;
    // 0x7ae4f4: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7AE4F4u;
    {
        const bool branch_taken_0x7ae4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ae4f4) {
            ctx->pc = 0x7AE4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE4F4u;
            // 0x7ae4f8: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE52Cu;
            goto label_7ae52c;
        }
    }
    ctx->pc = 0x7AE4FCu;
label_7ae4fc:
    // 0x7ae4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ae4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae500: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7ae500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7ae504: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7ae504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7ae508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ae508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae50c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7ae50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae510: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7ae510u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7ae514: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7AE514u;
    SET_GPR_U32(ctx, 31, 0x7AE51Cu);
    ctx->pc = 0x7AE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE514u;
    // 0x7ae518: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7AE514u, 0x7AE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE51Cu;
label_7ae51c:
    // 0x7ae51c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae520: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7ae520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x7ae524: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x7ae528: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_7ae52c:
    // 0x7ae52c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7ae52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7ae530: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x7ae534: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7ae534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7ae538:
    // 0x7ae538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7ae538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae540: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE540u;
        // 0x7ae544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE548u;
}
} // namespace gh_event
