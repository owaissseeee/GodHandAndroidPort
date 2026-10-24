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

// Function: func_0027FBE8
// Address: 0x27fbe8 - 0x27fd00
void func_0027FBE8_0x27fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027FBE8_0x27fbe8");
#endif

    switch (ctx->pc) {
        case 0x27fc50u: goto label_27fc50;
        case 0x27fc6cu: goto label_27fc6c;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcd8u: goto label_27fcd8;
        default: break;
    }

    ctx->pc = 0x27fbe8u;

    // 0x27fbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fbec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27fbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27fbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fbf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27fbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27fbf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fbfc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x27fbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27fc00: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x27FC00u;
    {
        const bool branch_taken_0x27fc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC00u;
        // 0x27fc04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc00) {
            ctx->pc = 0x27FCF0u;
            goto label_27fcf0;
        }
    }
    ctx->pc = 0x27FC08u;
    // 0x27fc08: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27fc0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27fc10: 0x244284e0  addiu       $v0, $v0, -0x7B20
    ctx->pc = 0x27fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935776));
    // 0x27fc14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27fc18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27fc1c: 0x800008  jr          $a0
    ctx->pc = 0x27FC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FC24u: goto label_27fc24;
            case 0x27FC64u: goto label_27fc64;
            case 0x27FC74u: goto label_27fc74;
            case 0x27FC90u: goto label_27fc90;
            case 0x27FCD0u: goto label_27fcd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FC1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27FC24u;
label_27fc24:
    // 0x27fc24: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fc28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fc28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc30: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x27fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27fc34: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fc38: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x27fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x27fc3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fc3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc40: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fc44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fc44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc48: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FC48u;
    SET_GPR_U32(ctx, 31, 0x27FC50u);
    ctx->pc = 0x27FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC48u;
    // 0x27fc4c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FC48u, 0x27FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC50u;
label_27fc50:
    // 0x27fc50: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27fc50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fc54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fc58: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x27fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x27fc5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27fc60: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27fc60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27fc64:
    // 0x27fc64: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FC64u;
    SET_GPR_U32(ctx, 31, 0x27FC6Cu);
    ctx->pc = 0x27FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC64u;
    // 0x27fc68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FC64u, 0x27FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC6Cu;
label_27fc6c:
    // 0x27fc6c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27FC6Cu;
    {
        const bool branch_taken_0x27fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC6Cu;
        // 0x27fc70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc6c) {
            ctx->pc = 0x27FCF4u;
            goto label_27fcf4;
        }
    }
    ctx->pc = 0x27FC74u;
label_27fc74:
    // 0x27fc74: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fc78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fc78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc80: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x27fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27fc84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fc88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27FC88u;
    {
        const bool branch_taken_0x27fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC88u;
        // 0x27fc8c: 0x8c460020  lw          $a2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc88) {
            ctx->pc = 0x27FCA8u;
            goto label_27fca8;
        }
    }
    ctx->pc = 0x27FC90u;
label_27fc90:
    // 0x27fc90: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fc94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc9c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x27fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x27fca0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fca4: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x27fca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_27fca8:
    // 0x27fca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fcb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fcb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcb4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FCB4u;
    SET_GPR_U32(ctx, 31, 0x27FCBCu);
    ctx->pc = 0x27FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCB4u;
    // 0x27fcb8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FCB4u, 0x27FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCBCu;
label_27fcbc:
    // 0x27fcbc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27fcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fcc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fcc4: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x27fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x27fcc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27fccc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27fcccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27fcd0:
    // 0x27fcd0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FCD0u;
    SET_GPR_U32(ctx, 31, 0x27FCD8u);
    ctx->pc = 0x27FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCD0u;
    // 0x27fcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FCD0u, 0x27FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCD8u;
label_27fcd8:
    // 0x27fcd8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FCD8u;
    {
        const bool branch_taken_0x27fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fcd8) {
            ctx->pc = 0x27FCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FCD8u;
            // 0x27fcdc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FCF4u;
            goto label_27fcf4;
        }
    }
    ctx->pc = 0x27FCE0u;
    // 0x27fce0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27fce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fce4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fce8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27fce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fcec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27fcecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_27fcf0:
    // 0x27fcf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27fcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fcf4:
    // 0x27fcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x27FCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCF8u;
        // 0x27fcfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FD00u;
}
