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
// Function: modeFadeInWait__7cMcSave
// Address: 0x7c3e18 - 0x7c3ec0
void modeFadeInWait__7cMcSave_0x7c3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeFadeInWait__7cMcSave_0x7c3e18");
#endif

    switch (ctx->pc) {
        case 0x7c3e54u: goto label_7c3e54;
        case 0x7c3e5cu: goto label_7c3e5c;
        case 0x7c3e74u: goto label_7c3e74;
        case 0x7c3ea0u: goto label_7c3ea0;
        default: break;
    }

    ctx->pc = 0x7c3e18u;

    // 0x7c3e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c3e1c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3e20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c3e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3e24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3e2c: 0x24517470  addiu       $s1, $v0, 0x7470
    ctx->pc = 0x7c3e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x7c3e30: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x7c3e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c3e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3E34u;
    {
        const bool branch_taken_0x7c3e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3E34u;
        // 0x7c3e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3e34) {
            ctx->pc = 0x7C3E4Cu;
            goto label_7c3e4c;
        }
    }
    ctx->pc = 0x7C3E3Cu;
    // 0x7c3e3c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c3e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c3e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c3e44: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C3E44u;
    {
        const bool branch_taken_0x7c3e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3e44) {
            ctx->pc = 0x7C3E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3E44u;
            // 0x7c3e48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3EACu;
            goto label_7c3eac;
        }
    }
    ctx->pc = 0x7C3E4Cu;
label_7c3e4c:
    // 0x7c3e4c: 0xc1f22c2  jal         func_7C8B08
    ctx->pc = 0x7C3E4Cu;
    SET_GPR_U32(ctx, 31, 0x7C3E54u);
    ctx->pc = 0x7C3E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3E4Cu;
    // 0x7c3e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B08u, 0x7C3E4Cu, 0x7C3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3E54u;
label_7c3e54:
    // 0x7c3e54: 0xc1f0f10  jal         func_7C3C40
    ctx->pc = 0x7C3E54u;
    SET_GPR_U32(ctx, 31, 0x7C3E5Cu);
    ctx->pc = 0x7C3E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3E54u;
    // 0x7c3e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3C40u, 0x7C3E54u, 0x7C3E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3E5Cu;
label_7c3e5c:
    // 0x7c3e5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C3E5Cu;
    {
        const bool branch_taken_0x7c3e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3E5Cu;
        // 0x7c3e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3e5c) {
            ctx->pc = 0x7C3E6Cu;
            goto label_7c3e6c;
        }
    }
    ctx->pc = 0x7C3E64u;
    // 0x7c3e64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C3E64u;
    {
        const bool branch_taken_0x7c3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3E64u;
        // 0x7c3e68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3e64) {
            ctx->pc = 0x7C3EA4u;
            goto label_7c3ea4;
        }
    }
    ctx->pc = 0x7C3E6Cu;
label_7c3e6c:
    // 0x7c3e6c: 0xc1f213a  jal         func_7C84E8
    ctx->pc = 0x7C3E6Cu;
    SET_GPR_U32(ctx, 31, 0x7C3E74u);
    ctx->pc = 0x7C3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3E6Cu;
    // 0x7c3e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C84E8u, 0x7C3E6Cu, 0x7C3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3E74u;
label_7c3e74:
    // 0x7c3e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C3E74u;
    {
        const bool branch_taken_0x7c3e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3E74u;
        // 0x7c3e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3e74) {
            ctx->pc = 0x7C3E84u;
            goto label_7c3e84;
        }
    }
    ctx->pc = 0x7C3E7Cu;
    // 0x7c3e7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C3E7Cu;
    {
        const bool branch_taken_0x7c3e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3E7Cu;
        // 0x7c3e80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3e7c) {
            ctx->pc = 0x7C3EA4u;
            goto label_7c3ea4;
        }
    }
    ctx->pc = 0x7C3E84u;
label_7c3e84:
    // 0x7c3e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c3e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3e88: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7c3e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c3e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c3e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3e90: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7c3e90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7c3e94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c3e94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3e98: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7C3E98u;
    SET_GPR_U32(ctx, 31, 0x7C3EA0u);
    ctx->pc = 0x7C3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3E98u;
    // 0x7c3e9c: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7C3E98u, 0x7C3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3EA0u;
label_7c3ea0:
    // 0x7c3ea0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7c3ea4:
    // 0x7c3ea4: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x7c3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x7c3ea8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c3eac:
    // 0x7c3eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3EB4u;
        // 0x7c3eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3EBCu;
    // 0x7c3ebc: 0x0  nop
    ctx->pc = 0x7c3ebcu;
    // NOP
    ctx->pc = 0x7c3ec0u;
}
} // namespace gh_mcport
