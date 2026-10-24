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

// Function: func_001B1E30
// Address: 0x1b1e30 - 0x1b1ee0
void func_001B1E30_0x1b1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1E30_0x1b1e30");
#endif

    switch (ctx->pc) {
        case 0x1b1e58u: goto label_1b1e58;
        case 0x1b1e88u: goto label_1b1e88;
        case 0x1b1ea8u: goto label_1b1ea8;
        case 0x1b1ec8u: goto label_1b1ec8;
        default: break;
    }

    ctx->pc = 0x1b1e30u;

    // 0x1b1e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1e34: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1b1e38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e44: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b1e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b1e48: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1b1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b1e4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b1e50: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1B1E50u;
    SET_GPR_U32(ctx, 31, 0x1B1E58u);
    ctx->pc = 0x1B1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E50u;
    // 0x1b1e54: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1B1E50u, 0x1B1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E58u;
label_1b1e58:
    // 0x1b1e58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1E58u;
    {
        const bool branch_taken_0x1b1e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e58) {
            ctx->pc = 0x1B1E94u;
            goto label_1b1e94;
        }
    }
    ctx->pc = 0x1B1E60u;
    // 0x1b1e60: 0x9e020600  lwu         $v0, 0x600($s0)
    ctx->pc = 0x1b1e60u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b1e64: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1b1e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1b1e68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b1e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1E6Cu;
    {
        const bool branch_taken_0x1b1e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E6Cu;
        // 0x1b1e70: 0x8e030600  lw          $v1, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e6c) {
            ctx->pc = 0x1B1E88u;
            goto label_1b1e88;
        }
    }
    ctx->pc = 0x1B1E74u;
    // 0x1b1e74: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1b1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1b1e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b1e80: 0xc06c7d6  jal         func_1B1F58
    ctx->pc = 0x1B1E80u;
    SET_GPR_U32(ctx, 31, 0x1B1E88u);
    ctx->pc = 0x1B1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E80u;
    // 0x1b1e84: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F58u, 0x1B1E80u, 0x1B1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E88u;
label_1b1e88:
    // 0x1b1e88: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1b1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b1e8c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1b1e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1b1e90: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1b1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
label_1b1e94:
    // 0x1b1e94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1e98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b1e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ea0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1B1EA0u;
    SET_GPR_U32(ctx, 31, 0x1B1EA8u);
    ctx->pc = 0x1B1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EA0u;
    // 0x1b1ea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1B1EA0u, 0x1B1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EA8u;
label_1b1ea8:
    // 0x1b1ea8: 0x9e020600  lwu         $v0, 0x600($s0)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b1eac: 0x211fb  dsra        $v0, $v0, 7
    ctx->pc = 0x1b1eacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 7);
    // 0x1b1eb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b1eb4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1EB4u;
    {
        const bool branch_taken_0x1b1eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1eb4) {
            ctx->pc = 0x1B1EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1EB4u;
            // 0x1b1eb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1ECCu;
            goto label_1b1ecc;
        }
    }
    ctx->pc = 0x1B1EBCu;
    // 0x1b1ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ec0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1B1EC0u;
    SET_GPR_U32(ctx, 31, 0x1B1EC8u);
    ctx->pc = 0x1B1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EC0u;
    // 0x1b1ec4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1B1EC0u, 0x1B1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EC8u;
label_1b1ec8:
    // 0x1b1ec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b1ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1ecc:
    // 0x1b1ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ed0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ED4u;
        // 0x1b1ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1EDCu;
    // 0x1b1edc: 0x0  nop
    ctx->pc = 0x1b1edcu;
    // NOP
    ctx->pc = 0x1b1ee0u;
}
