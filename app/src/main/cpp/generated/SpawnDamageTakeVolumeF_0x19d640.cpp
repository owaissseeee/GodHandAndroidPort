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

// Function: SpawnDamageTakeVolumeF
// Address: 0x19d640 - 0x19d740
void SpawnDamageTakeVolumeF_0x19d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnDamageTakeVolumeF_0x19d640");
#endif

    switch (ctx->pc) {
        case 0x19d660u: goto label_19d660;
        case 0x19d6dcu: goto label_19d6dc;
        case 0x19d70cu: goto label_19d70c;
        case 0x19d720u: goto label_19d720;
        default: break;
    }

    ctx->pc = 0x19d640u;

    // 0x19d640: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19d644: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19d644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19d648: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19d648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19d64c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19d64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19d650: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19d650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19d654: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19d658: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19D658u;
    SET_GPR_U32(ctx, 31, 0x19D660u);
    ctx->pc = 0x19D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D658u;
    // 0x19d65c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19D658u, 0x19D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D660u;
label_19d660:
    // 0x19d660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19d664: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19d664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19d668: 0x3c013fae  lui         $at, 0x3FAE
    ctx->pc = 0x19d668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16302 << 16));
    // 0x19d66c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x19d66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x19d670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d674: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19d674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d678: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19d67c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d67cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19d680: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d684: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19d684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d688: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19d68c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19d690: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19d690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19d694: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19d698: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19d698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19d69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19d6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19d6a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d6a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19d6a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19d6ac: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19d6acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19d6b0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19d6b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19d6b4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19d6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19d6b8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x19d6bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d6c0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d6c4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19d6c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19d6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19d6cc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19d6d0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19d6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19d6d4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19D6D4u;
    SET_GPR_U32(ctx, 31, 0x19D6DCu);
    ctx->pc = 0x19D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D6D4u;
    // 0x19d6d8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19D6D4u, 0x19D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D6DCu;
label_19d6dc:
    // 0x19d6dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19D6DCu;
    {
        const bool branch_taken_0x19d6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6DCu;
        // 0x19d6e0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6dc) {
            ctx->pc = 0x19D70Cu;
            goto label_19d70c;
        }
    }
    ctx->pc = 0x19D6E4u;
    // 0x19d6e4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19d6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d6e8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19d6ec: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19d6f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6f4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19d6f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19d6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6fc: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19d6fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19d700: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19d700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d704: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19D704u;
    SET_GPR_U32(ctx, 31, 0x19D70Cu);
    ctx->pc = 0x19D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D704u;
    // 0x19d708: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19D704u, 0x19D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D70Cu;
label_19d70c:
    // 0x19d70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d714: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19d714u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d718: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x19D718u;
    SET_GPR_U32(ctx, 31, 0x19D720u);
    ctx->pc = 0x19D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D718u;
    // 0x19d71c: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x19D718u, 0x19D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D720u;
label_19d720:
    // 0x19d720: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19d720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d728: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19d728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d72c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19d72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19d730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d734: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d738: 0x3e00008  jr          $ra
    ctx->pc = 0x19D738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D738u;
        // 0x19d73c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D740u;
}
