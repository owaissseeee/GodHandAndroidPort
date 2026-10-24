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
// Function: deleteFile__7cMcSave
// Address: 0x7c5aa0 - 0x7c5b78
void deleteFile__7cMcSave_0x7c5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deleteFile__7cMcSave_0x7c5aa0");
#endif

    switch (ctx->pc) {
        case 0x7c5adcu: goto label_7c5adc;
        case 0x7c5af8u: goto label_7c5af8;
        case 0x7c5b08u: goto label_7c5b08;
        case 0x7c5b24u: goto label_7c5b24;
        case 0x7c5b40u: goto label_7c5b40;
        default: break;
    }

    ctx->pc = 0x7c5aa0u;

    // 0x7c5aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c5aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c5aa4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c5aa8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c5aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c5aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c5ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c5ab4: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c5ab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C5AB8u;
    {
        const bool branch_taken_0x7c5ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5AB8u;
        // 0x7c5abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5ab8) {
            ctx->pc = 0x7C5AD0u;
            goto label_7c5ad0;
        }
    }
    ctx->pc = 0x7C5AC0u;
    // 0x7c5ac0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7C5AC0u;
    {
        const bool branch_taken_0x7c5ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5AC0u;
        // 0x7c5ac4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5ac0) {
            ctx->pc = 0x7C5B14u;
            goto label_7c5b14;
        }
    }
    ctx->pc = 0x7C5AC8u;
    // 0x7c5ac8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7C5AC8u;
    {
        const bool branch_taken_0x7c5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5AC8u;
        // 0x7c5acc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5ac8) {
            ctx->pc = 0x7C5B68u;
            goto label_7c5b68;
        }
    }
    ctx->pc = 0x7C5AD0u;
label_7c5ad0:
    // 0x7c5ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ad4: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C5AD4u;
    SET_GPR_U32(ctx, 31, 0x7C5ADCu);
    ctx->pc = 0x7C5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5AD4u;
    // 0x7c5ad8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C5AD4u, 0x7C5ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5ADCu;
label_7c5adc:
    // 0x7c5adc: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c5ae0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ae4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c5ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ae8: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x7c5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x7c5aec: 0x24a50bf0  addiu       $a1, $a1, 0xBF0
    ctx->pc = 0x7c5aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
    // 0x7c5af0: 0xc1f0d04  jal         func_7C3410
    ctx->pc = 0x7C5AF0u;
    SET_GPR_U32(ctx, 31, 0x7C5AF8u);
    ctx->pc = 0x7C5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5AF0u;
    // 0x7c5af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3410u, 0x7C5AF0u, 0x7C5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5AF8u;
label_7c5af8:
    // 0x7c5af8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5afc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c5b00: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5B00u;
    SET_GPR_U32(ctx, 31, 0x7C5B08u);
    ctx->pc = 0x7C5B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5B00u;
    // 0x7c5b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5B00u, 0x7C5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5B08u;
label_7c5b08:
    // 0x7c5b08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C5B08u;
    {
        const bool branch_taken_0x7c5b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5B08u;
        // 0x7c5b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5b08) {
            ctx->pc = 0x7C5B50u;
            goto label_7c5b50;
        }
    }
    ctx->pc = 0x7C5B10u;
    // 0x7c5b10: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c5b14:
    // 0x7c5b14: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5b18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5b1c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5B1Cu;
    SET_GPR_U32(ctx, 31, 0x7C5B24u);
    ctx->pc = 0x7C5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5B1Cu;
    // 0x7c5b20: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5B1Cu, 0x7C5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5B24u;
label_7c5b24:
    // 0x7c5b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5b2c: 0x5602000d  bnel        $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C5B2Cu;
    {
        const bool branch_taken_0x7c5b2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c5b2c) {
            ctx->pc = 0x7C5B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C5B2Cu;
            // 0x7c5b30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C5B64u;
            goto label_7c5b64;
        }
    }
    ctx->pc = 0x7C5B34u;
    // 0x7c5b34: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5b38: 0xc1f1c5e  jal         func_7C7178
    ctx->pc = 0x7C5B38u;
    SET_GPR_U32(ctx, 31, 0x7C5B40u);
    ctx->pc = 0x7C5B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5B38u;
    // 0x7c5b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7178u, 0x7C5B38u, 0x7C5B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5B40u;
label_7c5b40:
    // 0x7c5b40: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C5B40u;
    {
        const bool branch_taken_0x7c5b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5B40u;
        // 0x7c5b44: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5b40) {
            ctx->pc = 0x7C5B54u;
            goto label_7c5b54;
        }
    }
    ctx->pc = 0x7C5B48u;
    // 0x7c5b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C5B48u;
    {
        const bool branch_taken_0x7c5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5B48u;
        // 0x7c5b4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5b48) {
            ctx->pc = 0x7C5B54u;
            goto label_7c5b54;
        }
    }
    ctx->pc = 0x7C5B50u;
label_7c5b50:
    // 0x7c5b50: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c5b54:
    // 0x7c5b54: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c5b58: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5b5c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c5b60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c5b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c5b64:
    // 0x7c5b64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c5b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c5b68:
    // 0x7c5b68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c5b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c5b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C5B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5B6Cu;
        // 0x7c5b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C5B74u;
    // 0x7c5b74: 0x0  nop
    ctx->pc = 0x7c5b74u;
    // NOP
    ctx->pc = 0x7c5b78u;
}
} // namespace gh_mcport
