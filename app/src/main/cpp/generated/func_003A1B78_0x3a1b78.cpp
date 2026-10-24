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

// Function: func_003A1B78
// Address: 0x3a1b78 - 0x3a1c78
void func_003A1B78_0x3a1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A1B78_0x3a1b78");
#endif

    switch (ctx->pc) {
        case 0x3a1b94u: goto label_3a1b94;
        case 0x3a1bb0u: goto label_3a1bb0;
        case 0x3a1bc0u: goto label_3a1bc0;
        case 0x3a1bf4u: goto label_3a1bf4;
        case 0x3a1c14u: goto label_3a1c14;
        case 0x3a1c24u: goto label_3a1c24;
        case 0x3a1c40u: goto label_3a1c40;
        case 0x3a1c50u: goto label_3a1c50;
        default: break;
    }

    ctx->pc = 0x3a1b78u;

    // 0x3a1b78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a1b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a1b7c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3a1b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3a1b80: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a1b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a1b84: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x3a1b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3a1b88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a1b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a1b8c: 0xc0e8956  jal         func_3A2558
    ctx->pc = 0x3A1B8Cu;
    SET_GPR_U32(ctx, 31, 0x3A1B94u);
    ctx->pc = 0x3A1B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B8Cu;
    // 0x3a1b90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2558u, 0x3A1B8Cu, 0x3A1B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B94u;
label_3a1b94:
    // 0x3a1b94: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a1b98: 0x8c50f024  lw          $s0, -0xFDC($v0)
    ctx->pc = 0x3a1b98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x45F024u));
    // 0x3a1b9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a1ba0: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3A1BA0u;
    {
        const bool branch_taken_0x3a1ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BA0u;
        // 0x3a1ba4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ba0) {
            ctx->pc = 0x3A1C58u;
            goto label_3a1c58;
        }
    }
    ctx->pc = 0x3A1BA8u;
    // 0x3a1ba8: 0xc0e9380  jal         func_3A4E00
    ctx->pc = 0x3A1BA8u;
    SET_GPR_U32(ctx, 31, 0x3A1BB0u);
    ctx->pc = 0x3A1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BA8u;
    // 0x3a1bac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E00u, 0x3A1BA8u, 0x3A1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BB0u;
label_3a1bb0:
    // 0x3a1bb0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A1BB0u;
    {
        const bool branch_taken_0x3a1bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BB0u;
        // 0x3a1bb4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bb0) {
            ctx->pc = 0x3A1C5Cu;
            goto label_3a1c5c;
        }
    }
    ctx->pc = 0x3A1BB8u;
    // 0x3a1bb8: 0xc0e8676  jal         func_3A19D8
    ctx->pc = 0x3A1BB8u;
    SET_GPR_U32(ctx, 31, 0x3A1BC0u);
    ctx->pc = 0x3A1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BB8u;
    // 0x3a1bbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19D8u, 0x3A1BB8u, 0x3A1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BC0u;
label_3a1bc0:
    // 0x3a1bc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a1bc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a1bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1bc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a1bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1bcc: 0x0  nop
    ctx->pc = 0x3a1bccu;
    // NOP
    // 0x3a1bd0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x3A1BD0u;
    {
        const bool branch_taken_0x3a1bd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1BD0u;
        // 0x3a1bd4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1bd0) {
            ctx->pc = 0x3A1C58u;
            goto label_3a1c58;
        }
    }
    ctx->pc = 0x3A1BD8u;
    // 0x3a1bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1bdc: 0x2442ea68  addiu       $v0, $v0, -0x1598
    ctx->pc = 0x3a1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961768));
    // 0x3a1be0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a1be4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a1be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a1be8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1bec: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1BECu;
    SET_GPR_U32(ctx, 31, 0x3A1BF4u);
    ctx->pc = 0x3A1BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BECu;
    // 0x3a1bf0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1BECu, 0x3A1BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BF4u;
label_3a1bf4:
    // 0x3a1bf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a1bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1bf8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3a1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3a1bfc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3a1bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x3a1c00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a1c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1c04: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1C04u;
    {
        const bool branch_taken_0x3a1c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C04u;
        // 0x3a1c08: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c04) {
            ctx->pc = 0x3A1C1Cu;
            goto label_3a1c1c;
        }
    }
    ctx->pc = 0x3A1C0Cu;
    // 0x3a1c0c: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A1C0Cu;
    SET_GPR_U32(ctx, 31, 0x3A1C14u);
    ctx->pc = 0x3A1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C0Cu;
    // 0x3a1c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A1C0Cu, 0x3A1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C14u;
label_3a1c14:
    // 0x3a1c14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1C14u;
    {
        const bool branch_taken_0x3a1c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C14u;
        // 0x3a1c18: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c14) {
            ctx->pc = 0x3A1C30u;
            goto label_3a1c30;
        }
    }
    ctx->pc = 0x3A1C1Cu;
label_3a1c1c:
    // 0x3a1c1c: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1C1Cu;
    SET_GPR_U32(ctx, 31, 0x3A1C24u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1C1Cu, 0x3A1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C24u;
label_3a1c24:
    // 0x3a1c24: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3a1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3a1c28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3a1c2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1c30:
    // 0x3a1c30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1C30u;
    {
        const bool branch_taken_0x3a1c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1c30) {
            ctx->pc = 0x3A1C48u;
            goto label_3a1c48;
        }
    }
    ctx->pc = 0x3A1C38u;
    // 0x3a1c38: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A1C38u;
    SET_GPR_U32(ctx, 31, 0x3A1C40u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A1C38u, 0x3A1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C40u;
label_3a1c40:
    // 0x3a1c40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1c44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a1c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a1c48:
    // 0x3a1c48: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A1C48u;
    SET_GPR_U32(ctx, 31, 0x3A1C50u);
    ctx->pc = 0x3A1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C48u;
    // 0x3a1c4c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A1C48u, 0x3A1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C50u;
label_3a1c50:
    // 0x3a1c50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1C50u;
    {
        const bool branch_taken_0x3a1c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C50u;
        // 0x3a1c54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c50) {
            ctx->pc = 0x3A1C60u;
            goto label_3a1c60;
        }
    }
    ctx->pc = 0x3A1C58u;
label_3a1c58:
    // 0x3a1c58: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3a1c58u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_3a1c5c:
    // 0x3a1c5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a1c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1c60:
    // 0x3a1c60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a1c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a1c64: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x3a1c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a1c68: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3a1c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C6Cu;
        // 0x3a1c70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1C74u;
    // 0x3a1c74: 0x0  nop
    ctx->pc = 0x3a1c74u;
    // NOP
    ctx->pc = 0x3a1c78u;
}
