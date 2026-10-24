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

// Function: DoorBox_initWithBoxB
// Address: 0x18ef58 - 0x18f0a0
void DoorBox_initWithBoxB_0x18ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorBox_initWithBoxB_0x18ef58");
#endif

    switch (ctx->pc) {
        case 0x18ef78u: goto label_18ef78;
        case 0x18f000u: goto label_18f000;
        case 0x18f030u: goto label_18f030;
        case 0x18f064u: goto label_18f064;
        case 0x18f07cu: goto label_18f07c;
        default: break;
    }

    ctx->pc = 0x18ef58u;

    // 0x18ef58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18ef5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18ef60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18ef64: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18ef68: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18ef68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18ef6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18ef70: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18EF70u;
    SET_GPR_U32(ctx, 31, 0x18EF78u);
    ctx->pc = 0x18EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF70u;
    // 0x18ef74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18EF70u, 0x18EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF78u;
label_18ef78:
    // 0x18ef78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ef7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18ef7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18ef80: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x18ef84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18ef84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ef88: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x18ef88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18ef8c: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x18ef8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x18ef90: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18ef90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18ef94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18ef94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ef98: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ef9c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18efa0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18efa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18efa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18efa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18efa8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18efac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18efacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18efb0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18efb4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18efb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18efb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18efb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efbc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x18efbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18efc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18efc4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18efc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18efc8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18efcc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18efccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18efd0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18efd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18efd4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x18efd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18efd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18efdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18efdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18efe0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18efe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18efe4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18efe8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18efe8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18efec: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18eff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18eff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18eff4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x18eff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18eff8: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18EFF8u;
    SET_GPR_U32(ctx, 31, 0x18F000u);
    ctx->pc = 0x18EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFF8u;
    // 0x18effc: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18EFF8u, 0x18F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F000u;
label_18f000:
    // 0x18f000: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F000u;
    {
        const bool branch_taken_0x18f000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F000u;
        // 0x18f004: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f000) {
            ctx->pc = 0x18F030u;
            goto label_18f030;
        }
    }
    ctx->pc = 0x18F008u;
    // 0x18f008: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18f00c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18f010: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18f014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f018: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18f01c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f020: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18f020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18f024: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18f024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f028: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x18F028u;
    SET_GPR_U32(ctx, 31, 0x18F030u);
    ctx->pc = 0x18F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F028u;
    // 0x18f02c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x18F028u, 0x18F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F030u;
label_18f030:
    // 0x18f030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f034: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x18f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x18f038: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x18f038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f03c: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F03Cu;
    {
        const bool branch_taken_0x18f03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x18F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F03Cu;
        // 0x18f040: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f03c) {
            ctx->pc = 0x18F05Cu;
            goto label_18f05c;
        }
    }
    ctx->pc = 0x18F044u;
    // 0x18f044: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f048: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f04c: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x18f04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x18f050: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18f050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18f054: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f058: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18f058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18f05c:
    // 0x18f05c: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x18F05Cu;
    SET_GPR_U32(ctx, 31, 0x18F064u);
    ctx->pc = 0x18F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F05Cu;
    // 0x18f060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x18F05Cu, 0x18F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F064u;
label_18f064:
    // 0x18f064: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x18f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x18f068: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18f06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f070: 0xa2030624  sb          $v1, 0x624($s0)
    ctx->pc = 0x18f070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f074: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x18F074u;
    SET_GPR_U32(ctx, 31, 0x18F07Cu);
    ctx->pc = 0x18F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F074u;
    // 0x18f078: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x18F074u, 0x18F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F07Cu;
label_18f07c:
    // 0x18f07c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18f07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f084: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18f084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f088: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18f088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f08c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18f08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f090: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f094: 0x3e00008  jr          $ra
    ctx->pc = 0x18F094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F094u;
        // 0x18f098: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F09Cu;
    // 0x18f09c: 0x0  nop
    ctx->pc = 0x18f09cu;
    // NOP
    ctx->pc = 0x18f0a0u;
}
