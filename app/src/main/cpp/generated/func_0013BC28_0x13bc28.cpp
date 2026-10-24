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

// Function: func_0013BC28
// Address: 0x13bc28 - 0x13bcc0
void func_0013BC28_0x13bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013BC28_0x13bc28");
#endif

    switch (ctx->pc) {
        case 0x13bc58u: goto label_13bc58;
        case 0x13bc60u: goto label_13bc60;
        case 0x13bc68u: goto label_13bc68;
        default: break;
    }

    ctx->pc = 0x13bc28u;

    // 0x13bc28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bc2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13bc34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x13bc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13bc38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13bc3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13bc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bc48: 0x263200b0  addiu       $s2, $s1, 0xB0
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x13bc4c: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x13bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x13bc50: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13BC50u;
    SET_GPR_U32(ctx, 31, 0x13BC58u);
    ctx->pc = 0x13BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC50u;
    // 0x13bc54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13BC50u, 0x13BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC58u;
label_13bc58:
    // 0x13bc58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc5c: 0x0  nop
    ctx->pc = 0x13bc5cu;
    // NOP
label_13bc60:
    // 0x13bc60: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13BC60u;
    SET_GPR_U32(ctx, 31, 0x13BC68u);
    ctx->pc = 0x13BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC60u;
    // 0x13bc64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13BC60u, 0x13BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC68u;
label_13bc68:
    // 0x13bc68: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13bc6c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13bc70: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13bc74: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13bc74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13bc78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13bc7c: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x13bc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x13bc80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13BC80u;
    {
        const bool branch_taken_0x13bc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC80u;
        // 0x13bc84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc80) {
            ctx->pc = 0x13BC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bc60;
        }
    }
    ctx->pc = 0x13BC88u;
    // 0x13bc88: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x13bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13bc8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bc90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13bc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bc94: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x13bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bc98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13bc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bc9c: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x13bc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x13bca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bca4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x13bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bca8: 0xae2300e4  sw          $v1, 0xE4($s1)
    ctx->pc = 0x13bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
    // 0x13bcac: 0xe62100a4  swc1        $f1, 0xA4($s1)
    ctx->pc = 0x13bcacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x13bcb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13bcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCB4u;
        // 0x13bcb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BCBCu;
    // 0x13bcbc: 0x0  nop
    ctx->pc = 0x13bcbcu;
    // NOP
    ctx->pc = 0x13bcc0u;
}
