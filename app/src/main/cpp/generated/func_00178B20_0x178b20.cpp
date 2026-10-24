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

// Function: func_00178B20
// Address: 0x178b20 - 0x178cc0
void func_00178B20_0x178b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178B20_0x178b20");
#endif

    switch (ctx->pc) {
        case 0x178b44u: goto label_178b44;
        case 0x178bbcu: goto label_178bbc;
        case 0x178bf0u: goto label_178bf0;
        case 0x178c00u: goto label_178c00;
        case 0x178c34u: goto label_178c34;
        case 0x178c54u: goto label_178c54;
        case 0x178c98u: goto label_178c98;
        default: break;
    }

    ctx->pc = 0x178b20u;

    // 0x178b20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x178b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x178b24: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x178b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x178b28: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x178b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x178b2c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x178b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x178b30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x178b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x178b34: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x178b34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x178b38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x178b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x178b3c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x178B3Cu;
    SET_GPR_U32(ctx, 31, 0x178B44u);
    ctx->pc = 0x178B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B3Cu;
    // 0x178b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x178B3Cu, 0x178B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B44u;
label_178b44:
    // 0x178b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x178b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x178b48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x178b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x178b4c: 0x3c01406c  lui         $at, 0x406C
    ctx->pc = 0x178b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16492 << 16));
    // 0x178b50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x178b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x178b54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x178b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178b58: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x178b5c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x178b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x178b60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x178b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178b64: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x178b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x178b68: 0x3c013fad  lui         $at, 0x3FAD
    ctx->pc = 0x178b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16301 << 16));
    // 0x178b6c: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x178b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x178b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x178b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178b74: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x178b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178b78: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x178b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x178b7c: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x178b80: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x178b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x178b84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b88: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x178b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x178b8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b90: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x178b90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178b94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178b98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x178b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178b9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x178b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x178ba0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x178ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x178ba4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x178ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x178ba8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x178ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x178bac: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x178bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x178bb0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x178bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x178bb4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x178BB4u;
    SET_GPR_U32(ctx, 31, 0x178BBCu);
    ctx->pc = 0x178BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BB4u;
    // 0x178bb8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x178BB4u, 0x178BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BBCu;
label_178bbc:
    // 0x178bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bc0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x178BC0u;
    {
        const bool branch_taken_0x178bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BC0u;
        // 0x178bc4: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178bc0) {
            ctx->pc = 0x178BF0u;
            goto label_178bf0;
        }
    }
    ctx->pc = 0x178BC8u;
    // 0x178bc8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178bcc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x178bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x178bd0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x178bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x178bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x178bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bd8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x178bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x178bdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x178bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178be0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x178be0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178be4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x178be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x178be8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x178BE8u;
    SET_GPR_U32(ctx, 31, 0x178BF0u);
    ctx->pc = 0x178BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BE8u;
    // 0x178bec: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x178BE8u, 0x178BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BF0u;
label_178bf0:
    // 0x178bf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf8: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x178BF8u;
    SET_GPR_U32(ctx, 31, 0x178C00u);
    ctx->pc = 0x178BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BF8u;
    // 0x178bfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x178BF8u, 0x178C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C00u;
label_178c00:
    // 0x178c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c04: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x178C04u;
    {
        const bool branch_taken_0x178c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C04u;
        // 0x178c08: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c04) {
            ctx->pc = 0x178C54u;
            goto label_178c54;
        }
    }
    ctx->pc = 0x178C0Cu;
    // 0x178c0c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x178c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178c10: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x178c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x178c14: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x178c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x178c18: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x178c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x178c1c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x178c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x178c20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x178c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c24: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x178c28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x178c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x178c2c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x178C2Cu;
    SET_GPR_U32(ctx, 31, 0x178C34u);
    ctx->pc = 0x178C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C2Cu;
    // 0x178c30: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x178C2Cu, 0x178C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C34u;
label_178c34:
    // 0x178c34: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x178c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x178c38: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x178c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x178c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c40: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x178c40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x178c44: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x178c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x178c48: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x178c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x178c4c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x178C4Cu;
    SET_GPR_U32(ctx, 31, 0x178C54u);
    ctx->pc = 0x178C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C4Cu;
    // 0x178c50: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x178C4Cu, 0x178C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C54u;
label_178c54:
    // 0x178c54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x178c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178c58: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x178c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x178c5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x178c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x178c60: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x178c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x178c64: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x178c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x178c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178c6c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x178c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x178c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c74: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x178c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x178c78: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x178c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x178c7c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x178c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x178c80: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x178c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x178c84: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x178c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x178c88: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x178c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x178c8c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x178c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x178c90: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x178C90u;
    SET_GPR_U32(ctx, 31, 0x178C98u);
    ctx->pc = 0x178C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C90u;
    // 0x178c94: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x178C90u, 0x178C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C98u;
label_178c98:
    // 0x178c98: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x178c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178ca0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x178ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178ca4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x178ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178ca8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x178ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178cac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178cb0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x178cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x178CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CB4u;
        // 0x178cb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178CBCu;
    // 0x178cbc: 0x0  nop
    ctx->pc = 0x178cbcu;
    // NOP
    ctx->pc = 0x178cc0u;
}
