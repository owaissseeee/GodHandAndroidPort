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

// Function: cOmSized_start
// Address: 0x1b0bd0 - 0x1b0c78
void cOmSized_start_0x1b0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSized_start_0x1b0bd0");
#endif

    switch (ctx->pc) {
        case 0x1b0be4u: goto label_1b0be4;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c54u: goto label_1b0c54;
        default: break;
    }

    ctx->pc = 0x1b0bd0u;

    // 0x1b0bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0bd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b0bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b0bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0bdc: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B0BDCu;
    SET_GPR_U32(ctx, 31, 0x1B0BE4u);
    ctx->pc = 0x1B0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BDCu;
    // 0x1b0be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B0BDCu, 0x1B0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BE4u;
label_1b0be4:
    // 0x1b0be4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b0be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b0be8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b0be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b0bec: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x1b0becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1b0bf0: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1b0bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x1b0bf4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b0bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b0bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b0bfc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b0bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b0c00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b0c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b0c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0c08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b0c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0c10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b0c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b0c14: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1b0c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b0c18: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1b0c18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b0c1c: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0C1Cu;
    {
        const bool branch_taken_0x1b0c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1B0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C1Cu;
        // 0x1b0c20: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c1c) {
            ctx->pc = 0x1B0C34u;
            goto label_1b0c34;
        }
    }
    ctx->pc = 0x1B0C24u;
    // 0x1b0c24: 0xe6030600  swc1        $f3, 0x600($s0)
    ctx->pc = 0x1b0c24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x1b0c28: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b0c2c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0c30: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b0c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b0c34:
    // 0x1b0c34: 0xc06f680  jal         func_1BDA00
    ctx->pc = 0x1B0C34u;
    SET_GPR_U32(ctx, 31, 0x1B0C3Cu);
    ctx->pc = 0x1B0C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C34u;
    // 0x1b0c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA00u, 0x1B0C34u, 0x1B0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C3Cu;
label_1b0c3c:
    // 0x1b0c3c: 0xc06f5a6  jal         func_1BD698
    ctx->pc = 0x1B0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C44u);
    ctx->pc = 0x1B0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C3Cu;
    // 0x1b0c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD698u, 0x1B0C3Cu, 0x1B0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C44u;
label_1b0c44:
    // 0x1b0c44: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b0c48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0c4c: 0xc06f762  jal         func_1BDD88
    ctx->pc = 0x1B0C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C54u);
    ctx->pc = 0x1B0C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C4Cu;
    // 0x1b0c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD88u, 0x1B0C4Cu, 0x1B0C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C54u;
label_1b0c54:
    // 0x1b0c54: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x1b0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x1b0c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0c60: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1b0c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1b0c64: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x1b0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x1b0c68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b0c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C6Cu;
        // 0x1b0c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0C74u;
    // 0x1b0c74: 0x0  nop
    ctx->pc = 0x1b0c74u;
    // NOP
    ctx->pc = 0x1b0c78u;
}
