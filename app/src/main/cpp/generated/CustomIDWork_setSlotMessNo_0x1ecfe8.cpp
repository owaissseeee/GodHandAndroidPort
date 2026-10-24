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

// Function: CustomIDWork_setSlotMessNo
// Address: 0x1ecfe8 - 0x1ed050
void CustomIDWork_setSlotMessNo_0x1ecfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_setSlotMessNo_0x1ecfe8");
#endif

    switch (ctx->pc) {
        case 0x1ed028u: goto label_1ed028;
        case 0x1ed038u: goto label_1ed038;
        default: break;
    }

    ctx->pc = 0x1ecfe8u;

    // 0x1ecfe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ecfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ecfec: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1ecfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ecff0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ecff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ecff4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1ecff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ecff8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ecff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ecffc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ecffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed000: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ed000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ed004: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED008u;
    {
        const bool branch_taken_0x1ed008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED008u;
        // 0x1ed00c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed008) {
            ctx->pc = 0x1ED038u;
            goto label_1ed038;
        }
    }
    ctx->pc = 0x1ED010u;
    // 0x1ed010: 0x2410007c  addiu       $s0, $zero, 0x7C
    ctx->pc = 0x1ed010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ed014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed018: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x1ed018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1ed01c: 0x260404bc  addiu       $a0, $s0, 0x4BC
    ctx->pc = 0x1ed01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    // 0x1ed020: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1ED020u;
    SET_GPR_U32(ctx, 31, 0x1ED028u);
    ctx->pc = 0x1ED024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED020u;
    // 0x1ed024: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1ED020u, 0x1ED028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED028u;
label_1ed028:
    // 0x1ed028: 0x261012c8  addiu       $s0, $s0, 0x12C8
    ctx->pc = 0x1ed028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4808));
    // 0x1ed02c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ed02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed030: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1ED030u;
    SET_GPR_U32(ctx, 31, 0x1ED038u);
    ctx->pc = 0x1ED034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED030u;
    // 0x1ed034: 0x2502021  addu        $a0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1ED030u, 0x1ED038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED038u;
label_1ed038:
    // 0x1ed038: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ed038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed03c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed040: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ed040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed048: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED048u;
        // 0x1ed04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED050u;
}
