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

// Function: func_00188B50
// Address: 0x188b50 - 0x188c88
void func_00188B50_0x188b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188B50_0x188b50");
#endif

    switch (ctx->pc) {
        case 0x188b70u: goto label_188b70;
        case 0x188bf4u: goto label_188bf4;
        case 0x188c24u: goto label_188c24;
        case 0x188c68u: goto label_188c68;
        default: break;
    }

    ctx->pc = 0x188b50u;

    // 0x188b50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x188b54: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x188b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x188b58: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x188b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x188b5c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x188b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x188b60: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x188b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x188b64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x188b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x188b68: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x188B68u;
    SET_GPR_U32(ctx, 31, 0x188B70u);
    ctx->pc = 0x188B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B68u;
    // 0x188b6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x188B68u, 0x188B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B70u;
label_188b70:
    // 0x188b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x188b74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x188b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x188b78: 0x3c01408c  lui         $at, 0x408C
    ctx->pc = 0x188b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16524 << 16));
    // 0x188b7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x188b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x188b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188b84: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x188b88: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x188b8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x188b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x188b90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x188b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x188b94: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x188b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188b98: 0x3c013f9d  lui         $at, 0x3F9D
    ctx->pc = 0x188b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16285 << 16));
    // 0x188b9c: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x188b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
    // 0x188ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ba4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x188ba8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x188bac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x188bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x188bb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x188bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188bb4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x188bb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x188bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x188bbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188bc0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x188bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x188bc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188bc8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x188bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x188bcc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x188bccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x188bd0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x188bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x188bd4: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x188bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x188bd8: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x188bd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x188bdc: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x188bdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x188be0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x188be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x188be4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x188be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x188be8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x188be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x188bec: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x188BECu;
    SET_GPR_U32(ctx, 31, 0x188BF4u);
    ctx->pc = 0x188BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188BECu;
    // 0x188bf0: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x188BECu, 0x188BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BF4u;
label_188bf4:
    // 0x188bf4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x188BF4u;
    {
        const bool branch_taken_0x188bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF4u;
        // 0x188bf8: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf4) {
            ctx->pc = 0x188C24u;
            goto label_188c24;
        }
    }
    ctx->pc = 0x188BFCu;
    // 0x188bfc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x188c00: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x188c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x188c04: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x188c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x188c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c0c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x188c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x188c10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x188c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c14: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x188c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x188c18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x188c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c1c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x188C1Cu;
    SET_GPR_U32(ctx, 31, 0x188C24u);
    ctx->pc = 0x188C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C1Cu;
    // 0x188c20: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x188C1Cu, 0x188C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C24u;
label_188c24:
    // 0x188c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c28: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x188c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x188c2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x188c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x188c30: 0x240700c9  addiu       $a3, $zero, 0xC9
    ctx->pc = 0x188c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x188c34: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x188c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x188c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188c3c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x188c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x188c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c44: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x188c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x188c48: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x188c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x188c4c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x188c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x188c50: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x188c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x188c54: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x188c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x188c58: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x188c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x188c5c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x188c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x188c60: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x188C60u;
    SET_GPR_U32(ctx, 31, 0x188C68u);
    ctx->pc = 0x188C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C60u;
    // 0x188c64: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x188C60u, 0x188C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C68u;
label_188c68:
    // 0x188c68: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x188c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c70: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x188c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188c74: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x188c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x188c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188c7c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x188c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x188c80: 0x3e00008  jr          $ra
    ctx->pc = 0x188C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C80u;
        // 0x188c84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188C88u;
}
