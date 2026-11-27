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

// Function: SeEmitter_update
// Address: 0x2c8ad8 - 0x2c8b68
void SeEmitter_update_0x2c8ad8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeEmitter_update_0x2c8ad8");
#endif

    if (__builtin_expect(ctx->pc != 0x2c8ad8u, 0)) {
        switch (ctx->pc) {
            case 0x2c8b08u: goto label_2c8b08;
            case 0x2c8b3cu: goto label_2c8b3c;
            case 0x2c8b54u: goto label_2c8b54;
            default: break;
        }
    }


    // 0x2c8ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8adc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8ae4: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ae8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2c8ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c8aec: 0x38420001  xori        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c8af0: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8af4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8AF4u;
    {
        const bool branch_taken_0x2c8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8af4) {
            ctx->pc = 0x2C8AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AF4u;
            // 0x2c8af8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8B18u;
            goto label_2c8b18;
        }
    }
    // 0x2c8afc: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c8b00: 0xc0b2c66  jal         func_2CB198
    SET_GPR_U32(ctx, 31, 0x2C8B08u);
    ctx->pc = 0x2C8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B00u;
    // 0x2c8b04: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CB198_0x2cb198, 0x2cb198u, 0x2c8b08u)) {
        return;
    }
label_2c8b08:
    // 0x2c8b08: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b0c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8B0Cu;
    {
        const bool branch_taken_0x2c8b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c8b0c) {
            ctx->pc = 0x2C8B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B0Cu;
            // 0x2c8b10: 0x92020012  lbu         $v0, 0x12($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8B44u;
            goto label_2c8b44;
        }
    }
    // 0x2c8b14: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2c8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c8b18:
    // 0x2c8b18: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8B18u;
    {
        const bool branch_taken_0x2c8b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B18u;
        // 0x2c8b1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b18) {
            ctx->pc = 0x2C8B54u;
            goto label_2c8b54;
        }
    }
    // 0x2c8b20: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x2c8b20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2c8b24: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8B24u;
    {
        const bool branch_taken_0x2c8b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B24u;
        // 0x2c8b28: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b24) {
            ctx->pc = 0x2C8B3Cu;
            goto label_2c8b3c;
        }
    }
    // 0x2c8b2c: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c8b30: 0x2406000a  addiu       $a2, $zero, 0xA
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c8b34: 0xc0b2f08  jal         func_2CBC20
    SET_GPR_U32(ctx, 31, 0x2C8B3Cu);
    ctx->pc = 0x2C8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B34u;
    // 0x2c8b38: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeFadeOut_0x2cbc20, 0x2cbc20u, 0x2c8b3cu)) {
        return;
    }
label_2c8b3c:
    // 0x2c8b3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8B3Cu;
    {
        const bool branch_taken_0x2c8b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B3Cu;
        // 0x2c8b40: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b3c) {
            ctx->pc = 0x2C8B54u;
            goto label_2c8b54;
        }
    }
label_2c8b44:
    // 0x2c8b44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8B44u;
    {
        const bool branch_taken_0x2c8b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b44) {
            ctx->pc = 0x2C8B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B44u;
            // 0x2c8b48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8B58u;
            goto label_2c8b58;
        }
    }
    // 0x2c8b4c: 0xc0b22da  jal         func_2C8B68
    SET_GPR_U32(ctx, 31, 0x2C8B54u);
    ctx->pc = 0x2C8B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B4Cu;
    // 0x2c8b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002C8B68_0x2c8b68, 0x2c8b68u, 0x2c8b54u)) {
        return;
    }
label_2c8b54:
    // 0x2c8b54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8b58:
    // 0x2c8b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B5Cu;
        // 0x2c8b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2c8b64: 0x0  nop
    // NOP
    ctx->pc = 0x2c8b68u;
}