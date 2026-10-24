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

// Function: DoorBoxObj_construct
// Address: 0x192050 - 0x192198
void DoorBoxObj_construct_0x192050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorBoxObj_construct_0x192050");
#endif

    switch (ctx->pc) {
        case 0x192070u: goto label_192070;
        case 0x1920f4u: goto label_1920f4;
        case 0x192124u: goto label_192124;
        case 0x192158u: goto label_192158;
        case 0x19216cu: goto label_19216c;
        default: break;
    }

    ctx->pc = 0x192050u;

    // 0x192050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x192054: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x192054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x192058: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x192058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19205c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x192060: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x192060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x192064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192068: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x192068u;
    SET_GPR_U32(ctx, 31, 0x192070u);
    ctx->pc = 0x19206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192068u;
    // 0x19206c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x192068u, 0x192070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192070u;
label_192070:
    // 0x192070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x192074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x192078: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
    // 0x19207c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19207cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x192080: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x192080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x192084: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192088: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x19208c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19208cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192090: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192094: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x192094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x192098: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x192098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19209c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19209cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1920a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1920a4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1920a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1920a8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1920a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1920ac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1920acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1920b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1920b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1920b4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1920b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1920b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1920bc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1920bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1920c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1920c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1920c4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1920c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1920c8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1920c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1920cc: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1920ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1920d0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1920d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1920d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1920d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1920d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1920dc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1920dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1920e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1920e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1920e4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1920e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1920e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1920e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1920ec: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1920ECu;
    SET_GPR_U32(ctx, 31, 0x1920F4u);
    ctx->pc = 0x1920F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1920ECu;
    // 0x1920f0: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1920ECu, 0x1920F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1920F4u;
label_1920f4:
    // 0x1920f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1920F4u;
    {
        const bool branch_taken_0x1920f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F4u;
        // 0x1920f8: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920f4) {
            ctx->pc = 0x192124u;
            goto label_192124;
        }
    }
    ctx->pc = 0x1920FCu;
    // 0x1920fc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1920fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192100: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x192100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x192104: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x192104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x192108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19210c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x192110: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192114: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x192114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x192118: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x192118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19211c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19211Cu;
    SET_GPR_U32(ctx, 31, 0x192124u);
    ctx->pc = 0x192120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19211Cu;
    // 0x192120: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19211Cu, 0x192124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192124u;
label_192124:
    // 0x192124: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x192124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192128: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x192128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x19212c: 0xa6110548  sh          $s1, 0x548($s0)
    ctx->pc = 0x19212cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 17));
    // 0x192130: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x192130u;
    {
        const bool branch_taken_0x192130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x192134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192130u;
        // 0x192134: 0xa611054a  sh          $s1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192130) {
            ctx->pc = 0x192150u;
            goto label_192150;
        }
    }
    ctx->pc = 0x192138u;
    // 0x192138: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x192138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19213c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192140: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x192140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x192144: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x192144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x192148: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x192148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19214c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x19214cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_192150:
    // 0x192150: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x192150u;
    SET_GPR_U32(ctx, 31, 0x192158u);
    ctx->pc = 0x192154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192150u;
    // 0x192154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x192150u, 0x192158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192158u;
label_192158:
    // 0x192158: 0xa2110624  sb          $s1, 0x624($s0)
    ctx->pc = 0x192158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 17));
    // 0x19215c: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x192160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192164: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x192164u;
    SET_GPR_U32(ctx, 31, 0x19216Cu);
    ctx->pc = 0x192168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192164u;
    // 0x192168: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x192164u, 0x19216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19216Cu;
label_19216c:
    // 0x19216c: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x19216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x192170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192174: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x192174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192178: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x192178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x19217c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19217cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192180: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x192180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x192184: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x192184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19218c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192190: 0x3e00008  jr          $ra
    ctx->pc = 0x192190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192190u;
        // 0x192194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192198u;
}
