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
// Function: complete__7cMcLoad
// Address: 0x7c29e8 - 0x7c2ad8
void complete__7cMcLoad_0x7c29e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("complete__7cMcLoad_0x7c29e8");
#endif

    switch (ctx->pc) {
        case 0x7c2a44u: goto label_7c2a44;
        case 0x7c2ab0u: goto label_7c2ab0;
        default: break;
    }

    ctx->pc = 0x7c29e8u;

    // 0x7c29e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c29e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c29ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c29ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c29f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c29f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c29f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c29f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c29f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c29fc: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c2a00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2A00u;
    {
        const bool branch_taken_0x7c2a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2A00u;
        // 0x7c2a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2a00) {
            ctx->pc = 0x7C2A18u;
            goto label_7c2a18;
        }
    }
    ctx->pc = 0x7C2A08u;
    // 0x7c2a08: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7C2A08u;
    {
        const bool branch_taken_0x7c2a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2A08u;
        // 0x7c2a0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2a08) {
            ctx->pc = 0x7C2A6Cu;
            goto label_7c2a6c;
        }
    }
    ctx->pc = 0x7C2A10u;
    // 0x7c2a10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x7C2A10u;
    {
        const bool branch_taken_0x7c2a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2A10u;
        // 0x7c2a14: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2a10) {
            ctx->pc = 0x7C2ACCu;
            goto label_7c2acc;
        }
    }
    ctx->pc = 0x7C2A18u;
label_7c2a18:
    // 0x7c2a18: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x7c2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c2a1c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x7c2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x7c2a20: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x7c2a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
    // 0x7c2a24: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x7c2a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x7c2a28: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x7c2a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5E690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E690Cu, _value); } while (0);
    // 0x7c2a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2a30: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x7c2a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7c2a34: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x7c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7c2a38: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x7c2a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c2a3c: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C2A3Cu;
    SET_GPR_U32(ctx, 31, 0x7C2A44u);
    ctx->pc = 0x7C2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2A3Cu;
    // 0x7c2a40: 0xae2500e8  sw          $a1, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C2A3Cu, 0x7C2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2A44u;
label_7c2a44:
    // 0x7c2a44: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c2a48: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7c2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7c2a4c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x7c2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x7c2a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7c2a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2a54: 0x8c827a24  lw          $v0, 0x7A24($a0)
    ctx->pc = 0x7c2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x7c2a58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7c2a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7c2a5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7c2a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x7c2a60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c2a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c2a64: 0xac827a24  sw          $v0, 0x7A24($a0)
    ctx->pc = 0x7c2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 2));
    // 0x7c2a68: 0xae2500f4  sw          $a1, 0xF4($s1)
    ctx->pc = 0x7c2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 5));
label_7c2a6c:
    // 0x7c2a6c: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x7c2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c2a70: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C2A70u;
    {
        const bool branch_taken_0x7c2a70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2A70u;
        // 0x7c2a74: 0x28a20050  slti        $v0, $a1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2a70) {
            ctx->pc = 0x7C2A98u;
            goto label_7c2a98;
        }
    }
    ctx->pc = 0x7C2A78u;
    // 0x7c2a78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C2A78u;
    {
        const bool branch_taken_0x7c2a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2A78u;
        // 0x7c2a7c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2a78) {
            ctx->pc = 0x7C2ABCu;
            goto label_7c2abc;
        }
    }
    ctx->pc = 0x7C2A80u;
    // 0x7c2a80: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x7c2a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x7c2a84: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x7c2a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x7c2a88: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7c2a88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x7c2a8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c2a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c2a90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x7C2A90u;
    {
        const bool branch_taken_0x7c2a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2A90u;
        // 0x7c2a94: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2a90) {
            ctx->pc = 0x7C2AC0u;
            goto label_7c2ac0;
        }
    }
    ctx->pc = 0x7C2A98u;
label_7c2a98:
    // 0x7c2a98: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c2a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2aa0: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x7c2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x7c2aa4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x7c2aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x7c2aa8: 0xc1f0b42  jal         func_7C2D08
    ctx->pc = 0x7C2AA8u;
    SET_GPR_U32(ctx, 31, 0x7C2AB0u);
    ctx->pc = 0x7C2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2AA8u;
    // 0x7c2aac: 0xac437a24  sw          $v1, 0x7A24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 31268), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2D08u, 0x7C2AA8u, 0x7C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2AB0u;
label_7c2ab0:
    // 0x7c2ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2AB4u;
    {
        const bool branch_taken_0x7c2ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2AB4u;
        // 0x7c2ab8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2ab4) {
            ctx->pc = 0x7C2AC4u;
            goto label_7c2ac4;
        }
    }
    ctx->pc = 0x7C2ABCu;
label_7c2abc:
    // 0x7c2abc: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x7c2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_7c2ac0:
    // 0x7c2ac0: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x7c2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_7c2ac4:
    // 0x7c2ac4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c2ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c2ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c2ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c2acc:
    // 0x7c2acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c2accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c2ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2AD0u;
        // 0x7c2ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2AD8u;
}
} // namespace gh_mcport
