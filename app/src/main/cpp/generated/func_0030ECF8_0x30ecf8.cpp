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

// Function: func_0030ECF8
// Address: 0x30ecf8 - 0x30ee08
void func_0030ECF8_0x30ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030ECF8_0x30ecf8");
#endif

    switch (ctx->pc) {
        case 0x30ed4cu: goto label_30ed4c;
        case 0x30ed64u: goto label_30ed64;
        case 0x30ed7cu: goto label_30ed7c;
        case 0x30ed9cu: goto label_30ed9c;
        case 0x30edb4u: goto label_30edb4;
        case 0x30edccu: goto label_30edcc;
        case 0x30ede4u: goto label_30ede4;
        default: break;
    }

    ctx->pc = 0x30ecf8u;

    // 0x30ecf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30ecfc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x30ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x30ed00: 0x3c06007c  lui         $a2, 0x7C
    ctx->pc = 0x30ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)124 << 16));
    // 0x30ed04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ed08: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30ed08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30ed0c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30ed10: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x30ed10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x30ed14: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30ed18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30ed1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30ed1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ed20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ed24: 0xac623cf8  sw          $v0, 0x3CF8($v1)
    ctx->pc = 0x30ed24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C3CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3CF8u, _value); } while (0);
    // 0x30ed28: 0xaca63d00  sw          $a2, 0x3D00($a1)
    ctx->pc = 0x30ed28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3C3D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3D00u, _value); } while (0);
    // 0x30ed2c: 0x10910007  beq         $a0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30ED2Cu;
    {
        const bool branch_taken_0x30ed2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x30ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED2Cu;
        // 0x30ed30: 0xace63cf4  sw          $a2, 0x3CF4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15604), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed2c) {
            ctx->pc = 0x30ED4Cu;
            goto label_30ed4c;
        }
    }
    ctx->pc = 0x30ED34u;
    // 0x30ed34: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ed38: 0x3c05008a  lui         $a1, 0x8A
    ctx->pc = 0x30ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)138 << 16));
    // 0x30ed3c: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x30ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    // 0x30ed40: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x30ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x30ed44: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30ED44u;
    SET_GPR_U32(ctx, 31, 0x30ED4Cu);
    ctx->pc = 0x30ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED44u;
    // 0x30ed48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30ED44u, 0x30ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED4Cu;
label_30ed4c:
    // 0x30ed4c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ed50: 0x3c0500f5  lui         $a1, 0xF5
    ctx->pc = 0x30ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)245 << 16));
    // 0x30ed54: 0x24844210  addiu       $a0, $a0, 0x4210
    ctx->pc = 0x30ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16912));
    // 0x30ed58: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x30ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x30ed5c: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30ED5Cu;
    SET_GPR_U32(ctx, 31, 0x30ED64u);
    ctx->pc = 0x30ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED5Cu;
    // 0x30ed60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30ED5Cu, 0x30ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED64u;
label_30ed64:
    // 0x30ed64: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30ed68: 0x3c050111  lui         $a1, 0x111
    ctx->pc = 0x30ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)273 << 16));
    // 0x30ed6c: 0x24844230  addiu       $a0, $a0, 0x4230
    ctx->pc = 0x30ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16944));
    // 0x30ed70: 0x3c06000b  lui         $a2, 0xB
    ctx->pc = 0x30ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
    // 0x30ed74: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30ED74u;
    SET_GPR_U32(ctx, 31, 0x30ED7Cu);
    ctx->pc = 0x30ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED74u;
    // 0x30ed78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30ED74u, 0x30ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED7Cu;
label_30ed7c:
    // 0x30ed7c: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30ed7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30ed80: 0x3c0600e3  lui         $a2, 0xE3
    ctx->pc = 0x30ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)227 << 16));
    // 0x30ed84: 0x26104220  addiu       $s0, $s0, 0x4220
    ctx->pc = 0x30ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16928));
    // 0x30ed88: 0x3c05011c  lui         $a1, 0x11C
    ctx->pc = 0x30ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)284 << 16));
    // 0x30ed8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ed90: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x30ed90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x30ed94: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30ED94u;
    SET_GPR_U32(ctx, 31, 0x30ED9Cu);
    ctx->pc = 0x30ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED94u;
    // 0x30ed98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30ED94u, 0x30ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED9Cu;
label_30ed9c:
    // 0x30ed9c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30eda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30eda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eda4: 0x24844240  addiu       $a0, $a0, 0x4240
    ctx->pc = 0x30eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
    // 0x30eda8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30eda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30edac: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30EDACu;
    SET_GPR_U32(ctx, 31, 0x30EDB4u);
    ctx->pc = 0x30EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDACu;
    // 0x30edb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30EDACu, 0x30EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDB4u;
label_30edb4:
    // 0x30edb4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30edb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30edb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30edbc: 0x24844c10  addiu       $a0, $a0, 0x4C10
    ctx->pc = 0x30edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19472));
    // 0x30edc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30edc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30edc4: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30EDC4u;
    SET_GPR_U32(ctx, 31, 0x30EDCCu);
    ctx->pc = 0x30EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDC4u;
    // 0x30edc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30EDC4u, 0x30EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDCCu;
label_30edcc:
    // 0x30edcc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30edccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30edd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30edd4: 0x24844c20  addiu       $a0, $a0, 0x4C20
    ctx->pc = 0x30edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19488));
    // 0x30edd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30edd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eddc: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x30EDDCu;
    SET_GPR_U32(ctx, 31, 0x30EDE4u);
    ctx->pc = 0x30EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDDCu;
    // 0x30ede0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x30EDDCu, 0x30EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDE4u;
label_30ede4:
    // 0x30ede4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30ede8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30edec: 0xac503cf0  sw          $s0, 0x3CF0($v0)
    ctx->pc = 0x30edecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3C3CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3CF0u, _value); } while (0);
    // 0x30edf0: 0xa0713cfc  sb          $s1, 0x3CFC($v1)
    ctx->pc = 0x30edf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3C3CFCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3C3CFCu, _value); } while (0);
    // 0x30edf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30edf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30edf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30edf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30edfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x30EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE00u;
        // 0x30ee04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EE08u;
}
