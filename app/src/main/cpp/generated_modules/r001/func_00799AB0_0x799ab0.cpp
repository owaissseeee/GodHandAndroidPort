#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: func_00799AB0
// Address: 0x799ab0 - 0x799b78
void func_00799AB0_0x799ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799AB0_0x799ab0");
#endif

    switch (ctx->pc) {
        case 0x799ac0u: goto label_799ac0;
        case 0x799b6cu: goto label_799b6c;
        default: break;
    }

    ctx->pc = 0x799ab0u;

    // 0x799ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799ab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x799ab8: 0xc1e6712  jal         func_799C48
    ctx->pc = 0x799AB8u;
    SET_GPR_U32(ctx, 31, 0x799AC0u);
    ctx->pc = 0x799C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C48u, 0x799AB8u, 0x799AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC0u;
label_799ac0:
    // 0x799ac0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x799ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799ac8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799ad0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799ad4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x799ad8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x799adc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799ae0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799ae4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x799ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799ae8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x799aec: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x799aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799af0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799af4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x799af8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799afc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x799afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x799b00: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x799b00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x799b04: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x799b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799b08: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b0c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x799b10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799b14: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x799b14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799b18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x799b1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x799b20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x799b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799b24: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799b28: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x799b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799b30: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x799b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799b34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x799b38: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x799b3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x799b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799b40: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799b44: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x799b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799b48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x799b4c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x799b50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x799b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b54: 0x8c82af00  lw          $v0, -0x5100($a0)
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AF00u));
    // 0x799b58: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799b5c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x799b5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799b60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x799b64: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799B64u;
    SET_GPR_U32(ctx, 31, 0x799B6Cu);
    ctx->pc = 0x799B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B64u;
    // 0x799b68: 0x3a63021  addu        $a2, $sp, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799B64u, 0x799B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b70: 0x3e00008  jr          $ra
    ctx->pc = 0x799B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B70u;
        // 0x799b74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B78u;
}
} // namespace gh_r001
