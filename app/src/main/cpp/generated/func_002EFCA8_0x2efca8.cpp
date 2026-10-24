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

// Function: func_002EFCA8
// Address: 0x2efca8 - 0x2efd20
void func_002EFCA8_0x2efca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EFCA8_0x2efca8");
#endif

    ctx->pc = 0x2efca8u;

    // 0x2efca8: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2efca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efcac: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x2efcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2efcb0: 0xe48002c4  swc1        $f0, 0x2C4($a0)
    ctx->pc = 0x2efcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
    // 0x2efcb4: 0x8ca2016c  lw          $v0, 0x16C($a1)
    ctx->pc = 0x2efcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 364)));
    // 0x2efcb8: 0xac8202b0  sw          $v0, 0x2B0($a0)
    ctx->pc = 0x2efcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 2));
    // 0x2efcbc: 0x90a30170  lbu         $v1, 0x170($a1)
    ctx->pc = 0x2efcbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x2efcc0: 0xac8302b4  sw          $v1, 0x2B4($a0)
    ctx->pc = 0x2efcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 3));
    // 0x2efcc4: 0x80a6018c  lb          $a2, 0x18C($a1)
    ctx->pc = 0x2efcc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x2efcc8: 0xac8602b8  sw          $a2, 0x2B8($a0)
    ctx->pc = 0x2efcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 6));
    // 0x2efccc: 0x2cc60002  sltiu       $a2, $a2, 0x2
    ctx->pc = 0x2efcccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2efcd0: 0x90a2018d  lbu         $v0, 0x18D($a1)
    ctx->pc = 0x2efcd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 397)));
    // 0x2efcd4: 0xa48202bc  sh          $v0, 0x2BC($a0)
    ctx->pc = 0x2efcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 700), (uint16_t)GPR_U32(ctx, 2));
    // 0x2efcd8: 0x90a3018e  lbu         $v1, 0x18E($a1)
    ctx->pc = 0x2efcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 398)));
    // 0x2efcdc: 0xa08302be  sb          $v1, 0x2BE($a0)
    ctx->pc = 0x2efcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 702), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efce0: 0x90a2018f  lbu         $v0, 0x18F($a1)
    ctx->pc = 0x2efce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 399)));
    // 0x2efce4: 0xa08202bf  sb          $v0, 0x2BF($a0)
    ctx->pc = 0x2efce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 703), (uint8_t)GPR_U32(ctx, 2));
    // 0x2efce8: 0x90a30190  lbu         $v1, 0x190($a1)
    ctx->pc = 0x2efce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x2efcec: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFCECu;
    {
        const bool branch_taken_0x2efcec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCECu;
        // 0x2efcf0: 0xa08302c0  sb          $v1, 0x2C0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcec) {
            ctx->pc = 0x2EFCFCu;
            goto label_2efcfc;
        }
    }
    ctx->pc = 0x2EFCF4u;
    // 0x2efcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCF4u;
        // 0x2efcf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFCFCu;
label_2efcfc:
    // 0x2efcfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efd00: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2efd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2efd04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFD04u;
    {
        const bool branch_taken_0x2efd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD04u;
        // 0x2efd08: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd04) {
            ctx->pc = 0x2EFD14u;
            goto label_2efd14;
        }
    }
    ctx->pc = 0x2EFD0Cu;
    // 0x2efd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD0Cu;
        // 0x2efd10: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFD14u;
label_2efd14:
    // 0x2efd14: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD14u;
        // 0x2efd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFD1Cu;
    // 0x2efd1c: 0x0  nop
    ctx->pc = 0x2efd1cu;
    // NOP
    ctx->pc = 0x2efd20u;
}
