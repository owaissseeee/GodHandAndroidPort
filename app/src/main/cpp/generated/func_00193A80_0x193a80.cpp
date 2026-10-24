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

// Function: func_00193A80
// Address: 0x193a80 - 0x193bb0
void func_00193A80_0x193a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193A80_0x193a80");
#endif

    switch (ctx->pc) {
        case 0x193aa0u: goto label_193aa0;
        case 0x193b18u: goto label_193b18;
        case 0x193b48u: goto label_193b48;
        case 0x193b8cu: goto label_193b8c;
        default: break;
    }

    ctx->pc = 0x193a80u;

    // 0x193a80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193a84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x193a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x193a88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x193a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x193a8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x193a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x193a90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x193a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x193a94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193a98: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x193A98u;
    SET_GPR_U32(ctx, 31, 0x193AA0u);
    ctx->pc = 0x193A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A98u;
    // 0x193a9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x193A98u, 0x193AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AA0u;
label_193aa0:
    // 0x193aa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193aa4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x193aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193aa8: 0x3c014067  lui         $at, 0x4067
    ctx->pc = 0x193aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16487 << 16));
    // 0x193aac: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x193aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x193ab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x193ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193ab4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x193ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193ab8: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x193ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
    // 0x193abc: 0x34215d64  ori         $at, $at, 0x5D64
    ctx->pc = 0x193abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23908);
    // 0x193ac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193ac4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x193ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193ac8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x193acc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x193accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x193ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ad4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x193ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193ad8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x193ad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x193adc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x193adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x193ae0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x193ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x193ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ae8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x193ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x193aec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193af0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x193af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193af4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x193af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193af8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x193af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193afc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x193afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x193b00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x193b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x193b04: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x193b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x193b08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x193b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x193b0c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x193b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x193b10: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x193B10u;
    SET_GPR_U32(ctx, 31, 0x193B18u);
    ctx->pc = 0x193B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B10u;
    // 0x193b14: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x193B10u, 0x193B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B18u;
label_193b18:
    // 0x193b18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x193B18u;
    {
        const bool branch_taken_0x193b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B18u;
        // 0x193b1c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b18) {
            ctx->pc = 0x193B48u;
            goto label_193b48;
        }
    }
    ctx->pc = 0x193B20u;
    // 0x193b20: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x193b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193b24: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x193b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x193b28: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x193b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x193b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b30: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x193b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193b34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b38: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x193b38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x193b3c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x193b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b40: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x193B40u;
    SET_GPR_U32(ctx, 31, 0x193B48u);
    ctx->pc = 0x193B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B40u;
    // 0x193b44: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x193B40u, 0x193B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B48u;
label_193b48:
    // 0x193b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193b4c: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x193b50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x193b54: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x193b58: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x193b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x193b5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193b60: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x193b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x193b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b68: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x193b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x193b6c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x193b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x193b70: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x193b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x193b74: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x193b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x193b78: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x193b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x193b7c: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x193b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x193b80: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x193b80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x193b84: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x193B84u;
    SET_GPR_U32(ctx, 31, 0x193B8Cu);
    ctx->pc = 0x193B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B84u;
    // 0x193b88: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x193B84u, 0x193B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B8Cu;
label_193b8c:
    // 0x193b8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x193b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193b94: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x193b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193b98: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x193b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193ba0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x193ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x193BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BA4u;
        // 0x193ba8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193BACu;
    // 0x193bac: 0x0  nop
    ctx->pc = 0x193bacu;
    // NOP
    ctx->pc = 0x193bb0u;
}
