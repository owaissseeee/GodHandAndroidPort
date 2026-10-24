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

// Function: func_00305E88
// Address: 0x305e88 - 0x305f58
void func_00305E88_0x305e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305E88_0x305e88");
#endif

    switch (ctx->pc) {
        case 0x305f48u: goto label_305f48;
        default: break;
    }

    ctx->pc = 0x305e88u;

    // 0x305e88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x305e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x305e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305e90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x305e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x305e94: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x305e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x305e98: 0x8c860414  lw          $a2, 0x414($a0)
    ctx->pc = 0x305e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
    // 0x305e9c: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x305e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x305ea0: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x305EA0u;
    {
        const bool branch_taken_0x305ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x305EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EA0u;
        // 0x305ea4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ea0) {
            ctx->pc = 0x305F4Cu;
            goto label_305f4c;
        }
    }
    ctx->pc = 0x305EA8u;
    // 0x305ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x305eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305eb0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x305eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x305eb4: 0xac820414  sw          $v0, 0x414($a0)
    ctx->pc = 0x305eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1044), GPR_U32(ctx, 2));
    // 0x305eb8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x305eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x305ebc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x305ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x305ec0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x305ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x305ec4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x305ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x305ec8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x305ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x305ecc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x305eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x305ed0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x305ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305ed4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x305ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x305ed8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x305ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x305edc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x305edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305ee0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x305ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x305ee4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x305ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x305ee8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x305ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x305eec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x305eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x305ef0: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x305ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x305ef4: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x305ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x305ef8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x305ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x305efc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x305efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x305f00: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x305f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f04: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x305f04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f08: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x305f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x305f0c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x305f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x305f10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x305f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x305f14: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x305f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x305f18: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x305f18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x305f1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x305f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305f20: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x305f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x305f24: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x305f24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x305f28: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x305f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x305f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f30: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x305f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x305f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f38: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x305f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x305f3c: 0x24a82200  addiu       $t0, $a1, 0x2200
    ctx->pc = 0x305f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
    // 0x305f40: 0xc0c194a  jal         func_306528
    ctx->pc = 0x305F40u;
    SET_GPR_U32(ctx, 31, 0x305F48u);
    ctx->pc = 0x305F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F40u;
    // 0x305f44: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x305F40u, 0x305F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F48u;
label_305f48:
    // 0x305f48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x305f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_305f4c:
    // 0x305f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x305F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F4Cu;
        // 0x305f50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305F54u;
    // 0x305f54: 0x0  nop
    ctx->pc = 0x305f54u;
    // NOP
    ctx->pc = 0x305f58u;
}
