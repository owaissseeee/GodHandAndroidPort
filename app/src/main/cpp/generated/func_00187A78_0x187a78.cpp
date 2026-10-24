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

// Function: func_00187A78
// Address: 0x187a78 - 0x187c18
void func_00187A78_0x187a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187A78_0x187a78");
#endif

    switch (ctx->pc) {
        case 0x187a9cu: goto label_187a9c;
        case 0x187b18u: goto label_187b18;
        case 0x187b4cu: goto label_187b4c;
        case 0x187b5cu: goto label_187b5c;
        case 0x187b90u: goto label_187b90;
        case 0x187bb0u: goto label_187bb0;
        case 0x187bf4u: goto label_187bf4;
        default: break;
    }

    ctx->pc = 0x187a78u;

    // 0x187a78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x187a7c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x187a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x187a80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x187a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x187a84: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x187a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x187a88: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x187a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x187a8c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x187a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x187a90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x187a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x187a94: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x187A94u;
    SET_GPR_U32(ctx, 31, 0x187A9Cu);
    ctx->pc = 0x187A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A94u;
    // 0x187a98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x187A94u, 0x187A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A9Cu;
label_187a9c:
    // 0x187a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x187a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x187aa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x187aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x187aa4: 0x3c014027  lui         $at, 0x4027
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16423 << 16));
    // 0x187aa8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x187aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x187aac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x187aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x187ab0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x187ab4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x187ab8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x187ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x187abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x187abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187ac0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x187ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x187ac4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x187ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x187ac8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x187ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x187acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x187accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187ad0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187ad4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x187ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x187ad8: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x187ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x187adc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x187adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x187ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ae4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x187ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x187ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187aec: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x187aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x187af0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187af4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x187af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x187af8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x187af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x187afc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x187afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x187b00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x187b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x187b04: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x187b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x187b08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x187b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x187b0c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x187b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x187b10: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x187B10u;
    SET_GPR_U32(ctx, 31, 0x187B18u);
    ctx->pc = 0x187B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B10u;
    // 0x187b14: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x187B10u, 0x187B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B18u;
label_187b18:
    // 0x187b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b1c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187B1Cu;
    {
        const bool branch_taken_0x187b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B1Cu;
        // 0x187b20: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b1c) {
            ctx->pc = 0x187B4Cu;
            goto label_187b4c;
        }
    }
    ctx->pc = 0x187B24u;
    // 0x187b24: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x187b28: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x187b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x187b2c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x187b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x187b30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x187b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b34: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x187b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x187b38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x187b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b3c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x187b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b40: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x187b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x187b44: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x187B44u;
    SET_GPR_U32(ctx, 31, 0x187B4Cu);
    ctx->pc = 0x187B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B44u;
    // 0x187b48: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x187B44u, 0x187B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B4Cu;
label_187b4c:
    // 0x187b4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b54: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x187B54u;
    SET_GPR_U32(ctx, 31, 0x187B5Cu);
    ctx->pc = 0x187B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B54u;
    // 0x187b58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x187B54u, 0x187B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B5Cu;
label_187b5c:
    // 0x187b5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b60: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x187B60u;
    {
        const bool branch_taken_0x187b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B60u;
        // 0x187b64: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b60) {
            ctx->pc = 0x187BB0u;
            goto label_187bb0;
        }
    }
    ctx->pc = 0x187B68u;
    // 0x187b68: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x187b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x187b6c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x187b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x187b70: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x187b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x187b74: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x187b78: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x187b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x187b7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b80: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x187b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x187b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x187b88: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x187B88u;
    SET_GPR_U32(ctx, 31, 0x187B90u);
    ctx->pc = 0x187B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B88u;
    // 0x187b8c: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x187B88u, 0x187B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B90u;
label_187b90:
    // 0x187b90: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x187b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x187b94: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x187b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x187b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b9c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x187b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x187ba0: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x187ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x187ba4: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x187ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x187ba8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x187BA8u;
    SET_GPR_U32(ctx, 31, 0x187BB0u);
    ctx->pc = 0x187BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BA8u;
    // 0x187bac: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x187BA8u, 0x187BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BB0u;
label_187bb0:
    // 0x187bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187bb4: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x187bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x187bb8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187bbc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187bc0: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x187bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x187bc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187bc8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x187bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x187bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bd0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x187bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x187bd4: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x187bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x187bd8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x187bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x187bdc: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x187bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x187be0: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x187be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x187be4: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x187be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x187be8: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x187be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x187bec: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x187BECu;
    SET_GPR_U32(ctx, 31, 0x187BF4u);
    ctx->pc = 0x187BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BECu;
    // 0x187bf0: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x187BECu, 0x187BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BF4u;
label_187bf4:
    // 0x187bf4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x187bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187bfc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x187bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187c00: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x187c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187c04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x187c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187c08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x187c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187c0c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x187c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187c10: 0x3e00008  jr          $ra
    ctx->pc = 0x187C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C10u;
        // 0x187c14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C18u;
}
