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
// Function: writeIconData__7cMcSave
// Address: 0x7c5e70 - 0x7c6088
void writeIconData__7cMcSave_0x7c5e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("writeIconData__7cMcSave_0x7c5e70");
#endif

    switch (ctx->pc) {
        case 0x7c5ed0u: goto label_7c5ed0;
        case 0x7c5ee4u: goto label_7c5ee4;
        case 0x7c5ef4u: goto label_7c5ef4;
        case 0x7c5f18u: goto label_7c5f18;
        case 0x7c5f34u: goto label_7c5f34;
        case 0x7c5f68u: goto label_7c5f68;
        case 0x7c5f78u: goto label_7c5f78;
        case 0x7c5f9cu: goto label_7c5f9c;
        case 0x7c5fb8u: goto label_7c5fb8;
        case 0x7c5fd0u: goto label_7c5fd0;
        case 0x7c5fe0u: goto label_7c5fe0;
        case 0x7c6000u: goto label_7c6000;
        case 0x7c601cu: goto label_7c601c;
        case 0x7c606cu: goto label_7c606c;
        default: break;
    }

    ctx->pc = 0x7c5e70u;

    // 0x7c5e70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7c5e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7c5e74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x7c5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x7c5e78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x7c5e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x7c5e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c5e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5e80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x7c5e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x7c5e84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7c5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7c5e88: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x7c5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x7c5e8c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c5e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c5e90: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x7C5E90u;
    {
        const bool branch_taken_0x7c5e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5E90u;
        // 0x7c5e94: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5e90) {
            ctx->pc = 0x7C605Cu;
            goto label_7c605c;
        }
    }
    ctx->pc = 0x7C5E98u;
    // 0x7c5e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c5e9c: 0x24420cd0  addiu       $v0, $v0, 0xCD0
    ctx->pc = 0x7c5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3280));
    // 0x7c5ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c5ea4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c5ea8: 0x800008  jr          $a0
    ctx->pc = 0x7C5EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C5EB0u: goto label_7c5eb0;
            case 0x7C5EB4u: goto label_7c5eb4;
            case 0x7C5F04u: goto label_7c5f04;
            case 0x7C5F88u: goto label_7c5f88;
            case 0x7C5FF0u: goto label_7c5ff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5EA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C5EB0u;
label_7c5eb0:
    // 0x7c5eb0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x7c5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_7c5eb4:
    // 0x7c5eb4: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x7c5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x7c5eb8: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c5eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ebc: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c5ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7c5ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ec4: 0x24a50cb8  addiu       $a1, $a1, 0xCB8
    ctx->pc = 0x7c5ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3256));
    // 0x7c5ec8: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C5EC8u;
    SET_GPR_U32(ctx, 31, 0x7C5ED0u);
    ctx->pc = 0x7C5ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5EC8u;
    // 0x7c5ecc: 0x24c60cc8  addiu       $a2, $a2, 0xCC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C5EC8u, 0x7C5ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5ED0u;
label_7c5ed0:
    // 0x7c5ed0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ed4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ed8: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x7c5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x7c5edc: 0xc1f0cfc  jal         func_7C33F0
    ctx->pc = 0x7C5EDCu;
    SET_GPR_U32(ctx, 31, 0x7C5EE4u);
    ctx->pc = 0x7C5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5EDCu;
    // 0x7c5ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33F0u, 0x7C5EDCu, 0x7C5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5EE4u;
label_7c5ee4:
    // 0x7c5ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ee8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x7c5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x7c5eec: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5EECu;
    SET_GPR_U32(ctx, 31, 0x7C5EF4u);
    ctx->pc = 0x7C5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5EECu;
    // 0x7c5ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5EECu, 0x7C5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5EF4u;
label_7c5ef4:
    // 0x7c5ef4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x7C5EF4u;
    {
        const bool branch_taken_0x7c5ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5EF4u;
        // 0x7c5ef8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5ef4) {
            ctx->pc = 0x7C6048u;
            goto label_7c6048;
        }
    }
    ctx->pc = 0x7C5EFCu;
    // 0x7c5efc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x7C5EFCu;
    {
        const bool branch_taken_0x7c5efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5EFCu;
        // 0x7c5f00: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5efc) {
            ctx->pc = 0x7C605Cu;
            goto label_7c605c;
        }
    }
    ctx->pc = 0x7C5F04u;
label_7c5f04:
    // 0x7c5f04: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c5f08: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x7c5f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7c5f0c: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c5f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c5f10: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5F10u;
    SET_GPR_U32(ctx, 31, 0x7C5F18u);
    ctx->pc = 0x7C5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5F10u;
    // 0x7c5f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5F10u, 0x7C5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5F18u;
