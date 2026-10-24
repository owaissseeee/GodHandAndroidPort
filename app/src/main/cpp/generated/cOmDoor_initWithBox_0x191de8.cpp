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

// Function: cOmDoor_initWithBox
// Address: 0x191de8 - 0x191f30
void cOmDoor_initWithBox_0x191de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_initWithBox_0x191de8");
#endif

    switch (ctx->pc) {
        case 0x191e08u: goto label_191e08;
        case 0x191e90u: goto label_191e90;
        case 0x191ec0u: goto label_191ec0;
        case 0x191ef4u: goto label_191ef4;
        case 0x191f0cu: goto label_191f0c;
        default: break;
    }

    ctx->pc = 0x191de8u;

    // 0x191de8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x191dec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x191decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x191df0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x191df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x191df4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x191df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x191df8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x191df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x191dfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x191dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x191e00: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x191E00u;
    SET_GPR_U32(ctx, 31, 0x191E08u);
    ctx->pc = 0x191E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E00u;
    // 0x191e04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x191E00u, 0x191E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E08u;
label_191e08:
    // 0x191e08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191e0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x191e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x191e10: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
    // 0x191e14: 0x342178d5  ori         $at, $at, 0x78D5
    ctx->pc = 0x191e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30933);
    // 0x191e18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x191e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191e1c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x191e20: 0x3c01401b  lui         $at, 0x401B
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16411 << 16));
    // 0x191e24: 0x3421a29c  ori         $at, $at, 0xA29C
    ctx->pc = 0x191e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41628);
    // 0x191e28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191e2c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x191e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191e30: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x191e34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x191e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x191e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191e3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x191e40: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x191e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x191e44: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x191e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x191e48: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x191e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x191e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e50: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x191e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x191e54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191e58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x191e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x191e5c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x191e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x191e60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x191e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x191e64: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x191e64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x191e68: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x191e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x191e6c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x191e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x191e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191e74: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x191e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e78: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x191e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x191e7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x191e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x191e80: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x191e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x191e84: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x191e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x191e88: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x191E88u;
    SET_GPR_U32(ctx, 31, 0x191E90u);
    ctx->pc = 0x191E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E88u;
    // 0x191e8c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x191E88u, 0x191E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E90u;
label_191e90:
    // 0x191e90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x191E90u;
    {
        const bool branch_taken_0x191e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E90u;
        // 0x191e94: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e90) {
            ctx->pc = 0x191EC0u;
            goto label_191ec0;
        }
    }
    ctx->pc = 0x191E98u;
    // 0x191e98: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191e9c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x191e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x191ea0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x191ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x191ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ea8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x191ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x191eac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x191eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191eb0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x191eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x191eb4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x191eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191eb8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x191EB8u;
    SET_GPR_U32(ctx, 31, 0x191EC0u);
    ctx->pc = 0x191EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EB8u;
    // 0x191ebc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x191EB8u, 0x191EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191EC0u;
label_191ec0:
    // 0x191ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191ec4: 0x26030610  addiu       $v1, $s0, 0x610
    ctx->pc = 0x191ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x191ec8: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x191ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x191ecc: 0x107d0007  beq         $v1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x191ECCu;
    {
        const bool branch_taken_0x191ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x191ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ECCu;
        // 0x191ed0: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ecc) {
            ctx->pc = 0x191EECu;
            goto label_191eec;
        }
    }
    ctx->pc = 0x191ED4u;
    // 0x191ed4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x191ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ed8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x191ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191edc: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x191edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x191ee0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x191ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x191ee4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x191ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ee8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x191ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_191eec:
    // 0x191eec: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x191EECu;
    SET_GPR_U32(ctx, 31, 0x191EF4u);
    ctx->pc = 0x191EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EECu;
    // 0x191ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x191EECu, 0x191EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191EF4u;
label_191ef4:
    // 0x191ef4: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x191ef8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x191ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x191efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f00: 0xa2030624  sb          $v1, 0x624($s0)
    ctx->pc = 0x191f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 3));
    // 0x191f04: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x191F04u;
    SET_GPR_U32(ctx, 31, 0x191F0Cu);
    ctx->pc = 0x191F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F04u;
    // 0x191f08: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x191F04u, 0x191F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F0Cu;
label_191f0c:
    // 0x191f0c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x191f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f14: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x191f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191f18: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x191f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191f1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x191f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191f20: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x191f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191f24: 0x3e00008  jr          $ra
    ctx->pc = 0x191F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F24u;
        // 0x191f28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191F2Cu;
    // 0x191f2c: 0x0  nop
    ctx->pc = 0x191f2cu;
    // NOP
    ctx->pc = 0x191f30u;
}
