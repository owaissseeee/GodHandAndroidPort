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

// Function: cOmSized_startLarge
// Address: 0x171b70 - 0x171c20
void cOmSized_startLarge_0x171b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSized_startLarge_0x171b70");
#endif

    switch (ctx->pc) {
        case 0x171b88u: goto label_171b88;
        case 0x171be4u: goto label_171be4;
        case 0x171becu: goto label_171bec;
        case 0x171bf8u: goto label_171bf8;
        default: break;
    }

    ctx->pc = 0x171b70u;

    // 0x171b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171b74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x171b78: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x171b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x171b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171b80: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x171B80u;
    SET_GPR_U32(ctx, 31, 0x171B88u);
    ctx->pc = 0x171B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B80u;
    // 0x171b84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x171B80u, 0x171B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B88u;
label_171b88:
    // 0x171b88: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x171b8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x171b90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171b94: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x171b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x171b98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x171b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x171b9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x171b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171ba0: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x171ba4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x171ba8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x171bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171bb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171bb8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x171bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x171bbc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x171bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x171bc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x171bc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x171bc4: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x171BC4u;
    {
        const bool branch_taken_0x171bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x171BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BC4u;
        // 0x171bc8: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bc4) {
            ctx->pc = 0x171BDCu;
            goto label_171bdc;
        }
    }
    ctx->pc = 0x171BCCu;
    // 0x171bcc: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x171bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x171bd0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x171bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x171bd4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x171bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171bd8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x171bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_171bdc:
    // 0x171bdc: 0xc06f680  jal         func_1BDA00
    ctx->pc = 0x171BDCu;
    SET_GPR_U32(ctx, 31, 0x171BE4u);
    ctx->pc = 0x171BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BDCu;
    // 0x171be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA00u, 0x171BDCu, 0x171BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BE4u;
label_171be4:
    // 0x171be4: 0xc06f5a6  jal         func_1BD698
    ctx->pc = 0x171BE4u;
    SET_GPR_U32(ctx, 31, 0x171BECu);
    ctx->pc = 0x171BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BE4u;
    // 0x171be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD698u, 0x171BE4u, 0x171BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BECu;
label_171bec:
    // 0x171bec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171becu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x171bf0: 0xc06f762  jal         func_1BDD88
    ctx->pc = 0x171BF0u;
    SET_GPR_U32(ctx, 31, 0x171BF8u);
    ctx->pc = 0x171BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BF0u;
    // 0x171bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD88u, 0x171BF0u, 0x171BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BF8u;
label_171bf8:
    // 0x171bf8: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x171bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x171bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171c04: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x171c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x171c08: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x171c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171c0c: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x171c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x171c10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171c14: 0x3e00008  jr          $ra
    ctx->pc = 0x171C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C14u;
        // 0x171c18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C1Cu;
    // 0x171c1c: 0x0  nop
    ctx->pc = 0x171c1cu;
    // NOP
    ctx->pc = 0x171c20u;
}