label_7c5f18:
    // 0x7c5f18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c5f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5f20: 0x5622004f  bnel        $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x7C5F20u;
    {
        const bool branch_taken_0x7c5f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c5f20) {
            ctx->pc = 0x7C5F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C5F20u;
            // 0x7c5f24: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6060u;
            goto label_7c6060;
        }
    }
    ctx->pc = 0x7C5F28u;
    // 0x7c5f28: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x7c5f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c5f2c: 0xc1f1bd8  jal         func_7C6F60
    ctx->pc = 0x7C5F2Cu;
    SET_GPR_U32(ctx, 31, 0x7C5F34u);
    ctx->pc = 0x7C5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5F2Cu;
    // 0x7c5f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6F60u, 0x7C5F2Cu, 0x7C5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5F34u;
label_7c5f34:
    // 0x7c5f34: 0x14510045  bne         $v0, $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x7C5F34u;
    {
        const bool branch_taken_0x7c5f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x7C5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5F34u;
        // 0x7c5f38: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5f34) {
            ctx->pc = 0x7C604Cu;
            goto label_7c604c;
        }
    }
    ctx->pc = 0x7C5F3Cu;
    // 0x7c5f3c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x7c5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x7c5f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c5f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5f44: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x7c5f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c5f48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c5f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5f4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c5f50: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x7c5f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x7c5f54: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x7c5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x7c5f58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x7c5f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5f5c: 0x8c46010c  lw          $a2, 0x10C($v0)
    ctx->pc = 0x7c5f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x7c5f60: 0xc1f0dc6  jal         func_7C3718
    ctx->pc = 0x7C5F60u;
    SET_GPR_U32(ctx, 31, 0x7C5F68u);
    ctx->pc = 0x7C5F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5F60u;
    // 0x7c5f64: 0x8c670110  lw          $a3, 0x110($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3718u, 0x7C5F60u, 0x7C5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5F68u;
label_7c5f68:
    // 0x7c5f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c5f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5f6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5f70: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5F70u;
    SET_GPR_U32(ctx, 31, 0x7C5F78u);
    ctx->pc = 0x7C5F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5F70u;
    // 0x7c5f74: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5F70u, 0x7C5F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5F78u;
label_7c5f78:
    // 0x7c5f78: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x7C5F78u;
    {
        const bool branch_taken_0x7c5f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5F78u;
        // 0x7c5f7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5f78) {
            ctx->pc = 0x7C6048u;
            goto label_7c6048;
        }
    }
    ctx->pc = 0x7C5F80u;
    // 0x7c5f80: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x7C5F80u;
    {
        const bool branch_taken_0x7c5f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5F80u;
        // 0x7c5f84: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5f80) {
            ctx->pc = 0x7C605Cu;
            goto label_7c605c;
        }
    }
    ctx->pc = 0x7C5F88u;
label_7c5f88:
    // 0x7c5f88: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c5f8c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x7c5f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7c5f90: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c5f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c5f94: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5F94u;
    SET_GPR_U32(ctx, 31, 0x7C5F9Cu);
    ctx->pc = 0x7C5F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5F94u;
    // 0x7c5f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5F94u, 0x7C5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5F9Cu;
label_7c5f9c:
    // 0x7c5f9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c5f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5fa4: 0x5622002e  bnel        $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7C5FA4u;
    {
        const bool branch_taken_0x7c5fa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c5fa4) {
            ctx->pc = 0x7C5FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C5FA4u;
            // 0x7c5fa8: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6060u;
            goto label_7c6060;
        }
    }
    ctx->pc = 0x7C5FACu;
    // 0x7c5fac: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x7c5facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c5fb0: 0xc1f1c4a  jal         func_7C7128
    ctx->pc = 0x7C5FB0u;
    SET_GPR_U32(ctx, 31, 0x7C5FB8u);
    ctx->pc = 0x7C5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5FB0u;
    // 0x7c5fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7128u, 0x7C5FB0u, 0x7C5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5FB8u;
label_7c5fb8:
    // 0x7c5fb8: 0x14510024  bne         $v0, $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x7C5FB8u;
    {
        const bool branch_taken_0x7c5fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x7C5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5FB8u;
        // 0x7c5fbc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5fb8) {
            ctx->pc = 0x7C604Cu;
            goto label_7c604c;
        }
    }
    ctx->pc = 0x7C5FC0u;
    // 0x7c5fc0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7c5fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7c5fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5fc8: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C5FC8u;
    SET_GPR_U32(ctx, 31, 0x7C5FD0u);
    ctx->pc = 0x7C5FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5FC8u;
    // 0x7c5fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C5FC8u, 0x7C5FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5FD0u;
