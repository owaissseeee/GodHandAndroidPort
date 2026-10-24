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

// Function: func_0019DFB8
// Address: 0x19dfb8 - 0x19e150
void func_0019DFB8_0x19dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019DFB8_0x19dfb8");
#endif

    switch (ctx->pc) {
        case 0x19dfdcu: goto label_19dfdc;
        case 0x19e040u: goto label_19e040;
        case 0x19e074u: goto label_19e074;
        case 0x19e084u: goto label_19e084;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e128u: goto label_19e128;
        default: break;
    }

    ctx->pc = 0x19dfb8u;

    // 0x19dfb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19dfbc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19dfc0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19dfc4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19dfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19dfc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19dfcc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19dfccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19dfd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19dfd4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19DFD4u;
    SET_GPR_U32(ctx, 31, 0x19DFDCu);
    ctx->pc = 0x19DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFD4u;
    // 0x19dfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19DFD4u, 0x19DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFDCu;
label_19dfdc:
    // 0x19dfdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19dfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19dfe0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19dfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19dfe4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x19dfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x19dfe8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19dfe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19dfec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19dfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dff0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19dff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19dff4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x19dff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19dff8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x19dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x19dffc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19dffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e000: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19e000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e004: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19e008: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x19e008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x19e00c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19e00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19e010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e014: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19e014u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19e018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e01c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19e01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e020: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e024: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x19e024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e028: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19e028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19e02c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19e030: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19e030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19e034: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19e034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19e038: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19E038u;
    SET_GPR_U32(ctx, 31, 0x19E040u);
    ctx->pc = 0x19E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E038u;
    // 0x19e03c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19E038u, 0x19E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E040u;
label_19e040:
    // 0x19e040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e044: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E044u;
    {
        const bool branch_taken_0x19e044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E044u;
        // 0x19e048: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e044) {
            ctx->pc = 0x19E074u;
            goto label_19e074;
        }
    }
    ctx->pc = 0x19E04Cu;
    // 0x19e04c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e050: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19e050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19e054: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19e054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19e058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19e058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e05c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19e060: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x19e060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e064: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19e064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e068: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x19e068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19e06c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19E06Cu;
    SET_GPR_U32(ctx, 31, 0x19E074u);
    ctx->pc = 0x19E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E06Cu;
    // 0x19e070: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19E06Cu, 0x19E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E074u;
label_19e074:
    // 0x19e074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e07c: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x19E07Cu;
    SET_GPR_U32(ctx, 31, 0x19E084u);
    ctx->pc = 0x19E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E07Cu;
    // 0x19e080: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x19E07Cu, 0x19E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E084u;
label_19e084:
    // 0x19e084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e088: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19E088u;
    {
        const bool branch_taken_0x19e088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E088u;
        // 0x19e08c: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e088) {
            ctx->pc = 0x19E0E4u;
            goto label_19e0e4;
        }
    }
    ctx->pc = 0x19E090u;
    // 0x19e090: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e094: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19e094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19e098: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x19e098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19e09c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19e09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0a0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19e0a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19e0a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19e0a8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x19e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x19e0ac: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x19E0ACu;
    SET_GPR_U32(ctx, 31, 0x19E0B4u);
    ctx->pc = 0x19E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0ACu;
    // 0x19e0b0: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x19E0ACu, 0x19E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0B4u;
label_19e0b4:
    // 0x19e0b4: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x19e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x19e0b8: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x19e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x19e0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0c0: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x19e0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e0c4: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x19e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x19e0c8: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x19e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x19e0cc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19E0CCu;
    SET_GPR_U32(ctx, 31, 0x19E0D4u);
    ctx->pc = 0x19E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0CCu;
    // 0x19e0d0: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19E0CCu, 0x19E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0D4u;
label_19e0d4:
    // 0x19e0d4: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x19e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x19e0d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e0dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19e0e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19e0e4:
    // 0x19e0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e0e8: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19e0ec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x19e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19e0f0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e0f4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19e0f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e0fc: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19e100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e104: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19e104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19e108: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19e108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19e10c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19e10cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e110: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19e110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19e114: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19e114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19e118: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19e11c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19e11cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19e120: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19E120u;
    SET_GPR_U32(ctx, 31, 0x19E128u);
    ctx->pc = 0x19E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E120u;
    // 0x19e124: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19E120u, 0x19E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E128u;
label_19e128:
    // 0x19e128: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19e128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e130: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19e130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e134: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19e134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e138: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19e138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e13c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e140: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e144: 0x3e00008  jr          $ra
    ctx->pc = 0x19E144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E144u;
        // 0x19e148: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E14Cu;
    // 0x19e14c: 0x0  nop
    ctx->pc = 0x19e14cu;
    // NOP
    ctx->pc = 0x19e150u;
}
