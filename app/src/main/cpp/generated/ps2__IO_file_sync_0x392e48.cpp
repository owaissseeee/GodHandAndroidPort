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

// Function: _IO_file_sync
// Address: 0x392e48 - 0x392f00
void ps2__IO_file_sync_0x392e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_sync_0x392e48");
#endif

    switch (ctx->pc) {
        case 0x392e48u: goto label_392e48;
        case 0x392e4cu: goto label_392e4c;
        case 0x392e50u: goto label_392e50;
        case 0x392e54u: goto label_392e54;
        case 0x392e58u: goto label_392e58;
        case 0x392e5cu: goto label_392e5c;
        case 0x392e60u: goto label_392e60;
        case 0x392e64u: goto label_392e64;
        case 0x392e68u: goto label_392e68;
        case 0x392e6cu: goto label_392e6c;
        case 0x392e70u: goto label_392e70;
        case 0x392e74u: goto label_392e74;
        case 0x392e78u: goto label_392e78;
        case 0x392e7cu: goto label_392e7c;
        case 0x392e80u: goto label_392e80;
        case 0x392e84u: goto label_392e84;
        case 0x392e88u: goto label_392e88;
        case 0x392e8cu: goto label_392e8c;
        case 0x392e90u: goto label_392e90;
        case 0x392e94u: goto label_392e94;
        case 0x392e98u: goto label_392e98;
        case 0x392e9cu: goto label_392e9c;
        case 0x392ea0u: goto label_392ea0;
        case 0x392ea4u: goto label_392ea4;
        case 0x392ea8u: goto label_392ea8;
        case 0x392eacu: goto label_392eac;
        case 0x392eb0u: goto label_392eb0;
        case 0x392eb4u: goto label_392eb4;
        case 0x392eb8u: goto label_392eb8;
        case 0x392ebcu: goto label_392ebc;
        case 0x392ec0u: goto label_392ec0;
        case 0x392ec4u: goto label_392ec4;
        case 0x392ec8u: goto label_392ec8;
        case 0x392eccu: goto label_392ecc;
        case 0x392ed0u: goto label_392ed0;
        case 0x392ed4u: goto label_392ed4;
        case 0x392ed8u: goto label_392ed8;
        case 0x392edcu: goto label_392edc;
        case 0x392ee0u: goto label_392ee0;
        case 0x392ee4u: goto label_392ee4;
        case 0x392ee8u: goto label_392ee8;
        case 0x392eecu: goto label_392eec;
        case 0x392ef0u: goto label_392ef0;
        case 0x392ef4u: goto label_392ef4;
        case 0x392ef8u: goto label_392ef8;
        case 0x392efcu: goto label_392efc;
        default: break;
    }

    ctx->pc = 0x392e48u;

label_392e48:
    // 0x392e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x392e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_392e4c:
    // 0x392e4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x392e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_392e50:
    // 0x392e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_392e54:
    // 0x392e54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x392e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_392e58:
    // 0x392e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392e5c:
    // 0x392e5c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x392e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_392e60:
    // 0x392e60: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x392e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_392e64:
    // 0x392e64: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x392e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_392e68:
    // 0x392e68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_392e6c:
    if (ctx->pc == 0x392E6Cu) {
        ctx->pc = 0x392E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E68u;
        // 0x392e6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E70u;
        goto label_392e70;
    }
    ctx->pc = 0x392E68u;
    {
        const bool branch_taken_0x392e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E68u;
        // 0x392e6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e68) {
            ctx->pc = 0x392E80u;
            goto label_392e80;
        }
    }
    ctx->pc = 0x392E70u;
label_392e70:
    // 0x392e70: 0xc0e4aa0  jal         func_392A80
label_392e74:
    if (ctx->pc == 0x392E74u) {
        ctx->pc = 0x392E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E70u;
        // 0x392e74: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E78u;
        goto label_392e78;
    }
    ctx->pc = 0x392E70u;
    SET_GPR_U32(ctx, 31, 0x392E78u);
    ctx->pc = 0x392E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E70u;
    // 0x392e74: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x392E70u, 0x392E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E78u;
label_392e78:
    // 0x392e78: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_392e7c:
    if (ctx->pc == 0x392E7Cu) {
        ctx->pc = 0x392E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E78u;
        // 0x392e7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E80u;
        goto label_392e80;
    }
    ctx->pc = 0x392E78u;
    {
        const bool branch_taken_0x392e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E78u;
        // 0x392e7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e78) {
            ctx->pc = 0x392EECu;
            goto label_392eec;
        }
    }
    ctx->pc = 0x392E80u;
