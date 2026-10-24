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

// Function: func_00323BE0
// Address: 0x323be0 - 0x323cf0
void func_00323BE0_0x323be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323BE0_0x323be0");
#endif

    switch (ctx->pc) {
        case 0x323c08u: goto label_323c08;
        case 0x323c1cu: goto label_323c1c;
        case 0x323c24u: goto label_323c24;
        case 0x323c70u: goto label_323c70;
        case 0x323c7cu: goto label_323c7c;
        case 0x323c88u: goto label_323c88;
        case 0x323ca0u: goto label_323ca0;
        case 0x323cacu: goto label_323cac;
        case 0x323cb8u: goto label_323cb8;
        case 0x323cc4u: goto label_323cc4;
        default: break;
    }

    ctx->pc = 0x323be0u;

    // 0x323be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323bf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x323bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x323bf8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x323bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x323c00: 0xc0ca026  jal         func_328098
    ctx->pc = 0x323C00u;
    SET_GPR_U32(ctx, 31, 0x323C08u);
    ctx->pc = 0x323C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C00u;
    // 0x323c04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x323C00u, 0x323C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C08u;
label_323c08:
    // 0x323c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323c0c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x323C0Cu;
    {
        const bool branch_taken_0x323c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x323c0c) {
            ctx->pc = 0x323C1Cu;
            goto label_323c1c;
        }
    }
    ctx->pc = 0x323C14u;
    // 0x323c14: 0xc0ca0da  jal         func_328368
    ctx->pc = 0x323C14u;
    SET_GPR_U32(ctx, 31, 0x323C1Cu);
    ctx->pc = 0x323C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C14u;
    // 0x323c18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328368u, 0x323C14u, 0x323C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C1Cu;
label_323c1c:
    // 0x323c1c: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x323C1Cu;
    SET_GPR_U32(ctx, 31, 0x323C24u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x323C1Cu, 0x323C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C24u;
label_323c24:
    // 0x323c24: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x323c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x323c28: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x323c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x323c2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x323c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323c30: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x323c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x323c34: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x323c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x323c38: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x323c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x323c3c: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x323c3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x323c40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x323c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x323c44: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x323c44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x323c48: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x323c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x323c4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x323C4Cu;
    {
        const bool branch_taken_0x323c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C4Cu;
        // 0x323c50: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c4c) {
            ctx->pc = 0x323C68u;
            goto label_323c68;
        }
    }
    ctx->pc = 0x323C54u;
    // 0x323c54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x323c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323c58: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x323c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x323c5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x323C5Cu;
    {
        const bool branch_taken_0x323c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C5Cu;
        // 0x323c60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c5c) {
            ctx->pc = 0x323CBCu;
            goto label_323cbc;
        }
    }
    ctx->pc = 0x323C64u;
    // 0x323c64: 0x0  nop
    ctx->pc = 0x323c64u;
    // NOP
label_323c68:
    // 0x323c68: 0xc0ca112  jal         func_328448
    ctx->pc = 0x323C68u;
    SET_GPR_U32(ctx, 31, 0x323C70u);
    ctx->pc = 0x323C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C68u;
    // 0x323c6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x323C68u, 0x323C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C70u;
label_323c70:
    // 0x323c70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323c74: 0xc0ca38e  jal         func_328E38
    ctx->pc = 0x323C74u;
    SET_GPR_U32(ctx, 31, 0x323C7Cu);
    ctx->pc = 0x323C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C74u;
    // 0x323c78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328E38u, 0x323C74u, 0x323C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C7Cu;
label_323c7c:
    // 0x323c7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323c80: 0xc0ca33a  jal         func_328CE8
    ctx->pc = 0x323C80u;
    SET_GPR_U32(ctx, 31, 0x323C88u);
    ctx->pc = 0x323C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C80u;
    // 0x323c84: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328CE8u, 0x323C80u, 0x323C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C88u;
label_323c88:
    // 0x323c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x323c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x323c8c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x323c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x323c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323c98: 0xc0ca376  jal         func_328DD8
    ctx->pc = 0x323C98u;
    SET_GPR_U32(ctx, 31, 0x323CA0u);
    ctx->pc = 0x323C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C98u;
    // 0x323c9c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328DD8u, 0x323C98u, 0x323CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CA0u;
label_323ca0:
    // 0x323ca0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323ca4: 0xc0ca036  jal         func_3280D8
    ctx->pc = 0x323CA4u;
    SET_GPR_U32(ctx, 31, 0x323CACu);
    ctx->pc = 0x323CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CA4u;
    // 0x323ca8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x323CA4u, 0x323CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CACu;
label_323cac:
    // 0x323cac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323cb0: 0xc0ca090  jal         func_328240
    ctx->pc = 0x323CB0u;
    SET_GPR_U32(ctx, 31, 0x323CB8u);
    ctx->pc = 0x323CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323CB0u;
    // 0x323cb4: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328240u, 0x323CB0u, 0x323CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CB8u;
label_323cb8:
    // 0x323cb8: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x323cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_323cbc:
    // 0x323cbc: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x323CBCu;
    SET_GPR_U32(ctx, 31, 0x323CC4u);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x323CBCu, 0x323CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323CC4u;
label_323cc4:
    // 0x323cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323cc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323cd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323cd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x323cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x323cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x323CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CD8u;
        // 0x323cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323CE0u;
    // 0x323ce0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x323ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x323ce4: 0x0  nop
    ctx->pc = 0x323ce4u;
    // NOP
    // 0x323ce8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x323ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x323cec: 0x0  nop
    ctx->pc = 0x323cecu;
    // NOP
    ctx->pc = 0x323cf0u;
}
