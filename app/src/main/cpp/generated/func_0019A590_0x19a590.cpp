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

// Function: func_0019A590
// Address: 0x19a590 - 0x19a6b0
void func_0019A590_0x19a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A590_0x19a590");
#endif

    switch (ctx->pc) {
        case 0x19a5b0u: goto label_19a5b0;
        case 0x19a61cu: goto label_19a61c;
        case 0x19a64cu: goto label_19a64c;
        case 0x19a68cu: goto label_19a68c;
        default: break;
    }

    ctx->pc = 0x19a590u;

    // 0x19a590: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a594: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19a598: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19a59c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19a5a0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19a5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19a5a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a5a8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19A5A8u;
    SET_GPR_U32(ctx, 31, 0x19A5B0u);
    ctx->pc = 0x19A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5A8u;
    // 0x19a5ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19A5A8u, 0x19A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5B0u;
label_19a5b0:
    // 0x19a5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19a5b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19a5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19a5b8: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x19a5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x19a5bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19a5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19a5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a5c4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19a5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a5c8: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
    // 0x19a5cc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19a5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x19a5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a5d4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19a5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19a5d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19a5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19a5dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19a5e0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x19a5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19a5e4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19a5e8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19a5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19a5ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19a5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19a5f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a5f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19a5fc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19a5fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19a600: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19a600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19a604: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19a604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19a608: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19a608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19a60c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19a610: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19a610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19a614: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19A614u;
    SET_GPR_U32(ctx, 31, 0x19A61Cu);
    ctx->pc = 0x19A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A614u;
    // 0x19a618: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19A614u, 0x19A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A61Cu;
label_19a61c:
    // 0x19a61c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A61Cu;
    {
        const bool branch_taken_0x19a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A61Cu;
        // 0x19a620: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a61c) {
            ctx->pc = 0x19A64Cu;
            goto label_19a64c;
        }
    }
    ctx->pc = 0x19A624u;
    // 0x19a624: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19a624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a628: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19a628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19a62c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19a630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a634: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19a634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19a638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a63c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19a63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19a640: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19a640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a644: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19A644u;
    SET_GPR_U32(ctx, 31, 0x19A64Cu);
    ctx->pc = 0x19A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A644u;
    // 0x19a648: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19A644u, 0x19A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A64Cu;
label_19a64c:
    // 0x19a64c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a650: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x19a650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19a654: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19a658: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19a658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19a65c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19a660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a664: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19a664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19a668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a66c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19a66cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a670: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x19a670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x19a674: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x19a674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x19a678: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x19a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x19a67c: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x19a67cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x19a680: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19a680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a684: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19A684u;
    SET_GPR_U32(ctx, 31, 0x19A68Cu);
    ctx->pc = 0x19A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A684u;
    // 0x19a688: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19A684u, 0x19A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A68Cu;
label_19a68c:
    // 0x19a68c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a694: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a698: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a69c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a6a0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6A4u;
        // 0x19a6a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A6ACu;
    // 0x19a6ac: 0x0  nop
    ctx->pc = 0x19a6acu;
    // NOP
    ctx->pc = 0x19a6b0u;
}
