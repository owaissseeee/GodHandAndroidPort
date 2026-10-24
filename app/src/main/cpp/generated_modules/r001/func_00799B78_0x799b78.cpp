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
// Function: func_00799B78
// Address: 0x799b78 - 0x799c48
void func_00799B78_0x799b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B78_0x799b78");
#endif

    switch (ctx->pc) {
        case 0x799b88u: goto label_799b88;
        case 0x799c3cu: goto label_799c3c;
        default: break;
    }

    ctx->pc = 0x799b78u;

    // 0x799b78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799b7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x799b80: 0xc1e6712  jal         func_799C48
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C48u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x799b8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799b90: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799b94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799b98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799b9c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x799ba0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x799ba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799ba8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799bac: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x799bb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799bb4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x799bb8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799bbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799bc0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x799bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bc8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x799bcc: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x799bd0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x799bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x799bd4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bd8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x799bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799bdc: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x799bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799be0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x799be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799be4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x799be8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x799bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799bf0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799bf4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x799bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799bf8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799bfc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x799bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799c00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x799c04: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x799c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799c0c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799c10: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x799c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799c14: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x799c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799c18: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799c1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x799c20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x799c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799c24: 0x8c82af00  lw          $v0, -0x5100($a0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AF00u));
    // 0x799c28: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799c2c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x799c2cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x799c30: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x799c34: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799C34u;
    SET_GPR_U32(ctx, 31, 0x799C3Cu);
    ctx->pc = 0x799C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C34u;
    // 0x799c38: 0x3a63021  addu        $a2, $sp, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799C34u, 0x799C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C3Cu;
label_799c3c:
    // 0x799c3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c40: 0x3e00008  jr          $ra
    ctx->pc = 0x799C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C40u;
        // 0x799c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C48u;
}
} // namespace gh_r001
