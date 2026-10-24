#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: modeMain__7cMcSave
// Address: 0x7c3ec0 - 0x7c3f48
void modeMain__7cMcSave_0x7c3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeMain__7cMcSave_0x7c3ec0");
#endif

    switch (ctx->pc) {
        case 0x7c3efcu: goto label_7c3efc;
        case 0x7c3f2cu: goto label_7c3f2c;
        default: break;
    }

    ctx->pc = 0x7c3ec0u;

    // 0x7c3ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3ec4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3ec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3ed4: 0x24517470  addiu       $s1, $v0, 0x7470
    ctx->pc = 0x7c3ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x7c3ed8: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x7c3ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c3edc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3EDCu;
    {
        const bool branch_taken_0x7c3edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3EDCu;
        // 0x7c3ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3edc) {
            ctx->pc = 0x7C3EF4u;
            goto label_7c3ef4;
        }
    }
    ctx->pc = 0x7C3EE4u;
    // 0x7c3ee4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c3ee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c3ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c3eec: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x7C3EECu;
    {
        const bool branch_taken_0x7c3eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3eec) {
            ctx->pc = 0x7C3EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3EECu;
            // 0x7c3ef0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3F38u;
            goto label_7c3f38;
        }
    }
    ctx->pc = 0x7C3EF4u;
label_7c3ef4:
    // 0x7c3ef4: 0xc1f0ffe  jal         func_7C3FF8
    ctx->pc = 0x7C3EF4u;
    SET_GPR_U32(ctx, 31, 0x7C3EFCu);
    ctx->pc = 0x7C3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3EF4u;
    // 0x7c3ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3FF8u, 0x7C3EF4u, 0x7C3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3EFCu;
label_7c3efc:
    // 0x7c3efc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x7c3efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7c3f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c3f04: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C3F04u;
    {
        const bool branch_taken_0x7c3f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c3f04) {
            ctx->pc = 0x7C3F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3F04u;
            // 0x7c3f08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3F38u;
            goto label_7c3f38;
        }
    }
    ctx->pc = 0x7C3F0Cu;
    // 0x7c3f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c3f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c3f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3f14: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7c3f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c3f18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c3f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3f1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c3f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3f20: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7c3f20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7c3f24: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7C3F24u;
    SET_GPR_U32(ctx, 31, 0x7C3F2Cu);
    ctx->pc = 0x7C3F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3F24u;
    // 0x7c3f28: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7C3F24u, 0x7C3F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3F2Cu;
label_7c3f2c:
    // 0x7c3f2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c3f30: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x7c3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x7c3f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3f38:
    // 0x7c3f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3f40: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3F40u;
        // 0x7c3f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3F48u;
}
} // namespace gh_mcport
