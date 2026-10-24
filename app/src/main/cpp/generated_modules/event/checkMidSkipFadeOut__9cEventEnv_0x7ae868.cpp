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
// Function: checkMidSkipFadeOut__9cEventEnv
// Address: 0x7ae868 - 0x7ae8f8
void checkMidSkipFadeOut__9cEventEnv_0x7ae868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkMidSkipFadeOut__9cEventEnv_0x7ae868");
#endif

    switch (ctx->pc) {
        case 0x7ae8b4u: goto label_7ae8b4;
        case 0x7ae8c4u: goto label_7ae8c4;
        case 0x7ae8d4u: goto label_7ae8d4;
        default: break;
    }

    ctx->pc = 0x7ae868u;

    // 0x7ae868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae86c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ae874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae878: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x7ae878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae87c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x7ae87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x7ae880: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7AE880u;
    {
        const bool branch_taken_0x7ae880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE880u;
        // 0x7ae884: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae880) {
            ctx->pc = 0x7AE8E4u;
            goto label_7ae8e4;
        }
    }
    ctx->pc = 0x7AE888u;
    // 0x7ae888: 0x24447470  addiu       $a0, $v0, 0x7470
    ctx->pc = 0x7ae888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x7ae88c: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x7ae88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x7ae890: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x7AE890u;
    {
        const bool branch_taken_0x7ae890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae890) {
            ctx->pc = 0x7AE894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE890u;
            // 0x7ae894: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE8E8u;
            goto label_7ae8e8;
        }
    }
    ctx->pc = 0x7AE898u;
    // 0x7ae898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ae898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae89c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7ae89cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7ae8a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ae8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae8a4: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x7ae8a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7ae8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ae8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae8ac: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7AE8ACu;
    SET_GPR_U32(ctx, 31, 0x7AE8B4u);
    ctx->pc = 0x7AE8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE8ACu;
    // 0x7ae8b0: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7AE8ACu, 0x7AE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE8B4u;
label_7ae8b4:
    // 0x7ae8b4: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x7ae8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x7ae8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ae8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae8bc: 0xc1eb870  jal         func_7AE1C0
    ctx->pc = 0x7AE8BCu;
    SET_GPR_U32(ctx, 31, 0x7AE8C4u);
    ctx->pc = 0x7AE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE8BCu;
    // 0x7ae8c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE1C0u, 0x7AE8BCu, 0x7AE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE8C4u;
label_7ae8c4:
    // 0x7ae8c4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ae8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ae8c8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7ae8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7ae8cc: 0xc1ec0e0  jal         func_7B0380
    ctx->pc = 0x7AE8CCu;
    SET_GPR_U32(ctx, 31, 0x7AE8D4u);
    ctx->pc = 0x7AE8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE8CCu;
    // 0x7ae8d0: 0x248458d0  addiu       $a0, $a0, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0380u, 0x7AE8CCu, 0x7AE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE8D4u;
label_7ae8d4:
    // 0x7ae8d4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae8d8: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x7ae8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x7ae8dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ae8e0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_7ae8e4:
    // 0x7ae8e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ae8e8:
    // 0x7ae8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE8ECu;
        // 0x7ae8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE8F4u;
    // 0x7ae8f4: 0x0  nop
    ctx->pc = 0x7ae8f4u;
    // NOP
    ctx->pc = 0x7ae8f8u;
}
} // namespace gh_event
