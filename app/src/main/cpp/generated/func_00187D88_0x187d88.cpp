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

// Function: func_00187D88
// Address: 0x187d88 - 0x187fe8
void func_00187D88_0x187d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187D88_0x187d88");
#endif

    switch (ctx->pc) {
        case 0x187dacu: goto label_187dac;
        case 0x187e18u: goto label_187e18;
        case 0x187e4cu: goto label_187e4c;
        case 0x187e5cu: goto label_187e5c;
        case 0x187e8cu: goto label_187e8c;
        case 0x187eacu: goto label_187eac;
        case 0x187eccu: goto label_187ecc;
        case 0x187ee4u: goto label_187ee4;
        case 0x187f18u: goto label_187f18;
        default: break;
    }

    ctx->pc = 0x187d88u;

    // 0x187d88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x187d8c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x187d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x187d90: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x187d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x187d94: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x187d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x187d98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x187d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x187d9c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x187d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x187da0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x187da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x187da4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x187DA4u;
    SET_GPR_U32(ctx, 31, 0x187DACu);
    ctx->pc = 0x187DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DA4u;
    // 0x187da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x187DA4u, 0x187DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DACu;
label_187dac:
    // 0x187dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x187dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x187db0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x187db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x187db4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x187db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x187db8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x187db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x187dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x187dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187dc0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x187dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x187dc4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x187dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x187dc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x187dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187dcc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x187dd0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x187dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x187dd4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x187dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187dd8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x187dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x187ddc: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x187ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x187de0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x187de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x187de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187de8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x187de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x187dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187df0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x187df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x187df4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187df8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x187df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x187dfc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x187dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x187e00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x187e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x187e04: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x187e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x187e08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x187e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x187e0c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x187e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x187e10: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x187E10u;
    SET_GPR_U32(ctx, 31, 0x187E18u);
    ctx->pc = 0x187E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E10u;
    // 0x187e14: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x187E10u, 0x187E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E18u;
label_187e18:
    // 0x187e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e1c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x187E1Cu;
    {
        const bool branch_taken_0x187e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E1Cu;
        // 0x187e20: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e1c) {
            ctx->pc = 0x187E4Cu;
            goto label_187e4c;
        }
    }
    ctx->pc = 0x187E24u;
    // 0x187e24: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x187e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x187e28: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x187e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x187e2c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x187e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x187e30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x187e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e34: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x187e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x187e38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x187e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e3c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x187e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e40: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x187e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x187e44: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x187E44u;
    SET_GPR_U32(ctx, 31, 0x187E4Cu);
    ctx->pc = 0x187E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E44u;
    // 0x187e48: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x187E44u, 0x187E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E4Cu;
label_187e4c:
    // 0x187e4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e54: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x187E54u;
    SET_GPR_U32(ctx, 31, 0x187E5Cu);
    ctx->pc = 0x187E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E54u;
    // 0x187e58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x187E54u, 0x187E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E5Cu;
label_187e5c:
    // 0x187e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e60: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187E60u;
    {
        const bool branch_taken_0x187e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E60u;
        // 0x187e64: 0xae040608  sw          $a0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e60) {
            ctx->pc = 0x187EACu;
            goto label_187eac;
        }
    }
    ctx->pc = 0x187E68u;
    // 0x187e68: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x187e6c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x187e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x187e70: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x187e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x187e74: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x187e78: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x187e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x187e7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x187e80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x187e84: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x187E84u;
    SET_GPR_U32(ctx, 31, 0x187E8Cu);
    ctx->pc = 0x187E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E84u;
    // 0x187e88: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x187E84u, 0x187E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E8Cu;
label_187e8c:
    // 0x187e8c: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x187e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x187e90: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x187e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e98: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x187e98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x187e9c: 0x8e020608  lw          $v0, 0x608($s0)
    ctx->pc = 0x187e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x187ea0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x187ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x187ea4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x187EA4u;
    SET_GPR_U32(ctx, 31, 0x187EACu);
    ctx->pc = 0x187EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EA4u;
    // 0x187ea8: 0x8e040608  lw          $a0, 0x608($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x187EA4u, 0x187EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EACu;
