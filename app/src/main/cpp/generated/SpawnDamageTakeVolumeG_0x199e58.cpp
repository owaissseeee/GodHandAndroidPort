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

// Function: SpawnDamageTakeVolumeG
// Address: 0x199e58 - 0x199f60
void SpawnDamageTakeVolumeG_0x199e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnDamageTakeVolumeG_0x199e58");
#endif

    switch (ctx->pc) {
        case 0x199e78u: goto label_199e78;
        case 0x199ef0u: goto label_199ef0;
        case 0x199f20u: goto label_199f20;
        case 0x199f34u: goto label_199f34;
        default: break;
    }

    ctx->pc = 0x199e58u;

    // 0x199e58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x199e5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x199e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x199e60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x199e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x199e64: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x199e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x199e68: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x199e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x199e6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x199e70: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x199E70u;
    SET_GPR_U32(ctx, 31, 0x199E78u);
    ctx->pc = 0x199E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E70u;
    // 0x199e74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x199E70u, 0x199E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E78u;
label_199e78:
    // 0x199e78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x199e7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x199e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x199e80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x199e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199e88: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199e8c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x199e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x199e90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x199e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x199e94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199e98: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199e9c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x199e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x199ea0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x199ea4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x199ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x199ea8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x199ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x199eac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x199eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x199eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199eb4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x199eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x199eb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x199eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199ebc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x199ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x199ec0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x199ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x199ec4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x199ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x199ec8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x199ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x199ecc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x199eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x199ed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199ed4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x199ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199ed8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x199ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x199edc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x199edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x199ee0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x199ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x199ee4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x199ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x199ee8: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x199EE8u;
    SET_GPR_U32(ctx, 31, 0x199EF0u);
    ctx->pc = 0x199EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EE8u;
    // 0x199eec: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x199EE8u, 0x199EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EF0u;
label_199ef0:
    // 0x199ef0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x199EF0u;
    {
        const bool branch_taken_0x199ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EF0u;
        // 0x199ef4: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ef0) {
            ctx->pc = 0x199F20u;
            goto label_199f20;
        }
    }
    ctx->pc = 0x199EF8u;
    // 0x199ef8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x199ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x199efc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x199efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x199f00: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x199f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x199f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f08: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x199f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x199f0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x199f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f10: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x199f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x199f14: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x199f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f18: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x199F18u;
    SET_GPR_U32(ctx, 31, 0x199F20u);
    ctx->pc = 0x199F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F18u;
    // 0x199f1c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x199F18u, 0x199F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F20u;
label_199f20:
    // 0x199f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f28: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x199f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x199f2c: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x199F2Cu;
    SET_GPR_U32(ctx, 31, 0x199F34u);
    ctx->pc = 0x199F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F2Cu;
    // 0x199f30: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x199F2Cu, 0x199F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F34u;
label_199f34:
    // 0x199f34: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x199f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x199f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199f3c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x199f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199f40: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x199f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x199f44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x199f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199f48: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x199f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x199f4c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x199f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199f50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199f54: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x199f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199f58: 0x3e00008  jr          $ra
    ctx->pc = 0x199F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F58u;
        // 0x199f5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F60u;
}
