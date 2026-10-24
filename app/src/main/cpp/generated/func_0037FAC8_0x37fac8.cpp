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

// Function: func_0037FAC8
// Address: 0x37fac8 - 0x37fb70
void func_0037FAC8_0x37fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FAC8_0x37fac8");
#endif

    switch (ctx->pc) {
        case 0x37fb00u: goto label_37fb00;
        case 0x37fb14u: goto label_37fb14;
        case 0x37fb20u: goto label_37fb20;
        case 0x37fb2cu: goto label_37fb2c;
        case 0x37fb38u: goto label_37fb38;
        case 0x37fb4cu: goto label_37fb4c;
        default: break;
    }

    ctx->pc = 0x37fac8u;

    // 0x37fac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37facc: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x37faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x37fad0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37fad4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37fad8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37fadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37fae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fae4: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x37fae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37fae8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37fae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37faec: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x37faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x37faf0: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x37faf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x37faf4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x37faf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x37faf8: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x37FAF8u;
    SET_GPR_U32(ctx, 31, 0x37FB00u);
    ctx->pc = 0x37FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FAF8u;
    // 0x37fafc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x37FAF8u, 0x37FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB00u;
label_37fb00:
    // 0x37fb00: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x37fb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37fb04: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x37FB04u;
    {
        const bool branch_taken_0x37fb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fb04) {
            ctx->pc = 0x37FB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FB04u;
            // 0x37fb08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FB58u;
            goto label_37fb58;
        }
    }
    ctx->pc = 0x37FB0Cu;
    // 0x37fb0c: 0xc0ca92a  jal         func_32A4A8
    ctx->pc = 0x37FB0Cu;
    SET_GPR_U32(ctx, 31, 0x37FB14u);
    ctx->pc = 0x37FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB0Cu;
    // 0x37fb10: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x37FB0Cu, 0x37FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB14u;
label_37fb14:
    // 0x37fb14: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x37fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x37fb18: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x37FB18u;
    SET_GPR_U32(ctx, 31, 0x37FB20u);
    ctx->pc = 0x37FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB18u;
    // 0x37fb1c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x37FB18u, 0x37FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB20u;
label_37fb20:
    // 0x37fb20: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37fb24: 0xc0ca96e  jal         func_32A5B8
    ctx->pc = 0x37FB24u;
    SET_GPR_U32(ctx, 31, 0x37FB2Cu);
    ctx->pc = 0x37FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB24u;
    // 0x37fb28: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5B8u, 0x37FB24u, 0x37FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB2Cu;
label_37fb2c:
    // 0x37fb2c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37fb30: 0xc0ca992  jal         func_32A648
    ctx->pc = 0x37FB30u;
    SET_GPR_U32(ctx, 31, 0x37FB38u);
    ctx->pc = 0x37FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB30u;
    // 0x37fb34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A648u, 0x37FB30u, 0x37FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB38u;
label_37fb38:
    // 0x37fb38: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37fb3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37fb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37fb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fb44: 0xc0e03ac  jal         func_380EB0
    ctx->pc = 0x37FB44u;
    SET_GPR_U32(ctx, 31, 0x37FB4Cu);
    ctx->pc = 0x37FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FB44u;
    // 0x37fb48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380EB0u, 0x37FB44u, 0x37FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FB4Cu;
label_37fb4c:
    // 0x37fb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37fb50: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x37fb50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37fb54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37fb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37fb58:
    // 0x37fb58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37fb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fb5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37fb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fb64: 0x3e00008  jr          $ra
    ctx->pc = 0x37FB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB64u;
        // 0x37fb68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FB6Cu;
    // 0x37fb6c: 0x0  nop
    ctx->pc = 0x37fb6cu;
    // NOP
    ctx->pc = 0x37fb70u;
}
