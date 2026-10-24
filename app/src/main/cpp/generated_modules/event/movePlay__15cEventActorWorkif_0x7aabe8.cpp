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
// Function: movePlay__15cEventActorWorkif
// Address: 0x7aabe8 - 0x7aaca0
void movePlay__15cEventActorWorkif_0x7aabe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__15cEventActorWorkif_0x7aabe8");
#endif

    switch (ctx->pc) {
        case 0x7aac18u: goto label_7aac18;
        case 0x7aac28u: goto label_7aac28;
        case 0x7aac50u: goto label_7aac50;
        case 0x7aac58u: goto label_7aac58;
        case 0x7aac6cu: goto label_7aac6c;
        case 0x7aac7cu: goto label_7aac7c;
        default: break;
    }

    ctx->pc = 0x7aabe8u;

    // 0x7aabe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7aabe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7aabec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7aabecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7aabf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7aabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7aabf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7aabf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aabf8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x7aabf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7aabfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7aabfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aac00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aac04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7aac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7aac08: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7AAC08u;
    {
        const bool branch_taken_0x7aac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAC08u;
        // 0x7aac0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aac08) {
            ctx->pc = 0x7AAC84u;
            goto label_7aac84;
        }
    }
    ctx->pc = 0x7AAC10u;
    // 0x7aac10: 0xc1eab28  jal         func_7AACA0
    ctx->pc = 0x7AAC10u;
    SET_GPR_U32(ctx, 31, 0x7AAC18u);
    ctx->pc = 0x7AACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AACA0u, 0x7AAC10u, 0x7AAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAC18u;
label_7aac18:
    // 0x7aac18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7aac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aac1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7aac1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7aac20: 0xc1eab94  jal         func_7AAE50
    ctx->pc = 0x7AAC20u;
    SET_GPR_U32(ctx, 31, 0x7AAC28u);
    ctx->pc = 0x7AAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAC20u;
    // 0x7aac24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AAE50u, 0x7AAC20u, 0x7AAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAC28u;
label_7aac28:
    // 0x7aac28: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x7aac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7aac2c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7AAC2Cu;
    {
        const bool branch_taken_0x7aac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAC2Cu;
        // 0x7aac30: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aac2c) {
            ctx->pc = 0x7AAC74u;
            goto label_7aac74;
        }
    }
    ctx->pc = 0x7AAC34u;
    // 0x7aac34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7aac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7aac38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7aac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aac3c: 0xa04302f4  sb          $v1, 0x2F4($v0)
    ctx->pc = 0x7aac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x7aac40: 0xa04002f7  sb          $zero, 0x2F7($v0)
    ctx->pc = 0x7aac40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x7aac44: 0xa04002f5  sb          $zero, 0x2F5($v0)
    ctx->pc = 0x7aac44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x7aac48: 0xc1eabee  jal         func_7AAFB8
    ctx->pc = 0x7AAC48u;
    SET_GPR_U32(ctx, 31, 0x7AAC50u);
    ctx->pc = 0x7AAC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAC48u;
    // 0x7aac4c: 0xa04002f6  sb          $zero, 0x2F6($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 758), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AAFB8u, 0x7AAC48u, 0x7AAC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAC50u;
label_7aac50:
    // 0x7aac50: 0xc1eacb6  jal         func_7AB2D8
    ctx->pc = 0x7AAC50u;
    SET_GPR_U32(ctx, 31, 0x7AAC58u);
    ctx->pc = 0x7AAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAC50u;
    // 0x7aac54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB2D8u, 0x7AAC50u, 0x7AAC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAC58u;
label_7aac58:
    // 0x7aac58: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7aac58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aac5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x7aac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7aac60: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x7aac60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7aac64: 0xc1ebae2  jal         func_7AEB88
    ctx->pc = 0x7AAC64u;
    SET_GPR_U32(ctx, 31, 0x7AAC6Cu);
    ctx->pc = 0x7AAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAC64u;
    // 0x7aac68: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEB88u, 0x7AAC64u, 0x7AAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAC6Cu;
label_7aac6c:
    // 0x7aac6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AAC6Cu;
    {
        const bool branch_taken_0x7aac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAC6Cu;
        // 0x7aac70: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aac6c) {
            ctx->pc = 0x7AAC80u;
            goto label_7aac80;
        }
    }
    ctx->pc = 0x7AAC74u;
label_7aac74:
    // 0x7aac74: 0xc1ead90  jal         func_7AB640
    ctx->pc = 0x7AAC74u;
    SET_GPR_U32(ctx, 31, 0x7AAC7Cu);
    ctx->pc = 0x7AAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAC74u;
    // 0x7aac78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB640u, 0x7AAC74u, 0x7AAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAC7Cu;
label_7aac7c:
    // 0x7aac7c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x7aac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_7aac80:
    // 0x7aac80: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x7aac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_7aac84:
    // 0x7aac84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7aac84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aac88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7aac88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aac8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aac90: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x7aac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7aac94: 0x3e00008  jr          $ra
    ctx->pc = 0x7AAC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAC94u;
        // 0x7aac98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AAC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AAC9Cu;
    // 0x7aac9c: 0x0  nop
    ctx->pc = 0x7aac9cu;
    // NOP
    ctx->pc = 0x7aaca0u;
}
} // namespace gh_event
