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
// Function: movePlaySeqData__C9cEventVibP12cEventSeqVibT1
// Address: 0x7b24d0 - 0x7b2540
void movePlaySeqData__C9cEventVibP12cEventSeqVibT1_0x7b24d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeqData__C9cEventVibP12cEventSeqVibT1_0x7b24d0");
#endif

    switch (ctx->pc) {
        case 0x7b24f8u: goto label_7b24f8;
        case 0x7b252cu: goto label_7b252c;
        default: break;
    }

    ctx->pc = 0x7b24d0u;

    // 0x7b24d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b24d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b24d4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b24d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b24d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b24dc: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x7b24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x7b24e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b24e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b24e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7b24e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b24e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b24e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b24ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7b24ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b24f0: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7B24F0u;
    SET_GPR_U32(ctx, 31, 0x7B24F8u);
    ctx->pc = 0x7B24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B24F0u;
    // 0x7b24f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7B24F0u, 0x7B24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B24F8u;
label_7b24f8:
    // 0x7b24f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7b24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7b24fc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x7B24FCu;
    {
        const bool branch_taken_0x7b24fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b24fc) {
            ctx->pc = 0x7B2500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B24FCu;
            // 0x7b2500: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2530u;
            goto label_7b2530;
        }
    }
    ctx->pc = 0x7B2504u;
    // 0x7b2504: 0x5611000a  bnel        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x7B2504u;
    {
        const bool branch_taken_0x7b2504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x7b2504) {
            ctx->pc = 0x7B2508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2504u;
            // 0x7b2508: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2530u;
            goto label_7b2530;
        }
    }
    ctx->pc = 0x7B250Cu;
    // 0x7b250c: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x7b250cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b2510: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7b2510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x7b2514: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x7b2514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7b2518: 0x248480e0  addiu       $a0, $a0, -0x7F20
    ctx->pc = 0x7b2518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    // 0x7b251c: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x7b251cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x7b2520: 0x92050009  lbu         $a1, 0x9($s0)
    ctx->pc = 0x7b2520u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x7b2524: 0xc0af7e0  jal         func_2BDF80
    ctx->pc = 0x7B2524u;
    SET_GPR_U32(ctx, 31, 0x7B252Cu);
    ctx->pc = 0x7B2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2524u;
    // 0x7b2528: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDF80u, 0x7B2524u, 0x7B252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B252Cu;
label_7b252c:
    // 0x7b252c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b252cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b2530:
    // 0x7b2530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b2530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2538: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2538u;
        // 0x7b253c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2540u;
}
} // namespace gh_event