label_392e80:
    // 0x392e80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x392e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392e84:
    // 0x392e84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x392e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392e88:
    // 0x392e88: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x392e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_392e8c:
    // 0x392e8c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_392e90:
    if (ctx->pc == 0x392E90u) {
        ctx->pc = 0x392E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E8Cu;
        // 0x392e90: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E94u;
        goto label_392e94;
    }
    ctx->pc = 0x392E8Cu;
    {
        const bool branch_taken_0x392e8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E8Cu;
        // 0x392e90: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e8c) {
            ctx->pc = 0x392ED8u;
            goto label_392ed8;
        }
    }
    ctx->pc = 0x392E94u;
label_392e94:
    // 0x392e94: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x392e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_392e98:
    // 0x392e98: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x392e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_392e9c:
    // 0x392e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392ea0:
    // 0x392ea0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x392ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_392ea4:
    // 0x392ea4: 0x40f809  jalr        $v0
label_392ea8:
    if (ctx->pc == 0x392EA8u) {
        ctx->pc = 0x392EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EA4u;
        // 0x392ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EACu;
        goto label_392eac;
    }
    ctx->pc = 0x392EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392EACu);
        ctx->pc = 0x392EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EA4u;
        // 0x392ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392EA4u, 0x392EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392EACu;
label_392eac:
    // 0x392eac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x392eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392eb0:
    // 0x392eb0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_392eb4:
    if (ctx->pc == 0x392EB4u) {
        ctx->pc = 0x392EB8u;
        goto label_392eb8;
    }
    ctx->pc = 0x392EB0u;
    {
        const bool branch_taken_0x392eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x392eb0) {
            ctx->pc = 0x392EC4u;
            goto label_392ec4;
        }
    }
    ctx->pc = 0x392EB8u;
label_392eb8:
    // 0x392eb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x392eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392ebc:
    // 0x392ebc: 0x10000006  b           . + 4 + (0x6 << 2)
label_392ec0:
    if (ctx->pc == 0x392EC0u) {
        ctx->pc = 0x392EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EBCu;
        // 0x392ec0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EC4u;
        goto label_392ec4;
    }
    ctx->pc = 0x392EBCu;
    {
        const bool branch_taken_0x392ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EBCu;
        // 0x392ec0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ebc) {
            ctx->pc = 0x392ED8u;
            goto label_392ed8;
        }
    }
    ctx->pc = 0x392EC4u;
label_392ec4:
    // 0x392ec4: 0xc0e93ee  jal         func_3A4FB8
label_392ec8:
    if (ctx->pc == 0x392EC8u) {
        ctx->pc = 0x392EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EC4u;
        // 0x392ec8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392ECCu;
        goto label_392ecc;
    }
    ctx->pc = 0x392EC4u;
    SET_GPR_U32(ctx, 31, 0x392ECCu);
    ctx->pc = 0x392EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392EC4u;
    // 0x392ec8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x392EC4u, 0x392ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392ECCu;
label_392ecc:
    // 0x392ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x392eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_392ed0:
    // 0x392ed0: 0x3863001d  xori        $v1, $v1, 0x1D
    ctx->pc = 0x392ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)29);
label_392ed4:
    // 0x392ed4: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x392ed4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_392ed8:
    // 0x392ed8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x392ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392edc:
    // 0x392edc: 0x12220002  beq         $s1, $v0, . + 4 + (0x2 << 2)
label_392ee0:
    if (ctx->pc == 0x392EE0u) {
        ctx->pc = 0x392EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EDCu;
        // 0x392ee0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EE4u;
        goto label_392ee4;
    }
    ctx->pc = 0x392EDCu;
    {
        const bool branch_taken_0x392edc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x392EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EDCu;
        // 0x392ee0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392edc) {
            ctx->pc = 0x392EE8u;
            goto label_392ee8;
        }
    }
    ctx->pc = 0x392EE4u;
label_392ee4:
    // 0x392ee4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x392ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_392ee8:
    // 0x392ee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x392ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392eec:
    // 0x392eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392ef0:
    // 0x392ef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x392ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_392ef4:
    // 0x392ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_392ef8:
    // 0x392ef8: 0x3e00008  jr          $ra
label_392efc:
    if (ctx->pc == 0x392EFCu) {
        ctx->pc = 0x392EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EF8u;
        // 0x392efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F00u;
        goto label_fallthrough_0x392ef8;
    }
    ctx->pc = 0x392EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EF8u;
        // 0x392efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x392ef8:
    ctx->pc = 0x392F00u;
}
