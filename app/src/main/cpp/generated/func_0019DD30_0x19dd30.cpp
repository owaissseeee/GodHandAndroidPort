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

// Function: func_0019DD30
// Address: 0x19dd30 - 0x19de60
void func_0019DD30_0x19dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019DD30_0x19dd30");
#endif

    switch (ctx->pc) {
        case 0x19dd50u: goto label_19dd50;
        case 0x19ddccu: goto label_19ddcc;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de40u: goto label_19de40;
        default: break;
    }

    ctx->pc = 0x19dd30u;

    // 0x19dd30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19dd34: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19dd38: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19dd3c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19dd40: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19dd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19dd44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19dd48: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19DD48u;
    SET_GPR_U32(ctx, 31, 0x19DD50u);
    ctx->pc = 0x19DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DD48u;
    // 0x19dd4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19DD48u, 0x19DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD50u;
label_19dd50:
    // 0x19dd50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19dd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19dd54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19dd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19dd58: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19dd5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19dd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19dd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19dd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dd64: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19dd64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19dd68: 0x3c014093  lui         $at, 0x4093
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16531 << 16));
    // 0x19dd6c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19dd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19dd70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19dd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19dd74: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19dd74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19dd78: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19dd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19dd7c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19dd80: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19dd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19dd84: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19dd88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19dd8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19dd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19dd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19dd94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19dd98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19dd98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19dd9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19dd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19dda0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19dda0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19dda4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19dda4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19dda8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19dda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19ddac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ddacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ddb0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ddb4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19ddb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19ddb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19ddbc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19ddc0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19ddc4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19DDC4u;
    SET_GPR_U32(ctx, 31, 0x19DDCCu);
    ctx->pc = 0x19DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDC4u;
    // 0x19ddc8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19DDC4u, 0x19DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDCCu;
label_19ddcc:
    // 0x19ddcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19DDCCu;
    {
        const bool branch_taken_0x19ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDCCu;
        // 0x19ddd0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddcc) {
            ctx->pc = 0x19DDFCu;
            goto label_19ddfc;
        }
    }
    ctx->pc = 0x19DDD4u;
    // 0x19ddd4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19ddd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ddd8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19dddc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19dde0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19dde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dde4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19dde8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19dde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddec: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19ddecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19ddf0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19ddf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddf4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19DDF4u;
    SET_GPR_U32(ctx, 31, 0x19DDFCu);
    ctx->pc = 0x19DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DDF4u;
    // 0x19ddf8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19DDF4u, 0x19DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DDFCu;
label_19ddfc:
    // 0x19ddfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de00: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19de04: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x19de04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19de08: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19de08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19de0c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19de10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19de14: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19de14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19de18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19de18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de1c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19de20: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19de20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19de24: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19de24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19de28: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19de28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19de2c: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19de2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19de30: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19de30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19de34: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19de34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19de38: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19DE38u;
    SET_GPR_U32(ctx, 31, 0x19DE40u);
    ctx->pc = 0x19DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE38u;
    // 0x19de3c: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19DE38u, 0x19DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE40u;
label_19de40:
    // 0x19de40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19de40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19de44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19de48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19de4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19de4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19de50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19de50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19de54: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19de58: 0x3e00008  jr          $ra
    ctx->pc = 0x19DE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE58u;
        // 0x19de5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DE60u;
}
