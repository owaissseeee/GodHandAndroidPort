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
// Function: movePlay__12cEventFilter
// Address: 0x7af150 - 0x7af220
void movePlay__12cEventFilter_0x7af150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__12cEventFilter_0x7af150");
#endif

    switch (ctx->pc) {
        case 0x7af170u: goto label_7af170;
        case 0x7af180u: goto label_7af180;
        case 0x7af1acu: goto label_7af1ac;
        case 0x7af1ccu: goto label_7af1cc;
        case 0x7af1f4u: goto label_7af1f4;
        case 0x7af204u: goto label_7af204;
        default: break;
    }

    ctx->pc = 0x7af150u;

    // 0x7af150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7af150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7af154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7af154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7af158: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7af158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7af15c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7af15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7af160: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7af160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7af164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7af164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7af168: 0xc1ed050  jal         func_7B4140
    ctx->pc = 0x7AF168u;
    SET_GPR_U32(ctx, 31, 0x7AF170u);
    ctx->pc = 0x7AF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF168u;
    // 0x7af16c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4140u, 0x7AF168u, 0x7AF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF170u;
label_7af170:
    // 0x7af170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7af170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7af174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af178: 0xc1ecfec  jal         func_7B3FB0
    ctx->pc = 0x7AF178u;
    SET_GPR_U32(ctx, 31, 0x7AF180u);
    ctx->pc = 0x7AF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF178u;
    // 0x7af17c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B3FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B3FB0u, 0x7AF178u, 0x7AF180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF180u;
label_7af180:
    // 0x7af180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7af180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af184: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x7af184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x7af188: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x7af188u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x7af18c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AF18Cu;
    {
        const bool branch_taken_0x7af18c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7af18c) {
            ctx->pc = 0x7AF1ACu;
            goto label_7af1ac;
        }
    }
    ctx->pc = 0x7AF194u;
    // 0x7af194: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7af194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7af198: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7af198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7af19c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AF19Cu;
    {
        const bool branch_taken_0x7af19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF19Cu;
        // 0x7af1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af19c) {
            ctx->pc = 0x7AF1ACu;
            goto label_7af1ac;
        }
    }
    ctx->pc = 0x7AF1A4u;
    // 0x7af1a4: 0xc1ebd94  jal         func_7AF650
    ctx->pc = 0x7AF1A4u;
    SET_GPR_U32(ctx, 31, 0x7AF1ACu);
    ctx->pc = 0x7AF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF1A4u;
    // 0x7af1a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF650u, 0x7AF1A4u, 0x7AF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF1ACu;
label_7af1ac:
    // 0x7af1ac: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AF1ACu;
    {
        const bool branch_taken_0x7af1ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7af1ac) {
            ctx->pc = 0x7AF1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AF1ACu;
            // 0x7af1b0: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AF1D0u;
            goto label_7af1d0;
        }
    }
    ctx->pc = 0x7AF1B4u;
    // 0x7af1b4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x7af1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x7af1b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7af1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7af1bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AF1BCu;
    {
        const bool branch_taken_0x7af1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF1BCu;
        // 0x7af1c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af1bc) {
            ctx->pc = 0x7AF1CCu;
            goto label_7af1cc;
        }
    }
    ctx->pc = 0x7AF1C4u;
    // 0x7af1c4: 0xc1ebd94  jal         func_7AF650
    ctx->pc = 0x7AF1C4u;
    SET_GPR_U32(ctx, 31, 0x7AF1CCu);
    ctx->pc = 0x7AF1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF1C4u;
    // 0x7af1c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF650u, 0x7AF1C4u, 0x7AF1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF1CCu;
label_7af1cc:
    // 0x7af1cc: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7af1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_7af1d0:
    // 0x7af1d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7af1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7af1d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AF1D4u;
    {
        const bool branch_taken_0x7af1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF1D4u;
        // 0x7af1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af1d4) {
            ctx->pc = 0x7AF1FCu;
            goto label_7af1fc;
        }
    }
    ctx->pc = 0x7AF1DCu;
    // 0x7af1dc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AF1DCu;
    {
        const bool branch_taken_0x7af1dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7af1dc) {
            ctx->pc = 0x7AF1FCu;
            goto label_7af1fc;
        }
    }
    ctx->pc = 0x7AF1E4u;
    // 0x7af1e4: 0x12120005  beq         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AF1E4u;
    {
        const bool branch_taken_0x7af1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x7AF1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF1E4u;
        // 0x7af1e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af1e4) {
            ctx->pc = 0x7AF1FCu;
            goto label_7af1fc;
        }
    }
    ctx->pc = 0x7AF1ECu;
    // 0x7af1ec: 0xc1ebcc8  jal         func_7AF320
    ctx->pc = 0x7AF1ECu;
    SET_GPR_U32(ctx, 31, 0x7AF1F4u);
    ctx->pc = 0x7AF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF1ECu;
    // 0x7af1f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF320u, 0x7AF1ECu, 0x7AF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF1F4u;
label_7af1f4:
    // 0x7af1f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AF1F4u;
    {
        const bool branch_taken_0x7af1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF1F4u;
        // 0x7af1f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af1f4) {
            ctx->pc = 0x7AF208u;
            goto label_7af208;
        }
    }
    ctx->pc = 0x7AF1FCu;
label_7af1fc:
    // 0x7af1fc: 0xc1ebc88  jal         func_7AF220
    ctx->pc = 0x7AF1FCu;
    SET_GPR_U32(ctx, 31, 0x7AF204u);
    ctx->pc = 0x7AF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF1FCu;
    // 0x7af200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF220u, 0x7AF1FCu, 0x7AF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF204u;
label_7af204:
    // 0x7af204: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7af204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7af208:
    // 0x7af208: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7af208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7af20c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7af20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7af210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7af210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7af214: 0x3e00008  jr          $ra
    ctx->pc = 0x7AF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF214u;
        // 0x7af218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AF214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AF21Cu;
    // 0x7af21c: 0x0  nop
    ctx->pc = 0x7af21cu;
    // NOP
    ctx->pc = 0x7af220u;
}
} // namespace gh_event