label_187eac:
    // 0x187eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187eb0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x187eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x187eb4: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x187eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x187eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ec0: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x187ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x187ec4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x187EC4u;
    SET_GPR_U32(ctx, 31, 0x187ECCu);
    ctx->pc = 0x187EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EC4u;
    // 0x187ec8: 0xa6020602  sh          $v0, 0x602($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x187EC4u, 0x187ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187ECCu;
label_187ecc:
    // 0x187ecc: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x187eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x187ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187ed8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x187ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x187edc: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x187EDCu;
    SET_GPR_U32(ctx, 31, 0x187EE4u);
    ctx->pc = 0x187EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EDCu;
    // 0x187ee0: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x187EDCu, 0x187EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EE4u;
label_187ee4:
    // 0x187ee4: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x187ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x187ee8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x187ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x187eec: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x187eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x187ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187ef4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x187ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187ef8: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x187ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x187efc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x187efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x187f00: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x187F00u;
    {
        const bool branch_taken_0x187f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x187f00) {
            ctx->pc = 0x187F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187F00u;
            // 0x187f04: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FC4u;
            goto label_187fc4;
        }
    }
    ctx->pc = 0x187F08u;
    // 0x187f08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x187f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187f10: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x187f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x187f14: 0x0  nop
    ctx->pc = 0x187f14u;
    // NOP
label_187f18:
    // 0x187f18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f1c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x187f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x187f20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F20u;
    {
        const bool branch_taken_0x187f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F20u;
        // 0x187f24: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f20) {
            ctx->pc = 0x187F30u;
            goto label_187f30;
        }
    }
    ctx->pc = 0x187F28u;
    // 0x187f28: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x187f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x187f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187f30:
    // 0x187f30: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x187f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x187f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187F34u;
    {
        const bool branch_taken_0x187f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F34u;
        // 0x187f38: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f34) {
            ctx->pc = 0x187F4Cu;
            goto label_187f4c;
        }
    }
    ctx->pc = 0x187F3Cu;
    // 0x187f3c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x187f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x187f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187f44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187F44u;
    {
        const bool branch_taken_0x187f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F44u;
        // 0x187f48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f44) {
            ctx->pc = 0x187F50u;
            goto label_187f50;
        }
    }
    ctx->pc = 0x187F4Cu;
label_187f4c:
    // 0x187f4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187f50:
    // 0x187f50: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x187f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x187f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f58: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x187f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x187f5c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x187f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x187f60: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x187f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x187f64: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x187f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x187f68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F68u;
    {
        const bool branch_taken_0x187f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F68u;
        // 0x187f6c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f68) {
            ctx->pc = 0x187F78u;
            goto label_187f78;
        }
    }
    ctx->pc = 0x187F70u;
    // 0x187f70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x187f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x187f74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187f78:
    // 0x187f78: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x187f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x187f7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187F7Cu;
    {
        const bool branch_taken_0x187f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F7Cu;
        // 0x187f80: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f7c) {
            ctx->pc = 0x187F94u;
            goto label_187f94;
        }
    }
    ctx->pc = 0x187F84u;
    // 0x187f84: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x187f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187f8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F8Cu;
        // 0x187f90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187F98u;
            goto label_187f98;
        }
    }
    ctx->pc = 0x187F94u;
label_187f94:
    // 0x187f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187f98:
    // 0x187f98: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x187f9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x187f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x187fa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x187fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x187fa4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x187fa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x187fa8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x187fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x187fac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187FACu;
    {
        const bool branch_taken_0x187fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FACu;
        // 0x187fb0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fac) {
            ctx->pc = 0x187FC0u;
            goto label_187fc0;
        }
    }
    ctx->pc = 0x187FB4u;
    // 0x187fb4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x187fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x187fb8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x187FB8u;
    {
        const bool branch_taken_0x187fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x187fb8) {
            ctx->pc = 0x187FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187FB8u;
            // 0x187fbc: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f18;
        }
    }
    ctx->pc = 0x187FC0u;
label_187fc0:
    // 0x187fc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x187fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_187fc4:
    // 0x187fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187fc8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x187fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187fcc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x187fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187fd0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x187fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187fd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x187fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187fd8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x187fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x187FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FDCu;
        // 0x187fe0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187FE4u;
    // 0x187fe4: 0x0  nop
    ctx->pc = 0x187fe4u;
    // NOP
    ctx->pc = 0x187fe8u;
}
