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

// Function: func_00191B98
// Address: 0x191b98 - 0x191cc8
void func_00191B98_0x191b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00191B98_0x191b98");
#endif

    switch (ctx->pc) {
        case 0x191bb8u: goto label_191bb8;
        case 0x191c30u: goto label_191c30;
        case 0x191c60u: goto label_191c60;
        case 0x191ca4u: goto label_191ca4;
        default: break;
    }

    ctx->pc = 0x191b98u;

    // 0x191b98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x191b9c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x191b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x191ba0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x191ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x191ba4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x191ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x191ba8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x191ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x191bac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x191bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x191bb0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x191BB0u;
    SET_GPR_U32(ctx, 31, 0x191BB8u);
    ctx->pc = 0x191BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BB0u;
    // 0x191bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x191BB0u, 0x191BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BB8u;
label_191bb8:
    // 0x191bb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191bbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x191bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x191bc0: 0x3c01408a  lui         $at, 0x408A
    ctx->pc = 0x191bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16522 << 16));
    // 0x191bc4: 0x3421bee0  ori         $at, $at, 0xBEE0
    ctx->pc = 0x191bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48864);
    // 0x191bc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x191bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191bcc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x191bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x191bd0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x191bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x191bd4: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x191bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
    // 0x191bd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191bdc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x191bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191be0: 0x3c013e35  lui         $at, 0x3E35
    ctx->pc = 0x191be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15925 << 16));
    // 0x191be4: 0x3421dcc6  ori         $at, $at, 0xDCC6
    ctx->pc = 0x191be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56518);
    // 0x191be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191bec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x191becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x191bf0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x191bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x191bf4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x191bf8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x191bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x191bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c00: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x191c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x191c04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x191c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191c08: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x191c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x191c0c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x191c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x191c10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x191c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x191c14: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x191c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x191c18: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x191c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x191c1c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x191c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x191c20: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x191c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x191c24: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x191c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x191c28: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x191C28u;
    SET_GPR_U32(ctx, 31, 0x191C30u);
    ctx->pc = 0x191C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C28u;
    // 0x191c2c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x191C28u, 0x191C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C30u;
label_191c30:
    // 0x191c30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x191C30u;
    {
        const bool branch_taken_0x191c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C30u;
        // 0x191c34: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c30) {
            ctx->pc = 0x191C60u;
            goto label_191c60;
        }
    }
    ctx->pc = 0x191C38u;
    // 0x191c38: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x191c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191c3c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x191c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x191c40: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x191c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x191c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c48: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x191c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x191c4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x191c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c50: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x191c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x191c54: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x191c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c58: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x191C58u;
    SET_GPR_U32(ctx, 31, 0x191C60u);
    ctx->pc = 0x191C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C58u;
    // 0x191c5c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x191C58u, 0x191C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C60u;
label_191c60:
    // 0x191c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c64: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x191c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x191c68: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x191c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x191c6c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x191c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x191c70: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x191c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x191c74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191c78: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x191c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x191c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c80: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x191c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x191c84: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x191c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x191c88: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x191c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x191c8c: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x191c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x191c90: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x191c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x191c94: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x191c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x191c98: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x191c98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x191c9c: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x191C9Cu;
    SET_GPR_U32(ctx, 31, 0x191CA4u);
    ctx->pc = 0x191CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C9Cu;
    // 0x191ca0: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x191C9Cu, 0x191CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CA4u;
label_191ca4:
    // 0x191ca4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x191ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191cac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x191cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191cb0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x191cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191cb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x191cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191cb8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x191cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x191CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CBCu;
        // 0x191cc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191CC4u;
    // 0x191cc4: 0x0  nop
    ctx->pc = 0x191cc4u;
    // NOP
    ctx->pc = 0x191cc8u;
}
