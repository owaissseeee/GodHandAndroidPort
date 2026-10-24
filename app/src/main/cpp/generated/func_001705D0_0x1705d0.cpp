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

// Function: func_001705D0
// Address: 0x1705d0 - 0x1706e0
void func_001705D0_0x1705d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001705D0_0x1705d0");
#endif

    switch (ctx->pc) {
        case 0x1705f0u: goto label_1705f0;
        case 0x170678u: goto label_170678;
        case 0x1706a8u: goto label_1706a8;
        case 0x1706bcu: goto label_1706bc;
        default: break;
    }

    ctx->pc = 0x1705d0u;

    // 0x1705d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1705d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1705d4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1705d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1705d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1705d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1705dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1705dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1705e0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1705e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1705e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1705e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1705e8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1705E8u;
    SET_GPR_U32(ctx, 31, 0x1705F0u);
    ctx->pc = 0x1705ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705E8u;
    // 0x1705ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1705E8u, 0x1705F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705F0u;
label_1705f0:
    // 0x1705f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1705f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1705f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1705f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1705f8: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x1705fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1705fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x170600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170604: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x170604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x170608: 0x3c01403a  lui         $at, 0x403A
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16442 << 16));
    // 0x17060c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x17060cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x170610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170614: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x170618: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x170618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17061c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17061cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x170620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170624: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170628: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x170628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17062c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x17062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x170630: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x170630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x170634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170638: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x170638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17063c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170640: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x170640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x170644: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x170644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x170648: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x170648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17064c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x17064cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x170650: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x170650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x170654: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x170658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17065c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x17065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170660: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x170660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x170664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170668: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x170668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17066c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17066cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x170670: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x170670u;
    SET_GPR_U32(ctx, 31, 0x170678u);
    ctx->pc = 0x170674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170670u;
    // 0x170674: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x170670u, 0x170678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170678u;
label_170678:
    // 0x170678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170678u;
    {
        const bool branch_taken_0x170678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170678u;
        // 0x17067c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170678) {
            ctx->pc = 0x1706A8u;
            goto label_1706a8;
        }
    }
    ctx->pc = 0x170680u;
    // 0x170680: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x170684: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x170684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x170688: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x170688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17068c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17068cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170690: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x170690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x170694: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x170694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170698: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x170698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x17069c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17069cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706a0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1706A0u;
    SET_GPR_U32(ctx, 31, 0x1706A8u);
    ctx->pc = 0x1706A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706A0u;
    // 0x1706a4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1706A0u, 0x1706A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706A8u;
label_1706a8:
    // 0x1706a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1706a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1706ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1706acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706b0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1706b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1706b4: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x1706B4u;
    SET_GPR_U32(ctx, 31, 0x1706BCu);
    ctx->pc = 0x1706B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706B4u;
    // 0x1706b8: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x1706B4u, 0x1706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706BCu;
label_1706bc:
    // 0x1706bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1706bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1706c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1706c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1706c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1706c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1706c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1706cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1706ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1706d0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1706d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1706d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1706D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1706D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706D4u;
        // 0x1706d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1706D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1706DCu;
    // 0x1706dc: 0x0  nop
    ctx->pc = 0x1706dcu;
    // NOP
    ctx->pc = 0x1706e0u;
}
