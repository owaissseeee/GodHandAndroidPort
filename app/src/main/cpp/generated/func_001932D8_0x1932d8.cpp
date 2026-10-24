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

// Function: func_001932D8
// Address: 0x1932d8 - 0x1933f8
void func_001932D8_0x1932d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001932D8_0x1932d8");
#endif

    switch (ctx->pc) {
        case 0x1932f8u: goto label_1932f8;
        case 0x193364u: goto label_193364;
        case 0x193394u: goto label_193394;
        case 0x1933d8u: goto label_1933d8;
        default: break;
    }

    ctx->pc = 0x1932d8u;

    // 0x1932d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1932d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1932dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1932dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1932e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1932e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1932e4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1932e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1932e8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1932e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1932ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1932ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1932f0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1932F0u;
    SET_GPR_U32(ctx, 31, 0x1932F8u);
    ctx->pc = 0x1932F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932F0u;
    // 0x1932f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1932F0u, 0x1932F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932F8u;
label_1932f8:
    // 0x1932f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1932f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1932fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1932fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193300: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x193304: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x193304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x193308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19330c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19330cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193310: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x193314: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x193314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x193318: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19331c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19331cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193320: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x193320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x193324: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x193324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193328: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x193328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19332c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x193330: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x193330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193338: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x193338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19333c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193340: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x193340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193344: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x193344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x193348: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x193348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19334c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19334cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x193350: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x193350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x193354: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x193354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x193358: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x193358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19335c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19335Cu;
    SET_GPR_U32(ctx, 31, 0x193364u);
    ctx->pc = 0x193360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19335Cu;
    // 0x193360: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19335Cu, 0x193364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193364u;
label_193364:
    // 0x193364: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x193364u;
    {
        const bool branch_taken_0x193364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193364u;
        // 0x193368: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193364) {
            ctx->pc = 0x193394u;
            goto label_193394;
        }
    }
    ctx->pc = 0x19336Cu;
    // 0x19336c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19336cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193370: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x193370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x193374: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x193374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x193378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19337c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19337cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193384: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x193384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x193388: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x193388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19338c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19338Cu;
    SET_GPR_U32(ctx, 31, 0x193394u);
    ctx->pc = 0x193390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19338Cu;
    // 0x193390: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19338Cu, 0x193394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193394u;
label_193394:
    // 0x193394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193398: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19339c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1933a0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1933a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1933a4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1933a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1933a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1933a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1933ac: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1933acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1933b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b4: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1933b8: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1933b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1933bc: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1933bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1933c0: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1933c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1933c4: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1933c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1933c8: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1933c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1933cc: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1933ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1933d0: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1933D0u;
    SET_GPR_U32(ctx, 31, 0x1933D8u);
    ctx->pc = 0x1933D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933D0u;
    // 0x1933d4: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1933D0u, 0x1933D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933D8u;
label_1933d8:
    // 0x1933d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1933d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1933dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1933dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1933e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1933e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1933e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1933e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1933ec: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1933ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1933f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1933F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1933F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933F0u;
        // 0x1933f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1933F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1933F8u;
}
