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

// Function: func_001A0208
// Address: 0x1a0208 - 0x1a0320
void func_001A0208_0x1a0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0208_0x1a0208");
#endif

    switch (ctx->pc) {
        case 0x1a0228u: goto label_1a0228;
        case 0x1a0284u: goto label_1a0284;
        case 0x1a02b4u: goto label_1a02b4;
        case 0x1a02fcu: goto label_1a02fc;
        default: break;
    }

    ctx->pc = 0x1a0208u;

    // 0x1a0208: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a0208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a020c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a0210: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a0214: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a0218: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a0218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a021c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a021cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0220: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A0220u;
    SET_GPR_U32(ctx, 31, 0x1A0228u);
    ctx->pc = 0x1A0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0220u;
    // 0x1a0224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A0220u, 0x1A0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0228u;
label_1a0228:
    // 0x1a0228: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a022c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a022cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a0230: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a0230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0238: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a0238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a023c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a023cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a0240: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a0244: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a0244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a0248: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a0248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a024c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a0250: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1a0254: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1a0254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a0258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a025c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a025cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a0260: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0264: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a0264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a0268: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a0268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a026c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a026cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a0270: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a0270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a0274: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a0274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a0278: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a0278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a027c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A027Cu;
    SET_GPR_U32(ctx, 31, 0x1A0284u);
    ctx->pc = 0x1A0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A027Cu;
    // 0x1a0280: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A027Cu, 0x1A0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0284u;
label_1a0284:
    // 0x1a0284: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0284u;
    {
        const bool branch_taken_0x1a0284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0284u;
        // 0x1a0288: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0284) {
            ctx->pc = 0x1A02B4u;
            goto label_1a02b4;
        }
    }
    ctx->pc = 0x1A028Cu;
    // 0x1a028c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a028cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a0290: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a0290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a0294: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a0294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a0298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a029c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a029cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a02a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a02a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02a4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a02a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a02a8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a02a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02ac: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A02ACu;
    SET_GPR_U32(ctx, 31, 0x1A02B4u);
    ctx->pc = 0x1A02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02ACu;
    // 0x1a02b0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A02ACu, 0x1A02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02B4u;
label_1a02b4:
    // 0x1a02b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a02b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02b8: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x1a02b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1a02bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a02bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a02c0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a02c4: 0x2407002e  addiu       $a3, $zero, 0x2E
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a02c8: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1a02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1a02cc: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1a02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1a02d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a02d4: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1a02d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1a02d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02dc: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x1a02dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a02e0: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x1a02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x1a02e4: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x1a02e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a02e8: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x1a02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x1a02ec: 0xa60705f6  sh          $a3, 0x5F6($s0)
    ctx->pc = 0x1a02ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a02f0: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x1a02f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a02f4: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1A02F4u;
    SET_GPR_U32(ctx, 31, 0x1A02FCu);
    ctx->pc = 0x1A02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02F4u;
    // 0x1a02f8: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1A02F4u, 0x1A02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02FCu;
label_1a02fc:
    // 0x1a02fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a02fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0304: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a0304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0308: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a0308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a030c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0310: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0314: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0314u;
        // 0x1a0318: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A031Cu;
    // 0x1a031c: 0x0  nop
    ctx->pc = 0x1a031cu;
    // NOP
    ctx->pc = 0x1a0320u;
}
