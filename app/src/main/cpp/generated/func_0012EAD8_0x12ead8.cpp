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

// Function: func_0012EAD8
// Address: 0x12ead8 - 0x12ec58
void func_0012EAD8_0x12ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012EAD8_0x12ead8");
#endif

    switch (ctx->pc) {
        case 0x12eb48u: goto label_12eb48;
        case 0x12eb68u: goto label_12eb68;
        case 0x12eba8u: goto label_12eba8;
        case 0x12ebccu: goto label_12ebcc;
        case 0x12ec0cu: goto label_12ec0c;
        default: break;
    }

    ctx->pc = 0x12ead8u;

    // 0x12ead8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x12eadc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x12eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x12eae0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x12eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x12eae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12eae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eae8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x12eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x12eaec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaf0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x12eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x12eaf4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaf8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x12eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x12eafc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12eafcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12eb04: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x12eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x12eb08: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb0c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x12eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x12eb10: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x12eb10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb14: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x12eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x12eb18: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12eb20: 0xafab0020  sw          $t3, 0x20($sp)
    ctx->pc = 0x12eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 11));
    // 0x12eb24: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x12EB24u;
    {
        const bool branch_taken_0x12eb24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB24u;
        // 0x12eb28: 0x8fb500d0  lw          $s5, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb24) {
            ctx->pc = 0x12EC24u;
            goto label_12ec24;
        }
    }
    ctx->pc = 0x12EB2Cu;
    // 0x12eb2c: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x12eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x12eb30: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12EB30u;
    {
        const bool branch_taken_0x12eb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB30u;
        // 0x12eb34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb30) {
            ctx->pc = 0x12EBC4u;
            goto label_12ebc4;
        }
    }
    ctx->pc = 0x12EB38u;
    // 0x12eb38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12eb3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EB3Cu;
    {
        const bool branch_taken_0x12eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb3c) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB44u;
    // 0x12eb44: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x12eb44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12eb48:
    // 0x12eb48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12eb4c: 0x0  nop
    ctx->pc = 0x12eb4cu;
    // NOP
    // 0x12eb50: 0x0  nop
    ctx->pc = 0x12eb50u;
    // NOP
    // 0x12eb54: 0x0  nop
    ctx->pc = 0x12eb54u;
    // NOP
    // 0x12eb58: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12EB58u;
    {
        const bool branch_taken_0x12eb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eb58) {
            ctx->pc = 0x12EB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EB58u;
            // 0x12eb5c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eb48;
        }
    }
    ctx->pc = 0x12EB60u;
label_12eb60:
    // 0x12eb60: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x12EB60u;
    SET_GPR_U32(ctx, 31, 0x12EB68u);
    ctx->pc = 0x12EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB60u;
    // 0x12eb64: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x12EB60u, 0x12EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB68u;
label_12eb68:
    // 0x12eb68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12eb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb6c: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eb70: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x12eb74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb78: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x12eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x12eb7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12eb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb80: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x12eb84: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12eb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb88: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x12eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12eb8c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x12eb8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb90: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x12eb90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb94: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x12eb94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb98: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x12eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x12eb9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x12eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12eba0: 0xc04b65c  jal         func_12D970
    ctx->pc = 0x12EBA0u;
    SET_GPR_U32(ctx, 31, 0x12EBA8u);
    ctx->pc = 0x12EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EBA0u;
    // 0x12eba4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D970u, 0x12EBA0u, 0x12EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBA8u;
label_12eba8:
    // 0x12eba8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12EBA8u;
    {
        const bool branch_taken_0x12eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBA8u;
        // 0x12ebac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eba8) {
            ctx->pc = 0x12EC24u;
            goto label_12ec24;
        }
    }
    ctx->pc = 0x12EBB0u;
    // 0x12ebb0: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x12ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x12ebb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ebb8: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x12ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    // 0x12ebbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12EBBCu;
    {
        const bool branch_taken_0x12ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBBCu;
        // 0x12ebc0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebbc) {
            ctx->pc = 0x12EC28u;
            goto label_12ec28;
        }
    }
    ctx->pc = 0x12EBC4u;
label_12ebc4:
    // 0x12ebc4: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x12EBC4u;
    SET_GPR_U32(ctx, 31, 0x12EBCCu);
    ctx->pc = 0x12EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EBC4u;
    // 0x12ebc8: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x12EBC4u, 0x12EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBCCu;
label_12ebcc:
    // 0x12ebcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebd0: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x12ebd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ebd4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x12ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x12ebd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12ebd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebdc: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x12ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x12ebe0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12ebe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebe4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x12ebe8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12ebe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x12ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12ebf0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x12ebf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebf4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x12ebf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebf8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x12ebf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebfc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x12ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x12ec00: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x12ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12ec04: 0xc04b65c  jal         func_12D970
    ctx->pc = 0x12EC04u;
    SET_GPR_U32(ctx, 31, 0x12EC0Cu);
    ctx->pc = 0x12EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC04u;
    // 0x12ec08: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D970u, 0x12EC04u, 0x12EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC0Cu;
label_12ec0c:
    // 0x12ec0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EC0Cu;
    {
        const bool branch_taken_0x12ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC0Cu;
        // 0x12ec10: 0xae420190  sw          $v0, 0x190($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec0c) {
            ctx->pc = 0x12EC24u;
            goto label_12ec24;
        }
    }
    ctx->pc = 0x12EC14u;
    // 0x12ec14: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x12ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x12ec18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12ec1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12EC1Cu;
    {
        const bool branch_taken_0x12ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC1Cu;
        // 0x12ec20: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec1c) {
            ctx->pc = 0x12EC28u;
            goto label_12ec28;
        }
    }
    ctx->pc = 0x12EC24u;
label_12ec24:
    // 0x12ec24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ec24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ec28:
    // 0x12ec28: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x12ec28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ec2c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12ec2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12ec30: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x12ec30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12ec34: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x12ec34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12ec38: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x12ec38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12ec3c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x12ec3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12ec40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12ec40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ec44: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x12ec44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ec48: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x12ec48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ec4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ec50: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC50u;
        // 0x12ec54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC58u;
}
