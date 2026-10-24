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
// Function: movePlay__C8cEventSe
// Address: 0x7b1b28 - 0x7b1c20
void movePlay__C8cEventSe_0x7b1b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C8cEventSe_0x7b1b28");
#endif

    switch (ctx->pc) {
        case 0x7b1b64u: goto label_7b1b64;
        case 0x7b1b80u: goto label_7b1b80;
        case 0x7b1b8cu: goto label_7b1b8c;
        case 0x7b1b9cu: goto label_7b1b9c;
        case 0x7b1bc8u: goto label_7b1bc8;
        case 0x7b1bfcu: goto label_7b1bfc;
        default: break;
    }

    ctx->pc = 0x7b1b28u;

    // 0x7b1b28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7b1b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7b1b2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7b1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b1b30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7b1b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7b1b34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7b1b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1b38: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7b1b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7b1b3c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b1b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b1b40: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7b1b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7b1b44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x7b1b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1b48: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7b1b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7b1b4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7b1b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7b1b50: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x7b1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x7b1b54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7b1b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7b1b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b1b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b1b5c: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7B1B5Cu;
    SET_GPR_U32(ctx, 31, 0x7B1B64u);
    ctx->pc = 0x7B1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1B5Cu;
    // 0x7b1b60: 0x3c14007b  lui         $s4, 0x7B (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7B1B5Cu, 0x7B1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1B64u;
label_7b1b64:
    // 0x7b1b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7b1b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7b1b68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7B1B68u;
    {
        const bool branch_taken_0x7b1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1B68u;
        // 0x7b1b6c: 0x8e825260  lw          $v0, 0x5260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1b68) {
            ctx->pc = 0x7B1BB0u;
            goto label_7b1bb0;
        }
    }
    ctx->pc = 0x7B1B70u;
    // 0x7b1b70: 0x8e530014  lw          $s3, 0x14($s2)
    ctx->pc = 0x7b1b70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7b1b74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7b1b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1b78: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x7B1B78u;
    {
        const bool branch_taken_0x7b1b78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1B78u;
        // 0x7b1b7c: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1b78) {
            ctx->pc = 0x7B1BB0u;
            goto label_7b1bb0;
        }
    }
    ctx->pc = 0x7B1B80u;
label_7b1b80:
    // 0x7b1b80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7b1b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1b84: 0xc1ec888  jal         func_7B2220
    ctx->pc = 0x7B1B84u;
    SET_GPR_U32(ctx, 31, 0x7B1B8Cu);
    ctx->pc = 0x7B1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1B84u;
    // 0x7b1b88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2220u, 0x7B1B84u, 0x7B1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1B8Cu;
label_7b1b8c:
    // 0x7b1b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B1B8Cu;
    {
        const bool branch_taken_0x7b1b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1B8Cu;
        // 0x7b1b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1b8c) {
            ctx->pc = 0x7B1B9Cu;
            goto label_7b1b9c;
        }
    }
    ctx->pc = 0x7B1B94u;
    // 0x7b1b94: 0xc1ec708  jal         func_7B1C20
    ctx->pc = 0x7B1B94u;
    SET_GPR_U32(ctx, 31, 0x7B1B9Cu);
    ctx->pc = 0x7B1B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1B94u;
    // 0x7b1b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1C20u, 0x7B1B94u, 0x7B1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1B9Cu;
label_7b1b9c:
    // 0x7b1b9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7b1b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7b1ba0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x7b1ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x7b1ba4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7B1BA4u;
    {
        const bool branch_taken_0x7b1ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1BA4u;
        // 0x7b1ba8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1ba4) {
            ctx->pc = 0x7B1B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b1b80;
        }
    }
    ctx->pc = 0x7B1BACu;
    // 0x7b1bac: 0x8e825260  lw          $v0, 0x5260($s4)
    ctx->pc = 0x7b1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21088)));
label_7b1bb0:
    // 0x7b1bb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7b1bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7b1bb4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B1BB4u;
    {
        const bool branch_taken_0x7b1bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1BB4u;
        // 0x7b1bb8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1bb4) {
            ctx->pc = 0x7B1C00u;
            goto label_7b1c00;
        }
    }
    ctx->pc = 0x7B1BBCu;
    // 0x7b1bbc: 0x26b05280  addiu       $s0, $s5, 0x5280
    ctx->pc = 0x7b1bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 21120));
    // 0x7b1bc0: 0xc1eba6a  jal         func_7AE9A8
    ctx->pc = 0x7B1BC0u;
    SET_GPR_U32(ctx, 31, 0x7B1BC8u);
    ctx->pc = 0x7B1BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1BC0u;
    // 0x7b1bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9A8u, 0x7B1BC0u, 0x7B1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1BC8u;
label_7b1bc8:
    // 0x7b1bc8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7B1BC8u;
    {
        const bool branch_taken_0x7b1bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b1bc8) {
            ctx->pc = 0x7B1BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B1BC8u;
            // 0x7b1bcc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B1C00u;
            goto label_7b1c00;
        }
    }
    ctx->pc = 0x7B1BD0u;
    // 0x7b1bd0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x7b1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7b1bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7b1bd8: 0x0  nop
    ctx->pc = 0x7b1bd8u;
    // NOP
    // 0x7b1bdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7b1bdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b1be0: 0x0  nop
    ctx->pc = 0x7b1be0u;
    // NOP
    // 0x7b1be4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x7B1BE4u;
    {
        const bool branch_taken_0x7b1be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b1be4) {
            ctx->pc = 0x7B1BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B1BE4u;
            // 0x7b1be8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B1C00u;
            goto label_7b1c00;
        }
    }
    ctx->pc = 0x7B1BECu;
    // 0x7b1bec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7b1becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7b1bf0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7b1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7b1bf4: 0xc0b468c  jal         func_2D1A30
    ctx->pc = 0x7B1BF4u;
    SET_GPR_U32(ctx, 31, 0x7B1BFCu);
    ctx->pc = 0x7B1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1BF4u;
    // 0x7b1bf8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1A30u, 0x7B1BF4u, 0x7B1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1BFCu;
label_7b1bfc:
    // 0x7b1bfc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7b1bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7b1c00:
    // 0x7b1c00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7b1c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b1c04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7b1c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b1c08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7b1c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b1c0c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7b1c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b1c10: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7b1c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b1c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b1c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b1c18: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1C18u;
        // 0x7b1c1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B1C20u;
}
} // namespace gh_event
