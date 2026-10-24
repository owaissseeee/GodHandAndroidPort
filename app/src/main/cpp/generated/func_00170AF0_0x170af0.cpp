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

// Function: func_00170AF0
// Address: 0x170af0 - 0x170c00
void func_00170AF0_0x170af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170AF0_0x170af0");
#endif

    switch (ctx->pc) {
        case 0x170b10u: goto label_170b10;
        case 0x170b98u: goto label_170b98;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bdcu: goto label_170bdc;
        default: break;
    }

    ctx->pc = 0x170af0u;

    // 0x170af0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170af4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x170af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x170af8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x170af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x170afc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x170afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x170b00: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x170b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x170b04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170b08: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x170B08u;
    SET_GPR_U32(ctx, 31, 0x170B10u);
    ctx->pc = 0x170B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B08u;
    // 0x170b0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x170B08u, 0x170B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B10u;
label_170b10:
    // 0x170b10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170b14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x170b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170b18: 0x3c014031  lui         $at, 0x4031
    ctx->pc = 0x170b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16433 << 16));
    // 0x170b1c: 0x34210625  ori         $at, $at, 0x625
    ctx->pc = 0x170b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1573);
    // 0x170b20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170b24: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x170b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x170b28: 0x3c013f46  lui         $at, 0x3F46
    ctx->pc = 0x170b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16198 << 16));
    // 0x170b2c: 0x342124dd  ori         $at, $at, 0x24DD
    ctx->pc = 0x170b2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9437);
    // 0x170b30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170b34: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x170b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x170b38: 0x3c013f43  lui         $at, 0x3F43
    ctx->pc = 0x170b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16195 << 16));
    // 0x170b3c: 0x34219581  ori         $at, $at, 0x9581
    ctx->pc = 0x170b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38273);
    // 0x170b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170b44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170b48: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x170b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x170b4c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x170b50: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x170b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x170b54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x170b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x170b5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170b60: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x170b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x170b64: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x170b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x170b68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x170b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x170b6c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x170b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x170b70: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x170b70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x170b74: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x170b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170b7c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x170b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170b80: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x170b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x170b84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170b88: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x170b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x170b8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x170b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x170b90: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x170B90u;
    SET_GPR_U32(ctx, 31, 0x170B98u);
    ctx->pc = 0x170B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B90u;
    // 0x170b94: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x170B90u, 0x170B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B98u;
label_170b98:
    // 0x170b98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170B98u;
    {
        const bool branch_taken_0x170b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B98u;
        // 0x170b9c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b98) {
            ctx->pc = 0x170BC8u;
            goto label_170bc8;
        }
    }
    ctx->pc = 0x170BA0u;
    // 0x170ba0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x170ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170ba4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x170ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x170ba8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x170ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x170bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x170bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x170bb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x170bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x170bbc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x170bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bc0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x170BC0u;
    SET_GPR_U32(ctx, 31, 0x170BC8u);
    ctx->pc = 0x170BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BC0u;
    // 0x170bc4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x170BC0u, 0x170BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BC8u;
label_170bc8:
    // 0x170bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bd0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x170bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x170bd4: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x170BD4u;
    SET_GPR_U32(ctx, 31, 0x170BDCu);
    ctx->pc = 0x170BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BD4u;
    // 0x170bd8: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x170BD4u, 0x170BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BDCu;
label_170bdc:
    // 0x170bdc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x170bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170be4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x170be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170be8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x170be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170bec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x170becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170bf0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x170bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x170BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF4u;
        // 0x170bf8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170BFCu;
    // 0x170bfc: 0x0  nop
    ctx->pc = 0x170bfcu;
    // NOP
    ctx->pc = 0x170c00u;
}
