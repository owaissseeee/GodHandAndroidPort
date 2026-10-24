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

// Function: func_00170D80
// Address: 0x170d80 - 0x170e90
void func_00170D80_0x170d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170D80_0x170d80");
#endif

    switch (ctx->pc) {
        case 0x170da0u: goto label_170da0;
        case 0x170e28u: goto label_170e28;
        case 0x170e58u: goto label_170e58;
        case 0x170e6cu: goto label_170e6c;
        default: break;
    }

    ctx->pc = 0x170d80u;

    // 0x170d80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170d84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x170d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x170d88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x170d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x170d8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x170d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x170d90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x170d90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x170d94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170d98: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x170D98u;
    SET_GPR_U32(ctx, 31, 0x170DA0u);
    ctx->pc = 0x170D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D98u;
    // 0x170d9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x170D98u, 0x170DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DA0u;
label_170da0:
    // 0x170da0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170da4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x170da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170da8: 0x3c014052  lui         $at, 0x4052
    ctx->pc = 0x170da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16466 << 16));
    // 0x170dac: 0x3421b021  ori         $at, $at, 0xB021
    ctx->pc = 0x170dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45089);
    // 0x170db0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170db4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x170db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x170db8: 0x3c013f46  lui         $at, 0x3F46
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16198 << 16));
    // 0x170dbc: 0x342124dd  ori         $at, $at, 0x24DD
    ctx->pc = 0x170dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9437);
    // 0x170dc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170dc4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x170dc8: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x170dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x170dcc: 0x3421b021  ori         $at, $at, 0xB021
    ctx->pc = 0x170dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45089);
    // 0x170dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170dd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170dd8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x170dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x170ddc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x170de0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x170de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x170de4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170de8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x170de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x170dec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170df0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x170df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x170df4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x170df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x170df8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x170df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x170dfc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x170dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x170e00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x170e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x170e04: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x170e08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170e0c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x170e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170e10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x170e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x170e14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170e18: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x170e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x170e1c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x170e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x170e20: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x170E20u;
    SET_GPR_U32(ctx, 31, 0x170E28u);
    ctx->pc = 0x170E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E20u;
    // 0x170e24: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x170E20u, 0x170E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E28u;
label_170e28:
    // 0x170e28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170E28u;
    {
        const bool branch_taken_0x170e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E28u;
        // 0x170e2c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e28) {
            ctx->pc = 0x170E58u;
            goto label_170e58;
        }
    }
    ctx->pc = 0x170E30u;
    // 0x170e30: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x170e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170e34: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x170e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x170e38: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x170e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x170e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e40: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x170e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x170e44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x170e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e48: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x170e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x170e4c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x170e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e50: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x170E50u;
    SET_GPR_U32(ctx, 31, 0x170E58u);
    ctx->pc = 0x170E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E50u;
    // 0x170e54: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x170E50u, 0x170E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E58u;
label_170e58:
    // 0x170e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e60: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x170e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x170e64: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x170E64u;
    SET_GPR_U32(ctx, 31, 0x170E6Cu);
    ctx->pc = 0x170E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E64u;
    // 0x170e68: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x170E64u, 0x170E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E6Cu;
label_170e6c:
    // 0x170e6c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x170e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170e74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x170e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170e78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x170e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170e7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x170e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170e80: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x170e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170e84: 0x3e00008  jr          $ra
    ctx->pc = 0x170E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E84u;
        // 0x170e88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170E8Cu;
    // 0x170e8c: 0x0  nop
    ctx->pc = 0x170e8cu;
    // NOP
    ctx->pc = 0x170e90u;
}
