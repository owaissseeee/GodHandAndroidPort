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

// Function: func_00193050
// Address: 0x193050 - 0x193180
void func_00193050_0x193050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193050_0x193050");
#endif

    switch (ctx->pc) {
        case 0x193070u: goto label_193070;
        case 0x1930e8u: goto label_1930e8;
        case 0x193118u: goto label_193118;
        case 0x19315cu: goto label_19315c;
        default: break;
    }

    ctx->pc = 0x193050u;

    // 0x193050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x193050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193054: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x193054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x193058: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x193058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19305c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x193060: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x193060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x193064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193068: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x193068u;
    SET_GPR_U32(ctx, 31, 0x193070u);
    ctx->pc = 0x19306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193068u;
    // 0x19306c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x193068u, 0x193070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193070u;
label_193070:
    // 0x193070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x193074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193078: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x19307c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19307cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x193080: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x193080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193084: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x193084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193088: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x193088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x19308c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19308cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x193090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193094: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193098: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x193098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19309c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19309cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1930a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1930a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1930a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1930a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1930a8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1930a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1930ac: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1930b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1930b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1930b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1930b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930b8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1930b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1930bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1930bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1930c0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1930c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1930c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1930c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1930c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1930c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1930cc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1930ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1930d0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1930d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1930d4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1930d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1930d8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1930d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1930dc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1930dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1930e0: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1930E0u;
    SET_GPR_U32(ctx, 31, 0x1930E8u);
    ctx->pc = 0x1930E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930E0u;
    // 0x1930e4: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1930E0u, 0x1930E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1930E8u;
label_1930e8:
    // 0x1930e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1930E8u;
    {
        const bool branch_taken_0x1930e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E8u;
        // 0x1930ec: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930e8) {
            ctx->pc = 0x193118u;
            goto label_193118;
        }
    }
    ctx->pc = 0x1930F0u;
    // 0x1930f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1930f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1930f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1930f8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1930f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1930fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1930fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193100: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x193100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193104: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193108: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x193108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19310c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19310cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193110: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x193110u;
    SET_GPR_U32(ctx, 31, 0x193118u);
    ctx->pc = 0x193114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193110u;
    // 0x193114: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x193110u, 0x193118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193118u;
label_193118:
    // 0x193118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19311c: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x193120: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x193120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x193124: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x193124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x193128: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x193128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19312c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193130: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x193130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x193134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193138: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x193138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19313c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19313cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x193140: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x193140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x193144: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x193144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x193148: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x193148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19314c: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19314cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x193150: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x193150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x193154: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x193154u;
    SET_GPR_U32(ctx, 31, 0x19315Cu);
    ctx->pc = 0x193158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193154u;
    // 0x193158: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x193154u, 0x19315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19315Cu;
label_19315c:
    // 0x19315c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19315cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193164: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x193164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193168: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x193168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19316c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193170: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x193170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193174: 0x3e00008  jr          $ra
    ctx->pc = 0x193174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193174u;
        // 0x193178: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19317Cu;
    // 0x19317c: 0x0  nop
    ctx->pc = 0x19317cu;
    // NOP
    ctx->pc = 0x193180u;
}
