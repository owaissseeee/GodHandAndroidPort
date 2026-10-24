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

// Function: func_0016FD68
// Address: 0x16fd68 - 0x16fe48
void func_0016FD68_0x16fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016FD68_0x16fd68");
#endif

    switch (ctx->pc) {
        case 0x16fd80u: goto label_16fd80;
        case 0x16fdacu: goto label_16fdac;
        case 0x16fdf0u: goto label_16fdf0;
        case 0x16fe30u: goto label_16fe30;
        default: break;
    }

    ctx->pc = 0x16fd68u;

    // 0x16fd68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16fd6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16fd70: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x16fd70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16fd74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16fd78: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x16FD78u;
    SET_GPR_U32(ctx, 31, 0x16FD80u);
    ctx->pc = 0x16FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD78u;
    // 0x16fd7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x16FD78u, 0x16FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD80u;
label_16fd80:
    // 0x16fd80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16fd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16fd84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16fd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16fd88: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x16fd8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16fd90: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x16fd94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x16fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x16fd98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x16fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x16fd9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fda0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x16fda0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16fda4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x16FDA4u;
    SET_GPR_U32(ctx, 31, 0x16FDACu);
    ctx->pc = 0x16FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDA4u;
    // 0x16fda8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x16FDA4u, 0x16FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDACu;
label_16fdac:
    // 0x16fdac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16fdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdb0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16FDB0u;
    {
        const bool branch_taken_0x16fdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDB0u;
        // 0x16fdb4: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdb0) {
            ctx->pc = 0x16FDF0u;
            goto label_16fdf0;
        }
    }
    ctx->pc = 0x16FDB8u;
    // 0x16fdb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x16fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16fdbc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x16fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x16fdc0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x16fdc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16fdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x16fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x16fdcc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x16fdd0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x16fdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x16fdd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16fdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16fdd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16fdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fddc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x16fddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x16fde0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x16fde0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x16fde4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16fde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16fde8: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x16FDE8u;
    SET_GPR_U32(ctx, 31, 0x16FDF0u);
    ctx->pc = 0x16FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDE8u;
    // 0x16fdec: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x16FDE8u, 0x16FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDF0u;
label_16fdf0:
    // 0x16fdf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fdf4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fdf8: 0x26020620  addiu       $v0, $s0, 0x620
    ctx->pc = 0x16fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x16fdfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16fe00: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x16fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x16fe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe08: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x16fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x16fe0c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x16fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x16fe10: 0xae0005ec  sw          $zero, 0x5EC($s0)
    ctx->pc = 0x16fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
    // 0x16fe14: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x16fe14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x16fe18: 0xa203060c  sb          $v1, 0x60C($s0)
    ctx->pc = 0x16fe18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 3));
    // 0x16fe1c: 0xa60605f6  sh          $a2, 0x5F6($s0)
    ctx->pc = 0x16fe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 6));
    // 0x16fe20: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x16fe20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x16fe24: 0xa60605f4  sh          $a2, 0x5F4($s0)
    ctx->pc = 0x16fe24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 6));
    // 0x16fe28: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x16FE28u;
    SET_GPR_U32(ctx, 31, 0x16FE30u);
    ctx->pc = 0x16FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE28u;
    // 0x16fe2c: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x16FE28u, 0x16FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE30u;
label_16fe30:
    // 0x16fe30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16fe30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fe34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fe38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16fe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fe3c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x16fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x16FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE40u;
        // 0x16fe44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE48u;
}