label_7c5fd0:
    // 0x7c5fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c5fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5fd8: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5FD8u;
    SET_GPR_U32(ctx, 31, 0x7C5FE0u);
    ctx->pc = 0x7C5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5FD8u;
    // 0x7c5fdc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5FD8u, 0x7C5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5FE0u;
label_7c5fe0:
    // 0x7c5fe0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C5FE0u;
    {
        const bool branch_taken_0x7c5fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5FE0u;
        // 0x7c5fe4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5fe0) {
            ctx->pc = 0x7C6048u;
            goto label_7c6048;
        }
    }
    ctx->pc = 0x7C5FE8u;
    // 0x7c5fe8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7C5FE8u;
    {
        const bool branch_taken_0x7c5fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5FE8u;
        // 0x7c5fec: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5fe8) {
            ctx->pc = 0x7C605Cu;
            goto label_7c605c;
        }
    }
    ctx->pc = 0x7C5FF0u;
label_7c5ff0:
    // 0x7c5ff0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ff4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x7c5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7c5ff8: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5FF8u;
    SET_GPR_U32(ctx, 31, 0x7C6000u);
    ctx->pc = 0x7C5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5FF8u;
    // 0x7c5ffc: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5FF8u, 0x7C6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6000u;
label_7c6000:
    // 0x7c6000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c6000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c6008: 0x56220015  bnel        $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x7C6008u;
    {
        const bool branch_taken_0x7c6008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c6008) {
            ctx->pc = 0x7C600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6008u;
            // 0x7c600c: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6060u;
            goto label_7c6060;
        }
    }
    ctx->pc = 0x7C6010u;
    // 0x7c6010: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x7c6010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c6014: 0xc1f1c02  jal         func_7C7008
    ctx->pc = 0x7C6014u;
    SET_GPR_U32(ctx, 31, 0x7C601Cu);
    ctx->pc = 0x7C6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6014u;
    // 0x7c6018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7008u, 0x7C6014u, 0x7C601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C601Cu;
label_7c601c:
    // 0x7c601c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c601cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6020: 0x1471000a  bne         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x7C6020u;
    {
        const bool branch_taken_0x7c6020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x7C6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6020u;
        // 0x7c6024: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6020) {
            ctx->pc = 0x7C604Cu;
            goto label_7c604c;
        }
    }
    ctx->pc = 0x7C6028u;
    // 0x7c6028: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x7c6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x7c602c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c6030: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6030u;
    {
        const bool branch_taken_0x7c6030 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7C6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6030u;
        // 0x7c6034: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6030) {
            ctx->pc = 0x7C6040u;
            goto label_7c6040;
        }
    }
    ctx->pc = 0x7C6038u;
    // 0x7c6038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C6038u;
    {
        const bool branch_taken_0x7c6038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6038u;
        // 0x7c603c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6038) {
            ctx->pc = 0x7C604Cu;
            goto label_7c604c;
        }
    }
    ctx->pc = 0x7C6040u;
label_7c6040:
    // 0x7c6040: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C6040u;
    {
        const bool branch_taken_0x7c6040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6040u;
        // 0x7c6044: 0xae0300f4  sw          $v1, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6040) {
            ctx->pc = 0x7C605Cu;
            goto label_7c605c;
        }
    }
    ctx->pc = 0x7C6048u;
label_7c6048:
    // 0x7c6048: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c604c:
    // 0x7c604c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c6050: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c6050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x7c6054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6054u;
    {
        const bool branch_taken_0x7c6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6054u;
        // 0x7c6058: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6054) {
            ctx->pc = 0x7C606Cu;
            goto label_7c606c;
        }
    }
    ctx->pc = 0x7C605Cu;
label_7c605c:
    // 0x7c605c: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x7c605cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_7c6060:
    // 0x7c6060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6064: 0xc1f1ec8  jal         func_7C7B20
    ctx->pc = 0x7C6064u;
    SET_GPR_U32(ctx, 31, 0x7C606Cu);
    ctx->pc = 0x7C6068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6064u;
    // 0x7c6068: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7B20u, 0x7C6064u, 0x7C606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C606Cu;
label_7c606c:
    // 0x7c606c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x7c606cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7c6070: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x7c6070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c6074: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x7c6074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c6078: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7c6078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c607c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C607Cu;
        // 0x7c6080: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6084u;
    // 0x7c6084: 0x0  nop
    ctx->pc = 0x7c6084u;
    // NOP
    ctx->pc = 0x7c6088u;
}
} // namespace gh_mcport
